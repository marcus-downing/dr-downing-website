const fs = require('fs');
const path = require('path');
const _ = require('lodash');

const h = require('handlebars');
const layouts = require('handlebars-layouts');

const sass = require('node-sass');
const grayMatter = require('gray-matter');
// const markdown = require( "markdown" ).markdown;
const MarkdownIt = require('markdown-it');
const markdown = new MarkdownIt();



// STYLESHEET

var style_css = path.normalize('../htdocs/style.css');
sass.render({
	file: 'scss/style.scss',
	outFile: style_css,
}, function(err, result) {
	if (err) console.log(err);

	fs.writeFile(style_css, result.css, (err) => {
		console.log("Stylesheet");
	});
});





// Register helpers
h.registerHelper(layouts(h));

// Register partials
h.registerPartial('layout', fs.readFileSync('./templates/layout.html.h', 'utf8'));
h.registerPartial('header', fs.readFileSync('./templates/header.html.h', 'utf8'));
h.registerPartial('footer', fs.readFileSync('./templates/footer.html.h', 'utf8'));
h.registerPartial('title', fs.readFileSync('./templates/title.html.h', 'utf8'));


function autop(content) {
	var paras = content.split(/\n/);
	paras = _.map(paras, para => {
		para = para.trim();
		para = para.replace(/^<p>|<\/p>$/, '');
		return '<p>'+para+'</p>';
	});
	return paras.join("\n");
}

function render(content) {
	// console.log("Content <<", content, ">>");
	content = markdown.render(content);

	content = content.replace(/\[(.*?)\]\(&lt;(.*?)&gt;\)/, function (link, text, url) {
		console.log(`Link: ${text} = ${url}`);
		return `<a href='${url}'>${text}</a>`;
	});

	return content;
}

function loadMarkdownFile(filename) {
	// extract frontmatter
	var data = fs.readFileSync(filename, 'utf-8');
	var matter = grayMatter(data);

	var data = _.defaults(matter.data, {
		subtitle: false,
		hide: false,
		sticky: false,
		excerpt: ''
	});
	data.article = render(matter.content);

	if (data.excerpt != "") {
		data.excerpt = autop(data.excerpt);
	} else {
		var paras = matter.content.trim().split(/\n/);
		paras = _.map(paras, para => para.replace(/^#+/, '').trim());
		var firstpara = paras[0];
		data.excerpt = render(firstpara);
	}

	// data.excerpt = data.excerpt.replace(/(\.|;|:)$/, '')+'...';
	// console.log(data);
	return data;
}

// Load pages and articles
var pages = {};
var articles = {};

_.each(fs.readdirSync('./pages', { withFileTypes: true }), file => {
	if (file.name.match(/\.md$/)) {
		var filename = './pages/'+file.name;
		var name = file.name.replace(/\.md$/, '').replace(/_/, '/');

		var pagedata = loadMarkdownFile(filename);
		pagedata.name = name;
		pagedata.url = '/'+name+'/';
		pages[name] = pagedata;
	}
});

_.each(fs.readdirSync('./articles', { withFileTypes: true }), file => {
	if (file.name.match(/\.md$/)) {
		var filename = './articles/'+file.name;
		var name = file.name.replace(/\.md$/, '');

		var articledata = loadMarkdownFile(filename);
		articledata.name = name;
		articledata.url = '/articles/'+name+'/';
		articles[name] = articledata;
	}
});

let [stickyArticles, nonStickyArticles] = _.partition(articles, article => article.sticky);
let orderedArticles = stickyArticles.concat(nonStickyArticles);
let heroArticles = _.filter(articles, article => article.hero);

// console.log("Hero articles:", heroArticles);


// STATIC PAGES

templates = {};
_.each(['page', 'condition', 'article'], tpl => {
	templates[tpl] = h.compile(fs.readFileSync('./templates/'+tpl+'.html.h', 'utf-8'));
});

_.each(pages, (pagedata, name) => {
	console.log("Page:", name);

	// linked articles
	if (_.has(pagedata, "articles")) {
		var as = pagedata.articles.split(/, */);

		pagedata.linked_articles = _.map(as, a => articles[a]);
	}

	var templatename = pagedata.template;
	if (_.isEmpty(templatename) || !_.has(templates, templatename)) {
		if (name.match(/^conditions\//))
			templatename = 'condition';
		else
			templatename = 'page';
	}

	var out = templates[templatename](pagedata);
	fs.mkdirSync('../htdocs/'+name, { recursive: true });
	fs.writeFile('../htdocs/'+name+'/index.html', out, (err) => {
		if (err) console.log(err);
	});
});

// ARTICLES

_.each(orderedArticles, (articledata, name) => {
	console.log("Article:", articledata.name);

	// linked articles
	if (_.has(articledata, "articles")) {
		var as = articledata.articles.split(/, */);
		articledata.linked_articles = _.map(as, a => articles[a]);
	}

	var templatename = articledata.template;
	if (_.isEmpty(templatename) || !_.has(templates, templatename)) {
		templatename = 'article';
	}

	var out = templates[templatename](articledata);
	fs.mkdirSync('../htdocs/articles/'+articledata.name, { recursive: true });
	fs.writeFile('../htdocs/articles/'+articledata.name+'/index.html', out, (err) => {
		if (err) console.log(err);
	});
});


// HOME PAGE and SPECIAL PAGES

_.each(['index', 'conditions', 'articles', 'books'], fn => {
	console.log("Page:", fn);
	var template = h.compile(fs.readFileSync('./pages/'+fn+'.html.h', 'utf8'));
	var data = {
		hero: heroArticles,
		articles: orderedArticles,
	};
	var out = template(data);

	var outfile = (fn == 'index') ? 'index.html' : fn+'/index.html';
	if (fn != 'index') {
		fs.mkdirSync('../htdocs/'+fn, { recursive: true });
	}

	fs.writeFile('../htdocs/'+outfile, out, (err) => {
		if (err) console.log(err);
	});
});

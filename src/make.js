const fs = require('fs');
const path = require('path');
const _ = require('lodash');

const h = require('handlebars');
const layouts = require('handlebars-layouts');

const sass = require('node-sass');
const grayMatter = require('gray-matter');
const markdown = require( "markdown" ).markdown;


// STYLESHEET

var style_css = path.normalize('../htdocs/style.css');
sass.render({
	file: 'scss/style.scss',
	outFile: style_css,
}, function(err, result) {
	if (err) console.log(err);

	fs.writeFile(style_css, result.css, (err) => {

	});
});





// Register helpers
h.registerHelper(layouts(h));

// Register partials
h.registerPartial('layout', fs.readFileSync('./templates/layout.html.h', 'utf8'));
h.registerPartial('header', fs.readFileSync('./templates/header.html.h', 'utf8'));
h.registerPartial('footer', fs.readFileSync('./templates/footer.html.h', 'utf8'));

// Load pages and articles
var pages = [];
var articles = [];

function loadMarkdownFile(filename) {
	// extract frontmatter
	var data = fs.readFileSync(filename, 'utf-8');
	var matter = grayMatter(data);

	var data = {
		title: matter.data.title,
		article: markdown.toHTML(matter.content),
	};

	if (_.has(matter.data, "excerpt")) {
		data.excerpt = matter.data.excerpt;
	} else {
		var firstpara = matter.content.split(/\n/)[0];
		data.excerpt = markdown.toHTML(firstpara);
	}

	// console.log(data);
	return data;
}


// STATIC PAGES

var pageTemplate = h.compile(fs.readFileSync('./templates/page.html.h', 'utf-8'));
_.each(fs.readdirSync('./pages', { withFileTypes: true }), file => {
	if (file.name.match(/\.md$/)) {
		var filename = './pages/'+file.name;
		var name = file.name.replace(/\.md$/, '').replace(/_/, '/');
		console.log("Page:", name);

		var pagedata = loadMarkdownFile(filename);
		pagedata.url = '/'+name+'/';
		pages.push(pagedata);

		var out = pageTemplate(pagedata);
		fs.mkdirSync('../htdocs/'+name, { recursive: true });
		fs.writeFile('../htdocs/'+name+'/index.html', out, (err) => {
			if (err) console.log(err);
		});
	}
});

// ARTICLES

var articleTemplate = h.compile(fs.readFileSync('./templates/article.html.h', 'utf-8'));
_.each(fs.readdirSync('./articles', { withFileTypes: true }), file => {
	if (file.name.match(/\.md$/)) {
		var filename = './articles/'+file.name;
		var name = file.name.replace(/\.md$/, '');
		console.log("Article:", name);

		var articledata = loadMarkdownFile(filename);
		articledata.url = '/articles/'+name+'/';
		articles.push(articledata);

		var out = articleTemplate(articledata);
		fs.mkdirSync('../htdocs/articles/'+name, { recursive: true });
		fs.writeFile('../htdocs/articles/'+name+'/index.html', out, (err) => {
			if (err) console.log(err);
		});
	}
});

// console.log("Articles", articles);


// HOME PAGE and SPECIAL PAGES

_.each(['index', 'conditions', 'articles', 'books'], fn => {
	var template = h.compile(fs.readFileSync('./pages/'+fn+'.html.h', 'utf8'));
	var data = {
		articles: articles,
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

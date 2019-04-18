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

// HOME PAGE and SPECIAL PAGES

_.each(['index'], fn => {
	var template = h.compile(fs.readFileSync('./pages/'+fn+'.html.h', 'utf8'));
	var data = {};
	var out = template(data);

	fs.writeFile('../htdocs/'+fn+'.html', out, (err) => {
		if (err) console.log(err);
	});
});


// STATIC PAGES

var pageTemplate = h.compile(fs.readFileSync('./templates/page.html.h', 'utf-8'));
fs.readdir('./pages', { withFileTypes: true }, (err, files) => {
	if (err) {
		console.log(err);
		return;
	}
	_.each(files, file => {
		if (file.name.match(/\.md$/)) {
			var filename = './pages/'+file.name;
			var name = file.name.replace(/\.md$/, '');

			// extract frontmatter
			var data = fs.readFileSync(filename, 'utf-8');
			var matter = grayMatter(data);

			// compile markdown
			var content = markdown.toHTML(matter.content);

			var out = pageTemplate({
				title: matter.data.title,
				article: content
			});
			fs.writeFile('../htdocs/'+name+'.html', out, (err) => {
				if (err) console.log(err);
			});
		}
	});
})


// ARTICLES

var articleTemplate = h.compile(fs.readFileSync('./templates/article.html.h', 'utf-8'));
fs.readdir('./articles', { withFileTypes: true }, (err, files) => {
	if (err) {
		console.log(err);
		return;
	}
	_.each(files, file => {
		if (file.name.match(/\.md$/)) {
			var filename = './articles/'+file.name;
			var name = file.name.replace(/\.md$/, '');

			// extract frontmatter
			var data = fs.readFileSync(filename, 'utf-8');
			var matter = grayMatter(data);

			// compile markdown
			var content = markdown.toHTML(matter.content);

			var out = articleTemplate({
				title: matter.data.title,
				article: content
			});
			fs.writeFile('../htdocs/articles/'+name+'.html', out, (err) => {
				if (err) console.log(err);
			});
		}
	});
});

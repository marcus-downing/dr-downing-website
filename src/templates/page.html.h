{{#extend "layout"}}

{{#content "body"}}
<section class='gradient'>
	<div class='container'>
		<nav aria-label="breadcrumb">
		  <ol class="breadcrumb">
		    <li class="breadcrumb-item"><a href="/">Home</a></li>
		    <li class="breadcrumb-item active" aria-current="page">{{title}}</li>
		  </ol>
		</nav>

<h1>{{ title }}</h1>
{{#if subtitle}}
<h3 class='subtitle'>{{subtitle}}</h3>
{{/if}}

{{{article}}}
</div>
</section>

{{/content}}

{{/extend}}
{{#extend "layout"}}

{{#content "body"}}
<section class='gradient'>
	<div class='container'>
		<nav aria-label="breadcrumb">
		  <ol class="breadcrumb">
		    <li class="breadcrumb-item"><a href="/">Home</a></li>
		    <li class="breadcrumb-item"><a href="/conditions/">Conditions</a></li>
		    <li class="breadcrumb-item active" aria-current="page">{{title}}</li>
		  </ol>
		</nav>
<h1>{{ title }}</h1>
{{#if subtitle}}
<h3 class='subtitle'>{{subtitle}}</h3>
{{/if}}

<div class="row">
<div class="col-sm-6 col-md-8">
{{{article}}}
</div>
<div class="col-sm-6 col-md-4">
(articles)
</div>
</div>

</div>
</section>

{{/content}}

{{/extend}}
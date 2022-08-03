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

{{#embed "title"}}{{/embed}}

<div class="row">
<div class="col-sm-6 col-md-8">

<article class="main content">
{{{article}}}
</article>

</div>
<div class="col-sm-6 col-md-4">

{{#each linked_pages}}
	<a href='{{url}}' class='card card-condition'>
		<div class="card-body">
			<h3 class="card-title">{{title}}</h3>
			{{#if subtitle}}<h5 class='subtitle'>{{subtitle}}</h5>{{/if}}
			<div class='excerpt'>
				{{{excerpt}}}
			</div>
		</div>
	</a>
{{/each}}

{{#each linked_articles}}
	<a href='{{url}}' class='card card-article'>
		<div class="card-body">
			<h3 class="card-title">{{title}}</h3>
			{{#if subtitle}}<h5 class='subtitle'>{{subtitle}}</h5>{{/if}}
			<div class='excerpt'>
				{{{excerpt}}}
			</div>
		</div>
	</a>
{{/each}}

</div>
</div>

</div>
</section>

{{/content}}

{{/extend}}
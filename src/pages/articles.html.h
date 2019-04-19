{{#extend "layout" title="Articles"}}

{{#content "body"}}

<section class="gradient">
	<div class='container'>
		<nav aria-label="breadcrumb">
		  <ol class="breadcrumb">
		    <li class="breadcrumb-item"><a href="/">Home</a></li>
		    <li class="breadcrumb-item active" aria-current="page">Articles</a></li>
		  </ol>
		</nav>

		<h2>Articles</h2>

		<div class="card-columns">
{{#each articles}}
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
</section>

{{/content}}

{{/extend}}
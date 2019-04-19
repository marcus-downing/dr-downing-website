{{#extend "layout" title="Articles"}}

{{#content "body"}}

<section class="gradient">
	<div class='container'>
		<nav aria-label="breadcrumb">
		  <ol class="breadcrumb">
		    <li class="breadcrumb-item"><a href="/">Home</a></li>
		    <li class="breadcrumb-item active" aria-current="page">Books</a></li>
		  </ol>
		</nav>

		<h2>Books</h2>

		<div class="card-columns">
			<article class="card card-book">
				<img class="card-img-top" src="/assets/cover-daylight-robbery.jpg">
				<div class="card-body">
					<h3 class="card-title">Daylight Robbery</h3>
				</div>
			</article>

			<article class="card card-book">
				<img class="card-img-top" src="/assets/cover-why-me.jpg">
				<div class="card-body">
					<h3 class="card-title">Why M.E.?</h3>
				</div>
			</article>

			<article class="card card-book">
				<img class="card-img-top" src="/assets/cover-soleil-vital.jpg">
				<div class="card-body">
					<h3 class="card-title">Soleil Vital</h3>
					<h5 class="subtitle">Les bienfaits du soleil sur la santé</h5>
				</div>
			</article>
		</div>


		<h2>Journals</h2>

		<div class="card-columns">
			<article class="card card-book">
				<img class="card-img-top" src="/assets/cover-jnem.jpg">
				<div class="card-body">
					<h3 class="card-title">Journal of Nutritional and Environmental Medicine</h3>
				</div>
			</article>
		</div>
	</div>
</section>

{{/content}}

{{/extend}}
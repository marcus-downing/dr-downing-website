{{#extend "layout" title="Home"}}

{{#content "body"}}
<section class='section-video gradient'>
	<div class='container'>
		<div class="embed-responsive embed-responsive-16by9">
			<iframe width="560" height="315" src="https://www.youtube.com/embed/pW-FzAelj1o" frameborder="0" allow="accelerometer; autoplay; encrypted-media; gyroscope; picture-in-picture" allowfullscreen></iframe>
		</div>
	</div>
</section>

<section class='gradient'>
	<div class='container'>
		<div class='row'>
			<div class='col-sm-6 col-md-5'>
				<blockquote>
					<p>
						Many illnesses have their root in poor nutrition, allergies, metabolic problems, toxic burdens, chronic infections or 
						even sunlight deficiency. When the body's defences are damaged or exhausted, disease can take hold.
					</p>
				</blockquote>
			</div>
			<div class='col-sm-6 col-md-7'>
				<p>
					Dr Downing is President of the <a href="https://www.bsem.org.uk/">British Society for Ecological Medicine</a> and was 
					for 20 years Editor of the Journal of Nutritional and Environmental Medicine.
					He serves on the Editorial Board of the <a href="http://orthomolecular.org/">Orthomolecular News Service</a>.
				</p>
			<!--
				<p>
					His 1988 book Daylight Robbery pioneered our understanding of how vital sunlight and vitamin D are for health.
					His book The Vitamin Cure for Allergies was released in 2010, and The Vitamin Cure for Digestive Disorders in 2013.
				</p>
			-->
				<p>
					He has particular interests in membrane lipids and lipid therapy, in mitochondrial dysfunction, 
					in environmental toxic effects, and in sunlight and vitamin D.
				</p>
			</div>
		</div>
	</div>
</section>

<section class='section-index-conditions'>
	<div class='container'>
		<div class="card-deck">

			<a class='card' href='/conditions/cancer/'>
				<img src="/assets/kitten.jpg" class="card-img-top" alt="Kitten">
				<div class="card-body">
					<h4 class="card-title">Cancer</h4>
				</div>
			</a>

			<a class='card' href='/conditions/cfs/'>
				<img src="/assets/kitten.jpg" class="card-img-top" alt="Kitten">
				<div class="card-body">
					<h4 class="card-title">CFS</h4>
				</div>
			</a>

			<a class='card' href='/conditions/lyme/'>
				<img src="/assets/kitten.jpg" class="card-img-top" alt="Kitten">
				<div class="card-body">
					<h4 class="card-title">Lyme Disease</h4>
				</div>
			</a>

			<a class='card' href='/conditions/allergy/'>
				<img src="/assets/kitten.jpg" class="card-img-top" alt="Kitten">
				<div class="card-body">
					<h4 class="card-title">Allergies &amp; Sensitivities</h4>
				</div>
			</a>

			<a class='card' href='/conditions/_/'>
				<img src="/assets/kitten.jpg" class="card-img-top" alt="Kitten">
				<div class="card-body">
					<h4 class="card-title">Card title</h4>
				</div>
			</a>

			<a class='card' href='/conditions/undiagnosed/'>
				<img src="/assets/kitten.jpg" class="card-img-top" alt="Kitten">
				<div class="card-body">
					<h4 class="card-title">Undiagnosed</h4>
				</div>
			</a>

		</div>
	</div>
</section>

<section class="gradient">
	<div class='container'>
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
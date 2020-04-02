{{#extend "layout" title="Home"}}

{{#content "body"}}
<section class='section-video gradient'>
	<div class='container'>
		<div class="embed-responsive embed-responsive-16by9">
			<iframe width="560" height="315" src="https://www.youtube.com/embed/5CR80qTpiFA" frameborder="0" allow="accelerometer; autoplay; encrypted-media; gyroscope; picture-in-picture" allowfullscreen></iframe>
		</div>
	</div>
</section>

{{#if hero}}
<section class='gradient'>
	<div class='container'>
	{{#each hero}}
		<article class='card card-article card-hero'>
			<div class='card-body'>
			<h5 class="card-title">{{title}}</h5>
			{{{article}}}
			</div>
		</article>
	{{/each}}
	</div>
</section>
{{/if}}

<section class='gradient'>
	<div class='container'>
		<div class='row'>
			<div class='col-sm-6 col-md-5'>
				<blockquote>
					<p>
						Many illnesses have their root in poor nutrition, toxic exposures,
						environmental factors, and their interactions with our genes, our
						metabolisms and our immune systems. When the body’s
						defences are damaged or exhausted, disease can take a hold.
					</p>
				</blockquote>
			</div>
			<div class='col-sm-6 col-md-7'>
				<p>
					We offer medical advice and treatments based on the principles
					of ecological medicine, which considers the interactions
					between individuals and the environment, and their health
					consequences:
				</p>
				<ul>
					<li><b>INPUTS:</b> the impact of nutritional and environmental factors on the individual</li>
					<li><b>PROCESSING:</b> the way we handle inputs and how that determines our health</li>
					<li><b>OUTPUTS:</b> the impact of each individual’s actions on the environment, upon which we all depend.</li>
				</ul>
			</div>
		</div>
	</div>
</section>

<section class='section-dark'>
	<div class='container'>
		<h3>What we do</h3>
		<p>
			Using medical history, examination and specialised laboratory
			investigations, we assess nutritional status, toxic exposures,
			metabolic and immune function, and plan treatment of the
			problems identified.
		</p>
		<p>
			Our standard of care is therefore not based on diagnosis. For
			example in epilepsy your GP or consultant would prescribe
			anticonvulsant therapy; we would seek to identify and correct
			the causes, in nutrition, toxicity and metabolic disorder.
			Treatment usually comprises diets, nutritional supplements and
			detoxification procedures, administered both by mouth and by
			injection. We also offer desensitisation injections for allergies.
		</p>
	</div>
</section>

<section class='section-index-conditions'>
	<div class='container'>
		<div class="card-deck">

			<a class='card' href='/conditions/cancer/'>
				<!-- <img src="/assets/kitten.jpg" class="card-img-top" alt="Kitten"> -->
				<div class="card-body">
					<h4 class="card-title">Cancer</h4>
				</div>
			</a>

			<a class='card' href='/conditions/cfs/'>
				<!-- <img src="/assets/kitten.jpg" class="card-img-top" alt="Kitten"> -->
				<div class="card-body">
					<h4 class="card-title">CFS</h4>
				</div>
			</a>

			<a class='card' href='/conditions/lyme/'>
				<!-- <img src="/assets/kitten.jpg" class="card-img-top" alt="Kitten"> -->
				<div class="card-body">
					<h4 class="card-title">Lyme Disease</h4>
				</div>
			</a>

			<a class='card' href='/conditions/allergy/'>
				<!-- <img src="/assets/kitten.jpg" class="card-img-top" alt="Kitten"> -->
				<div class="card-body">
					<h4 class="card-title">Allergies &amp; Sensitivities</h4>
				</div>
			</a>

			<a class='card' href='/conditions/parkinsons/'>
				<!-- <img src="/assets/kitten.jpg" class="card-img-top" alt="Kitten"> -->
				<div class="card-body">
					<h4 class="card-title">Parkinson’s Disease</h4>
				</div>
			</a>

			<a class='card' href='/conditions/undiagnosed/'>
				<!-- <img src="/assets/kitten.jpg" class="card-img-top" alt="Kitten"> -->
				<div class="card-body">
					<h4 class="card-title">Undiagnosed</h4>
				</div>
			</a>

		</div>
	</div>
</section>

<section class="gradient">
	<div class="container">
		<div class="row">
			<div class="col-md-8">
				<div class="embed-responsive embed-responsive-16by9">
					<iframe width="720" height="405" src="https://www.youtube.com/embed/pW-FzAelj1o" frameborder="0" allow="accelerometer; autoplay; encrypted-media; gyroscope; picture-in-picture" allowfullscreen></iframe>
				</div>
			</div>
			<div class="col-md-4">
				<h3>BodyBio UK</h3>
				<p>Interview with BodyBio on cellular health and ecological medicine.</p>
				<a class="btn btn-teal" href="https://bodybio.com/">BodyBio UK</a>
			</div>
		</div>
	</div>
</section>

<section class="gradient">
	<div class='container'>
		<h2>Articles</h2>
		<div class="card-columns">
{{#each articles}}
{{#unless hide}}
			<a href='{{url}}' class='card card-article'>
				<div class="card-body">
      				<h3 class="card-title">{{title}}</h3>
      				{{#if subtitle}}<h5 class='subtitle'>{{subtitle}}</h5>{{/if}}
					<div class='excerpt'>
						{{{excerpt}}}
					</div>
				</div>
			</a>
{{/unless}}
{{/each}}
		</div>
	</div>
</section>

<section class="gradient">
	<div class="container">
		<h4>Please note</h4>
		<p>
			We offer care for a wide range of chronic problems. We do not
			offer acute medical services, nor primary care, and we do not
			carry out any surgical procedures. We are not able to care for
			persons detained under the Mental Health Act, nor for children
			under 2 years of age.
		</p>
		<p>
			We do accept people with physical or sensory impairments,
			those with learning disabilities or autistic spectrum disorders
			and those with dementia.
		</p>
		<p>
			The clinic can accommodate wheelchairs, but some advance
			notice really does help.
		</p>
		<p>
			For further details see our Statement of Purpose - a formalised
			document required by the CQC. It hasn’t changed in 10 years
			and I see no reason to change it now.
		</p>
	</div>
</section>

{{/content}}

{{/extend}}
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
			<div class='col-sm-6 col-md-6'>
				<blockquote>
					<p>
						Dr Downing practices <b>Ecological Medicine</b> (sometimes called Functional Medicine).
						This is a systems approach to health - understanding how things influence one another within a whole.
					</p>
					<p>
						Ecological medicine considers the interactions between individuals and the environment, and their health consequences.
					</p>

					<!-- <hr> -->

					<!-- <p>
						Dr Downing is the current president of the<br/>
						<a href='https://www.bsem.org.uk/'>British Society for Ecological Medicine</a>.
					</p> -->
				</blockquote>
			</div>
			<div class='col-sm-6 col-md-6'>
				<ul>
					<li><b>INPUTS:</b> nutritional, environmental and lifestyle factors impact on the individual</li>
					<li><b>PROCESSING:</b> our individual immune and biochemical systems determine the way we handle inputs and that determines our health</li>
					<li><b>OUTPUTS:</b> each individual’s actions impact on the global environment, upon which we all depend</li>
				</ul>

				<p class='text-right'>
					<a href='/approach/'>More...</a>
				</p>

			</div>
		</div>
		<!-- <hr> -->

		<!-- <p>
			Dr Downing is the current president of the<br/>
		<p class='text-center'>
			<a class='btn btn-teal btn-lg' href='https://www.bsem.org.uk/'>British Society for Ecological Medicine</a>
		</p>
		<p class='text-center'><a class="btn btn-teal btn-lg" href="/approach/">Our approach to restoring health</a></p> -->
	
		</div>
	</div>
</section>

<section class='section-dark'>
	<div class='container'>
		<div class='row'>
			<div class='col-sm-6 col-md-7'>
				<h3>What we do</h3>
				<p>
					Using medical history, physical examination and specialised laboratory investigations,
					we assess your nutritional status, toxic exposures, metabolic and immune function,
					and plan treatment of the problems identified.
				</p>
				<p>
					Our standard of care is therefore not based on diagnosis.
					For example in epilepsy your GP or consultant would prescribe anticonvulsant therapy;
					we would seek to identify and correct the causes, in nutrition, toxicity and metabolic disorder.
					Treatment usually comprises diets, nutritional supplements and detoxification procedures,
					administered both by mouth and by injection.
				</p>
				<h5>We will never tell you to stop a treatment prescribed by another doctor</h5>
				<p>
					If this needed to be considered we would explain why and advise you to discuss it with the prescribing doctor.
				</p>
				<p>
					Recent events, including Covid and increasing pressure on the NHS, have caused many people 
					to feel lost in the gaps between different specialists or departments. 
					This can be helped by someone taking a comprehensive overview of your case, 
					including both standard medical treatments and ecological aspects. 
					A consultation with us can be an opportunity to do this.
					Indeed, how could we be integrative without taking all aspects into consideration?
				</p>
			</div>
			<div class='col-sm-6 col-md-5'>
				<h3>&nbsp;</h3>
				<div class='card-deck'>
					<a class="card" href="/treatments/photobiomodulation/">
						<div class="card-body d-flex flex-column justify-content-center">
							<h4 class="card-title">Photobiomodulation</h4>
							<blockquote>
								Light is life  – and we are all going short<br>
								But we can fix that
							</blockquote>
						</div>
					</a>

					<a class="card" href="/conditions/arthritis/">
						<div class="card-body d-flex flex-column justify-content-center">
							<h4 class="card-title">Rheumatoid Arthritis</h4>
							<blockquote>
								What causes Rheumatoid Arthritis? How to treat it?
							</blockquote>
						</div>
					</a>

				</div>
			</div>
		</div>
	</div>
</section>

<section class='section-index-conditions'>
	<div class='container'>
		<h4>Conditions</h4>
		<div class="card-deck">

			<a class='card' href='/conditions/gut/'>
				<div class="card-body d-flex flex-column justify-content-center">
					<h4 class="card-title">Gut</h4>
				</div>
			</a>

			<a class='card' href='/conditions/environment/'>
				<div class="card-body d-flex flex-column justify-content-center">
					<h4 class="card-title">Environment and <span class='text-nowrap'>toxic effects</span></h4>
				</div>
			</a>

			<a class='card' href='/conditions/immunity/'>
				<div class="card-body d-flex flex-column justify-content-center">
					<h4 class="card-title">Immunity and autoimmunity</h4>
				</div>
			</a>

			<a class='card' href='/conditions/mch-ehs/'>
				<div class="card-body d-flex flex-column justify-content-center">
					<h4 class="card-title">MCS and EHS</h4>
				</div>
			</a>

			<a class='card' href='/conditions/membrane-lipid/'>
				<div class="card-body d-flex flex-column justify-content-center">
					<h4 class="card-title">Membrane lipids and <span class='text-nowrap'>lipid therapy</span></h4>
				</div>
			</a>

			<a class='card' href='/conditions/mould/'>
				<div class="card-body d-flex flex-column justify-content-center">
					<h4 class="card-title">Mould and mycotoxins</h4>
				</div>
			</a>

			<a class='card' href='/conditions/mitochondrial/'>
				<div class="card-body d-flex flex-column justify-content-center">
					<h4 class="card-title">Mitochondrial dysfunction</h4>
				</div>
			</a>

			<a class='card' href='/conditions/cancer/'>
				<div class="card-body d-flex flex-column justify-content-center">
					<h4 class="card-title">Cancer</h4>
				</div>
			</a>

			<a class='card' href='/conditions/allergy/'>
				<div class="card-body d-flex flex-column justify-content-center">
					<h4 class="card-title">Allergies and sensitivities</h4>
				</div>
			</a>

			<a class='card' href='/conditions/cfs/'>
				<div class="card-body d-flex flex-column justify-content-center">
					<h4 class="card-title">CFS</h4>
				</div>
			</a>

			<a class='card' href='/conditions/lyme/'>
				<div class="card-body d-flex flex-column justify-content-center">
					<h4 class="card-title">Lyme disease</h4>
				</div>
			</a>

			<a class='card' href='/conditions/neurodegenerative/'>
				<div class="card-body d-flex flex-column justify-content-center">
					<h4 class="card-title">Neurodegenerative conditions</h4>
				</div>
			</a>

			<a class='card' href='/conditions/arthritis/'>
				<div class="card-body d-flex flex-column justify-content-center">
					<h4 class="card-title">Rheumatoid Arthritis</h4>
				</div>
			</a>

			<a class='card' href='/conditions/undiagnosed/'>
				<div class="card-body d-flex flex-column justify-content-center">
					<h4 class="card-title">Undiagnosed</h4>
				</div>
			</a>

		</div>
	</div>
</section>


<section class='section-dark'>
	<div class='container'>
		<h4>Treatments</h4>

		<div class="card-deck">

			<a class='card' href='/treatments/keto/'>
				<div class="card-body d-flex flex-column justify-content-center">
					<h4 class="card-title">Ketogenic diet</h4>
				</div>
			</a>

			<a class='card' href='/treatments/phospholipid/'>
				<div class="card-body d-flex flex-column justify-content-center">
					<h4 class="card-title">Phospholipid exchange</h4>
				</div>
			</a>

			<a class='card' href='/treatments/genomic/'>
				<div class="card-body d-flex flex-column justify-content-center">
					<h4 class="card-title">Genomic medicine</h4>
				</div>
			</a>

			<!-- <a class='card' href='/treatments/light/'>
				<div class="card-body d-flex flex-column justify-content-center">
					<h4 class="card-title">Light</h4>
				</div>
			</a> -->

			<a class="card" href="/treatments/photobiomodulation/">
				<div class="card-body d-flex flex-column justify-content-center">
					<h4 class="card-title">Photobiomodulation</h4>
				</div>
			</a>

			<a class='card' href='/treatments/nutrition/'>
				<div class="card-body d-flex flex-column justify-content-center">
					<h4 class="card-title">Nutrition</h4>
				</div>
			</a>

			<a class='card' href='/treatments/sleep/'>
				<div class="card-body d-flex flex-column justify-content-center">
					<h4 class="card-title">Sleep</h4>
				</div>
			</a>

			<a class='card' href='/treatments/vagus/'>
				<div class="card-body d-flex flex-column justify-content-center">
					<h4 class="card-title">Stress, breathing and the vagus nerve</h4>
				</div>
			</a>

			<a class='card' href='/treatments/desensitisation/'>
				<div class="card-body d-flex flex-column justify-content-center">
					<h4 class="card-title">Desensitisation</h4>
				</div>
			</a>

			<span></span>
			<span></span>

		</div>
	</div>
</section>

<!-- <section class="gradient">
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
</section> -->

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
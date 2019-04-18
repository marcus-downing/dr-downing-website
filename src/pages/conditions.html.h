{{#extend "layout" title="Home"}}

{{#content "body"}}
<section class='gradient'>
	<div class='container'>
		<nav aria-label="breadcrumb">
		  <ol class="breadcrumb">
		    <li class="breadcrumb-item"><a href="/">Home</a></li>
		    <li class="breadcrumb-item active" aria-current="page">Conditions</li>
		  </ol>
		</nav>
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

{{/content}}

{{/extend}}
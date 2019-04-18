{{#extend "layout"}}

{{#content "body"}}
<section class='gradient'>
<div class='container'>
<nav aria-label="breadcrumb">
  <ol class="breadcrumb">
    <li class="breadcrumb-item"><a href="/">Home</a></li>
  </ol>
</nav>
</div>
</section>

<section class='gradient'>
<div class='container'>
<h1>{{ title }}</h1>

{{{article}}}
</div>
</section>

{{/content}}

{{/extend}}
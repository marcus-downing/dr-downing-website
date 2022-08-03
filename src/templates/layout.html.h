<!doctype html>
<html lang="en" class="h-100">
<head>
	<meta charset="utf-8">
	<meta name="viewport" content="width=device-width, initial-scale=1, shrink-to-fit=no">

	<!-- Bootstrap CSS -->
	<link rel="stylesheet" href="/style.css">
	<!-- <link rel="alternate" type="application/rss+xml" href="/feed.rss" /> -->

	<title>{{ title }}</title>
</head>
<body class="d-flex flex-column h-100">

<header id='header' class='fixed-top'>
{{#embed "header"}}{{/embed}}
</header>

<main id='main' role="main" class="flex-shrink-0">
{{#block "body"}}{{/block}}
</main>

<footer id='footer' class="footer mt-auto">
{{#embed "footer"}}{{/embed}}
</footer>

</body>
</html>

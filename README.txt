Stanford MetaTag NoBots
=======================

Simple Drupal Features module blocking search engine robots from indexing a site via the Meta Tag module.

To use: enable the Feature. This will add the following tag to the <head> section of every public page of your website:

<meta name="robots" content="noarchive, nofollow, noindex" />

This will block robots from crawling your website.

You probably will want to disable this module before launching a site.

Note: If you "revert" the global MetaTags settings at admin/config/search/metatags, that will override this Feature.
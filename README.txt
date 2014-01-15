Stanford MetaTag NoBots
=======================

Authors: John Bickar, Shea McKinney.

Simple Drupal Features module blocking search engine robots from indexing a site
via the X-Robots-Tag HTTP header.

See https://developers.google.com/webmasters/control-crawl-index/docs/robots_meta_tag
for more information on that HTTP header.

To use: enable the Feature. This will check the User Agent string of the client
that is accessing your website. If the User Agent is one of the common search engine 
bots (Google, Yahoo!, Bing, Baidu), it will return the following header:

X-Robots-Tag:noindex,nofollow,noarchive

This will block robots from crawling your website.

You probably will want to disable this module before launching a site.

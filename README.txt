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

To test if it's working, you can use curl to specify the user agent string:

curl -A Googlebot -D /tmp/headers.txt https://foo.stanford.edu/

The HTTP headers will be written to a file at /tmp/headers.txt.

Or, if you want to be more fancy:

curl -sS 1>/dev/null -A Googlebot -D /tmp/headers.txt https://foo.stanford.edu/ && grep 'X-Robots' /tmp/headers.txt

That should output "X-Robots-Tag: noindex,nofollow,noarchive" if the headers are being sent correctly.
<?php
/**
 * @file
 * stanford_metatag_nobots.features.metatag.inc
 */

/**
 * Implements hook_metatag_export_default().
 */
function stanford_metatag_nobots_metatag_export_default() {
  $config = array();

  // Exported Metatag config instance: global.
  $config['global'] = array(
    'instance' => 'global',
    'config' => array(
      'title' => array(
        'value' => '[current-page:title] | [site:name]',
      ),
      'robots' => array(
        'value' => array(
          'noindex' => 'noindex',
          'nofollow' => 'nofollow',
          'noarchive' => 'noarchive',
          'nosnippet' => 0,
          'noodp' => 0,
        ),
      ),
      'generator' => array(
        'value' => 'Drupal 7 (http://drupal.org)',
      ),
    ),
  );

  return $config;
}

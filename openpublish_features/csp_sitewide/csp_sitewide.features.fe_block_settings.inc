<?php

/**
 * Implementation of hook_default_fe_block_settings().
 */
function csp_sitewide_default_fe_block_settings() {
  $export = array();

  // csp_theme
  $theme = array();

  $theme['block-footer_links'] = array(
    'module' => 'block',
    'theme' => 'csp_theme',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
    'machine_name' => 'footer_links',
  );

  $theme['block-site_footer_banner'] = array(
    'module' => 'block',
    'theme' => 'csp_theme',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
    'machine_name' => 'site_footer_banner',
  );

  $export['csp_theme'] = $theme;

  $theme_default = variable_get('theme_default', 'garland');
  $themes = list_themes();
  foreach ($export as $theme_key => $settings) {
    if ($theme_key != $theme_default && empty($themes[$theme_key]->status)) {
      unset($export[$theme_key]);
    }
  }
  return $export;
}

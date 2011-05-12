<?php

/**
 * Implementation of hook_default_fe_block_settings().
 */
function csp_home_page_default_fe_block_settings() {
  $export = array();

  // csp_theme
  $theme = array();

  $theme['block-get_our_news'] = array(
    'module' => 'block',
    'theme' => 'csp_theme',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => 'Get our news',
    'cache' => '-1',
    'machine_name' => 'get_our_news',
  );

  $theme['block-main_site_inline_banner'] = array(
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
    'machine_name' => 'main_site_inline_banner',
  );

  $theme['block-main_site_leaderboard'] = array(
    'module' => 'block',
    'theme' => 'csp_theme',
    'status' => 0,
    'weight' => '16',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
    'machine_name' => 'main_site_leaderboard',
  );

  $theme['block-main_site_right_1'] = array(
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
    'machine_name' => 'main_site_right_1',
  );

  $theme['block-main_site_right_2'] = array(
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
    'machine_name' => 'main_site_right_2',
  );

  $theme['views-latest_poll-block_1'] = array(
    'module' => 'views',
    'delta' => 'latest_poll-block_1',
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

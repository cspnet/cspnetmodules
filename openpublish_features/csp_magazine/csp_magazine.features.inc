<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function csp_magazine_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "noderelationships" && $api == "noderelationships") {
    return array("version" => 1);
  }
  elseif ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_node_info().
 */
function csp_magazine_node_info() {
  $items = array(
    'magazine_article' => array(
      'name' => t('Magazine Article'),
      'module' => 'features',
      'description' => t('Information about an individual article.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Body'),
      'min_word_count' => '0',
      'help' => '',
    ),
    'magazine_issue' => array(
      'name' => t('Magazine Issue'),
      'module' => 'features',
      'description' => t('An issue of a magazine.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Body'),
      'min_word_count' => '0',
      'help' => '',
    ),
    'magazine_publication' => array(
      'name' => t('Magazine Publication'),
      'module' => 'features',
      'description' => t('Magazine publications'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Body'),
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function csp_magazine_views_api() {
  return array(
    'api' => '2',
  );
}

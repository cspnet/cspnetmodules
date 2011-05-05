<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function csp_marketplace_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_node_info().
 */
function csp_marketplace_node_info() {
  $items = array(
    'marketplace' => array(
      'name' => t('Marketplace'),
      'module' => 'features',
      'description' => t('Marketplace products'),
      'has_title' => '1',
      'title_label' => t('Product'),
      'has_body' => '1',
      'body_label' => t('Description'),
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function csp_marketplace_views_api() {
  return array(
    'api' => '2',
  );
}

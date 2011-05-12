<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function csp_home_page_context_default_contexts() {
  $export = array();
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'main_site_home';
  $context->description = '';
  $context->tag = 'CSP Context';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-6' => array(
          'module' => 'block',
          'delta' => 6,
          'region' => 'right',
          'weight' => 0,
        ),
        'menu-menu-resources' => array(
          'module' => 'menu',
          'delta' => 'menu-resources',
          'region' => 'right',
          'weight' => 1,
        ),
        'block-7' => array(
          'module' => 'block',
          'delta' => 7,
          'region' => 'right',
          'weight' => 2,
        ),
        'views-latest_poll-block_1' => array(
          'module' => 'views',
          'delta' => 'latest_poll-block_1',
          'region' => 'under_content',
          'weight' => 0,
        ),
        'block-10' => array(
          'module' => 'block',
          'delta' => 10,
          'region' => 'under_content',
          'weight' => 1,
        ),
        'block-11' => array(
          'module' => 'block',
          'delta' => 11,
          'region' => 'inline',
          'weight' => 0,
        ),
        'block-2' => array(
          'module' => 'block',
          'delta' => 2,
          'region' => 'header',
          'weight' => 0,
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('CSP Context');

  $export['main_site_home'] = $context;
  return $export;
}

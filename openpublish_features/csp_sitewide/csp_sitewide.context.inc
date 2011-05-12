<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function csp_sitewide_context_default_contexts() {
  $export = array();
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'sitewide';
  $context->description = '';
  $context->tag = 'CSP Context';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '*' => '*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-9' => array(
          'module' => 'block',
          'delta' => 9,
          'region' => 'bottom_content',
          'weight' => 0,
        ),
        'block-8' => array(
          'module' => 'block',
          'delta' => 8,
          'region' => 'footer',
          'weight' => 0,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('CSP Context');

  $export['sitewide'] = $context;
  return $export;
}

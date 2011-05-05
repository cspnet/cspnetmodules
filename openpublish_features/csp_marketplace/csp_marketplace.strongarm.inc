<?php

/**
 * Implementation of hook_strongarm().
 */
function csp_marketplace_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_marketplace';
  $strongarm->value = 0;

  $export['comment_anonymous_marketplace'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_controls_marketplace';
  $strongarm->value = '3';

  $export['comment_controls_marketplace'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_marketplace';
  $strongarm->value = '4';

  $export['comment_default_mode_marketplace'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_order_marketplace';
  $strongarm->value = '1';

  $export['comment_default_order_marketplace'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_marketplace';
  $strongarm->value = '50';

  $export['comment_default_per_page_marketplace'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_marketplace';
  $strongarm->value = '0';

  $export['comment_form_location_marketplace'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_marketplace';
  $strongarm->value = '0';

  $export['comment_marketplace'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_marketplace';
  $strongarm->value = '1';

  $export['comment_preview_marketplace'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_marketplace';
  $strongarm->value = '1';

  $export['comment_subject_field_marketplace'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_marketplace';
  $strongarm->value = array(
    'title' => '-5',
    'body_field' => '-4',
    'revision_information' => '1',
    'author' => '2',
    'options' => '3',
    'comment_settings' => '5',
    'menu' => '-1',
    'path' => '6',
    'attachments' => '4',
    'workflow' => '0',
  );

  $export['content_extra_weights_marketplace'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_marketplace';
  $strongarm->value = '0';

  $export['language_content_type_marketplace'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_marketplace';
  $strongarm->value = array(
    0 => 'status',
    1 => 'revision',
  );

  $export['node_options_marketplace'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'upload_marketplace';
  $strongarm->value = '1';

  $export['upload_marketplace'] = $strongarm;
  return $export;
}

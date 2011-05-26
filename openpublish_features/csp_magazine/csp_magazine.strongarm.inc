<?php

/**
 * Implementation of hook_strongarm().
 */
function csp_magazine_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_magazine_article';
  $strongarm->value = 0;

  $export['comment_anonymous_magazine_article'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_magazine_issue';
  $strongarm->value = 0;

  $export['comment_anonymous_magazine_issue'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_magazine_publication';
  $strongarm->value = 0;

  $export['comment_anonymous_magazine_publication'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_controls_magazine_article';
  $strongarm->value = '3';

  $export['comment_controls_magazine_article'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_controls_magazine_issue';
  $strongarm->value = '3';

  $export['comment_controls_magazine_issue'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_controls_magazine_publication';
  $strongarm->value = '3';

  $export['comment_controls_magazine_publication'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_magazine_article';
  $strongarm->value = '4';

  $export['comment_default_mode_magazine_article'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_magazine_issue';
  $strongarm->value = '4';

  $export['comment_default_mode_magazine_issue'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_magazine_publication';
  $strongarm->value = '4';

  $export['comment_default_mode_magazine_publication'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_order_magazine_article';
  $strongarm->value = '1';

  $export['comment_default_order_magazine_article'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_order_magazine_issue';
  $strongarm->value = '1';

  $export['comment_default_order_magazine_issue'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_order_magazine_publication';
  $strongarm->value = '1';

  $export['comment_default_order_magazine_publication'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_magazine_article';
  $strongarm->value = '50';

  $export['comment_default_per_page_magazine_article'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_magazine_issue';
  $strongarm->value = '50';

  $export['comment_default_per_page_magazine_issue'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_magazine_publication';
  $strongarm->value = '50';

  $export['comment_default_per_page_magazine_publication'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_magazine_article';
  $strongarm->value = '0';

  $export['comment_form_location_magazine_article'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_magazine_issue';
  $strongarm->value = '0';

  $export['comment_form_location_magazine_issue'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_magazine_publication';
  $strongarm->value = '0';

  $export['comment_form_location_magazine_publication'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_magazine_article';
  $strongarm->value = '0';

  $export['comment_magazine_article'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_magazine_issue';
  $strongarm->value = '0';

  $export['comment_magazine_issue'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_magazine_publication';
  $strongarm->value = '0';

  $export['comment_magazine_publication'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_magazine_article';
  $strongarm->value = '1';

  $export['comment_preview_magazine_article'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_magazine_issue';
  $strongarm->value = '1';

  $export['comment_preview_magazine_issue'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_magazine_publication';
  $strongarm->value = '1';

  $export['comment_preview_magazine_publication'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_magazine_article';
  $strongarm->value = '1';

  $export['comment_subject_field_magazine_article'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_magazine_issue';
  $strongarm->value = '1';

  $export['comment_subject_field_magazine_issue'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_magazine_publication';
  $strongarm->value = '1';

  $export['comment_subject_field_magazine_publication'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_magazine_article';
  $strongarm->value = array(
    'title' => '-5',
    'body_field' => '-4',
    'revision_information' => '2',
    'author' => '3',
    'options' => '4',
    'comment_settings' => '7',
    'menu' => '0',
    'path' => '6',
    'attachments' => '5',
    'workflow' => '1',
  );

  $export['content_extra_weights_magazine_article'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_magazine_issue';
  $strongarm->value = array(
    'title' => '-5',
    'body_field' => '-4',
    'revision_information' => '1',
    'author' => '2',
    'options' => '3',
    'comment_settings' => '6',
    'menu' => '-1',
    'path' => '5',
    'attachments' => '4',
    'workflow' => '0',
  );

  $export['content_extra_weights_magazine_issue'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_magazine_publication';
  $strongarm->value = array(
    'title' => '-5',
    'body_field' => '-2',
    'revision_information' => '1',
    'author' => '2',
    'options' => '3',
    'comment_settings' => '6',
    'menu' => '-1',
    'path' => '5',
    'attachments' => '4',
    'workflow' => '0',
  );

  $export['content_extra_weights_magazine_publication'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_magazine_article';
  $strongarm->value = '0';

  $export['language_content_type_magazine_article'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_magazine_issue';
  $strongarm->value = '0';

  $export['language_content_type_magazine_issue'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_magazine_publication';
  $strongarm->value = '0';

  $export['language_content_type_magazine_publication'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_magazine_article';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );

  $export['node_options_magazine_article'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_magazine_issue';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );

  $export['node_options_magazine_issue'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_magazine_publication';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );

  $export['node_options_magazine_publication'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'upload_magazine_article';
  $strongarm->value = '1';

  $export['upload_magazine_article'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'upload_magazine_issue';
  $strongarm->value = '1';

  $export['upload_magazine_issue'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'upload_magazine_publication';
  $strongarm->value = '1';

  $export['upload_magazine_publication'] = $strongarm;
  return $export;
}

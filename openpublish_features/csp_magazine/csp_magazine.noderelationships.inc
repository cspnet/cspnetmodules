<?php

/**
 * Implementation of hook_noderelationships_default_settings().
 */
function csp_magazine_noderelationships_default_settings() {
  $export = array();
  $noderelationships_default_setting = new stdClass;
  $noderelationships_default_setting->disabled = FALSE; /* Edit this to true to make a default noderelationships_default_setting disabled initially */
  $noderelationships_default_setting->api_version = 1;
  $noderelationships_default_setting->type_name = 'magazine_issue';
  $noderelationships_default_setting->relation_type = 'backref';
  $noderelationships_default_setting->related_type = 'magazine_article';
  $noderelationships_default_setting->field_name = 'field_magazine_article_issue_pub';
  $noderelationships_default_setting->settings = array(
    'weight' => '0',
    'back_reference_view' => '',
    'region' => 'page',
  );
  $noderelationships_default_setting->export_key = 'magazine_issue__backref__magazine_article__field_magazine_articl';
  $export['magazine_issue__backref__magazine_article__field_magazine_articl'] = $noderelationships_default_setting;

  return $export;
}

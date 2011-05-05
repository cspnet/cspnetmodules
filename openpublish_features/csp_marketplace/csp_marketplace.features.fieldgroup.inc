<?php

/**
 * Implementation of hook_fieldgroup_default_groups().
 */
function csp_marketplace_fieldgroup_default_groups() {
  $groups = array();

  // Exported group: group_company_info
  $groups['marketplace-group_company_info'] = array(
    'group_type' => 'standard',
    'type_name' => 'marketplace',
    'group_name' => 'group_company_info',
    'label' => 'Company Info',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset',
        'description' => '',
      ),
      'display' => array(
        'description' => '',
        'label' => 'above',
        'teaser' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'full' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '2' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '3' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'token' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
      ),
    ),
    'weight' => '-2',
    'fields' => array(
      '0' => 'field_company_name',
      '1' => 'field_company_contact',
      '2' => 'field_company_address',
      '3' => 'field_company_phone',
      '4' => 'field_links',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Company Info');

  return $groups;
}

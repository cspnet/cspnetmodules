<?php

/**
 * Implementation of hook_fieldgroup_default_groups().
 */
function op_article_fieldgroup_default_groups() {
  $groups = array();

  // Exported group: group_articleclassification
  $groups['article-group_articleclassification'] = array(
    'group_type' => 'standard',
    'type_name' => 'article',
    'group_name' => 'group_articleclassification',
    'label' => 'Article Classification',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset_collapsible',
        'description' => 'Set the publication source, section and article general tagging options.',
      ),
      'display' => array(
        'weight' => '9',
        'label' => 'above',
        'teaser' => array(
          'format' => 'fieldset_collapsible',
          'exclude' => 0,
        ),
        'full' => array(
          'format' => 'hidden',
          'exclude' => 0,
        ),
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'description' => 'Set the publication source and article tagging options.',
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
    'weight' => '9',
    'fields' => array(
      '0' => 'field_pubsource',
      '1' => 'field_newssection',
      '2' => 'field_newsflash',
      '3' => 'field_publishto_cspedia_companie',
      '4' => 'field_publishto_cspedia_people',
      '5' => 'field_publishto_tobaccoenews',
      '6' => 'field_featured_retailers',
      '7' => 'field_featured_suppliers',
      '8' => 'field_articlespotlight',
    ),
  );

  // Exported group: group_attachments_related
  $groups['article-group_attachments_related'] = array(
    'group_type' => 'standard',
    'type_name' => 'article',
    'group_name' => 'group_attachments_related',
    'label' => 'Related Content',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset_collapsed',
        'description' => '',
      ),
      'display' => array(
        'weight' => '14',
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
        'description' => '',
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
    'weight' => '14',
    'fields' => array(
      '0' => 'field_related_content',
      '1' => 'field_op_related_mmedia',
    ),
  );

  // Exported group: group_authoring
  $groups['article-group_authoring'] = array(
    'group_type' => 'standard',
    'type_name' => 'article',
    'group_name' => 'group_authoring',
    'label' => 'Article Author(s)',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset_collapsed',
        'description' => '',
      ),
      'display' => array(
        'weight' => '18',
        'label' => 'above',
        'teaser' => array(
          'format' => 'fieldset_collapsed',
          'exclude' => 0,
        ),
        'full' => array(
          'format' => 'fieldset_collapsed',
          'exclude' => 1,
        ),
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'description' => '',
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
    'weight' => '18',
    'fields' => array(
      '0' => 'field_show_author_info',
      '1' => 'field_op_author',
    ),
  );

  // Exported group: group_catspecific_newsletters
  $groups['article-group_catspecific_newsletters'] = array(
    'group_type' => 'standard',
    'type_name' => 'article',
    'group_name' => 'group_catspecific_newsletters',
    'label' => 'Category Specific Newsletters ONLY',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset',
        'description' => '',
      ),
      'display' => array(
        'weight' => '12',
        'label' => 'above',
        'teaser' => array(
          'format' => 'fieldset_collapsed',
          'exclude' => 0,
        ),
        'full' => array(
          'format' => 'fieldset_collapsed',
          'exclude' => 0,
        ),
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'description' => '',
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
    'weight' => '12',
    'fields' => array(
      '0' => 'field_catspecific_articles',
    ),
  );

  // Exported group: group_dnewsplacement
  $groups['article-group_dnewsplacement'] = array(
    'group_type' => 'standard',
    'type_name' => 'article',
    'group_name' => 'group_dnewsplacement',
    'label' => 'Placement - Daily News ONLY',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset_collapsible',
        'description' => '',
      ),
      'display' => array(
        'weight' => '11',
        'label' => 'above',
        'teaser' => array(
          'format' => 'fieldset_collapsible',
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
        'description' => '',
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
    'weight' => '11',
    'fields' => array(
      '0' => 'field_dnews_catplacement',
      '1' => 'field_mobile_dnewsplacement',
    ),
  );

  // Exported group: group_internal_tagging
  $groups['article-group_internal_tagging'] = array(
    'group_type' => 'standard',
    'type_name' => 'article',
    'group_name' => 'group_internal_tagging',
    'label' => 'For Editorial Usage Tagging Only',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset',
        'description' => '',
      ),
      'display' => array(
        'weight' => '13',
        'label' => 'above',
        'teaser' => array(
          'format' => 'fieldset_collapsed',
          'exclude' => 0,
        ),
        'full' => array(
          'format' => 'fieldset_collapsed',
          'exclude' => 0,
        ),
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'description' => '',
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
    'weight' => '13',
    'fields' => array(
      '0' => 'field_editorial_tags',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Article Author(s)');
  t('Article Classification');
  t('Category Specific Newsletters ONLY');
  t('For Editorial Usage Tagging Only');
  t('Placement - Daily News ONLY');
  t('Related Content');

  return $groups;
}

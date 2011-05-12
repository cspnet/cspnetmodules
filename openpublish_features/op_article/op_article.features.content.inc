<?php

/**
 * Implementation of hook_content_default_fields().
 */
function op_article_content_default_fields() {
  $fields = array();

  // Exported field: field_articlespotlight
  $fields['article-field_articlespotlight'] = array(
    'field_name' => 'field_articlespotlight',
    'type_name' => 'article',
    'display_settings' => array(
      'weight' => '27',
      'parent' => 'group_articleclassification',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'content_taxonomy',
    'required' => '0',
    'multiple' => '1',
    'module' => 'content_taxonomy',
    'active' => '1',
    'widget' => array(
      'group_parent' => '0',
      'show_depth' => 1,
      'default_value' => array(
        '0' => array(
          'value' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Article Spotlight',
      'weight' => '28',
      'description' => '',
      'type' => 'content_taxonomy_options',
      'module' => 'content_taxonomy_options',
    ),
  );

  // Exported field: field_catspecific_articles
  $fields['article-field_catspecific_articles'] = array(
    'field_name' => 'field_catspecific_articles',
    'type_name' => 'article',
    'display_settings' => array(
      'weight' => '24',
      'parent' => 'group_catspecific_newsletters',
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'content_taxonomy',
    'required' => '0',
    'multiple' => '0',
    'module' => 'content_taxonomy',
    'active' => '1',
    'widget' => array(
      'group_parent' => '0',
      'show_depth' => 1,
      'default_value' => array(
        '0' => array(
          'value' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Category Analysis Placement',
      'weight' => '23',
      'description' => '',
      'type' => 'content_taxonomy_options',
      'module' => 'content_taxonomy_options',
    ),
  );

  // Exported field: field_deck
  $fields['article-field_deck'] = array(
    'field_name' => 'field_deck',
    'type_name' => 'article',
    'display_settings' => array(
      'weight' => '-4',
      'parent' => '',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_deck][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Deck',
      'weight' => '-4',
      'description' => 'A small headline running below the main headline; also called a drop head.',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_dnews_catplacement
  $fields['article-field_dnews_catplacement'] = array(
    'field_name' => 'field_dnews_catplacement',
    'type_name' => 'article',
    'display_settings' => array(
      'weight' => '22',
      'parent' => 'group_dnewsplacement',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'content_taxonomy',
    'required' => '0',
    'multiple' => '0',
    'module' => 'content_taxonomy',
    'active' => '1',
    'widget' => array(
      'group_parent' => '0',
      'show_depth' => 1,
      'default_value' => array(
        '0' => array(
          'value' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Category Placement',
      'weight' => '19',
      'description' => '',
      'type' => 'content_taxonomy_options',
      'module' => 'content_taxonomy_options',
    ),
  );

  // Exported field: field_editorial_tags
  $fields['article-field_editorial_tags'] = array(
    'field_name' => 'field_editorial_tags',
    'type_name' => 'article',
    'display_settings' => array(
      'weight' => '25',
      'parent' => 'group_internal_tagging',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'content_taxonomy',
    'required' => '0',
    'multiple' => '0',
    'module' => 'content_taxonomy',
    'active' => '1',
    'widget' => array(
      'group_parent' => '0',
      'show_depth' => 1,
      'default_value' => array(
        '0' => array(
          'value' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Editorial Tags',
      'weight' => '25',
      'description' => 'For internal Editorial tagging usage only',
      'type' => 'content_taxonomy_options',
      'module' => 'content_taxonomy_options',
    ),
  );

  // Exported field: field_featured_retailers
  $fields['article-field_featured_retailers'] = array(
    'field_name' => 'field_featured_retailers',
    'type_name' => 'article',
    'display_settings' => array(
      'weight' => '25',
      'parent' => 'group_articleclassification',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'content_taxonomy',
    'required' => '0',
    'multiple' => '1',
    'module' => 'content_taxonomy',
    'active' => '1',
    'widget' => array(
      'group_parent' => '0',
      'show_depth' => 1,
      'default_value' => array(
        '0' => array(
          'value' => NULL,
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Retailer Focus',
      'weight' => '26',
      'description' => 'Hold down CTRL to select more than one.',
      'type' => 'content_taxonomy_select',
      'module' => 'content_taxonomy_options',
    ),
  );

  // Exported field: field_featured_suppliers
  $fields['article-field_featured_suppliers'] = array(
    'field_name' => 'field_featured_suppliers',
    'type_name' => 'article',
    'display_settings' => array(
      'weight' => '26',
      'parent' => 'group_articleclassification',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'content_taxonomy',
    'required' => '0',
    'multiple' => '1',
    'module' => 'content_taxonomy',
    'active' => '1',
    'widget' => array(
      'group_parent' => '0',
      'show_depth' => 1,
      'default_value' => array(
        '0' => array(
          'value' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Supplier Focus',
      'weight' => '27',
      'description' => 'Hold down CTRL to select more than one.',
      'type' => 'content_taxonomy_select',
      'module' => 'content_taxonomy_options',
    ),
  );

  // Exported field: field_homepage_placement
  $fields['article-field_homepage_placement'] = array(
    'field_name' => 'field_homepage_placement',
    'type_name' => 'article',
    'display_settings' => array(
      'weight' => '10',
      'parent' => '',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'content_taxonomy',
    'required' => '0',
    'multiple' => '0',
    'module' => 'content_taxonomy',
    'active' => '1',
    'widget' => array(
      'group_parent' => '0',
      'show_depth' => 1,
      'default_value' => array(
        '0' => array(
          'value' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Home Page Placement',
      'weight' => '10',
      'description' => 'Top Story, Feature 1 and Feature 2 articles appear in Top News slideshow. 
News 1, 2, 3, 4 and up articles appear under Latest News. The higher the number the farther down in the list the article will appear.',
      'type' => 'content_taxonomy_select',
      'module' => 'content_taxonomy_options',
    ),
  );

  // Exported field: field_main_image
  $fields['article-field_main_image'] = array(
    'field_name' => 'field_main_image',
    'type_name' => 'article',
    'display_settings' => array(
      'weight' => '2',
      'parent' => '',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '0' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      '1' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'filefield',
    'required' => '0',
    'multiple' => '0',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '0',
    'list_default' => 1,
    'description_field' => '0',
    'widget' => array(
      'file_extensions' => 'jpg jpeg png gif',
      'file_path' => '',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '',
      'max_filesize_per_node' => '',
      'max_resolution' => '0',
      'min_resolution' => '0',
      'alt' => '',
      'custom_alt' => 0,
      'title' => '',
      'custom_title' => 1,
      'title_type' => 'textfield',
      'default_image' => NULL,
      'use_default_image' => 0,
      'imagecrop' => 1,
      'imagecrop_presets' => array(
        '400xY' => '400xY',
      ),
      'filefield_sources' => array(
        'remote' => 'remote',
        'imce' => 'imce',
        'reference' => 0,
      ),
      'filefield_source_attach_path' => NULL,
      'filefield_source_attach_absolute' => NULL,
      'filefield_source_attach_mode' => NULL,
      'filefield_source_autocomplete' => NULL,
      'label' => 'Main Image',
      'weight' => '2',
      'description' => 'Appears at the top of detail pages and as a thumbnail on list pages.',
      'type' => 'imagefield_widget',
      'module' => 'imagefield',
    ),
  );

  // Exported field: field_main_image_credit
  $fields['article-field_main_image_credit'] = array(
    'field_name' => 'field_main_image_credit',
    'type_name' => 'article',
    'display_settings' => array(
      'weight' => '4',
      'parent' => '',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_main_image_credit][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Main Image Credit',
      'weight' => '7',
      'description' => '',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_mobile_dnewsplacement
  $fields['article-field_mobile_dnewsplacement'] = array(
    'field_name' => 'field_mobile_dnewsplacement',
    'type_name' => 'article',
    'display_settings' => array(
      'weight' => '23',
      'parent' => 'group_dnewsplacement',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'content_taxonomy',
    'required' => '0',
    'multiple' => '0',
    'module' => 'content_taxonomy',
    'active' => '1',
    'widget' => array(
      'group_parent' => '0',
      'show_depth' => 1,
      'default_value' => array(
        '0' => array(
          'value' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Mobile Placement',
      'weight' => '22',
      'description' => '',
      'type' => 'content_taxonomy_options',
      'module' => 'content_taxonomy_options',
    ),
  );

  // Exported field: field_newsflash
  $fields['article-field_newsflash'] = array(
    'field_name' => 'field_newsflash',
    'type_name' => 'article',
    'display_settings' => array(
      'weight' => '21',
      'parent' => 'group_articleclassification',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'content_taxonomy',
    'required' => '0',
    'multiple' => '0',
    'module' => 'content_taxonomy',
    'active' => '1',
    'widget' => array(
      'group_parent' => '0',
      'show_depth' => 1,
      'default_value' => array(
        '0' => array(
          'value' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'News Flash',
      'weight' => '18',
      'description' => 'TIP: News Flashes should only be scheduled to be published for one day. If this is a News Flash do NOT set any placement tagging below this point. Only tag to Section and Publication Source above.',
      'type' => 'content_taxonomy_options',
      'module' => 'content_taxonomy_options',
    ),
  );

  // Exported field: field_newssection
  $fields['article-field_newssection'] = array(
    'field_name' => 'field_newssection',
    'type_name' => 'article',
    'display_settings' => array(
      'weight' => '19',
      'parent' => 'group_articleclassification',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'content_taxonomy',
    'required' => '1',
    'multiple' => '1',
    'module' => 'content_taxonomy',
    'active' => '1',
    'widget' => array(
      'group_parent' => '0',
      'show_depth' => 1,
      'default_value' => array(
        '0' => array(
          'value' => NULL,
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Section',
      'weight' => '17',
      'description' => '',
      'type' => 'content_taxonomy_select',
      'module' => 'content_taxonomy_options',
    ),
  );

  // Exported field: field_op_author
  $fields['article-field_op_author'] = array(
    'field_name' => 'field_op_author',
    'type_name' => 'article',
    'display_settings' => array(
      'weight' => '1',
      'parent' => 'group_authoring',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'nodereference',
    'required' => '0',
    'multiple' => '1',
    'module' => 'nodereference',
    'active' => '1',
    'referenceable_types' => array(
      'author' => 'author',
      'article' => 0,
      'audio' => 0,
      'blog' => 0,
      'event' => 0,
      'feed' => 0,
      'feeditem' => 0,
      'op_image' => 0,
      'package' => 0,
      'page' => 0,
      'panel' => 0,
      'resource' => 0,
      'slideshow' => 0,
      'topichub' => 0,
      'video' => 0,
    ),
    'advanced_view' => '--',
    'advanced_view_args' => '',
    'widget' => array(
      'autocomplete_match' => 'contains',
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'nid' => NULL,
          '_error_element' => 'default_value_widget][field_op_author][0][nid][nid',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Author(s)',
      'weight' => '1',
      'description' => '',
      'type' => 'nodereference_autocomplete',
      'module' => 'nodereference',
    ),
  );

  // Exported field: field_op_documentcloud_doc
  $fields['article-field_op_documentcloud_doc'] = array(
    'field_name' => 'field_op_documentcloud_doc',
    'type_name' => 'article',
    'display_settings' => array(
      'weight' => '2',
      'parent' => '',
      '4' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'document_cloud_doc',
    'required' => '0',
    'multiple' => '1',
    'module' => 'document_cloud',
    'active' => '1',
    'viewer_height' => '600',
    'viewer_width' => '980',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'url' => '',
          '_error_element' => 'value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'DocumentCloud Document',
      'weight' => '4',
      'description' => 'Create a link to a DocumentCloud document and allow users to view it on your site.  Example: http://www.documentcloud.org/documents/<document id>.html.',
      'type' => 'document_cloud_doc',
      'module' => 'document_cloud',
    ),
  );

  // Exported field: field_op_related_mmedia
  $fields['article-field_op_related_mmedia'] = array(
    'field_name' => 'field_op_related_mmedia',
    'type_name' => 'article',
    'display_settings' => array(
      'weight' => '16',
      'parent' => 'group_attachments_related',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'nodereference',
    'required' => '0',
    'multiple' => '1',
    'module' => 'nodereference',
    'active' => '1',
    'referenceable_types' => array(
      'audio' => 'audio',
      'op_image' => 'op_image',
      'slideshow' => 'slideshow',
      'video' => 'video',
      'article' => 0,
      'author' => 0,
      'blog' => 0,
      'event' => 0,
      'feed' => 0,
      'feeditem' => 0,
      'package' => 0,
      'page' => 0,
      'panel' => 0,
      'resource' => 0,
      'topichub' => 0,
    ),
    'advanced_view' => '--',
    'advanced_view_args' => '',
    'widget' => array(
      'autocomplete_match' => 'contains',
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'nid' => NULL,
          '_error_element' => 'default_value_widget][field_op_related_mmedia][0][nid][nid',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Related Multimedia',
      'weight' => '15',
      'description' => '',
      'type' => 'nodereference_autocomplete',
      'module' => 'nodereference',
    ),
  );

  // Exported field: field_publishto_cspedia_companie
  $fields['article-field_publishto_cspedia_companie'] = array(
    'field_name' => 'field_publishto_cspedia_companie',
    'type_name' => 'article',
    'display_settings' => array(
      'weight' => '22',
      'parent' => 'group_articleclassification',
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'content_taxonomy',
    'required' => '0',
    'multiple' => '0',
    'module' => 'content_taxonomy',
    'active' => '1',
    'widget' => array(
      'group_parent' => '0',
      'show_depth' => 1,
      'default_value' => array(
        '0' => array(
          'value' => NULL,
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Publish to CSPedia Companies',
      'weight' => '20',
      'description' => 'Submit this article to Company News on CSPedia\'s homepage?',
      'type' => 'content_taxonomy_options',
      'module' => 'content_taxonomy_options',
    ),
  );

  // Exported field: field_publishto_cspedia_people
  $fields['article-field_publishto_cspedia_people'] = array(
    'field_name' => 'field_publishto_cspedia_people',
    'type_name' => 'article',
    'display_settings' => array(
      'weight' => '23',
      'parent' => 'group_articleclassification',
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'content_taxonomy',
    'required' => '0',
    'multiple' => '0',
    'module' => 'content_taxonomy',
    'active' => '1',
    'widget' => array(
      'group_parent' => '0',
      'show_depth' => 1,
      'default_value' => array(
        '0' => array(
          'value' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Publish to CSPedia People',
      'weight' => '21',
      'description' => 'Submit this article to People News on CSPedia\'s homepage?',
      'type' => 'content_taxonomy_options',
      'module' => 'content_taxonomy_options',
    ),
  );

  // Exported field: field_publishto_tobaccoenews
  $fields['article-field_publishto_tobaccoenews'] = array(
    'field_name' => 'field_publishto_tobaccoenews',
    'type_name' => 'article',
    'display_settings' => array(
      'weight' => '24',
      'parent' => 'group_articleclassification',
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'content_taxonomy',
    'required' => '0',
    'multiple' => '0',
    'module' => 'content_taxonomy',
    'active' => '1',
    'widget' => array(
      'group_parent' => '0',
      'show_depth' => 1,
      'default_value' => array(
        '0' => array(
          'value' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Publish to Tobacco E-News',
      'weight' => '24',
      'description' => 'Submit this article to Tobacco E-News homepage?',
      'type' => 'content_taxonomy_options',
      'module' => 'content_taxonomy_options',
    ),
  );

  // Exported field: field_pubsource
  $fields['article-field_pubsource'] = array(
    'field_name' => 'field_pubsource',
    'type_name' => 'article',
    'display_settings' => array(
      'weight' => '18',
      'parent' => 'group_articleclassification',
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'content_taxonomy',
    'required' => '1',
    'multiple' => '0',
    'module' => 'content_taxonomy',
    'active' => '1',
    'widget' => array(
      'group_parent' => '0',
      'show_depth' => 1,
      'default_value' => array(
        '0' => array(
          'value' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Publication Source',
      'weight' => '16',
      'description' => '',
      'type' => 'content_taxonomy_options',
      'module' => 'content_taxonomy_options',
    ),
  );

  // Exported field: field_related_content
  $fields['article-field_related_content'] = array(
    'field_name' => 'field_related_content',
    'type_name' => 'article',
    'display_settings' => array(
      'weight' => '15',
      'parent' => 'group_attachments_related',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'nodereference',
    'required' => '0',
    'multiple' => '1',
    'module' => 'nodereference',
    'active' => '1',
    'referenceable_types' => array(
      'article' => 'article',
      'blog' => 'blog',
      'audio' => 0,
      'author' => 0,
      'event' => 0,
      'feed' => 0,
      'feeditem' => 0,
      'op_image' => 0,
      'package' => 0,
      'page' => 0,
      'panel' => 0,
      'resource' => 0,
      'topichub' => 0,
      'twitter_item' => 0,
      'video' => 0,
    ),
    'advanced_view' => '--',
    'advanced_view_args' => '',
    'widget' => array(
      'autocomplete_match' => 'contains',
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'nid' => NULL,
          '_error_element' => 'default_value_widget][field_related_content][0][nid][nid',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Related Content',
      'weight' => '13',
      'description' => '',
      'type' => 'nodereference_autocomplete',
      'module' => 'nodereference',
    ),
  );

  // Exported field: field_show_author_info
  $fields['article-field_show_author_info'] = array(
    'field_name' => 'field_show_author_info',
    'type_name' => 'article',
    'display_settings' => array(
      'weight' => 0,
      'parent' => 'group_authoring',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '0
Show Author Info?',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => 0,
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Show Author Info?',
      'weight' => 0,
      'description' => 'Show author information (such as name, picture and bio) after the article. (The author must be a site user with profile information.)',
      'type' => 'optionwidgets_onoff',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_slide_image
  $fields['article-field_slide_image'] = array(
    'field_name' => 'field_slide_image',
    'type_name' => 'article',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'filefield',
    'required' => '0',
    'multiple' => '0',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '0',
    'list_default' => 1,
    'description_field' => '0',
    'widget' => array(
      'file_extensions' => 'png gif jpg jpeg',
      'file_path' => 'images/slider',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '',
      'max_filesize_per_node' => '',
      'max_resolution' => '0',
      'min_resolution' => '0',
      'alt' => '',
      'custom_alt' => 0,
      'title' => '',
      'custom_title' => 0,
      'title_type' => 'textfield',
      'default_image' => NULL,
      'use_default_image' => 0,
      'imagecrop' => 0,
      'imagecrop_presets' => array(
        '400xY' => 0,
        'author_photo' => 0,
      ),
      'filefield_sources' => array(
        'imce' => 0,
        'remote' => 0,
        'reference' => 0,
        'attach' => 0,
      ),
      'filefield_source_attach_path' => 'file_attach',
      'filefield_source_attach_absolute' => '0',
      'filefield_source_attach_mode' => 'move',
      'filefield_source_autocomplete' => '0',
      'label' => 'Slide Image',
      'weight' => '3',
      'description' => 'Add a large image for a slider here.',
      'type' => 'imagefield_widget',
      'module' => 'imagefield',
    ),
  );

  // Exported field: field_teaser
  $fields['article-field_teaser'] = array(
    'field_name' => 'field_teaser',
    'type_name' => 'article',
    'display_settings' => array(
      'weight' => '-1',
      'parent' => '',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '1',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => '5',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_teaser][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Teaser',
      'weight' => '-2',
      'description' => '',
      'type' => 'text_textarea',
      'module' => 'text',
    ),
  );

  // Exported field: field_thumbnail_image
  $fields['article-field_thumbnail_image'] = array(
    'field_name' => 'field_thumbnail_image',
    'type_name' => 'article',
    'display_settings' => array(
      'weight' => '3',
      'parent' => '',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'image_plain',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'image_plain',
        'exclude' => 1,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'filefield',
    'required' => '0',
    'multiple' => '0',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '0',
    'list_default' => 1,
    'description_field' => '0',
    'widget' => array(
      'file_extensions' => 'jpg jpeg png gif',
      'file_path' => '',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '',
      'max_filesize_per_node' => '',
      'max_resolution' => '0',
      'min_resolution' => '0',
      'alt' => '',
      'custom_alt' => 0,
      'title' => '',
      'custom_title' => 0,
      'title_type' => 'textfield',
      'default_image' => NULL,
      'use_default_image' => 0,
      'imagecrop' => 0,
      'imagecrop_presets' => array(
        'author_photo' => 0,
      ),
      'filefield_sources' => array(
        'remote' => 'remote',
        'imce' => 'imce',
        'reference' => 0,
      ),
      'filefield_source_attach_path' => NULL,
      'filefield_source_attach_absolute' => NULL,
      'filefield_source_attach_mode' => NULL,
      'filefield_source_autocomplete' => NULL,
      'label' => 'Thumbnail Image',
      'weight' => '5',
      'description' => '',
      'type' => 'imagefield_widget',
      'module' => 'imagefield',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Article Spotlight');
  t('Author(s)');
  t('Category Analysis Placement');
  t('Category Placement');
  t('Deck');
  t('DocumentCloud Document');
  t('Editorial Tags');
  t('Home Page Placement');
  t('Main Image');
  t('Main Image Credit');
  t('Mobile Placement');
  t('News Flash');
  t('Publication Source');
  t('Publish to CSPedia Companies');
  t('Publish to CSPedia People');
  t('Publish to Tobacco E-News');
  t('Related Content');
  t('Related Multimedia');
  t('Retailer Focus');
  t('Section');
  t('Show Author Info?');
  t('Slide Image');
  t('Supplier Focus');
  t('Teaser');
  t('Thumbnail Image');

  return $fields;
}

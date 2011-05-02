<?php

/**
 * Implementation of hook_taxonomy_default_vocabularies().
 */
function csp_taxonomy_taxonomy_default_vocabularies() {
  return array(
    'article_spotlight' => array(
      'name' => 'Spotlight Article',
      'description' => 'Editor\'s Picks, CSP Exclusives and New Flashes',
      'help' => '',
      'relations' => '1',
      'hierarchy' => '0',
      'multiple' => '1',
      'required' => '0',
      'tags' => '0',
      'module' => 'features_article_spotlight',
      'weight' => '0',
      'nodes' => array(
        'article' => 'article',
      ),
    ),
    'articles_homepage' => array(
      'name' => 'Home Page Articles',
      'description' => 'Articles that appear on homepage',
      'help' => 'Articles pulled from ALL news sources that appear on homepage. ',
      'relations' => '1',
      'hierarchy' => '1',
      'multiple' => '0',
      'required' => '0',
      'tags' => '0',
      'module' => 'features_articles_homepage',
      'weight' => '0',
      'nodes' => array(
        'article' => 'article',
      ),
    ),
    'articles_mobiletopstories' => array(
      'name' => 'Mobile Top Stories',
      'description' => 'Mobile Top Stories tab placement for Daily News article usage only',
      'help' => 'Mobile Top Stories tab placement. For Daily News article usage only. Tag article according to how it ran in Daily News.',
      'relations' => '1',
      'hierarchy' => '1',
      'multiple' => '0',
      'required' => '0',
      'tags' => '0',
      'module' => 'features_articles_mobiletopstories',
      'weight' => '0',
      'nodes' => array(
        'article' => 'article',
      ),
    ),
    'categoryarticles_dnews' => array(
      'name' => 'Category Daily News Articles',
      'description' => 'Category placement for Daily News article usage only',
      'help' => 'Category placement for Daily News article usage only',
      'relations' => '1',
      'hierarchy' => '1',
      'multiple' => '0',
      'required' => '0',
      'tags' => '0',
      'module' => 'features_categoryarticles_dnews',
      'weight' => '0',
      'nodes' => array(
        'article' => 'article',
      ),
    ),
    'categoryspecific_articles' => array(
      'name' => 'Category Analysis Newsletters',
      'description' => 'Category placement for Category analysis newsletters only (not Daily News)',
      'help' => 'Category placement for Category analysis newsletters only (not Daily News).',
      'relations' => '1',
      'hierarchy' => '1',
      'multiple' => '0',
      'required' => '0',
      'tags' => '0',
      'module' => 'features_categoryspecific_articles',
      'weight' => '0',
      'nodes' => array(
        'article' => 'article',
      ),
    ),
    'cspedia_companies' => array(
      'name' => 'CSPedia Companies',
      'description' => 'Publish this article to CSPedia Companies feed',
      'help' => 'Publish this article to CSPedia Companies feed',
      'relations' => '1',
      'hierarchy' => '0',
      'multiple' => '0',
      'required' => '0',
      'tags' => '0',
      'module' => 'features_cspedia_companies',
      'weight' => '0',
      'nodes' => array(
        'video' => 'video',
        'article' => 'article',
      ),
    ),
    'cspedia_people' => array(
      'name' => 'CSPedia People',
      'description' => 'Publish this article to CSPedia People feed',
      'help' => 'Publish this article to CSPedia People feed',
      'relations' => '1',
      'hierarchy' => '0',
      'multiple' => '0',
      'required' => '0',
      'tags' => '0',
      'module' => 'features_cspedia_people',
      'weight' => '0',
      'nodes' => array(
        'video' => 'video',
        'article' => 'article',
      ),
    ),
    'editorialusage_only' => array(
      'name' => 'Editorial Usage Only',
      'description' => 'Used for internal tagging purposes only',
      'help' => 'Used for internal tagging purposes only',
      'relations' => '1',
      'hierarchy' => '0',
      'multiple' => '1',
      'required' => '0',
      'tags' => '0',
      'module' => 'features_editorialusage_only',
      'weight' => '0',
      'nodes' => array(
        'article' => 'article',
      ),
    ),
    'featured_retailers' => array(
      'name' => 'Featured Retailers',
      'description' => 'Featured retailers correspond to CSPedia Companies',
      'help' => 'Featured retailers correspond to CSPedia Companies',
      'relations' => '1',
      'hierarchy' => '1',
      'multiple' => '1',
      'required' => '0',
      'tags' => '0',
      'module' => 'features_featured_retailers',
      'weight' => '0',
      'nodes' => array(
        'article' => 'article',
        'video' => 'video',
      ),
    ),
    'featured_suppliers' => array(
      'name' => 'Featured Suppliers',
      'description' => 'Featured Suppliers correspond to supplier advertisers',
      'help' => 'Featured Suppliers correspond to supplier advertisers',
      'relations' => '1',
      'hierarchy' => '1',
      'multiple' => '1',
      'required' => '0',
      'tags' => '0',
      'module' => 'features_featured_suppliers',
      'weight' => '0',
      'nodes' => array(
        'article' => 'article',
        'video' => 'video',
      ),
    ),
    'news_flash' => array(
      'name' => 'News Flash',
      'description' => '',
      'help' => '',
      'relations' => '1',
      'hierarchy' => '0',
      'multiple' => '0',
      'required' => '0',
      'tags' => '0',
      'module' => 'features_news_flash',
      'weight' => '0',
      'nodes' => array(
        'article' => 'article',
      ),
    ),
    'publication_source' => array(
      'name' => 'Publication Source',
      'description' => 'The newsletter the article source',
      'help' => '',
      'relations' => '1',
      'hierarchy' => '0',
      'multiple' => '0',
      'required' => '1',
      'tags' => '0',
      'module' => 'features_publication_source',
      'weight' => '0',
      'type' => NULL,
      'nodes' => array(),
    ),
    'tobaccoenews_feed' => array(
      'name' => 'Tobacco E-News',
      'description' => 'Publish this article to Tobacco E-News',
      'help' => 'Publish this article to Tobacco E-News',
      'relations' => '1',
      'hierarchy' => '0',
      'multiple' => '0',
      'required' => '0',
      'tags' => '0',
      'module' => 'features_tobaccoenews_feed',
      'weight' => '0',
      'nodes' => array(
        'article' => 'article',
      ),
    ),
    'topic' => array(
      'name' => 'Topic',
      'description' => 'The section the content belongs to',
      'help' => '',
      'relations' => '1',
      'hierarchy' => '0',
      'multiple' => '1',
      'required' => '1',
      'tags' => '0',
      'module' => 'features_topic',
      'weight' => '-1',
      'nodes' => array(
        'video' => 'video',
        'slideshow' => 'slideshow',
        'op_image' => 'op_image',
        'event' => 'event',
        'blog' => 'blog',
        'audio' => 'audio',
      ),
    ),
  );
}
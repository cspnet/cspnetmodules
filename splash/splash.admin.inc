<?php

function splash_admin_when() {
	$splash_when = variable_get('splash_when', array());

	$form['general'] = array(
		'#type' => 'fieldset',
		'#title' => t('Settings'),
	);	
  $form['general']['frequency'] = array(
	  '#type' => 'select', 
	  '#title' => t('Display with frequency'), 
	  '#default_value' => $splash_when['frequency'],
	  '#options' => array(
	  	''				=> t('Never (off)'),
		  'always'	=> t('Always'),
		  'once'		=> t('Once'),
		  'daily'		=> t('Daily'),
		  'weekly'	=> t('Weekly'),
		), 
	  '#description' => t('How often should visitors see the splash page?'),
	);
	$form['general']['cookie'] = array(
		'#type' => 'checkbox',
		'#title' => t('Force display on next visit'), 
		'#description' => t('Reset the name of the cookie to force the display of the splash on next visit.  This is useful to preview changes to the splash content in development.'),
		'#default_value' => 0,
	);
	
	if (module_exists('condition')) {
		$form = array_merge($form, module_invoke('condition', 'selection_form', $splash_when['conditions']));
	}
	
	$form = system_settings_form($form);
	
	unset($form['#submit']);
	
	return $form;
}

function splash_admin_when_submit($form, &$form_state) {
	
  if ($op == t('Reset to defaults')) {
	  variable_del('splash_when');
	  
    drupal_set_message(t('The configuration options have been reset to their default values.'));
  }
  
  else {
	  $splash_when = variable_get('splash_when', array());
		$splash_when['frequency'] = $form_state['values']['frequency'];
		
		if ($form_state['values']['cookie']) {
			$splash_when['cookie'] = 'splash_cookie_'.time();
		}
		
		if (module_exists('condition')) {
			$splash_when['conditions'] = $form_state['values']['conditions'];
		}
		
		variable_set('splash_when', $splash_when);
		  
    drupal_set_message(t('The configuration options have been saved.'));
  }
  
  cache_clear_all();
  drupal_rebuild_theme_registry();
}

function splash_admin_what() {
	$splash_what = variable_get('splash_what', array());

	$form['splash_what'] = array(
		'#tree' => TRUE,
	);
  $form['splash_what']['mode'] = array(
    '#type' => 'select',
    '#title' => t('Content mode'),
    '#options' => array(
    	'' => t('Pick random path or URL from the list'),
    	'sequence' => t('Pick next path or URL from the list'),
    	'template' => t('Display entered text in the site template'),
    	'fullscreen' => t('Display entered text/HTML full screen'),
    ),
    '#default_value' => $splash_what['mode'],
    '#description' => t('Determines how the content field below will be used.'),
  );
  
  $form['splash_what']['content'] = array(
    '#type' => 'textarea',
    '#title' => t('Content'),
    '#default_value' => $splash_what['content'],
    '#description' => t('Text to show or paths/URLs (one on each line) to use.  To open a non-Drupal path, use an absolute URL, i.e. http://example.com/splash.html'),
  );

  $form['splash_what']['filter'] = filter_form($splash_what['format']);
  $form['splash_what']['format'] = array(
  	'#type' => 'value',
  	'#value' => $splash_what['format'],
  );  
	
  $form['#submit'][] = 'splash_admin_what_submit';
  
  return system_settings_form($form);
}

function splash_admin_what_submit($form, &$form_state) {
	$form_state['values']['splash_what']['format'] = $form_state['values']['format'];
}

function splash_admin_how() {
	$splash_how = variable_get('splash_how', array());
	
	$options = array(
		'redirect' => t('Redirect'),
		'window' => t('Open in new window'),
	);
  if (module_exists('thickbox')) {
    $options['thickbox'] = t('Open in ThickBox');
  }
  else {
    drupal_set_message(t('This module now uses the <a href="http://drupal.org/project/thickbox">Thickbox</a> contributed module rather than bundling it\'s own copy of Thickbox.  Please go to the <a href="http://drupal.org/project/thickbox">Thickbox project page</a> and download it if you wish to use Thickbox to display splash pages.'));
  }
  if (module_exists('lightbox2')) {
    $options['lightbox2'] = t('Open in Lightbox2');
  }
	
	$form['splash_how'] = array(
		'#tree' => TRUE,
	);
  $form['splash_how']['mode'] = array(
    '#type' => 'radios',
    '#required' => TRUE,
    '#title' => t('Display mode'),
    '#options' => $options,
    '#default_value' => $splash_how['mode'],
    '#description' => t('Redirect to the splash page, open it in a new window or in a fancy !thickbox.', array('!thickbox' => l(t('ThickBox'), 'http://jquery.com/demo/thickbox/'))),
  );
  $form['splash_how']['size'] = array(
    '#type' => 'textfield',
    '#title' => t('Window/Box size'),
    '#default_value' => $splash_how['size'],
    '#description' => t('Size (<code>WIDTHxHEIGHT</code>, e.g. 400x300) of the window or ThickBox.'),
  );
	
	return system_settings_form($form);
}

function splash_admin_how_validate($form, &$form_state) {
	
	if (!empty($form_state['values']['splash_how']['size']) && !preg_match('/^[1-9][0-9]*x[1-9][0-9]*$/i', $form_state['values']['splash_how']['size'])) {
		form_set_error('size', t('Invalid Window/Box size. Use <code>WIDTHxHEIGHT</code>, e.g. 400x300.'));
	} 
}

?>
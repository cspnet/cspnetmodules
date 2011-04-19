<?php
// $Id: condition.admin.inc,v 1.5 2008/02/14 09:28:56 fokke Exp $

/**
* Listing conditions.
*/
function condition_list_form(&$form_state) {
	$conditions = condition_load();
	
	if (count($conditions)) {
		
		foreach ($conditions as $condition) {
			$form['conditions'][$condition->cid] = array(
				'#tree' => TRUE,
			);
			$form['conditions'][$condition->cid]['#item'] = $condition;
			$form['conditions'][$condition->cid]['name'] = array(
				'#value' => $condition->name,
			);
			$form['conditions'][$condition->cid]['status'] = array(
				'#type' => 'checkbox',
				'#default_value' => (bool) (isset($form_state['conditions'][$condition->cid]['status']) ? $form_state['conditions'][$condition->cid]['status'] : $condition->status),
			);
			$form['conditions'][$condition->cid]['weight'] = array(
				'#type' => 'weight',
				'#default_value' => isset($form_state['conditions'][$condition->cid]['weight']) ? $form_state['conditions'][$condition->cid]['weight'] : $condition->weight,
			);
			$form['conditions'][$condition->cid]['edit'] = array(
				'#value' => l(t('edit'), 'admin/settings/condition/'.$condition->cid.'/edit')
			);
			$form['conditions'][$condition->cid]['delete'] = array(
				'#value' => l(t('delete'), 'admin/settings/condition/'.$condition->cid.'/delete'),
			);
		}
		
		$form['submit'] = array(
			'#type' => 'submit',
			'#value' => t('Save configuration'),
		);
		
	} else {
		$form['empty'] = array('#value' => t('There are no conditions yet. !Add a condition first.', array('!Add' => l(t('Add'), 'admin/settings/condition/add'))));
	}
	
	return $form;
}

/**
* Theme: Listing rules or effects.
*/
function theme_condition_list_form($form) {
	drupal_add_tabledrag('order-conditions', 'order', 'sibling', 'condition-weight');
	
	$header = array(
		t('Condition'),
		array('data' => t('Enabled'), 'class' => 'checkbox'),
		t('Weight'),
		array('data' => t('Operations'), 'colspan' => '2'),
	);
	
	$conditions = array();
	
	foreach (element_children($form['conditions']) as $cid) {
		$form['conditions'][$cid]['weight']['#attributes']['class'] = 'condition-weight';
		
		$conditions[] = array(
			'data' => array(
				drupal_render($form['conditions'][$cid]['name']),
				array(
					'data' => drupal_render($form['conditions'][$cid]['status']),
					'class' => 'checkbox'
				),
				drupal_render($form['conditions'][$cid]['weight']),
				drupal_render($form['conditions'][$cid]['edit']),
				drupal_render($form['conditions'][$cid]['delete']),
			),
			'class' => 'draggable',
		);
	}

	$output = '';
	
	if (count($conditions)) {
		$output .= theme('table', $header, $conditions, array('id' => 'order-conditions'));
	}
	
	$output .= drupal_render($form);
	
	return $output;
}

/**
* Submit: Listing rules or effects.
*/
function condition_list_form_submit($form, &$form_state) {

	foreach (element_children($form['conditions']) as $cid) {
		$condition					= $form['conditions'][$cid]['#item'];
		$condition->weight	= $form['conditions'][$cid]['weight']['#value'];
		$condition->status	= $form['conditions'][$cid]['status']['#value'];

		condition_save($condition);
	}
}

/**
* Adding or editting a condition.
*/
function condition_edit_form(&$form_state, $condition = NULL) {
	
	if (is_object($condition)) {
		$form['#item'] = $condition;
	}

	$form['name'] = array(
		'#type' => 'textfield', 
		'#title' => t('Name'),
		'#description' => t('Name to indentify the condition.'),
		'#required' => TRUE,
		'#maxlength' => 255,
		'#default_value' => $condition->name,
	);
	
	$requirements = module_invoke_all('requirement_info');
	
	if (is_array($requirements) && count($requirements)) {

		foreach ($requirements as $requirement => $info) {
			$form['requirements'][$requirement] = array(
				'#type' => 'fieldset', 
				'#title' => t('Requirement: @requirement', array('@requirement' => $info['name'])),
				'#description' => $info['description'],
				'#collapsible' => TRUE, 
				'#collapsed' => !isset($condition->parameters[$requirement]),
			);
			
			$function														= $requirement.'_form';
			$form['requirements'][$requirement]	= array_merge($form['requirements'][$requirement], $function($condition->parameters[$requirement]));
		}
		
	} else {
		$form['requirements'] = array(
			'#type' => 'fieldset', 
			'#title' => t('Requirements'),
			'#description' => t('No requirement plug-ins found. Please !enable a module containing some or else this condition will always be met.', array('!enable' => l(t('enable'), 'admin/build/modules', array('fragment' => 'edit-status-requirements')))),
			'#collapsible' => TRUE,
			'#collapsed' => FALSE,
		);
	}

	$form['submit'] = array(
		'#type' => 'submit',
		'#value' => t('Save configuration'),
	);

	return $form;	
}

/**
* Theme: Adding or editting a condition.
*/
function theme_condition_edit_form($form) {
	
	if ($form['#item']) {
		drupal_set_title(t('Edit condition %name', array('%name' => $form['#item']->name)));
		
	} else {
		drupal_set_title(t('Add condition'));
	}
	
	return drupal_render($form);
}

/**
* Submit: Adding or editting a condition.
*/
function condition_edit_form_submit($form, &$form_state) {
	$condition							= $form['#item'] ? $form['#item'] : new StdClass();
	$condition->name				= $form_state['values']['name'];

	foreach (element_children($form['requirements']) as $requirement) {
		$function															= $requirement.'_form_submit';
		$condition->parameters[$requirement]	= $function($form, $form_state);
	}

	condition_save($condition);
	drupal_set_message(t('The condition %name has been saved.', array('%name' => $condition->name)));
	$form_state['redirect'] = 'admin/settings/condition';
}

/**
* Deleting a condition.
*/
function condition_delete_form(&$form_state, $condition) {
	$form['#item'] = $condition;
	
	return confirm_form($form, t('Are you sure you wan to delete the condition %name?', array('%name' => $condition->name)), 'admin/settings/condition');
}

/**
* Submit: Deleting a condition.
*/
function condition_delete_form_submit($form, &$form_state) {
	condition_delete($form['#item']);
	drupal_set_message(t('The condition %name has been deleted.', array('%name' => $form['#item']->name)));	
	$form_state['redirect'] = 'admin/settings/condition';
}

?>
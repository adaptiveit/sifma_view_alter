<?php

function view_alter_views_data_alter(&$data) {
	
$data['civicrm_pledge']['table']['join']['civicrm_contact'] = array(
    'left_table' => 'civicrm_contact',
    'left_field' => 'id',
    'field' => 'contact_id',
  );
  
$data['civicrm_pledge']['contact_id'] = array(
    'title' => t('Contact ID'),
    'help' => t('Contact of the pledge'),
    'field' => array(
      'handler' => 'views_handler_field_numeric',
      'click sortable' => TRUE,
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_numeric',
      'numeric' => TRUE,
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_numeric',
      'allow empty' => TRUE,
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'relationship' => array(
      'base' => 'civicrm_contact',
      'left_field' => 'id',
      'field' => 'contact_id',
      'handler' => 'views_handler_relationship',
      'label' => t('CiviCRM Contact, with custom fields'),
    ),
);
	
	
	
}

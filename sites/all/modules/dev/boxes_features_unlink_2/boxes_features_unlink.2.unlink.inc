<?php

/**
 * Unlink boxes_features_unlink_2_box().
 */
function boxes_features_unlink_2_box() {
  $export = array();

  $box = new stdClass;
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'box_5';
  $box->plugin_key = 'simple';
  $box->title = '55';
  $box->description = 'box 5';
  $box->options = array(
    'body' => '553sss',
    'format' => '1',
  );
  $export['box_5'] = $box;

 
drupal_write_record('box', $box);
  $export = array();

  $box = new stdClass;
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'box_6';
  $box->plugin_key = 'simple';
  $box->title = 'bbb';
  $box->description = 'box_6';
  $box->options = array(
    'body' => 'box_6',
    'format' => '1',
  );
  $export['box_6'] = $box;

 
drupal_write_record('box', $box);
}

/**
 * Unlink boxes_features_unlink_2_views().
 */
function boxes_features_unlink_2_views() {
$view = new view;
$view->name = 'test';
$view->description = '';
$view->tag = '';
$view->view_php = '';
$view->base_table = 'node';
$view->is_cacheable = FALSE;
$view->api_version = 2;
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
$handler = $view->new_display('default', 'Defaults', 'default');
$handler->override_option('fields', array(
  'comment' => array(
    'label' => 'Body',
    'alter' => array(
      'alter_text' => 0,
      'text' => '',
      'make_link' => 0,
      'path' => '',
      'link_class' => '',
      'alt' => '',
      'prefix' => '',
      'suffix' => '',
      'target' => '',
      'help' => '',
      'trim' => 0,
      'max_length' => '',
      'word_boundary' => 1,
      'ellipsis' => 1,
      'html' => 0,
      'strip_tags' => 0,
    ),
    'empty' => '',
    'hide_empty' => 0,
    'empty_zero' => 0,
    'exclude' => 0,
    'id' => 'comment',
    'table' => 'comments',
    'field' => 'comment',
    'relationship' => 'none',
  ),
  'thread' => array(
    'label' => 'Depth',
    'alter' => array(
      'alter_text' => 0,
      'text' => '',
      'make_link' => 0,
      'path' => '',
      'link_class' => '',
      'alt' => '',
      'prefix' => '',
      'suffix' => '',
      'target' => '',
      'help' => '',
      'trim' => 0,
      'max_length' => '',
      'word_boundary' => 1,
      'ellipsis' => 1,
      'html' => 0,
      'strip_tags' => 0,
    ),
    'empty' => '',
    'hide_empty' => 0,
    'empty_zero' => 0,
    'exclude' => 0,
    'id' => 'thread',
    'table' => 'comments',
    'field' => 'thread',
    'relationship' => 'none',
  ),
  'body' => array(
    'label' => 'Body',
    'alter' => array(
      'alter_text' => 0,
      'text' => '',
      'make_link' => 0,
      'path' => '',
      'link_class' => '',
      'alt' => '',
      'prefix' => '',
      'suffix' => '',
      'target' => '',
      'help' => '',
      'trim' => 0,
      'max_length' => '',
      'word_boundary' => 1,
      'ellipsis' => 1,
      'html' => 0,
      'strip_tags' => 0,
    ),
    'empty' => '',
    'hide_empty' => 0,
    'empty_zero' => 0,
    'exclude' => 0,
    'id' => 'body',
    'table' => 'node_revisions',
    'field' => 'body',
    'relationship' => 'none',
  ),
));
$handler->override_option('access', array(
  'type' => 'none',
));
$handler->override_option('cache', array(
  'type' => 'none',
));

$view->save();
$view = new view;
$view->name = 'test2';
$view->description = '';
$view->tag = '';
$view->view_php = '';
$view->base_table = 'node';
$view->is_cacheable = FALSE;
$view->api_version = 2;
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
$handler = $view->new_display('default', 'Defaults', 'default');
$handler->override_option('fields', array(
  'comment' => array(
    'label' => 'Body',
    'alter' => array(
      'alter_text' => 0,
      'text' => '',
      'make_link' => 0,
      'path' => '',
      'link_class' => '',
      'alt' => '',
      'prefix' => '',
      'suffix' => '',
      'target' => '',
      'help' => '',
      'trim' => 0,
      'max_length' => '',
      'word_boundary' => 1,
      'ellipsis' => 1,
      'html' => 0,
      'strip_tags' => 0,
    ),
    'empty' => '',
    'hide_empty' => 0,
    'empty_zero' => 0,
    'exclude' => 0,
    'id' => 'comment',
    'table' => 'comments',
    'field' => 'comment',
    'relationship' => 'none',
  ),
  'thread' => array(
    'label' => 'Depth',
    'alter' => array(
      'alter_text' => 0,
      'text' => '',
      'make_link' => 0,
      'path' => '',
      'link_class' => '',
      'alt' => '',
      'prefix' => '',
      'suffix' => '',
      'target' => '',
      'help' => '',
      'trim' => 0,
      'max_length' => '',
      'word_boundary' => 1,
      'ellipsis' => 1,
      'html' => 0,
      'strip_tags' => 0,
    ),
    'empty' => '',
    'hide_empty' => 0,
    'empty_zero' => 0,
    'exclude' => 0,
    'id' => 'thread',
    'table' => 'comments',
    'field' => 'thread',
    'relationship' => 'none',
  ),
  'body' => array(
    'label' => 'Body',
    'alter' => array(
      'alter_text' => 0,
      'text' => '',
      'make_link' => 0,
      'path' => '',
      'link_class' => '',
      'alt' => '',
      'prefix' => '',
      'suffix' => '',
      'target' => '',
      'help' => '',
      'trim' => 0,
      'max_length' => '',
      'word_boundary' => 1,
      'ellipsis' => 1,
      'html' => 0,
      'strip_tags' => 0,
    ),
    'empty' => '',
    'hide_empty' => 0,
    'empty_zero' => 0,
    'exclude' => 0,
    'id' => 'body',
    'table' => 'node_revisions',
    'field' => 'body',
    'relationship' => 'none',
  ),
));
$handler->override_option('access', array(
  'type' => 'none',
));
$handler->override_option('cache', array(
  'type' => 'none',
));

$view->save();
}

/**
 * Unlink boxes_features_unlink_2_rules_categories().
 */
function boxes_features_unlink_2_rules_categories() {
  $rules =  array(
    'rules' => array(
      'rules_rules_test_1' => array(
        '#type' => 'rule',
        '#set' => 'rules_rules_test',
        '#label' => 'rules_test_1',
        '#active' => 1,
        '#weight' => '0',
        '#categories' => array(
          '0' => 'rules_test',
          'boxes_features' => 'boxes_features',
        ),
        '#status' => 'default',
        '#conditions' => array(),
        '#actions' => array(
          '0' => array(
            '#weight' => 0,
            '#info' => array(
              'label' => 'Load comment by id',
              'arguments' => array(
                'cid' => array(
                  'type' => 'number',
                  'label' => 'Comment id',
                  'required' => TRUE,
                ),
              ),
              'new variables' => array(
                'comment_loaded' => array(
                  'label' => 'comment with id 990',
                  'type' => 'comment',
                  'label callback' => 'rules_action_load_comment_variable_label',
                ),
              ),
              'module' => 'Comment',
            ),
            '#name' => 'rules_action_load_comment',
            '#settings' => array(
              'cid' => '990',
              '#argument map' => array(
                'comment_loaded' => 'comment_loaded',
              ),
            ),
            '#type' => 'action',
          ),
        ),
        '#version' => 6003,
      ),
    ),
    'rule_sets' => array(
      'rules_rules_test' => array(
        'arguments' => array(
          'comment' => array(
            'label' => 'Comment',
            'type' => 'comment',
          ),
        ),
        'label' => 'rules_test',
        'status' => 'default',
        'categories' => array(
          '0' => 'rules_test',
          'boxes_features' => 'boxes_features',
        ),
      ),
    ),
  );
foreach ($rules as $item_type => $elements) {
  foreach ($elements as $name => $element) {
    rules_item_type_invoke($item_type, 'import', array(&$name, &$element));
    rules_item_save($item_type, $name, $element);
    drupal_set_message(t('Imported %label.', array('%label' => rules_get_element_label($element))));
  }
}
  $rules =  array(
    'rules' => array(
      'rules_test22' => array(
        '#type' => 'rule',
        '#set' => 'rules_test2',
        '#label' => 'test22',
        '#active' => 1,
        '#weight' => '0',
        '#categories' => array(
          '0' => 'test2',
          'boxes_features' => 'boxes_features',
        ),
        '#status' => 'default',
        '#conditions' => array(),
        '#actions' => array(
          '0' => array(
            '#weight' => 0,
            '#info' => array(
              'module' => 'Rules',
              'base' => 'rules_action_save_variable',
              'label' => 'Add a new date variable',
              'arguments' => array(
                'var_name' => array(
                  'type' => 'value',
                  'default value' => 'date',
                ),
                'date' => array(
                  'type' => 'date',
                  'label' => 'date',
                ),
              ),
              'new variables' => array(
                'date' => array(
                  'type' => 'date',
                  'label' => 'Added date',
                ),
              ),
            ),
            '#name' => 'rules_add_var_date',
            '#settings' => array(
              'date' => '2011-09-13 13:37:44',
              '#argument map' => array(
                'date' => 'date',
              ),
            ),
            '#type' => 'action',
          ),
        ),
        '#version' => 6003,
      ),
    ),
    'rule_sets' => array(
      'rules_test2' => array(
        'arguments' => array(
          'string' => array(
            'label' => 'String',
            'type' => 'string',
          ),
        ),
        'label' => 'test2',
        'status' => 'default',
        'categories' => array(
          '0' => 'test2',
          'boxes_features' => 'boxes_features',
        ),
      ),
    ),
  );
foreach ($rules as $item_type => $elements) {
  foreach ($elements as $name => $element) {
    rules_item_type_invoke($item_type, 'import', array(&$name, &$element));
    rules_item_save($item_type, $name, $element);
    drupal_set_message(t('Imported %label.', array('%label' => rules_get_element_label($element))));
  }
}
}

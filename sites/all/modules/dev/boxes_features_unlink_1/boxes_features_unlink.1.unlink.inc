<?php

/**
 * Unlink boxes_features_unlink_1_rules_categories().
 */
function boxes_features_unlink_1_rules_categories() {
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
}

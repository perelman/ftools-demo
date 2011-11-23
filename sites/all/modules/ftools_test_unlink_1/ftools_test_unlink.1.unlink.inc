<?php

/**
 * Unlink ftools_test_unlink_1_box().
 */
function ftools_test_unlink_1_box() {
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

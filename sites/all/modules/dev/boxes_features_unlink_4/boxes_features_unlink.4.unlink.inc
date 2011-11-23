<?php

/**
 * Unlink boxes_features_unlink_4_box().
 */
function boxes_features_unlink_4_box() {
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
}

<?php

/**
 * Unlink boxes_features_unlink_3_box().
 */
function boxes_features_unlink_3_box() {
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

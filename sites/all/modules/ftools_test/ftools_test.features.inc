<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function ftools_test_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "boxes" && $api == "box") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_views_api().
 */
function ftools_test_views_api() {
  return array(
    'api' => '2',
  );
}

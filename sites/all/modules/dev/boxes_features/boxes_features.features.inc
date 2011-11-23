<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function boxes_features_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "boxes" && $api == "box") {
    return array("version" => 1);
  }
}

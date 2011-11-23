<?php

/**
 * Implementation of hook_menu_default_menu_custom().
 */
function ft3_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: devel
  $menus['devel'] = array(
    'menu_name' => 'devel',
    'title' => 'Development',
    'description' => 'Development links.',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Development');
  t('Development links.');


  return $menus;
}

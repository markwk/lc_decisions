<?php

/**
 * Implementation of hook_menu_default_menu_links().
 */
function lc_decisions_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: features:decisions
  $menu_links['features:decisions'] = array(
    'menu_name' => 'features',
    'link_path' => 'decisions',
    'router_path' => 'decisions',
    'link_title' => 'Decisions',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Decisions');


  return $menu_links;
}

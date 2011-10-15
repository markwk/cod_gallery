<?php

/**
 * Implementation of hook_menu_default_menu_links().
 */
function cod_gallery_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: primary-links:gallery
  $menu_links['primary-links:gallery'] = array(
    'menu_name' => 'primary-links',
    'link_path' => 'gallery',
    'router_path' => 'gallery',
    'link_title' => 'Gallery',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-41',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Gallery');


  return $menu_links;
}

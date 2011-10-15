<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function cod_gallery_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_imagecache_default_presets().
 */
function cod_gallery_imagecache_default_presets() {
  $items = array(
    'cod_gallery' => array(
      'presetname' => 'cod_gallery',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale_and_crop',
          'data' => array(
            'width' => '200',
            'height' => '200',
          ),
        ),
      ),
    ),
  );
  return $items;
}

/**
 * Implementation of hook_node_info().
 */
function cod_gallery_node_info() {
  $items = array(
    'cod_image' => array(
      'name' => t('Image'),
      'module' => 'features',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Body'),
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function cod_gallery_views_api() {
  return array(
    'api' => '2',
  );
}

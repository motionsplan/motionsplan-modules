<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function motionsplan_exercise_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_imagecache_default_presets().
 */
function motionsplan_exercise_imagecache_default_presets() {
  $items = array(
    'exercisePicture' => array(
      'presetname' => 'exercisePicture',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale_and_crop',
          'data' => array(
            'width' => '180',
            'height' => '180',
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
function motionsplan_exercise_node_info() {
  $items = array(
    'exercise' => array(
      'name' => t('Træningsøvelse'),
      'module' => 'features',
      'description' => t('<p>Oprettelse af en træningsøvelse. Øvelsen kan bruges selvstændig eller tilknyttes programmer.</p>'),
      'has_title' => '1',
      'title_label' => t('Navn på øvelse'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function motionsplan_exercise_views_api() {
  return array(
    'api' => '2',
  );
}

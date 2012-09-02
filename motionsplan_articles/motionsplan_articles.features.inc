<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function motionsplan_articles_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_imagecache_default_presets().
 */
function motionsplan_articles_imagecache_default_presets() {
  $items = array(
    'SlideshowPicture' => array(
      'presetname' => 'SlideshowPicture',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale_and_crop',
          'data' => array(
            'width' => '700',
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
function motionsplan_articles_node_info() {
  $items = array(
    'story' => array(
      'name' => t('Artikel'),
      'module' => 'features',
      'description' => t('<p>En <em>artikel</em>, som minder om en <em>side</em>, gør det nemt at oprette og vise indhold, der informerer eller engagerer sitets besøgende. Pressemeddelelser, opslag og blog-lignende indlæg kan alle oprettes som <em>artikler</em>. Som standard vises <em>artikler</em> på sitets forside, og det er muligt for brugerne at skrive kommentarer.</p>'),
      'has_title' => '1',
      'title_label' => t('Titel'),
      'has_body' => '1',
      'body_label' => t('Indhold'),
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function motionsplan_articles_views_api() {
  return array(
    'api' => '2',
  );
}

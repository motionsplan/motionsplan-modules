<?php

/**
 * Implementation of hook_content_default_fields().
 */
function motionsplan_exercise_content_default_fields() {
  $fields = array();

  // Exported field: field_alternative_titles
  $fields['exercise-field_alternative_titles'] = array(
    'field_name' => 'field_alternative_titles',
    'type_name' => 'exercise',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '1',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_alternative_titles][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Alternative navne',
      'weight' => '-4',
      'description' => '',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_exercise_guide
  $fields['exercise-field_exercise_guide'] = array(
    'field_name' => 'field_exercise_guide',
    'type_name' => 'exercise',
    'display_settings' => array(
      'weight' => '-3',
      'parent' => '',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '0' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '1',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => '5',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_exercise_guide][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Beskrivelse af øvelsen',
      'weight' => '-2',
      'description' => 'En længere og mere præcis beskrivelse af øvelsen. Skal indeholde information om hvorledes øvelsen foregår, hvilke steps den sker i og ligende.',
      'type' => 'text_textarea',
      'module' => 'text',
    ),
  );

  // Exported field: field_exercise_images
  $fields['exercise-field_exercise_images'] = array(
    'field_name' => 'field_exercise_images',
    'type_name' => 'exercise',
    'display_settings' => array(
      'weight' => '-2',
      'parent' => '',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'exercisePicture_default',
        'exclude' => 0,
      ),
      '0' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'filefield',
    'required' => '0',
    'multiple' => '1',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => FALSE,
    'list_default' => '1',
    'description_field' => '1',
    'widget' => array(
      'file_extensions' => 'jpg jpeg png gif',
      'file_path' => 'images/exercise/pictures',
      'max_filesize_per_file' => '',
      'max_filesize_per_node' => '',
      'file_widgets' => NULL,
      'max_resolution' => '0',
      'min_resolution' => '0',
      'alt' => '',
      'custom_alt' => 0,
      'title' => '',
      'custom_title' => 0,
      'label' => 'Billeder af øvelsen',
      'weight' => 0,
      'description' => 'Upload billeder til øvelsen',
      'type' => 'imagefield_widget',
      'module' => 'imagefield',
    ),
  );

  // Exported field: field_exercise_intro
  $fields['exercise-field_exercise_intro'] = array(
    'field_name' => 'field_exercise_intro',
    'type_name' => 'exercise',
    'display_settings' => array(
      'weight' => '-4',
      'parent' => '',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '0' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '1',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => '3',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_exercise_intro][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Introduktion til øvelse',
      'weight' => '-3',
      'description' => 'En kort beskrivelse af øvelsen. Vises på lister hvor øvelsen indgår samt som introduktion på siden hvor man ser øvelsen. ',
      'type' => 'text_textarea',
      'module' => 'text',
    ),
  );

  // Exported field: field_exercise_videos
  $fields['exercise-field_exercise_videos'] = array(
    'field_name' => 'field_exercise_videos',
    'type_name' => 'exercise',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'emvideo',
    'required' => '0',
    'multiple' => '1',
    'module' => 'emvideo',
    'active' => '1',
    'widget' => array(
      'video_width' => '425',
      'video_height' => '350',
      'video_autoplay' => 0,
      'preview_width' => '425',
      'preview_height' => '350',
      'preview_autoplay' => 0,
      'thumbnail_width' => '120',
      'thumbnail_height' => '90',
      'thumbnail_default_path' => '',
      'thumbnail_link_title' => 'Se video',
      'providers' => array(),
      'default_value' => array(
        '0' => array(
          'embed' => '',
          'value' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Video af øvelsen',
      'weight' => '2',
      'description' => '',
      'type' => 'emvideo_textfields',
      'module' => 'emvideo',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Alternative navne');
  t('Beskrivelse af øvelsen');
  t('Billeder af øvelsen');
  t('Introduktion til øvelse');
  t('Video af øvelsen');

  return $fields;
}

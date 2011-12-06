<?php

/**
 * Implementation of hook_strongarm().
 */
function lc_decisions_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_decisions_selection';
  $strongarm->value = 0;
  $export['comment_anonymous_decisions_selection'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_controls_decisions_selection';
  $strongarm->value = '1';
  $export['comment_controls_decisions_selection'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_decisions_selection';
  $strongarm->value = '2';
  $export['comment_decisions_selection'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_decisions_selection';
  $strongarm->value = '4';
  $export['comment_default_mode_decisions_selection'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_order_decisions_selection';
  $strongarm->value = '1';
  $export['comment_default_order_decisions_selection'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_decisions_selection';
  $strongarm->value = '50';
  $export['comment_default_per_page_decisions_selection'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_decisions_selection';
  $strongarm->value = '1';
  $export['comment_form_location_decisions_selection'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_decisions_selection';
  $strongarm->value = '1';
  $export['comment_preview_decisions_selection'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_decisions_selection';
  $strongarm->value = '0';
  $export['comment_subject_field_decisions_selection'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_upload_decisions_selection';
  $strongarm->value = '0';
  $export['comment_upload_decisions_selection'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_upload_images_decisions_selection';
  $strongarm->value = 'none';
  $export['comment_upload_images_decisions_selection'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'enable_revisions_page_decisions_selection';
  $strongarm->value = 1;
  $export['enable_revisions_page_decisions_selection'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'form_build_id_decisions_selection';
  $strongarm->value = 'form-5c807104ddc2b4d0b15036f4e63caec4';
  $export['form_build_id_decisions_selection'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_decisions_selection';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );
  $export['node_options_decisions_selection'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'og_content_type_usage_decisions_selection';
  $strongarm->value = 'group_post_standard';
  $export['og_content_type_usage_decisions_selection'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'upload_decisions_selection';
  $strongarm->value = '1';
  $export['upload_decisions_selection'] = $strongarm;

  return $export;
}

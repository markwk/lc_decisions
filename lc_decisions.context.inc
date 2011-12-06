<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function lc_decisions_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'lc-decisions';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'decisions_selection' => 'decisions_selection',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
    'views' => array(
      'values' => array(
        'decisions_select:page_1' => 'decisions_select:page_1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-decisions_select-block_1' => array(
          'module' => 'views',
          'delta' => 'decisions_select-block_1',
          'region' => 'right',
          'weight' => 0,
        ),
      ),
    ),
    'menu' => 'decisions',
  );
  $context->condition_mode = 0;
  $export['lc-decisions'] = $context;

  return $export;
}

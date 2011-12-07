<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function lc_decisions_user_default_permissions() {
  $permissions = array();

  // Exported permission: administer decisions
  $permissions['administer decisions'] = array(
    'name' => 'administer decisions',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: cancel own vote
  $permissions['cancel own vote'] = array(
    'name' => 'cancel own vote',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: create decisions
  $permissions['create decisions'] = array(
    'name' => 'create decisions',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'manager',
      '2' => 'teacher',
    ),
  );

  // Exported permission: delete decisions
  $permissions['delete decisions'] = array(
    'name' => 'delete decisions',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'manager',
      '2' => 'teacher',
    ),
  );

  // Exported permission: inspect all votes
  $permissions['inspect all votes'] = array(
    'name' => 'inspect all votes',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'manager',
      '2' => 'teacher',
    ),
  );

  // Exported permission: remove voters
  $permissions['remove voters'] = array(
    'name' => 'remove voters',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'manager',
      '2' => 'teacher',
    ),
  );

  // Exported permission: view decisions
  $permissions['view decisions'] = array(
    'name' => 'view decisions',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: view electoral list
  $permissions['view electoral list'] = array(
    'name' => 'view electoral list',
    'roles' => array(),
  );

  // Exported permission: vote on decisions
  $permissions['vote on decisions'] = array(
    'name' => 'vote on decisions',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  return $permissions;
}

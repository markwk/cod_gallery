<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function cod_gallery_user_default_permissions() {
  $permissions = array();

  // Exported permission: create cod_image content
  $permissions['create cod_image content'] = array(
    'name' => 'create cod_image content',
    'roles' => array(
      '0' => 'site administrator',
      '1' => 'sponsor organizer',
    ),
  );

  // Exported permission: delete any cod_image content
  $permissions['delete any cod_image content'] = array(
    'name' => 'delete any cod_image content',
    'roles' => array(),
  );

  // Exported permission: delete own cod_image content
  $permissions['delete own cod_image content'] = array(
    'name' => 'delete own cod_image content',
    'roles' => array(
      '0' => 'attendee manager',
      '1' => 'session organizer',
      '2' => 'site administrator',
      '3' => 'sponsor organizer',
    ),
  );

  // Exported permission: edit any cod_image content
  $permissions['edit any cod_image content'] = array(
    'name' => 'edit any cod_image content',
    'roles' => array(
      '0' => 'session organizer',
      '1' => 'site administrator',
      '2' => 'sponsor organizer',
    ),
  );

  // Exported permission: edit field_cod_image
  $permissions['edit field_cod_image'] = array(
    'name' => 'edit field_cod_image',
    'roles' => array(
      '0' => 'session organizer',
      '1' => 'site administrator',
      '2' => 'sponsor organizer',
    ),
  );

  // Exported permission: edit own cod_image content
  $permissions['edit own cod_image content'] = array(
    'name' => 'edit own cod_image content',
    'roles' => array(
      '0' => 'attendee manager',
    ),
  );

  // Exported permission: view field_cod_image
  $permissions['view field_cod_image'] = array(
    'name' => 'view field_cod_image',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
    ),
  );

  return $permissions;
}

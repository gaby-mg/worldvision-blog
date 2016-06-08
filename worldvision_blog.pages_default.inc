<?php
/**
 * @file
 * worldvision_blog.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function worldvision_blog_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__panel_context_6f76f6cf-38f0-46ce-a12d-a7edbe8558b5';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Blog Post Page',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'actualidad' => 'actualidad',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'bootstrap_threecol_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'middle' => NULL,
      'right' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '66b27024-ca51-4c74-913d-6c51f6cc770e';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-475f7534-8a67-4a76-acef-488d5a55bfbd';
    $pane->panel = 'bottom';
    $pane->type = 'block';
    $pane->subtype = 'views-related_blog_posts-block';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '475f7534-8a67-4a76-acef-488d5a55bfbd';
    $display->content['new-475f7534-8a67-4a76-acef-488d5a55bfbd'] = $pane;
    $display->panels['bottom'][0] = 'new-475f7534-8a67-4a76-acef-488d5a55bfbd';
    $pane = new stdClass();
    $pane->pid = 'new-479810db-13f9-456f-b392-9b4c36229d0b';
    $pane->panel = 'bottom';
    $pane->type = 'block';
    $pane->subtype = 'block-1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Suscríbete a nuestro newsletter',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '479810db-13f9-456f-b392-9b4c36229d0b';
    $display->content['new-479810db-13f9-456f-b392-9b4c36229d0b'] = $pane;
    $display->panels['bottom'][1] = 'new-479810db-13f9-456f-b392-9b4c36229d0b';
    $pane = new stdClass();
    $pane->pid = 'new-d72d970e-3fe0-4c9b-931c-e89b325d6135';
    $pane->panel = 'middle';
    $pane->type = 'entity_view';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'd72d970e-3fe0-4c9b-931c-e89b325d6135';
    $display->content['new-d72d970e-3fe0-4c9b-931c-e89b325d6135'] = $pane;
    $display->panels['middle'][0] = 'new-d72d970e-3fe0-4c9b-931c-e89b325d6135';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__panel_context_6f76f6cf-38f0-46ce-a12d-a7edbe8558b5'] = $handler;

  return $export;
}

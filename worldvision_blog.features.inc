<?php
/**
 * @file
 * worldvision_blog.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function worldvision_blog_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function worldvision_blog_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function worldvision_blog_node_info() {
  $items = array(
    'actualidad' => array(
      'name' => t('Blog Post'),
      'base' => 'node_content',
      'description' => t('Use <em>blog posts</em> instead of the default <em>Article</em> content type for <strong>World Vision</strong> time-sensitive content.'),
      'has_title' => '1',
      'title_label' => t('Título'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

<?php
/**
 * @file
 * job_postings.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function job_postings_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function job_postings_node_info() {
  $items = array(
    'job_application' => array(
      'name' => t('Job Application'),
      'base' => 'node_content',
      'description' => t('For anyone applying to a specific job.  node relation to the Job Posting content type'),
      'has_title' => '1',
      'title_label' => t('Name (First, Last)'),
      'help' => '',
    ),
    'job_posting' => array(
      'name' => t('Job Posting'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Job Name'),
      'help' => '',
    ),
  );
  return $items;
}

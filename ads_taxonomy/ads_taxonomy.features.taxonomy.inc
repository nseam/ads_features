<?php
/**
 * @file
 * ads_taxonomy.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function ads_taxonomy_taxonomy_default_vocabularies() {
  return array(
    'categories' => array(
      'name' => 'Categories',
      'machine_name' => 'categories',
      'description' => 'List of division names of things regarded as having particular shared characteristics.',
      'hierarchy' => 0,
      'module' => '',
      'weight' => 0,
      'language' => 'und',
      'i18n_mode' => 4,
    ),
    'locations' => array(
      'name' => 'Locations',
      'machine_name' => 'locations',
      'description' => '',
      'hierarchy' => 2,
      'module' => '',
      'weight' => 0,
      'language' => 'und',
      'i18n_mode' => 1,
    ),
  );
}

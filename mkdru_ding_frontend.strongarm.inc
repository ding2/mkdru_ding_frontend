<?php
/**
 * @file
 * mkdru_ding_frontend.strongarm.inc
 */

/**
 * Implementation of hook_strongarm().
 */
function mkdru_ding_frontend_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mkdru_defaults';
  $strongarm->value = array(
    'title' => '',
    'pz2_path' => '/pazpar2/search.pz2',
    'use_sessions' => 1,
    'sp' => array(
      'user' => '',
      'pass' => '',
    ),
    'facets' => array(
      'source' => array(
        'displayName' => 'Source',
        'pz2Name' => 'xtargets',
        'limiter' => NULL,
        'multiLimit' => 0,
        'max' => 10,
        'orderWeight' => 1,
      ),
      'subject' => array(
        'displayName' => 'Subject',
        'pz2Name' => 'subject',
        'limiter' => 'su',
        'multiLimit' => 1,
        'max' => 10,
        'orderWeight' => 2,
      ),
      'author' => array(
        'displayName' => 'Author',
        'pz2Name' => 'author',
        'limiter' => 'au',
        'multiLimit' => 0,
        'max' => 10,
        'orderWeight' => 3,
      ),
    ),
  );
  $export['mkdru_defaults'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mkdru_ding';
  $strongarm->value = array(
    'pz2_path' => '/service-proxy/',
    'use_sessions' => 0,
    'sp' => array(
      'user' => 'DADSTest',
      'pass' => 'DADSTest',
    ),
    'facets' => array(
      'source' => array(
        'displayName' => 'Source',
        'pz2Name' => 'xtargets',
        'limiter' => '',
        'multiLimit' => 0,
        'max' => '10',
        'orderWeight' => '1',
        'remove' => 'Fjern source facet',
      ),
      'subject' => array(
        'displayName' => 'Subject',
        'pz2Name' => 'subject',
        'limiter' => 'su',
        'multiLimit' => 0,
        'max' => '10',
        'orderWeight' => '2',
        'remove' => 'Fjern subject facet',
      ),
      'author' => array(
        'displayName' => 'Author',
        'pz2Name' => 'author',
        'limiter' => 'au',
        'multiLimit' => 0,
        'max' => '10',
        'orderWeight' => '3',
        'remove' => 'Fjern author facet',
      ),
    ),
  );
  $export['mkdru_ding'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mkdru_facets';
  $strongarm->value = array(
    0 => 'source',
    1 => 'subject',
    2 => 'author',
  );
  $export['mkdru_facets'] = $strongarm;

  return $export;
}

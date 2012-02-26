<?php

function time_banks_drush_help( $command ) {
	if( $command == 'drush:time-banks-system-cron' )
		return dt('Run the time_banks system cron trigger.');
	if( $command == 'drush:time-banks-system-init' )
		return dt('Run the time_banks system init trigger.');
	if( $command == 'drush:time-banks-post-import-recalc' )
		return dt('Run the time_banks post-import recalculations.');
}

function time_banks_drush_command() {
	$items['time-banks-system-cron'] = array(
		'callback'		=> 'time_banks_drush_system_cron',
		'description'	=> 'Run the time_banks system cron trigger.',
		'aliases'		=> array('tb-cron'),
		'arguments'		=> array(
			),
		);
	$items['time-banks-system-init'] = array(
		'callback'		=> 'time_banks_drush_system_init',
		'description'	=> 'Run the time_banks system init trigger.',
		'aliases'		=> array('tb-init'),
		'arguments'		=> array(
			'shortname' => 'Short Name of the new site',
			'timebankInit' => 'Base64 Serialized Php Array',
			),
		);
	$items['time-banks-post-import-recalc'] = array(
		'callback'		=> 'time_banks_drush_post_import_recalc',
		'description'	=> 'Run the time_banks post-import recalculations.',
		'aliases'		=> array('tb-post-import'),
		'arguments'		=> array(
			),
		);
	return $items;
}

function time_banks_drush_system_cron() {
	time_banks_system_cron();
	drush_print("tb-cron successful.");
}

function time_banks_drush_system_init( $shortname='', $timebankInit='' ) {
	time_banks_system_initonce( $shortname, $timebankInit );
	drush_print("tb-init successful.");
}

function time_banks_drush_post_import_recalc() {
	time_banks_post_import_recalc();
	drush_print("tb-post-import successful.");
}

?>

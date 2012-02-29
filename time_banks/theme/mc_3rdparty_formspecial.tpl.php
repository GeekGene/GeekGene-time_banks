<?php


//TIMEBANKS MODIFICATION NOTA BENE

/*
 * This file is a customised theme implementation for TimebBanks USA
 * The best place for it is in your theme directory
 * However we are bundling it with time_banks.module for the sake of version control.
 * It will also work overwriting the original in modules/mutual_credit/webforms
 */

 
print $field_service_category_trans;
?>
<style>
 .exchange-label { padding-right: 8px; text-align: right; }
</style>
<table>
<?php
  print '<tr><td class="exchange-label">'. t('Date Service Performed') .':</td><td>'. $field_service_date .'</td></tr>';

  print '<tr><td class="exchange-label">'. t('Recipient of Service') .':</td><td>'. $payer .'</td></tr>';

  print '<tr><td class="exchange-label">'. t('Provider of Service') .':</td><td>'. $payee .'</td></tr>';

if (isset($exchange_type)) {
  print '<tr><td>'. t('Exchange type') .':</td><td>'. $exchange_type.'</td></tr>';
}
elseif(isset($state)) {
  print '<tr><td></td><td>'. $state .'</td></tr>';
}

  print '<tr><td class="exchange-label">'. t('Description of Service') .':</td><td>'. $title.'</td></tr>';

  print '<tr><td class="exchange-label">'. t('Number of Hours') .':</td><td>'. $mc_quantity;
  if (isset($cid)) print $cid;
  print '</td></tr>';

?>
</table>
<?php 
print $hidden;
print $buttons;

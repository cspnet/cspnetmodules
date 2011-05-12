<?php

/**
 * Implementation of hook_default_fe_block_boxes().
 */
function csp_home_page_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass;
  $fe_block_boxes->info = 'Get Our News';
  $fe_block_boxes->format = '2';
  $fe_block_boxes->machine_name = 'get_our_news';
  $fe_block_boxes->body = '<div class="subscribe-section clearfix">
  <a href="#" class="subscribe">subscribe</a>
  Have our award-winning news delivered right to your desk, inbox and app.

  Subscribe today to receive news from CSP!
  <a href="#" class="orange-inverted">Click here to subscribe</a>
</div>
<div class="mobile-section">
  <em>CSP DAILY NEWS <span>is Mobile!</span></em>
  <p>Take Daily News with you!<br /><a href="#">Click here</a> to download our FREE mobile app</p>
</div>';

  $export['get_our_news'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass;
  $fe_block_boxes->info = 'Main Site Inline Banner';
  $fe_block_boxes->format = '2';
  $fe_block_boxes->machine_name = 'main_site_inline_banner';
  $fe_block_boxes->body = '<img src="/sites/all/themes/csp_theme/images/ads/main-site-inline-banner.gif" alt="" />ADVERTISEMENT';

  $export['main_site_inline_banner'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass;
  $fe_block_boxes->info = 'Main Site Leaderboard';
  $fe_block_boxes->format = '2';
  $fe_block_boxes->machine_name = 'main_site_leaderboard';
  $fe_block_boxes->body = '<script src="http://bs.serving-sys.com/BurstingPipe/adServer.bs?cn=rsb&c=28&pli=2441561&PluID=0&w=970&h=66&ord=Insert_CacheBusting_Here&ucm=true&ncu=$$Insert_ClickToken_Here$$"></script>
<noscript>
<a href="Insert_ClickToken_Herehttp%3A//bs.serving-sys.com/BurstingPipe/adServer.bs%3Fcn%3Dbrd%26FlightID%3D2441561%26Page%3D%26PluID%3D0%26Pos%3D4635" target="_blank"><img src="http://bs.serving-sys.com/BurstingPipe/adServer.bs?cn=bsr&FlightID=2441561&Page=&PluID=0&Pos=4635" border=0 width=970 height=66></a>
</noscript>ADVERTISEMENT';

  $export['main_site_leaderboard'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass;
  $fe_block_boxes->info = 'Main Site Right 1';
  $fe_block_boxes->format = '2';
  $fe_block_boxes->machine_name = 'main_site_right_1';
  $fe_block_boxes->body = '<img src="/sites/all/themes/csp_theme/images/ads/main-site-right-1.gif" alt="" />ADVERTISEMENT';

  $export['main_site_right_1'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass;
  $fe_block_boxes->info = 'Main Site Right 2';
  $fe_block_boxes->format = '2';
  $fe_block_boxes->machine_name = 'main_site_right_2';
  $fe_block_boxes->body = '<img src="/sites/all/themes/csp_theme/images/ads/main-site-right-2.gif" alt="" />ADVERTISEMENT';

  $export['main_site_right_2'] = $fe_block_boxes;

  return $export;
}

<?php

/**
 * Implementation of hook_default_fe_block_boxes().
 */
function csp_sitewide_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass;
  $fe_block_boxes->info = 'Footer Links';
  $fe_block_boxes->format = '2';
  $fe_block_boxes->machine_name = 'footer_links';
  $fe_block_boxes->body = '<div class="menu-section section-1">
  CSPnet.com Membership
  <ul>
    <li><a href="#">Benefits of Membership</a></li>
    <li><a href="#">Login</a></li>
    <li><a href="#">Join</a></li>
  </ul>
</div>
<div class="menu-section section-2">
  CSPnet.com News
  <ul>
    <li><a href="#">Fuels</a></li>
    <li><a href="#">Tobacco</a></li>
    <li><a href="#">Foodservice</a></li>
    <li><a href="#">Beverages</a></li>
    <li><a href="#">Snacks and Candy</a></li>
    <li><a href="#">General Merchandise</a></li>
    <li><a href="#">Corporate</a></li>
    <li><a href="#">Technology</a></li>
    <li><a href="#">Services</a></li>
  </li>
</div>
<div class="menu-section section-3">
  CSPnet.com
  <ul>
    <li><a href="#">News Home</a></li>
    <li><a href="#">Print Publications</a></li>
    <li><a href="#">CSPTV</a></li>
    <li><a href="#">Marketplace</a></li>
    <li><a href="#">Events</a></li>
    <li><a href="#">Industry Calendar</a></li>
    <li><a href="#">CSPnetwork</a></li>
  </ul>
  <div class="divider"></div>
  <ul>
    <li><a href="#">About CSP</a></li>
    <li><a href="#">Contact CSP</a></li>
    <li><a href="#">Advertise</a></li>
    <li><a href="#">Site Map</a></li>
    <li><a href="#">Terms and Conditions</a></li>
    <li><a href="#">Privacy Policy</a></li>
  </ul>
</div>
<div class="menu-section section-4">
  Subscribe
  <ul>
    <li><a href="#">CSP Magazine</a></li>
    <li><a href="#">CSP Daily News</a></li>
    <li><a href="#">Fare Magazine</a></li>
    <li><a href="#">Foodservice Digest</a></li>
    <li><a href="#">Tobacco E-News</a></li>
    <li><a href="#">Restaurant Business</a></li>
    <li><a href="#">Foodservice Director</a></li>
    <li><a href="#">ID Report</a></li>
  </ul>
</div>';

  $export['footer_links'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass;
  $fe_block_boxes->info = 'Site Footer Banner';
  $fe_block_boxes->format = '2';
  $fe_block_boxes->machine_name = 'site_footer_banner';
  $fe_block_boxes->body = '<span>ADVERTISEMENT</span><img src="/sites/all/themes/csp_theme/images/ads/site-footer-banner.gif" alt="" />';

  $export['site_footer_banner'] = $fe_block_boxes;

  return $export;
}

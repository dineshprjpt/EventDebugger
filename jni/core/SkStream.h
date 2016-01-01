



<!DOCTYPE html>
<html>
<head>
 <meta http-equiv="Content-Type" content="text/html; charset=UTF-8" >
 <meta http-equiv="X-UA-Compatible" content="IE=edge,chrome=1" >
 
 <meta name="ROBOTS" content="NOARCHIVE">
 
 <link rel="icon" type="image/vnd.microsoft.icon" href="https://ssl.gstatic.com/codesite/ph/images/phosting.ico">
 
 
 <script type="text/javascript">
 
 
 
 
 var codesite_token = "3c8b6YIcOlWCc_Be_KDbpozno-M:1369043203764";
 
 
 var CS_env = {"loggedInUserEmail":"dineshprjpt@gmail.com","projectName":"skia","domainName":null,"assetHostPath":"https://ssl.gstatic.com/codesite/ph","relativeBaseUrl":"","projectHomeUrl":"/p/skia","token":"3c8b6YIcOlWCc_Be_KDbpozno-M:1369043203764","assetVersionPath":"https://ssl.gstatic.com/codesite/ph/10948521920255093670","profileUrl":"/u/104544769917658163163/"};
 var _gaq = _gaq || [];
 _gaq.push(
 ['siteTracker._setAccount', 'UA-18071-1'],
 ['siteTracker._trackPageview']);
 
 (function() {
 var ga = document.createElement('script'); ga.type = 'text/javascript'; ga.async = true;
 ga.src = ('https:' == document.location.protocol ? 'https://ssl' : 'http://www') + '.google-analytics.com/ga.js';
 (document.getElementsByTagName('head')[0] || document.getElementsByTagName('body')[0]).appendChild(ga);
 })();
 
 </script>
 
 
 <title>SkStream.h - 
 skia -
 
 
 2D Graphics Library - Google Project Hosting
 </title>
 <link type="text/css" rel="stylesheet" href="https://ssl.gstatic.com/codesite/ph/10948521920255093670/css/core.css">
 
 <link type="text/css" rel="stylesheet" href="https://ssl.gstatic.com/codesite/ph/10948521920255093670/css/ph_detail.css" >
 
 
 <link type="text/css" rel="stylesheet" href="https://ssl.gstatic.com/codesite/ph/10948521920255093670/css/d_sb.css" >
 
 
 
<!--[if IE]>
 <link type="text/css" rel="stylesheet" href="https://ssl.gstatic.com/codesite/ph/10948521920255093670/css/d_ie.css" >
<![endif]-->
 <style type="text/css">
 .menuIcon.off { background: no-repeat url(https://ssl.gstatic.com/codesite/ph/images/dropdown_sprite.gif) 0 -42px }
 .menuIcon.on { background: no-repeat url(https://ssl.gstatic.com/codesite/ph/images/dropdown_sprite.gif) 0 -28px }
 .menuIcon.down { background: no-repeat url(https://ssl.gstatic.com/codesite/ph/images/dropdown_sprite.gif) 0 0; }
 
 
 
  tr.inline_comment {
 background: #fff;
 vertical-align: top;
 }
 div.draft, div.published {
 padding: .3em;
 border: 1px solid #999; 
 margin-bottom: .1em;
 font-family: arial, sans-serif;
 max-width: 60em;
 }
 div.draft {
 background: #ffa;
 } 
 div.published {
 background: #e5ecf9;
 }
 div.published .body, div.draft .body {
 padding: .5em .1em .1em .1em;
 max-width: 60em;
 white-space: pre-wrap;
 white-space: -moz-pre-wrap;
 white-space: -pre-wrap;
 white-space: -o-pre-wrap;
 word-wrap: break-word;
 font-size: 1em;
 }
 div.draft .actions {
 margin-left: 1em;
 font-size: 90%;
 }
 div.draft form {
 padding: .5em .5em .5em 0;
 }
 div.draft textarea, div.published textarea {
 width: 95%;
 height: 10em;
 font-family: arial, sans-serif;
 margin-bottom: .5em;
 }

 
 .nocursor, .nocursor td, .cursor_hidden, .cursor_hidden td {
 background-color: white;
 height: 2px;
 }
 .cursor, .cursor td {
 background-color: darkblue;
 height: 2px;
 display: '';
 }
 
 
.list {
 border: 1px solid white;
 border-bottom: 0;
}

 
 </style>
</head>
<body class="t4">
<script type="text/javascript">
 window.___gcfg = {lang: 'en'};
 (function() 
 {var po = document.createElement("script");
 po.type = "text/javascript"; po.async = true;po.src = "https://apis.google.com/js/plusone.js";
 var s = document.getElementsByTagName("script")[0];
 s.parentNode.insertBefore(po, s);
 })();
</script>
<div class="headbg">

 <div id="gaia">
 

 <span>
 
 
 
 <a href="#" id="multilogin-dropdown" onclick="return false;"
 ><u><b>dineshprjpt@gmail.com</b></u> <small>&#9660;</small></a>
 
 
 | <a href="/u/104544769917658163163/" id="projects-dropdown" onclick="return false;"
 ><u>My favorites</u> <small>&#9660;</small></a>
 | <a href="/u/104544769917658163163/" onclick="_CS_click('/gb/ph/profile');"
 title="Profile, Updates, and Settings"
 ><u>Profile</u></a>
 | <a href="https://www.google.com/accounts/Logout?continue=https%3A%2F%2Fcode.google.com%2Fp%2Fskia%2Fsource%2Fbrowse%2Ftrunk%2Finclude%2Fcore%2FSkStream.h" 
 onclick="_CS_click('/gb/ph/signout');"
 ><u>Sign out</u></a>
 
 </span>

 </div>

 <div class="gbh" style="left: 0pt;"></div>
 <div class="gbh" style="right: 0pt;"></div>
 
 
 <div style="height: 1px"></div>
<!--[if lte IE 7]>
<div style="text-align:center;">
Your version of Internet Explorer is not supported. Try a browser that
contributes to open source, such as <a href="http://www.firefox.com">Firefox</a>,
<a href="http://www.google.com/chrome">Google Chrome</a>, or
<a href="http://code.google.com/chrome/chromeframe/">Google Chrome Frame</a>.
</div>
<![endif]-->



 <table style="padding:0px; margin: 0px 0px 10px 0px; width:100%" cellpadding="0" cellspacing="0"
 itemscope itemtype="http://schema.org/CreativeWork">
 <tr style="height: 58px;">
 
 
 
 <td id="plogo">
 <link itemprop="url" href="/p/skia">
 <a href="/p/skia/">
 
 <img src="https://ssl.gstatic.com/codesite/ph/images/defaultlogo.png" alt="Logo" itemprop="image">
 
 </a>
 </td>
 
 <td style="padding-left: 0.5em">
 
 <div id="pname">
 <a href="/p/skia/"><span itemprop="name">skia</span></a>
 </div>
 
 <div id="psum">
 <a id="project_summary_link"
 href="/p/skia/"><span itemprop="description">2D Graphics Library</span></a>
 
 </div>
 
 
 </td>
 <td style="white-space:nowrap;text-align:right; vertical-align:bottom;">
 
 <form action="/hosting/search">
 <input size="30" name="q" value="" type="text">
 
 <input type="submit" name="projectsearch" value="Search projects" >
 </form>
 
 </tr>
 </table>

</div>

 
<div id="mt" class="gtb"> 
 <a href="/p/skia/" class="tab ">Project&nbsp;Home</a>
 
 
 
 
 
 
 <a href="/p/skia/w/list" class="tab ">Wiki</a>
 
 
 
 
 
 <a href="/p/skia/issues/list"
 class="tab ">Issues</a>
 
 
 
 
 
 <a href="/p/skia/source/checkout"
 class="tab active">Source</a>
 
 
 
 
 
 
 
 
 <div class=gtbc></div>
</div>
<table cellspacing="0" cellpadding="0" width="100%" align="center" border="0" class="st">
 <tr>
 
 
 
 
 
 
 <td class="subt">
 <div class="st2">
 <div class="isf">
 
 


 <span class="inst1"><a href="/p/skia/source/checkout">Checkout</a></span> &nbsp;
 <span class="inst2"><a href="/p/skia/source/browse/">Browse</a></span> &nbsp;
 <span class="inst3"><a href="/p/skia/source/list">Changes</a></span> &nbsp;
 
 
 
 
 
 
 
 </form>
 <script type="text/javascript">
 
 function codesearchQuery(form) {
 var query = document.getElementById('q').value;
 if (query) { form.action += '%20' + query; }
 }
 </script>
 </div>
</div>

 </td>
 
 
 
 <td align="right" valign="top" class="bevel-right"></td>
 </tr>
</table>


<script type="text/javascript">
 var cancelBubble = false;
 function _go(url) { document.location = url; }
</script>
<div id="maincol"
 
>

 




<div class="expand">
<div id="colcontrol">
<style type="text/css">
 #file_flipper { white-space: nowrap; padding-right: 2em; }
 #file_flipper.hidden { display: none; }
 #file_flipper .pagelink { color: #0000CC; text-decoration: underline; }
 #file_flipper #visiblefiles { padding-left: 0.5em; padding-right: 0.5em; }
</style>
<table id="nav_and_rev" class="list"
 cellpadding="0" cellspacing="0" width="100%">
 <tr>
 
 <td nowrap="nowrap" class="src_crumbs src_nav" width="33%">
 <strong class="src_nav">Source path:&nbsp;</strong>
 <span id="crumb_root">
 
 <a href="/p/skia/source/browse/">svn</a>/&nbsp;</span>
 <span id="crumb_links" class="ifClosed"><a href="/p/skia/source/browse/trunk/">trunk</a><span class="sp">/&nbsp;</span><a href="/p/skia/source/browse/trunk/include/">include</a><span class="sp">/&nbsp;</span><a href="/p/skia/source/browse/trunk/include/core/">core</a><span class="sp">/&nbsp;</span>SkStream.h</span>
 
 


 </td>
 
 
 <td nowrap="nowrap" width="33%" align="center">
 <a href="/p/skia/source/browse/trunk/include/core/SkStream.h?edit=1"
 ><img src="https://ssl.gstatic.com/codesite/ph/images/pencil-y14.png"
 class="edit_icon">Edit file</a>
 </td>
 
 
 <td nowrap="nowrap" width="33%" align="right">
 <table cellpadding="0" cellspacing="0" style="font-size: 100%"><tr>
 
 
 <td class="flipper">
 <ul class="leftside">
 
 <li><a href="/p/skia/source/browse/trunk/include/core/SkStream.h?r=9039" title="Previous">&lsaquo;r9039</a></li>
 
 </ul>
 </td>
 
 <td class="flipper"><b>r9188</b></td>
 
 </tr></table>
 </td> 
 </tr>
</table>

<div class="fc">
 
 
 
<style type="text/css">
.undermouse span {
 background-image: url(https://ssl.gstatic.com/codesite/ph/images/comments.gif); }
</style>
<table class="opened" id="review_comment_area"
><tr>
<td id="nums">
<pre><table width="100%"><tr class="nocursor"><td></td></tr></table></pre>
<pre><table width="100%" id="nums_table_0"><tr id="gr_svn9188_1"

><td id="1"><a href="#1">1</a></td></tr
><tr id="gr_svn9188_2"

><td id="2"><a href="#2">2</a></td></tr
><tr id="gr_svn9188_3"

><td id="3"><a href="#3">3</a></td></tr
><tr id="gr_svn9188_4"

><td id="4"><a href="#4">4</a></td></tr
><tr id="gr_svn9188_5"

><td id="5"><a href="#5">5</a></td></tr
><tr id="gr_svn9188_6"

><td id="6"><a href="#6">6</a></td></tr
><tr id="gr_svn9188_7"

><td id="7"><a href="#7">7</a></td></tr
><tr id="gr_svn9188_8"

><td id="8"><a href="#8">8</a></td></tr
><tr id="gr_svn9188_9"

><td id="9"><a href="#9">9</a></td></tr
><tr id="gr_svn9188_10"

><td id="10"><a href="#10">10</a></td></tr
><tr id="gr_svn9188_11"

><td id="11"><a href="#11">11</a></td></tr
><tr id="gr_svn9188_12"

><td id="12"><a href="#12">12</a></td></tr
><tr id="gr_svn9188_13"

><td id="13"><a href="#13">13</a></td></tr
><tr id="gr_svn9188_14"

><td id="14"><a href="#14">14</a></td></tr
><tr id="gr_svn9188_15"

><td id="15"><a href="#15">15</a></td></tr
><tr id="gr_svn9188_16"

><td id="16"><a href="#16">16</a></td></tr
><tr id="gr_svn9188_17"

><td id="17"><a href="#17">17</a></td></tr
><tr id="gr_svn9188_18"

><td id="18"><a href="#18">18</a></td></tr
><tr id="gr_svn9188_19"

><td id="19"><a href="#19">19</a></td></tr
><tr id="gr_svn9188_20"

><td id="20"><a href="#20">20</a></td></tr
><tr id="gr_svn9188_21"

><td id="21"><a href="#21">21</a></td></tr
><tr id="gr_svn9188_22"

><td id="22"><a href="#22">22</a></td></tr
><tr id="gr_svn9188_23"

><td id="23"><a href="#23">23</a></td></tr
><tr id="gr_svn9188_24"

><td id="24"><a href="#24">24</a></td></tr
><tr id="gr_svn9188_25"

><td id="25"><a href="#25">25</a></td></tr
><tr id="gr_svn9188_26"

><td id="26"><a href="#26">26</a></td></tr
><tr id="gr_svn9188_27"

><td id="27"><a href="#27">27</a></td></tr
><tr id="gr_svn9188_28"

><td id="28"><a href="#28">28</a></td></tr
><tr id="gr_svn9188_29"

><td id="29"><a href="#29">29</a></td></tr
><tr id="gr_svn9188_30"

><td id="30"><a href="#30">30</a></td></tr
><tr id="gr_svn9188_31"

><td id="31"><a href="#31">31</a></td></tr
><tr id="gr_svn9188_32"

><td id="32"><a href="#32">32</a></td></tr
><tr id="gr_svn9188_33"

><td id="33"><a href="#33">33</a></td></tr
><tr id="gr_svn9188_34"

><td id="34"><a href="#34">34</a></td></tr
><tr id="gr_svn9188_35"

><td id="35"><a href="#35">35</a></td></tr
><tr id="gr_svn9188_36"

><td id="36"><a href="#36">36</a></td></tr
><tr id="gr_svn9188_37"

><td id="37"><a href="#37">37</a></td></tr
><tr id="gr_svn9188_38"

><td id="38"><a href="#38">38</a></td></tr
><tr id="gr_svn9188_39"

><td id="39"><a href="#39">39</a></td></tr
><tr id="gr_svn9188_40"

><td id="40"><a href="#40">40</a></td></tr
><tr id="gr_svn9188_41"

><td id="41"><a href="#41">41</a></td></tr
><tr id="gr_svn9188_42"

><td id="42"><a href="#42">42</a></td></tr
><tr id="gr_svn9188_43"

><td id="43"><a href="#43">43</a></td></tr
><tr id="gr_svn9188_44"

><td id="44"><a href="#44">44</a></td></tr
><tr id="gr_svn9188_45"

><td id="45"><a href="#45">45</a></td></tr
><tr id="gr_svn9188_46"

><td id="46"><a href="#46">46</a></td></tr
><tr id="gr_svn9188_47"

><td id="47"><a href="#47">47</a></td></tr
><tr id="gr_svn9188_48"

><td id="48"><a href="#48">48</a></td></tr
><tr id="gr_svn9188_49"

><td id="49"><a href="#49">49</a></td></tr
><tr id="gr_svn9188_50"

><td id="50"><a href="#50">50</a></td></tr
><tr id="gr_svn9188_51"

><td id="51"><a href="#51">51</a></td></tr
><tr id="gr_svn9188_52"

><td id="52"><a href="#52">52</a></td></tr
><tr id="gr_svn9188_53"

><td id="53"><a href="#53">53</a></td></tr
><tr id="gr_svn9188_54"

><td id="54"><a href="#54">54</a></td></tr
><tr id="gr_svn9188_55"

><td id="55"><a href="#55">55</a></td></tr
><tr id="gr_svn9188_56"

><td id="56"><a href="#56">56</a></td></tr
><tr id="gr_svn9188_57"

><td id="57"><a href="#57">57</a></td></tr
><tr id="gr_svn9188_58"

><td id="58"><a href="#58">58</a></td></tr
><tr id="gr_svn9188_59"

><td id="59"><a href="#59">59</a></td></tr
><tr id="gr_svn9188_60"

><td id="60"><a href="#60">60</a></td></tr
><tr id="gr_svn9188_61"

><td id="61"><a href="#61">61</a></td></tr
><tr id="gr_svn9188_62"

><td id="62"><a href="#62">62</a></td></tr
><tr id="gr_svn9188_63"

><td id="63"><a href="#63">63</a></td></tr
><tr id="gr_svn9188_64"

><td id="64"><a href="#64">64</a></td></tr
><tr id="gr_svn9188_65"

><td id="65"><a href="#65">65</a></td></tr
><tr id="gr_svn9188_66"

><td id="66"><a href="#66">66</a></td></tr
><tr id="gr_svn9188_67"

><td id="67"><a href="#67">67</a></td></tr
><tr id="gr_svn9188_68"

><td id="68"><a href="#68">68</a></td></tr
><tr id="gr_svn9188_69"

><td id="69"><a href="#69">69</a></td></tr
><tr id="gr_svn9188_70"

><td id="70"><a href="#70">70</a></td></tr
><tr id="gr_svn9188_71"

><td id="71"><a href="#71">71</a></td></tr
><tr id="gr_svn9188_72"

><td id="72"><a href="#72">72</a></td></tr
><tr id="gr_svn9188_73"

><td id="73"><a href="#73">73</a></td></tr
><tr id="gr_svn9188_74"

><td id="74"><a href="#74">74</a></td></tr
><tr id="gr_svn9188_75"

><td id="75"><a href="#75">75</a></td></tr
><tr id="gr_svn9188_76"

><td id="76"><a href="#76">76</a></td></tr
><tr id="gr_svn9188_77"

><td id="77"><a href="#77">77</a></td></tr
><tr id="gr_svn9188_78"

><td id="78"><a href="#78">78</a></td></tr
><tr id="gr_svn9188_79"

><td id="79"><a href="#79">79</a></td></tr
><tr id="gr_svn9188_80"

><td id="80"><a href="#80">80</a></td></tr
><tr id="gr_svn9188_81"

><td id="81"><a href="#81">81</a></td></tr
><tr id="gr_svn9188_82"

><td id="82"><a href="#82">82</a></td></tr
><tr id="gr_svn9188_83"

><td id="83"><a href="#83">83</a></td></tr
><tr id="gr_svn9188_84"

><td id="84"><a href="#84">84</a></td></tr
><tr id="gr_svn9188_85"

><td id="85"><a href="#85">85</a></td></tr
><tr id="gr_svn9188_86"

><td id="86"><a href="#86">86</a></td></tr
><tr id="gr_svn9188_87"

><td id="87"><a href="#87">87</a></td></tr
><tr id="gr_svn9188_88"

><td id="88"><a href="#88">88</a></td></tr
><tr id="gr_svn9188_89"

><td id="89"><a href="#89">89</a></td></tr
><tr id="gr_svn9188_90"

><td id="90"><a href="#90">90</a></td></tr
><tr id="gr_svn9188_91"

><td id="91"><a href="#91">91</a></td></tr
><tr id="gr_svn9188_92"

><td id="92"><a href="#92">92</a></td></tr
><tr id="gr_svn9188_93"

><td id="93"><a href="#93">93</a></td></tr
><tr id="gr_svn9188_94"

><td id="94"><a href="#94">94</a></td></tr
><tr id="gr_svn9188_95"

><td id="95"><a href="#95">95</a></td></tr
><tr id="gr_svn9188_96"

><td id="96"><a href="#96">96</a></td></tr
><tr id="gr_svn9188_97"

><td id="97"><a href="#97">97</a></td></tr
><tr id="gr_svn9188_98"

><td id="98"><a href="#98">98</a></td></tr
><tr id="gr_svn9188_99"

><td id="99"><a href="#99">99</a></td></tr
><tr id="gr_svn9188_100"

><td id="100"><a href="#100">100</a></td></tr
><tr id="gr_svn9188_101"

><td id="101"><a href="#101">101</a></td></tr
><tr id="gr_svn9188_102"

><td id="102"><a href="#102">102</a></td></tr
><tr id="gr_svn9188_103"

><td id="103"><a href="#103">103</a></td></tr
><tr id="gr_svn9188_104"

><td id="104"><a href="#104">104</a></td></tr
><tr id="gr_svn9188_105"

><td id="105"><a href="#105">105</a></td></tr
><tr id="gr_svn9188_106"

><td id="106"><a href="#106">106</a></td></tr
><tr id="gr_svn9188_107"

><td id="107"><a href="#107">107</a></td></tr
><tr id="gr_svn9188_108"

><td id="108"><a href="#108">108</a></td></tr
><tr id="gr_svn9188_109"

><td id="109"><a href="#109">109</a></td></tr
><tr id="gr_svn9188_110"

><td id="110"><a href="#110">110</a></td></tr
><tr id="gr_svn9188_111"

><td id="111"><a href="#111">111</a></td></tr
><tr id="gr_svn9188_112"

><td id="112"><a href="#112">112</a></td></tr
><tr id="gr_svn9188_113"

><td id="113"><a href="#113">113</a></td></tr
><tr id="gr_svn9188_114"

><td id="114"><a href="#114">114</a></td></tr
><tr id="gr_svn9188_115"

><td id="115"><a href="#115">115</a></td></tr
><tr id="gr_svn9188_116"

><td id="116"><a href="#116">116</a></td></tr
><tr id="gr_svn9188_117"

><td id="117"><a href="#117">117</a></td></tr
><tr id="gr_svn9188_118"

><td id="118"><a href="#118">118</a></td></tr
><tr id="gr_svn9188_119"

><td id="119"><a href="#119">119</a></td></tr
><tr id="gr_svn9188_120"

><td id="120"><a href="#120">120</a></td></tr
><tr id="gr_svn9188_121"

><td id="121"><a href="#121">121</a></td></tr
><tr id="gr_svn9188_122"

><td id="122"><a href="#122">122</a></td></tr
><tr id="gr_svn9188_123"

><td id="123"><a href="#123">123</a></td></tr
><tr id="gr_svn9188_124"

><td id="124"><a href="#124">124</a></td></tr
><tr id="gr_svn9188_125"

><td id="125"><a href="#125">125</a></td></tr
><tr id="gr_svn9188_126"

><td id="126"><a href="#126">126</a></td></tr
><tr id="gr_svn9188_127"

><td id="127"><a href="#127">127</a></td></tr
><tr id="gr_svn9188_128"

><td id="128"><a href="#128">128</a></td></tr
><tr id="gr_svn9188_129"

><td id="129"><a href="#129">129</a></td></tr
><tr id="gr_svn9188_130"

><td id="130"><a href="#130">130</a></td></tr
><tr id="gr_svn9188_131"

><td id="131"><a href="#131">131</a></td></tr
><tr id="gr_svn9188_132"

><td id="132"><a href="#132">132</a></td></tr
><tr id="gr_svn9188_133"

><td id="133"><a href="#133">133</a></td></tr
><tr id="gr_svn9188_134"

><td id="134"><a href="#134">134</a></td></tr
><tr id="gr_svn9188_135"

><td id="135"><a href="#135">135</a></td></tr
><tr id="gr_svn9188_136"

><td id="136"><a href="#136">136</a></td></tr
><tr id="gr_svn9188_137"

><td id="137"><a href="#137">137</a></td></tr
><tr id="gr_svn9188_138"

><td id="138"><a href="#138">138</a></td></tr
><tr id="gr_svn9188_139"

><td id="139"><a href="#139">139</a></td></tr
><tr id="gr_svn9188_140"

><td id="140"><a href="#140">140</a></td></tr
><tr id="gr_svn9188_141"

><td id="141"><a href="#141">141</a></td></tr
><tr id="gr_svn9188_142"

><td id="142"><a href="#142">142</a></td></tr
><tr id="gr_svn9188_143"

><td id="143"><a href="#143">143</a></td></tr
><tr id="gr_svn9188_144"

><td id="144"><a href="#144">144</a></td></tr
><tr id="gr_svn9188_145"

><td id="145"><a href="#145">145</a></td></tr
><tr id="gr_svn9188_146"

><td id="146"><a href="#146">146</a></td></tr
><tr id="gr_svn9188_147"

><td id="147"><a href="#147">147</a></td></tr
><tr id="gr_svn9188_148"

><td id="148"><a href="#148">148</a></td></tr
><tr id="gr_svn9188_149"

><td id="149"><a href="#149">149</a></td></tr
><tr id="gr_svn9188_150"

><td id="150"><a href="#150">150</a></td></tr
><tr id="gr_svn9188_151"

><td id="151"><a href="#151">151</a></td></tr
><tr id="gr_svn9188_152"

><td id="152"><a href="#152">152</a></td></tr
><tr id="gr_svn9188_153"

><td id="153"><a href="#153">153</a></td></tr
><tr id="gr_svn9188_154"

><td id="154"><a href="#154">154</a></td></tr
><tr id="gr_svn9188_155"

><td id="155"><a href="#155">155</a></td></tr
><tr id="gr_svn9188_156"

><td id="156"><a href="#156">156</a></td></tr
><tr id="gr_svn9188_157"

><td id="157"><a href="#157">157</a></td></tr
><tr id="gr_svn9188_158"

><td id="158"><a href="#158">158</a></td></tr
><tr id="gr_svn9188_159"

><td id="159"><a href="#159">159</a></td></tr
><tr id="gr_svn9188_160"

><td id="160"><a href="#160">160</a></td></tr
><tr id="gr_svn9188_161"

><td id="161"><a href="#161">161</a></td></tr
><tr id="gr_svn9188_162"

><td id="162"><a href="#162">162</a></td></tr
><tr id="gr_svn9188_163"

><td id="163"><a href="#163">163</a></td></tr
><tr id="gr_svn9188_164"

><td id="164"><a href="#164">164</a></td></tr
><tr id="gr_svn9188_165"

><td id="165"><a href="#165">165</a></td></tr
><tr id="gr_svn9188_166"

><td id="166"><a href="#166">166</a></td></tr
><tr id="gr_svn9188_167"

><td id="167"><a href="#167">167</a></td></tr
><tr id="gr_svn9188_168"

><td id="168"><a href="#168">168</a></td></tr
><tr id="gr_svn9188_169"

><td id="169"><a href="#169">169</a></td></tr
><tr id="gr_svn9188_170"

><td id="170"><a href="#170">170</a></td></tr
><tr id="gr_svn9188_171"

><td id="171"><a href="#171">171</a></td></tr
><tr id="gr_svn9188_172"

><td id="172"><a href="#172">172</a></td></tr
><tr id="gr_svn9188_173"

><td id="173"><a href="#173">173</a></td></tr
><tr id="gr_svn9188_174"

><td id="174"><a href="#174">174</a></td></tr
><tr id="gr_svn9188_175"

><td id="175"><a href="#175">175</a></td></tr
><tr id="gr_svn9188_176"

><td id="176"><a href="#176">176</a></td></tr
><tr id="gr_svn9188_177"

><td id="177"><a href="#177">177</a></td></tr
><tr id="gr_svn9188_178"

><td id="178"><a href="#178">178</a></td></tr
><tr id="gr_svn9188_179"

><td id="179"><a href="#179">179</a></td></tr
><tr id="gr_svn9188_180"

><td id="180"><a href="#180">180</a></td></tr
><tr id="gr_svn9188_181"

><td id="181"><a href="#181">181</a></td></tr
><tr id="gr_svn9188_182"

><td id="182"><a href="#182">182</a></td></tr
><tr id="gr_svn9188_183"

><td id="183"><a href="#183">183</a></td></tr
><tr id="gr_svn9188_184"

><td id="184"><a href="#184">184</a></td></tr
><tr id="gr_svn9188_185"

><td id="185"><a href="#185">185</a></td></tr
><tr id="gr_svn9188_186"

><td id="186"><a href="#186">186</a></td></tr
><tr id="gr_svn9188_187"

><td id="187"><a href="#187">187</a></td></tr
><tr id="gr_svn9188_188"

><td id="188"><a href="#188">188</a></td></tr
><tr id="gr_svn9188_189"

><td id="189"><a href="#189">189</a></td></tr
><tr id="gr_svn9188_190"

><td id="190"><a href="#190">190</a></td></tr
><tr id="gr_svn9188_191"

><td id="191"><a href="#191">191</a></td></tr
><tr id="gr_svn9188_192"

><td id="192"><a href="#192">192</a></td></tr
><tr id="gr_svn9188_193"

><td id="193"><a href="#193">193</a></td></tr
><tr id="gr_svn9188_194"

><td id="194"><a href="#194">194</a></td></tr
><tr id="gr_svn9188_195"

><td id="195"><a href="#195">195</a></td></tr
><tr id="gr_svn9188_196"

><td id="196"><a href="#196">196</a></td></tr
><tr id="gr_svn9188_197"

><td id="197"><a href="#197">197</a></td></tr
><tr id="gr_svn9188_198"

><td id="198"><a href="#198">198</a></td></tr
><tr id="gr_svn9188_199"

><td id="199"><a href="#199">199</a></td></tr
><tr id="gr_svn9188_200"

><td id="200"><a href="#200">200</a></td></tr
><tr id="gr_svn9188_201"

><td id="201"><a href="#201">201</a></td></tr
><tr id="gr_svn9188_202"

><td id="202"><a href="#202">202</a></td></tr
><tr id="gr_svn9188_203"

><td id="203"><a href="#203">203</a></td></tr
><tr id="gr_svn9188_204"

><td id="204"><a href="#204">204</a></td></tr
><tr id="gr_svn9188_205"

><td id="205"><a href="#205">205</a></td></tr
><tr id="gr_svn9188_206"

><td id="206"><a href="#206">206</a></td></tr
><tr id="gr_svn9188_207"

><td id="207"><a href="#207">207</a></td></tr
><tr id="gr_svn9188_208"

><td id="208"><a href="#208">208</a></td></tr
><tr id="gr_svn9188_209"

><td id="209"><a href="#209">209</a></td></tr
><tr id="gr_svn9188_210"

><td id="210"><a href="#210">210</a></td></tr
><tr id="gr_svn9188_211"

><td id="211"><a href="#211">211</a></td></tr
><tr id="gr_svn9188_212"

><td id="212"><a href="#212">212</a></td></tr
><tr id="gr_svn9188_213"

><td id="213"><a href="#213">213</a></td></tr
><tr id="gr_svn9188_214"

><td id="214"><a href="#214">214</a></td></tr
><tr id="gr_svn9188_215"

><td id="215"><a href="#215">215</a></td></tr
><tr id="gr_svn9188_216"

><td id="216"><a href="#216">216</a></td></tr
><tr id="gr_svn9188_217"

><td id="217"><a href="#217">217</a></td></tr
><tr id="gr_svn9188_218"

><td id="218"><a href="#218">218</a></td></tr
><tr id="gr_svn9188_219"

><td id="219"><a href="#219">219</a></td></tr
><tr id="gr_svn9188_220"

><td id="220"><a href="#220">220</a></td></tr
><tr id="gr_svn9188_221"

><td id="221"><a href="#221">221</a></td></tr
><tr id="gr_svn9188_222"

><td id="222"><a href="#222">222</a></td></tr
><tr id="gr_svn9188_223"

><td id="223"><a href="#223">223</a></td></tr
><tr id="gr_svn9188_224"

><td id="224"><a href="#224">224</a></td></tr
><tr id="gr_svn9188_225"

><td id="225"><a href="#225">225</a></td></tr
><tr id="gr_svn9188_226"

><td id="226"><a href="#226">226</a></td></tr
><tr id="gr_svn9188_227"

><td id="227"><a href="#227">227</a></td></tr
><tr id="gr_svn9188_228"

><td id="228"><a href="#228">228</a></td></tr
><tr id="gr_svn9188_229"

><td id="229"><a href="#229">229</a></td></tr
><tr id="gr_svn9188_230"

><td id="230"><a href="#230">230</a></td></tr
><tr id="gr_svn9188_231"

><td id="231"><a href="#231">231</a></td></tr
><tr id="gr_svn9188_232"

><td id="232"><a href="#232">232</a></td></tr
><tr id="gr_svn9188_233"

><td id="233"><a href="#233">233</a></td></tr
><tr id="gr_svn9188_234"

><td id="234"><a href="#234">234</a></td></tr
><tr id="gr_svn9188_235"

><td id="235"><a href="#235">235</a></td></tr
><tr id="gr_svn9188_236"

><td id="236"><a href="#236">236</a></td></tr
><tr id="gr_svn9188_237"

><td id="237"><a href="#237">237</a></td></tr
><tr id="gr_svn9188_238"

><td id="238"><a href="#238">238</a></td></tr
><tr id="gr_svn9188_239"

><td id="239"><a href="#239">239</a></td></tr
><tr id="gr_svn9188_240"

><td id="240"><a href="#240">240</a></td></tr
><tr id="gr_svn9188_241"

><td id="241"><a href="#241">241</a></td></tr
><tr id="gr_svn9188_242"

><td id="242"><a href="#242">242</a></td></tr
><tr id="gr_svn9188_243"

><td id="243"><a href="#243">243</a></td></tr
><tr id="gr_svn9188_244"

><td id="244"><a href="#244">244</a></td></tr
><tr id="gr_svn9188_245"

><td id="245"><a href="#245">245</a></td></tr
><tr id="gr_svn9188_246"

><td id="246"><a href="#246">246</a></td></tr
><tr id="gr_svn9188_247"

><td id="247"><a href="#247">247</a></td></tr
><tr id="gr_svn9188_248"

><td id="248"><a href="#248">248</a></td></tr
><tr id="gr_svn9188_249"

><td id="249"><a href="#249">249</a></td></tr
><tr id="gr_svn9188_250"

><td id="250"><a href="#250">250</a></td></tr
><tr id="gr_svn9188_251"

><td id="251"><a href="#251">251</a></td></tr
><tr id="gr_svn9188_252"

><td id="252"><a href="#252">252</a></td></tr
><tr id="gr_svn9188_253"

><td id="253"><a href="#253">253</a></td></tr
><tr id="gr_svn9188_254"

><td id="254"><a href="#254">254</a></td></tr
><tr id="gr_svn9188_255"

><td id="255"><a href="#255">255</a></td></tr
><tr id="gr_svn9188_256"

><td id="256"><a href="#256">256</a></td></tr
><tr id="gr_svn9188_257"

><td id="257"><a href="#257">257</a></td></tr
><tr id="gr_svn9188_258"

><td id="258"><a href="#258">258</a></td></tr
><tr id="gr_svn9188_259"

><td id="259"><a href="#259">259</a></td></tr
><tr id="gr_svn9188_260"

><td id="260"><a href="#260">260</a></td></tr
><tr id="gr_svn9188_261"

><td id="261"><a href="#261">261</a></td></tr
><tr id="gr_svn9188_262"

><td id="262"><a href="#262">262</a></td></tr
><tr id="gr_svn9188_263"

><td id="263"><a href="#263">263</a></td></tr
><tr id="gr_svn9188_264"

><td id="264"><a href="#264">264</a></td></tr
><tr id="gr_svn9188_265"

><td id="265"><a href="#265">265</a></td></tr
><tr id="gr_svn9188_266"

><td id="266"><a href="#266">266</a></td></tr
><tr id="gr_svn9188_267"

><td id="267"><a href="#267">267</a></td></tr
><tr id="gr_svn9188_268"

><td id="268"><a href="#268">268</a></td></tr
><tr id="gr_svn9188_269"

><td id="269"><a href="#269">269</a></td></tr
><tr id="gr_svn9188_270"

><td id="270"><a href="#270">270</a></td></tr
><tr id="gr_svn9188_271"

><td id="271"><a href="#271">271</a></td></tr
><tr id="gr_svn9188_272"

><td id="272"><a href="#272">272</a></td></tr
><tr id="gr_svn9188_273"

><td id="273"><a href="#273">273</a></td></tr
><tr id="gr_svn9188_274"

><td id="274"><a href="#274">274</a></td></tr
><tr id="gr_svn9188_275"

><td id="275"><a href="#275">275</a></td></tr
><tr id="gr_svn9188_276"

><td id="276"><a href="#276">276</a></td></tr
><tr id="gr_svn9188_277"

><td id="277"><a href="#277">277</a></td></tr
><tr id="gr_svn9188_278"

><td id="278"><a href="#278">278</a></td></tr
><tr id="gr_svn9188_279"

><td id="279"><a href="#279">279</a></td></tr
><tr id="gr_svn9188_280"

><td id="280"><a href="#280">280</a></td></tr
><tr id="gr_svn9188_281"

><td id="281"><a href="#281">281</a></td></tr
><tr id="gr_svn9188_282"

><td id="282"><a href="#282">282</a></td></tr
><tr id="gr_svn9188_283"

><td id="283"><a href="#283">283</a></td></tr
><tr id="gr_svn9188_284"

><td id="284"><a href="#284">284</a></td></tr
><tr id="gr_svn9188_285"

><td id="285"><a href="#285">285</a></td></tr
><tr id="gr_svn9188_286"

><td id="286"><a href="#286">286</a></td></tr
><tr id="gr_svn9188_287"

><td id="287"><a href="#287">287</a></td></tr
><tr id="gr_svn9188_288"

><td id="288"><a href="#288">288</a></td></tr
><tr id="gr_svn9188_289"

><td id="289"><a href="#289">289</a></td></tr
><tr id="gr_svn9188_290"

><td id="290"><a href="#290">290</a></td></tr
><tr id="gr_svn9188_291"

><td id="291"><a href="#291">291</a></td></tr
><tr id="gr_svn9188_292"

><td id="292"><a href="#292">292</a></td></tr
><tr id="gr_svn9188_293"

><td id="293"><a href="#293">293</a></td></tr
><tr id="gr_svn9188_294"

><td id="294"><a href="#294">294</a></td></tr
><tr id="gr_svn9188_295"

><td id="295"><a href="#295">295</a></td></tr
><tr id="gr_svn9188_296"

><td id="296"><a href="#296">296</a></td></tr
><tr id="gr_svn9188_297"

><td id="297"><a href="#297">297</a></td></tr
><tr id="gr_svn9188_298"

><td id="298"><a href="#298">298</a></td></tr
><tr id="gr_svn9188_299"

><td id="299"><a href="#299">299</a></td></tr
><tr id="gr_svn9188_300"

><td id="300"><a href="#300">300</a></td></tr
><tr id="gr_svn9188_301"

><td id="301"><a href="#301">301</a></td></tr
><tr id="gr_svn9188_302"

><td id="302"><a href="#302">302</a></td></tr
><tr id="gr_svn9188_303"

><td id="303"><a href="#303">303</a></td></tr
><tr id="gr_svn9188_304"

><td id="304"><a href="#304">304</a></td></tr
><tr id="gr_svn9188_305"

><td id="305"><a href="#305">305</a></td></tr
><tr id="gr_svn9188_306"

><td id="306"><a href="#306">306</a></td></tr
><tr id="gr_svn9188_307"

><td id="307"><a href="#307">307</a></td></tr
><tr id="gr_svn9188_308"

><td id="308"><a href="#308">308</a></td></tr
><tr id="gr_svn9188_309"

><td id="309"><a href="#309">309</a></td></tr
><tr id="gr_svn9188_310"

><td id="310"><a href="#310">310</a></td></tr
><tr id="gr_svn9188_311"

><td id="311"><a href="#311">311</a></td></tr
><tr id="gr_svn9188_312"

><td id="312"><a href="#312">312</a></td></tr
><tr id="gr_svn9188_313"

><td id="313"><a href="#313">313</a></td></tr
><tr id="gr_svn9188_314"

><td id="314"><a href="#314">314</a></td></tr
><tr id="gr_svn9188_315"

><td id="315"><a href="#315">315</a></td></tr
><tr id="gr_svn9188_316"

><td id="316"><a href="#316">316</a></td></tr
><tr id="gr_svn9188_317"

><td id="317"><a href="#317">317</a></td></tr
><tr id="gr_svn9188_318"

><td id="318"><a href="#318">318</a></td></tr
><tr id="gr_svn9188_319"

><td id="319"><a href="#319">319</a></td></tr
><tr id="gr_svn9188_320"

><td id="320"><a href="#320">320</a></td></tr
><tr id="gr_svn9188_321"

><td id="321"><a href="#321">321</a></td></tr
><tr id="gr_svn9188_322"

><td id="322"><a href="#322">322</a></td></tr
><tr id="gr_svn9188_323"

><td id="323"><a href="#323">323</a></td></tr
><tr id="gr_svn9188_324"

><td id="324"><a href="#324">324</a></td></tr
><tr id="gr_svn9188_325"

><td id="325"><a href="#325">325</a></td></tr
><tr id="gr_svn9188_326"

><td id="326"><a href="#326">326</a></td></tr
><tr id="gr_svn9188_327"

><td id="327"><a href="#327">327</a></td></tr
><tr id="gr_svn9188_328"

><td id="328"><a href="#328">328</a></td></tr
><tr id="gr_svn9188_329"

><td id="329"><a href="#329">329</a></td></tr
><tr id="gr_svn9188_330"

><td id="330"><a href="#330">330</a></td></tr
><tr id="gr_svn9188_331"

><td id="331"><a href="#331">331</a></td></tr
><tr id="gr_svn9188_332"

><td id="332"><a href="#332">332</a></td></tr
><tr id="gr_svn9188_333"

><td id="333"><a href="#333">333</a></td></tr
><tr id="gr_svn9188_334"

><td id="334"><a href="#334">334</a></td></tr
><tr id="gr_svn9188_335"

><td id="335"><a href="#335">335</a></td></tr
><tr id="gr_svn9188_336"

><td id="336"><a href="#336">336</a></td></tr
><tr id="gr_svn9188_337"

><td id="337"><a href="#337">337</a></td></tr
><tr id="gr_svn9188_338"

><td id="338"><a href="#338">338</a></td></tr
><tr id="gr_svn9188_339"

><td id="339"><a href="#339">339</a></td></tr
><tr id="gr_svn9188_340"

><td id="340"><a href="#340">340</a></td></tr
><tr id="gr_svn9188_341"

><td id="341"><a href="#341">341</a></td></tr
><tr id="gr_svn9188_342"

><td id="342"><a href="#342">342</a></td></tr
><tr id="gr_svn9188_343"

><td id="343"><a href="#343">343</a></td></tr
><tr id="gr_svn9188_344"

><td id="344"><a href="#344">344</a></td></tr
><tr id="gr_svn9188_345"

><td id="345"><a href="#345">345</a></td></tr
><tr id="gr_svn9188_346"

><td id="346"><a href="#346">346</a></td></tr
><tr id="gr_svn9188_347"

><td id="347"><a href="#347">347</a></td></tr
><tr id="gr_svn9188_348"

><td id="348"><a href="#348">348</a></td></tr
><tr id="gr_svn9188_349"

><td id="349"><a href="#349">349</a></td></tr
><tr id="gr_svn9188_350"

><td id="350"><a href="#350">350</a></td></tr
><tr id="gr_svn9188_351"

><td id="351"><a href="#351">351</a></td></tr
><tr id="gr_svn9188_352"

><td id="352"><a href="#352">352</a></td></tr
><tr id="gr_svn9188_353"

><td id="353"><a href="#353">353</a></td></tr
><tr id="gr_svn9188_354"

><td id="354"><a href="#354">354</a></td></tr
><tr id="gr_svn9188_355"

><td id="355"><a href="#355">355</a></td></tr
><tr id="gr_svn9188_356"

><td id="356"><a href="#356">356</a></td></tr
><tr id="gr_svn9188_357"

><td id="357"><a href="#357">357</a></td></tr
><tr id="gr_svn9188_358"

><td id="358"><a href="#358">358</a></td></tr
><tr id="gr_svn9188_359"

><td id="359"><a href="#359">359</a></td></tr
><tr id="gr_svn9188_360"

><td id="360"><a href="#360">360</a></td></tr
><tr id="gr_svn9188_361"

><td id="361"><a href="#361">361</a></td></tr
><tr id="gr_svn9188_362"

><td id="362"><a href="#362">362</a></td></tr
><tr id="gr_svn9188_363"

><td id="363"><a href="#363">363</a></td></tr
><tr id="gr_svn9188_364"

><td id="364"><a href="#364">364</a></td></tr
><tr id="gr_svn9188_365"

><td id="365"><a href="#365">365</a></td></tr
><tr id="gr_svn9188_366"

><td id="366"><a href="#366">366</a></td></tr
><tr id="gr_svn9188_367"

><td id="367"><a href="#367">367</a></td></tr
><tr id="gr_svn9188_368"

><td id="368"><a href="#368">368</a></td></tr
><tr id="gr_svn9188_369"

><td id="369"><a href="#369">369</a></td></tr
><tr id="gr_svn9188_370"

><td id="370"><a href="#370">370</a></td></tr
><tr id="gr_svn9188_371"

><td id="371"><a href="#371">371</a></td></tr
><tr id="gr_svn9188_372"

><td id="372"><a href="#372">372</a></td></tr
><tr id="gr_svn9188_373"

><td id="373"><a href="#373">373</a></td></tr
><tr id="gr_svn9188_374"

><td id="374"><a href="#374">374</a></td></tr
><tr id="gr_svn9188_375"

><td id="375"><a href="#375">375</a></td></tr
><tr id="gr_svn9188_376"

><td id="376"><a href="#376">376</a></td></tr
><tr id="gr_svn9188_377"

><td id="377"><a href="#377">377</a></td></tr
><tr id="gr_svn9188_378"

><td id="378"><a href="#378">378</a></td></tr
><tr id="gr_svn9188_379"

><td id="379"><a href="#379">379</a></td></tr
><tr id="gr_svn9188_380"

><td id="380"><a href="#380">380</a></td></tr
><tr id="gr_svn9188_381"

><td id="381"><a href="#381">381</a></td></tr
><tr id="gr_svn9188_382"

><td id="382"><a href="#382">382</a></td></tr
><tr id="gr_svn9188_383"

><td id="383"><a href="#383">383</a></td></tr
><tr id="gr_svn9188_384"

><td id="384"><a href="#384">384</a></td></tr
><tr id="gr_svn9188_385"

><td id="385"><a href="#385">385</a></td></tr
><tr id="gr_svn9188_386"

><td id="386"><a href="#386">386</a></td></tr
><tr id="gr_svn9188_387"

><td id="387"><a href="#387">387</a></td></tr
><tr id="gr_svn9188_388"

><td id="388"><a href="#388">388</a></td></tr
><tr id="gr_svn9188_389"

><td id="389"><a href="#389">389</a></td></tr
><tr id="gr_svn9188_390"

><td id="390"><a href="#390">390</a></td></tr
><tr id="gr_svn9188_391"

><td id="391"><a href="#391">391</a></td></tr
><tr id="gr_svn9188_392"

><td id="392"><a href="#392">392</a></td></tr
><tr id="gr_svn9188_393"

><td id="393"><a href="#393">393</a></td></tr
><tr id="gr_svn9188_394"

><td id="394"><a href="#394">394</a></td></tr
><tr id="gr_svn9188_395"

><td id="395"><a href="#395">395</a></td></tr
><tr id="gr_svn9188_396"

><td id="396"><a href="#396">396</a></td></tr
><tr id="gr_svn9188_397"

><td id="397"><a href="#397">397</a></td></tr
><tr id="gr_svn9188_398"

><td id="398"><a href="#398">398</a></td></tr
><tr id="gr_svn9188_399"

><td id="399"><a href="#399">399</a></td></tr
><tr id="gr_svn9188_400"

><td id="400"><a href="#400">400</a></td></tr
><tr id="gr_svn9188_401"

><td id="401"><a href="#401">401</a></td></tr
><tr id="gr_svn9188_402"

><td id="402"><a href="#402">402</a></td></tr
><tr id="gr_svn9188_403"

><td id="403"><a href="#403">403</a></td></tr
><tr id="gr_svn9188_404"

><td id="404"><a href="#404">404</a></td></tr
><tr id="gr_svn9188_405"

><td id="405"><a href="#405">405</a></td></tr
><tr id="gr_svn9188_406"

><td id="406"><a href="#406">406</a></td></tr
><tr id="gr_svn9188_407"

><td id="407"><a href="#407">407</a></td></tr
><tr id="gr_svn9188_408"

><td id="408"><a href="#408">408</a></td></tr
><tr id="gr_svn9188_409"

><td id="409"><a href="#409">409</a></td></tr
><tr id="gr_svn9188_410"

><td id="410"><a href="#410">410</a></td></tr
><tr id="gr_svn9188_411"

><td id="411"><a href="#411">411</a></td></tr
><tr id="gr_svn9188_412"

><td id="412"><a href="#412">412</a></td></tr
></table></pre>
<pre><table width="100%"><tr class="nocursor"><td></td></tr></table></pre>
</td>
<td id="lines">
<pre><table width="100%"><tr class="cursor_stop cursor_hidden"><td></td></tr></table></pre>
<pre class="prettyprint "><table id="src_table_0"><tr
id=sl_svn9188_1

><td class="source">/*<br></td></tr
><tr
id=sl_svn9188_2

><td class="source"> * Copyright 2006 The Android Open Source Project<br></td></tr
><tr
id=sl_svn9188_3

><td class="source"> *<br></td></tr
><tr
id=sl_svn9188_4

><td class="source"> * Use of this source code is governed by a BSD-style license that can be<br></td></tr
><tr
id=sl_svn9188_5

><td class="source"> * found in the LICENSE file.<br></td></tr
><tr
id=sl_svn9188_6

><td class="source"> */<br></td></tr
><tr
id=sl_svn9188_7

><td class="source"><br></td></tr
><tr
id=sl_svn9188_8

><td class="source">#ifndef SkStream_DEFINED<br></td></tr
><tr
id=sl_svn9188_9

><td class="source">#define SkStream_DEFINED<br></td></tr
><tr
id=sl_svn9188_10

><td class="source"><br></td></tr
><tr
id=sl_svn9188_11

><td class="source">#include &quot;SkRefCnt.h&quot;<br></td></tr
><tr
id=sl_svn9188_12

><td class="source">#include &quot;SkScalar.h&quot;<br></td></tr
><tr
id=sl_svn9188_13

><td class="source"><br></td></tr
><tr
id=sl_svn9188_14

><td class="source">class SkData;<br></td></tr
><tr
id=sl_svn9188_15

><td class="source"><br></td></tr
><tr
id=sl_svn9188_16

><td class="source">/**<br></td></tr
><tr
id=sl_svn9188_17

><td class="source"> *  SkStream -- abstraction for a source of bytes. Subclasses can be backed by<br></td></tr
><tr
id=sl_svn9188_18

><td class="source"> *  memory, or a file, or something else.<br></td></tr
><tr
id=sl_svn9188_19

><td class="source"> *<br></td></tr
><tr
id=sl_svn9188_20

><td class="source"> *  NOTE:<br></td></tr
><tr
id=sl_svn9188_21

><td class="source"> *<br></td></tr
><tr
id=sl_svn9188_22

><td class="source"> *  Classic &quot;streams&quot; APIs are sort of async, in that on a request for N<br></td></tr
><tr
id=sl_svn9188_23

><td class="source"> *  bytes, they may return fewer than N bytes on a given call, in which case<br></td></tr
><tr
id=sl_svn9188_24

><td class="source"> *  the caller can &quot;try again&quot; to get more bytes, eventually (modulo an error)<br></td></tr
><tr
id=sl_svn9188_25

><td class="source"> *  receiving their total N bytes.<br></td></tr
><tr
id=sl_svn9188_26

><td class="source"> *<br></td></tr
><tr
id=sl_svn9188_27

><td class="source"> *  Skia streams behave differently. They are effectively synchronous, and will<br></td></tr
><tr
id=sl_svn9188_28

><td class="source"> *  always return all N bytes of the request if possible. If they return fewer<br></td></tr
><tr
id=sl_svn9188_29

><td class="source"> *  (the read() call returns the number of bytes read) then that means there is<br></td></tr
><tr
id=sl_svn9188_30

><td class="source"> *  no more data (at EOF or hit an error). The caller should *not* call again<br></td></tr
><tr
id=sl_svn9188_31

><td class="source"> *  in hopes of fulfilling more of the request.<br></td></tr
><tr
id=sl_svn9188_32

><td class="source"> */<br></td></tr
><tr
id=sl_svn9188_33

><td class="source">class SK_API SkStream : public SkRefCnt {<br></td></tr
><tr
id=sl_svn9188_34

><td class="source">public:<br></td></tr
><tr
id=sl_svn9188_35

><td class="source">    /**<br></td></tr
><tr
id=sl_svn9188_36

><td class="source">     *  Attempts to open the specified file, and return a stream to it (using<br></td></tr
><tr
id=sl_svn9188_37

><td class="source">     *  mmap if available). On success, the caller must call unref() on the<br></td></tr
><tr
id=sl_svn9188_38

><td class="source">     *  returned object. On failure, returns NULL.<br></td></tr
><tr
id=sl_svn9188_39

><td class="source">     */<br></td></tr
><tr
id=sl_svn9188_40

><td class="source">    static SkStream* NewFromFile(const char path[]);<br></td></tr
><tr
id=sl_svn9188_41

><td class="source"><br></td></tr
><tr
id=sl_svn9188_42

><td class="source">    SK_DECLARE_INST_COUNT(SkStream)<br></td></tr
><tr
id=sl_svn9188_43

><td class="source"><br></td></tr
><tr
id=sl_svn9188_44

><td class="source">    /** Called to rewind to the beginning of the stream. If this cannot be<br></td></tr
><tr
id=sl_svn9188_45

><td class="source">        done, return false.<br></td></tr
><tr
id=sl_svn9188_46

><td class="source">    */<br></td></tr
><tr
id=sl_svn9188_47

><td class="source">    virtual bool rewind() = 0;<br></td></tr
><tr
id=sl_svn9188_48

><td class="source">    /** If this stream represents a file, this method returns the file&#39;s name.<br></td></tr
><tr
id=sl_svn9188_49

><td class="source">        If it does not, it returns NULL (the default behavior).<br></td></tr
><tr
id=sl_svn9188_50

><td class="source">    */<br></td></tr
><tr
id=sl_svn9188_51

><td class="source">    virtual const char* getFileName();<br></td></tr
><tr
id=sl_svn9188_52

><td class="source">    /** Called to read or skip size number of bytes.<br></td></tr
><tr
id=sl_svn9188_53

><td class="source">        If buffer is NULL and size &gt; 0, skip that many bytes, returning how many were skipped.<br></td></tr
><tr
id=sl_svn9188_54

><td class="source">        If buffer is NULL and size == 0, return the total length of the stream.<br></td></tr
><tr
id=sl_svn9188_55

><td class="source">        If buffer != NULL, copy the requested number of bytes into buffer, returning how many were copied.<br></td></tr
><tr
id=sl_svn9188_56

><td class="source">        @param buffer   If buffer is NULL, ignore and just skip size bytes, otherwise copy size bytes into buffer<br></td></tr
><tr
id=sl_svn9188_57

><td class="source">        @param size The number of bytes to skip or copy<br></td></tr
><tr
id=sl_svn9188_58

><td class="source">        @return bytes read on success<br></td></tr
><tr
id=sl_svn9188_59

><td class="source">    */<br></td></tr
><tr
id=sl_svn9188_60

><td class="source">    virtual size_t read(void* buffer, size_t size) = 0;<br></td></tr
><tr
id=sl_svn9188_61

><td class="source"><br></td></tr
><tr
id=sl_svn9188_62

><td class="source">    /** Return the total length of the stream.<br></td></tr
><tr
id=sl_svn9188_63

><td class="source">    */<br></td></tr
><tr
id=sl_svn9188_64

><td class="source">    size_t getLength() { return this-&gt;read(NULL, 0); }<br></td></tr
><tr
id=sl_svn9188_65

><td class="source"><br></td></tr
><tr
id=sl_svn9188_66

><td class="source">    /** Skip the specified number of bytes, returning the actual number<br></td></tr
><tr
id=sl_svn9188_67

><td class="source">        of bytes that could be skipped.<br></td></tr
><tr
id=sl_svn9188_68

><td class="source">    */<br></td></tr
><tr
id=sl_svn9188_69

><td class="source">    size_t skip(size_t bytes);<br></td></tr
><tr
id=sl_svn9188_70

><td class="source"><br></td></tr
><tr
id=sl_svn9188_71

><td class="source">    /** If the stream is backed by RAM, this method returns the starting<br></td></tr
><tr
id=sl_svn9188_72

><td class="source">        address for the data. If not (i.e. it is backed by a file or other<br></td></tr
><tr
id=sl_svn9188_73

><td class="source">        structure), this method returns NULL.<br></td></tr
><tr
id=sl_svn9188_74

><td class="source">        The default implementation returns NULL.<br></td></tr
><tr
id=sl_svn9188_75

><td class="source">    */<br></td></tr
><tr
id=sl_svn9188_76

><td class="source">    virtual const void* getMemoryBase();<br></td></tr
><tr
id=sl_svn9188_77

><td class="source"><br></td></tr
><tr
id=sl_svn9188_78

><td class="source">    int8_t   readS8();<br></td></tr
><tr
id=sl_svn9188_79

><td class="source">    int16_t  readS16();<br></td></tr
><tr
id=sl_svn9188_80

><td class="source">    int32_t  readS32();<br></td></tr
><tr
id=sl_svn9188_81

><td class="source"><br></td></tr
><tr
id=sl_svn9188_82

><td class="source">    uint8_t  readU8() { return (uint8_t)this-&gt;readS8(); }<br></td></tr
><tr
id=sl_svn9188_83

><td class="source">    uint16_t readU16() { return (uint16_t)this-&gt;readS16(); }<br></td></tr
><tr
id=sl_svn9188_84

><td class="source">    uint32_t readU32() { return (uint32_t)this-&gt;readS32(); }<br></td></tr
><tr
id=sl_svn9188_85

><td class="source"><br></td></tr
><tr
id=sl_svn9188_86

><td class="source">    bool     readBool() { return this-&gt;readU8() != 0; }<br></td></tr
><tr
id=sl_svn9188_87

><td class="source">    SkScalar readScalar();<br></td></tr
><tr
id=sl_svn9188_88

><td class="source">    size_t   readPackedUInt();<br></td></tr
><tr
id=sl_svn9188_89

><td class="source"><br></td></tr
><tr
id=sl_svn9188_90

><td class="source">    /**<br></td></tr
><tr
id=sl_svn9188_91

><td class="source">     *  Reconstitute an SkData object that was written to the stream<br></td></tr
><tr
id=sl_svn9188_92

><td class="source">     *  using SkWStream::writeData().<br></td></tr
><tr
id=sl_svn9188_93

><td class="source">     */<br></td></tr
><tr
id=sl_svn9188_94

><td class="source">    SkData* readData();<br></td></tr
><tr
id=sl_svn9188_95

><td class="source"><br></td></tr
><tr
id=sl_svn9188_96

><td class="source">private:<br></td></tr
><tr
id=sl_svn9188_97

><td class="source">    typedef SkRefCnt INHERITED;<br></td></tr
><tr
id=sl_svn9188_98

><td class="source">};<br></td></tr
><tr
id=sl_svn9188_99

><td class="source"><br></td></tr
><tr
id=sl_svn9188_100

><td class="source">class SK_API SkWStream : SkNoncopyable {<br></td></tr
><tr
id=sl_svn9188_101

><td class="source">public:<br></td></tr
><tr
id=sl_svn9188_102

><td class="source">    SK_DECLARE_INST_COUNT_ROOT(SkWStream)<br></td></tr
><tr
id=sl_svn9188_103

><td class="source"><br></td></tr
><tr
id=sl_svn9188_104

><td class="source">    virtual ~SkWStream();<br></td></tr
><tr
id=sl_svn9188_105

><td class="source"><br></td></tr
><tr
id=sl_svn9188_106

><td class="source">    /** Called to write bytes to a SkWStream. Returns true on success<br></td></tr
><tr
id=sl_svn9188_107

><td class="source">        @param buffer the address of at least size bytes to be written to the stream<br></td></tr
><tr
id=sl_svn9188_108

><td class="source">        @param size The number of bytes in buffer to write to the stream<br></td></tr
><tr
id=sl_svn9188_109

><td class="source">        @return true on success<br></td></tr
><tr
id=sl_svn9188_110

><td class="source">    */<br></td></tr
><tr
id=sl_svn9188_111

><td class="source">    virtual bool write(const void* buffer, size_t size) = 0;<br></td></tr
><tr
id=sl_svn9188_112

><td class="source">    virtual void newline();<br></td></tr
><tr
id=sl_svn9188_113

><td class="source">    virtual void flush();<br></td></tr
><tr
id=sl_svn9188_114

><td class="source"><br></td></tr
><tr
id=sl_svn9188_115

><td class="source">    // helpers<br></td></tr
><tr
id=sl_svn9188_116

><td class="source"><br></td></tr
><tr
id=sl_svn9188_117

><td class="source">    bool    write8(U8CPU);<br></td></tr
><tr
id=sl_svn9188_118

><td class="source">    bool    write16(U16CPU);<br></td></tr
><tr
id=sl_svn9188_119

><td class="source">    bool    write32(uint32_t);<br></td></tr
><tr
id=sl_svn9188_120

><td class="source"><br></td></tr
><tr
id=sl_svn9188_121

><td class="source">    bool    writeText(const char text[]);<br></td></tr
><tr
id=sl_svn9188_122

><td class="source">    bool    writeDecAsText(int32_t);<br></td></tr
><tr
id=sl_svn9188_123

><td class="source">    bool    writeBigDecAsText(int64_t, int minDigits = 0);<br></td></tr
><tr
id=sl_svn9188_124

><td class="source">    bool    writeHexAsText(uint32_t, int minDigits = 0);<br></td></tr
><tr
id=sl_svn9188_125

><td class="source">    bool    writeScalarAsText(SkScalar);<br></td></tr
><tr
id=sl_svn9188_126

><td class="source"><br></td></tr
><tr
id=sl_svn9188_127

><td class="source">    bool    writeBool(bool v) { return this-&gt;write8(v); }<br></td></tr
><tr
id=sl_svn9188_128

><td class="source">    bool    writeScalar(SkScalar);<br></td></tr
><tr
id=sl_svn9188_129

><td class="source">    bool    writePackedUInt(size_t);<br></td></tr
><tr
id=sl_svn9188_130

><td class="source"><br></td></tr
><tr
id=sl_svn9188_131

><td class="source">    bool writeStream(SkStream* input, size_t length);<br></td></tr
><tr
id=sl_svn9188_132

><td class="source"><br></td></tr
><tr
id=sl_svn9188_133

><td class="source">    /**<br></td></tr
><tr
id=sl_svn9188_134

><td class="source">     * Append an SkData object to the stream, such that it can be read<br></td></tr
><tr
id=sl_svn9188_135

><td class="source">     * out of the stream using SkStream::readData().<br></td></tr
><tr
id=sl_svn9188_136

><td class="source">     *<br></td></tr
><tr
id=sl_svn9188_137

><td class="source">     * Note that the encoding method used to write the SkData object<br></td></tr
><tr
id=sl_svn9188_138

><td class="source">     * to the stream may change over time.  This method DOES NOT<br></td></tr
><tr
id=sl_svn9188_139

><td class="source">     * just write the raw content of the SkData object to the stream.<br></td></tr
><tr
id=sl_svn9188_140

><td class="source">     */<br></td></tr
><tr
id=sl_svn9188_141

><td class="source">    bool writeData(const SkData*);<br></td></tr
><tr
id=sl_svn9188_142

><td class="source">};<br></td></tr
><tr
id=sl_svn9188_143

><td class="source"><br></td></tr
><tr
id=sl_svn9188_144

><td class="source">////////////////////////////////////////////////////////////////////////////////////////<br></td></tr
><tr
id=sl_svn9188_145

><td class="source"><br></td></tr
><tr
id=sl_svn9188_146

><td class="source">#include &quot;SkString.h&quot;<br></td></tr
><tr
id=sl_svn9188_147

><td class="source"><br></td></tr
><tr
id=sl_svn9188_148

><td class="source">struct SkFILE;<br></td></tr
><tr
id=sl_svn9188_149

><td class="source"><br></td></tr
><tr
id=sl_svn9188_150

><td class="source">/** A stream that reads from a FILE*, which is opened in the constructor and<br></td></tr
><tr
id=sl_svn9188_151

><td class="source">    closed in the destructor<br></td></tr
><tr
id=sl_svn9188_152

><td class="source"> */<br></td></tr
><tr
id=sl_svn9188_153

><td class="source">class SK_API SkFILEStream : public SkStream {<br></td></tr
><tr
id=sl_svn9188_154

><td class="source">public:<br></td></tr
><tr
id=sl_svn9188_155

><td class="source">    SK_DECLARE_INST_COUNT(SkFILEStream)<br></td></tr
><tr
id=sl_svn9188_156

><td class="source"><br></td></tr
><tr
id=sl_svn9188_157

><td class="source">    /** Initialize the stream by calling fopen on the specified path. Will be<br></td></tr
><tr
id=sl_svn9188_158

><td class="source">        closed in the destructor.<br></td></tr
><tr
id=sl_svn9188_159

><td class="source">     */<br></td></tr
><tr
id=sl_svn9188_160

><td class="source">    explicit SkFILEStream(const char path[] = NULL);<br></td></tr
><tr
id=sl_svn9188_161

><td class="source">    virtual ~SkFILEStream();<br></td></tr
><tr
id=sl_svn9188_162

><td class="source"><br></td></tr
><tr
id=sl_svn9188_163

><td class="source">    /** Returns true if the current path could be opened.<br></td></tr
><tr
id=sl_svn9188_164

><td class="source">    */<br></td></tr
><tr
id=sl_svn9188_165

><td class="source">    bool isValid() const { return fFILE != NULL; }<br></td></tr
><tr
id=sl_svn9188_166

><td class="source">    /** Close the current file, and open a new file with the specified<br></td></tr
><tr
id=sl_svn9188_167

><td class="source">        path. If path is NULL, just close the current file.<br></td></tr
><tr
id=sl_svn9188_168

><td class="source">    */<br></td></tr
><tr
id=sl_svn9188_169

><td class="source">    void setPath(const char path[]);<br></td></tr
><tr
id=sl_svn9188_170

><td class="source"><br></td></tr
><tr
id=sl_svn9188_171

><td class="source">    virtual bool rewind() SK_OVERRIDE;<br></td></tr
><tr
id=sl_svn9188_172

><td class="source">    virtual size_t read(void* buffer, size_t size) SK_OVERRIDE;<br></td></tr
><tr
id=sl_svn9188_173

><td class="source">    virtual const char* getFileName() SK_OVERRIDE;<br></td></tr
><tr
id=sl_svn9188_174

><td class="source"><br></td></tr
><tr
id=sl_svn9188_175

><td class="source">private:<br></td></tr
><tr
id=sl_svn9188_176

><td class="source">    SkFILE*     fFILE;<br></td></tr
><tr
id=sl_svn9188_177

><td class="source">    SkString    fName;<br></td></tr
><tr
id=sl_svn9188_178

><td class="source"><br></td></tr
><tr
id=sl_svn9188_179

><td class="source">    typedef SkStream INHERITED;<br></td></tr
><tr
id=sl_svn9188_180

><td class="source">};<br></td></tr
><tr
id=sl_svn9188_181

><td class="source"><br></td></tr
><tr
id=sl_svn9188_182

><td class="source">/** A stream that reads from a file descriptor<br></td></tr
><tr
id=sl_svn9188_183

><td class="source"> */<br></td></tr
><tr
id=sl_svn9188_184

><td class="source">class SK_API SkFDStream : public SkStream {<br></td></tr
><tr
id=sl_svn9188_185

><td class="source">public:<br></td></tr
><tr
id=sl_svn9188_186

><td class="source">    SK_DECLARE_INST_COUNT(SkFDStream)<br></td></tr
><tr
id=sl_svn9188_187

><td class="source"><br></td></tr
><tr
id=sl_svn9188_188

><td class="source">    /** Initialize the stream with a dup() of the specified file descriptor.<br></td></tr
><tr
id=sl_svn9188_189

><td class="source">        If closeWhenDone is true, then the descriptor will be closed in the<br></td></tr
><tr
id=sl_svn9188_190

><td class="source">        destructor.<br></td></tr
><tr
id=sl_svn9188_191

><td class="source">     */<br></td></tr
><tr
id=sl_svn9188_192

><td class="source">    SkFDStream(int fileDesc, bool closeWhenDone);<br></td></tr
><tr
id=sl_svn9188_193

><td class="source">    virtual ~SkFDStream();<br></td></tr
><tr
id=sl_svn9188_194

><td class="source"><br></td></tr
><tr
id=sl_svn9188_195

><td class="source">    /** Returns true if the current path could be opened.<br></td></tr
><tr
id=sl_svn9188_196

><td class="source">     */<br></td></tr
><tr
id=sl_svn9188_197

><td class="source">    bool isValid() const { return fFD &gt;= 0; }<br></td></tr
><tr
id=sl_svn9188_198

><td class="source"><br></td></tr
><tr
id=sl_svn9188_199

><td class="source">    virtual bool rewind() SK_OVERRIDE;<br></td></tr
><tr
id=sl_svn9188_200

><td class="source">    virtual size_t read(void* buffer, size_t size) SK_OVERRIDE;<br></td></tr
><tr
id=sl_svn9188_201

><td class="source">    virtual const char* getFileName() SK_OVERRIDE { return NULL; }<br></td></tr
><tr
id=sl_svn9188_202

><td class="source"><br></td></tr
><tr
id=sl_svn9188_203

><td class="source">private:<br></td></tr
><tr
id=sl_svn9188_204

><td class="source">    int     fFD;<br></td></tr
><tr
id=sl_svn9188_205

><td class="source">    bool    fCloseWhenDone;<br></td></tr
><tr
id=sl_svn9188_206

><td class="source"><br></td></tr
><tr
id=sl_svn9188_207

><td class="source">    typedef SkStream INHERITED;<br></td></tr
><tr
id=sl_svn9188_208

><td class="source">};<br></td></tr
><tr
id=sl_svn9188_209

><td class="source"><br></td></tr
><tr
id=sl_svn9188_210

><td class="source">class SK_API SkMemoryStream : public SkStream {<br></td></tr
><tr
id=sl_svn9188_211

><td class="source">public:<br></td></tr
><tr
id=sl_svn9188_212

><td class="source">    SK_DECLARE_INST_COUNT(SkMemoryStream)<br></td></tr
><tr
id=sl_svn9188_213

><td class="source"><br></td></tr
><tr
id=sl_svn9188_214

><td class="source">    SkMemoryStream();<br></td></tr
><tr
id=sl_svn9188_215

><td class="source">    /** We allocate (and free) the memory. Write to it via getMemoryBase()<br></td></tr
><tr
id=sl_svn9188_216

><td class="source">    */<br></td></tr
><tr
id=sl_svn9188_217

><td class="source">    SkMemoryStream(size_t length);<br></td></tr
><tr
id=sl_svn9188_218

><td class="source">    /** if copyData is true, the stream makes a private copy of the data<br></td></tr
><tr
id=sl_svn9188_219

><td class="source">    */<br></td></tr
><tr
id=sl_svn9188_220

><td class="source">    SkMemoryStream(const void* data, size_t length, bool copyData = false);<br></td></tr
><tr
id=sl_svn9188_221

><td class="source"><br></td></tr
><tr
id=sl_svn9188_222

><td class="source">    /**<br></td></tr
><tr
id=sl_svn9188_223

><td class="source">     *  Use the specified data as the memory for this stream. The stream will<br></td></tr
><tr
id=sl_svn9188_224

><td class="source">     *  call ref() on the data (assuming it is not null).<br></td></tr
><tr
id=sl_svn9188_225

><td class="source">     */<br></td></tr
><tr
id=sl_svn9188_226

><td class="source">    SkMemoryStream(SkData*);<br></td></tr
><tr
id=sl_svn9188_227

><td class="source"><br></td></tr
><tr
id=sl_svn9188_228

><td class="source">    virtual ~SkMemoryStream();<br></td></tr
><tr
id=sl_svn9188_229

><td class="source"><br></td></tr
><tr
id=sl_svn9188_230

><td class="source">    /** Resets the stream to the specified data and length,<br></td></tr
><tr
id=sl_svn9188_231

><td class="source">        just like the constructor.<br></td></tr
><tr
id=sl_svn9188_232

><td class="source">        if copyData is true, the stream makes a private copy of the data<br></td></tr
><tr
id=sl_svn9188_233

><td class="source">    */<br></td></tr
><tr
id=sl_svn9188_234

><td class="source">    virtual void setMemory(const void* data, size_t length,<br></td></tr
><tr
id=sl_svn9188_235

><td class="source">                           bool copyData = false);<br></td></tr
><tr
id=sl_svn9188_236

><td class="source">    /** Replace any memory buffer with the specified buffer. The caller<br></td></tr
><tr
id=sl_svn9188_237

><td class="source">        must have allocated data with sk_malloc or sk_realloc, since it<br></td></tr
><tr
id=sl_svn9188_238

><td class="source">        will be freed with sk_free.<br></td></tr
><tr
id=sl_svn9188_239

><td class="source">    */<br></td></tr
><tr
id=sl_svn9188_240

><td class="source">    void setMemoryOwned(const void* data, size_t length);<br></td></tr
><tr
id=sl_svn9188_241

><td class="source"><br></td></tr
><tr
id=sl_svn9188_242

><td class="source">    /**<br></td></tr
><tr
id=sl_svn9188_243

><td class="source">     *  Return the stream&#39;s data in a SkData. The caller must call unref() when<br></td></tr
><tr
id=sl_svn9188_244

><td class="source">     *  it is finished using the data.<br></td></tr
><tr
id=sl_svn9188_245

><td class="source">     */<br></td></tr
><tr
id=sl_svn9188_246

><td class="source">    SkData* copyToData() const;<br></td></tr
><tr
id=sl_svn9188_247

><td class="source"><br></td></tr
><tr
id=sl_svn9188_248

><td class="source">    /**<br></td></tr
><tr
id=sl_svn9188_249

><td class="source">     *  Use the specified data as the memory for this stream. The stream will<br></td></tr
><tr
id=sl_svn9188_250

><td class="source">     *  call ref() on the data (assuming it is not null). The function returns<br></td></tr
><tr
id=sl_svn9188_251

><td class="source">     *  the data parameter as a convenience.<br></td></tr
><tr
id=sl_svn9188_252

><td class="source">     */<br></td></tr
><tr
id=sl_svn9188_253

><td class="source">    SkData* setData(SkData*);<br></td></tr
><tr
id=sl_svn9188_254

><td class="source"><br></td></tr
><tr
id=sl_svn9188_255

><td class="source">    void skipToAlign4();<br></td></tr
><tr
id=sl_svn9188_256

><td class="source">    virtual bool rewind() SK_OVERRIDE;<br></td></tr
><tr
id=sl_svn9188_257

><td class="source">    virtual size_t read(void* buffer, size_t size) SK_OVERRIDE;<br></td></tr
><tr
id=sl_svn9188_258

><td class="source">    virtual const void* getMemoryBase() SK_OVERRIDE;<br></td></tr
><tr
id=sl_svn9188_259

><td class="source">    const void* getAtPos();<br></td></tr
><tr
id=sl_svn9188_260

><td class="source">    size_t seek(size_t offset);<br></td></tr
><tr
id=sl_svn9188_261

><td class="source">    size_t peek() const { return fOffset; }<br></td></tr
><tr
id=sl_svn9188_262

><td class="source"><br></td></tr
><tr
id=sl_svn9188_263

><td class="source">private:<br></td></tr
><tr
id=sl_svn9188_264

><td class="source">    SkData* fData;<br></td></tr
><tr
id=sl_svn9188_265

><td class="source">    size_t  fOffset;<br></td></tr
><tr
id=sl_svn9188_266

><td class="source"><br></td></tr
><tr
id=sl_svn9188_267

><td class="source">    typedef SkStream INHERITED;<br></td></tr
><tr
id=sl_svn9188_268

><td class="source">};<br></td></tr
><tr
id=sl_svn9188_269

><td class="source"><br></td></tr
><tr
id=sl_svn9188_270

><td class="source">/** \class SkBufferStream<br></td></tr
><tr
id=sl_svn9188_271

><td class="source">    This is a wrapper class that adds buffering to another stream.<br></td></tr
><tr
id=sl_svn9188_272

><td class="source">    The caller can provide the buffer, or ask SkBufferStream to allocated/free<br></td></tr
><tr
id=sl_svn9188_273

><td class="source">    it automatically.<br></td></tr
><tr
id=sl_svn9188_274

><td class="source">*/<br></td></tr
><tr
id=sl_svn9188_275

><td class="source">class SK_API SkBufferStream : public SkStream {<br></td></tr
><tr
id=sl_svn9188_276

><td class="source">public:<br></td></tr
><tr
id=sl_svn9188_277

><td class="source">    SK_DECLARE_INST_COUNT(SkBufferStream)<br></td></tr
><tr
id=sl_svn9188_278

><td class="source"><br></td></tr
><tr
id=sl_svn9188_279

><td class="source">    /** Provide the stream to be buffered (proxy), and the size of the buffer that<br></td></tr
><tr
id=sl_svn9188_280

><td class="source">        should be used. This will be allocated and freed automatically. If bufferSize is 0,<br></td></tr
><tr
id=sl_svn9188_281

><td class="source">        a default buffer size will be used.<br></td></tr
><tr
id=sl_svn9188_282

><td class="source">        The proxy stream is referenced, and will be unreferenced in when the<br></td></tr
><tr
id=sl_svn9188_283

><td class="source">        bufferstream is destroyed.<br></td></tr
><tr
id=sl_svn9188_284

><td class="source">    */<br></td></tr
><tr
id=sl_svn9188_285

><td class="source">    SkBufferStream(SkStream* proxy, size_t bufferSize = 0);<br></td></tr
><tr
id=sl_svn9188_286

><td class="source">    /** Provide the stream to be buffered (proxy), and a buffer and size to be used.<br></td></tr
><tr
id=sl_svn9188_287

><td class="source">        This buffer is owned by the caller, and must be at least bufferSize bytes big.<br></td></tr
><tr
id=sl_svn9188_288

><td class="source">        Passing NULL for buffer will cause the buffer to be allocated/freed automatically.<br></td></tr
><tr
id=sl_svn9188_289

><td class="source">        If buffer is not NULL, it is an error for bufferSize to be 0.<br></td></tr
><tr
id=sl_svn9188_290

><td class="source">     The proxy stream is referenced, and will be unreferenced in when the<br></td></tr
><tr
id=sl_svn9188_291

><td class="source">     bufferstream is destroyed.<br></td></tr
><tr
id=sl_svn9188_292

><td class="source">    */<br></td></tr
><tr
id=sl_svn9188_293

><td class="source">    SkBufferStream(SkStream* proxy, void* buffer, size_t bufferSize);<br></td></tr
><tr
id=sl_svn9188_294

><td class="source">    virtual ~SkBufferStream();<br></td></tr
><tr
id=sl_svn9188_295

><td class="source"><br></td></tr
><tr
id=sl_svn9188_296

><td class="source">    virtual bool        rewind() SK_OVERRIDE;<br></td></tr
><tr
id=sl_svn9188_297

><td class="source">    virtual const char* getFileName() SK_OVERRIDE;<br></td></tr
><tr
id=sl_svn9188_298

><td class="source">    virtual size_t      read(void* buffer, size_t size) SK_OVERRIDE;<br></td></tr
><tr
id=sl_svn9188_299

><td class="source">    virtual const void* getMemoryBase() SK_OVERRIDE;<br></td></tr
><tr
id=sl_svn9188_300

><td class="source"><br></td></tr
><tr
id=sl_svn9188_301

><td class="source">private:<br></td></tr
><tr
id=sl_svn9188_302

><td class="source">    enum {<br></td></tr
><tr
id=sl_svn9188_303

><td class="source">        kDefaultBufferSize  = 128<br></td></tr
><tr
id=sl_svn9188_304

><td class="source">    };<br></td></tr
><tr
id=sl_svn9188_305

><td class="source">    // illegal<br></td></tr
><tr
id=sl_svn9188_306

><td class="source">    SkBufferStream(const SkBufferStream&amp;);<br></td></tr
><tr
id=sl_svn9188_307

><td class="source">    SkBufferStream&amp; operator=(const SkBufferStream&amp;);<br></td></tr
><tr
id=sl_svn9188_308

><td class="source"><br></td></tr
><tr
id=sl_svn9188_309

><td class="source">    SkStream*   fProxy;<br></td></tr
><tr
id=sl_svn9188_310

><td class="source">    char*       fBuffer;<br></td></tr
><tr
id=sl_svn9188_311

><td class="source">    size_t      fOrigBufferSize, fBufferSize, fBufferOffset;<br></td></tr
><tr
id=sl_svn9188_312

><td class="source">    bool        fWeOwnTheBuffer;<br></td></tr
><tr
id=sl_svn9188_313

><td class="source"><br></td></tr
><tr
id=sl_svn9188_314

><td class="source">    void    init(void*, size_t);<br></td></tr
><tr
id=sl_svn9188_315

><td class="source"><br></td></tr
><tr
id=sl_svn9188_316

><td class="source">    typedef SkStream INHERITED;<br></td></tr
><tr
id=sl_svn9188_317

><td class="source">};<br></td></tr
><tr
id=sl_svn9188_318

><td class="source"><br></td></tr
><tr
id=sl_svn9188_319

><td class="source">/////////////////////////////////////////////////////////////////////////////////////////////<br></td></tr
><tr
id=sl_svn9188_320

><td class="source"><br></td></tr
><tr
id=sl_svn9188_321

><td class="source">class SK_API SkFILEWStream : public SkWStream {<br></td></tr
><tr
id=sl_svn9188_322

><td class="source">public:<br></td></tr
><tr
id=sl_svn9188_323

><td class="source">    SK_DECLARE_INST_COUNT(SkFILEWStream)<br></td></tr
><tr
id=sl_svn9188_324

><td class="source"><br></td></tr
><tr
id=sl_svn9188_325

><td class="source">    SkFILEWStream(const char path[]);<br></td></tr
><tr
id=sl_svn9188_326

><td class="source">    virtual ~SkFILEWStream();<br></td></tr
><tr
id=sl_svn9188_327

><td class="source"><br></td></tr
><tr
id=sl_svn9188_328

><td class="source">    /** Returns true if the current path could be opened.<br></td></tr
><tr
id=sl_svn9188_329

><td class="source">    */<br></td></tr
><tr
id=sl_svn9188_330

><td class="source">    bool isValid() const { return fFILE != NULL; }<br></td></tr
><tr
id=sl_svn9188_331

><td class="source"><br></td></tr
><tr
id=sl_svn9188_332

><td class="source">    virtual bool write(const void* buffer, size_t size) SK_OVERRIDE;<br></td></tr
><tr
id=sl_svn9188_333

><td class="source">    virtual void flush() SK_OVERRIDE;<br></td></tr
><tr
id=sl_svn9188_334

><td class="source"><br></td></tr
><tr
id=sl_svn9188_335

><td class="source">private:<br></td></tr
><tr
id=sl_svn9188_336

><td class="source">    SkFILE* fFILE;<br></td></tr
><tr
id=sl_svn9188_337

><td class="source"><br></td></tr
><tr
id=sl_svn9188_338

><td class="source">    typedef SkWStream INHERITED;<br></td></tr
><tr
id=sl_svn9188_339

><td class="source">};<br></td></tr
><tr
id=sl_svn9188_340

><td class="source"><br></td></tr
><tr
id=sl_svn9188_341

><td class="source">class SkMemoryWStream : public SkWStream {<br></td></tr
><tr
id=sl_svn9188_342

><td class="source">public:<br></td></tr
><tr
id=sl_svn9188_343

><td class="source">    SK_DECLARE_INST_COUNT(SkMemoryWStream)<br></td></tr
><tr
id=sl_svn9188_344

><td class="source"><br></td></tr
><tr
id=sl_svn9188_345

><td class="source">    SkMemoryWStream(void* buffer, size_t size);<br></td></tr
><tr
id=sl_svn9188_346

><td class="source">    virtual bool write(const void* buffer, size_t size) SK_OVERRIDE;<br></td></tr
><tr
id=sl_svn9188_347

><td class="source">    size_t bytesWritten() const { return fBytesWritten; }<br></td></tr
><tr
id=sl_svn9188_348

><td class="source"><br></td></tr
><tr
id=sl_svn9188_349

><td class="source">private:<br></td></tr
><tr
id=sl_svn9188_350

><td class="source">    char*   fBuffer;<br></td></tr
><tr
id=sl_svn9188_351

><td class="source">    size_t  fMaxLength;<br></td></tr
><tr
id=sl_svn9188_352

><td class="source">    size_t  fBytesWritten;<br></td></tr
><tr
id=sl_svn9188_353

><td class="source"><br></td></tr
><tr
id=sl_svn9188_354

><td class="source">    typedef SkWStream INHERITED;<br></td></tr
><tr
id=sl_svn9188_355

><td class="source">};<br></td></tr
><tr
id=sl_svn9188_356

><td class="source"><br></td></tr
><tr
id=sl_svn9188_357

><td class="source">class SK_API SkDynamicMemoryWStream : public SkWStream {<br></td></tr
><tr
id=sl_svn9188_358

><td class="source">public:<br></td></tr
><tr
id=sl_svn9188_359

><td class="source">    SK_DECLARE_INST_COUNT(SkDynamicMemoryWStream)<br></td></tr
><tr
id=sl_svn9188_360

><td class="source"><br></td></tr
><tr
id=sl_svn9188_361

><td class="source">    SkDynamicMemoryWStream();<br></td></tr
><tr
id=sl_svn9188_362

><td class="source">    virtual ~SkDynamicMemoryWStream();<br></td></tr
><tr
id=sl_svn9188_363

><td class="source"><br></td></tr
><tr
id=sl_svn9188_364

><td class="source">    virtual bool write(const void* buffer, size_t size) SK_OVERRIDE;<br></td></tr
><tr
id=sl_svn9188_365

><td class="source">    // random access write<br></td></tr
><tr
id=sl_svn9188_366

><td class="source">    // modifies stream and returns true if offset + size is less than or equal to getOffset()<br></td></tr
><tr
id=sl_svn9188_367

><td class="source">    bool write(const void* buffer, size_t offset, size_t size);<br></td></tr
><tr
id=sl_svn9188_368

><td class="source">    bool read(void* buffer, size_t offset, size_t size);<br></td></tr
><tr
id=sl_svn9188_369

><td class="source">    size_t getOffset() const { return fBytesWritten; }<br></td></tr
><tr
id=sl_svn9188_370

><td class="source">    size_t bytesWritten() const { return fBytesWritten; }<br></td></tr
><tr
id=sl_svn9188_371

><td class="source"><br></td></tr
><tr
id=sl_svn9188_372

><td class="source">    // copy what has been written to the stream into dst<br></td></tr
><tr
id=sl_svn9188_373

><td class="source">    void copyTo(void* dst) const;<br></td></tr
><tr
id=sl_svn9188_374

><td class="source"><br></td></tr
><tr
id=sl_svn9188_375

><td class="source">    /**<br></td></tr
><tr
id=sl_svn9188_376

><td class="source">     *  Return a copy of the data written so far. This call is responsible for<br></td></tr
><tr
id=sl_svn9188_377

><td class="source">     *  calling unref() when they are finished with the data.<br></td></tr
><tr
id=sl_svn9188_378

><td class="source">     */<br></td></tr
><tr
id=sl_svn9188_379

><td class="source">    SkData* copyToData() const;<br></td></tr
><tr
id=sl_svn9188_380

><td class="source"><br></td></tr
><tr
id=sl_svn9188_381

><td class="source">    // reset the stream to its original state<br></td></tr
><tr
id=sl_svn9188_382

><td class="source">    void reset();<br></td></tr
><tr
id=sl_svn9188_383

><td class="source">    void padToAlign4();<br></td></tr
><tr
id=sl_svn9188_384

><td class="source">private:<br></td></tr
><tr
id=sl_svn9188_385

><td class="source">    struct Block;<br></td></tr
><tr
id=sl_svn9188_386

><td class="source">    Block*  fHead;<br></td></tr
><tr
id=sl_svn9188_387

><td class="source">    Block*  fTail;<br></td></tr
><tr
id=sl_svn9188_388

><td class="source">    size_t  fBytesWritten;<br></td></tr
><tr
id=sl_svn9188_389

><td class="source">    mutable SkData* fCopy;  // is invalidated if we write after it is created<br></td></tr
><tr
id=sl_svn9188_390

><td class="source"><br></td></tr
><tr
id=sl_svn9188_391

><td class="source">    void invalidateCopy();<br></td></tr
><tr
id=sl_svn9188_392

><td class="source"><br></td></tr
><tr
id=sl_svn9188_393

><td class="source">    typedef SkWStream INHERITED;<br></td></tr
><tr
id=sl_svn9188_394

><td class="source">};<br></td></tr
><tr
id=sl_svn9188_395

><td class="source"><br></td></tr
><tr
id=sl_svn9188_396

><td class="source"><br></td></tr
><tr
id=sl_svn9188_397

><td class="source">class SK_API SkDebugWStream : public SkWStream {<br></td></tr
><tr
id=sl_svn9188_398

><td class="source">public:<br></td></tr
><tr
id=sl_svn9188_399

><td class="source">    SK_DECLARE_INST_COUNT(SkDebugWStream)<br></td></tr
><tr
id=sl_svn9188_400

><td class="source"><br></td></tr
><tr
id=sl_svn9188_401

><td class="source">    // overrides<br></td></tr
><tr
id=sl_svn9188_402

><td class="source">    virtual bool write(const void* buffer, size_t size) SK_OVERRIDE;<br></td></tr
><tr
id=sl_svn9188_403

><td class="source">    virtual void newline() SK_OVERRIDE;<br></td></tr
><tr
id=sl_svn9188_404

><td class="source"><br></td></tr
><tr
id=sl_svn9188_405

><td class="source">private:<br></td></tr
><tr
id=sl_svn9188_406

><td class="source">    typedef SkWStream INHERITED;<br></td></tr
><tr
id=sl_svn9188_407

><td class="source">};<br></td></tr
><tr
id=sl_svn9188_408

><td class="source"><br></td></tr
><tr
id=sl_svn9188_409

><td class="source">// for now<br></td></tr
><tr
id=sl_svn9188_410

><td class="source">typedef SkFILEStream SkURLStream;<br></td></tr
><tr
id=sl_svn9188_411

><td class="source"><br></td></tr
><tr
id=sl_svn9188_412

><td class="source">#endif<br></td></tr
></table></pre>
<pre><table width="100%"><tr class="cursor_stop cursor_hidden"><td></td></tr></table></pre>
</td>
</tr></table>

 
<script type="text/javascript">
 var lineNumUnderMouse = -1;
 
 function gutterOver(num) {
 gutterOut();
 var newTR = document.getElementById('gr_svn9188_' + num);
 if (newTR) {
 newTR.className = 'undermouse';
 }
 lineNumUnderMouse = num;
 }
 function gutterOut() {
 if (lineNumUnderMouse != -1) {
 var oldTR = document.getElementById(
 'gr_svn9188_' + lineNumUnderMouse);
 if (oldTR) {
 oldTR.className = '';
 }
 lineNumUnderMouse = -1;
 }
 }
 var numsGenState = {table_base_id: 'nums_table_'};
 var srcGenState = {table_base_id: 'src_table_'};
 var alignerRunning = false;
 var startOver = false;
 function setLineNumberHeights() {
 if (alignerRunning) {
 startOver = true;
 return;
 }
 numsGenState.chunk_id = 0;
 numsGenState.table = document.getElementById('nums_table_0');
 numsGenState.row_num = 0;
 if (!numsGenState.table) {
 return; // Silently exit if no file is present.
 }
 srcGenState.chunk_id = 0;
 srcGenState.table = document.getElementById('src_table_0');
 srcGenState.row_num = 0;
 alignerRunning = true;
 continueToSetLineNumberHeights();
 }
 function rowGenerator(genState) {
 if (genState.row_num < genState.table.rows.length) {
 var currentRow = genState.table.rows[genState.row_num];
 genState.row_num++;
 return currentRow;
 }
 var newTable = document.getElementById(
 genState.table_base_id + (genState.chunk_id + 1));
 if (newTable) {
 genState.chunk_id++;
 genState.row_num = 0;
 genState.table = newTable;
 return genState.table.rows[0];
 }
 return null;
 }
 var MAX_ROWS_PER_PASS = 1000;
 function continueToSetLineNumberHeights() {
 var rowsInThisPass = 0;
 var numRow = 1;
 var srcRow = 1;
 while (numRow && srcRow && rowsInThisPass < MAX_ROWS_PER_PASS) {
 numRow = rowGenerator(numsGenState);
 srcRow = rowGenerator(srcGenState);
 rowsInThisPass++;
 if (numRow && srcRow) {
 if (numRow.offsetHeight != srcRow.offsetHeight) {
 numRow.firstChild.style.height = srcRow.offsetHeight + 'px';
 }
 }
 }
 if (rowsInThisPass >= MAX_ROWS_PER_PASS) {
 setTimeout(continueToSetLineNumberHeights, 10);
 } else {
 alignerRunning = false;
 if (startOver) {
 startOver = false;
 setTimeout(setLineNumberHeights, 500);
 }
 }
 }
 function initLineNumberHeights() {
 // Do 2 complete passes, because there can be races
 // between this code and prettify.
 startOver = true;
 setTimeout(setLineNumberHeights, 250);
 window.onresize = setLineNumberHeights;
 }
 initLineNumberHeights();
</script>

 
 
 <div id="log">
 <div style="text-align:right">
 <a class="ifCollapse" href="#" onclick="_toggleMeta(this); return false">Show details</a>
 <a class="ifExpand" href="#" onclick="_toggleMeta(this); return false">Hide details</a>
 </div>
 <div class="ifExpand">
 
 
 <div class="pmeta_bubble_bg" style="border:1px solid white">
 <div class="round4"></div>
 <div class="round2"></div>
 <div class="round1"></div>
 <div class="box-inner">
 <div id="changelog">
 <p>Change log</p>
 <div>
 <a href="/p/skia/source/detail?spec=svn9188&amp;r=9051">r9051</a>
 by skia.committer
 on May 8, 2013
 &nbsp; <a href="/p/skia/source/diff?spec=svn9188&r=9051&amp;format=side&amp;path=/trunk/include/core/SkStream.h&amp;old_path=/trunk/include/core/SkStream.h&amp;old=9039">Diff</a>
 </div>
 <pre>Sanitizing source files in Housekeeper-
Nightly</pre>
 </div>
 
 
 
 
 
 
 <script type="text/javascript">
 var detail_url = '/p/skia/source/detail?r=9051&spec=svn9188';
 var publish_url = '/p/skia/source/detail?r=9051&spec=svn9188#publish';
 // describe the paths of this revision in javascript.
 var changed_paths = [];
 var changed_urls = [];
 
 changed_paths.push('/trunk/include/core/SkStream.h');
 changed_urls.push('/p/skia/source/browse/trunk/include/core/SkStream.h?r\x3d9051\x26spec\x3dsvn9188');
 
 var selected_path = '/trunk/include/core/SkStream.h';
 
 
 changed_paths.push('/trunk/src/core/SkGeometry.cpp');
 changed_urls.push('/p/skia/source/browse/trunk/src/core/SkGeometry.cpp?r\x3d9051\x26spec\x3dsvn9188');
 
 
 changed_paths.push('/trunk/src/pathops/SkOpAngle.cpp');
 changed_urls.push('/p/skia/source/browse/trunk/src/pathops/SkOpAngle.cpp?r\x3d9051\x26spec\x3dsvn9188');
 
 
 changed_paths.push('/trunk/src/sfnt/SkTTCFHeader.h');
 changed_urls.push('/p/skia/source/browse/trunk/src/sfnt/SkTTCFHeader.h?r\x3d9051\x26spec\x3dsvn9188');
 
 
 changed_paths.push('/trunk/tests/PathOpsCubicQuadIntersectionTest.cpp');
 changed_urls.push('/p/skia/source/browse/trunk/tests/PathOpsCubicQuadIntersectionTest.cpp?r\x3d9051\x26spec\x3dsvn9188');
 
 
 changed_paths.push('/trunk/tests/PathOpsLineIntersectionTest.cpp');
 changed_urls.push('/p/skia/source/browse/trunk/tests/PathOpsLineIntersectionTest.cpp?r\x3d9051\x26spec\x3dsvn9188');
 
 
 changed_paths.push('/trunk/tests/PathOpsSkpClipTest.cpp');
 changed_urls.push('/p/skia/source/browse/trunk/tests/PathOpsSkpClipTest.cpp?r\x3d9051\x26spec\x3dsvn9188');
 
 
 function getCurrentPageIndex() {
 for (var i = 0; i < changed_paths.length; i++) {
 if (selected_path == changed_paths[i]) {
 return i;
 }
 }
 }
 function getNextPage() {
 var i = getCurrentPageIndex();
 if (i < changed_paths.length - 1) {
 return changed_urls[i + 1];
 }
 return null;
 }
 function getPreviousPage() {
 var i = getCurrentPageIndex();
 if (i > 0) {
 return changed_urls[i - 1];
 }
 return null;
 }
 function gotoNextPage() {
 var page = getNextPage();
 if (!page) {
 page = detail_url;
 }
 window.location = page;
 }
 function gotoPreviousPage() {
 var page = getPreviousPage();
 if (!page) {
 page = detail_url;
 }
 window.location = page;
 }
 function gotoDetailPage() {
 window.location = detail_url;
 }
 function gotoPublishPage() {
 window.location = publish_url;
 }
</script>

 
 <style type="text/css">
 #review_nav {
 border-top: 3px solid white;
 padding-top: 6px;
 margin-top: 1em;
 }
 #review_nav td {
 vertical-align: middle;
 }
 #review_nav select {
 margin: .5em 0;
 }
 </style>
 <div id="review_nav">
 <table><tr><td>Go to:&nbsp;</td><td>
 <select name="files_in_rev" onchange="window.location=this.value">
 
 <option value="/p/skia/source/browse/trunk/include/core/SkStream.h?r=9051&amp;spec=svn9188"
 selected="selected"
 >/trunk/include/core/SkStream.h</option>
 
 <option value="/p/skia/source/browse/trunk/src/core/SkGeometry.cpp?r=9051&amp;spec=svn9188"
 
 >/trunk/src/core/SkGeometry.cpp</option>
 
 <option value="/p/skia/source/browse/trunk/src/pathops/SkOpAngle.cpp?r=9051&amp;spec=svn9188"
 
 >/trunk/src/pathops/SkOpAngle.cpp</option>
 
 <option value="/p/skia/source/browse/trunk/src/sfnt/SkTTCFHeader.h?r=9051&amp;spec=svn9188"
 
 >/trunk/src/sfnt/SkTTCFHeader.h</option>
 
 <option value="/p/skia/source/browse/trunk/tests/PathOpsCubicQuadIntersectionTest.cpp?r=9051&amp;spec=svn9188"
 
 >...OpsCubicQuadIntersectionTest.cpp</option>
 
 <option value="/p/skia/source/browse/trunk/tests/PathOpsLineIntersectionTest.cpp?r=9051&amp;spec=svn9188"
 
 >.../PathOpsLineIntersectionTest.cpp</option>
 
 <option value="/p/skia/source/browse/trunk/tests/PathOpsSkpClipTest.cpp?r=9051&amp;spec=svn9188"
 
 >/trunk/tests/PathOpsSkpClipTest.cpp</option>
 
 </select>
 </td></tr></table>
 
 
 



 
 </div>
 
 
 </div>
 <div class="round1"></div>
 <div class="round2"></div>
 <div class="round4"></div>
 </div>
 <div class="pmeta_bubble_bg" style="border:1px solid white">
 <div class="round4"></div>
 <div class="round2"></div>
 <div class="round1"></div>
 <div class="box-inner">
 <div id="older_bubble">
 <p>Older revisions</p>
 
 
 <div class="closed" style="margin-bottom:3px;" >
 <a class="ifClosed" onclick="return _toggleHidden(this)"><img src="https://ssl.gstatic.com/codesite/ph/images/plus.gif" ></a>
 <a class="ifOpened" onclick="return _toggleHidden(this)"><img src="https://ssl.gstatic.com/codesite/ph/images/minus.gif" ></a>
 <a href="/p/skia/source/detail?spec=svn9188&r=9039">r9039</a>
 by r...@google.com
 on May 7, 2013
 &nbsp; <a href="/p/skia/source/diff?spec=svn9188&r=9039&amp;format=side&amp;path=/trunk/include/core/SkStream.h&amp;old_path=/trunk/include/core/SkStream.h&amp;old=8260">Diff</a>
 <br>
 <pre class="ifOpened">add block comment describing sync
nature of SkStream

</pre>
 </div>
 
 <div class="closed" style="margin-bottom:3px;" >
 <a class="ifClosed" onclick="return _toggleHidden(this)"><img src="https://ssl.gstatic.com/codesite/ph/images/plus.gif" ></a>
 <a class="ifOpened" onclick="return _toggleHidden(this)"><img src="https://ssl.gstatic.com/codesite/ph/images/minus.gif" ></a>
 <a href="/p/skia/source/detail?spec=svn9188&r=8260">r8260</a>
 by epo...@google.com
 on Mar 20, 2013
 &nbsp; <a href="/p/skia/source/diff?spec=svn9188&r=8260&amp;format=side&amp;path=/trunk/include/core/SkStream.h&amp;old_path=/trunk/include/core/SkStream.h&amp;old=8211">Diff</a>
 <br>
 <pre class="ifOpened">comments only: update docs for
SkStream::readData(),
SkWStream::writeData()
BUG=<a href="https://code.google.com/p/skia/iss" rel="nofollow">https://code.google.com/p/skia/iss</a>
ues/detail?id=1167
...</pre>
 </div>
 
 <div class="closed" style="margin-bottom:3px;" >
 <a class="ifClosed" onclick="return _toggleHidden(this)"><img src="https://ssl.gstatic.com/codesite/ph/images/plus.gif" ></a>
 <a class="ifOpened" onclick="return _toggleHidden(this)"><img src="https://ssl.gstatic.com/codesite/ph/images/minus.gif" ></a>
 <a href="/p/skia/source/detail?spec=svn9188&r=8211">r8211</a>
 by skia.committer
 on Mar 19, 2013
 &nbsp; <a href="/p/skia/source/diff?spec=svn9188&r=8211&amp;format=side&amp;path=/trunk/include/core/SkStream.h&amp;old_path=/trunk/include/core/SkStream.h&amp;old=8206">Diff</a>
 <br>
 <pre class="ifOpened">Sanitizing source files in
Skia_Periodic_House_Keeping</pre>
 </div>
 
 
 <a href="/p/skia/source/list?path=/trunk/include/core/SkStream.h&start=9051">All revisions of this file</a>
 </div>
 </div>
 <div class="round1"></div>
 <div class="round2"></div>
 <div class="round4"></div>
 </div>
 
 <div class="pmeta_bubble_bg" style="border:1px solid white">
 <div class="round4"></div>
 <div class="round2"></div>
 <div class="round1"></div>
 <div class="box-inner">
 <div id="fileinfo_bubble">
 <p>File info</p>
 
 <div>Size: 13004 bytes,
 412 lines</div>
 
 <div><a href="//skia.googlecode.com/svn/trunk/include/core/SkStream.h">View raw file</a></div>
 </div>
 
 <div id="props">
 <p>File properties</p>
 <dl>
 
 <dt>svn:eol-style</dt>
 <dd>LF</dd>
 
 </dl>
 </div>
 
 </div>
 <div class="round1"></div>
 <div class="round2"></div>
 <div class="round4"></div>
 </div>
 </div>
 </div>


</div>

</div>
</div>

<script src="https://ssl.gstatic.com/codesite/ph/10948521920255093670/js/prettify/prettify.js"></script>
<script type="text/javascript">prettyPrint();</script>


<script src="https://ssl.gstatic.com/codesite/ph/10948521920255093670/js/source_file_scripts.js"></script>

 <script type="text/javascript" src="https://ssl.gstatic.com/codesite/ph/10948521920255093670/js/kibbles.js"></script>
 <script type="text/javascript">
 var lastStop = null;
 var initialized = false;
 
 function updateCursor(next, prev) {
 if (prev && prev.element) {
 prev.element.className = 'cursor_stop cursor_hidden';
 }
 if (next && next.element) {
 next.element.className = 'cursor_stop cursor';
 lastStop = next.index;
 }
 }
 
 function pubRevealed(data) {
 updateCursorForCell(data.cellId, 'cursor_stop cursor_hidden');
 if (initialized) {
 reloadCursors();
 }
 }
 
 function draftRevealed(data) {
 updateCursorForCell(data.cellId, 'cursor_stop cursor_hidden');
 if (initialized) {
 reloadCursors();
 }
 }
 
 function draftDestroyed(data) {
 updateCursorForCell(data.cellId, 'nocursor');
 if (initialized) {
 reloadCursors();
 }
 }
 function reloadCursors() {
 kibbles.skipper.reset();
 loadCursors();
 if (lastStop != null) {
 kibbles.skipper.setCurrentStop(lastStop);
 }
 }
 // possibly the simplest way to insert any newly added comments
 // is to update the class of the corresponding cursor row,
 // then refresh the entire list of rows.
 function updateCursorForCell(cellId, className) {
 var cell = document.getElementById(cellId);
 // we have to go two rows back to find the cursor location
 var row = getPreviousElement(cell.parentNode);
 row.className = className;
 }
 // returns the previous element, ignores text nodes.
 function getPreviousElement(e) {
 var element = e.previousSibling;
 if (element.nodeType == 3) {
 element = element.previousSibling;
 }
 if (element && element.tagName) {
 return element;
 }
 }
 function loadCursors() {
 // register our elements with skipper
 var elements = CR_getElements('*', 'cursor_stop');
 var len = elements.length;
 for (var i = 0; i < len; i++) {
 var element = elements[i]; 
 element.className = 'cursor_stop cursor_hidden';
 kibbles.skipper.append(element);
 }
 }
 function toggleComments() {
 CR_toggleCommentDisplay();
 reloadCursors();
 }
 function keysOnLoadHandler() {
 // setup skipper
 kibbles.skipper.addStopListener(
 kibbles.skipper.LISTENER_TYPE.PRE, updateCursor);
 // Set the 'offset' option to return the middle of the client area
 // an option can be a static value, or a callback
 kibbles.skipper.setOption('padding_top', 50);
 // Set the 'offset' option to return the middle of the client area
 // an option can be a static value, or a callback
 kibbles.skipper.setOption('padding_bottom', 100);
 // Register our keys
 kibbles.skipper.addFwdKey("n");
 kibbles.skipper.addRevKey("p");
 kibbles.keys.addKeyPressListener(
 'u', function() { window.location = detail_url; });
 kibbles.keys.addKeyPressListener(
 'r', function() { window.location = detail_url + '#publish'; });
 
 kibbles.keys.addKeyPressListener('j', gotoNextPage);
 kibbles.keys.addKeyPressListener('k', gotoPreviousPage);
 
 
 }
 </script>
<script src="https://ssl.gstatic.com/codesite/ph/10948521920255093670/js/code_review_scripts.js"></script>
<script type="text/javascript">
 function showPublishInstructions() {
 var element = document.getElementById('review_instr');
 if (element) {
 element.className = 'opened';
 }
 }
 var codereviews;
 function revsOnLoadHandler() {
 // register our source container with the commenting code
 var paths = {'svn9188': '/trunk/include/core/SkStream.h'}
 codereviews = CR_controller.setup(
 {"loggedInUserEmail":"dineshprjpt@gmail.com","projectName":"skia","domainName":null,"assetHostPath":"https://ssl.gstatic.com/codesite/ph","relativeBaseUrl":"","projectHomeUrl":"/p/skia","token":"3c8b6YIcOlWCc_Be_KDbpozno-M:1369043203764","assetVersionPath":"https://ssl.gstatic.com/codesite/ph/10948521920255093670","profileUrl":"/u/104544769917658163163/"}, '', 'svn9188', paths,
 CR_BrowseIntegrationFactory);
 
 codereviews.registerActivityListener(CR_ActivityType.REVEAL_DRAFT_PLATE, showPublishInstructions);
 
 codereviews.registerActivityListener(CR_ActivityType.REVEAL_PUB_PLATE, pubRevealed);
 codereviews.registerActivityListener(CR_ActivityType.REVEAL_DRAFT_PLATE, draftRevealed);
 codereviews.registerActivityListener(CR_ActivityType.DISCARD_DRAFT_COMMENT, draftDestroyed);
 
 
 
 
 
 
 
 var initialized = true;
 reloadCursors();
 }
 window.onload = function() {keysOnLoadHandler(); revsOnLoadHandler();};

</script>
<script type="text/javascript" src="https://ssl.gstatic.com/codesite/ph/10948521920255093670/js/dit_scripts.js"></script>

 
 
 
 <script type="text/javascript" src="https://ssl.gstatic.com/codesite/ph/10948521920255093670/js/ph_core.js"></script>
 
 
 
 
</div> 

<div id="footer" dir="ltr">
 <div class="text">
 <a href="/projecthosting/terms.html">Terms</a> -
 <a href="http://www.google.com/privacy.html">Privacy</a> -
 <a href="/p/support/">Project Hosting Help</a>
 </div>
</div>
 <div class="hostedBy" style="margin-top: -20px;">
 <span style="vertical-align: top;">Powered by <a href="http://code.google.com/projecthosting/">Google Project Hosting</a></span>
 </div>

 
 


 
 </body>
</html>


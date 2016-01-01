



<!DOCTYPE html>
<html>
<head>
 <meta http-equiv="Content-Type" content="text/html; charset=UTF-8" >
 <meta http-equiv="X-UA-Compatible" content="IE=edge,chrome=1" >
 
 <meta name="ROBOTS" content="NOARCHIVE">
 
 <link rel="icon" type="image/vnd.microsoft.icon" href="https://ssl.gstatic.com/codesite/ph/images/phosting.ico">
 
 
 <script type="text/javascript">
 
 
 
 
 var codesite_token = "4MMp0CML7igjLAW4kZ7ZaZ9GG9s:1369043228247";
 
 
 var CS_env = {"relativeBaseUrl":"","domainName":null,"assetHostPath":"https://ssl.gstatic.com/codesite/ph","assetVersionPath":"https://ssl.gstatic.com/codesite/ph/10948521920255093670","profileUrl":"/u/104544769917658163163/","projectHomeUrl":"/p/skia","token":"4MMp0CML7igjLAW4kZ7ZaZ9GG9s:1369043228247","projectName":"skia","loggedInUserEmail":"dineshprjpt@gmail.com"};
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
 
 
 <title>SkData.h - 
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
 | <a href="https://www.google.com/accounts/Logout?continue=https%3A%2F%2Fcode.google.com%2Fp%2Fskia%2Fsource%2Fbrowse%2Ftrunk%2Finclude%2Fcore%2FSkData.h" 
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
 <span id="crumb_links" class="ifClosed"><a href="/p/skia/source/browse/trunk/">trunk</a><span class="sp">/&nbsp;</span><a href="/p/skia/source/browse/trunk/include/">include</a><span class="sp">/&nbsp;</span><a href="/p/skia/source/browse/trunk/include/core/">core</a><span class="sp">/&nbsp;</span>SkData.h</span>
 
 


 </td>
 
 
 <td nowrap="nowrap" width="33%" align="center">
 <a href="/p/skia/source/browse/trunk/include/core/SkData.h?edit=1"
 ><img src="https://ssl.gstatic.com/codesite/ph/images/pencil-y14.png"
 class="edit_icon">Edit file</a>
 </td>
 
 
 <td nowrap="nowrap" width="33%" align="right">
 <table cellpadding="0" cellspacing="0" style="font-size: 100%"><tr>
 
 
 <td class="flipper">
 <ul class="leftside">
 
 <li><a href="/p/skia/source/browse/trunk/include/core/SkData.h?r=8697" title="Previous">&lsaquo;r8697</a></li>
 
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
></table></pre>
<pre><table width="100%"><tr class="nocursor"><td></td></tr></table></pre>
</td>
<td id="lines">
<pre><table width="100%"><tr class="cursor_stop cursor_hidden"><td></td></tr></table></pre>
<pre class="prettyprint "><table id="src_table_0"><tr
id=sl_svn9188_1

><td class="source"><br></td></tr
><tr
id=sl_svn9188_2

><td class="source">/*<br></td></tr
><tr
id=sl_svn9188_3

><td class="source"> * Copyright 2011 Google Inc.<br></td></tr
><tr
id=sl_svn9188_4

><td class="source"> *<br></td></tr
><tr
id=sl_svn9188_5

><td class="source"> * Use of this source code is governed by a BSD-style license that can be<br></td></tr
><tr
id=sl_svn9188_6

><td class="source"> * found in the LICENSE file.<br></td></tr
><tr
id=sl_svn9188_7

><td class="source"> */<br></td></tr
><tr
id=sl_svn9188_8

><td class="source"><br></td></tr
><tr
id=sl_svn9188_9

><td class="source"><br></td></tr
><tr
id=sl_svn9188_10

><td class="source"><br></td></tr
><tr
id=sl_svn9188_11

><td class="source">#ifndef SkData_DEFINED<br></td></tr
><tr
id=sl_svn9188_12

><td class="source">#define SkData_DEFINED<br></td></tr
><tr
id=sl_svn9188_13

><td class="source"><br></td></tr
><tr
id=sl_svn9188_14

><td class="source">#include &quot;SkFlattenable.h&quot;<br></td></tr
><tr
id=sl_svn9188_15

><td class="source"><br></td></tr
><tr
id=sl_svn9188_16

><td class="source">struct SkFILE;<br></td></tr
><tr
id=sl_svn9188_17

><td class="source"><br></td></tr
><tr
id=sl_svn9188_18

><td class="source">/**<br></td></tr
><tr
id=sl_svn9188_19

><td class="source"> *  SkData holds an immutable data buffer. Not only is the data immutable,<br></td></tr
><tr
id=sl_svn9188_20

><td class="source"> *  but the actual ptr that is returned (by data() or bytes()) is guaranteed<br></td></tr
><tr
id=sl_svn9188_21

><td class="source"> *  to always be the same for the life of this instance.<br></td></tr
><tr
id=sl_svn9188_22

><td class="source"> */<br></td></tr
><tr
id=sl_svn9188_23

><td class="source">class SK_API SkData : public SkFlattenable {<br></td></tr
><tr
id=sl_svn9188_24

><td class="source">public:<br></td></tr
><tr
id=sl_svn9188_25

><td class="source">    SK_DECLARE_INST_COUNT(SkData)<br></td></tr
><tr
id=sl_svn9188_26

><td class="source"><br></td></tr
><tr
id=sl_svn9188_27

><td class="source">    /**<br></td></tr
><tr
id=sl_svn9188_28

><td class="source">     *  Returns the number of bytes stored.<br></td></tr
><tr
id=sl_svn9188_29

><td class="source">     */<br></td></tr
><tr
id=sl_svn9188_30

><td class="source">    size_t size() const { return fSize; }<br></td></tr
><tr
id=sl_svn9188_31

><td class="source"><br></td></tr
><tr
id=sl_svn9188_32

><td class="source">    bool isEmpty() const { return 0 == fSize; }<br></td></tr
><tr
id=sl_svn9188_33

><td class="source"><br></td></tr
><tr
id=sl_svn9188_34

><td class="source">    /**<br></td></tr
><tr
id=sl_svn9188_35

><td class="source">     *  Returns the ptr to the data.<br></td></tr
><tr
id=sl_svn9188_36

><td class="source">     */<br></td></tr
><tr
id=sl_svn9188_37

><td class="source">    const void* data() const { return fPtr; }<br></td></tr
><tr
id=sl_svn9188_38

><td class="source"><br></td></tr
><tr
id=sl_svn9188_39

><td class="source">    /**<br></td></tr
><tr
id=sl_svn9188_40

><td class="source">     *  Like data(), returns a read-only ptr into the data, but in this case<br></td></tr
><tr
id=sl_svn9188_41

><td class="source">     *  it is cast to uint8_t*, to make it easy to add an offset to it.<br></td></tr
><tr
id=sl_svn9188_42

><td class="source">     */<br></td></tr
><tr
id=sl_svn9188_43

><td class="source">    const uint8_t* bytes() const {<br></td></tr
><tr
id=sl_svn9188_44

><td class="source">        return reinterpret_cast&lt;const uint8_t*&gt;(fPtr);<br></td></tr
><tr
id=sl_svn9188_45

><td class="source">    }<br></td></tr
><tr
id=sl_svn9188_46

><td class="source"><br></td></tr
><tr
id=sl_svn9188_47

><td class="source">    /**<br></td></tr
><tr
id=sl_svn9188_48

><td class="source">     *  Helper to copy a range of the data into a caller-provided buffer.<br></td></tr
><tr
id=sl_svn9188_49

><td class="source">     *  Returns the actual number of bytes copied, after clamping offset and<br></td></tr
><tr
id=sl_svn9188_50

><td class="source">     *  length to the size of the data. If buffer is NULL, it is ignored, and<br></td></tr
><tr
id=sl_svn9188_51

><td class="source">     *  only the computed number of bytes is returned.<br></td></tr
><tr
id=sl_svn9188_52

><td class="source">     */<br></td></tr
><tr
id=sl_svn9188_53

><td class="source">    size_t copyRange(size_t offset, size_t length, void* buffer) const;<br></td></tr
><tr
id=sl_svn9188_54

><td class="source"><br></td></tr
><tr
id=sl_svn9188_55

><td class="source">    /**<br></td></tr
><tr
id=sl_svn9188_56

><td class="source">     *  Returns true if these two objects have the same length and contents,<br></td></tr
><tr
id=sl_svn9188_57

><td class="source">     *  effectively returning 0 == memcmp(...)<br></td></tr
><tr
id=sl_svn9188_58

><td class="source">     */<br></td></tr
><tr
id=sl_svn9188_59

><td class="source">    bool equals(const SkData* other) const;<br></td></tr
><tr
id=sl_svn9188_60

><td class="source"><br></td></tr
><tr
id=sl_svn9188_61

><td class="source">    /**<br></td></tr
><tr
id=sl_svn9188_62

><td class="source">     *  Function that, if provided, will be called when the SkData goes out<br></td></tr
><tr
id=sl_svn9188_63

><td class="source">     *  of scope, allowing for custom allocation/freeing of the data.<br></td></tr
><tr
id=sl_svn9188_64

><td class="source">     */<br></td></tr
><tr
id=sl_svn9188_65

><td class="source">    typedef void (*ReleaseProc)(const void* ptr, size_t length, void* context);<br></td></tr
><tr
id=sl_svn9188_66

><td class="source"><br></td></tr
><tr
id=sl_svn9188_67

><td class="source">    /**<br></td></tr
><tr
id=sl_svn9188_68

><td class="source">     *  Create a new dataref by copying the specified data<br></td></tr
><tr
id=sl_svn9188_69

><td class="source">     */<br></td></tr
><tr
id=sl_svn9188_70

><td class="source">    static SkData* NewWithCopy(const void* data, size_t length);<br></td></tr
><tr
id=sl_svn9188_71

><td class="source"><br></td></tr
><tr
id=sl_svn9188_72

><td class="source">    /**<br></td></tr
><tr
id=sl_svn9188_73

><td class="source">     *  Create a new dataref by copying the specified c-string<br></td></tr
><tr
id=sl_svn9188_74

><td class="source">     *  (a null-terminated array of bytes). The returned SkData will have size()<br></td></tr
><tr
id=sl_svn9188_75

><td class="source">     *  equal to strlen(cstr) + 1. If cstr is NULL, it will be treated the same<br></td></tr
><tr
id=sl_svn9188_76

><td class="source">     *  as &quot;&quot;.<br></td></tr
><tr
id=sl_svn9188_77

><td class="source">     */<br></td></tr
><tr
id=sl_svn9188_78

><td class="source">    static SkData* NewWithCString(const char cstr[]);<br></td></tr
><tr
id=sl_svn9188_79

><td class="source"><br></td></tr
><tr
id=sl_svn9188_80

><td class="source">    /**<br></td></tr
><tr
id=sl_svn9188_81

><td class="source">     *  Create a new dataref, taking the data ptr as is, and using the<br></td></tr
><tr
id=sl_svn9188_82

><td class="source">     *  releaseproc to free it. The proc may be NULL.<br></td></tr
><tr
id=sl_svn9188_83

><td class="source">     */<br></td></tr
><tr
id=sl_svn9188_84

><td class="source">    static SkData* NewWithProc(const void* data, size_t length,<br></td></tr
><tr
id=sl_svn9188_85

><td class="source">                               ReleaseProc proc, void* context);<br></td></tr
><tr
id=sl_svn9188_86

><td class="source"><br></td></tr
><tr
id=sl_svn9188_87

><td class="source">    /**<br></td></tr
><tr
id=sl_svn9188_88

><td class="source">     *  Create a new dataref from a pointer allocated by malloc. The Data object<br></td></tr
><tr
id=sl_svn9188_89

><td class="source">     *  takes ownership of that allocation, and will handling calling sk_free.<br></td></tr
><tr
id=sl_svn9188_90

><td class="source">     */<br></td></tr
><tr
id=sl_svn9188_91

><td class="source">    static SkData* NewFromMalloc(const void* data, size_t length);<br></td></tr
><tr
id=sl_svn9188_92

><td class="source"><br></td></tr
><tr
id=sl_svn9188_93

><td class="source">    /**<br></td></tr
><tr
id=sl_svn9188_94

><td class="source">     *  Create a new dataref from a SkFILE.<br></td></tr
><tr
id=sl_svn9188_95

><td class="source">     *  This does not take ownership of the SkFILE, nor close it.<br></td></tr
><tr
id=sl_svn9188_96

><td class="source">     *  The SkFILE must be open for reading only.<br></td></tr
><tr
id=sl_svn9188_97

><td class="source">     *  Returns NULL on failure.<br></td></tr
><tr
id=sl_svn9188_98

><td class="source">     */<br></td></tr
><tr
id=sl_svn9188_99

><td class="source">    static SkData* NewFromFILE(SkFILE* f);<br></td></tr
><tr
id=sl_svn9188_100

><td class="source"><br></td></tr
><tr
id=sl_svn9188_101

><td class="source">    /**<br></td></tr
><tr
id=sl_svn9188_102

><td class="source">     *  Create a new dataref using a subset of the data in the specified<br></td></tr
><tr
id=sl_svn9188_103

><td class="source">     *  src dataref.<br></td></tr
><tr
id=sl_svn9188_104

><td class="source">     */<br></td></tr
><tr
id=sl_svn9188_105

><td class="source">    static SkData* NewSubset(const SkData* src, size_t offset, size_t length);<br></td></tr
><tr
id=sl_svn9188_106

><td class="source"><br></td></tr
><tr
id=sl_svn9188_107

><td class="source">    /**<br></td></tr
><tr
id=sl_svn9188_108

><td class="source">     *  Returns a new empty dataref (or a reference to a shared empty dataref).<br></td></tr
><tr
id=sl_svn9188_109

><td class="source">     *  New or shared, the caller must see that unref() is eventually called.<br></td></tr
><tr
id=sl_svn9188_110

><td class="source">     */<br></td></tr
><tr
id=sl_svn9188_111

><td class="source">    static SkData* NewEmpty();<br></td></tr
><tr
id=sl_svn9188_112

><td class="source"><br></td></tr
><tr
id=sl_svn9188_113

><td class="source">    SK_DECLARE_PUBLIC_FLATTENABLE_DESERIALIZATION_PROCS(SkData)<br></td></tr
><tr
id=sl_svn9188_114

><td class="source"><br></td></tr
><tr
id=sl_svn9188_115

><td class="source">protected:<br></td></tr
><tr
id=sl_svn9188_116

><td class="source">    SkData(SkFlattenableReadBuffer&amp;);<br></td></tr
><tr
id=sl_svn9188_117

><td class="source">    virtual void flatten(SkFlattenableWriteBuffer&amp;) const SK_OVERRIDE;<br></td></tr
><tr
id=sl_svn9188_118

><td class="source"><br></td></tr
><tr
id=sl_svn9188_119

><td class="source">private:<br></td></tr
><tr
id=sl_svn9188_120

><td class="source">    ReleaseProc fReleaseProc;<br></td></tr
><tr
id=sl_svn9188_121

><td class="source">    void*       fReleaseProcContext;<br></td></tr
><tr
id=sl_svn9188_122

><td class="source"><br></td></tr
><tr
id=sl_svn9188_123

><td class="source">    const void* fPtr;<br></td></tr
><tr
id=sl_svn9188_124

><td class="source">    size_t      fSize;<br></td></tr
><tr
id=sl_svn9188_125

><td class="source"><br></td></tr
><tr
id=sl_svn9188_126

><td class="source">    SkData(const void* ptr, size_t size, ReleaseProc, void* context);<br></td></tr
><tr
id=sl_svn9188_127

><td class="source">    virtual ~SkData();<br></td></tr
><tr
id=sl_svn9188_128

><td class="source"><br></td></tr
><tr
id=sl_svn9188_129

><td class="source">    typedef SkFlattenable INHERITED;<br></td></tr
><tr
id=sl_svn9188_130

><td class="source">};<br></td></tr
><tr
id=sl_svn9188_131

><td class="source"><br></td></tr
><tr
id=sl_svn9188_132

><td class="source">/** Typedef of SkAutoTUnref&lt;SkData&gt; for automatically unref-ing a SkData. */<br></td></tr
><tr
id=sl_svn9188_133

><td class="source">typedef SkAutoTUnref&lt;SkData&gt; SkAutoDataUnref;<br></td></tr
><tr
id=sl_svn9188_134

><td class="source"><br></td></tr
><tr
id=sl_svn9188_135

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
 <a href="/p/skia/source/detail?spec=svn9188&amp;r=8848">r8848</a>
 by commit-...@chromium.org
 on Apr 24, 2013
 &nbsp; <a href="/p/skia/source/diff?spec=svn9188&r=8848&amp;format=side&amp;path=/trunk/include/core/SkData.h&amp;old_path=/trunk/include/core/SkData.h&amp;old=8697">Diff</a>
 </div>
 <pre>Move MMap to SkData.

R=reed@google.com

Author: bungeman@google.com

Review URL: <a href="https://chromiumcodereview.app" rel="nofollow">https://chromiumcodereview.app</a>
spot.com/14336003</pre>
 </div>
 
 
 
 
 
 
 <script type="text/javascript">
 var detail_url = '/p/skia/source/detail?r=8848&spec=svn9188';
 var publish_url = '/p/skia/source/detail?r=8848&spec=svn9188#publish';
 // describe the paths of this revision in javascript.
 var changed_paths = [];
 var changed_urls = [];
 
 changed_paths.push('/trunk/gm/factory.cpp');
 changed_urls.push('/p/skia/source/browse/trunk/gm/factory.cpp?r\x3d8848\x26spec\x3dsvn9188');
 
 
 changed_paths.push('/trunk/include/core/SkData.h');
 changed_urls.push('/p/skia/source/browse/trunk/include/core/SkData.h?r\x3d8848\x26spec\x3dsvn9188');
 
 var selected_path = '/trunk/include/core/SkData.h';
 
 
 changed_paths.push('/trunk/src/core/SkData.cpp');
 changed_urls.push('/p/skia/source/browse/trunk/src/core/SkData.cpp?r\x3d8848\x26spec\x3dsvn9188');
 
 
 changed_paths.push('/trunk/src/core/SkStream.cpp');
 changed_urls.push('/p/skia/source/browse/trunk/src/core/SkStream.cpp?r\x3d8848\x26spec\x3dsvn9188');
 
 
 changed_paths.push('/trunk/src/ports/SkOSFile_stdio.cpp');
 changed_urls.push('/p/skia/source/browse/trunk/src/ports/SkOSFile_stdio.cpp?r\x3d8848\x26spec\x3dsvn9188');
 
 
 changed_paths.push('/trunk/src/utils/win/SkHRESULT.cpp');
 changed_urls.push('/p/skia/source/browse/trunk/src/utils/win/SkHRESULT.cpp?r\x3d8848\x26spec\x3dsvn9188');
 
 
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
 
 <option value="/p/skia/source/browse/trunk/gm/factory.cpp?r=8848&amp;spec=svn9188"
 
 >/trunk/gm/factory.cpp</option>
 
 <option value="/p/skia/source/browse/trunk/include/core/SkData.h?r=8848&amp;spec=svn9188"
 selected="selected"
 >/trunk/include/core/SkData.h</option>
 
 <option value="/p/skia/source/browse/trunk/src/core/SkData.cpp?r=8848&amp;spec=svn9188"
 
 >/trunk/src/core/SkData.cpp</option>
 
 <option value="/p/skia/source/browse/trunk/src/core/SkStream.cpp?r=8848&amp;spec=svn9188"
 
 >/trunk/src/core/SkStream.cpp</option>
 
 <option value="/p/skia/source/browse/trunk/src/ports/SkOSFile_stdio.cpp?r=8848&amp;spec=svn9188"
 
 >/trunk/src/ports/SkOSFile_stdio.cpp</option>
 
 <option value="/p/skia/source/browse/trunk/src/utils/win/SkHRESULT.cpp?r=8848&amp;spec=svn9188"
 
 >/trunk/src/utils/win/SkHRESULT.cpp</option>
 
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
 <a href="/p/skia/source/detail?spec=svn9188&r=8697">r8697</a>
 by bunge...@google.com
 on Apr 16, 2013
 &nbsp; <a href="/p/skia/source/diff?spec=svn9188&r=8697&amp;format=side&amp;path=/trunk/include/core/SkData.h&amp;old_path=/trunk/include/core/SkData.h&amp;old=8211">Diff</a>
 <br>
 <pre class="ifOpened">Remove 'friend SkRefCnt' from SkData.
<a href="https://codereview.chromium.org/139250" rel="nofollow">https://codereview.chromium.org/139250</a>
21/

If a non-POD class does not provide a
...</pre>
 </div>
 
 <div class="closed" style="margin-bottom:3px;" >
 <a class="ifClosed" onclick="return _toggleHidden(this)"><img src="https://ssl.gstatic.com/codesite/ph/images/plus.gif" ></a>
 <a class="ifOpened" onclick="return _toggleHidden(this)"><img src="https://ssl.gstatic.com/codesite/ph/images/minus.gif" ></a>
 <a href="/p/skia/source/detail?spec=svn9188&r=8211">r8211</a>
 by skia.committer
 on Mar 19, 2013
 &nbsp; <a href="/p/skia/source/diff?spec=svn9188&r=8211&amp;format=side&amp;path=/trunk/include/core/SkData.h&amp;old_path=/trunk/include/core/SkData.h&amp;old=8206">Diff</a>
 <br>
 <pre class="ifOpened">Sanitizing source files in
Skia_Periodic_House_Keeping</pre>
 </div>
 
 <div class="closed" style="margin-bottom:3px;" >
 <a class="ifClosed" onclick="return _toggleHidden(this)"><img src="https://ssl.gstatic.com/codesite/ph/images/plus.gif" ></a>
 <a class="ifOpened" onclick="return _toggleHidden(this)"><img src="https://ssl.gstatic.com/codesite/ph/images/minus.gif" ></a>
 <a href="/p/skia/source/detail?spec=svn9188&r=8206">r8206</a>
 by r...@google.com
 on Mar 18, 2013
 &nbsp; <a href="/p/skia/source/diff?spec=svn9188&r=8206&amp;format=side&amp;path=/trunk/include/core/SkData.h&amp;old_path=/trunk/include/core/SkData.h&amp;old=8205">Diff</a>
 <br>
 <pre class="ifOpened">reland 8200 w/ fix for android (use
fullpath instead of path)
Review URL: <a href="https://codereview.chromiu" rel="nofollow">https://codereview.chromiu</a>
m.org/12921003</pre>
 </div>
 
 
 <a href="/p/skia/source/list?path=/trunk/include/core/SkData.h&start=8848">All revisions of this file</a>
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
 
 <div>Size: 4049 bytes,
 135 lines</div>
 
 <div><a href="//skia.googlecode.com/svn/trunk/include/core/SkData.h">View raw file</a></div>
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
 var paths = {'svn9188': '/trunk/include/core/SkData.h'}
 codereviews = CR_controller.setup(
 {"relativeBaseUrl":"","domainName":null,"assetHostPath":"https://ssl.gstatic.com/codesite/ph","assetVersionPath":"https://ssl.gstatic.com/codesite/ph/10948521920255093670","profileUrl":"/u/104544769917658163163/","projectHomeUrl":"/p/skia","token":"4MMp0CML7igjLAW4kZ7ZaZ9GG9s:1369043228247","projectName":"skia","loggedInUserEmail":"dineshprjpt@gmail.com"}, '', 'svn9188', paths,
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


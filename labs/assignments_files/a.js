document.write("<style>/* {{{ basics */.aulj16a3y {position: relative;width: 100%;height: 78px;}/* }}} *//* {{{ extra1: background image */.aulj16a3y-extra1 {position: absolute;top: 0px;left: 0px;width: 100%;background-position: top right;height: 78px;background-image: url(\"http://www.txstate.edu/branding/branding-bar-background.gif\");}/* }}} *//* {{{ homelink */a#aulj16a3y-homelink {position: absolute;display: block;background-repeat: no-repeat;top: 3px;left: 10px;width: 152px;height: 51px;background-image: url(\"http://www.txstate.edu/branding/branding-bar-logo.gif\");}a#aulj16a3y-homelink span.alternate {display: none;}/* }}} *//* {{{ tools */.aulj16a3y-tools {position: absolute;top: 0px;right: 0px;height: 34px;padding-left: 42px;background-image: url(\"http://www.txstate.edu/branding/branding-bar-tools-background.gif\");background-position: top right;}.aulj16a3y-toolsboxihatequirks {margin-top: 4px;}.aulj16a3y-tools form {display: inline;}.aulj16a3y-toolssearchbutton {position: absolute;top: 5px;right: 7px;}.aulj16a3y-toolsonlineservices {padding-right: 20px;}.aulj16a3y-toolssearch div {padding-right: 35px;}.aulj16a3y-toolsextra1 {position: absolute;top: 0px;left: 0px;height: 34px;width: 38px;background-image: url(\"http://www.txstate.edu/branding/branding-bar-toolsleftcap.gif\");background-repeat: no-repeat;}/* }}} *//* {{{ links */.aulj16a3y-links {position: absolute;top: 38px;right: 5px;color: black;font-family: arial, helvetica, sans-serif;font-weight: bold;font-size: 12.8px;b}.aulj16a3y-links a {color: black;text-decoration: none;}.aulj16a3y-links a:hover {color: black;text-decoration: underline;}/* }}} */.aulj16a3y-siteimage {position: absolute;bottom: 0px;left: px;height: 21px;width: px;background-image: url(\"http://www.txstate.edu/branding/txstate_logo_site/.gif\");display: none;}.aulj16a3y-sitelink {display: none;height: 21px;width: px;}</style><div class=\"aulj16a3y\"><div class=\"aulj16a3y-extra1\"></div><div class=\"aulj16a3y-extra2\"></div><a id=\"aulj16a3y-homelink\" href=\"http://www.txstate.edu/\"><span class=\"alternate\">Texas State University</span></a><div class=\"aulj16a3y-siteimage\"><a href=\"\" class=\"aulj16a3y-sitelink\"></a></div><div class=\"aulj16a3y-links\"><a href=\"http://www.txstate.edu/about/index.html\">About Texas State</a> | <a href=\"http://www.library.txstate.edu/\">Library</a> | <a href=\"http://www.maps.txstate.edu/\">Maps</a> | <a href=\"http://www.rrhec.txstate.edu/\">Round Rock</a></div><div class=\"aulj16a3y-tools\"><div class=\"aulj16a3y-toolsboxihatequirks\"><form class=\"aulj16a3y-toolsonlineservices\" action=\"#\"><div style=\"display: inline;\"><select id=\"aulj16a3y-online-services-go-to\" name=\"service\" onchange=\"return aulj16a3y_onlineservicesgoto(this);\"><option>Online Services</option><option value=\"https://synergy.txstate.edu/\">BobcatMail</option><option value=\"https://catsweb.txstate.edu/catsweb/index.htm\">Catsweb</option><option value=\"http://www.sbs.txstate.edu/\">Pay Tuition</option><option value=\"https://ssb.txstate.edu/prod/twbkwbis.P_WWWLogin\">Registration</option><option value=\"https://ibis.txstate.edu/\">SAP Portal</option><option value=\"https://tracs.txstate.edu/\">TRACS</option></select></div></form><form id=\"aulj16a3y-toolssearch\" class=\"aulj16a3y-toolssearch\" action=\"http://search.txstate.edu/search\" onsubmit=\"return aulj16a3y_submitsearch(this);\"><div style=\"display: inline;\"><input value=\"Search web/people\" size=\"15\" name=\"q\" type=\"text\" onfocus=\"return aulj16a3y_searchboxfocus(this);\" id=\"aulj16a3y-query\" />&nbsp;<select id=\"aulj16a3y-toolsearch-searchtype\" name=\"service\"><option value=\"web\">TxState</option><option value=\"people\">People Search</option></select><input class=\"aulj16a3y-toolssearchbutton\" src=\"http://www.txstate.edu/branding/banner-searchgo.gif\" type=\"image\"/><input value=\"txstate_no_users\" name=\"site\" type=\"hidden\"/><input value=\"xml_no_dtd\" name=\"output\" type=\"hidden\"/><input value=\"txstate\" name=\"client\" type=\"hidden\"/><input value=\"txstate\" name=\"proxystylesheet\" type=\"hidden\"/><input type=\"hidden\" name=\"sitesearch\" value=\"\" id=\"aulj16a3y-sitesearch\"/></div></form><div class=\"aulj16a3y-toolsextra1\"></div></div></div><div class=\"aulj16a3y-extra3\"></div><div class=\"aulj16a3y-extra4\"></div></div>");

function aulj16a3y_onlineservicesgoto(selectBox) {
	var selectedIndex = selectBox.selectedIndex;
	var selectedOption = selectBox[selectedIndex];
	if ( selectedOption.value.substring(0,4) == 'http' ) {
		window.location = selectedOption.value;
	}
}

function aulj16a3y_searchboxfocus(inputObject) {
	var currentContents = inputObject.value;
	if ( currentContents == 'Search web/people' ) {
		inputObject.value = '';
	}
}

function aulj16a3y_submitsearch(form) {
	var searchType = document.getElementById('aulj16a3y-toolsearch-searchtype').value;
	
	switch (searchType) {
	
		case "site":
			break;
		
		case "web":
			document.getElementById('aulj16a3y-sitesearch').value = '';
			break;
		
		case "people":
			var queryString = document.getElementById('aulj16a3y-query').value;
			window.location = "http://peoplesearch.txstate.edu/peoplesearch2.pl?srchmode=search&query=" + queryString;
			return false;
			break;
		
		default:
			alert("Default?!");
			break;
	}
}


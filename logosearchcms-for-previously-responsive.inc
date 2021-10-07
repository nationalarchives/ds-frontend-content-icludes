<link href="https://fonts.googleapis.com/css?family=Open+Sans" rel="stylesheet" type="text/css">
<link href="https://fonts.googleapis.com/css?family=Bitter" rel="stylesheet" type="text/css">

<style type="text/css">
    #bridging-header {
        font-family: 'Open Sans', sans-serif;
        font-size: 16px;
        background-color: #111;
        margin-top: -19px;
    }

    #bridging-header > #bridging-inner-positioner {
        position: relative;
    }

    #bridging-banner {
        margin: 0;
        width: 49%;
        height: 64px;
    }
   
    #bridging-logo img {
        padding: 0.8em 0 0.6em 1em;
    }

    #bridging-search-field-wrapper {
        margin: 1em 0 0 1em;
        position: relative;
    }

    #bridging-search-field-wrapper input[type="submit"] {
        background-attachment: scroll;
        background-color: #009999;
        background-image: url("../../images/global/search-white.png");
        background-position: center center;
        background-repeat: no-repeat;
        background-size: cover;
        border: none;
        height: 40px;
        padding: 0.39em;
        position: absolute;
        right: 0;
        top: 0;
        width: 40px;
        border-radius: 0;
    }

    #bridging-search-options {
        display: none;
        position: absolute;
        top: 0;
        right: 0;
    }

    #bridging-search-field-wrapper input[type="text"] {
        border-radius: 0 0 0 0;
        font-family: 'Open Sans',sans-serif !important;
        height: 33px;
        position: absolute;
        right: 45px;
        text-indent: 10px;
        top: 0;
        width: 210px;
    }

    #bridging-scope-selector {
        background-color: #383838;
        background-image: url("../../images/global/scope-selector.png");
        background-repeat: no-repeat;
        background-size: cover;
        cursor: pointer;
        display: inline-block;
        height: 40px;
        line-height: 40px;
        position: absolute;
        right: 259px;
        top: 0;
        width: 40px;
    }


    #bridging-scope-selector.expanded {
        background-image: url("../../images/global/scope-selector-expanded.png");
    }

    #bridging-search-options {
        background-color: #383838;
        display: none;
        padding: 5px;
        position: absolute;
        right: 87px;
        top: 40px;
        width: 202px;
        z-index: 2002;
    }

    #bridging-search-options li a {
        color: #FFF;
        font-size: 0.9em;
        padding: 0.8em;
        display: block;
        text-decoration: none;
    }

    #bridging-search-options li a:hover {
        background-color: #FCE45C;
        color: #000;
        text-decoration: underline;
    }

    #bridging-mega-menu-pull-down-positioner {
        margin: auto;
        bottom: 0;

    }
    #bridging-mega-menu-pull-down {
        background-color: #CB0D07;
        border-radius: 50% 50% 50% 50%;
        display: none;
        font-size: 0.9em;
        height: 2.55em;
        margin: 0 auto -30px;
        padding: 0.8em;
        position: relative;
        text-align: center;
        width: 2.55em;
        z-index: 2000;
    }

    #bridging-mega-menu-pull-down button {
        background-image: url("../../images/global/menu-collapsed.png");
        font-family: 'Open Sans';
        background-repeat: no-repeat;
        background-color: transparent;
        background-position: 51.5% 100%;
        color: #FFF;
        text-decoration: none;
        border: none;
        font-size: 1em;
        position: absolute;
        padding: 14px 9px 20px;
        left: 0px;
        top: -2px;
        cursor: pointer;
    }

    #bridging-mega-menu-pull-down button.expanded {
        background-image: url("../../images/global/menu-expanded.png");
        font-family: 'Open Sans';
        background-repeat: no-repeat;
        background-color: transparent;
        background-position: 51.5% 100%;
        color: #FFF;
        text-decoration: none;
        border: none;
        font-size: 1em;
        position: absolute;
        padding: 14px 9px 20px;
        left: 0px;
        top: -2px;
        cursor: pointer;
    }

    .through-a-lens #bridging-mega-menu-pull-down button {
        left: 0;
    }

    .bridging-mega-menu-group {
        margin-left: 1.5%!important;
        margin-bottom: 0.5em;
    }

    .bridging-mega-menu-group a {
        text-decoration: none;
        display: block;
        padding: 0.17em 0.3em 0.37em 0.3em;
        color: #FFF;
    }

    .bridging-mega-menu-group li > a {   
        padding: 0.17em 0.3em 0.37em 0.3em;
    }

    .bridging-mega-menu-group a:hover {
        text-decoration: underline;
        color: #FFF;
    }

    .bridging-mega-menu-group h3 {
        font-family: 'Bitter', serif;
        font-size: 1.5em;
        font-weight: normal;
        color: #FFF;
        margin-bottom: 0.5em;
        margin-top: 0;
    }

    .bridging-mega-menu-group ul {
        margin-top: 2em;
        margin-left: 0;
        padding-left: 0;  
    }

    .bridging-mega-menu-group li {
        font-family: 'Open Sans', sans-serif;
        font-size: 14px;
        -webkit-transition: background-color 180ms linear;
        -moz-transition: background-color 180ms linear;
        -o-transition: background-color 180ms linear;
        -ms-transition: background-color 180ms linear;
        transition: background-color 180ms linear;
        display: block;
        border-top: 1px #192132 dotted;
        list-style: none;   
    }

    #bridging-mega-menu {
        padding-top: 2em;
        padding-bottom: 1em;
        background-color: #405480;
    }

    #bridging-mega-menu div {
        background-color: #405480;
    }


    .row:after, .col:after, .clr:after, .group:after {
        content: "";
        display: block;
        height: 0;
        clear: both;
        visibility: hidden;
    }

    #breadcrumb {
        /*margin-top: 10px;*/
        z-index : 9000;
        text-overflow: elipsis;
        padding-top: 3em;
    }

    #breadcrumb a {
        display: inline-block;
    }

    #main-menu-wrapper {
        display: none;
    }

    #sub-menu-wrapper {
        display: none;
    }

    #bridging-search-field-wrapper {
        display: none;
    }

    #bridging-search-for-mobile {
        display: block;
        color: #FFF;
    }

    #mobile-search-outer-wrapper {
        width: 92%;
        margin: auto;
        margin-bottom: 1em;
    }

    #mobile-search-wrapper input[type="submit"] {
        position: absolute;
        right: 0;
        width: 40px;
        height: 39px;
        background: url("../images/global/search-white.png") no-repeat center;
        background-color: #009999;
        border: none;
    }

    #mobile-search-wrapper {
        position: relative;
    }

    #changeDestination {
        color: #FFF;
        padding-top: 0.5em;
    }

    #changeDestination span {
        display: inline-block;
        margin-bottom: 0.2em;
    }

    #changeDestination label {
        margin: 0 0.5em;
    }

    #mobile-search-field {
        padding: 0.52em;
        width: 90%;
        border: none;
    }

    #search-expander {
        width: 40px;
        height: 40px;
        background: url("../images/global/search-white.png") no-repeat center;
        background-size: cover;
        position: absolute;
        top: 1em;
        right: 0.5em;
        border-radius: 0;
        cursor: pointer;
    }

    #search-expander.expanded {
        background: url("../images/global/close-search.png") no-repeat center;
    }
    
    .bridging-mega-menu-group ul {
        display: none;
        padding: 0.5em;
    }

    .bridging-mega-menu-group ul li {
        padding: 0.1em;
    }

    .bridging-mega-menu-group h3 {
        background: url("../images/global/plus.png") no-repeat 5px 6px;
        padding: 0px 5px 0px 22px;
        margin: 0;
        cursor: pointer;
        font-size: 20px;
    }

    .bridging-mega-menu-group h3 a {
        padding: 0;
    }

    .bridging-mega-menu-group h3.expanded {
        background-image: url("../images/global/minus.png");
    }

    #bridging-logo img {
        max-width: 100%;
        min-width: 230px;
    }


    /* Media queries */
    @media only screen and (min-width: 480px) { 
        #bridging-logo img {
            max-width: auto;
        }

        .bridging-mega-menu-group ul {
            padding: 0em;
        }
        .bridging-mega-menu-group h3 {
            background: none;
            padding: 0px;
            cursor: pointer;
            font-size: 20px;
        }

        .bridging-mega-menu-group ul {
            display: block;
        }

        .bridging-mega-menu-group h3.expanded {
            background-image: url("../images/global/minus.png");
        }

        .bridging-mega-menu ul {
            display: block;
            margin: 0 0;
        }
        .bridging-mega-menu-group {
            float: left;
            width: 48.5%; 
            margin-left: 2%;    
        }
        .bridging-mega-menu-group:nth-child(odd) {
            margin-left: 0;
        }

        .bridging-mega-menu-group div {
            height: 100%;
        }
        .bridging-mega-menu-group li:hover {
            background-color: #111;
        }
    }

    @media only screen and (min-width: 760px) {
        .bridging-mega-menu-group {
            width: 31%; 
            margin-left: 2%;    
        }
        .bridging-mega-menu-group:nth-child(4) {
            margin-left: 0;
        }
        #search-expander {
            display: none;
        }
        #bridging-search {
            margin: 0;
            width: 49%;
            position: absolute;
            top: 0px;
            right: 14px;
        }
        #bridging-search-field-wrapper {
            display: block;
        }
        #bridging-search-for-mobile {
            display: none;
        }
        #bridging-banner {
            height: 39px;
        }   
    }

    @media only screen and (min-width: 960px) {
        .bridging-mega-menu-group {
            width: 15%; 
            margin-left: 2%;

        }
        .bridging-mega-menu-group:nth-child(4) {
            margin-left: 2%;
        }   
        #breadcrumb {
            /*padding-top: 1em;*/
        } 
    }

</style>

<!--[if (gt IE 6)&(lt IE 9)]>
    <link rel="stylesheet" type="text/css" href="/styles/previously-responsive-bridging.css">
<![endif]-->


<!--[if IE 7]>
    <style type="text/css">

    body {
        position: relative;
    }

    #breadcrumb {
        padding-top: 3em;
    }

    #bridging-search-field-wrapper input[type="text"] {
        width: 212px;
        right: 44px;
        padding-top: 8px;
        height: 29px;
    }

    #bridging-mega-menu {
        min-height: 400px;
    }


    #bridging-mega-menu-pull-down button {
        left: 0px;
        top: 0px;
        background-position: 54.5% 95%!important;        
    }

    </style>
<![endif]-->


<!--[if IE 8]>
    <style type="text/css">
        #bridging-search-field-wrapper input[type="text"] {
            width: 212px;
            right: 44px;
            padding-top: 8px;
            height: 29px;
        }

    #bridging-mega-menu {
        min-height: 400px;
    }

    #bridging-mega-menu-pull-down button {
        left: 0px;
        top: 0px;        
        background-position: 54.5% 100%;
    }

    </style>
<![endif]-->


<!--[if IE 9]>
    <style type="text/css">
        #bridging-mega-menu-pull-down button {
            background-position: 55.5% 100%;
            }
    </style>
<![endif]-->

<!-- FIX FOR IE10 --> 
<style type="text/css">
_::-ms-reveal, #bridging-mega-menu-pull-down button {
        background-position: 57.5% 100%;
        }
</style>


<div id="bridging-header">
    <div id="bridging-inner-positioner">
    <div id="bridging-banner">
        <div id="bridging-logo">
            <a href="/default.htm" title="The National Archives">
                <img src="../../images/global/logo-white.png" alt="The National Archives">
            </a>
        </div>
    </div>
    <div id="bridging-search">
            <div id="bridging-search-field-wrapper">
                <form action="/search/results" method="get" id="globalSearch">
                    <span id="bridging-scope-selector">&nbsp;</span>
                    <input type="text" class="search-field" placeholder="Search our website..." id="tnaSearch" name="_q" required="" aria-required="true" >
                    <input type="submit" class="search-button" alt="Submit search" id="search-button" value="">
                </form>
                <ul id="bridging-search-options">
                    <li><a href="#" class="formDestinationChanger" data-target="/search/results" data-placeholder="Search our website..." data-fieldName="_q" role="button" aria-label="Change form destination to search the website">Search our website</a></li>
                    <li><a href="#" class="formDestinationChanger" data-target="http://discovery.nationalarchives.gov.uk/results/r" data-placeholder="Search our records..." data-fieldName="_q" role="button" aria-label="Change form destination to search the catalogue">Search our records</a></li>                
                </ul>
            </div>
            <div id="bridging-search-for-mobile">
                <form action="/search/results" method="get" id="mobileGlobalSearch">
                    <div id="mobile-search-outer-wrapper">
                        <div id="mobile-search-wrapper">
                            <input type="text" id="mobile-search-field" placeholder="Search our website..." name="_q" required="" aria-required="true">
                            <input type="submit" alt="Submit search" value="">
                        </div>
                        <div id="changeDestination">
                            <span>
                                <input checked="" type="radio" class="mobileSearchDestinationOption" name="searchDestination" id="websiteSearch" data-target="/search/results" data-placeholder="Search our website..." data-fieldname="_q"><label for="websiteSearch">Search our website</label>
                            </span>
                            <span>
                                <input type="radio" class="mobileSearchDestinationOption" name="searchDestination" id="catalogueSearch" data-target="http://discovery.nationalarchives.gov.uk/results/r" data-placeholder="Search our records..." data-fieldname="_q"><label for="catalogueSearch">Search our records</label>
                            </span>
                        </div>
                    </div>
                </form>
            </div>
        <span id="search-expander">&nbsp;</span>
    </div>
    <div id="bridging-mega-menu-pull-down-positioner">
        <div id="bridging-mega-menu-pull-down" style="display: block;">
                    <button aria-label="Toggle menu">Menu</button>
        </div>
    </div>
</div>
</div>



<div id="bridging-mega-menu">
    
<section class="row">
    <nav class="col bridging-mega-menu-group clr">
        <div>
				<h3><a data-gtm="mega-menu" href="http://www.nationalarchives.gov.uk/about">About us</a></h3>
					<ul>
					<li><a data-gtm="mega-menu" href="http://www.nationalarchives.gov.uk/about/our-role/">Our role</a></li>
					<li><a data-gtm="mega-menu" href="http://www.nationalarchives.gov.uk/about/visit-us/">Visit us</a></li>
					<li><a data-gtm="mega-menu" href="http://www.nationalarchives.gov.uk/about/visit-us/opening-times/">Opening times</a></li>
					<li><a data-gtm="mega-menu" href="http://www.nationalarchives.gov.uk/about/visit-us/whats-on/">What’s on</a></li>
					<li><a data-gtm="mega-menu" href="http://www.nationalarchives.gov.uk/about/visit-us/venue-hire/">Venue hire</a></li>
					<li><a data-gtm="mega-menu" href="http://www.nationalarchives.gov.uk/about/jobs/">Jobs</a></li>
					<li><a data-gtm="mega-menu" href="http://www.nationalarchives.gov.uk/about/get-involved/">Get involved</a></li>
					<li><a data-gtm="mega-menu" href="http://www.nationalarchives.gov.uk/about/news/">News</a></li>
					<li><a data-gtm="mega-menu" href="http://www.nationalarchives.gov.uk/about/commercial-opportunities/">Commercial opportunities</a></li>
					</ul>
        </div>
    </nav>
    <nav class="col bridging-mega-menu-group clr">
        <div>
				<h3><a data-gtm="mega-menu" href="http://www.nationalarchives.gov.uk/education/">Education</a></h3>
					<ul>
					<li><a data-gtm="mega-menu" href="http://www.nationalarchives.gov.uk/education/sessions-and-resources/?time-period=medieval,early-modern,empire-and-industry,victorians,early-20th-century,interwar,second-world-war,postwar">Time periods</a></li>
					<li><a data-gtm="mega-menu" href="http://www.nationalarchives.gov.uk/education/sessions-and-resources/?resource-type=lesson">Lessons</a></li>
					<li><a data-gtm="mega-menu" href="http://www.nationalarchives.gov.uk/education/sessions-and-resources/?resource-type=workshop">Workshops</a></li>
					<li><a data-gtm="mega-menu" href="http://www.nationalarchives.gov.uk/education/teachers/professional-development/">Professional development</a></li>
					<li><a data-gtm="mega-menu" href="http://www.nationalarchives.gov.uk/education/teachers/">For teachers</a></li>
					<li><a data-gtm="mega-menu" href="http://www.nationalarchives.gov.uk/education/students/">For students</a></li>
					</ul>
        </div>
    </nav>
    <nav class="col bridging-mega-menu-group clr">
        <div>
				<h3><a data-gtm="mega-menu" href="http://www.nationalarchives.gov.uk/help-with-your-research">Help with your research</a></h3>
					<ul>
					<li><a data-gtm="mega-menu" href="http://discovery.nationalarchives.gov.uk/">Search Discovery, our catalogue</a></li>
					<li><a data-gtm="mega-menu" href="http://www.nationalarchives.gov.uk/help-with-your-research/start-here/">Start your research here</a></li>
					<li><a data-gtm="mega-menu" href="http://www.nationalarchives.gov.uk/help-with-your-research/research-guides-keywords/">Research guides A-Z</a></li>
					<li><a data-gtm="mega-menu" href="http://www.nationalarchives.gov.uk/help-with-your-research/research-guides/?research-category=online">Online collections</a></li>
					<li><a data-gtm="mega-menu" href="http://www.nationalarchives.gov.uk/webarchive/">UK Government Web Archive</a></li>
					<li><a data-gtm="mega-menu" href="https://www.nationalarchives.gov.uk/contact-us/british-citizenship-services/">British citizenship services</a></li>
					<li><a data-gtm="mega-menu" href="http://www.nationalarchives.gov.uk/help-with-your-research/record-copying/">Record copying</a></li>
					</ul>
        </div>
    </nav>
    <nav class="col bridging-mega-menu-group clr">
        <div>
				<h3 class=hyphenate><a data-gtm="mega-menu" href="http://www.nationalarchives.gov.uk/information-management/">Information management</a></h3>
					<ul>
					<li><a data-gtm="mega-menu" href="http://www.nationalarchives.gov.uk/information-management/browse-guidance-standards/">Guidance and standards A-Z</a></li>
					<li><a data-gtm="mega-menu" href="http://www.nationalarchives.gov.uk/information-management/re-using-public-sector-information/uk-government-licensing-framework/crown-copyright/">Copyright</a></li>
					<li><a data-gtm="mega-menu" href="http://www.nationalarchives.gov.uk/information-management/manage-information/">How to manage your information</a></li>
					<li><a data-gtm="mega-menu" href="http://www.nationalarchives.gov.uk/information-management/re-using-public-sector-information/">Re-using PSI</a></li>
					<li><a data-gtm="mega-menu" href="http://www.nationalarchives.gov.uk/information-management/producing-official-publications/">Producing official publications</a></li>
					<li><a data-gtm="mega-menu" href="http://www.nationalarchives.gov.uk/information-management/legislation/">Legislation and regulations</a></li>
					<li><a data-gtm="mega-menu" href="http://www.nationalarchives.gov.uk/information-management/training/">Training</a></li>
					</ul>
        </div>
    </nav>
    <nav class="col bridging-mega-menu-group clr">
        <div>
				<h3><a data-gtm="mega-menu" href="http://www.nationalarchives.gov.uk/archives-sector">Archives sector</a></h3>
					<ul>
					<li><a data-gtm="mega-menu" href="http://www.nationalarchives.gov.uk/archives-sector/our-archives-sector-role/historical-manuscripts-commission/">Historical Manuscripts Commission</a></li>
					<li><a data-gtm="mega-menu" href="http://www.nationalarchives.gov.uk/archives-sector/finding-funding/">Finding funding</a></li>
					<li><a data-gtm="mega-menu" href="http://www.nationalarchives.gov.uk/archives-sector/projects-and-programmes/">Projects and programmes</a></li>
					<li><a data-gtm="mega-menu" href="http://www.nationalarchives.gov.uk/archives-sector/case-studies-and-research-reports/">Case studies and research reports</a></li>
					<li><a data-gtm="mega-menu" href="http://www.nationalarchives.gov.uk/archives-sector/advice-and-guidance/">Operating your archive</a></li>
					<li><a data-gtm="mega-menu" href="http://www.nationalarchives.gov.uk/archives-sector/our-archives-sector-role/">Our role in the archives sector</a></li>
					</ul>
        </div>
    </nav>
    <nav class="col bridging-mega-menu-group clr">
        <div>
					<h3>More...</h3>
					<ul>
					<li><a data-gtm="mega-menu" href="https://shop.nationalarchives.gov.uk/">Shop</a></li>
					<li><a data-gtm="mega-menu" href="https://images.nationalarchives.gov.uk/">Image library</a></li>
					<li><a data-gtm="mega-menu" href="https://blog.nationalarchives.gov.uk/">Blog</a></li>
					<li><a data-gtm="mega-menu" href="https://media.nationalarchives.gov.uk/">Podcasts and videos</a></li>
					<li><a data-gtm="mega-menu" href="https://www.nationalarchives.gov.uk/contact-us/">Contact us</a></li>
					</ul>
        </div>
    </nav>
</section>
</div>


    <script src="/scripts/jquery-1.10.2.min.js"></script>
    <script src="/scripts/jquery-migrate-1.0.0.js"></script>
    <script src="/scripts/footer-img.js"></script>


<!-- TNA scripts -->
<script src="/scripts/bridging-tna-definitions.js"></script>

<!-- Bridging specific scripts --> 
<script>   
    $.bindToggle('#bridging-mega-menu-pull-down button', '#bridging-mega-menu', 'expanded', true); 
    $.bindToggle('#search-expander', '#mobile-search-outer-wrapper', 'expanded', true);

    // Custom event bindings for Global Search
    $.customEventer({ elementIdOrClass : '#tnaSearch', eventToWatch : 'focus', customEventToTrigger : 'toggleSearchOptionsOnce'});
    $.customEventer({ elementIdOrClass : '#bridging-scope-selector', eventToWatch : 'click', customEventToTrigger : 'toggleSearchOptions'});
    $.customEventer({ elementIdOrClass : '.formDestinationChanger', eventToWatch : 'click', customEventToTrigger : 'changeFormDestination'});

    $(document).one('toggleSearchOptionsOnce', function() {
         $.toggleDisplayOfElement('#bridging-scope-selector', '#bridging-search-options');
    });

    $(document).on('toggleSearchOptions', function() {
         $.toggleDisplayOfElement('#bridging-scope-selector', '#bridging-search-options');
         $(document).off('toggleSearchOptionsOnce');
    });

    $('.formDestinationChanger').on('click', function() {
        var placeholder = $(this).attr('data-placeholder'),
            target = $(this).attr('data-target'),
            fieldName = $(this).attr('data-fieldName');
        $.toggleDisplayOfElement('#bridging-scope-selector', '#bridging-search-options');
        $('#tnaSearch').attr({'placeholder' : placeholder, 'name' : fieldName});
        $('#globalSearch').attr('action', target);
    });

    // Global search - smaller screens
    $(document).on('change', '.mobileSearchDestinationOption', function(){ 
        var target = $(this).attr('data-target'),
            placeholder = $(this).attr('data-placeholder'),
            fieldName = $(this).attr('data-fieldName');
        $('#mobile-search-field').attr({'placeholder' : placeholder, 'name' : fieldName}).focus();
        $('#mobileGlobalSearch').attr('action', target);
    });

    $(document).on('click', '.bridging-mega-menu-group h3', function(e){
    if($(window).width() < 480) {
        $(this).parents('nav').find('ul').slideToggle();  
        $(this).toggleClass('expanded');  
        e.preventDefault();     
    } else {
        return;
    }
});

</script>


<link href="//fonts.googleapis.com/css?family=Open+Sans" rel="stylesheet" type="text/css">
<link href="//fonts.googleapis.com/css?family=Bitter" rel="stylesheet" type="text/css">

<style type="text/css">
    #bridging-header {
        font-family: 'Open Sans', sans-serif;
        font-size: 16px;
        background-color: #111;
        margin-top: -23px;
    }

    #bridging-header > #bridging-inner-positioner {
        position: relative;
    }

    #bridging-banner {
        /*background-color: #222;*/
    }

    #bridging-banner {
        margin: 0;
        width: 49%;
    }

     #bridging-search {
        margin: 0;
        width: 49%;
        position: absolute;
        top: 0px;
        right: 14px;
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
        background-image: url("/images/global/search-white.png");
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
        background-image: url("/images/global/scope-selector.png");
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
        background-image: url("/images/global/scope-selector-expanded.png");
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
        position: absolute;
        width: 100px;
        bottom: 0;
        left: 430px;
    }
    #bridging-mega-menu-pull-down {
        background-color: #CB0D07;
/*        border: 3px solid #EFEFEF;*/
        border-radius: 50% 50% 50% 50%;
        display: none;
        font-size: 0.9em;
        height: 2.55em;
/*        margin: 0 auto -30px;*/
        margin: 0 auto -16px;
        padding: 0.8em;
        position: relative;
        text-align: center;
        width: 2.55em;
        z-index: 2000;
    }

    #bridging-mega-menu-pull-down button {
        background-image: url("/images/global/menu-collapsed.png");
        font-family: 'Open Sans';
        background-repeat: no-repeat;
        background-color: transparent;
        background-position: 50.5% 102%;
        color: #FFF;
        text-decoration: none;
        border: none;
        font-size: 1em;
        position: absolute;
        padding: 14px 9px 20px;
        left: -2px;
        top: -3px;
        cursor: pointer;
    }

    #bridging-mega-menu-pull-down button.expanded {
        background-image: url("/images/global/menu-expanded.png");
    }

    .bridging-mega-menu-group {
        width: 15%;
        float: left;
        margin-left: 1.5%!important;
        margin-bottom: 20px;
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

        .bridging-mega-menu-group h3 a {
        color: #FFF;
    }
    .bridging-mega-menu-group ul {
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
        border-top: 1px #192132 dotted;
        list-style: none;   
    }

    .bridging-mega-menu-group li:hover {
        background-color: #111;
    }

    #bridging-mega-menu {
        padding-top: 2em;
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
        margin: 15px 5px 5px 0;
        z-index : 9000;
        /*max-width: 400px;*/
        text-overflow: elipsis;
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

</style>


<!--[if IE 7]>
    <style type="text/css">

    body {
        position: relative;
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
                <img src="/images/global/logo-white.png" alt="The National Archives">
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


<!-- TNA scripts -->
<script src="/scripts/bridging-tna-definitions.js"></script>
<script src="/scripts/footer-img.js"></script>

<!-- Bridging specific scripts --> 
<script>    
    $.bindToggle('#bridging-mega-menu-pull-down button', '#bridging-mega-menu', 'expanded', true); 

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

</script>


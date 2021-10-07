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
        position: absolute;
        width: 100px;
        bottom: 0;
        left: 428px;
    }
    #bridging-mega-menu-pull-down {
        background-color: #CB0D07;
        border: 3px solid #EFEFEF;
        border-radius: 50% 50% 50% 50%;
        display: none;
        font-size: 0.9em;
        height: 2.4em;
        margin: 0 auto -30px;
        padding: 0.8em;
        position: relative;
        text-align: center;
        width: 2.4em;
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
        left: -3px;
        top: -2px;
        cursor: pointer;
    }

    .through-a-lens #bridging-mega-menu-pull-down button {
        left: 0;
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
        display: block;
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
        margin: 5px 5px 5px 0;
        z-index : 9000;
        max-width: 400px;
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
            <a href="/" title="The National Archives">
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
            <h3><a href="/about/" onclick="dcsMultiTrack('DCS.dcsuri','/menu/About us ','WT.ti','Menu - About us ');">About us</a></h3>
            <!-- <p class="sectionDesc">The UK government's official archive from Domesday Book to digital</p> -->
            <ul>
                <li><a href="/about/our-role.htm" onclick="dcsMultiTrack('DCS.dcsuri','/menu/Our role ','WT.ti','Menu - Our role ');">Our role</a></li>
                <li><a href="/visit/" onclick="dcsMultiTrack('DCS.dcsuri','/menu/Visit us ','WT.ti','Menu - Visit us ');">Visit us</a></li>
                <li><a href="/visit/times.htm" onclick="dcsMultiTrack('DCS.dcsuri','/menu/Opening times ','WT.ti','Menu - Opening times ');">Opening times</a></li>
                <li><a href="/jobs/" onclick="dcsMultiTrack('DCS.dcsuri','/menu/Jobs ','WT.ti','Menu - Jobs ');">Jobs</a></li>
                <li><a href="/about/get-involved/" onclick="dcsMultiTrack('DCS.dcsuri','/menu/Get involved ','WT.ti','Menu - Get involved ');">Get involved</a></li>
                <li><a href="/news/" onclick="dcsMultiTrack('DCS.dcsuri','/menu/News ','WT.ti','Menu - News ');">News</a></li>
                <li><a href="/pressroom/" onclick="dcsMultiTrack('DCS.dcsuri','/menu/Press room ','WT.ti','Menu - Press room ');">Press room</a></li>
                <li><a href="/about/commercial-opportunities.htm" onclick="dcsMultiTrack('DCS.dcsuri','/menu/Commercial opportunities ','WT.ti','Menu - Commercial opportunities ');">Commercial opportunities</a></li>
            </ul>
        </div>
    </nav>
    <nav class="col bridging-mega-menu-group clr">
        <div>
            <h3><a href="/education/" onclick="dcsMultiTrack('DCS.dcsuri','/menu/Education ','WT.ti','Menu - Education ');">Education</a></h3>
            <!-- <p class="sectionDesc">Bringing history to life through our award winning resources for schools</p> -->
            <ul>        
                <li><a href="/education/topics.htm" onclick="dcsMultiTrack('DCS.dcsuri','/menu/Topics ','WT.ti','Menu - Topics ');">Topics</a></li>
                <li><a href="/education/lessons.htm" onclick="dcsMultiTrack('DCS.dcsuri','/menu/Lessons ','WT.ti','Menu - Lessons ');">Lessons</a></li>
                <li><a href="/education/workshops.htm" onclick="dcsMultiTrack('DCS.dcsuri','/menu/Workshops ','WT.ti','Menu - Workshops ');">Workshops</a></li>
                <li><a href="/education/cpd/professional-development.htm" onclick="dcsMultiTrack('DCS.dcsuri','/menu/Professional development ','WT.ti','Menu - Professional development ');">Professional development</a></li>
                <li><a href="/education/for-teachers.htm" onclick="dcsMultiTrack('DCS.dcsuri','/menu/For teachers ','WT.ti','Menu - For teachers ');">For teachers</a></li>   
                <li><a href="/education/for-students.htm" onclick="dcsMultiTrack('DCS.dcsuri','/menu/For students ','WT.ti','Menu - For students ');">For students</a></li>   
                
            </ul>
        </div>
    </nav>
    <nav class="col bridging-mega-menu-group clr">
        <div>
            <h3><a href="/records/" onclick="dcsMultiTrack('DCS.dcsuri','/menu/Records ','WT.ti','Menu - Records ');">Records</a></h3>
            <!-- <p class="sectionDesc">Find out how we can help your research, through guides, tutorials, and podcasts</p> -->
            <ul>    
                <li><a href="http://discovery.nationalarchives.gov.uk/SearchUI/" onclick="dcsMultiTrack('DCS.dcsuri','/menu/Search Discovery, our catalogue ','WT.ti','Menu - Search Discovery, our catalogue ');">Search Discovery, our catalogue</a></li>
                <li><a href="/records/start-here.htm" onclick="dcsMultiTrack('DCS.dcsuri','/menu/Start your research here ','WT.ti','Menu - Start your research here ');">Start your research here</a></li>
                <li><a href="/records/looking-for-person/" onclick="dcsMultiTrack('DCS.dcsuri','/menu/Looking for a person ','WT.ti','Menu - Looking for a person ');">Looking for a person</a></li>
                <li><a href="/records/looking-for-place/" onclick="dcsMultiTrack('DCS.dcsuri','/menu/Looking for a place ','WT.ti','Menu - Looking for a place ');">Looking for a place</a></li>
                <li><a href="/records/looking-for-subject/" onclick="dcsMultiTrack('DCS.dcsuri','/menu/Looking for a subject ','WT.ti','Menu - Looking for a subject ');">Looking for a subject</a></li>
                <li><a href="/records/atoz/" onclick="dcsMultiTrack('DCS.dcsuri','/menu/Records guidance A-Z ','WT.ti','Menu - Guidance A-Z ');">Records guidance A-Z</a></li>
                <li><a href="/records/our-online-records.htm" onclick="dcsMultiTrack('DCS.dcsuri','/menu/Our online records ','WT.ti','Menu - Our online records ');">Our online records</a></li>
                <li><a href="/records/catalogues-and-online-records.htm" onclick="dcsMultiTrack('DCS.dcsuri','/menu/Catalogues and online records ','WT.ti','Menu - Catalogues and online records ');">Full list of catalogues and online records</a></li>
                                <li><a href="http://www.nationalarchives.gov.uk/webarchive/" onclick="dcsMultiTrack('DCS.dcsuri','/menu/UK Government Web Archive ','WT.ti','Menu - UK Government Web Archive ');">UK Government Web Archive</a></li>
                <li><a href="/contact/contactform.asp?id=7" onclick="dcsMultiTrack('DCS.dcsuri','/menu/Certificates of British Citizenship ','WT.ti','Menu - Certificates of British Citizenship ');">Certificates of British Citizenship</a></li>
                <li><a href="/recordcopying/" onclick="dcsMultiTrack('DCS.dcsuri','/menu/Record copying ','WT.ti','Menu - Record copying ');">Record copying</a></li>
            </ul>
        </div>
    </nav>
    <nav class="col bridging-mega-menu-group clr">
        <div>
            <h3 class="hyphenate"><a href="/information-management/" onclick="dcsMultiTrack('DCS.dcsuri','/menu/Information Management ','WT.ti','Menu - Information Management ');">Information management</a></h3>
            <!-- <p class="sectionDesc">For all owners and custodians of records</p> -->
            <ul>
                <li><a href="/information-management/guidance/a.htm" onclick="dcsMultiTrack('DCS.dcsuri','/menu/Guidance and standards A-Z ','WT.ti','Menu - Guidance and standards A-Z ');">Guidance and standards A-Z</a></li>
                <li><a href="/information-management/our-services/crown-copyright.htm" onclick="dcsMultiTrack('DCS.dcsuri','/menu/Crown copyright ','WT.ti','Menu - Crown copyright ');">Crown copyright</a></li>
                <li><a href="/information-management/our-services/official-publishing.htm" onclick="dcsMultiTrack('DCS.dcsuri','/menu/Official publishing ','WT.ti','Menu - Official publishing ');">Official publishing</a></li>
                <li><a href="/information-management/our-services/selection-and-transfer.htm" onclick="dcsMultiTrack('DCS.dcsuri','/menu/Records selection and transfer ','WT.ti','Menu - Records selection and transfer ');">Records selection and transfer</a></li>
                <li><a href="/information-management/projects-and-work/information-records-management.htm" onclick="dcsMultiTrack('DCS.dcsuri','/menu/Information and records management ','WT.ti','Menu - Information and records management ');">Information and records management</a></li>
                <li><a href="/information-management/projects-and-work/digital-preservation.htm" onclick="dcsMultiTrack('DCS.dcsuri','/menu/Digital preservation ','WT.ti','Menu - Digital preservation ');">Digital preservation</a></li>
                <li><a href="/information-management/policies/leading-psi-policy.htm" onclick="dcsMultiTrack('DCS.dcsuri','/menu/Re-using PSI ','WT.ti','Menu - Re-using PSI ');">Re-using PSI</a></li>
                <li><a href="/information-management/uk-gov-licensing-framework.htm" onclick="dcsMultiTrack('DCS.dcsuri','/menu/Licensing Framework ','WT.ti','Menu - Licensing Framework ');">Licensing Framework</a></li>
                <li><a href="/information-management/legislation-and-regulations.htm" onclick="dcsMultiTrack('DCS.dcsuri','/menu/Legislation and regulations ','WT.ti','Menu - Legislation and regulations ');">Legislation and regulations</a></li>
                <li><a href="/information-management/training.htm" onclick="dcsMultiTrack('DCS.dcsuri','/menu/Training ','WT.ti','Menu - Training ');">Training</a></li>

            </ul>
        </div>
    </nav>
    <nav class="col bridging-mega-menu-group clr">
        <div>
            <h3><a href="/archives-sector/" onclick="dcsMultiTrack('DCS.dcsuri','/menu/Archives sector ','WT.ti','Menu - Archives sector ');">Archives sector</a></h3>
            <!-- <p class="sectionDesc">Resources and services to help you develop your collection</p> -->
            <ul>
                <li><a href="/archives-sector/current-initiatives.htm" onclick="dcsMultiTrack('DCS.dcsuri','/menu/Current initiatives ','WT.ti','Menu - Current initiatives ');">Current initiatives</a></li>
                <li><a href="/archives-sector/developing-your-archives.htm" onclick="dcsMultiTrack('DCS.dcsuri','/menu/Developing your archives ','WT.ti','Menu - Developing your archives ');">Developing your archives</a></li>
                <li><a href="/archives-sector/finding-funding.htm" onclick="dcsMultiTrack('DCS.dcsuri','/menu/Finding funding ','WT.ti','Menu - Finding funding ');">Finding funding</a></li>
                <li><a href="/archives-sector/ask-question.htm" onclick="dcsMultiTrack('DCS.dcsuri','/menu/Contact the team ','WT.ti','Menu - Contact the team ');">Contact the team</a></li>
                <li><a href="/archives-sector/share-your-expertise.htm" onclick="dcsMultiTrack('DCS.dcsuri','/menu/Share your expertise ','WT.ti','Menu - Share your expertise ');">Share your expertise</a></li>
                <li><a href="/archives-sector/policy-strategy.htm" onclick="dcsMultiTrack('DCS.dcsuri','/menu/Policies and strategies ','WT.ti','Menu - Policies and strategies ');">Policies and strategies</a></li>
                <li><a href="/archives-sector/statistics-studies-reports.htm" onclick="dcsMultiTrack('DCS.dcsuri','/menu/Statistics, studies and reports ','WT.ti','Menu - Statistics, studies and reports ');">Statistics, studies and reports</a></li>
                <li><a href="/archives-sector/hmc.htm" onclick="dcsMultiTrack('DCS.dcsuri','/menu/Historical Manuscripts Commission ','WT.ti','Menu - Historical Manuscripts Commission ');">Historical Manuscripts Commission</a></li>
            </ul>
        </div>
    </nav>
    <nav class="col bridging-mega-menu-group clr">
        <div>
            <h3>More...</h3>
            <!-- <p class="sectionDesc">Buy documents, images, books and more</p> -->
            <ul>        
                <li class="image"><a href="https://shop.nationalarchives.gov.uk/" onclick="dcsMultiTrack('DCS.dcsuri','/menu/Shop ','WT.ti','Menu - Shop ');">Shop<!-- : <br><img src="images/img-lib.jpg" >--></a></li>
                <li><a href="https://images.nationalarchives.gov.uk/assetbank-nationalarchives/action/viewHome" onclick="dcsMultiTrack('DCS.dcsuri','/menu/Image library ','WT.ti','Menu - Image library ');">Image library</a></li>
                <li><a href="http://blog.nationalarchives.gov.uk/" onclick="dcsMultiTrack('DCS.dcsuri','/menu/Blog ','WT.ti','Menu - Blog ');">Blog</a></li>
                <li><a href="http://www.nationalarchives.gov.uk/labs/" onclick="dcsMultiTrack('DCS.dcsuri','/menu/Labs ','WT.ti','Menu - Labs ');">Labs</a></li>
                <li><a href="http://media.nationalarchives.gov.uk/" onclick="dcsMultiTrack('DCS.dcsuri','/menu/Podcasts and videos ','WT.ti','Menu - Podcasts and videos ');">Podcasts and videos</a></li>
            </ul>
        </div>
    </nav>
</section>
</div>




<!-- TNA scripts -->
<script src="/scripts/bridging-tna-definitions.js"></script>

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


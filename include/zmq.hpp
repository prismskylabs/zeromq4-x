


<!DOCTYPE html>
<html lang="en" class="">
  <head prefix="og: http://ogp.me/ns# fb: http://ogp.me/ns/fb# object: http://ogp.me/ns/object# article: http://ogp.me/ns/article# profile: http://ogp.me/ns/profile#">
    <meta charset='utf-8'>
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta http-equiv="Content-Language" content="en">
    
    
    <title>cppzmq/zmq.hpp at master · zeromq/cppzmq</title>
    <link rel="search" type="application/opensearchdescription+xml" href="/opensearch.xml" title="GitHub">
    <link rel="fluid-icon" href="https://github.com/fluidicon.png" title="GitHub">
    <link rel="apple-touch-icon" sizes="57x57" href="/apple-touch-icon-114.png">
    <link rel="apple-touch-icon" sizes="114x114" href="/apple-touch-icon-114.png">
    <link rel="apple-touch-icon" sizes="72x72" href="/apple-touch-icon-144.png">
    <link rel="apple-touch-icon" sizes="144x144" href="/apple-touch-icon-144.png">
    <meta property="fb:app_id" content="1401488693436528">

      <meta content="@github" name="twitter:site" /><meta content="summary" name="twitter:card" /><meta content="zeromq/cppzmq" name="twitter:title" /><meta content="cppzmq - C++ binding for 0MQ" name="twitter:description" /><meta content="https://avatars3.githubusercontent.com/u/109777?v=3&amp;s=400" name="twitter:image:src" />
      <meta content="GitHub" property="og:site_name" /><meta content="object" property="og:type" /><meta content="https://avatars3.githubusercontent.com/u/109777?v=3&amp;s=400" property="og:image" /><meta content="zeromq/cppzmq" property="og:title" /><meta content="https://github.com/zeromq/cppzmq" property="og:url" /><meta content="cppzmq - C++ binding for 0MQ" property="og:description" />
      <meta name="browser-stats-url" content="https://api.github.com/_private/browser/stats">
    <meta name="browser-errors-url" content="https://api.github.com/_private/browser/errors">
    <link rel="assets" href="https://assets-cdn.github.com/">
    <link rel="web-socket" href="wss://live.github.com/_sockets/MTA1MTY1MTozNWE4MWNjMTRiZmI4MGU1MDgyZDMwZWUxNzBiMmUxYjoyNDcwZmRmYTI0N2M2OGRmYTMxMWUyMWQ2ZmRiZjAxZjMxNjU1YjllNDgwOGUwMjIzMGM2ODU0M2I4Y2NiMzFj--d1ab7347b5d9905e9cc81d470fde8600cba7d0ef">
    <meta name="pjax-timeout" content="1000">
    <link rel="sudo-modal" href="/sessions/sudo_modal">

    <meta name="msapplication-TileImage" content="/windows-tile.png">
    <meta name="msapplication-TileColor" content="#ffffff">
    <meta name="selected-link" value="repo_source" data-pjax-transient>
      <meta name="google-analytics" content="UA-3769691-2">

    <meta content="collector.githubapp.com" name="octolytics-host" /><meta content="collector-cdn.github.com" name="octolytics-script-host" /><meta content="github" name="octolytics-app-id" /><meta content="0423A07E:531F:6F4380:553575E2" name="octolytics-dimension-request_id" /><meta content="1051651" name="octolytics-actor-id" /><meta content="kdeming" name="octolytics-actor-login" /><meta content="6849dae583e467a1c0f3c6cc2d78c4dad976f4664857be9ff26bfb6d50775594" name="octolytics-actor-hash" />
    
    <meta content="Rails, view, blob#show" name="analytics-event" />
    <meta class="js-ga-set" name="dimension1" content="Logged In">
    <meta class="js-ga-set" name="dimension2" content="Header v3">
    <meta name="is-dotcom" content="true">
    <meta name="hostname" content="github.com">
    <meta name="user-login" content="kdeming">

    
    <link rel="icon" type="image/x-icon" href="https://assets-cdn.github.com/favicon.ico">


    <meta content="authenticity_token" name="csrf-param" />
<meta content="UbuTCXiGbZ5HJYSfwlEwXp++trBVnP5PbXWqmd2ENYODh+HcZYxjZFnS9K2lYjp80oSpag1TSRBl5mKpdYoOnA==" name="csrf-token" />

    <link href="https://assets-cdn.github.com/assets/github-99d0b872ee54fd3afae4675a7592394fa9d65696f8ad7a751b79704bc999f40a.css" media="all" rel="stylesheet" />
    <link href="https://assets-cdn.github.com/assets/github2-4dcecdbd59af4cd1dd8cf24ccaf35b686d848468ddcd7d52a8bf57c21ac4e5fb.css" media="all" rel="stylesheet" />
    
    


    <meta http-equiv="x-pjax-version" content="efb9989cb4226240c2c00e5cb6693560">

      
  <meta name="description" content="cppzmq - C++ binding for 0MQ">
  <meta name="go-import" content="github.com/zeromq/cppzmq git https://github.com/zeromq/cppzmq.git">

  <meta content="109777" name="octolytics-dimension-user_id" /><meta content="zeromq" name="octolytics-dimension-user_login" /><meta content="1799895" name="octolytics-dimension-repository_id" /><meta content="zeromq/cppzmq" name="octolytics-dimension-repository_nwo" /><meta content="true" name="octolytics-dimension-repository_public" /><meta content="false" name="octolytics-dimension-repository_is_fork" /><meta content="1799895" name="octolytics-dimension-repository_network_root_id" /><meta content="zeromq/cppzmq" name="octolytics-dimension-repository_network_root_nwo" />
  <link href="https://github.com/zeromq/cppzmq/commits/master.atom" rel="alternate" title="Recent Commits to cppzmq:master" type="application/atom+xml">

  </head>


  <body class="logged_in  env-production macintosh vis-public page-blob">
    <a href="#start-of-content" tabindex="1" class="accessibility-aid js-skip-to-content">Skip to content</a>
    <div class="wrapper">
      
      
      


        <div class="header header-logged-in true" role="banner">
  <div class="container clearfix">

    <a class="header-logo-invertocat" href="https://github.com/orgs/prismskylabs/dashboard" data-hotkey="g d" aria-label="Homepage" data-ga-click="Header, go to dashboard, icon:logo">
  <span class="mega-octicon octicon-mark-github"></span>
</a>


      <div class="site-search repo-scope js-site-search" role="search">
          <form accept-charset="UTF-8" action="/zeromq/cppzmq/search" class="js-site-search-form" data-global-search-url="/search" data-repo-search-url="/zeromq/cppzmq/search" method="get"><div style="margin:0;padding:0;display:inline"><input name="utf8" type="hidden" value="&#x2713;" /></div>
  <input type="text"
    class="js-site-search-field is-clearable"
    data-hotkey="s"
    name="q"
    placeholder="Search"
    data-global-scope-placeholder="Search GitHub"
    data-repo-scope-placeholder="Search"
    tabindex="1"
    autocapitalize="off">
  <div class="scope-badge">This repository</div>
</form>
      </div>

      <ul class="header-nav left" role="navigation">
          <li class="header-nav-item explore">
            <a class="header-nav-link" href="/explore" data-ga-click="Header, go to explore, text:explore">Explore</a>
          </li>
            <li class="header-nav-item">
              <a class="header-nav-link" href="https://gist.github.com" data-ga-click="Header, go to gist, text:gist">Gist</a>
            </li>
            <li class="header-nav-item">
              <a class="header-nav-link" href="/blog" data-ga-click="Header, go to blog, text:blog">Blog</a>
            </li>
          <li class="header-nav-item">
            <a class="header-nav-link" href="https://help.github.com" data-ga-click="Header, go to help, text:help">Help</a>
          </li>
      </ul>

      
<ul class="header-nav user-nav right" id="user-links">
  <li class="header-nav-item dropdown js-menu-container">
    <a class="header-nav-link name" href="/kdeming" data-ga-click="Header, go to profile, text:username">
      <img alt="@kdeming" class="avatar" data-user="1051651" height="20" src="https://avatars2.githubusercontent.com/u/1051651?v=3&amp;s=40" width="20" />
      <span class="css-truncate">
        <span class="css-truncate-target">kdeming</span>
      </span>
    </a>
  </li>

  <li class="header-nav-item dropdown js-menu-container">
    <a class="header-nav-link js-menu-target tooltipped tooltipped-s" href="/new" aria-label="Create new..." data-ga-click="Header, create new, icon:add">
      <span class="octicon octicon-plus"></span>
      <span class="dropdown-caret"></span>
    </a>

    <div class="dropdown-menu-content js-menu-content">
      <ul class="dropdown-menu">
        
<li>
  <a href="/new" data-ga-click="Header, create new repository, icon:repo"><span class="octicon octicon-repo"></span> New repository</a>
</li>
<li>
  <a href="/organizations/new" data-ga-click="Header, create new organization, icon:organization"><span class="octicon octicon-organization"></span> New organization</a>
</li>


  <li class="dropdown-divider"></li>
  <li class="dropdown-header">
    <span title="zeromq/cppzmq">This repository</span>
  </li>
    <li>
      <a href="/zeromq/cppzmq/issues/new" data-ga-click="Header, create new issue, icon:issue"><span class="octicon octicon-issue-opened"></span> New issue</a>
    </li>

      </ul>
    </div>
  </li>

  <li class="header-nav-item">
      <span 
        data-channel="notification-changed:kdeming"
        data-url="/notifications/header">
      <a href="/notifications" aria-label="You have unread notifications" class="header-nav-link notification-indicator tooltipped tooltipped-s" data-ga-click="Header, go to notifications, icon:unread" data-hotkey="g n">
          <span class="mail-status unread"></span>
          <span class="octicon octicon-inbox"></span>
</a>  </span>

  </li>

  <li class="header-nav-item">
    <a class="header-nav-link tooltipped tooltipped-s" href="/settings/profile" id="account_settings" aria-label="Settings" data-ga-click="Header, go to settings, icon:settings">
      <span class="octicon octicon-gear"></span>
    </a>
  </li>

  <li class="header-nav-item">
    <form accept-charset="UTF-8" action="/logout" class="logout-form" method="post"><div style="margin:0;padding:0;display:inline"><input name="utf8" type="hidden" value="&#x2713;" /><input name="authenticity_token" type="hidden" value="rwP600iZANtTnCyxZbOapFSTuVsXGUDOiLfAgn4ZX2gIK7k/S4ELQcfuCinU8rUwtikdyY54x7ypBc9lHzIB9A==" /></div>
      <button class="header-nav-link sign-out-button tooltipped tooltipped-s" aria-label="Sign out" data-ga-click="Header, sign out, icon:logout">
        <span class="octicon octicon-sign-out"></span>
      </button>
</form>  </li>

</ul>



    
  </div>
</div>

        

        


      <div id="start-of-content" class="accessibility-aid"></div>
          <div class="site" itemscope itemtype="http://schema.org/WebPage">
    <div id="js-flash-container">
      
    </div>
    <div class="pagehead repohead instapaper_ignore readability-menu">
      <div class="container">
        
<ul class="pagehead-actions">

  <li>
      <form accept-charset="UTF-8" action="/notifications/subscribe" class="js-social-container" data-autosubmit="true" data-remote="true" method="post"><div style="margin:0;padding:0;display:inline"><input name="utf8" type="hidden" value="&#x2713;" /><input name="authenticity_token" type="hidden" value="eC3jhNbOe/l5Uvq4/E1tdJX006HqexsFQMMwsd3VZ7GpEw9P3gtnltBnh/0cY/KCDd7QnJsl+SKTvCG7YLiraQ==" /></div>    <input id="repository_id" name="repository_id" type="hidden" value="1799895" />

      <div class="select-menu js-menu-container js-select-menu">
        <a href="/zeromq/cppzmq/subscription"
          class="btn btn-sm btn-with-count select-menu-button js-menu-target" role="button" tabindex="0" aria-haspopup="true"
          data-ga-click="Repository, click Watch settings, action:blob#show">
          <span class="js-select-button">
            <span class="octicon octicon-eye"></span>
            Watch
          </span>
        </a>
        <a class="social-count js-social-count" href="/zeromq/cppzmq/watchers">
          43
        </a>

        <div class="select-menu-modal-holder">
          <div class="select-menu-modal subscription-menu-modal js-menu-content" aria-hidden="true">
            <div class="select-menu-header">
              <span class="select-menu-title">Notifications</span>
              <span class="octicon octicon-x js-menu-close" role="button" aria-label="Close"></span>
            </div>

            <div class="select-menu-list js-navigation-container" role="menu">

              <div class="select-menu-item js-navigation-item selected" role="menuitem" tabindex="0">
                <span class="select-menu-item-icon octicon octicon-check"></span>
                <div class="select-menu-item-text">
                  <input checked="checked" id="do_included" name="do" type="radio" value="included" />
                  <span class="select-menu-item-heading">Not watching</span>
                  <span class="description">Be notified when participating or @mentioned.</span>
                  <span class="js-select-button-text hidden-select-button-text">
                    <span class="octicon octicon-eye"></span>
                    Watch
                  </span>
                </div>
              </div>

              <div class="select-menu-item js-navigation-item " role="menuitem" tabindex="0">
                <span class="select-menu-item-icon octicon octicon octicon-check"></span>
                <div class="select-menu-item-text">
                  <input id="do_subscribed" name="do" type="radio" value="subscribed" />
                  <span class="select-menu-item-heading">Watching</span>
                  <span class="description">Be notified of all conversations.</span>
                  <span class="js-select-button-text hidden-select-button-text">
                    <span class="octicon octicon-eye"></span>
                    Unwatch
                  </span>
                </div>
              </div>

              <div class="select-menu-item js-navigation-item " role="menuitem" tabindex="0">
                <span class="select-menu-item-icon octicon octicon-check"></span>
                <div class="select-menu-item-text">
                  <input id="do_ignore" name="do" type="radio" value="ignore" />
                  <span class="select-menu-item-heading">Ignoring</span>
                  <span class="description">Never be notified.</span>
                  <span class="js-select-button-text hidden-select-button-text">
                    <span class="octicon octicon-mute"></span>
                    Stop ignoring
                  </span>
                </div>
              </div>

            </div>

          </div>
        </div>
      </div>
</form>
  </li>

  <li>
    
  <div class="js-toggler-container js-social-container starring-container ">

    <form accept-charset="UTF-8" action="/zeromq/cppzmq/unstar" class="js-toggler-form starred js-unstar-button" data-remote="true" method="post"><div style="margin:0;padding:0;display:inline"><input name="utf8" type="hidden" value="&#x2713;" /><input name="authenticity_token" type="hidden" value="uNVSL1hlc/oAP20aDiDJknit+goAAvEax6DX9O/Rx8weD8h9feJPkGnDfk4/juFEyIdeVJrDZfzyns9kpPaz5A==" /></div>
      <button
        class="btn btn-sm btn-with-count js-toggler-target"
        aria-label="Unstar this repository" title="Unstar zeromq/cppzmq"
        data-ga-click="Repository, click unstar button, action:blob#show; text:Unstar">
        <span class="octicon octicon-star"></span>
        Unstar
      </button>
        <a class="social-count js-social-count" href="/zeromq/cppzmq/stargazers">
          162
        </a>
</form>
    <form accept-charset="UTF-8" action="/zeromq/cppzmq/star" class="js-toggler-form unstarred js-star-button" data-remote="true" method="post"><div style="margin:0;padding:0;display:inline"><input name="utf8" type="hidden" value="&#x2713;" /><input name="authenticity_token" type="hidden" value="A+O1pNGfyffwJZ2jMvva5DaI535/gDMB3k03nkOWcmWFCJ1IZxfYyIY4j3a24TSH4OH/uhkpM4URsGom/oWXuQ==" /></div>
      <button
        class="btn btn-sm btn-with-count js-toggler-target"
        aria-label="Star this repository" title="Star zeromq/cppzmq"
        data-ga-click="Repository, click star button, action:blob#show; text:Star">
        <span class="octicon octicon-star"></span>
        Star
      </button>
        <a class="social-count js-social-count" href="/zeromq/cppzmq/stargazers">
          162
        </a>
</form>  </div>

  </li>

        <li>
          <a href="#fork-destination-box" class="btn btn-sm btn-with-count"
              title="Fork your own copy of zeromq/cppzmq to your account"
              aria-label="Fork your own copy of zeromq/cppzmq to your account"
              rel="facebox"
              data-ga-click="Repository, show fork modal, action:blob#show; text:Fork">
            <span class="octicon octicon-repo-forked"></span>
            Fork
          </a>
          <a href="/zeromq/cppzmq/network" class="social-count">146</a>

          <div id="fork-destination-box" style="display: none;">
            <h2 class="facebox-header">Where should we fork this repository?</h2>
            <include-fragment src=""
                class="js-fork-select-fragment fork-select-fragment"
                data-url="/zeromq/cppzmq/fork?fragment=1">
              <img alt="Loading" height="64" src="https://assets-cdn.github.com/assets/spinners/octocat-spinner-128-338974454bb5c32803e82f601beb051d373744b024fe8742a76009700fd7e033.gif" width="64" />
            </include-fragment>
          </div>
        </li>

</ul>

        <h1 itemscope itemtype="http://data-vocabulary.org/Breadcrumb" class="entry-title public">
          <span class="mega-octicon octicon-repo"></span>
          <span class="author"><a href="/zeromq" class="url fn" itemprop="url" rel="author"><span itemprop="title">zeromq</span></a></span><!--
       --><span class="path-divider">/</span><!--
       --><strong><a href="/zeromq/cppzmq" class="js-current-repository" data-pjax="#js-repo-pjax-container">cppzmq</a></strong>

          <span class="page-context-loader">
            <img alt="" height="16" src="https://assets-cdn.github.com/assets/spinners/octocat-spinner-32-e513294efa576953719e4e2de888dd9cf929b7d62ed8d05f25e731d02452ab6c.gif" width="16" />
          </span>

        </h1>
      </div><!-- /.container -->
    </div><!-- /.repohead -->

    <div class="container">
      <div class="repository-with-sidebar repo-container new-discussion-timeline  ">
        <div class="repository-sidebar clearfix">
            
<nav class="sunken-menu repo-nav js-repo-nav js-sidenav-container-pjax js-octicon-loaders"
     role="navigation"
     data-pjax="#js-repo-pjax-container"
     data-issue-count-url="/zeromq/cppzmq/issues/counts">
  <ul class="sunken-menu-group">
    <li class="tooltipped tooltipped-w" aria-label="Code">
      <a href="/zeromq/cppzmq" aria-label="Code" class="selected js-selected-navigation-item sunken-menu-item" data-hotkey="g c" data-selected-links="repo_source repo_downloads repo_commits repo_releases repo_tags repo_branches /zeromq/cppzmq">
        <span class="octicon octicon-code"></span> <span class="full-word">Code</span>
        <img alt="" class="mini-loader" height="16" src="https://assets-cdn.github.com/assets/spinners/octocat-spinner-32-e513294efa576953719e4e2de888dd9cf929b7d62ed8d05f25e731d02452ab6c.gif" width="16" />
</a>    </li>

      <li class="tooltipped tooltipped-w" aria-label="Issues">
        <a href="/zeromq/cppzmq/issues" aria-label="Issues" class="js-selected-navigation-item sunken-menu-item" data-hotkey="g i" data-selected-links="repo_issues repo_labels repo_milestones /zeromq/cppzmq/issues">
          <span class="octicon octicon-issue-opened"></span> <span class="full-word">Issues</span>
          <span class="js-issue-replace-counter"></span>
          <img alt="" class="mini-loader" height="16" src="https://assets-cdn.github.com/assets/spinners/octocat-spinner-32-e513294efa576953719e4e2de888dd9cf929b7d62ed8d05f25e731d02452ab6c.gif" width="16" />
</a>      </li>

    <li class="tooltipped tooltipped-w" aria-label="Pull requests">
      <a href="/zeromq/cppzmq/pulls" aria-label="Pull requests" class="js-selected-navigation-item sunken-menu-item" data-hotkey="g p" data-selected-links="repo_pulls /zeromq/cppzmq/pulls">
          <span class="octicon octicon-git-pull-request"></span> <span class="full-word">Pull requests</span>
          <span class="js-pull-replace-counter"></span>
          <img alt="" class="mini-loader" height="16" src="https://assets-cdn.github.com/assets/spinners/octocat-spinner-32-e513294efa576953719e4e2de888dd9cf929b7d62ed8d05f25e731d02452ab6c.gif" width="16" />
</a>    </li>

      <li class="tooltipped tooltipped-w" aria-label="Wiki">
        <a href="/zeromq/cppzmq/wiki" aria-label="Wiki" class="js-selected-navigation-item sunken-menu-item" data-hotkey="g w" data-selected-links="repo_wiki /zeromq/cppzmq/wiki">
          <span class="octicon octicon-book"></span> <span class="full-word">Wiki</span>
          <img alt="" class="mini-loader" height="16" src="https://assets-cdn.github.com/assets/spinners/octocat-spinner-32-e513294efa576953719e4e2de888dd9cf929b7d62ed8d05f25e731d02452ab6c.gif" width="16" />
</a>      </li>
  </ul>
  <div class="sunken-menu-separator"></div>
  <ul class="sunken-menu-group">

    <li class="tooltipped tooltipped-w" aria-label="Pulse">
      <a href="/zeromq/cppzmq/pulse" aria-label="Pulse" class="js-selected-navigation-item sunken-menu-item" data-selected-links="pulse /zeromq/cppzmq/pulse">
        <span class="octicon octicon-pulse"></span> <span class="full-word">Pulse</span>
        <img alt="" class="mini-loader" height="16" src="https://assets-cdn.github.com/assets/spinners/octocat-spinner-32-e513294efa576953719e4e2de888dd9cf929b7d62ed8d05f25e731d02452ab6c.gif" width="16" />
</a>    </li>

    <li class="tooltipped tooltipped-w" aria-label="Graphs">
      <a href="/zeromq/cppzmq/graphs" aria-label="Graphs" class="js-selected-navigation-item sunken-menu-item" data-selected-links="repo_graphs repo_contributors /zeromq/cppzmq/graphs">
        <span class="octicon octicon-graph"></span> <span class="full-word">Graphs</span>
        <img alt="" class="mini-loader" height="16" src="https://assets-cdn.github.com/assets/spinners/octocat-spinner-32-e513294efa576953719e4e2de888dd9cf929b7d62ed8d05f25e731d02452ab6c.gif" width="16" />
</a>    </li>
  </ul>


</nav>

              <div class="only-with-full-nav">
                  
<div class="clone-url "
  data-protocol-type="http"
  data-url="/users/set_protocol?protocol_selector=http&amp;protocol_type=clone">
  <h3><span class="text-emphasized">HTTPS</span> clone URL</h3>
  <div class="input-group js-zeroclipboard-container">
    <input type="text" class="input-mini input-monospace js-url-field js-zeroclipboard-target"
           value="https://github.com/zeromq/cppzmq.git" readonly="readonly">
    <span class="input-group-button">
      <button aria-label="Copy to clipboard" class="js-zeroclipboard btn btn-sm zeroclipboard-button tooltipped tooltipped-s" data-copied-hint="Copied!" type="button"><span class="octicon octicon-clippy"></span></button>
    </span>
  </div>
</div>

  
<div class="clone-url open"
  data-protocol-type="ssh"
  data-url="/users/set_protocol?protocol_selector=ssh&amp;protocol_type=clone">
  <h3><span class="text-emphasized">SSH</span> clone URL</h3>
  <div class="input-group js-zeroclipboard-container">
    <input type="text" class="input-mini input-monospace js-url-field js-zeroclipboard-target"
           value="git@github.com:zeromq/cppzmq.git" readonly="readonly">
    <span class="input-group-button">
      <button aria-label="Copy to clipboard" class="js-zeroclipboard btn btn-sm zeroclipboard-button tooltipped tooltipped-s" data-copied-hint="Copied!" type="button"><span class="octicon octicon-clippy"></span></button>
    </span>
  </div>
</div>

  
<div class="clone-url "
  data-protocol-type="subversion"
  data-url="/users/set_protocol?protocol_selector=subversion&amp;protocol_type=clone">
  <h3><span class="text-emphasized">Subversion</span> checkout URL</h3>
  <div class="input-group js-zeroclipboard-container">
    <input type="text" class="input-mini input-monospace js-url-field js-zeroclipboard-target"
           value="https://github.com/zeromq/cppzmq" readonly="readonly">
    <span class="input-group-button">
      <button aria-label="Copy to clipboard" class="js-zeroclipboard btn btn-sm zeroclipboard-button tooltipped tooltipped-s" data-copied-hint="Copied!" type="button"><span class="octicon octicon-clippy"></span></button>
    </span>
  </div>
</div>



<p class="clone-options">You can clone with
  <a href="#" class="js-clone-selector" data-protocol="http">HTTPS</a>, <a href="#" class="js-clone-selector" data-protocol="ssh">SSH</a>, or <a href="#" class="js-clone-selector" data-protocol="subversion">Subversion</a>.
  <a href="https://help.github.com/articles/which-remote-url-should-i-use" class="help tooltipped tooltipped-n" aria-label="Get help on which URL is right for you.">
    <span class="octicon octicon-question"></span>
  </a>
</p>

  <a href="https://mac.github.com" class="btn btn-sm sidebar-button" title="Save zeromq/cppzmq to your computer and use it in GitHub Desktop." aria-label="Save zeromq/cppzmq to your computer and use it in GitHub Desktop.">
    <span class="octicon octicon-device-desktop"></span>
    Clone in Desktop
  </a>



                <a href="/zeromq/cppzmq/archive/master.zip"
                   class="btn btn-sm sidebar-button"
                   aria-label="Download the contents of zeromq/cppzmq as a zip file"
                   title="Download the contents of zeromq/cppzmq as a zip file"
                   rel="nofollow">
                  <span class="octicon octicon-cloud-download"></span>
                  Download ZIP
                </a>
              </div>
        </div><!-- /.repository-sidebar -->

        <div id="js-repo-pjax-container" class="repository-content context-loader-container" data-pjax-container>
          

<a href="/zeromq/cppzmq/blob/ac705f604701e2ca1643fa31bae240f9da8b9b9a/zmq.hpp" class="hidden js-permalink-shortcut" data-hotkey="y">Permalink</a>

<!-- blob contrib key: blob_contributors:v21:a47346e66fffc30d4e1be2a5447ec9ba -->

<div class="file-navigation js-zeroclipboard-container">
  
<div class="select-menu js-menu-container js-select-menu left">
  <span class="btn btn-sm select-menu-button js-menu-target css-truncate" data-hotkey="w"
    data-master-branch="master"
    data-ref="master"
    title="master"
    role="button" aria-label="Switch branches or tags" tabindex="0" aria-haspopup="true">
    <span class="octicon octicon-git-branch"></span>
    <i>branch:</i>
    <span class="js-select-button css-truncate-target">master</span>
  </span>

  <div class="select-menu-modal-holder js-menu-content js-navigation-container" data-pjax aria-hidden="true">

    <div class="select-menu-modal">
      <div class="select-menu-header">
        <span class="select-menu-title">Switch branches/tags</span>
        <span class="octicon octicon-x js-menu-close" role="button" aria-label="Close"></span>
      </div>

      <div class="select-menu-filters">
        <div class="select-menu-text-filter">
          <input type="text" aria-label="Filter branches/tags" id="context-commitish-filter-field" class="js-filterable-field js-navigation-enable" placeholder="Filter branches/tags">
        </div>
        <div class="select-menu-tabs">
          <ul>
            <li class="select-menu-tab">
              <a href="#" data-tab-filter="branches" data-filter-placeholder="Filter branches/tags" class="js-select-menu-tab">Branches</a>
            </li>
            <li class="select-menu-tab">
              <a href="#" data-tab-filter="tags" data-filter-placeholder="Find a tag…" class="js-select-menu-tab">Tags</a>
            </li>
          </ul>
        </div>
      </div>

      <div class="select-menu-list select-menu-tab-bucket js-select-menu-tab-bucket" data-tab-filter="branches">

        <div data-filterable-for="context-commitish-filter-field" data-filterable-type="substring">


            <a class="select-menu-item js-navigation-item js-navigation-open selected"
               href="/zeromq/cppzmq/blob/master/zmq.hpp"
               data-name="master"
               data-skip-pjax="true"
               rel="nofollow">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <span class="select-menu-item-text css-truncate-target" title="master">
                master
              </span>
            </a>
        </div>

          <div class="select-menu-no-results">Nothing to show</div>
      </div>

      <div class="select-menu-list select-menu-tab-bucket js-select-menu-tab-bucket" data-tab-filter="tags">
        <div data-filterable-for="context-commitish-filter-field" data-filterable-type="substring">


        </div>

        <div class="select-menu-no-results">Nothing to show</div>
      </div>

    </div>
  </div>
</div>

  <div class="btn-group right">
    <a href="/zeromq/cppzmq/find/master"
          class="js-show-file-finder btn btn-sm empty-icon tooltipped tooltipped-s"
          data-pjax
          data-hotkey="t"
          aria-label="Quickly jump between files">
      <span class="octicon octicon-list-unordered"></span>
    </a>
    <button aria-label="Copy file path to clipboard" class="js-zeroclipboard btn btn-sm zeroclipboard-button tooltipped tooltipped-s" data-copied-hint="Copied!" type="button"><span class="octicon octicon-clippy"></span></button>
  </div>

  <div class="breadcrumb js-zeroclipboard-target">
    <span class='repo-root js-repo-root'><span itemscope="" itemtype="http://data-vocabulary.org/Breadcrumb"><a href="/zeromq/cppzmq" class="" data-branch="master" data-direction="back" data-pjax="true" itemscope="url"><span itemprop="title">cppzmq</span></a></span></span><span class="separator">/</span><strong class="final-path">zmq.hpp</strong>
  </div>
</div>


  <div class="commit file-history-tease">
    <div class="file-history-tease-header">
        <img alt="Todd" class="avatar" data-user="64753" height="24" src="https://avatars2.githubusercontent.com/u/64753?v=3&amp;s=48" width="24" />
        <span class="author"><a href="/tolchz" rel="contributor">tolchz</a></span>
        <time datetime="2015-03-05T22:06:36Z" is="relative-time">Mar 5, 2015</time>
        <div class="commit-title">
            <a href="/zeromq/cppzmq/commit/67b216681dd4dbc151c3efdc2ce729c0a2d56e26" class="message" data-pjax="true" title="Add an rvalue overload for socket_t::send

This lets you create functions that return message_t&#39;s by value, and
pass them to send() with no copy.">Add an rvalue overload for socket_t::send</a>
        </div>
    </div>

    <div class="participation">
      <p class="quickstat">
        <a href="#blob_contributors_box" rel="facebox">
          <strong>22</strong>
           contributors
        </a>
      </p>
          <a class="avatar-link tooltipped tooltipped-s" aria-label="ricnewton" href="/zeromq/cppzmq/commits/master/zmq.hpp?author=ricnewton"><img alt="Richard Newton" class="avatar" data-user="2026043" height="20" src="https://avatars1.githubusercontent.com/u/2026043?v=3&amp;s=40" width="20" /></a>
    <a class="avatar-link tooltipped tooltipped-s" aria-label="sustrik" href="/zeromq/cppzmq/commits/master/zmq.hpp?author=sustrik"><img alt="sustrik" class="avatar" data-user="305718" height="20" src="https://avatars1.githubusercontent.com/u/305718?v=3&amp;s=40" width="20" /></a>
    <a class="avatar-link tooltipped tooltipped-s" aria-label="hintjens" href="/zeromq/cppzmq/commits/master/zmq.hpp?author=hintjens"><img alt="Pieter Hintjens" class="avatar" data-user="307976" height="20" src="https://avatars0.githubusercontent.com/u/307976?v=3&amp;s=40" width="20" /></a>
    <a class="avatar-link tooltipped tooltipped-s" aria-label="csteifel" href="/zeromq/cppzmq/commits/master/zmq.hpp?author=csteifel"><img alt="Colin Steifel" class="avatar" data-user="829815" height="20" src="https://avatars0.githubusercontent.com/u/829815?v=3&amp;s=40" width="20" /></a>
    <a class="avatar-link tooltipped tooltipped-s" aria-label="montoyaedu" href="/zeromq/cppzmq/commits/master/zmq.hpp?author=montoyaedu"><img alt="Montoya Edu" class="avatar" data-user="1033682" height="20" src="https://avatars3.githubusercontent.com/u/1033682?v=3&amp;s=40" width="20" /></a>
    <a class="avatar-link tooltipped tooltipped-s" aria-label="Kobolog" href="/zeromq/cppzmq/commits/master/zmq.hpp?author=Kobolog"><img alt="Andrey Sibiryov" class="avatar" data-user="318866" height="20" src="https://avatars0.githubusercontent.com/u/318866?v=3&amp;s=40" width="20" /></a>
    <a class="avatar-link tooltipped tooltipped-s" aria-label="grefab" href="/zeromq/cppzmq/commits/master/zmq.hpp?author=grefab"><img alt="Gregor Fabritius" class="avatar" data-user="490997" height="20" src="https://avatars2.githubusercontent.com/u/490997?v=3&amp;s=40" width="20" /></a>
    <a class="avatar-link tooltipped tooltipped-s" aria-label="tolchz" href="/zeromq/cppzmq/commits/master/zmq.hpp?author=tolchz"><img alt="Todd" class="avatar" data-user="64753" height="20" src="https://avatars0.githubusercontent.com/u/64753?v=3&amp;s=40" width="20" /></a>
    <a class="avatar-link tooltipped tooltipped-s" aria-label="cosmoharrigan" href="/zeromq/cppzmq/commits/master/zmq.hpp?author=cosmoharrigan"><img alt="Cosmo Harrigan" class="avatar" data-user="2343485" height="20" src="https://avatars2.githubusercontent.com/u/2343485?v=3&amp;s=40" width="20" /></a>
    <a class="avatar-link tooltipped tooltipped-s" aria-label="arsenm" href="/zeromq/cppzmq/commits/master/zmq.hpp?author=arsenm"><img alt="Matt Arsenault" class="avatar" data-user="138339" height="20" src="https://avatars1.githubusercontent.com/u/138339?v=3&amp;s=40" width="20" /></a>
    <a class="avatar-link tooltipped tooltipped-s" aria-label="madevgeny" href="/zeromq/cppzmq/commits/master/zmq.hpp?author=madevgeny"><img alt="madevgeny" class="avatar" data-user="1876710" height="20" src="https://avatars3.githubusercontent.com/u/1876710?v=3&amp;s=40" width="20" /></a>
    <a class="avatar-link tooltipped tooltipped-s" aria-label="zbierak" href="/zeromq/cppzmq/commits/master/zmq.hpp?author=zbierak"><img alt="zbierak" class="avatar" data-user="2794046" height="20" src="https://avatars1.githubusercontent.com/u/2794046?v=3&amp;s=40" width="20" /></a>
    <a class="avatar-link tooltipped tooltipped-s" aria-label="robertmaynard" href="/zeromq/cppzmq/commits/master/zmq.hpp?author=robertmaynard"><img alt="Robert Maynard" class="avatar" data-user="215756" height="20" src="https://avatars2.githubusercontent.com/u/215756?v=3&amp;s=40" width="20" /></a>
    <a class="avatar-link tooltipped tooltipped-s" aria-label="mrothe" href="/zeromq/cppzmq/commits/master/zmq.hpp?author=mrothe"><img alt="Markus Rothe" class="avatar" data-user="312549" height="20" src="https://avatars0.githubusercontent.com/u/312549?v=3&amp;s=40" width="20" /></a>
    <a class="avatar-link tooltipped tooltipped-s" aria-label="justinboswell" href="/zeromq/cppzmq/commits/master/zmq.hpp?author=justinboswell"><img alt="Justin Boswell" class="avatar" data-user="3382222" height="20" src="https://avatars2.githubusercontent.com/u/3382222?v=3&amp;s=40" width="20" /></a>
    <a class="avatar-link tooltipped tooltipped-s" aria-label="ianbarber" href="/zeromq/cppzmq/commits/master/zmq.hpp?author=ianbarber"><img alt="Ian Barber" class="avatar" data-user="210006" height="20" src="https://avatars0.githubusercontent.com/u/210006?v=3&amp;s=40" width="20" /></a>
    <a class="avatar-link tooltipped tooltipped-s" aria-label="ronelliott" href="/zeromq/cppzmq/commits/master/zmq.hpp?author=ronelliott"><img alt="Ron Elliott" class="avatar" data-user="1023373" height="20" src="https://avatars1.githubusercontent.com/u/1023373?v=3&amp;s=40" width="20" /></a>
    <a class="avatar-link tooltipped tooltipped-s" aria-label="jdswinbank" href="/zeromq/cppzmq/commits/master/zmq.hpp?author=jdswinbank"><img alt="John Swinbank" class="avatar" data-user="460854" height="20" src="https://avatars3.githubusercontent.com/u/460854?v=3&amp;s=40" width="20" /></a>
    <a class="avatar-link tooltipped tooltipped-s" aria-label="taurel" href="/zeromq/cppzmq/commits/master/zmq.hpp?author=taurel"><img alt="taurel" class="avatar" data-user="1553253" height="20" src="https://avatars0.githubusercontent.com/u/1553253?v=3&amp;s=40" width="20" /></a>
    <a class="avatar-link tooltipped tooltipped-s" aria-label="thesamet" href="/zeromq/cppzmq/commits/master/zmq.hpp?author=thesamet"><img alt="Nadav Samet" class="avatar" data-user="307373" height="20" src="https://avatars1.githubusercontent.com/u/307373?v=3&amp;s=40" width="20" /></a>
    <a class="avatar-link tooltipped tooltipped-s" aria-label="cjuniet" href="/zeromq/cppzmq/commits/master/zmq.hpp?author=cjuniet"><img alt="Christophe Juniet" class="avatar" data-user="1233553" height="20" src="https://avatars3.githubusercontent.com/u/1233553?v=3&amp;s=40" width="20" /></a>
    <a class="avatar-link tooltipped tooltipped-s" aria-label="botond-ballo" href="/zeromq/cppzmq/commits/master/zmq.hpp?author=botond-ballo"><img alt="Botond Ballo" class="avatar" data-user="1205897" height="20" src="https://avatars2.githubusercontent.com/u/1205897?v=3&amp;s=40" width="20" /></a>


    </div>
    <div id="blob_contributors_box" style="display:none">
      <h2 class="facebox-header">Users who have contributed to this file</h2>
      <ul class="facebox-user-list">
          <li class="facebox-user-list-item">
            <img alt="Richard Newton" data-user="2026043" height="24" src="https://avatars3.githubusercontent.com/u/2026043?v=3&amp;s=48" width="24" />
            <a href="/ricnewton">ricnewton</a>
          </li>
          <li class="facebox-user-list-item">
            <img alt="sustrik" data-user="305718" height="24" src="https://avatars3.githubusercontent.com/u/305718?v=3&amp;s=48" width="24" />
            <a href="/sustrik">sustrik</a>
          </li>
          <li class="facebox-user-list-item">
            <img alt="Pieter Hintjens" data-user="307976" height="24" src="https://avatars2.githubusercontent.com/u/307976?v=3&amp;s=48" width="24" />
            <a href="/hintjens">hintjens</a>
          </li>
          <li class="facebox-user-list-item">
            <img alt="Colin Steifel" data-user="829815" height="24" src="https://avatars2.githubusercontent.com/u/829815?v=3&amp;s=48" width="24" />
            <a href="/csteifel">csteifel</a>
          </li>
          <li class="facebox-user-list-item">
            <img alt="Montoya Edu" data-user="1033682" height="24" src="https://avatars1.githubusercontent.com/u/1033682?v=3&amp;s=48" width="24" />
            <a href="/montoyaedu">montoyaedu</a>
          </li>
          <li class="facebox-user-list-item">
            <img alt="Andrey Sibiryov" data-user="318866" height="24" src="https://avatars2.githubusercontent.com/u/318866?v=3&amp;s=48" width="24" />
            <a href="/Kobolog">Kobolog</a>
          </li>
          <li class="facebox-user-list-item">
            <img alt="Gregor Fabritius" data-user="490997" height="24" src="https://avatars0.githubusercontent.com/u/490997?v=3&amp;s=48" width="24" />
            <a href="/grefab">grefab</a>
          </li>
          <li class="facebox-user-list-item">
            <img alt="Todd" data-user="64753" height="24" src="https://avatars2.githubusercontent.com/u/64753?v=3&amp;s=48" width="24" />
            <a href="/tolchz">tolchz</a>
          </li>
          <li class="facebox-user-list-item">
            <img alt="Cosmo Harrigan" data-user="2343485" height="24" src="https://avatars0.githubusercontent.com/u/2343485?v=3&amp;s=48" width="24" />
            <a href="/cosmoharrigan">cosmoharrigan</a>
          </li>
          <li class="facebox-user-list-item">
            <img alt="Matt Arsenault" data-user="138339" height="24" src="https://avatars3.githubusercontent.com/u/138339?v=3&amp;s=48" width="24" />
            <a href="/arsenm">arsenm</a>
          </li>
          <li class="facebox-user-list-item">
            <img alt="madevgeny" data-user="1876710" height="24" src="https://avatars1.githubusercontent.com/u/1876710?v=3&amp;s=48" width="24" />
            <a href="/madevgeny">madevgeny</a>
          </li>
          <li class="facebox-user-list-item">
            <img alt="zbierak" data-user="2794046" height="24" src="https://avatars3.githubusercontent.com/u/2794046?v=3&amp;s=48" width="24" />
            <a href="/zbierak">zbierak</a>
          </li>
          <li class="facebox-user-list-item">
            <img alt="Robert Maynard" data-user="215756" height="24" src="https://avatars0.githubusercontent.com/u/215756?v=3&amp;s=48" width="24" />
            <a href="/robertmaynard">robertmaynard</a>
          </li>
          <li class="facebox-user-list-item">
            <img alt="Markus Rothe" data-user="312549" height="24" src="https://avatars2.githubusercontent.com/u/312549?v=3&amp;s=48" width="24" />
            <a href="/mrothe">mrothe</a>
          </li>
          <li class="facebox-user-list-item">
            <img alt="Justin Boswell" data-user="3382222" height="24" src="https://avatars0.githubusercontent.com/u/3382222?v=3&amp;s=48" width="24" />
            <a href="/justinboswell">justinboswell</a>
          </li>
          <li class="facebox-user-list-item">
            <img alt="Ian Barber" data-user="210006" height="24" src="https://avatars2.githubusercontent.com/u/210006?v=3&amp;s=48" width="24" />
            <a href="/ianbarber">ianbarber</a>
          </li>
          <li class="facebox-user-list-item">
            <img alt="Ron Elliott" data-user="1023373" height="24" src="https://avatars3.githubusercontent.com/u/1023373?v=3&amp;s=48" width="24" />
            <a href="/ronelliott">ronelliott</a>
          </li>
          <li class="facebox-user-list-item">
            <img alt="John Swinbank" data-user="460854" height="24" src="https://avatars1.githubusercontent.com/u/460854?v=3&amp;s=48" width="24" />
            <a href="/jdswinbank">jdswinbank</a>
          </li>
          <li class="facebox-user-list-item">
            <img alt="taurel" data-user="1553253" height="24" src="https://avatars2.githubusercontent.com/u/1553253?v=3&amp;s=48" width="24" />
            <a href="/taurel">taurel</a>
          </li>
          <li class="facebox-user-list-item">
            <img alt="Nadav Samet" data-user="307373" height="24" src="https://avatars3.githubusercontent.com/u/307373?v=3&amp;s=48" width="24" />
            <a href="/thesamet">thesamet</a>
          </li>
          <li class="facebox-user-list-item">
            <img alt="Christophe Juniet" data-user="1233553" height="24" src="https://avatars1.githubusercontent.com/u/1233553?v=3&amp;s=48" width="24" />
            <a href="/cjuniet">cjuniet</a>
          </li>
          <li class="facebox-user-list-item">
            <img alt="Botond Ballo" data-user="1205897" height="24" src="https://avatars0.githubusercontent.com/u/1205897?v=3&amp;s=48" width="24" />
            <a href="/botond-ballo">botond-ballo</a>
          </li>
      </ul>
    </div>
  </div>

<div class="file">
  <div class="file-header">
    <div class="file-actions">

      <div class="btn-group">
        <a href="/zeromq/cppzmq/raw/master/zmq.hpp" class="btn btn-sm " id="raw-url">Raw</a>
          <a href="/zeromq/cppzmq/blame/master/zmq.hpp" class="btn btn-sm js-update-url-with-hash">Blame</a>
        <a href="/zeromq/cppzmq/commits/master/zmq.hpp" class="btn btn-sm " rel="nofollow">History</a>
      </div>

        <a class="octicon-btn tooltipped tooltipped-nw"
           href="https://mac.github.com"
           aria-label="Open this file in GitHub for Mac">
            <span class="octicon octicon-device-desktop"></span>
        </a>

            <form accept-charset="UTF-8" action="/zeromq/cppzmq/edit/master/zmq.hpp" class="inline-form" method="post"><div style="margin:0;padding:0;display:inline"><input name="utf8" type="hidden" value="&#x2713;" /><input name="authenticity_token" type="hidden" value="WcZ86S89H0sNvPDJA9IZ4o+615MzMwl51VdDp1eDjlxKYDhUBtIVEmtYl5ws6Zu+sd73oUnnNlb0kehWQ6dd6Q==" /></div>
              <button class="octicon-btn tooltipped tooltipped-n" type="submit" aria-label="Fork this project and edit the file" data-hotkey="e" data-disable-with>
                <span class="octicon octicon-pencil"></span>
              </button>
</form>
          <form accept-charset="UTF-8" action="/zeromq/cppzmq/delete/master/zmq.hpp" class="inline-form" method="post"><div style="margin:0;padding:0;display:inline"><input name="utf8" type="hidden" value="&#x2713;" /><input name="authenticity_token" type="hidden" value="dPI8ofMKS6BeYJb3B9PfsQwNgeEkUPwanNk1rrNCbRaKgMocQGd52vP253xSbqZSb7fJe9lEqD2uYvWfhHSn/g==" /></div>
            <button class="octicon-btn octicon-btn-danger tooltipped tooltipped-n" type="submit" aria-label="Fork this project and delete this file" data-disable-with>
              <span class="octicon octicon-trashcan"></span>
            </button>
</form>    </div>

    <div class="file-info">
        603 lines (515 sloc)
        <span class="file-info-divider"></span>
      17.91 kb
    </div>
  </div>
  
  <div class="blob-wrapper data type-c">
      <table class="highlight tab-size-8 js-file-line-container">
      <tr>
        <td id="L1" class="blob-num js-line-number" data-line-number="1"></td>
        <td id="LC1" class="blob-code js-file-line"><span class="pl-c">/*</span></td>
      </tr>
      <tr>
        <td id="L2" class="blob-num js-line-number" data-line-number="2"></td>
        <td id="LC2" class="blob-code js-file-line"><span class="pl-c">    Copyright (c) 2009-2011 250bpm s.r.o.</span></td>
      </tr>
      <tr>
        <td id="L3" class="blob-num js-line-number" data-line-number="3"></td>
        <td id="LC3" class="blob-code js-file-line"><span class="pl-c">    Copyright (c) 2011 Botond Ballo</span></td>
      </tr>
      <tr>
        <td id="L4" class="blob-num js-line-number" data-line-number="4"></td>
        <td id="LC4" class="blob-code js-file-line"><span class="pl-c">    Copyright (c) 2007-2009 iMatix Corporation</span></td>
      </tr>
      <tr>
        <td id="L5" class="blob-num js-line-number" data-line-number="5"></td>
        <td id="LC5" class="blob-code js-file-line"><span class="pl-c"></span></td>
      </tr>
      <tr>
        <td id="L6" class="blob-num js-line-number" data-line-number="6"></td>
        <td id="LC6" class="blob-code js-file-line"><span class="pl-c">    Permission is hereby granted, free of charge, to any person obtaining a copy</span></td>
      </tr>
      <tr>
        <td id="L7" class="blob-num js-line-number" data-line-number="7"></td>
        <td id="LC7" class="blob-code js-file-line"><span class="pl-c">    of this software and associated documentation files (the &quot;Software&quot;), to</span></td>
      </tr>
      <tr>
        <td id="L8" class="blob-num js-line-number" data-line-number="8"></td>
        <td id="LC8" class="blob-code js-file-line"><span class="pl-c">    deal in the Software without restriction, including without limitation the</span></td>
      </tr>
      <tr>
        <td id="L9" class="blob-num js-line-number" data-line-number="9"></td>
        <td id="LC9" class="blob-code js-file-line"><span class="pl-c">    rights to use, copy, modify, merge, publish, distribute, sublicense, and/or</span></td>
      </tr>
      <tr>
        <td id="L10" class="blob-num js-line-number" data-line-number="10"></td>
        <td id="LC10" class="blob-code js-file-line"><span class="pl-c">    sell copies of the Software, and to permit persons to whom the Software is</span></td>
      </tr>
      <tr>
        <td id="L11" class="blob-num js-line-number" data-line-number="11"></td>
        <td id="LC11" class="blob-code js-file-line"><span class="pl-c">    furnished to do so, subject to the following conditions:</span></td>
      </tr>
      <tr>
        <td id="L12" class="blob-num js-line-number" data-line-number="12"></td>
        <td id="LC12" class="blob-code js-file-line"><span class="pl-c"></span></td>
      </tr>
      <tr>
        <td id="L13" class="blob-num js-line-number" data-line-number="13"></td>
        <td id="LC13" class="blob-code js-file-line"><span class="pl-c">    The above copyright notice and this permission notice shall be included in</span></td>
      </tr>
      <tr>
        <td id="L14" class="blob-num js-line-number" data-line-number="14"></td>
        <td id="LC14" class="blob-code js-file-line"><span class="pl-c">    all copies or substantial portions of the Software.</span></td>
      </tr>
      <tr>
        <td id="L15" class="blob-num js-line-number" data-line-number="15"></td>
        <td id="LC15" class="blob-code js-file-line"><span class="pl-c"></span></td>
      </tr>
      <tr>
        <td id="L16" class="blob-num js-line-number" data-line-number="16"></td>
        <td id="LC16" class="blob-code js-file-line"><span class="pl-c">    THE SOFTWARE IS PROVIDED &quot;AS IS&quot;, WITHOUT WARRANTY OF ANY KIND, EXPRESS OR</span></td>
      </tr>
      <tr>
        <td id="L17" class="blob-num js-line-number" data-line-number="17"></td>
        <td id="LC17" class="blob-code js-file-line"><span class="pl-c">    IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,</span></td>
      </tr>
      <tr>
        <td id="L18" class="blob-num js-line-number" data-line-number="18"></td>
        <td id="LC18" class="blob-code js-file-line"><span class="pl-c">    FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE</span></td>
      </tr>
      <tr>
        <td id="L19" class="blob-num js-line-number" data-line-number="19"></td>
        <td id="LC19" class="blob-code js-file-line"><span class="pl-c">    AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER</span></td>
      </tr>
      <tr>
        <td id="L20" class="blob-num js-line-number" data-line-number="20"></td>
        <td id="LC20" class="blob-code js-file-line"><span class="pl-c">    LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING</span></td>
      </tr>
      <tr>
        <td id="L21" class="blob-num js-line-number" data-line-number="21"></td>
        <td id="LC21" class="blob-code js-file-line"><span class="pl-c">    FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS</span></td>
      </tr>
      <tr>
        <td id="L22" class="blob-num js-line-number" data-line-number="22"></td>
        <td id="LC22" class="blob-code js-file-line"><span class="pl-c">    IN THE SOFTWARE.</span></td>
      </tr>
      <tr>
        <td id="L23" class="blob-num js-line-number" data-line-number="23"></td>
        <td id="LC23" class="blob-code js-file-line"><span class="pl-c">*/</span></td>
      </tr>
      <tr>
        <td id="L24" class="blob-num js-line-number" data-line-number="24"></td>
        <td id="LC24" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L25" class="blob-num js-line-number" data-line-number="25"></td>
        <td id="LC25" class="blob-code js-file-line">#<span class="pl-k">ifndef</span> __ZMQ_HPP_INCLUDED__</td>
      </tr>
      <tr>
        <td id="L26" class="blob-num js-line-number" data-line-number="26"></td>
        <td id="LC26" class="blob-code js-file-line">#<span class="pl-k">define</span> <span class="pl-en">__ZMQ_HPP_INCLUDED__</span></td>
      </tr>
      <tr>
        <td id="L27" class="blob-num js-line-number" data-line-number="27"></td>
        <td id="LC27" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L28" class="blob-num js-line-number" data-line-number="28"></td>
        <td id="LC28" class="blob-code js-file-line">#<span class="pl-k">include</span> <span class="pl-s"><span class="pl-pds">&lt;</span>zmq.h<span class="pl-pds">&gt;</span></span></td>
      </tr>
      <tr>
        <td id="L29" class="blob-num js-line-number" data-line-number="29"></td>
        <td id="LC29" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L30" class="blob-num js-line-number" data-line-number="30"></td>
        <td id="LC30" class="blob-code js-file-line">#<span class="pl-k">include</span> <span class="pl-s"><span class="pl-pds">&lt;</span>algorithm<span class="pl-pds">&gt;</span></span></td>
      </tr>
      <tr>
        <td id="L31" class="blob-num js-line-number" data-line-number="31"></td>
        <td id="LC31" class="blob-code js-file-line">#<span class="pl-k">include</span> <span class="pl-s"><span class="pl-pds">&lt;</span>cassert<span class="pl-pds">&gt;</span></span></td>
      </tr>
      <tr>
        <td id="L32" class="blob-num js-line-number" data-line-number="32"></td>
        <td id="LC32" class="blob-code js-file-line">#<span class="pl-k">include</span> <span class="pl-s"><span class="pl-pds">&lt;</span>cstring<span class="pl-pds">&gt;</span></span></td>
      </tr>
      <tr>
        <td id="L33" class="blob-num js-line-number" data-line-number="33"></td>
        <td id="LC33" class="blob-code js-file-line">#<span class="pl-k">include</span> <span class="pl-s"><span class="pl-pds">&lt;</span>string<span class="pl-pds">&gt;</span></span></td>
      </tr>
      <tr>
        <td id="L34" class="blob-num js-line-number" data-line-number="34"></td>
        <td id="LC34" class="blob-code js-file-line">#<span class="pl-k">include</span> <span class="pl-s"><span class="pl-pds">&lt;</span>exception<span class="pl-pds">&gt;</span></span></td>
      </tr>
      <tr>
        <td id="L35" class="blob-num js-line-number" data-line-number="35"></td>
        <td id="LC35" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L36" class="blob-num js-line-number" data-line-number="36"></td>
        <td id="LC36" class="blob-code js-file-line"><span class="pl-c">//  Detect whether the compiler supports C++11 rvalue references.</span></td>
      </tr>
      <tr>
        <td id="L37" class="blob-num js-line-number" data-line-number="37"></td>
        <td id="LC37" class="blob-code js-file-line">#<span class="pl-k">if</span> (defined(__GNUC__) &amp;&amp; (__GNUC__ &gt; 4 || \</td>
      </tr>
      <tr>
        <td id="L38" class="blob-num js-line-number" data-line-number="38"></td>
        <td id="LC38" class="blob-code js-file-line">      (__GNUC__ == <span class="pl-c1">4</span> &amp;&amp; __GNUC_MINOR__ &gt; <span class="pl-c1">2</span>)) &amp;&amp; \</td>
      </tr>
      <tr>
        <td id="L39" class="blob-num js-line-number" data-line-number="39"></td>
        <td id="LC39" class="blob-code js-file-line">      <span class="pl-en">defined</span>(__GXX_EXPERIMENTAL_CXX0X__))</td>
      </tr>
      <tr>
        <td id="L40" class="blob-num js-line-number" data-line-number="40"></td>
        <td id="LC40" class="blob-code js-file-line">    #define ZMQ_HAS_RVALUE_REFS</td>
      </tr>
      <tr>
        <td id="L41" class="blob-num js-line-number" data-line-number="41"></td>
        <td id="LC41" class="blob-code js-file-line">    #<span class="pl-k">define</span> <span class="pl-en">ZMQ_DELETED_FUNCTION</span> = <span class="pl-k">delete</span></td>
      </tr>
      <tr>
        <td id="L42" class="blob-num js-line-number" data-line-number="42"></td>
        <td id="LC42" class="blob-code js-file-line">#<span class="pl-k">elif</span> defined(__clang__)</td>
      </tr>
      <tr>
        <td id="L43" class="blob-num js-line-number" data-line-number="43"></td>
        <td id="LC43" class="blob-code js-file-line">    #<span class="pl-k">if</span> __has_feature(cxx_rvalue_references)</td>
      </tr>
      <tr>
        <td id="L44" class="blob-num js-line-number" data-line-number="44"></td>
        <td id="LC44" class="blob-code js-file-line">        #<span class="pl-k">define</span> <span class="pl-en">ZMQ_HAS_RVALUE_REFS</span></td>
      </tr>
      <tr>
        <td id="L45" class="blob-num js-line-number" data-line-number="45"></td>
        <td id="LC45" class="blob-code js-file-line">    #<span class="pl-k">endif</span></td>
      </tr>
      <tr>
        <td id="L46" class="blob-num js-line-number" data-line-number="46"></td>
        <td id="LC46" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L47" class="blob-num js-line-number" data-line-number="47"></td>
        <td id="LC47" class="blob-code js-file-line">    #<span class="pl-k">if</span> __has_feature(cxx_deleted_functions)</td>
      </tr>
      <tr>
        <td id="L48" class="blob-num js-line-number" data-line-number="48"></td>
        <td id="LC48" class="blob-code js-file-line">        #<span class="pl-k">define</span> <span class="pl-en">ZMQ_DELETED_FUNCTION</span> = <span class="pl-k">delete</span></td>
      </tr>
      <tr>
        <td id="L49" class="blob-num js-line-number" data-line-number="49"></td>
        <td id="LC49" class="blob-code js-file-line">    #<span class="pl-k">else</span></td>
      </tr>
      <tr>
        <td id="L50" class="blob-num js-line-number" data-line-number="50"></td>
        <td id="LC50" class="blob-code js-file-line">        #<span class="pl-k">define</span> <span class="pl-en">ZMQ_DELETED_FUNCTION</span></td>
      </tr>
      <tr>
        <td id="L51" class="blob-num js-line-number" data-line-number="51"></td>
        <td id="LC51" class="blob-code js-file-line">    #<span class="pl-k">endif</span></td>
      </tr>
      <tr>
        <td id="L52" class="blob-num js-line-number" data-line-number="52"></td>
        <td id="LC52" class="blob-code js-file-line">#<span class="pl-k">elif</span> defined(_MSC_VER) &amp;&amp; (_MSC_VER &gt;= 1600)</td>
      </tr>
      <tr>
        <td id="L53" class="blob-num js-line-number" data-line-number="53"></td>
        <td id="LC53" class="blob-code js-file-line">    #<span class="pl-k">define</span> <span class="pl-en">ZMQ_HAS_RVALUE_REFS</span></td>
      </tr>
      <tr>
        <td id="L54" class="blob-num js-line-number" data-line-number="54"></td>
        <td id="LC54" class="blob-code js-file-line">    #<span class="pl-k">define</span> <span class="pl-en">ZMQ_DELETED_FUNCTION</span></td>
      </tr>
      <tr>
        <td id="L55" class="blob-num js-line-number" data-line-number="55"></td>
        <td id="LC55" class="blob-code js-file-line">#<span class="pl-k">else</span></td>
      </tr>
      <tr>
        <td id="L56" class="blob-num js-line-number" data-line-number="56"></td>
        <td id="LC56" class="blob-code js-file-line">    #<span class="pl-k">define</span> <span class="pl-en">ZMQ_DELETED_FUNCTION</span></td>
      </tr>
      <tr>
        <td id="L57" class="blob-num js-line-number" data-line-number="57"></td>
        <td id="LC57" class="blob-code js-file-line">#<span class="pl-k">endif</span></td>
      </tr>
      <tr>
        <td id="L58" class="blob-num js-line-number" data-line-number="58"></td>
        <td id="LC58" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L59" class="blob-num js-line-number" data-line-number="59"></td>
        <td id="LC59" class="blob-code js-file-line">#<span class="pl-k">if</span> ZMQ_VERSION &gt;= ZMQ_MAKE_VERSION(3, 3, 0)</td>
      </tr>
      <tr>
        <td id="L60" class="blob-num js-line-number" data-line-number="60"></td>
        <td id="LC60" class="blob-code js-file-line">#<span class="pl-k">define</span> <span class="pl-en">ZMQ_NEW_MONITOR_EVENT_LAYOUT</span></td>
      </tr>
      <tr>
        <td id="L61" class="blob-num js-line-number" data-line-number="61"></td>
        <td id="LC61" class="blob-code js-file-line">#<span class="pl-k">endif</span></td>
      </tr>
      <tr>
        <td id="L62" class="blob-num js-line-number" data-line-number="62"></td>
        <td id="LC62" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L63" class="blob-num js-line-number" data-line-number="63"></td>
        <td id="LC63" class="blob-code js-file-line">#<span class="pl-k">if</span> ZMQ_VERSION &gt;= ZMQ_MAKE_VERSION(4, 1, 0)</td>
      </tr>
      <tr>
        <td id="L64" class="blob-num js-line-number" data-line-number="64"></td>
        <td id="LC64" class="blob-code js-file-line">#<span class="pl-k">define</span> <span class="pl-en">ZMQ_HAS_PROXY_STEERABLE</span></td>
      </tr>
      <tr>
        <td id="L65" class="blob-num js-line-number" data-line-number="65"></td>
        <td id="LC65" class="blob-code js-file-line"><span class="pl-c">/*  Socket event data  */</span></td>
      </tr>
      <tr>
        <td id="L66" class="blob-num js-line-number" data-line-number="66"></td>
        <td id="LC66" class="blob-code js-file-line"><span class="pl-k">typedef</span> <span class="pl-k">struct</span> {</td>
      </tr>
      <tr>
        <td id="L67" class="blob-num js-line-number" data-line-number="67"></td>
        <td id="LC67" class="blob-code js-file-line">    <span class="pl-c1">uint16_t</span> event;  <span class="pl-c">// id of the event as bitfield</span></td>
      </tr>
      <tr>
        <td id="L68" class="blob-num js-line-number" data-line-number="68"></td>
        <td id="LC68" class="blob-code js-file-line">    <span class="pl-c1">int32_t</span>  value ; <span class="pl-c">// value is either error code, fd or reconnect interval</span></td>
      </tr>
      <tr>
        <td id="L69" class="blob-num js-line-number" data-line-number="69"></td>
        <td id="LC69" class="blob-code js-file-line">} <span class="pl-c1">zmq_event_t</span>;</td>
      </tr>
      <tr>
        <td id="L70" class="blob-num js-line-number" data-line-number="70"></td>
        <td id="LC70" class="blob-code js-file-line">#<span class="pl-k">endif</span></td>
      </tr>
      <tr>
        <td id="L71" class="blob-num js-line-number" data-line-number="71"></td>
        <td id="LC71" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L72" class="blob-num js-line-number" data-line-number="72"></td>
        <td id="LC72" class="blob-code js-file-line"><span class="pl-c">// In order to prevent unused variable warnings when building in non-debug</span></td>
      </tr>
      <tr>
        <td id="L73" class="blob-num js-line-number" data-line-number="73"></td>
        <td id="LC73" class="blob-code js-file-line"><span class="pl-c">// mode use this macro to make assertions.</span></td>
      </tr>
      <tr>
        <td id="L74" class="blob-num js-line-number" data-line-number="74"></td>
        <td id="LC74" class="blob-code js-file-line">#<span class="pl-k">ifndef</span> NDEBUG</td>
      </tr>
      <tr>
        <td id="L75" class="blob-num js-line-number" data-line-number="75"></td>
        <td id="LC75" class="blob-code js-file-line">#   <span class="pl-k">define</span> <span class="pl-en">ZMQ_ASSERT</span>(<span class="pl-v">expression</span>) assert(expression)</td>
      </tr>
      <tr>
        <td id="L76" class="blob-num js-line-number" data-line-number="76"></td>
        <td id="LC76" class="blob-code js-file-line">#<span class="pl-k">else</span></td>
      </tr>
      <tr>
        <td id="L77" class="blob-num js-line-number" data-line-number="77"></td>
        <td id="LC77" class="blob-code js-file-line">#   <span class="pl-k">define</span> <span class="pl-en">ZMQ_ASSERT</span>(<span class="pl-v">expression</span>) (<span class="pl-k">void</span>)(expression)</td>
      </tr>
      <tr>
        <td id="L78" class="blob-num js-line-number" data-line-number="78"></td>
        <td id="LC78" class="blob-code js-file-line">#<span class="pl-k">endif</span></td>
      </tr>
      <tr>
        <td id="L79" class="blob-num js-line-number" data-line-number="79"></td>
        <td id="LC79" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L80" class="blob-num js-line-number" data-line-number="80"></td>
        <td id="LC80" class="blob-code js-file-line"><span class="pl-k">namespace</span> <span class="pl-en">zmq</span></td>
      </tr>
      <tr>
        <td id="L81" class="blob-num js-line-number" data-line-number="81"></td>
        <td id="LC81" class="blob-code js-file-line">{</td>
      </tr>
      <tr>
        <td id="L82" class="blob-num js-line-number" data-line-number="82"></td>
        <td id="LC82" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L83" class="blob-num js-line-number" data-line-number="83"></td>
        <td id="LC83" class="blob-code js-file-line">    <span class="pl-k">typedef</span> zmq_free_fn free_fn;</td>
      </tr>
      <tr>
        <td id="L84" class="blob-num js-line-number" data-line-number="84"></td>
        <td id="LC84" class="blob-code js-file-line">    <span class="pl-k">typedef</span> <span class="pl-c1">zmq_pollitem_t</span> <span class="pl-c1">pollitem_t</span>;</td>
      </tr>
      <tr>
        <td id="L85" class="blob-num js-line-number" data-line-number="85"></td>
        <td id="LC85" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L86" class="blob-num js-line-number" data-line-number="86"></td>
        <td id="LC86" class="blob-code js-file-line">    <span class="pl-k">class</span> <span class="pl-en">error_t</span> : <span class="pl-k">public</span> <span class="pl-en">std</span>::exception</td>
      </tr>
      <tr>
        <td id="L87" class="blob-num js-line-number" data-line-number="87"></td>
        <td id="LC87" class="blob-code js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L88" class="blob-num js-line-number" data-line-number="88"></td>
        <td id="LC88" class="blob-code js-file-line">    <span class="pl-k">public:</span></td>
      </tr>
      <tr>
        <td id="L89" class="blob-num js-line-number" data-line-number="89"></td>
        <td id="LC89" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L90" class="blob-num js-line-number" data-line-number="90"></td>
        <td id="LC90" class="blob-code js-file-line">        <span class="pl-en">error_t</span> () : errnum (zmq_errno ()) {}</td>
      </tr>
      <tr>
        <td id="L91" class="blob-num js-line-number" data-line-number="91"></td>
        <td id="LC91" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L92" class="blob-num js-line-number" data-line-number="92"></td>
        <td id="LC92" class="blob-code js-file-line">        <span class="pl-k">virtual</span> <span class="pl-k">const</span> <span class="pl-k">char</span> *<span class="pl-en">what</span> () <span class="pl-k">const</span> throw ()</td>
      </tr>
      <tr>
        <td id="L93" class="blob-num js-line-number" data-line-number="93"></td>
        <td id="LC93" class="blob-code js-file-line">        {</td>
      </tr>
      <tr>
        <td id="L94" class="blob-num js-line-number" data-line-number="94"></td>
        <td id="LC94" class="blob-code js-file-line">            <span class="pl-k">return</span> <span class="pl-c1">zmq_strerror</span> (errnum);</td>
      </tr>
      <tr>
        <td id="L95" class="blob-num js-line-number" data-line-number="95"></td>
        <td id="LC95" class="blob-code js-file-line">        }</td>
      </tr>
      <tr>
        <td id="L96" class="blob-num js-line-number" data-line-number="96"></td>
        <td id="LC96" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L97" class="blob-num js-line-number" data-line-number="97"></td>
        <td id="LC97" class="blob-code js-file-line">        <span class="pl-k">int</span> <span class="pl-en">num</span> () <span class="pl-k">const</span></td>
      </tr>
      <tr>
        <td id="L98" class="blob-num js-line-number" data-line-number="98"></td>
        <td id="LC98" class="blob-code js-file-line">        {</td>
      </tr>
      <tr>
        <td id="L99" class="blob-num js-line-number" data-line-number="99"></td>
        <td id="LC99" class="blob-code js-file-line">            <span class="pl-k">return</span> errnum;</td>
      </tr>
      <tr>
        <td id="L100" class="blob-num js-line-number" data-line-number="100"></td>
        <td id="LC100" class="blob-code js-file-line">        }</td>
      </tr>
      <tr>
        <td id="L101" class="blob-num js-line-number" data-line-number="101"></td>
        <td id="LC101" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L102" class="blob-num js-line-number" data-line-number="102"></td>
        <td id="LC102" class="blob-code js-file-line">    <span class="pl-k">private:</span></td>
      </tr>
      <tr>
        <td id="L103" class="blob-num js-line-number" data-line-number="103"></td>
        <td id="LC103" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L104" class="blob-num js-line-number" data-line-number="104"></td>
        <td id="LC104" class="blob-code js-file-line">        <span class="pl-k">int</span> errnum;</td>
      </tr>
      <tr>
        <td id="L105" class="blob-num js-line-number" data-line-number="105"></td>
        <td id="LC105" class="blob-code js-file-line">    };</td>
      </tr>
      <tr>
        <td id="L106" class="blob-num js-line-number" data-line-number="106"></td>
        <td id="LC106" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L107" class="blob-num js-line-number" data-line-number="107"></td>
        <td id="LC107" class="blob-code js-file-line">    <span class="pl-k">inline</span> <span class="pl-k">int</span> <span class="pl-en">poll</span> (<span class="pl-c1">zmq_pollitem_t</span> *items_, <span class="pl-k">int</span> nitems_, <span class="pl-k">long</span> timeout_ = -<span class="pl-c1">1</span>)</td>
      </tr>
      <tr>
        <td id="L108" class="blob-num js-line-number" data-line-number="108"></td>
        <td id="LC108" class="blob-code js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L109" class="blob-num js-line-number" data-line-number="109"></td>
        <td id="LC109" class="blob-code js-file-line">        <span class="pl-k">int</span> rc = <span class="pl-c1">zmq_poll</span> (items_, nitems_, timeout_);</td>
      </tr>
      <tr>
        <td id="L110" class="blob-num js-line-number" data-line-number="110"></td>
        <td id="LC110" class="blob-code js-file-line">        <span class="pl-k">if</span> (rc &lt; <span class="pl-c1">0</span>)</td>
      </tr>
      <tr>
        <td id="L111" class="blob-num js-line-number" data-line-number="111"></td>
        <td id="LC111" class="blob-code js-file-line">            <span class="pl-k">throw</span> <span class="pl-smi">error_t</span> ();</td>
      </tr>
      <tr>
        <td id="L112" class="blob-num js-line-number" data-line-number="112"></td>
        <td id="LC112" class="blob-code js-file-line">        <span class="pl-k">return</span> rc;</td>
      </tr>
      <tr>
        <td id="L113" class="blob-num js-line-number" data-line-number="113"></td>
        <td id="LC113" class="blob-code js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L114" class="blob-num js-line-number" data-line-number="114"></td>
        <td id="LC114" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L115" class="blob-num js-line-number" data-line-number="115"></td>
        <td id="LC115" class="blob-code js-file-line">    <span class="pl-k">inline</span> <span class="pl-k">void</span> <span class="pl-en">proxy</span> (<span class="pl-k">void</span> *frontend, <span class="pl-k">void</span> *backend, <span class="pl-k">void</span> *capture)</td>
      </tr>
      <tr>
        <td id="L116" class="blob-num js-line-number" data-line-number="116"></td>
        <td id="LC116" class="blob-code js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L117" class="blob-num js-line-number" data-line-number="117"></td>
        <td id="LC117" class="blob-code js-file-line">        <span class="pl-k">int</span> rc = <span class="pl-c1">zmq_proxy</span> (frontend, backend, capture);</td>
      </tr>
      <tr>
        <td id="L118" class="blob-num js-line-number" data-line-number="118"></td>
        <td id="LC118" class="blob-code js-file-line">        <span class="pl-k">if</span> (rc != <span class="pl-c1">0</span>)</td>
      </tr>
      <tr>
        <td id="L119" class="blob-num js-line-number" data-line-number="119"></td>
        <td id="LC119" class="blob-code js-file-line">            <span class="pl-k">throw</span> <span class="pl-smi">error_t</span> ();</td>
      </tr>
      <tr>
        <td id="L120" class="blob-num js-line-number" data-line-number="120"></td>
        <td id="LC120" class="blob-code js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L121" class="blob-num js-line-number" data-line-number="121"></td>
        <td id="LC121" class="blob-code js-file-line">    </td>
      </tr>
      <tr>
        <td id="L122" class="blob-num js-line-number" data-line-number="122"></td>
        <td id="LC122" class="blob-code js-file-line">#<span class="pl-k">ifdef</span> ZMQ_HAS_PROXY_STEERABLE</td>
      </tr>
      <tr>
        <td id="L123" class="blob-num js-line-number" data-line-number="123"></td>
        <td id="LC123" class="blob-code js-file-line">    <span class="pl-k">inline</span> <span class="pl-k">void</span> <span class="pl-en">proxy_steerable</span> (<span class="pl-k">void</span> *frontend, <span class="pl-k">void</span> *backend, <span class="pl-k">void</span> *capture, <span class="pl-k">void</span> *control)</td>
      </tr>
      <tr>
        <td id="L124" class="blob-num js-line-number" data-line-number="124"></td>
        <td id="LC124" class="blob-code js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L125" class="blob-num js-line-number" data-line-number="125"></td>
        <td id="LC125" class="blob-code js-file-line">        <span class="pl-k">int</span> rc = <span class="pl-c1">zmq_proxy_steerable</span> (frontend, backend, capture, control);</td>
      </tr>
      <tr>
        <td id="L126" class="blob-num js-line-number" data-line-number="126"></td>
        <td id="LC126" class="blob-code js-file-line">        <span class="pl-k">if</span> (rc != <span class="pl-c1">0</span>)</td>
      </tr>
      <tr>
        <td id="L127" class="blob-num js-line-number" data-line-number="127"></td>
        <td id="LC127" class="blob-code js-file-line">            <span class="pl-k">throw</span> <span class="pl-smi">error_t</span> ();</td>
      </tr>
      <tr>
        <td id="L128" class="blob-num js-line-number" data-line-number="128"></td>
        <td id="LC128" class="blob-code js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L129" class="blob-num js-line-number" data-line-number="129"></td>
        <td id="LC129" class="blob-code js-file-line">#<span class="pl-k">endif</span></td>
      </tr>
      <tr>
        <td id="L130" class="blob-num js-line-number" data-line-number="130"></td>
        <td id="LC130" class="blob-code js-file-line">    </td>
      </tr>
      <tr>
        <td id="L131" class="blob-num js-line-number" data-line-number="131"></td>
        <td id="LC131" class="blob-code js-file-line">    <span class="pl-k">inline</span> <span class="pl-k">void</span> <span class="pl-en">version</span> (<span class="pl-k">int</span> *major_, <span class="pl-k">int</span> *minor_, <span class="pl-k">int</span> *patch_)</td>
      </tr>
      <tr>
        <td id="L132" class="blob-num js-line-number" data-line-number="132"></td>
        <td id="LC132" class="blob-code js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L133" class="blob-num js-line-number" data-line-number="133"></td>
        <td id="LC133" class="blob-code js-file-line">        <span class="pl-c1">zmq_version</span> (major_, minor_, patch_);</td>
      </tr>
      <tr>
        <td id="L134" class="blob-num js-line-number" data-line-number="134"></td>
        <td id="LC134" class="blob-code js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L135" class="blob-num js-line-number" data-line-number="135"></td>
        <td id="LC135" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L136" class="blob-num js-line-number" data-line-number="136"></td>
        <td id="LC136" class="blob-code js-file-line">    <span class="pl-k">class</span> <span class="pl-en">message_t</span></td>
      </tr>
      <tr>
        <td id="L137" class="blob-num js-line-number" data-line-number="137"></td>
        <td id="LC137" class="blob-code js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L138" class="blob-num js-line-number" data-line-number="138"></td>
        <td id="LC138" class="blob-code js-file-line">        <span class="pl-k">friend</span> <span class="pl-k">class</span> <span class="pl-en">socket_t</span>;</td>
      </tr>
      <tr>
        <td id="L139" class="blob-num js-line-number" data-line-number="139"></td>
        <td id="LC139" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L140" class="blob-num js-line-number" data-line-number="140"></td>
        <td id="LC140" class="blob-code js-file-line">    <span class="pl-k">public:</span></td>
      </tr>
      <tr>
        <td id="L141" class="blob-num js-line-number" data-line-number="141"></td>
        <td id="LC141" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L142" class="blob-num js-line-number" data-line-number="142"></td>
        <td id="LC142" class="blob-code js-file-line">        <span class="pl-k">inline</span> <span class="pl-en">message_t</span> ()</td>
      </tr>
      <tr>
        <td id="L143" class="blob-num js-line-number" data-line-number="143"></td>
        <td id="LC143" class="blob-code js-file-line">        {</td>
      </tr>
      <tr>
        <td id="L144" class="blob-num js-line-number" data-line-number="144"></td>
        <td id="LC144" class="blob-code js-file-line">            <span class="pl-k">int</span> rc = <span class="pl-c1">zmq_msg_init</span> (&amp;msg);</td>
      </tr>
      <tr>
        <td id="L145" class="blob-num js-line-number" data-line-number="145"></td>
        <td id="LC145" class="blob-code js-file-line">            <span class="pl-k">if</span> (rc != <span class="pl-c1">0</span>)</td>
      </tr>
      <tr>
        <td id="L146" class="blob-num js-line-number" data-line-number="146"></td>
        <td id="LC146" class="blob-code js-file-line">                <span class="pl-k">throw</span> <span class="pl-smi">error_t</span> ();</td>
      </tr>
      <tr>
        <td id="L147" class="blob-num js-line-number" data-line-number="147"></td>
        <td id="LC147" class="blob-code js-file-line">        }</td>
      </tr>
      <tr>
        <td id="L148" class="blob-num js-line-number" data-line-number="148"></td>
        <td id="LC148" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L149" class="blob-num js-line-number" data-line-number="149"></td>
        <td id="LC149" class="blob-code js-file-line">        <span class="pl-k">inline</span> <span class="pl-k">explicit</span> <span class="pl-en">message_t</span> (<span class="pl-c1">size_t</span> size_)</td>
      </tr>
      <tr>
        <td id="L150" class="blob-num js-line-number" data-line-number="150"></td>
        <td id="LC150" class="blob-code js-file-line">        {</td>
      </tr>
      <tr>
        <td id="L151" class="blob-num js-line-number" data-line-number="151"></td>
        <td id="LC151" class="blob-code js-file-line">            <span class="pl-k">int</span> rc = <span class="pl-c1">zmq_msg_init_size</span> (&amp;msg, size_);</td>
      </tr>
      <tr>
        <td id="L152" class="blob-num js-line-number" data-line-number="152"></td>
        <td id="LC152" class="blob-code js-file-line">            <span class="pl-k">if</span> (rc != <span class="pl-c1">0</span>)</td>
      </tr>
      <tr>
        <td id="L153" class="blob-num js-line-number" data-line-number="153"></td>
        <td id="LC153" class="blob-code js-file-line">                <span class="pl-k">throw</span> <span class="pl-smi">error_t</span> ();</td>
      </tr>
      <tr>
        <td id="L154" class="blob-num js-line-number" data-line-number="154"></td>
        <td id="LC154" class="blob-code js-file-line">        }</td>
      </tr>
      <tr>
        <td id="L155" class="blob-num js-line-number" data-line-number="155"></td>
        <td id="LC155" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L156" class="blob-num js-line-number" data-line-number="156"></td>
        <td id="LC156" class="blob-code js-file-line">        <span class="pl-k">inline</span> <span class="pl-en">message_t</span> (<span class="pl-k">void</span> *data_, <span class="pl-c1">size_t</span> size_, free_fn *ffn_,</td>
      </tr>
      <tr>
        <td id="L157" class="blob-num js-line-number" data-line-number="157"></td>
        <td id="LC157" class="blob-code js-file-line">            <span class="pl-k">void</span> *hint_ = <span class="pl-c1">NULL</span>)</td>
      </tr>
      <tr>
        <td id="L158" class="blob-num js-line-number" data-line-number="158"></td>
        <td id="LC158" class="blob-code js-file-line">        {</td>
      </tr>
      <tr>
        <td id="L159" class="blob-num js-line-number" data-line-number="159"></td>
        <td id="LC159" class="blob-code js-file-line">            <span class="pl-k">int</span> rc = <span class="pl-c1">zmq_msg_init_data</span> (&amp;msg, data_, size_, ffn_, hint_);</td>
      </tr>
      <tr>
        <td id="L160" class="blob-num js-line-number" data-line-number="160"></td>
        <td id="LC160" class="blob-code js-file-line">            <span class="pl-k">if</span> (rc != <span class="pl-c1">0</span>)</td>
      </tr>
      <tr>
        <td id="L161" class="blob-num js-line-number" data-line-number="161"></td>
        <td id="LC161" class="blob-code js-file-line">                <span class="pl-k">throw</span> <span class="pl-smi">error_t</span> ();</td>
      </tr>
      <tr>
        <td id="L162" class="blob-num js-line-number" data-line-number="162"></td>
        <td id="LC162" class="blob-code js-file-line">        }</td>
      </tr>
      <tr>
        <td id="L163" class="blob-num js-line-number" data-line-number="163"></td>
        <td id="LC163" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L164" class="blob-num js-line-number" data-line-number="164"></td>
        <td id="LC164" class="blob-code js-file-line">#<span class="pl-k">ifdef</span> ZMQ_HAS_RVALUE_REFS</td>
      </tr>
      <tr>
        <td id="L165" class="blob-num js-line-number" data-line-number="165"></td>
        <td id="LC165" class="blob-code js-file-line">        <span class="pl-k">inline</span> <span class="pl-en">message_t</span> (<span class="pl-c1">message_t</span> &amp;&amp;rhs) : msg (rhs.msg)</td>
      </tr>
      <tr>
        <td id="L166" class="blob-num js-line-number" data-line-number="166"></td>
        <td id="LC166" class="blob-code js-file-line">        {</td>
      </tr>
      <tr>
        <td id="L167" class="blob-num js-line-number" data-line-number="167"></td>
        <td id="LC167" class="blob-code js-file-line">            <span class="pl-k">int</span> rc = <span class="pl-c1">zmq_msg_init</span> (&amp;rhs.<span class="pl-smi">msg</span>);</td>
      </tr>
      <tr>
        <td id="L168" class="blob-num js-line-number" data-line-number="168"></td>
        <td id="LC168" class="blob-code js-file-line">            <span class="pl-k">if</span> (rc != <span class="pl-c1">0</span>)</td>
      </tr>
      <tr>
        <td id="L169" class="blob-num js-line-number" data-line-number="169"></td>
        <td id="LC169" class="blob-code js-file-line">                <span class="pl-k">throw</span> <span class="pl-smi">error_t</span> ();</td>
      </tr>
      <tr>
        <td id="L170" class="blob-num js-line-number" data-line-number="170"></td>
        <td id="LC170" class="blob-code js-file-line">        }</td>
      </tr>
      <tr>
        <td id="L171" class="blob-num js-line-number" data-line-number="171"></td>
        <td id="LC171" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L172" class="blob-num js-line-number" data-line-number="172"></td>
        <td id="LC172" class="blob-code js-file-line">        <span class="pl-k">inline</span> <span class="pl-c1">message_t</span> &amp;<span class="pl-k">operator</span> = (<span class="pl-c1">message_t</span> &amp;&amp;rhs)</td>
      </tr>
      <tr>
        <td id="L173" class="blob-num js-line-number" data-line-number="173"></td>
        <td id="LC173" class="blob-code js-file-line">        {</td>
      </tr>
      <tr>
        <td id="L174" class="blob-num js-line-number" data-line-number="174"></td>
        <td id="LC174" class="blob-code js-file-line">            <span class="pl-c1">std::swap</span> (msg, rhs.<span class="pl-smi">msg</span>);</td>
      </tr>
      <tr>
        <td id="L175" class="blob-num js-line-number" data-line-number="175"></td>
        <td id="LC175" class="blob-code js-file-line">            <span class="pl-k">return</span> *<span class="pl-v">this</span>;</td>
      </tr>
      <tr>
        <td id="L176" class="blob-num js-line-number" data-line-number="176"></td>
        <td id="LC176" class="blob-code js-file-line">        }</td>
      </tr>
      <tr>
        <td id="L177" class="blob-num js-line-number" data-line-number="177"></td>
        <td id="LC177" class="blob-code js-file-line">#<span class="pl-k">endif</span></td>
      </tr>
      <tr>
        <td id="L178" class="blob-num js-line-number" data-line-number="178"></td>
        <td id="LC178" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L179" class="blob-num js-line-number" data-line-number="179"></td>
        <td id="LC179" class="blob-code js-file-line">        <span class="pl-k">inline</span> <span class="pl-en">~message_t</span> ()</td>
      </tr>
      <tr>
        <td id="L180" class="blob-num js-line-number" data-line-number="180"></td>
        <td id="LC180" class="blob-code js-file-line">        {</td>
      </tr>
      <tr>
        <td id="L181" class="blob-num js-line-number" data-line-number="181"></td>
        <td id="LC181" class="blob-code js-file-line">            <span class="pl-k">int</span> rc = <span class="pl-c1">zmq_msg_close</span> (&amp;msg);</td>
      </tr>
      <tr>
        <td id="L182" class="blob-num js-line-number" data-line-number="182"></td>
        <td id="LC182" class="blob-code js-file-line">            <span class="pl-c1">ZMQ_ASSERT</span> (rc == <span class="pl-c1">0</span>);</td>
      </tr>
      <tr>
        <td id="L183" class="blob-num js-line-number" data-line-number="183"></td>
        <td id="LC183" class="blob-code js-file-line">        }</td>
      </tr>
      <tr>
        <td id="L184" class="blob-num js-line-number" data-line-number="184"></td>
        <td id="LC184" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L185" class="blob-num js-line-number" data-line-number="185"></td>
        <td id="LC185" class="blob-code js-file-line">        <span class="pl-k">inline</span> <span class="pl-k">void</span> <span class="pl-en">rebuild</span> ()</td>
      </tr>
      <tr>
        <td id="L186" class="blob-num js-line-number" data-line-number="186"></td>
        <td id="LC186" class="blob-code js-file-line">        {</td>
      </tr>
      <tr>
        <td id="L187" class="blob-num js-line-number" data-line-number="187"></td>
        <td id="LC187" class="blob-code js-file-line">            <span class="pl-k">int</span> rc = <span class="pl-c1">zmq_msg_close</span> (&amp;msg);</td>
      </tr>
      <tr>
        <td id="L188" class="blob-num js-line-number" data-line-number="188"></td>
        <td id="LC188" class="blob-code js-file-line">            <span class="pl-k">if</span> (rc != <span class="pl-c1">0</span>)</td>
      </tr>
      <tr>
        <td id="L189" class="blob-num js-line-number" data-line-number="189"></td>
        <td id="LC189" class="blob-code js-file-line">                <span class="pl-k">throw</span> <span class="pl-smi">error_t</span> ();</td>
      </tr>
      <tr>
        <td id="L190" class="blob-num js-line-number" data-line-number="190"></td>
        <td id="LC190" class="blob-code js-file-line">            rc = <span class="pl-c1">zmq_msg_init</span> (&amp;msg);</td>
      </tr>
      <tr>
        <td id="L191" class="blob-num js-line-number" data-line-number="191"></td>
        <td id="LC191" class="blob-code js-file-line">            <span class="pl-k">if</span> (rc != <span class="pl-c1">0</span>)</td>
      </tr>
      <tr>
        <td id="L192" class="blob-num js-line-number" data-line-number="192"></td>
        <td id="LC192" class="blob-code js-file-line">                <span class="pl-k">throw</span> <span class="pl-smi">error_t</span> ();</td>
      </tr>
      <tr>
        <td id="L193" class="blob-num js-line-number" data-line-number="193"></td>
        <td id="LC193" class="blob-code js-file-line">        }</td>
      </tr>
      <tr>
        <td id="L194" class="blob-num js-line-number" data-line-number="194"></td>
        <td id="LC194" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L195" class="blob-num js-line-number" data-line-number="195"></td>
        <td id="LC195" class="blob-code js-file-line">        <span class="pl-k">inline</span> <span class="pl-k">void</span> <span class="pl-en">rebuild</span> (<span class="pl-c1">size_t</span> size_)</td>
      </tr>
      <tr>
        <td id="L196" class="blob-num js-line-number" data-line-number="196"></td>
        <td id="LC196" class="blob-code js-file-line">        {</td>
      </tr>
      <tr>
        <td id="L197" class="blob-num js-line-number" data-line-number="197"></td>
        <td id="LC197" class="blob-code js-file-line">            <span class="pl-k">int</span> rc = <span class="pl-c1">zmq_msg_close</span> (&amp;msg);</td>
      </tr>
      <tr>
        <td id="L198" class="blob-num js-line-number" data-line-number="198"></td>
        <td id="LC198" class="blob-code js-file-line">            <span class="pl-k">if</span> (rc != <span class="pl-c1">0</span>)</td>
      </tr>
      <tr>
        <td id="L199" class="blob-num js-line-number" data-line-number="199"></td>
        <td id="LC199" class="blob-code js-file-line">                <span class="pl-k">throw</span> <span class="pl-smi">error_t</span> ();</td>
      </tr>
      <tr>
        <td id="L200" class="blob-num js-line-number" data-line-number="200"></td>
        <td id="LC200" class="blob-code js-file-line">            rc = <span class="pl-c1">zmq_msg_init_size</span> (&amp;msg, size_);</td>
      </tr>
      <tr>
        <td id="L201" class="blob-num js-line-number" data-line-number="201"></td>
        <td id="LC201" class="blob-code js-file-line">            <span class="pl-k">if</span> (rc != <span class="pl-c1">0</span>)</td>
      </tr>
      <tr>
        <td id="L202" class="blob-num js-line-number" data-line-number="202"></td>
        <td id="LC202" class="blob-code js-file-line">                <span class="pl-k">throw</span> <span class="pl-smi">error_t</span> ();</td>
      </tr>
      <tr>
        <td id="L203" class="blob-num js-line-number" data-line-number="203"></td>
        <td id="LC203" class="blob-code js-file-line">        }</td>
      </tr>
      <tr>
        <td id="L204" class="blob-num js-line-number" data-line-number="204"></td>
        <td id="LC204" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L205" class="blob-num js-line-number" data-line-number="205"></td>
        <td id="LC205" class="blob-code js-file-line">        <span class="pl-k">inline</span> <span class="pl-k">void</span> <span class="pl-en">rebuild</span> (<span class="pl-k">void</span> *data_, <span class="pl-c1">size_t</span> size_, free_fn *ffn_,</td>
      </tr>
      <tr>
        <td id="L206" class="blob-num js-line-number" data-line-number="206"></td>
        <td id="LC206" class="blob-code js-file-line">            <span class="pl-k">void</span> *hint_ = <span class="pl-c1">NULL</span>)</td>
      </tr>
      <tr>
        <td id="L207" class="blob-num js-line-number" data-line-number="207"></td>
        <td id="LC207" class="blob-code js-file-line">        {</td>
      </tr>
      <tr>
        <td id="L208" class="blob-num js-line-number" data-line-number="208"></td>
        <td id="LC208" class="blob-code js-file-line">            <span class="pl-k">int</span> rc = <span class="pl-c1">zmq_msg_close</span> (&amp;msg);</td>
      </tr>
      <tr>
        <td id="L209" class="blob-num js-line-number" data-line-number="209"></td>
        <td id="LC209" class="blob-code js-file-line">            <span class="pl-k">if</span> (rc != <span class="pl-c1">0</span>)</td>
      </tr>
      <tr>
        <td id="L210" class="blob-num js-line-number" data-line-number="210"></td>
        <td id="LC210" class="blob-code js-file-line">                <span class="pl-k">throw</span> <span class="pl-smi">error_t</span> ();</td>
      </tr>
      <tr>
        <td id="L211" class="blob-num js-line-number" data-line-number="211"></td>
        <td id="LC211" class="blob-code js-file-line">            rc = <span class="pl-c1">zmq_msg_init_data</span> (&amp;msg, data_, size_, ffn_, hint_);</td>
      </tr>
      <tr>
        <td id="L212" class="blob-num js-line-number" data-line-number="212"></td>
        <td id="LC212" class="blob-code js-file-line">            <span class="pl-k">if</span> (rc != <span class="pl-c1">0</span>)</td>
      </tr>
      <tr>
        <td id="L213" class="blob-num js-line-number" data-line-number="213"></td>
        <td id="LC213" class="blob-code js-file-line">                <span class="pl-k">throw</span> <span class="pl-smi">error_t</span> ();</td>
      </tr>
      <tr>
        <td id="L214" class="blob-num js-line-number" data-line-number="214"></td>
        <td id="LC214" class="blob-code js-file-line">        }</td>
      </tr>
      <tr>
        <td id="L215" class="blob-num js-line-number" data-line-number="215"></td>
        <td id="LC215" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L216" class="blob-num js-line-number" data-line-number="216"></td>
        <td id="LC216" class="blob-code js-file-line">        <span class="pl-k">inline</span> <span class="pl-k">void</span> <span class="pl-en">move</span> (<span class="pl-c1">message_t</span> *msg_)</td>
      </tr>
      <tr>
        <td id="L217" class="blob-num js-line-number" data-line-number="217"></td>
        <td id="LC217" class="blob-code js-file-line">        {</td>
      </tr>
      <tr>
        <td id="L218" class="blob-num js-line-number" data-line-number="218"></td>
        <td id="LC218" class="blob-code js-file-line">            <span class="pl-k">int</span> rc = <span class="pl-c1">zmq_msg_move</span> (&amp;msg, &amp;(msg_-&gt;msg));</td>
      </tr>
      <tr>
        <td id="L219" class="blob-num js-line-number" data-line-number="219"></td>
        <td id="LC219" class="blob-code js-file-line">            <span class="pl-k">if</span> (rc != <span class="pl-c1">0</span>)</td>
      </tr>
      <tr>
        <td id="L220" class="blob-num js-line-number" data-line-number="220"></td>
        <td id="LC220" class="blob-code js-file-line">                <span class="pl-k">throw</span> <span class="pl-smi">error_t</span> ();</td>
      </tr>
      <tr>
        <td id="L221" class="blob-num js-line-number" data-line-number="221"></td>
        <td id="LC221" class="blob-code js-file-line">        }</td>
      </tr>
      <tr>
        <td id="L222" class="blob-num js-line-number" data-line-number="222"></td>
        <td id="LC222" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L223" class="blob-num js-line-number" data-line-number="223"></td>
        <td id="LC223" class="blob-code js-file-line">        <span class="pl-k">inline</span> <span class="pl-k">void</span> <span class="pl-en">copy</span> (<span class="pl-c1">message_t</span> *msg_)</td>
      </tr>
      <tr>
        <td id="L224" class="blob-num js-line-number" data-line-number="224"></td>
        <td id="LC224" class="blob-code js-file-line">        {</td>
      </tr>
      <tr>
        <td id="L225" class="blob-num js-line-number" data-line-number="225"></td>
        <td id="LC225" class="blob-code js-file-line">            <span class="pl-k">int</span> rc = <span class="pl-c1">zmq_msg_copy</span> (&amp;msg, &amp;(msg_-&gt;msg));</td>
      </tr>
      <tr>
        <td id="L226" class="blob-num js-line-number" data-line-number="226"></td>
        <td id="LC226" class="blob-code js-file-line">            <span class="pl-k">if</span> (rc != <span class="pl-c1">0</span>)</td>
      </tr>
      <tr>
        <td id="L227" class="blob-num js-line-number" data-line-number="227"></td>
        <td id="LC227" class="blob-code js-file-line">                <span class="pl-k">throw</span> <span class="pl-smi">error_t</span> ();</td>
      </tr>
      <tr>
        <td id="L228" class="blob-num js-line-number" data-line-number="228"></td>
        <td id="LC228" class="blob-code js-file-line">        }</td>
      </tr>
      <tr>
        <td id="L229" class="blob-num js-line-number" data-line-number="229"></td>
        <td id="LC229" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L230" class="blob-num js-line-number" data-line-number="230"></td>
        <td id="LC230" class="blob-code js-file-line">        <span class="pl-k">inline</span> <span class="pl-k">bool</span> <span class="pl-en">more</span> ()</td>
      </tr>
      <tr>
        <td id="L231" class="blob-num js-line-number" data-line-number="231"></td>
        <td id="LC231" class="blob-code js-file-line">        {</td>
      </tr>
      <tr>
        <td id="L232" class="blob-num js-line-number" data-line-number="232"></td>
        <td id="LC232" class="blob-code js-file-line">            <span class="pl-k">int</span> rc = <span class="pl-c1">zmq_msg_more</span> (&amp;msg);</td>
      </tr>
      <tr>
        <td id="L233" class="blob-num js-line-number" data-line-number="233"></td>
        <td id="LC233" class="blob-code js-file-line">            <span class="pl-k">return</span> rc != <span class="pl-c1">0</span>;</td>
      </tr>
      <tr>
        <td id="L234" class="blob-num js-line-number" data-line-number="234"></td>
        <td id="LC234" class="blob-code js-file-line">        }</td>
      </tr>
      <tr>
        <td id="L235" class="blob-num js-line-number" data-line-number="235"></td>
        <td id="LC235" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L236" class="blob-num js-line-number" data-line-number="236"></td>
        <td id="LC236" class="blob-code js-file-line">        <span class="pl-k">inline</span> <span class="pl-k">void</span> *<span class="pl-en">data</span> ()</td>
      </tr>
      <tr>
        <td id="L237" class="blob-num js-line-number" data-line-number="237"></td>
        <td id="LC237" class="blob-code js-file-line">        {</td>
      </tr>
      <tr>
        <td id="L238" class="blob-num js-line-number" data-line-number="238"></td>
        <td id="LC238" class="blob-code js-file-line">            <span class="pl-k">return</span> <span class="pl-c1">zmq_msg_data</span> (&amp;msg);</td>
      </tr>
      <tr>
        <td id="L239" class="blob-num js-line-number" data-line-number="239"></td>
        <td id="LC239" class="blob-code js-file-line">        }</td>
      </tr>
      <tr>
        <td id="L240" class="blob-num js-line-number" data-line-number="240"></td>
        <td id="LC240" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L241" class="blob-num js-line-number" data-line-number="241"></td>
        <td id="LC241" class="blob-code js-file-line">        <span class="pl-k">inline</span> <span class="pl-k">const</span> <span class="pl-k">void</span>* <span class="pl-en">data</span> () <span class="pl-k">const</span></td>
      </tr>
      <tr>
        <td id="L242" class="blob-num js-line-number" data-line-number="242"></td>
        <td id="LC242" class="blob-code js-file-line">        {</td>
      </tr>
      <tr>
        <td id="L243" class="blob-num js-line-number" data-line-number="243"></td>
        <td id="LC243" class="blob-code js-file-line">            <span class="pl-k">return</span> <span class="pl-c1">zmq_msg_data</span> (<span class="pl-k">const_cast</span>&lt;<span class="pl-c1">zmq_msg_t</span>*&gt;(&amp;msg));</td>
      </tr>
      <tr>
        <td id="L244" class="blob-num js-line-number" data-line-number="244"></td>
        <td id="LC244" class="blob-code js-file-line">        }</td>
      </tr>
      <tr>
        <td id="L245" class="blob-num js-line-number" data-line-number="245"></td>
        <td id="LC245" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L246" class="blob-num js-line-number" data-line-number="246"></td>
        <td id="LC246" class="blob-code js-file-line">        <span class="pl-k">inline</span> <span class="pl-c1">size_t</span> <span class="pl-en">size</span> () <span class="pl-k">const</span></td>
      </tr>
      <tr>
        <td id="L247" class="blob-num js-line-number" data-line-number="247"></td>
        <td id="LC247" class="blob-code js-file-line">        {</td>
      </tr>
      <tr>
        <td id="L248" class="blob-num js-line-number" data-line-number="248"></td>
        <td id="LC248" class="blob-code js-file-line">            <span class="pl-k">return</span> <span class="pl-c1">zmq_msg_size</span> (<span class="pl-k">const_cast</span>&lt;<span class="pl-c1">zmq_msg_t</span>*&gt;(&amp;msg));</td>
      </tr>
      <tr>
        <td id="L249" class="blob-num js-line-number" data-line-number="249"></td>
        <td id="LC249" class="blob-code js-file-line">        }</td>
      </tr>
      <tr>
        <td id="L250" class="blob-num js-line-number" data-line-number="250"></td>
        <td id="LC250" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L251" class="blob-num js-line-number" data-line-number="251"></td>
        <td id="LC251" class="blob-code js-file-line">    <span class="pl-k">private:</span></td>
      </tr>
      <tr>
        <td id="L252" class="blob-num js-line-number" data-line-number="252"></td>
        <td id="LC252" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L253" class="blob-num js-line-number" data-line-number="253"></td>
        <td id="LC253" class="blob-code js-file-line">        <span class="pl-c">//  The underlying message</span></td>
      </tr>
      <tr>
        <td id="L254" class="blob-num js-line-number" data-line-number="254"></td>
        <td id="LC254" class="blob-code js-file-line">        <span class="pl-c1">zmq_msg_t</span> msg;</td>
      </tr>
      <tr>
        <td id="L255" class="blob-num js-line-number" data-line-number="255"></td>
        <td id="LC255" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L256" class="blob-num js-line-number" data-line-number="256"></td>
        <td id="LC256" class="blob-code js-file-line">        <span class="pl-c">//  Disable implicit message copying, so that users won&#39;t use shared</span></td>
      </tr>
      <tr>
        <td id="L257" class="blob-num js-line-number" data-line-number="257"></td>
        <td id="LC257" class="blob-code js-file-line">        <span class="pl-c">//  messages (less efficient) without being aware of the fact.</span></td>
      </tr>
      <tr>
        <td id="L258" class="blob-num js-line-number" data-line-number="258"></td>
        <td id="LC258" class="blob-code js-file-line">        <span class="pl-en">message_t</span> (<span class="pl-k">const</span> <span class="pl-c1">message_t</span>&amp;);</td>
      </tr>
      <tr>
        <td id="L259" class="blob-num js-line-number" data-line-number="259"></td>
        <td id="LC259" class="blob-code js-file-line">        <span class="pl-k">void</span> <span class="pl-k">operator</span> = (<span class="pl-k">const</span> <span class="pl-c1">message_t</span>&amp;);</td>
      </tr>
      <tr>
        <td id="L260" class="blob-num js-line-number" data-line-number="260"></td>
        <td id="LC260" class="blob-code js-file-line">    };</td>
      </tr>
      <tr>
        <td id="L261" class="blob-num js-line-number" data-line-number="261"></td>
        <td id="LC261" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L262" class="blob-num js-line-number" data-line-number="262"></td>
        <td id="LC262" class="blob-code js-file-line">    <span class="pl-k">class</span> <span class="pl-en">context_t</span></td>
      </tr>
      <tr>
        <td id="L263" class="blob-num js-line-number" data-line-number="263"></td>
        <td id="LC263" class="blob-code js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L264" class="blob-num js-line-number" data-line-number="264"></td>
        <td id="LC264" class="blob-code js-file-line">        <span class="pl-k">friend</span> <span class="pl-k">class</span> <span class="pl-en">socket_t</span>;</td>
      </tr>
      <tr>
        <td id="L265" class="blob-num js-line-number" data-line-number="265"></td>
        <td id="LC265" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L266" class="blob-num js-line-number" data-line-number="266"></td>
        <td id="LC266" class="blob-code js-file-line">    <span class="pl-k">public:</span></td>
      </tr>
      <tr>
        <td id="L267" class="blob-num js-line-number" data-line-number="267"></td>
        <td id="LC267" class="blob-code js-file-line">        <span class="pl-k">inline</span> <span class="pl-en">context_t</span> ()</td>
      </tr>
      <tr>
        <td id="L268" class="blob-num js-line-number" data-line-number="268"></td>
        <td id="LC268" class="blob-code js-file-line">        {</td>
      </tr>
      <tr>
        <td id="L269" class="blob-num js-line-number" data-line-number="269"></td>
        <td id="LC269" class="blob-code js-file-line">            ptr = <span class="pl-c1">zmq_ctx_new</span> ();</td>
      </tr>
      <tr>
        <td id="L270" class="blob-num js-line-number" data-line-number="270"></td>
        <td id="LC270" class="blob-code js-file-line">            <span class="pl-k">if</span> (ptr == <span class="pl-c1">NULL</span>)</td>
      </tr>
      <tr>
        <td id="L271" class="blob-num js-line-number" data-line-number="271"></td>
        <td id="LC271" class="blob-code js-file-line">                <span class="pl-k">throw</span> <span class="pl-smi">error_t</span> ();</td>
      </tr>
      <tr>
        <td id="L272" class="blob-num js-line-number" data-line-number="272"></td>
        <td id="LC272" class="blob-code js-file-line">        }</td>
      </tr>
      <tr>
        <td id="L273" class="blob-num js-line-number" data-line-number="273"></td>
        <td id="LC273" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L274" class="blob-num js-line-number" data-line-number="274"></td>
        <td id="LC274" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L275" class="blob-num js-line-number" data-line-number="275"></td>
        <td id="LC275" class="blob-code js-file-line">        <span class="pl-k">inline</span> <span class="pl-k">explicit</span> <span class="pl-en">context_t</span> (<span class="pl-k">int</span> io_threads_, <span class="pl-k">int</span> max_sockets_ = ZMQ_MAX_SOCKETS_DFLT)</td>
      </tr>
      <tr>
        <td id="L276" class="blob-num js-line-number" data-line-number="276"></td>
        <td id="LC276" class="blob-code js-file-line">        {</td>
      </tr>
      <tr>
        <td id="L277" class="blob-num js-line-number" data-line-number="277"></td>
        <td id="LC277" class="blob-code js-file-line">            ptr = <span class="pl-c1">zmq_ctx_new</span> ();</td>
      </tr>
      <tr>
        <td id="L278" class="blob-num js-line-number" data-line-number="278"></td>
        <td id="LC278" class="blob-code js-file-line">            <span class="pl-k">if</span> (ptr == <span class="pl-c1">NULL</span>)</td>
      </tr>
      <tr>
        <td id="L279" class="blob-num js-line-number" data-line-number="279"></td>
        <td id="LC279" class="blob-code js-file-line">                <span class="pl-k">throw</span> <span class="pl-smi">error_t</span> ();</td>
      </tr>
      <tr>
        <td id="L280" class="blob-num js-line-number" data-line-number="280"></td>
        <td id="LC280" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L281" class="blob-num js-line-number" data-line-number="281"></td>
        <td id="LC281" class="blob-code js-file-line">            <span class="pl-k">int</span> rc = <span class="pl-c1">zmq_ctx_set</span> (ptr, ZMQ_IO_THREADS, io_threads_);</td>
      </tr>
      <tr>
        <td id="L282" class="blob-num js-line-number" data-line-number="282"></td>
        <td id="LC282" class="blob-code js-file-line">            <span class="pl-c1">ZMQ_ASSERT</span> (rc == <span class="pl-c1">0</span>);</td>
      </tr>
      <tr>
        <td id="L283" class="blob-num js-line-number" data-line-number="283"></td>
        <td id="LC283" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L284" class="blob-num js-line-number" data-line-number="284"></td>
        <td id="LC284" class="blob-code js-file-line">            rc = <span class="pl-c1">zmq_ctx_set</span> (ptr, ZMQ_MAX_SOCKETS, max_sockets_);</td>
      </tr>
      <tr>
        <td id="L285" class="blob-num js-line-number" data-line-number="285"></td>
        <td id="LC285" class="blob-code js-file-line">            <span class="pl-c1">ZMQ_ASSERT</span> (rc == <span class="pl-c1">0</span>);</td>
      </tr>
      <tr>
        <td id="L286" class="blob-num js-line-number" data-line-number="286"></td>
        <td id="LC286" class="blob-code js-file-line">        }</td>
      </tr>
      <tr>
        <td id="L287" class="blob-num js-line-number" data-line-number="287"></td>
        <td id="LC287" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L288" class="blob-num js-line-number" data-line-number="288"></td>
        <td id="LC288" class="blob-code js-file-line">#<span class="pl-k">ifdef</span> ZMQ_HAS_RVALUE_REFS</td>
      </tr>
      <tr>
        <td id="L289" class="blob-num js-line-number" data-line-number="289"></td>
        <td id="LC289" class="blob-code js-file-line">        <span class="pl-k">inline</span> <span class="pl-en">context_t</span> (<span class="pl-c1">context_t</span> &amp;&amp;rhs) : ptr (rhs.ptr)</td>
      </tr>
      <tr>
        <td id="L290" class="blob-num js-line-number" data-line-number="290"></td>
        <td id="LC290" class="blob-code js-file-line">        {</td>
      </tr>
      <tr>
        <td id="L291" class="blob-num js-line-number" data-line-number="291"></td>
        <td id="LC291" class="blob-code js-file-line">            rhs.<span class="pl-smi">ptr</span> = <span class="pl-c1">NULL</span>;</td>
      </tr>
      <tr>
        <td id="L292" class="blob-num js-line-number" data-line-number="292"></td>
        <td id="LC292" class="blob-code js-file-line">        }</td>
      </tr>
      <tr>
        <td id="L293" class="blob-num js-line-number" data-line-number="293"></td>
        <td id="LC293" class="blob-code js-file-line">        <span class="pl-k">inline</span> <span class="pl-c1">context_t</span> &amp;<span class="pl-k">operator</span> = (<span class="pl-c1">context_t</span> &amp;&amp;rhs)</td>
      </tr>
      <tr>
        <td id="L294" class="blob-num js-line-number" data-line-number="294"></td>
        <td id="LC294" class="blob-code js-file-line">        {</td>
      </tr>
      <tr>
        <td id="L295" class="blob-num js-line-number" data-line-number="295"></td>
        <td id="LC295" class="blob-code js-file-line">            <span class="pl-c1">std::swap</span> (ptr, rhs.<span class="pl-smi">ptr</span>);</td>
      </tr>
      <tr>
        <td id="L296" class="blob-num js-line-number" data-line-number="296"></td>
        <td id="LC296" class="blob-code js-file-line">            <span class="pl-k">return</span> *<span class="pl-v">this</span>;</td>
      </tr>
      <tr>
        <td id="L297" class="blob-num js-line-number" data-line-number="297"></td>
        <td id="LC297" class="blob-code js-file-line">        }</td>
      </tr>
      <tr>
        <td id="L298" class="blob-num js-line-number" data-line-number="298"></td>
        <td id="LC298" class="blob-code js-file-line">#<span class="pl-k">endif</span></td>
      </tr>
      <tr>
        <td id="L299" class="blob-num js-line-number" data-line-number="299"></td>
        <td id="LC299" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L300" class="blob-num js-line-number" data-line-number="300"></td>
        <td id="LC300" class="blob-code js-file-line">        <span class="pl-k">inline</span> <span class="pl-en">~context_t</span> ()</td>
      </tr>
      <tr>
        <td id="L301" class="blob-num js-line-number" data-line-number="301"></td>
        <td id="LC301" class="blob-code js-file-line">        {</td>
      </tr>
      <tr>
        <td id="L302" class="blob-num js-line-number" data-line-number="302"></td>
        <td id="LC302" class="blob-code js-file-line">            <span class="pl-c1">close</span>();</td>
      </tr>
      <tr>
        <td id="L303" class="blob-num js-line-number" data-line-number="303"></td>
        <td id="LC303" class="blob-code js-file-line">        }</td>
      </tr>
      <tr>
        <td id="L304" class="blob-num js-line-number" data-line-number="304"></td>
        <td id="LC304" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L305" class="blob-num js-line-number" data-line-number="305"></td>
        <td id="LC305" class="blob-code js-file-line">        <span class="pl-k">inline</span> <span class="pl-k">void</span> <span class="pl-en">close</span>()</td>
      </tr>
      <tr>
        <td id="L306" class="blob-num js-line-number" data-line-number="306"></td>
        <td id="LC306" class="blob-code js-file-line">        {</td>
      </tr>
      <tr>
        <td id="L307" class="blob-num js-line-number" data-line-number="307"></td>
        <td id="LC307" class="blob-code js-file-line">            <span class="pl-k">if</span> (ptr == <span class="pl-c1">NULL</span>)</td>
      </tr>
      <tr>
        <td id="L308" class="blob-num js-line-number" data-line-number="308"></td>
        <td id="LC308" class="blob-code js-file-line">                <span class="pl-k">return</span>;</td>
      </tr>
      <tr>
        <td id="L309" class="blob-num js-line-number" data-line-number="309"></td>
        <td id="LC309" class="blob-code js-file-line">            <span class="pl-k">int</span> rc = <span class="pl-c1">zmq_ctx_destroy</span> (ptr);</td>
      </tr>
      <tr>
        <td id="L310" class="blob-num js-line-number" data-line-number="310"></td>
        <td id="LC310" class="blob-code js-file-line">            <span class="pl-c1">ZMQ_ASSERT</span> (rc == <span class="pl-c1">0</span>);</td>
      </tr>
      <tr>
        <td id="L311" class="blob-num js-line-number" data-line-number="311"></td>
        <td id="LC311" class="blob-code js-file-line">            ptr = <span class="pl-c1">NULL</span>;</td>
      </tr>
      <tr>
        <td id="L312" class="blob-num js-line-number" data-line-number="312"></td>
        <td id="LC312" class="blob-code js-file-line">        }</td>
      </tr>
      <tr>
        <td id="L313" class="blob-num js-line-number" data-line-number="313"></td>
        <td id="LC313" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L314" class="blob-num js-line-number" data-line-number="314"></td>
        <td id="LC314" class="blob-code js-file-line">        <span class="pl-c">//  Be careful with this, it&#39;s probably only useful for</span></td>
      </tr>
      <tr>
        <td id="L315" class="blob-num js-line-number" data-line-number="315"></td>
        <td id="LC315" class="blob-code js-file-line">        <span class="pl-c">//  using the C api together with an existing C++ api.</span></td>
      </tr>
      <tr>
        <td id="L316" class="blob-num js-line-number" data-line-number="316"></td>
        <td id="LC316" class="blob-code js-file-line">        <span class="pl-c">//  Normally you should never need to use this.</span></td>
      </tr>
      <tr>
        <td id="L317" class="blob-num js-line-number" data-line-number="317"></td>
        <td id="LC317" class="blob-code js-file-line">        <span class="pl-k">inline</span> <span class="pl-k">operator</span> <span class="pl-k">void</span>* ()</td>
      </tr>
      <tr>
        <td id="L318" class="blob-num js-line-number" data-line-number="318"></td>
        <td id="LC318" class="blob-code js-file-line">        {</td>
      </tr>
      <tr>
        <td id="L319" class="blob-num js-line-number" data-line-number="319"></td>
        <td id="LC319" class="blob-code js-file-line">            <span class="pl-k">return</span> ptr;</td>
      </tr>
      <tr>
        <td id="L320" class="blob-num js-line-number" data-line-number="320"></td>
        <td id="LC320" class="blob-code js-file-line">        }</td>
      </tr>
      <tr>
        <td id="L321" class="blob-num js-line-number" data-line-number="321"></td>
        <td id="LC321" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L322" class="blob-num js-line-number" data-line-number="322"></td>
        <td id="LC322" class="blob-code js-file-line">    <span class="pl-k">private:</span></td>
      </tr>
      <tr>
        <td id="L323" class="blob-num js-line-number" data-line-number="323"></td>
        <td id="LC323" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L324" class="blob-num js-line-number" data-line-number="324"></td>
        <td id="LC324" class="blob-code js-file-line">        <span class="pl-k">void</span> *ptr;</td>
      </tr>
      <tr>
        <td id="L325" class="blob-num js-line-number" data-line-number="325"></td>
        <td id="LC325" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L326" class="blob-num js-line-number" data-line-number="326"></td>
        <td id="LC326" class="blob-code js-file-line">        <span class="pl-en">context_t</span> (<span class="pl-k">const</span> <span class="pl-c1">context_t</span>&amp;);</td>
      </tr>
      <tr>
        <td id="L327" class="blob-num js-line-number" data-line-number="327"></td>
        <td id="LC327" class="blob-code js-file-line">        <span class="pl-k">void</span> <span class="pl-k">operator</span> = (<span class="pl-k">const</span> <span class="pl-c1">context_t</span>&amp;);</td>
      </tr>
      <tr>
        <td id="L328" class="blob-num js-line-number" data-line-number="328"></td>
        <td id="LC328" class="blob-code js-file-line">    };</td>
      </tr>
      <tr>
        <td id="L329" class="blob-num js-line-number" data-line-number="329"></td>
        <td id="LC329" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L330" class="blob-num js-line-number" data-line-number="330"></td>
        <td id="LC330" class="blob-code js-file-line">    <span class="pl-k">class</span> <span class="pl-en">socket_t</span></td>
      </tr>
      <tr>
        <td id="L331" class="blob-num js-line-number" data-line-number="331"></td>
        <td id="LC331" class="blob-code js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L332" class="blob-num js-line-number" data-line-number="332"></td>
        <td id="LC332" class="blob-code js-file-line">        <span class="pl-k">friend</span> <span class="pl-k">class</span> <span class="pl-en">monitor_t</span>;</td>
      </tr>
      <tr>
        <td id="L333" class="blob-num js-line-number" data-line-number="333"></td>
        <td id="LC333" class="blob-code js-file-line">    <span class="pl-k">public:</span></td>
      </tr>
      <tr>
        <td id="L334" class="blob-num js-line-number" data-line-number="334"></td>
        <td id="LC334" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L335" class="blob-num js-line-number" data-line-number="335"></td>
        <td id="LC335" class="blob-code js-file-line">        <span class="pl-k">inline</span> <span class="pl-en">socket_t</span> (<span class="pl-c1">context_t</span> &amp;context_, <span class="pl-k">int</span> type_)</td>
      </tr>
      <tr>
        <td id="L336" class="blob-num js-line-number" data-line-number="336"></td>
        <td id="LC336" class="blob-code js-file-line">        {</td>
      </tr>
      <tr>
        <td id="L337" class="blob-num js-line-number" data-line-number="337"></td>
        <td id="LC337" class="blob-code js-file-line">            ctxptr = context_.<span class="pl-smi">ptr</span>;</td>
      </tr>
      <tr>
        <td id="L338" class="blob-num js-line-number" data-line-number="338"></td>
        <td id="LC338" class="blob-code js-file-line">            ptr = <span class="pl-c1">zmq_socket</span> (context_.<span class="pl-smi">ptr</span>, type_);</td>
      </tr>
      <tr>
        <td id="L339" class="blob-num js-line-number" data-line-number="339"></td>
        <td id="LC339" class="blob-code js-file-line">            <span class="pl-k">if</span> (ptr == <span class="pl-c1">NULL</span>)</td>
      </tr>
      <tr>
        <td id="L340" class="blob-num js-line-number" data-line-number="340"></td>
        <td id="LC340" class="blob-code js-file-line">                <span class="pl-k">throw</span> <span class="pl-smi">error_t</span> ();</td>
      </tr>
      <tr>
        <td id="L341" class="blob-num js-line-number" data-line-number="341"></td>
        <td id="LC341" class="blob-code js-file-line">        }</td>
      </tr>
      <tr>
        <td id="L342" class="blob-num js-line-number" data-line-number="342"></td>
        <td id="LC342" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L343" class="blob-num js-line-number" data-line-number="343"></td>
        <td id="LC343" class="blob-code js-file-line">#<span class="pl-k">ifdef</span> ZMQ_HAS_RVALUE_REFS</td>
      </tr>
      <tr>
        <td id="L344" class="blob-num js-line-number" data-line-number="344"></td>
        <td id="LC344" class="blob-code js-file-line">        <span class="pl-k">inline</span> <span class="pl-en">socket_t</span>(<span class="pl-c1">socket_t</span>&amp;&amp; rhs) : ptr(rhs.ptr)</td>
      </tr>
      <tr>
        <td id="L345" class="blob-num js-line-number" data-line-number="345"></td>
        <td id="LC345" class="blob-code js-file-line">        {</td>
      </tr>
      <tr>
        <td id="L346" class="blob-num js-line-number" data-line-number="346"></td>
        <td id="LC346" class="blob-code js-file-line">            rhs.<span class="pl-smi">ptr</span> = <span class="pl-c1">NULL</span>;</td>
      </tr>
      <tr>
        <td id="L347" class="blob-num js-line-number" data-line-number="347"></td>
        <td id="LC347" class="blob-code js-file-line">        }</td>
      </tr>
      <tr>
        <td id="L348" class="blob-num js-line-number" data-line-number="348"></td>
        <td id="LC348" class="blob-code js-file-line">        <span class="pl-k">inline</span> <span class="pl-c1">socket_t</span>&amp; <span class="pl-k">operator</span>=(<span class="pl-c1">socket_t</span>&amp;&amp; rhs)</td>
      </tr>
      <tr>
        <td id="L349" class="blob-num js-line-number" data-line-number="349"></td>
        <td id="LC349" class="blob-code js-file-line">        {</td>
      </tr>
      <tr>
        <td id="L350" class="blob-num js-line-number" data-line-number="350"></td>
        <td id="LC350" class="blob-code js-file-line">            <span class="pl-c1">std::swap</span>(ptr, rhs.<span class="pl-smi">ptr</span>);</td>
      </tr>
      <tr>
        <td id="L351" class="blob-num js-line-number" data-line-number="351"></td>
        <td id="LC351" class="blob-code js-file-line">            <span class="pl-k">return</span> *<span class="pl-v">this</span>;</td>
      </tr>
      <tr>
        <td id="L352" class="blob-num js-line-number" data-line-number="352"></td>
        <td id="LC352" class="blob-code js-file-line">        }</td>
      </tr>
      <tr>
        <td id="L353" class="blob-num js-line-number" data-line-number="353"></td>
        <td id="LC353" class="blob-code js-file-line">#<span class="pl-k">endif</span></td>
      </tr>
      <tr>
        <td id="L354" class="blob-num js-line-number" data-line-number="354"></td>
        <td id="LC354" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L355" class="blob-num js-line-number" data-line-number="355"></td>
        <td id="LC355" class="blob-code js-file-line">        <span class="pl-k">inline</span> <span class="pl-en">~socket_t</span> ()</td>
      </tr>
      <tr>
        <td id="L356" class="blob-num js-line-number" data-line-number="356"></td>
        <td id="LC356" class="blob-code js-file-line">        {</td>
      </tr>
      <tr>
        <td id="L357" class="blob-num js-line-number" data-line-number="357"></td>
        <td id="LC357" class="blob-code js-file-line">            <span class="pl-c1">close</span>();</td>
      </tr>
      <tr>
        <td id="L358" class="blob-num js-line-number" data-line-number="358"></td>
        <td id="LC358" class="blob-code js-file-line">        }</td>
      </tr>
      <tr>
        <td id="L359" class="blob-num js-line-number" data-line-number="359"></td>
        <td id="LC359" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L360" class="blob-num js-line-number" data-line-number="360"></td>
        <td id="LC360" class="blob-code js-file-line">        <span class="pl-k">inline</span> <span class="pl-k">operator</span> <span class="pl-k">void</span>* ()</td>
      </tr>
      <tr>
        <td id="L361" class="blob-num js-line-number" data-line-number="361"></td>
        <td id="LC361" class="blob-code js-file-line">        {</td>
      </tr>
      <tr>
        <td id="L362" class="blob-num js-line-number" data-line-number="362"></td>
        <td id="LC362" class="blob-code js-file-line">            <span class="pl-k">return</span> ptr;</td>
      </tr>
      <tr>
        <td id="L363" class="blob-num js-line-number" data-line-number="363"></td>
        <td id="LC363" class="blob-code js-file-line">        }</td>
      </tr>
      <tr>
        <td id="L364" class="blob-num js-line-number" data-line-number="364"></td>
        <td id="LC364" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L365" class="blob-num js-line-number" data-line-number="365"></td>
        <td id="LC365" class="blob-code js-file-line">        <span class="pl-k">inline</span> <span class="pl-k">void</span> <span class="pl-en">close</span>()</td>
      </tr>
      <tr>
        <td id="L366" class="blob-num js-line-number" data-line-number="366"></td>
        <td id="LC366" class="blob-code js-file-line">        {</td>
      </tr>
      <tr>
        <td id="L367" class="blob-num js-line-number" data-line-number="367"></td>
        <td id="LC367" class="blob-code js-file-line">            <span class="pl-k">if</span>(ptr == <span class="pl-c1">NULL</span>)</td>
      </tr>
      <tr>
        <td id="L368" class="blob-num js-line-number" data-line-number="368"></td>
        <td id="LC368" class="blob-code js-file-line">                <span class="pl-c">// already closed</span></td>
      </tr>
      <tr>
        <td id="L369" class="blob-num js-line-number" data-line-number="369"></td>
        <td id="LC369" class="blob-code js-file-line">                <span class="pl-k">return</span> ;</td>
      </tr>
      <tr>
        <td id="L370" class="blob-num js-line-number" data-line-number="370"></td>
        <td id="LC370" class="blob-code js-file-line">            <span class="pl-k">int</span> rc = <span class="pl-c1">zmq_close</span> (ptr);</td>
      </tr>
      <tr>
        <td id="L371" class="blob-num js-line-number" data-line-number="371"></td>
        <td id="LC371" class="blob-code js-file-line">            <span class="pl-c1">ZMQ_ASSERT</span> (rc == <span class="pl-c1">0</span>);</td>
      </tr>
      <tr>
        <td id="L372" class="blob-num js-line-number" data-line-number="372"></td>
        <td id="LC372" class="blob-code js-file-line">            ptr = <span class="pl-c1">0</span> ;</td>
      </tr>
      <tr>
        <td id="L373" class="blob-num js-line-number" data-line-number="373"></td>
        <td id="LC373" class="blob-code js-file-line">        }</td>
      </tr>
      <tr>
        <td id="L374" class="blob-num js-line-number" data-line-number="374"></td>
        <td id="LC374" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L375" class="blob-num js-line-number" data-line-number="375"></td>
        <td id="LC375" class="blob-code js-file-line">        <span class="pl-k">inline</span> <span class="pl-k">void</span> <span class="pl-en">setsockopt</span> (<span class="pl-k">int</span> option_, <span class="pl-k">const</span> <span class="pl-k">void</span> *optval_,</td>
      </tr>
      <tr>
        <td id="L376" class="blob-num js-line-number" data-line-number="376"></td>
        <td id="LC376" class="blob-code js-file-line">            <span class="pl-c1">size_t</span> optvallen_)</td>
      </tr>
      <tr>
        <td id="L377" class="blob-num js-line-number" data-line-number="377"></td>
        <td id="LC377" class="blob-code js-file-line">        {</td>
      </tr>
      <tr>
        <td id="L378" class="blob-num js-line-number" data-line-number="378"></td>
        <td id="LC378" class="blob-code js-file-line">            <span class="pl-k">int</span> rc = <span class="pl-c1">zmq_setsockopt</span> (ptr, option_, optval_, optvallen_);</td>
      </tr>
      <tr>
        <td id="L379" class="blob-num js-line-number" data-line-number="379"></td>
        <td id="LC379" class="blob-code js-file-line">            <span class="pl-k">if</span> (rc != <span class="pl-c1">0</span>)</td>
      </tr>
      <tr>
        <td id="L380" class="blob-num js-line-number" data-line-number="380"></td>
        <td id="LC380" class="blob-code js-file-line">                <span class="pl-k">throw</span> <span class="pl-smi">error_t</span> ();</td>
      </tr>
      <tr>
        <td id="L381" class="blob-num js-line-number" data-line-number="381"></td>
        <td id="LC381" class="blob-code js-file-line">        }</td>
      </tr>
      <tr>
        <td id="L382" class="blob-num js-line-number" data-line-number="382"></td>
        <td id="LC382" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L383" class="blob-num js-line-number" data-line-number="383"></td>
        <td id="LC383" class="blob-code js-file-line">        <span class="pl-k">inline</span> <span class="pl-k">void</span> <span class="pl-en">getsockopt</span> (<span class="pl-k">int</span> option_, <span class="pl-k">void</span> *optval_,</td>
      </tr>
      <tr>
        <td id="L384" class="blob-num js-line-number" data-line-number="384"></td>
        <td id="LC384" class="blob-code js-file-line">            <span class="pl-c1">size_t</span> *optvallen_)</td>
      </tr>
      <tr>
        <td id="L385" class="blob-num js-line-number" data-line-number="385"></td>
        <td id="LC385" class="blob-code js-file-line">        {</td>
      </tr>
      <tr>
        <td id="L386" class="blob-num js-line-number" data-line-number="386"></td>
        <td id="LC386" class="blob-code js-file-line">            <span class="pl-k">int</span> rc = <span class="pl-c1">zmq_getsockopt</span> (ptr, option_, optval_, optvallen_);</td>
      </tr>
      <tr>
        <td id="L387" class="blob-num js-line-number" data-line-number="387"></td>
        <td id="LC387" class="blob-code js-file-line">            <span class="pl-k">if</span> (rc != <span class="pl-c1">0</span>)</td>
      </tr>
      <tr>
        <td id="L388" class="blob-num js-line-number" data-line-number="388"></td>
        <td id="LC388" class="blob-code js-file-line">                <span class="pl-k">throw</span> <span class="pl-smi">error_t</span> ();</td>
      </tr>
      <tr>
        <td id="L389" class="blob-num js-line-number" data-line-number="389"></td>
        <td id="LC389" class="blob-code js-file-line">        }</td>
      </tr>
      <tr>
        <td id="L390" class="blob-num js-line-number" data-line-number="390"></td>
        <td id="LC390" class="blob-code js-file-line">        </td>
      </tr>
      <tr>
        <td id="L391" class="blob-num js-line-number" data-line-number="391"></td>
        <td id="LC391" class="blob-code js-file-line">        <span class="pl-k">inline</span> <span class="pl-k">void</span> <span class="pl-en">bind</span> (<span class="pl-k">const</span> <span class="pl-k">char</span> *addr_)</td>
      </tr>
      <tr>
        <td id="L392" class="blob-num js-line-number" data-line-number="392"></td>
        <td id="LC392" class="blob-code js-file-line">        {</td>
      </tr>
      <tr>
        <td id="L393" class="blob-num js-line-number" data-line-number="393"></td>
        <td id="LC393" class="blob-code js-file-line">            <span class="pl-k">int</span> rc = <span class="pl-c1">zmq_bind</span> (ptr, addr_);</td>
      </tr>
      <tr>
        <td id="L394" class="blob-num js-line-number" data-line-number="394"></td>
        <td id="LC394" class="blob-code js-file-line">            <span class="pl-k">if</span> (rc != <span class="pl-c1">0</span>)</td>
      </tr>
      <tr>
        <td id="L395" class="blob-num js-line-number" data-line-number="395"></td>
        <td id="LC395" class="blob-code js-file-line">                <span class="pl-k">throw</span> <span class="pl-smi">error_t</span> ();</td>
      </tr>
      <tr>
        <td id="L396" class="blob-num js-line-number" data-line-number="396"></td>
        <td id="LC396" class="blob-code js-file-line">        }</td>
      </tr>
      <tr>
        <td id="L397" class="blob-num js-line-number" data-line-number="397"></td>
        <td id="LC397" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L398" class="blob-num js-line-number" data-line-number="398"></td>
        <td id="LC398" class="blob-code js-file-line">        <span class="pl-k">inline</span> <span class="pl-k">void</span> <span class="pl-en">unbind</span> (<span class="pl-k">const</span> <span class="pl-k">char</span> *addr_)</td>
      </tr>
      <tr>
        <td id="L399" class="blob-num js-line-number" data-line-number="399"></td>
        <td id="LC399" class="blob-code js-file-line">        {</td>
      </tr>
      <tr>
        <td id="L400" class="blob-num js-line-number" data-line-number="400"></td>
        <td id="LC400" class="blob-code js-file-line">            <span class="pl-k">int</span> rc = <span class="pl-c1">zmq_unbind</span> (ptr, addr_);</td>
      </tr>
      <tr>
        <td id="L401" class="blob-num js-line-number" data-line-number="401"></td>
        <td id="LC401" class="blob-code js-file-line">            <span class="pl-k">if</span> (rc != <span class="pl-c1">0</span>)</td>
      </tr>
      <tr>
        <td id="L402" class="blob-num js-line-number" data-line-number="402"></td>
        <td id="LC402" class="blob-code js-file-line">                <span class="pl-k">throw</span> <span class="pl-smi">error_t</span> ();</td>
      </tr>
      <tr>
        <td id="L403" class="blob-num js-line-number" data-line-number="403"></td>
        <td id="LC403" class="blob-code js-file-line">        }</td>
      </tr>
      <tr>
        <td id="L404" class="blob-num js-line-number" data-line-number="404"></td>
        <td id="LC404" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L405" class="blob-num js-line-number" data-line-number="405"></td>
        <td id="LC405" class="blob-code js-file-line">        <span class="pl-k">inline</span> <span class="pl-k">void</span> <span class="pl-en">connect</span> (<span class="pl-k">const</span> <span class="pl-k">char</span> *addr_)</td>
      </tr>
      <tr>
        <td id="L406" class="blob-num js-line-number" data-line-number="406"></td>
        <td id="LC406" class="blob-code js-file-line">        {</td>
      </tr>
      <tr>
        <td id="L407" class="blob-num js-line-number" data-line-number="407"></td>
        <td id="LC407" class="blob-code js-file-line">            <span class="pl-k">int</span> rc = <span class="pl-c1">zmq_connect</span> (ptr, addr_);</td>
      </tr>
      <tr>
        <td id="L408" class="blob-num js-line-number" data-line-number="408"></td>
        <td id="LC408" class="blob-code js-file-line">            <span class="pl-k">if</span> (rc != <span class="pl-c1">0</span>)</td>
      </tr>
      <tr>
        <td id="L409" class="blob-num js-line-number" data-line-number="409"></td>
        <td id="LC409" class="blob-code js-file-line">                <span class="pl-k">throw</span> <span class="pl-smi">error_t</span> ();</td>
      </tr>
      <tr>
        <td id="L410" class="blob-num js-line-number" data-line-number="410"></td>
        <td id="LC410" class="blob-code js-file-line">        }</td>
      </tr>
      <tr>
        <td id="L411" class="blob-num js-line-number" data-line-number="411"></td>
        <td id="LC411" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L412" class="blob-num js-line-number" data-line-number="412"></td>
        <td id="LC412" class="blob-code js-file-line">        <span class="pl-k">inline</span> <span class="pl-k">void</span> <span class="pl-en">disconnect</span> (<span class="pl-k">const</span> <span class="pl-k">char</span> *addr_)</td>
      </tr>
      <tr>
        <td id="L413" class="blob-num js-line-number" data-line-number="413"></td>
        <td id="LC413" class="blob-code js-file-line">        {</td>
      </tr>
      <tr>
        <td id="L414" class="blob-num js-line-number" data-line-number="414"></td>
        <td id="LC414" class="blob-code js-file-line">            <span class="pl-k">int</span> rc = <span class="pl-c1">zmq_disconnect</span> (ptr, addr_);</td>
      </tr>
      <tr>
        <td id="L415" class="blob-num js-line-number" data-line-number="415"></td>
        <td id="LC415" class="blob-code js-file-line">            <span class="pl-k">if</span> (rc != <span class="pl-c1">0</span>)</td>
      </tr>
      <tr>
        <td id="L416" class="blob-num js-line-number" data-line-number="416"></td>
        <td id="LC416" class="blob-code js-file-line">                <span class="pl-k">throw</span> <span class="pl-smi">error_t</span> ();</td>
      </tr>
      <tr>
        <td id="L417" class="blob-num js-line-number" data-line-number="417"></td>
        <td id="LC417" class="blob-code js-file-line">        }</td>
      </tr>
      <tr>
        <td id="L418" class="blob-num js-line-number" data-line-number="418"></td>
        <td id="LC418" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L419" class="blob-num js-line-number" data-line-number="419"></td>
        <td id="LC419" class="blob-code js-file-line">        <span class="pl-k">inline</span> <span class="pl-k">bool</span> <span class="pl-en">connected</span>()</td>
      </tr>
      <tr>
        <td id="L420" class="blob-num js-line-number" data-line-number="420"></td>
        <td id="LC420" class="blob-code js-file-line">        {</td>
      </tr>
      <tr>
        <td id="L421" class="blob-num js-line-number" data-line-number="421"></td>
        <td id="LC421" class="blob-code js-file-line">            <span class="pl-k">return</span>(ptr != <span class="pl-c1">NULL</span>);</td>
      </tr>
      <tr>
        <td id="L422" class="blob-num js-line-number" data-line-number="422"></td>
        <td id="LC422" class="blob-code js-file-line">        }</td>
      </tr>
      <tr>
        <td id="L423" class="blob-num js-line-number" data-line-number="423"></td>
        <td id="LC423" class="blob-code js-file-line">        </td>
      </tr>
      <tr>
        <td id="L424" class="blob-num js-line-number" data-line-number="424"></td>
        <td id="LC424" class="blob-code js-file-line">        <span class="pl-k">inline</span> <span class="pl-c1">size_t</span> <span class="pl-en">send</span> (<span class="pl-k">const</span> <span class="pl-k">void</span> *buf_, <span class="pl-c1">size_t</span> len_, <span class="pl-k">int</span> flags_ = <span class="pl-c1">0</span>)</td>
      </tr>
      <tr>
        <td id="L425" class="blob-num js-line-number" data-line-number="425"></td>
        <td id="LC425" class="blob-code js-file-line">        {</td>
      </tr>
      <tr>
        <td id="L426" class="blob-num js-line-number" data-line-number="426"></td>
        <td id="LC426" class="blob-code js-file-line">            <span class="pl-k">int</span> nbytes = <span class="pl-c1">zmq_send</span> (ptr, buf_, len_, flags_);</td>
      </tr>
      <tr>
        <td id="L427" class="blob-num js-line-number" data-line-number="427"></td>
        <td id="LC427" class="blob-code js-file-line">            <span class="pl-k">if</span> (nbytes &gt;= <span class="pl-c1">0</span>)</td>
      </tr>
      <tr>
        <td id="L428" class="blob-num js-line-number" data-line-number="428"></td>
        <td id="LC428" class="blob-code js-file-line">                <span class="pl-k">return</span> (<span class="pl-c1">size_t</span>) nbytes;</td>
      </tr>
      <tr>
        <td id="L429" class="blob-num js-line-number" data-line-number="429"></td>
        <td id="LC429" class="blob-code js-file-line">            <span class="pl-k">if</span> (<span class="pl-c1">zmq_errno</span> () == EAGAIN)</td>
      </tr>
      <tr>
        <td id="L430" class="blob-num js-line-number" data-line-number="430"></td>
        <td id="LC430" class="blob-code js-file-line">                <span class="pl-k">return</span> <span class="pl-c1">0</span>;</td>
      </tr>
      <tr>
        <td id="L431" class="blob-num js-line-number" data-line-number="431"></td>
        <td id="LC431" class="blob-code js-file-line">            <span class="pl-k">throw</span> <span class="pl-smi">error_t</span> ();</td>
      </tr>
      <tr>
        <td id="L432" class="blob-num js-line-number" data-line-number="432"></td>
        <td id="LC432" class="blob-code js-file-line">        }</td>
      </tr>
      <tr>
        <td id="L433" class="blob-num js-line-number" data-line-number="433"></td>
        <td id="LC433" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L434" class="blob-num js-line-number" data-line-number="434"></td>
        <td id="LC434" class="blob-code js-file-line">        <span class="pl-k">inline</span> <span class="pl-k">bool</span> <span class="pl-en">send</span> (<span class="pl-c1">message_t</span> &amp;msg_, <span class="pl-k">int</span> flags_ = <span class="pl-c1">0</span>)</td>
      </tr>
      <tr>
        <td id="L435" class="blob-num js-line-number" data-line-number="435"></td>
        <td id="LC435" class="blob-code js-file-line">        {</td>
      </tr>
      <tr>
        <td id="L436" class="blob-num js-line-number" data-line-number="436"></td>
        <td id="LC436" class="blob-code js-file-line">            <span class="pl-k">int</span> nbytes = <span class="pl-c1">zmq_msg_send</span> (&amp;(msg_.<span class="pl-smi">msg</span>), ptr, flags_);</td>
      </tr>
      <tr>
        <td id="L437" class="blob-num js-line-number" data-line-number="437"></td>
        <td id="LC437" class="blob-code js-file-line">            <span class="pl-k">if</span> (nbytes &gt;= <span class="pl-c1">0</span>)</td>
      </tr>
      <tr>
        <td id="L438" class="blob-num js-line-number" data-line-number="438"></td>
        <td id="LC438" class="blob-code js-file-line">                <span class="pl-k">return</span> <span class="pl-c1">true</span>;</td>
      </tr>
      <tr>
        <td id="L439" class="blob-num js-line-number" data-line-number="439"></td>
        <td id="LC439" class="blob-code js-file-line">            <span class="pl-k">if</span> (<span class="pl-c1">zmq_errno</span> () == EAGAIN)</td>
      </tr>
      <tr>
        <td id="L440" class="blob-num js-line-number" data-line-number="440"></td>
        <td id="LC440" class="blob-code js-file-line">                <span class="pl-k">return</span> <span class="pl-c1">false</span>;</td>
      </tr>
      <tr>
        <td id="L441" class="blob-num js-line-number" data-line-number="441"></td>
        <td id="LC441" class="blob-code js-file-line">            <span class="pl-k">throw</span> <span class="pl-smi">error_t</span> ();</td>
      </tr>
      <tr>
        <td id="L442" class="blob-num js-line-number" data-line-number="442"></td>
        <td id="LC442" class="blob-code js-file-line">        }</td>
      </tr>
      <tr>
        <td id="L443" class="blob-num js-line-number" data-line-number="443"></td>
        <td id="LC443" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L444" class="blob-num js-line-number" data-line-number="444"></td>
        <td id="LC444" class="blob-code js-file-line">#<span class="pl-k">ifdef</span> ZMQ_HAS_RVALUE_REFS</td>
      </tr>
      <tr>
        <td id="L445" class="blob-num js-line-number" data-line-number="445"></td>
        <td id="LC445" class="blob-code js-file-line">        <span class="pl-k">inline</span> <span class="pl-k">bool</span> <span class="pl-en">send</span> (<span class="pl-c1">message_t</span> &amp;&amp;msg_, <span class="pl-k">int</span> flags_ = <span class="pl-c1">0</span>)</td>
      </tr>
      <tr>
        <td id="L446" class="blob-num js-line-number" data-line-number="446"></td>
        <td id="LC446" class="blob-code js-file-line">        {</td>
      </tr>
      <tr>
        <td id="L447" class="blob-num js-line-number" data-line-number="447"></td>
        <td id="LC447" class="blob-code js-file-line">            <span class="pl-k">return</span> <span class="pl-c1">send</span>(msg_, flags_);</td>
      </tr>
      <tr>
        <td id="L448" class="blob-num js-line-number" data-line-number="448"></td>
        <td id="LC448" class="blob-code js-file-line">        }</td>
      </tr>
      <tr>
        <td id="L449" class="blob-num js-line-number" data-line-number="449"></td>
        <td id="LC449" class="blob-code js-file-line">#<span class="pl-k">endif</span></td>
      </tr>
      <tr>
        <td id="L450" class="blob-num js-line-number" data-line-number="450"></td>
        <td id="LC450" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L451" class="blob-num js-line-number" data-line-number="451"></td>
        <td id="LC451" class="blob-code js-file-line">        <span class="pl-k">inline</span> <span class="pl-c1">size_t</span> <span class="pl-en">recv</span> (<span class="pl-k">void</span> *buf_, <span class="pl-c1">size_t</span> len_, <span class="pl-k">int</span> flags_ = <span class="pl-c1">0</span>)</td>
      </tr>
      <tr>
        <td id="L452" class="blob-num js-line-number" data-line-number="452"></td>
        <td id="LC452" class="blob-code js-file-line">        {</td>
      </tr>
      <tr>
        <td id="L453" class="blob-num js-line-number" data-line-number="453"></td>
        <td id="LC453" class="blob-code js-file-line">            <span class="pl-k">int</span> nbytes = <span class="pl-c1">zmq_recv</span> (ptr, buf_, len_, flags_);</td>
      </tr>
      <tr>
        <td id="L454" class="blob-num js-line-number" data-line-number="454"></td>
        <td id="LC454" class="blob-code js-file-line">            <span class="pl-k">if</span> (nbytes &gt;= <span class="pl-c1">0</span>)</td>
      </tr>
      <tr>
        <td id="L455" class="blob-num js-line-number" data-line-number="455"></td>
        <td id="LC455" class="blob-code js-file-line">                <span class="pl-k">return</span> (<span class="pl-c1">size_t</span>) nbytes;</td>
      </tr>
      <tr>
        <td id="L456" class="blob-num js-line-number" data-line-number="456"></td>
        <td id="LC456" class="blob-code js-file-line">            <span class="pl-k">if</span> (<span class="pl-c1">zmq_errno</span> () == EAGAIN)</td>
      </tr>
      <tr>
        <td id="L457" class="blob-num js-line-number" data-line-number="457"></td>
        <td id="LC457" class="blob-code js-file-line">                <span class="pl-k">return</span> <span class="pl-c1">0</span>;</td>
      </tr>
      <tr>
        <td id="L458" class="blob-num js-line-number" data-line-number="458"></td>
        <td id="LC458" class="blob-code js-file-line">            <span class="pl-k">throw</span> <span class="pl-smi">error_t</span> ();</td>
      </tr>
      <tr>
        <td id="L459" class="blob-num js-line-number" data-line-number="459"></td>
        <td id="LC459" class="blob-code js-file-line">        }</td>
      </tr>
      <tr>
        <td id="L460" class="blob-num js-line-number" data-line-number="460"></td>
        <td id="LC460" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L461" class="blob-num js-line-number" data-line-number="461"></td>
        <td id="LC461" class="blob-code js-file-line">        <span class="pl-k">inline</span> <span class="pl-k">bool</span> <span class="pl-en">recv</span> (<span class="pl-c1">message_t</span> *msg_, <span class="pl-k">int</span> flags_ = <span class="pl-c1">0</span>)</td>
      </tr>
      <tr>
        <td id="L462" class="blob-num js-line-number" data-line-number="462"></td>
        <td id="LC462" class="blob-code js-file-line">        {</td>
      </tr>
      <tr>
        <td id="L463" class="blob-num js-line-number" data-line-number="463"></td>
        <td id="LC463" class="blob-code js-file-line">            <span class="pl-k">int</span> nbytes = <span class="pl-c1">zmq_msg_recv</span> (&amp;(msg_-&gt;msg), ptr, flags_);</td>
      </tr>
      <tr>
        <td id="L464" class="blob-num js-line-number" data-line-number="464"></td>
        <td id="LC464" class="blob-code js-file-line">            <span class="pl-k">if</span> (nbytes &gt;= <span class="pl-c1">0</span>)</td>
      </tr>
      <tr>
        <td id="L465" class="blob-num js-line-number" data-line-number="465"></td>
        <td id="LC465" class="blob-code js-file-line">                <span class="pl-k">return</span> <span class="pl-c1">true</span>;</td>
      </tr>
      <tr>
        <td id="L466" class="blob-num js-line-number" data-line-number="466"></td>
        <td id="LC466" class="blob-code js-file-line">            <span class="pl-k">if</span> (<span class="pl-c1">zmq_errno</span> () == EAGAIN)</td>
      </tr>
      <tr>
        <td id="L467" class="blob-num js-line-number" data-line-number="467"></td>
        <td id="LC467" class="blob-code js-file-line">                <span class="pl-k">return</span> <span class="pl-c1">false</span>;</td>
      </tr>
      <tr>
        <td id="L468" class="blob-num js-line-number" data-line-number="468"></td>
        <td id="LC468" class="blob-code js-file-line">            <span class="pl-k">throw</span> <span class="pl-smi">error_t</span> ();</td>
      </tr>
      <tr>
        <td id="L469" class="blob-num js-line-number" data-line-number="469"></td>
        <td id="LC469" class="blob-code js-file-line">        }</td>
      </tr>
      <tr>
        <td id="L470" class="blob-num js-line-number" data-line-number="470"></td>
        <td id="LC470" class="blob-code js-file-line">        </td>
      </tr>
      <tr>
        <td id="L471" class="blob-num js-line-number" data-line-number="471"></td>
        <td id="LC471" class="blob-code js-file-line">    <span class="pl-k">private:</span></td>
      </tr>
      <tr>
        <td id="L472" class="blob-num js-line-number" data-line-number="472"></td>
        <td id="LC472" class="blob-code js-file-line">        <span class="pl-k">void</span> *ptr;</td>
      </tr>
      <tr>
        <td id="L473" class="blob-num js-line-number" data-line-number="473"></td>
        <td id="LC473" class="blob-code js-file-line">        <span class="pl-k">void</span> *ctxptr;</td>
      </tr>
      <tr>
        <td id="L474" class="blob-num js-line-number" data-line-number="474"></td>
        <td id="LC474" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L475" class="blob-num js-line-number" data-line-number="475"></td>
        <td id="LC475" class="blob-code js-file-line">        <span class="pl-en">socket_t</span> (<span class="pl-k">const</span> <span class="pl-c1">socket_t</span>&amp;) ZMQ_DELETED_FUNCTION;</td>
      </tr>
      <tr>
        <td id="L476" class="blob-num js-line-number" data-line-number="476"></td>
        <td id="LC476" class="blob-code js-file-line">        <span class="pl-k">void</span> <span class="pl-k">operator</span> = (<span class="pl-k">const</span> <span class="pl-c1">socket_t</span>&amp;) ZMQ_DELETED_FUNCTION;</td>
      </tr>
      <tr>
        <td id="L477" class="blob-num js-line-number" data-line-number="477"></td>
        <td id="LC477" class="blob-code js-file-line">    };</td>
      </tr>
      <tr>
        <td id="L478" class="blob-num js-line-number" data-line-number="478"></td>
        <td id="LC478" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L479" class="blob-num js-line-number" data-line-number="479"></td>
        <td id="LC479" class="blob-code js-file-line">    <span class="pl-k">class</span> <span class="pl-en">monitor_t</span></td>
      </tr>
      <tr>
        <td id="L480" class="blob-num js-line-number" data-line-number="480"></td>
        <td id="LC480" class="blob-code js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L481" class="blob-num js-line-number" data-line-number="481"></td>
        <td id="LC481" class="blob-code js-file-line">    <span class="pl-k">public:</span></td>
      </tr>
      <tr>
        <td id="L482" class="blob-num js-line-number" data-line-number="482"></td>
        <td id="LC482" class="blob-code js-file-line">        <span class="pl-en">monitor_t</span>() : socketPtr(<span class="pl-c1">NULL</span>) {}</td>
      </tr>
      <tr>
        <td id="L483" class="blob-num js-line-number" data-line-number="483"></td>
        <td id="LC483" class="blob-code js-file-line">        <span class="pl-k">virtual</span> <span class="pl-en">~monitor_t</span>() {}</td>
      </tr>
      <tr>
        <td id="L484" class="blob-num js-line-number" data-line-number="484"></td>
        <td id="LC484" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L485" class="blob-num js-line-number" data-line-number="485"></td>
        <td id="LC485" class="blob-code js-file-line">        <span class="pl-k">void</span> <span class="pl-en">monitor</span>(<span class="pl-c1">socket_t</span> &amp;socket, <span class="pl-k">const</span> <span class="pl-k">char</span> *addr_, <span class="pl-k">int</span> events = ZMQ_EVENT_ALL)</td>
      </tr>
      <tr>
        <td id="L486" class="blob-num js-line-number" data-line-number="486"></td>
        <td id="LC486" class="blob-code js-file-line">        {</td>
      </tr>
      <tr>
        <td id="L487" class="blob-num js-line-number" data-line-number="487"></td>
        <td id="LC487" class="blob-code js-file-line">            <span class="pl-k">int</span> rc = <span class="pl-c1">zmq_socket_monitor</span>(socket.<span class="pl-smi">ptr</span>, addr_, events);</td>
      </tr>
      <tr>
        <td id="L488" class="blob-num js-line-number" data-line-number="488"></td>
        <td id="LC488" class="blob-code js-file-line">            <span class="pl-k">if</span> (rc != <span class="pl-c1">0</span>)</td>
      </tr>
      <tr>
        <td id="L489" class="blob-num js-line-number" data-line-number="489"></td>
        <td id="LC489" class="blob-code js-file-line">                <span class="pl-k">throw</span> <span class="pl-smi">error_t</span> ();</td>
      </tr>
      <tr>
        <td id="L490" class="blob-num js-line-number" data-line-number="490"></td>
        <td id="LC490" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L491" class="blob-num js-line-number" data-line-number="491"></td>
        <td id="LC491" class="blob-code js-file-line">            socketPtr = socket.<span class="pl-smi">ptr</span>;</td>
      </tr>
      <tr>
        <td id="L492" class="blob-num js-line-number" data-line-number="492"></td>
        <td id="LC492" class="blob-code js-file-line">            <span class="pl-k">void</span> *s = <span class="pl-c1">zmq_socket</span> (socket.<span class="pl-smi">ctxptr</span>, ZMQ_PAIR);</td>
      </tr>
      <tr>
        <td id="L493" class="blob-num js-line-number" data-line-number="493"></td>
        <td id="LC493" class="blob-code js-file-line">            <span class="pl-c1">assert</span> (s);</td>
      </tr>
      <tr>
        <td id="L494" class="blob-num js-line-number" data-line-number="494"></td>
        <td id="LC494" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L495" class="blob-num js-line-number" data-line-number="495"></td>
        <td id="LC495" class="blob-code js-file-line">            rc = <span class="pl-c1">zmq_connect</span> (s, addr_);</td>
      </tr>
      <tr>
        <td id="L496" class="blob-num js-line-number" data-line-number="496"></td>
        <td id="LC496" class="blob-code js-file-line">            <span class="pl-c1">assert</span> (rc == <span class="pl-c1">0</span>);</td>
      </tr>
      <tr>
        <td id="L497" class="blob-num js-line-number" data-line-number="497"></td>
        <td id="LC497" class="blob-code js-file-line">            </td>
      </tr>
      <tr>
        <td id="L498" class="blob-num js-line-number" data-line-number="498"></td>
        <td id="LC498" class="blob-code js-file-line">            <span class="pl-c1">on_monitor_started</span>();</td>
      </tr>
      <tr>
        <td id="L499" class="blob-num js-line-number" data-line-number="499"></td>
        <td id="LC499" class="blob-code js-file-line">            </td>
      </tr>
      <tr>
        <td id="L500" class="blob-num js-line-number" data-line-number="500"></td>
        <td id="LC500" class="blob-code js-file-line">            <span class="pl-k">while</span> (<span class="pl-c1">true</span>) {</td>
      </tr>
      <tr>
        <td id="L501" class="blob-num js-line-number" data-line-number="501"></td>
        <td id="LC501" class="blob-code js-file-line">                <span class="pl-c1">zmq_msg_t</span> eventMsg;</td>
      </tr>
      <tr>
        <td id="L502" class="blob-num js-line-number" data-line-number="502"></td>
        <td id="LC502" class="blob-code js-file-line">                <span class="pl-c1">zmq_msg_init</span> (&amp;eventMsg);</td>
      </tr>
      <tr>
        <td id="L503" class="blob-num js-line-number" data-line-number="503"></td>
        <td id="LC503" class="blob-code js-file-line">                rc = <span class="pl-c1">zmq_recvmsg</span> (s, &amp;eventMsg, <span class="pl-c1">0</span>);</td>
      </tr>
      <tr>
        <td id="L504" class="blob-num js-line-number" data-line-number="504"></td>
        <td id="LC504" class="blob-code js-file-line">                <span class="pl-k">if</span> (rc == -<span class="pl-c1">1</span> &amp;&amp; <span class="pl-c1">zmq_errno</span>() == ETERM)</td>
      </tr>
      <tr>
        <td id="L505" class="blob-num js-line-number" data-line-number="505"></td>
        <td id="LC505" class="blob-code js-file-line">                    <span class="pl-k">break</span>;</td>
      </tr>
      <tr>
        <td id="L506" class="blob-num js-line-number" data-line-number="506"></td>
        <td id="LC506" class="blob-code js-file-line">                <span class="pl-c1">assert</span> (rc != -<span class="pl-c1">1</span>);</td>
      </tr>
      <tr>
        <td id="L507" class="blob-num js-line-number" data-line-number="507"></td>
        <td id="LC507" class="blob-code js-file-line">#<span class="pl-k">if</span> ZMQ_VERSION_MAJOR &gt;= 4</td>
      </tr>
      <tr>
        <td id="L508" class="blob-num js-line-number" data-line-number="508"></td>
        <td id="LC508" class="blob-code js-file-line">                <span class="pl-k">const</span> <span class="pl-k">char</span>* data = <span class="pl-k">static_cast</span>&lt;<span class="pl-k">const</span> <span class="pl-k">char</span>*&gt;(<span class="pl-c1">zmq_msg_data</span>(&amp;eventMsg));</td>
      </tr>
      <tr>
        <td id="L509" class="blob-num js-line-number" data-line-number="509"></td>
        <td id="LC509" class="blob-code js-file-line">                <span class="pl-c1">zmq_event_t</span> msgEvent;</td>
      </tr>
      <tr>
        <td id="L510" class="blob-num js-line-number" data-line-number="510"></td>
        <td id="LC510" class="blob-code js-file-line">                <span class="pl-c1">memcpy</span>(&amp;msgEvent.<span class="pl-smi">event</span>, data, <span class="pl-k">sizeof</span>(<span class="pl-c1">uint16_t</span>)); data += <span class="pl-k">sizeof</span>(<span class="pl-c1">uint16_t</span>);</td>
      </tr>
      <tr>
        <td id="L511" class="blob-num js-line-number" data-line-number="511"></td>
        <td id="LC511" class="blob-code js-file-line">                <span class="pl-c1">memcpy</span>(&amp;msgEvent.<span class="pl-smi">value</span>, data, <span class="pl-k">sizeof</span>(<span class="pl-c1">int32_t</span>));</td>
      </tr>
      <tr>
        <td id="L512" class="blob-num js-line-number" data-line-number="512"></td>
        <td id="LC512" class="blob-code js-file-line">                <span class="pl-c1">zmq_event_t</span>* event = &amp;msgEvent;</td>
      </tr>
      <tr>
        <td id="L513" class="blob-num js-line-number" data-line-number="513"></td>
        <td id="LC513" class="blob-code js-file-line">#<span class="pl-k">else</span></td>
      </tr>
      <tr>
        <td id="L514" class="blob-num js-line-number" data-line-number="514"></td>
        <td id="LC514" class="blob-code js-file-line">                <span class="pl-c1">zmq_event_t</span>* event = <span class="pl-k">static_cast</span>&lt;<span class="pl-c1">zmq_event_t</span>*&gt;(<span class="pl-c1">zmq_msg_data</span>(&amp;eventMsg));</td>
      </tr>
      <tr>
        <td id="L515" class="blob-num js-line-number" data-line-number="515"></td>
        <td id="LC515" class="blob-code js-file-line">#<span class="pl-k">endif</span></td>
      </tr>
      <tr>
        <td id="L516" class="blob-num js-line-number" data-line-number="516"></td>
        <td id="LC516" class="blob-code js-file-line">                </td>
      </tr>
      <tr>
        <td id="L517" class="blob-num js-line-number" data-line-number="517"></td>
        <td id="LC517" class="blob-code js-file-line">#<span class="pl-k">ifdef</span> ZMQ_NEW_MONITOR_EVENT_LAYOUT</td>
      </tr>
      <tr>
        <td id="L518" class="blob-num js-line-number" data-line-number="518"></td>
        <td id="LC518" class="blob-code js-file-line">                <span class="pl-c1">zmq_msg_t</span> addrMsg;</td>
      </tr>
      <tr>
        <td id="L519" class="blob-num js-line-number" data-line-number="519"></td>
        <td id="LC519" class="blob-code js-file-line">                <span class="pl-c1">zmq_msg_init</span> (&amp;addrMsg);</td>
      </tr>
      <tr>
        <td id="L520" class="blob-num js-line-number" data-line-number="520"></td>
        <td id="LC520" class="blob-code js-file-line">                rc = <span class="pl-c1">zmq_recvmsg</span> (s, &amp;addrMsg, <span class="pl-c1">0</span>);</td>
      </tr>
      <tr>
        <td id="L521" class="blob-num js-line-number" data-line-number="521"></td>
        <td id="LC521" class="blob-code js-file-line">                <span class="pl-k">if</span> (rc == -<span class="pl-c1">1</span> &amp;&amp; <span class="pl-c1">zmq_errno</span>() == ETERM)</td>
      </tr>
      <tr>
        <td id="L522" class="blob-num js-line-number" data-line-number="522"></td>
        <td id="LC522" class="blob-code js-file-line">                    <span class="pl-k">break</span>;</td>
      </tr>
      <tr>
        <td id="L523" class="blob-num js-line-number" data-line-number="523"></td>
        <td id="LC523" class="blob-code js-file-line">                <span class="pl-c1">assert</span> (rc != -<span class="pl-c1">1</span>);</td>
      </tr>
      <tr>
        <td id="L524" class="blob-num js-line-number" data-line-number="524"></td>
        <td id="LC524" class="blob-code js-file-line">                <span class="pl-k">const</span> <span class="pl-k">char</span>* str = <span class="pl-k">static_cast</span>&lt;<span class="pl-k">const</span> <span class="pl-k">char</span>*&gt;(<span class="pl-c1">zmq_msg_data</span> (&amp;addrMsg));</td>
      </tr>
      <tr>
        <td id="L525" class="blob-num js-line-number" data-line-number="525"></td>
        <td id="LC525" class="blob-code js-file-line">                std::string <span class="pl-smi">address</span>(str, str + <span class="pl-c1">zmq_msg_size</span>(&amp;addrMsg));</td>
      </tr>
      <tr>
        <td id="L526" class="blob-num js-line-number" data-line-number="526"></td>
        <td id="LC526" class="blob-code js-file-line">                <span class="pl-c1">zmq_msg_close</span> (&amp;addrMsg);</td>
      </tr>
      <tr>
        <td id="L527" class="blob-num js-line-number" data-line-number="527"></td>
        <td id="LC527" class="blob-code js-file-line">#<span class="pl-k">else</span></td>
      </tr>
      <tr>
        <td id="L528" class="blob-num js-line-number" data-line-number="528"></td>
        <td id="LC528" class="blob-code js-file-line">                <span class="pl-c">// Bit of a hack, but all events in the zmq_event_t union have the same layout so this will work for all event types.</span></td>
      </tr>
      <tr>
        <td id="L529" class="blob-num js-line-number" data-line-number="529"></td>
        <td id="LC529" class="blob-code js-file-line">                std::string address = event-&gt;data.<span class="pl-smi">connected</span>.<span class="pl-smi">addr</span>;</td>
      </tr>
      <tr>
        <td id="L530" class="blob-num js-line-number" data-line-number="530"></td>
        <td id="LC530" class="blob-code js-file-line">#<span class="pl-k">endif</span></td>
      </tr>
      <tr>
        <td id="L531" class="blob-num js-line-number" data-line-number="531"></td>
        <td id="LC531" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L532" class="blob-num js-line-number" data-line-number="532"></td>
        <td id="LC532" class="blob-code js-file-line">#<span class="pl-k">ifdef</span> ZMQ_EVENT_MONITOR_STOPPED</td>
      </tr>
      <tr>
        <td id="L533" class="blob-num js-line-number" data-line-number="533"></td>
        <td id="LC533" class="blob-code js-file-line">                <span class="pl-k">if</span> (event-&gt;event == ZMQ_EVENT_MONITOR_STOPPED)</td>
      </tr>
      <tr>
        <td id="L534" class="blob-num js-line-number" data-line-number="534"></td>
        <td id="LC534" class="blob-code js-file-line">                    <span class="pl-k">break</span>;</td>
      </tr>
      <tr>
        <td id="L535" class="blob-num js-line-number" data-line-number="535"></td>
        <td id="LC535" class="blob-code js-file-line">#<span class="pl-k">endif</span></td>
      </tr>
      <tr>
        <td id="L536" class="blob-num js-line-number" data-line-number="536"></td>
        <td id="LC536" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L537" class="blob-num js-line-number" data-line-number="537"></td>
        <td id="LC537" class="blob-code js-file-line">                <span class="pl-k">switch</span> (event-&gt;event) {</td>
      </tr>
      <tr>
        <td id="L538" class="blob-num js-line-number" data-line-number="538"></td>
        <td id="LC538" class="blob-code js-file-line">                <span class="pl-k">case</span> ZMQ_EVENT_CONNECTED:</td>
      </tr>
      <tr>
        <td id="L539" class="blob-num js-line-number" data-line-number="539"></td>
        <td id="LC539" class="blob-code js-file-line">                    <span class="pl-c1">on_event_connected</span>(*event, address.<span class="pl-c1">c_str</span>());</td>
      </tr>
      <tr>
        <td id="L540" class="blob-num js-line-number" data-line-number="540"></td>
        <td id="LC540" class="blob-code js-file-line">                    <span class="pl-k">break</span>;</td>
      </tr>
      <tr>
        <td id="L541" class="blob-num js-line-number" data-line-number="541"></td>
        <td id="LC541" class="blob-code js-file-line">                <span class="pl-k">case</span> ZMQ_EVENT_CONNECT_DELAYED:</td>
      </tr>
      <tr>
        <td id="L542" class="blob-num js-line-number" data-line-number="542"></td>
        <td id="LC542" class="blob-code js-file-line">                    <span class="pl-c1">on_event_connect_delayed</span>(*event, address.<span class="pl-c1">c_str</span>());</td>
      </tr>
      <tr>
        <td id="L543" class="blob-num js-line-number" data-line-number="543"></td>
        <td id="LC543" class="blob-code js-file-line">                    <span class="pl-k">break</span>;</td>
      </tr>
      <tr>
        <td id="L544" class="blob-num js-line-number" data-line-number="544"></td>
        <td id="LC544" class="blob-code js-file-line">                <span class="pl-k">case</span> ZMQ_EVENT_CONNECT_RETRIED:</td>
      </tr>
      <tr>
        <td id="L545" class="blob-num js-line-number" data-line-number="545"></td>
        <td id="LC545" class="blob-code js-file-line">                    <span class="pl-c1">on_event_connect_retried</span>(*event, address.<span class="pl-c1">c_str</span>());</td>
      </tr>
      <tr>
        <td id="L546" class="blob-num js-line-number" data-line-number="546"></td>
        <td id="LC546" class="blob-code js-file-line">                    <span class="pl-k">break</span>;</td>
      </tr>
      <tr>
        <td id="L547" class="blob-num js-line-number" data-line-number="547"></td>
        <td id="LC547" class="blob-code js-file-line">                <span class="pl-k">case</span> ZMQ_EVENT_LISTENING:</td>
      </tr>
      <tr>
        <td id="L548" class="blob-num js-line-number" data-line-number="548"></td>
        <td id="LC548" class="blob-code js-file-line">                    <span class="pl-c1">on_event_listening</span>(*event, address.<span class="pl-c1">c_str</span>());</td>
      </tr>
      <tr>
        <td id="L549" class="blob-num js-line-number" data-line-number="549"></td>
        <td id="LC549" class="blob-code js-file-line">                    <span class="pl-k">break</span>;</td>
      </tr>
      <tr>
        <td id="L550" class="blob-num js-line-number" data-line-number="550"></td>
        <td id="LC550" class="blob-code js-file-line">                <span class="pl-k">case</span> ZMQ_EVENT_BIND_FAILED:</td>
      </tr>
      <tr>
        <td id="L551" class="blob-num js-line-number" data-line-number="551"></td>
        <td id="LC551" class="blob-code js-file-line">                    <span class="pl-c1">on_event_bind_failed</span>(*event, address.<span class="pl-c1">c_str</span>());</td>
      </tr>
      <tr>
        <td id="L552" class="blob-num js-line-number" data-line-number="552"></td>
        <td id="LC552" class="blob-code js-file-line">                    <span class="pl-k">break</span>;</td>
      </tr>
      <tr>
        <td id="L553" class="blob-num js-line-number" data-line-number="553"></td>
        <td id="LC553" class="blob-code js-file-line">                <span class="pl-k">case</span> ZMQ_EVENT_ACCEPTED:</td>
      </tr>
      <tr>
        <td id="L554" class="blob-num js-line-number" data-line-number="554"></td>
        <td id="LC554" class="blob-code js-file-line">                    <span class="pl-c1">on_event_accepted</span>(*event, address.<span class="pl-c1">c_str</span>());</td>
      </tr>
      <tr>
        <td id="L555" class="blob-num js-line-number" data-line-number="555"></td>
        <td id="LC555" class="blob-code js-file-line">                    <span class="pl-k">break</span>;</td>
      </tr>
      <tr>
        <td id="L556" class="blob-num js-line-number" data-line-number="556"></td>
        <td id="LC556" class="blob-code js-file-line">                <span class="pl-k">case</span> ZMQ_EVENT_ACCEPT_FAILED:</td>
      </tr>
      <tr>
        <td id="L557" class="blob-num js-line-number" data-line-number="557"></td>
        <td id="LC557" class="blob-code js-file-line">                    <span class="pl-c1">on_event_accept_failed</span>(*event, address.<span class="pl-c1">c_str</span>());</td>
      </tr>
      <tr>
        <td id="L558" class="blob-num js-line-number" data-line-number="558"></td>
        <td id="LC558" class="blob-code js-file-line">                    <span class="pl-k">break</span>;</td>
      </tr>
      <tr>
        <td id="L559" class="blob-num js-line-number" data-line-number="559"></td>
        <td id="LC559" class="blob-code js-file-line">                <span class="pl-k">case</span> ZMQ_EVENT_CLOSED:</td>
      </tr>
      <tr>
        <td id="L560" class="blob-num js-line-number" data-line-number="560"></td>
        <td id="LC560" class="blob-code js-file-line">                    <span class="pl-c1">on_event_closed</span>(*event, address.<span class="pl-c1">c_str</span>());</td>
      </tr>
      <tr>
        <td id="L561" class="blob-num js-line-number" data-line-number="561"></td>
        <td id="LC561" class="blob-code js-file-line">                    <span class="pl-k">break</span>;</td>
      </tr>
      <tr>
        <td id="L562" class="blob-num js-line-number" data-line-number="562"></td>
        <td id="LC562" class="blob-code js-file-line">                <span class="pl-k">case</span> ZMQ_EVENT_CLOSE_FAILED:</td>
      </tr>
      <tr>
        <td id="L563" class="blob-num js-line-number" data-line-number="563"></td>
        <td id="LC563" class="blob-code js-file-line">                    <span class="pl-c1">on_event_close_failed</span>(*event, address.<span class="pl-c1">c_str</span>());</td>
      </tr>
      <tr>
        <td id="L564" class="blob-num js-line-number" data-line-number="564"></td>
        <td id="LC564" class="blob-code js-file-line">                    <span class="pl-k">break</span>;</td>
      </tr>
      <tr>
        <td id="L565" class="blob-num js-line-number" data-line-number="565"></td>
        <td id="LC565" class="blob-code js-file-line">                <span class="pl-k">case</span> ZMQ_EVENT_DISCONNECTED:</td>
      </tr>
      <tr>
        <td id="L566" class="blob-num js-line-number" data-line-number="566"></td>
        <td id="LC566" class="blob-code js-file-line">                    <span class="pl-c1">on_event_disconnected</span>(*event, address.<span class="pl-c1">c_str</span>());</td>
      </tr>
      <tr>
        <td id="L567" class="blob-num js-line-number" data-line-number="567"></td>
        <td id="LC567" class="blob-code js-file-line">                    <span class="pl-k">break</span>;</td>
      </tr>
      <tr>
        <td id="L568" class="blob-num js-line-number" data-line-number="568"></td>
        <td id="LC568" class="blob-code js-file-line">                <span class="pl-k">default</span>:</td>
      </tr>
      <tr>
        <td id="L569" class="blob-num js-line-number" data-line-number="569"></td>
        <td id="LC569" class="blob-code js-file-line">                    <span class="pl-c1">on_event_unknown</span>(*event, address.<span class="pl-c1">c_str</span>());</td>
      </tr>
      <tr>
        <td id="L570" class="blob-num js-line-number" data-line-number="570"></td>
        <td id="LC570" class="blob-code js-file-line">                    <span class="pl-k">break</span>;</td>
      </tr>
      <tr>
        <td id="L571" class="blob-num js-line-number" data-line-number="571"></td>
        <td id="LC571" class="blob-code js-file-line">                }</td>
      </tr>
      <tr>
        <td id="L572" class="blob-num js-line-number" data-line-number="572"></td>
        <td id="LC572" class="blob-code js-file-line">                <span class="pl-c1">zmq_msg_close</span> (&amp;eventMsg);</td>
      </tr>
      <tr>
        <td id="L573" class="blob-num js-line-number" data-line-number="573"></td>
        <td id="LC573" class="blob-code js-file-line">            }</td>
      </tr>
      <tr>
        <td id="L574" class="blob-num js-line-number" data-line-number="574"></td>
        <td id="LC574" class="blob-code js-file-line">            <span class="pl-c1">zmq_close</span> (s);</td>
      </tr>
      <tr>
        <td id="L575" class="blob-num js-line-number" data-line-number="575"></td>
        <td id="LC575" class="blob-code js-file-line">            socketPtr = <span class="pl-c1">NULL</span>;</td>
      </tr>
      <tr>
        <td id="L576" class="blob-num js-line-number" data-line-number="576"></td>
        <td id="LC576" class="blob-code js-file-line">        }</td>
      </tr>
      <tr>
        <td id="L577" class="blob-num js-line-number" data-line-number="577"></td>
        <td id="LC577" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L578" class="blob-num js-line-number" data-line-number="578"></td>
        <td id="LC578" class="blob-code js-file-line">#<span class="pl-k">ifdef</span> ZMQ_EVENT_MONITOR_STOPPED</td>
      </tr>
      <tr>
        <td id="L579" class="blob-num js-line-number" data-line-number="579"></td>
        <td id="LC579" class="blob-code js-file-line">        <span class="pl-k">void</span> <span class="pl-en">abort</span>()</td>
      </tr>
      <tr>
        <td id="L580" class="blob-num js-line-number" data-line-number="580"></td>
        <td id="LC580" class="blob-code js-file-line">        {</td>
      </tr>
      <tr>
        <td id="L581" class="blob-num js-line-number" data-line-number="581"></td>
        <td id="LC581" class="blob-code js-file-line">            <span class="pl-k">if</span> (socketPtr)</td>
      </tr>
      <tr>
        <td id="L582" class="blob-num js-line-number" data-line-number="582"></td>
        <td id="LC582" class="blob-code js-file-line">                <span class="pl-c1">zmq_socket_monitor</span>(socketPtr, <span class="pl-c1">NULL</span>, <span class="pl-c1">0</span>);</td>
      </tr>
      <tr>
        <td id="L583" class="blob-num js-line-number" data-line-number="583"></td>
        <td id="LC583" class="blob-code js-file-line">        }</td>
      </tr>
      <tr>
        <td id="L584" class="blob-num js-line-number" data-line-number="584"></td>
        <td id="LC584" class="blob-code js-file-line">#<span class="pl-k">endif</span></td>
      </tr>
      <tr>
        <td id="L585" class="blob-num js-line-number" data-line-number="585"></td>
        <td id="LC585" class="blob-code js-file-line">        <span class="pl-k">virtual</span> <span class="pl-k">void</span> <span class="pl-en">on_monitor_started</span>() {}</td>
      </tr>
      <tr>
        <td id="L586" class="blob-num js-line-number" data-line-number="586"></td>
        <td id="LC586" class="blob-code js-file-line">        <span class="pl-k">virtual</span> <span class="pl-k">void</span> <span class="pl-en">on_event_connected</span>(<span class="pl-k">const</span> <span class="pl-c1">zmq_event_t</span> &amp;event_, <span class="pl-k">const</span> <span class="pl-k">char</span>* addr_) { (<span class="pl-k">void</span>)event_; (<span class="pl-k">void</span>)addr_; }</td>
      </tr>
      <tr>
        <td id="L587" class="blob-num js-line-number" data-line-number="587"></td>
        <td id="LC587" class="blob-code js-file-line">        <span class="pl-k">virtual</span> <span class="pl-k">void</span> <span class="pl-en">on_event_connect_delayed</span>(<span class="pl-k">const</span> <span class="pl-c1">zmq_event_t</span> &amp;event_, <span class="pl-k">const</span> <span class="pl-k">char</span>* addr_) { (<span class="pl-k">void</span>)event_; (<span class="pl-k">void</span>)addr_; }</td>
      </tr>
      <tr>
        <td id="L588" class="blob-num js-line-number" data-line-number="588"></td>
        <td id="LC588" class="blob-code js-file-line">        <span class="pl-k">virtual</span> <span class="pl-k">void</span> <span class="pl-en">on_event_connect_retried</span>(<span class="pl-k">const</span> <span class="pl-c1">zmq_event_t</span> &amp;event_, <span class="pl-k">const</span> <span class="pl-k">char</span>* addr_) { (<span class="pl-k">void</span>)event_; (<span class="pl-k">void</span>)addr_; }</td>
      </tr>
      <tr>
        <td id="L589" class="blob-num js-line-number" data-line-number="589"></td>
        <td id="LC589" class="blob-code js-file-line">        <span class="pl-k">virtual</span> <span class="pl-k">void</span> <span class="pl-en">on_event_listening</span>(<span class="pl-k">const</span> <span class="pl-c1">zmq_event_t</span> &amp;event_, <span class="pl-k">const</span> <span class="pl-k">char</span>* addr_) { (<span class="pl-k">void</span>)event_; (<span class="pl-k">void</span>)addr_; }</td>
      </tr>
      <tr>
        <td id="L590" class="blob-num js-line-number" data-line-number="590"></td>
        <td id="LC590" class="blob-code js-file-line">        <span class="pl-k">virtual</span> <span class="pl-k">void</span> <span class="pl-en">on_event_bind_failed</span>(<span class="pl-k">const</span> <span class="pl-c1">zmq_event_t</span> &amp;event_, <span class="pl-k">const</span> <span class="pl-k">char</span>* addr_) { (<span class="pl-k">void</span>)event_; (<span class="pl-k">void</span>)addr_; }</td>
      </tr>
      <tr>
        <td id="L591" class="blob-num js-line-number" data-line-number="591"></td>
        <td id="LC591" class="blob-code js-file-line">        <span class="pl-k">virtual</span> <span class="pl-k">void</span> <span class="pl-en">on_event_accepted</span>(<span class="pl-k">const</span> <span class="pl-c1">zmq_event_t</span> &amp;event_, <span class="pl-k">const</span> <span class="pl-k">char</span>* addr_) { (<span class="pl-k">void</span>)event_; (<span class="pl-k">void</span>)addr_; }</td>
      </tr>
      <tr>
        <td id="L592" class="blob-num js-line-number" data-line-number="592"></td>
        <td id="LC592" class="blob-code js-file-line">        <span class="pl-k">virtual</span> <span class="pl-k">void</span> <span class="pl-en">on_event_accept_failed</span>(<span class="pl-k">const</span> <span class="pl-c1">zmq_event_t</span> &amp;event_, <span class="pl-k">const</span> <span class="pl-k">char</span>* addr_) { (<span class="pl-k">void</span>)event_; (<span class="pl-k">void</span>)addr_; }</td>
      </tr>
      <tr>
        <td id="L593" class="blob-num js-line-number" data-line-number="593"></td>
        <td id="LC593" class="blob-code js-file-line">        <span class="pl-k">virtual</span> <span class="pl-k">void</span> <span class="pl-en">on_event_closed</span>(<span class="pl-k">const</span> <span class="pl-c1">zmq_event_t</span> &amp;event_, <span class="pl-k">const</span> <span class="pl-k">char</span>* addr_) { (<span class="pl-k">void</span>)event_; (<span class="pl-k">void</span>)addr_; }</td>
      </tr>
      <tr>
        <td id="L594" class="blob-num js-line-number" data-line-number="594"></td>
        <td id="LC594" class="blob-code js-file-line">        <span class="pl-k">virtual</span> <span class="pl-k">void</span> <span class="pl-en">on_event_close_failed</span>(<span class="pl-k">const</span> <span class="pl-c1">zmq_event_t</span> &amp;event_, <span class="pl-k">const</span> <span class="pl-k">char</span>* addr_) { (<span class="pl-k">void</span>)event_; (<span class="pl-k">void</span>)addr_; }</td>
      </tr>
      <tr>
        <td id="L595" class="blob-num js-line-number" data-line-number="595"></td>
        <td id="LC595" class="blob-code js-file-line">        <span class="pl-k">virtual</span> <span class="pl-k">void</span> <span class="pl-en">on_event_disconnected</span>(<span class="pl-k">const</span> <span class="pl-c1">zmq_event_t</span> &amp;event_, <span class="pl-k">const</span> <span class="pl-k">char</span>* addr_) { (<span class="pl-k">void</span>)event_; (<span class="pl-k">void</span>)addr_; }</td>
      </tr>
      <tr>
        <td id="L596" class="blob-num js-line-number" data-line-number="596"></td>
        <td id="LC596" class="blob-code js-file-line">        <span class="pl-k">virtual</span> <span class="pl-k">void</span> <span class="pl-en">on_event_unknown</span>(<span class="pl-k">const</span> <span class="pl-c1">zmq_event_t</span> &amp;event_, <span class="pl-k">const</span> <span class="pl-k">char</span>* addr_) { (<span class="pl-k">void</span>)event_; (<span class="pl-k">void</span>)addr_; }</td>
      </tr>
      <tr>
        <td id="L597" class="blob-num js-line-number" data-line-number="597"></td>
        <td id="LC597" class="blob-code js-file-line">    <span class="pl-k">private:</span></td>
      </tr>
      <tr>
        <td id="L598" class="blob-num js-line-number" data-line-number="598"></td>
        <td id="LC598" class="blob-code js-file-line">        <span class="pl-k">void</span>* socketPtr;</td>
      </tr>
      <tr>
        <td id="L599" class="blob-num js-line-number" data-line-number="599"></td>
        <td id="LC599" class="blob-code js-file-line">    };</td>
      </tr>
      <tr>
        <td id="L600" class="blob-num js-line-number" data-line-number="600"></td>
        <td id="LC600" class="blob-code js-file-line">}</td>
      </tr>
      <tr>
        <td id="L601" class="blob-num js-line-number" data-line-number="601"></td>
        <td id="LC601" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L602" class="blob-num js-line-number" data-line-number="602"></td>
        <td id="LC602" class="blob-code js-file-line">#<span class="pl-k">endif</span></td>
      </tr>
</table>

  </div>

</div>

<a href="#jump-to-line" rel="facebox[.linejump]" data-hotkey="l" style="display:none">Jump to Line</a>
<div id="jump-to-line" style="display:none">
  <form accept-charset="UTF-8" action="" class="js-jump-to-line-form" method="get"><div style="margin:0;padding:0;display:inline"><input name="utf8" type="hidden" value="&#x2713;" /></div>
    <input class="linejump-input js-jump-to-line-field" type="text" placeholder="Jump to line&hellip;" autofocus>
    <button type="submit" class="btn">Go</button>
</form></div>

        </div>

      </div><!-- /.repo-container -->
      <div class="modal-backdrop"></div>
    </div><!-- /.container -->
  </div><!-- /.site -->


    </div><!-- /.wrapper -->

      <div class="container">
  <div class="site-footer" role="contentinfo">
    <ul class="site-footer-links right">
        <li><a href="https://status.github.com/" data-ga-click="Footer, go to status, text:status">Status</a></li>
      <li><a href="https://developer.github.com" data-ga-click="Footer, go to api, text:api">API</a></li>
      <li><a href="https://training.github.com" data-ga-click="Footer, go to training, text:training">Training</a></li>
      <li><a href="https://shop.github.com" data-ga-click="Footer, go to shop, text:shop">Shop</a></li>
        <li><a href="https://github.com/blog" data-ga-click="Footer, go to blog, text:blog">Blog</a></li>
        <li><a href="https://github.com/about" data-ga-click="Footer, go to about, text:about">About</a></li>

    </ul>

    <a href="https://github.com" aria-label="Homepage">
      <span class="mega-octicon octicon-mark-github" title="GitHub"></span>
</a>
    <ul class="site-footer-links">
      <li>&copy; 2015 <span title="0.06206s from github-fe131-cp1-prd.iad.github.net">GitHub</span>, Inc.</li>
        <li><a href="https://github.com/site/terms" data-ga-click="Footer, go to terms, text:terms">Terms</a></li>
        <li><a href="https://github.com/site/privacy" data-ga-click="Footer, go to privacy, text:privacy">Privacy</a></li>
        <li><a href="https://github.com/security" data-ga-click="Footer, go to security, text:security">Security</a></li>
        <li><a href="https://github.com/contact" data-ga-click="Footer, go to contact, text:contact">Contact</a></li>
    </ul>
  </div>
</div>


    <div class="fullscreen-overlay js-fullscreen-overlay" id="fullscreen_overlay">
  <div class="fullscreen-container js-suggester-container">
    <div class="textarea-wrap">
      <textarea name="fullscreen-contents" id="fullscreen-contents" class="fullscreen-contents js-fullscreen-contents" placeholder=""></textarea>
      <div class="suggester-container">
        <div class="suggester fullscreen-suggester js-suggester js-navigation-container"></div>
      </div>
    </div>
  </div>
  <div class="fullscreen-sidebar">
    <a href="#" class="exit-fullscreen js-exit-fullscreen tooltipped tooltipped-w" aria-label="Exit Zen Mode">
      <span class="mega-octicon octicon-screen-normal"></span>
    </a>
    <a href="#" class="theme-switcher js-theme-switcher tooltipped tooltipped-w"
      aria-label="Switch themes">
      <span class="octicon octicon-color-mode"></span>
    </a>
  </div>
</div>



    
    

    <div id="ajax-error-message" class="flash flash-error">
      <span class="octicon octicon-alert"></span>
      <a href="#" class="octicon octicon-x flash-close js-ajax-error-dismiss" aria-label="Dismiss error"></a>
      Something went wrong with that request. Please try again.
    </div>


      <script crossorigin="anonymous" src="https://assets-cdn.github.com/assets/frameworks-2c8ae50712a47d2b83d740cb875d55cdbbb3fdbccf303951cc6b7e63731e0c38.js"></script>
      <script async="async" crossorigin="anonymous" src="https://assets-cdn.github.com/assets/github-3db81a421ebe0d913a89557241623ecef42b40a31f8425a3f46f09d84b0028a1.js"></script>
      
      

      <div class="js-socket-channel" data-channel="test:kdeming"></div>

  </body>
</html>


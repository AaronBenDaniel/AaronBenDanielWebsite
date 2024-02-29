---
title: "Junior Week 24"
date: 2024-02-29
Summary: "The new Power Distribution Board has begun assembly, also the ROV broke :("
tags: ["Electronics","Electronics Tube","Miscellaneous","Robotics Shop Blog","Sunk Robotics","Soldering"]
# CAD, CAM, Cameras, Electronics, Electronics Tube, FDM Printing, Frame, General CAD, Laser Cutting, Manufacturing, Milling, Miscellaneous, PCB Design,
# Robotics Shop Blog, Routing, SLA Printing, Soldering, Sunk Robotics, WAter-Jet Cutting, Watts Water Plaque, General CAD, Machinist's Jack, Turning
cover:
    image: "/img/juniorweek24/" # image path/url
    alt: "" # alt text
    caption: "" # display caption under cover
    relative: false # when using page bundles set this to true
    hidden: false # only hide on current single page
draft: true

# weight: 1
author: "Aaron BenDaniel"
showToc: true
TocOpen: false
hidemeta: false
comments: false
disableHLJS: true # to disable highlightjs
disableShare: false
disableHLJS: false
hideSummary: false
searchHidden: false
ShowReadingTime: true
ShowBreadCrumbs: true
ShowPostNavLinks: true
ShowWordCount: true
ShowRssButtonInSectionTermList: true
UseHugoToc: true
editPost:
    URL: "https://github.com/AaronBenDaniel/AaronBenDanielWebsite/blob/main/content"
    Text: "Suggest Changes" # edit text
    appendFilePath: true # to append file path to Edit link
---
# add cover image

On Monday I tested the feasibility of re-programming the ESCs to change the startup melody to "Shipping Up To Boston". I need to use the website {{< linknewtab "https://esc-configurator.com/" "esc-configurator.com" >}} because the official BL I have so far been able to change the startup melody, but the re-programmed ESCs don't function yet. I only worked on this on Monday, as the new Power Distribution Boards arrived on Tuesday.

!["Image of esc-configurator.com"](/img/juniorweek24/esc.png)

The new PD Board will have an 8A voltage regulator as well as current and voltage monitoring capabilities.

!["Image of a 3D model of the Power Distribution Board V2"](/img/juniorweek23/back.png)

!["Image of the top of the Power Distribution Board V2"](/img/juniorweek23/top.png)

!["Image of the bottom of the Power Distribution Board V2"](/img/juniorweek23/bottom.png)

I’m still not 100% sure that the new voltage regulator will fix our problems, but I have no idea what the source of the issue could be if it isn’t the current supply. Even still, having a greater maximum current draw is good, and I continue to learn more about PCB design.

I believe the new board is done and ready to be ordered, but I still have the nagging feeling that I’m missing something. I intend to ignore it, though, as I have felt this way every single time I’ve ordered PCBs from a PCB company and haven’t forgotten anything yet.

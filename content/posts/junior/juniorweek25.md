---
title: "Junior Week 25"
date: 2024-03-07
Summary: "I did a LOT of debugging (and I haven't learned much)"
tags: ["Electronics","Electronics Tube","Miscellaneous","Robotics Shop Blog","Sunk Robotics","Soldering"]
# CAD, CAM, Cameras, Electronics, Electronics Tube, FDM Printing, Frame, General CAD, Laser Cutting, Manufacturing, Milling, Miscellaneous, PCB Design,
# Robotics Shop Blog, Routing, SLA Printing, Soldering, Sunk Robotics, WAter-Jet Cutting, Watts Water Plaque, General CAD, Machinist's Jack, Turning
cover:
    image: "/img/junior/juniorweek25/PXL_20240307_163651283.webp" # image path/url
    alt: "" # alt text
    caption: "" # display caption under cover
    relative: false # when using page bundles set this to true
    hidden: false # only hide on current single page
draft: false

# weight: 1
author: "Aaron BenDaniel"
showToc: false
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

JONA ROV has been experiencing major power stability problems with its 5V system. I've been attempting to isolate and solve the problem for... a while, and I'm still not really any closer to solving it.

!["Image of the new power distribution board"](/img/junior/juniorweek25/PXL_20240307_163657954.webp)

The new Power Distribution Board is done and it has quite the janky capacitor+diode addition to it. I can't really tell if the capacitor is helping much, though.

!["Image of the 5V capacitors"](/img/junior/juniorweek25/PXL_20240307_163704010.webp)

I tried adding some capacitors to the 5V system and they do help, but they also make turning the ROV on a bit of a hassle. The RPi5 is fussy with how it receives power and the capacitors interfere with it turning on smoothly. I ended up adding a 2.2mF capacitor and a 2.5F supercapacitor.

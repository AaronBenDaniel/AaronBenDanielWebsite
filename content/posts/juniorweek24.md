---
title: "Junior Week 24"
date: 2024-02-29
Summary: "The new Power Distribution Board has begun assembly, also the ROV broke :("
tags: ["Electronics","Electronics Tube","Miscellaneous","Robotics Shop Blog","Sunk Robotics","Soldering"]
# CAD, CAM, Cameras, Electronics, Electronics Tube, FDM Printing, Frame, General CAD, Laser Cutting, Manufacturing, Milling, Miscellaneous, PCB Design,
# Robotics Shop Blog, Routing, SLA Printing, Soldering, Sunk Robotics, WAter-Jet Cutting, Watts Water Plaque, General CAD, Machinist's Jack, Turning
cover:
    image: "/img/juniorweek24/front.jpg" # image path/url
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

On Monday I tested the feasibility of re-programming the ESCs to change the startup melody to "Shipping Up To Boston". I need to use the website {{< linknewtab "https://esc-configurator.com/" "esc-configurator.com" >}} because the official BLHeli software doesn't allow for reprogramming the startup melodies for 8bot ESCs (which the Blue Robotics ESCs are). I have so far been able to change the startup melody, but the re-programmed ESCs don't function yet. I only worked on this on Monday, as the new Power Distribution Boards arrived on Tuesday.

!["Image of esc-configurator.com"](/img/juniorweek24/esc.png)

I spent tuesday soldering and debugging the 2.5V votlage reference for the ADC, it is by far the smallest component I've ever soldered and I ended up using the hot plate to solder it, as the hot air gun would blow the part away even on it's lowest air setting.

!["Image of the front of the new Power Distribution Board"](/img/juniorweek24/front.jpg)

!["Image of the back of the new Power Distribution Board"](/img/juniorweek24/back.jpg)

On Wednesday I began soldering on the other components, and after school Shane and I discovered that the ADC has it's own voltage reference and no VREF pin... So the voltage reference on the PCB is useless.

We also discovered that the ROV is broken. During the process of once more reducing votlage drop, something broke and I2C stopped working. I *think* that the problem is with the 9-axs IMU, but I am not 100% sure and need to do some additional debugging.
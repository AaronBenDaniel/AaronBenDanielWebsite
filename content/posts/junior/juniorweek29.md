---
title: "Junior Week 29"
date: 2024-04-04
Summary: "The Gigabit Ethernet Switch Board is done, and it works splendidly!"
tags: ["Electronics","Electronics Tube","Miscellaneous","Robotics Shop Blog","Sunk Robotics","Soldering"]
# CAD, CAM, Cameras, Electronics, Electronics Tube, FDM Printing, Frame, General CAD, Laser Cutting, Manufacturing, Milling, Miscellaneous, PCB Design,
# Robotics Shop Blog, Routing, SLA Printing, Soldering, Sunk Robotics, WAter-Jet Cutting, Watts Water Plaque, General CAD, Machinist's Jack, Turning
cover:
    image: "/img/junior/juniorweek29/SBoard.webp" # image path/url
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

At the start of the week I finished soldering the Ethernet Switch Board V2, which features a Gigablox Gigabit Ethernet Switch.

The new switch works great, and not only does the RPi have a gigabit connection to the surface computer, all the camera feeds don't share a single 100MBps connection now.

!["Image of the PDBoard V3"](/img/junior/juniorweek29/PDTop.webp)

!["Image of the PDBoard V3"](/img/junior/juniorweek29/PDBottom.webp)

The third version of the Power Distribution Board is done, but I'm waiting or order it until Scott has finished a PCB of his own. The shipping cost from JLCPCB is about the same as the PCBs themselves, so we are trying to consolidate orders to save on shipping. The new board features a fully isolated 5V power system, with a new regulator and opto-isolators. The board also continues the migration effort towards XT30 connectors and has some holes to accomodate a servo for our prospective gripper.

I *think* other than the PDBoard V3, my current projects for the robotics team are mostly done, which means I'll be open to start another personal project. I'll need to think of something to do.
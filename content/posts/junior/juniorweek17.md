---
title: "Junior Week 17"
date: 2024-01-04
Summary: "The ESC PCB V2s have begun assembly and JONA ROV is very close to being fully functional!"
tags: ["Electronics","Electronics Tube","Robotics Shop Blog","Sunk Robotics","Soldering"]
# CAD, CAM, Cameras, Electronics, Electronics Tube, FDM Printing, Frame, General CAD, Laser Cutting, Manufacturing, Milling, Miscellaneous, PCB Design,
# Robotics Shop Blog, Routing, SLA Printing, Soldering, Sunk Robotics, WAter-Jet Cutting, Watts Water Plaque
cover:
    image: "/img/junior/juniorweek17/front.webp" # image path/url
    alt: "" # alt text
    caption: "" # display caption under cover
    relative: false # when using page bundles set this to true
    hidden: false # only hide on current single page
draft: false

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

This week I entered what will hopefully be the final stage of building JONA ROV. The very last day of school before Christmas Break, the ESC PCB V2s arrived. This week I have begun assembling them. Their updated design allowed the ESCs to fit more flush against the PCB and makes surface-mount soldering them with solder paste easier.

!["Image of the ESC Board V2"](/img/junior/juniorweek17/down.webp)

!["Image of the ESC Board V2"](/img/junior/juniorweek17/back.webp)

I have found a good method for soldering the ESC to these PCBs. I first add just enough solder paste to make a connection, soldering everything together, and then add more solder with a soldering iron and solder wire. This method has so far been consistent and I have one full ESC PCB V2 assembled.

!["Image of the XT30 connectors"](/img/junior/juniorweek17/wires.webp)

On Thursday I soldered the male XT30 connectors onto the thruster wires and soldered a female XT30 connector onto the power connector. I plugged everything together and the four thrusters connected to the new PCB successfully played the startup sound. I unfortunately am unable to actually drive the motors via the Raspberry Pi 4 without Matty, so they haven’t been tested all together yet. Each ESC was individually tested by myself as a soldered them, though, so I have confirmed that each unit does function.
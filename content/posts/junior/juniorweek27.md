---
title: "Junior Week 27"
date: 2024-03-21
Summary: "PCBs orbered.... and designing more"
tags: ["Electronics","Electronics Tube","Miscellaneous","Robotics Shop Blog","Sunk Robotics"]
# CAD, CAM, Cameras, Electronics, Electronics Tube, FDM Printing, Frame, General CAD, Laser Cutting, Manufacturing, Milling, Miscellaneous, PCB Design,
# Robotics Shop Blog, Routing, SLA Printing, Soldering, Sunk Robotics, WAter-Jet Cutting, Watts Water Plaque, General CAD, Machinist's Jack, Turning
cover:
    image: "/img/junior/juniorweek27/.webp" # image path/url
    alt: "" # alt text
    caption: "" # display caption under cover
    relative: false # when using page bundles set this to true
    hidden: false # only hide on current single page
draft: true

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

This week I verified that the PCBs I designed last week were good. I didn't find any issues, so they got ordered.

This 

!["Image of the top of the new ethernet switch board"](/img/junior/juniorweek26/top.webp)

!["Image of the bottom of the new ethernet switch board"](/img/junior/juniorweek26/bottom.webp)

Matty had suggested that the latency and frame-rate problems we've been having with the cameras are, at least in part, caused by a lack of available bandwidth connecting the surface laptop to the ethernet switch. We always knew about the 100MBPS limit, but didn't think that it would pose too much of a problem. It appears we have been proven wrong. Luckily, {{< linknewtab "https://botblox.io/" "Bot Blox" >}}, the manufacturer of the 100MBPS switch we were using also selling a slightly larger Gigabit switch. This new switch should alleviate all of the bandwidth issues, but a new PCB is required in order to accommodate it's larger footprint and gigabit connection.

The Tube Cameras can't get gigabit connections, as two of the twisted pairs in the CAT 5E cable are needed for power, but each individual camera shouldn't need more than 100MBPS. It's only the tether and the RPi5 that need a gigabit connection, as *all* the camera feeds need to be transmitted through their connections.

I also added mounting holes for an RPi Zero, should we decide to add one to the Ethernet Switch Board. We've been facing issues with the front camera, although I don't know the details, I know that it has something to do with the RPi5 acting as both a camera and a router. If the increased bandwidth doesn't fix the issues with the front camera, we're going to try using a separate Pi Zero as the on-board router.

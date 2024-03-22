---
title: "Junior Week 27"
date: 2024-03-22
Summary: "PCBs ordered.... and designing more"
tags: ["Electronics","Electronics Tube","Miscellaneous","Robotics Shop Blog","Sunk Robotics"]
# CAD, CAM, Cameras, Electronics, Electronics Tube, FDM Printing, Frame, General CAD, Laser Cutting, Manufacturing, Milling, Miscellaneous, PCB Design,
# Robotics Shop Blog, Routing, SLA Printing, Soldering, Sunk Robotics, WAter-Jet Cutting, Watts Water Plaque, General CAD, Machinist's Jack, Turning
cover:
    image: "/img/junior/juniorweek27/mess.webp" # image path/url
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

This week I verified that the PCBs I designed last week were good. I didn't find any issues, so they got ordered.

I've also been redesigning the Power Distribution Board... again. In order to accommodate an isolated voltage regulator and some optoisolators. I've needed to make a number of footprints by hand, so it's been going slow.

On Wednesday, I helped Matty tune the PID systems of JONA. Now that they're tuned, the ROV will maintain a set depth, roll, and pitch angle. This will significantly improve controllability.

Also on Wednesday, the ROV broke, I *think* it has to do with some water getting in, evaporating, and then condensing, but I really don't know. I doubt I'll ever know the source of the problem.

I did figure out what broke, though. One of the ESCs had a capacitor pop and it sprayed it's capacitor gunk on the ESC. I will need to replace that unit.
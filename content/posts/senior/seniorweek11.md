
---
title: "Senior Week 11"
date: 2024-11-14
Summary: "The hardware for my Micromouse is done!"
tags: ["Electronics","Micromouse","Programming","Robotics Shop Blog","Soldering"]
# CAD, CAM, Cameras, Electronics, Electronics Tube, FDM Printing, Frame, General CAD, Laser Cutting, Manufacturing, Micromouse, Milling, Miscellaneous, PCB Design,
# Programming, Robotics Shop Blog, Routing, SLA Printing, Soldering, Sunk Robotics, Water-Jet Cutting, Watts Water Plaque, Machinist's Jack, Turning
cover:
    image: "/img/senior/seniorweek11/front.webp" # image path/url
    hidden: false # only hide on current single page
draft: false

# weight: 1
author: "Aaron BenDaniel"
showToc: false
TocOpen: false
hidemeta: false
disableHLJS: true # to disable highlightjs
hideSummary: false
searchHidden: false
ShowReadingTime: true
ShowBreadCrumbs: true
ShowPostNavLinks: true
ShowWordCount: true
UseHugoToc: true
editPost:
    URL: "https://github.com/AaronBenDaniel/AaronBenDanielWebsite/blob/main/content"
    Text: "Suggest Changes" # edit text
    appendFilePath: true # to append file path to Edit link
---

!["Image of my Micromouse"](/img/senior/seniorweek11/back.webp)

My PCBs arrived on Tuesday and I got straight to work on all the soldering and crimping needed to get everything assembled. I soldered lots of headers and crimped some extenders to raise the Top Board above the Bottom Board. Currently, they're quite far apart and I'd like to minimize how tall my Micromouse is, so I'll probably end up crimping some new extenders that are shorter.

I spent pretty much my whole week assembling hardware, but by Thursday I had finished and tested everything. I began writing the code to precisely control the movement of the robot, and it is looking to be more difficult and I had thought it would be. I have hope, though, and I believe that I'll be able to get the level of precision I'm looking for. I'll need to leverage the IMU and encoders to their fullest, and will probably need to implement PID control.
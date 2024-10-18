
---
title: "Senior Week 06"
date: 2024-10-10
Summary: "Re-designing my Micromouse"
tags: ["CAD","General CAD","Electronics","Micromouse","Programming","Robotics Shop Blog"]
# CAD, CAM, Cameras, Electronics, Electronics Tube, FDM Printing, Frame, General CAD, Laser Cutting, Manufacturing, Micromouse, Milling, Miscellaneous, PCB Design,
# Programming, Robotics Shop Blog, Routing, SLA Printing, Soldering, Sunk Robotics, Water-Jet Cutting, Watts Water Plaque, Machinist's Jack, Turning
cover:
    image: "/img/senior/seniorweek06/mouse.webp" # image path/url
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

I (thankfully) noticed on Tuesday that, despite my Micromouse being able to fit in a cell and rotate, it was too large to fit through the slightly-smaller open area between cells. Additionally, the Time of Flight (ToF) sensors were too high up and could not see the 25mm-high walls that the half-scale Micromouse rules require the maze to have.

!["Size comparison"](/img/senior/seniorweek06/mice.webp)

After some deliberation, I eventually decided that I would need to find some smaller ToF sensors and completely redesign my Micromouse. It will have the same components, other than the new ToF sensors, but will be smaller. In order to accommodate this, I will be splitting the components across two vertically-stacked PCBs.

The new design is still concerningly large compared to the maze, and I might try to shrink it further. Now that I've committed to a stacked-PCB design, it should be possible to squeeze it even smaller.

The first image does not have the actual PCBs modeled, as it's just a reference model for arranging parts. I have just begun designing the actual PCBs.

My QT-Py microcontrollers also arrived this week. I spent a whole day testing them out and, after a some finagling, got code uploaded and running on them. They are impressivly tiny and have two extremely useful features built onto them: A button (other than `RESET`) and a Neopixel. I will be making use of both.

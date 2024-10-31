
---
title: "Senior Week 09"
date: 2024-10-31
Summary: "Building the lower board"
tags: ["CAD","General CAD","Electronics","Micromouse","Robotics Shop Blog"]
# CAD, CAM, Cameras, Electronics, Electronics Tube, FDM Printing, Frame, General CAD, Laser Cutting, Manufacturing, Micromouse, Milling, Miscellaneous, PCB Design,
# Programming, Robotics Shop Blog, Routing, SLA Printing, Soldering, Sunk Robotics, Water-Jet Cutting, Watts Water Plaque, Machinist's Jack, Turning
cover:
    image: "/img/senior/seniorweek09/front.webp" # image path/url
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

The sophomores did electronics this week, so I got a break from helping them with their Turner's Cubes and had time to work on my Micromouse. I test-cut some versions of the lower board in acrylic, found some problems, fixed them, cut a (not actually) final version with the PCB mill, found another problem, and cut the (now hopefully final) version of the board that I have now. I'm not quite done assembling it, but it's pretty much in it's final state right now, other than a few missing headers.

!["Another angle on my Micromouse"](/img/senior/seniorweek09/back.webp)

I'll test it once I've finished soldering everything on. Hopefully everything works as expected. I should be good to order the top board from (probably) JLC PCB. The top board is far too complex to route with just one side, and although our PCB mills can *technically* do double-sided boards they aren't great and the through-holes don't connect the two sides, only the vias do.

My Micromouse is finally coming together and at this rate, assuming the hardware interface code doesn't take too long, I'll probably be able to finish the project by the beginning of next year. I've already written the pathfinding algorithm, so it's just translating "Turn 90 degrees right" and "Go forward 90mm" into real-world motion. I anticipate that to be significantly more difficult than it would sound, as the movements need to be quite precise and all I've got are two DC motors.
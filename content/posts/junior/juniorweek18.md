---
title: "Junior Week 18"
date: 2024-01-11
Summary: "JONA ROV is fully functional!*"
tags: ["Cameras","Electronics","Electronics Tube","FDM Printing","Manufacturing","Robotics Shop Blog","Sunk Robotics","Soldering"]
# CAD, CAM, Cameras, Electronics, Electronics Tube, FDM Printing, Frame, General CAD, Laser Cutting, Manufacturing, Milling, Miscellaneous, PCB Design,
# Robotics Shop Blog, Routing, SLA Printing, Soldering, Sunk Robotics, WAter-Jet Cutting, Watts Water Plaque
cover:
    image: "/img/junior/juniorweek18/wires.webp" # image path/url
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

This week I hit a major milestone with JONA ROV and the Robotics Team. Although on Wednesday the shop was flooded so I didn’t get any work done, I still managed to complete some tasks.

!["Image of the ESC Board V2"](/img/junior/juniorweek18/board.webp)

!["Image of the ESC Board V2"](/img/junior/juniorweek18/back.webp)

I soldered the second ESC PCB and tested each ESC. All four worked, so I then soldered the XT30 connectors onto the remaining four motors. I was able to assemble everything and JONA ROV is now, theoretically, fully functional. Wednesday after school Matty was able to test each motor and they all work! However, we also discovered another problem. There is a very mysterious voltage drop in the 5V system that I have no idea how it even exists. When I measure voltage from two points on a continuous power bus, I read two different values.

Given all of the knowledge I have of electrical engineering, this should be impossible. I will need to seek help from some more experienced people in order to solve this problem. This voltage drop is (I believe) responsible for instability in the electrical system and results in the RPi4 not behaving properly. In addition to the voltage drop, we may be over-currenting our voltage regulator, although I am doubtful that we are.

I also began mounting the rear camera. I was having problems with it earlier, but they appear to have disappeared. I believe the problems I have having earlier are connected to the problems I am having now with the RPi4.
---
title: "Junior Week 14"
date: 2023-12-07
Summary: "Design work on my ESC PCB v2 is hopefully done!"
tags: ["CAD","Cameras","Electronics Tube","FDM Printing","Manufacturing","PCB Design","Robotics Shop Blog","Sunk Robotics","SLA Printing"]
cover:
    image: "/img/junior/juniorweek14/front.png" # image path/url
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

This week I redesigned the ESC PCB with all of the knowledge I learned from my first attempt.

!["Image of the bottom of my ESC Board V2"](/img/junior/juniorweek14/bottom.png)

!["Image of the top of my ESC Board V2"](/img/junior/juniorweek14/top.png)

!["Image of the front of my ESC Board V2"](/img/junior/juniorweek14/front.png)

!["Image of the back of my ESC Board V2"](/img/junior/juniorweek14/back.png)

This new version will address the two main problems with the ESC PCB v1. The primary thing that is different is the connectors. This version will use XT30 connectors, which should hopefully have a lower resistance. I also had a chance to remake my footprint of the Blue Robotics ESC. I learned that I need far less clearance then I thought I did, so the ESC can be packed together closer. This allow the power input and signal connectors to be places away from each other and not overlap. Their overlapping made connecting and disconnecting the signal connector very difficult.

Unfortunately, we won’t be able to order these PCBs until our parts for them have arrived. I don’t know for sure that my footprints of the 3-pin XT30 connectors are good, so I need to test them before we commit on this new ESC PCB design.

!["Image of the parts for a Tube Camera"](/img/junior/juniorweek14/camera.webp)

I also began building JONA’s second Tube Camera.
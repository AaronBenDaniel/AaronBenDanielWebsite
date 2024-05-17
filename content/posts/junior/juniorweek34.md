
---
title: "Junior Week 34"
date: 2024-05-16
Summary: "Debugging the Power Distribution Board V3"
tags: ["Electronics","Electronics Tube","Robotics Shop Blog","Soldering","Sunk Robotics"]
# CAD, CAM, Cameras, Electronics, Electronics Tube, FDM Printing, Frame, General CAD, Laser Cutting, Manufacturing, Milling, Miscellaneous, PCB Design,
# Robotics Shop Blog, Routing, SLA Printing, Soldering, Sunk Robotics, Water-Jet Cutting, Watts Water Plaque, General CAD, Machinist's Jack, Turning
cover:
    image: "/img/junior/juniorweek32/back.webp" # image path/url
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

Just before the regional I had finished the Power Distribution Board V3. I put it into JONA and was dismayed to see that it did not function. I put the old board back in, as I didn't have time to debug the new board and we needed a working ROV and as much practice as possible for the upcoming competition.

Now that the regional is over (and we won!) I have time to see what was wrong with the board.

!["Image of the Optoisolators"](/img/junior/juniorweek34/isolators.webp)

I managed to fix most of the issues with the board, but one issue remains. The fourth channels on these optoisolators do not work. The datasheet shows they're no different than the other three, so I have no idea what the issue could be. I haven't done too much debugging, as exploring this issue is a low-priority and high-effort endeavor.

{{< figure src="/img/junior/juniorweek28/logic.webp" width="1000" caption="I didn't get a picture of the board... This is the best one I have as-of writing this" alt="Image of the Logic Board">}}

I've managed to reduce the amount of time that we need to wait to turn the ROV on to ten seconds by adding a 1 Ohm resistor to the space I had added in case I needed it. The ~0 Ohm connection through the MOSFET let too much current through and interfered with the startup process. The 1 Ohm resistor still interferes, but less so now.
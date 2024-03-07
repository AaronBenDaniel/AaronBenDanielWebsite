---
title: "Junior Week 23"
date: 2024-02-15
Summary: "The Power Distribution Board V2 is… ready to be ordered?"
tags: ["CAD","Electronics","Electronics Tube","PCB Design","Robotics Shop Blog","Sunk Robotics"]
# CAD, CAM, Cameras, Electronics, Electronics Tube, FDM Printing, Frame, General CAD, Laser Cutting, Manufacturing, Milling, Miscellaneous, PCB Design,
# Robotics Shop Blog, Routing, SLA Printing, Soldering, Sunk Robotics, WAter-Jet Cutting, Watts Water Plaque, General CAD, Machinist's Jack, Turning
cover:
    image: "/img/junior/juniorweek23/front.webp" # image path/url
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

This week I designed the Power Distribution Board V2. Last Wednesday, it was made clear that there is a serious problem with the 5V system on JONA ROV. With the help of Mr. Christy’s friend, Shane, I did some diagnosing, but I’m still not 100% sure what the cause of the problem is. It’s probably due to insufficient current supply, as our current 5V regulator can only supply up to 3A. Anyone who has read the electrical specifications of Raspberry Pis should know that this is not enough, and we always knew that 3A was insufficient, but we’re only just now having a problem with it.

The new PD Board will have an 8A voltage regulator as well as current and voltage monitoring capabilities.

!["Image of a 3D model of the Power Distribution Board V2"](/img/junior/juniorweek23/back.png)

!["Image of the top of the Power Distribution Board V2"](/img/junior/juniorweek23/top.png)

!["Image of the bottom of the Power Distribution Board V2"](/img/junior/juniorweek23/bottom.png)

I’m still not 100% sure that the new voltage regulator will fix our problems, but I have no idea what the source of the issue could be if it isn’t the current supply. Even still, having a greater maximum current draw is good, and I continue to learn more about PCB design.

I believe the new board is done and ready to be ordered, but I still have the nagging feeling that I’m missing something. I intend to ignore it, though, as I have felt this way every single time I’ve ordered PCBs from a PCB company and haven’t forgotten anything yet.
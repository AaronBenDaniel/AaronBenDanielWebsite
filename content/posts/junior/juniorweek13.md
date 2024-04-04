---
title: "Junior Week 13"
date: 2023-11-30
Summary: "JONA now has a bottom-camera! Also Sunk Robotics now uses Notion."
tags: ["Cameras","Electronics","FDM Printing","Manufacturing","Miscellaneous","Robotics Shop Blog","Sunk Robotics","Soldering"]
cover:
    image: "/img/junior/juniorweek13/camera.webp" # image path/url
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

This week I had to put PCB design on pause, as I was waiting to be able to speak with Shane about what he believes the problems was with the old ESC PCBs. We did discover the problem, Ben’s and my attempt at attaching the motors to the ESC PCBs without the actual connectors proved to be…. less than ineffectual. Accidental bridging was the cause of us blowing two traces on the PCBs.

!["Image of the single-cable Tube Camera"](/img/junior/juniorweek13/cameraa.webp)

!["Image of the single-cable Tube Camera"](/img/junior/juniorweek13/camerab.webp)

I assembled our downwards-facing camera this week, it employs the new 5V PoE “standard” we developed. It requires only a single CAT 5E cable to transmit both 5V power and 100mbps ethernet. I have yet to mount it, though, as I write this, the part is printing.

!["Image of Notion"](/img/junior/juniorweek13/notion.png)

I also began adding all of the tasks I need to do to Sunk Robotics’ new task management system: Notion. I can certainly see the advantage of this system, but adding all of my tasks will be a pain (I will only have to do this many at a time once, though).
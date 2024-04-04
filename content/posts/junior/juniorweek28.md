---
title: "Junior Week 28"
date: 2024-03-27
Summary: "PCB Assembly, also debugging, also pool time, and some (a lot of) cans"
tags: ["Electronics","Electronics Tube","Miscellaneous","Robotics Shop Blog","Sunk Robotics"]
# CAD, CAM, Cameras, Electronics, Electronics Tube, FDM Printing, Frame, General CAD, Laser Cutting, Manufacturing, Milling, Miscellaneous, PCB Design,
# Robotics Shop Blog, Routing, SLA Printing, Soldering, Sunk Robotics, Water-Jet Cutting, Watts Water Plaque, General CAD, Machinist's Jack, Turning
cover:
    image: "/img/junior/juniorweek28/switch.webp" # image path/url
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

---

The PCBs arrived this week so I've begun assembling them! I began with the Logic Board, which is the most important to get working. The capacitor control circuitry is very important to get running because bottom camera mysteriously won't turn on when the capacitor is plugged in. This actually makes quite a bit of sense, but it's mysterious because the rear camera (which has identical hardware) has no issues at all.

!["Image of the new logic board"](/img/junior/juniorweek28/logic.webp)

I tested the circuitry before putting it into JONA and it appeared to work, but it causes strange issues when the RPi5 tries to control it. I need to look into this more in the coming week.

!["Image of the new ethernet switch board"](/img/junior/juniorweek28/switch.webp)

I also began assembling the new Gigabit Ethernet Switch Board. This new board accommodates a Gigabit ethernet switch and an RPi Zero to act as a router. The RPi5 *should* be able to act as the router without issue, but it is causing issues with the front camera when it is.

!["Image of a lot of cans :)"](/img/junior/juniorweek28/cans.webp)

Scott, Ben, William, Tanzy, and I all contributed to buying 108 cans from Wegmans for the NTHS Food Drive. Wegmans double-delivered so we got a total of 217 cans. If Robotics doesn't win... I don't know.
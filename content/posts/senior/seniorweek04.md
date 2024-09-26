
---
title: "Senior Week 04"
date: 2024-09-26
Summary: "Designing my Micromouse"
tags: ["Electronics","Micromouse","Programming","Robotics Shop Blog"]
# CAD, CAM, Cameras, Electronics, Electronics Tube, FDM Printing, Frame, General CAD, Laser Cutting, Manufacturing, Micromouse, Milling, Miscellaneous, PCB Design,
# Programming, Robotics Shop Blog, Routing, SLA Printing, Soldering, Sunk Robotics, Water-Jet Cutting, Watts Water Plaque, Machinist's Jack, Turning
cover:
    image: "/img/senior/seniorweek04/mouse.webp" # image path/url
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

This week I finished up putting all of my parts into Fusion and I began designing my Micromouse. I'm only just now appreciating just how small half-scale Micromice are. Each cell is 90mm by 90mm. This means that my micromouse needs to fit inside a 45mm circle, but because I want some tolerance, I've decided to squeeze everything into a 40mm circle. The wheel-wells take up quite a bit of space, which leaves barely enough room for everything else.

Finding a battery that stores enough power but can fit in the awkward space has been a challenge.

!["Schematic of my Micromouse"](/img/senior/seniorweek04/schematic.webp)

This is my preliminary schematic of my Micromouse. It's missing a LiPo charger, but other than that I think it's good. My PCB will almost certainly need to be double-sided, which we can manufacture in the shop. I might just order them from JLC PCB, as they're pretty cheap and *much* higher quality.

---
{{< video "/img/senior/seniorweek04/video.mp4" "video" >}}

---

I also wrote a super-duper simple version of a PID algorithm, it's missing the "Integral" and "Derivative" parts, so I guess it's just a "Proportional" algorithm. It oscillates some, but hopefully it should be good enough.

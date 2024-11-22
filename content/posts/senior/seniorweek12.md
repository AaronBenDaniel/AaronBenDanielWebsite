
---
title: "Senior Week 12"
date: 2024-11-21
Summary: "Coding control systems"
tags: ["Micromouse","Miscellaneous","Programming","Robotics Shop Blog"]
# CAD, CAM, Cameras, Electronics, Electronics Tube, FDM Printing, Frame, General CAD, Laser Cutting, Manufacturing, Micromouse, Milling, Miscellaneous, PCB Design,
# Programming, Robotics Shop Blog, Routing, SLA Printing, Soldering, Sunk Robotics, Water-Jet Cutting, Watts Water Plaque, Machinist's Jack, Turning
cover:
    image: "/img/senior/seniorweek12/platformIO.webp" # image path/url
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

Now that the hardware for my Micromouse is done, I've started writing the hardware interface code that will allow my pathfinding algorithm to move the robot to actually solve a physical maze. In the past, I had been using the Arduino IDE 2.0 to develop code for Arduino boards, but I've always had some gripes with it. It doesn't have very good type-checking and it takes *forever* to compile ESP32 code. The main reason for why it takes so long is that it always recompiles everything even if, for example, the libraries haven't changed. I have switched to using VSCode with the PlatformIO extension. Not only does this new IDE offer good type checking, but it also caches object files and can reuse them. Because of this, compilations that sometimes took up to two minutes now take around 17 seconds (including upload time).

---

{{< video "/img/senior/seniorweek12/video.mp4" "video" >}}

---

I wrote a basic PID algorithm to control the turning of the robot that *did* work, but after wrangling with it a bunch I eventually gave up and used a PID control library. The library is a little better, but my algorithm was surprisingly good. Unfortunately, even the library, so far, isn't good enough. Maybe with additional tuning I could get the control precise enough, but as it is now, I can rotate the Mouse a few degrees before it reacts. This is unacceptable and I will need to, somehow, make it even more precise.
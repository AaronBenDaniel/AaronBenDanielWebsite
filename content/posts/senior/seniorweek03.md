
---
title: "Senior Week 03"
date: 2024-09-19
Summary: "Refactoring code and learning about sensors"
tags: ["Electronics","Micromouse","Programming","Robotics Shop Blog"]
# CAD, CAM, Cameras, Electronics, Electronics Tube, FDM Printing, Frame, General CAD, Laser Cutting, Manufacturing, Micromouse, Milling, Miscellaneous, PCB Design,
# Programming, Robotics Shop Blog, Routing, SLA Printing, Soldering, Sunk Robotics, Water-Jet Cutting, Watts Water Plaque, Machinist's Jack, Turning
cover:
    image: "/img/senior/seniorweek03/qtpy.webp" # image path/url
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

The first two days of this week were spent finishing up refactoring my code. I couldn't get it to run on an ATMEGA328... for some reason. I'm still not sure why. The algorithm *should* be able to run with the amount of RAM that microcontroller has, but apparently not. I have switched to an ESP32-S2 and the code now runs.

For now I'm using an Adafruit Feather ESP32-S2, but for my micromouse I think I want to use an Adafruit QT Py ESP32-S2. It has the same microcontroller as the board I'm using now, but it is *much* smaller.

!["Picture of the motor I intend to use"](/img/senior/seniorweek03/motor.webp)

After I finished with the code I began looking into hardware. I started with figuring out what motors and encoders I was going to use. The shop already had these super small DC motors with encoders already attached, so I'm going to use these. I learned how to use encoders and got it working with the ESP32-S2.

!["Picture of the TOF sensors"](/img/senior/seniorweek03/tof.webp)

Lastly, I learned about Time of Flight sensors. They're similar to LiDAR, but a single narrow cone instead of a full volumetric scanner. The units the shop already had were perfect, except for that they have a single hard-coded I2C address. This means that if I want to use multiple of them at once, (and I do) I need an I2C mutliplexer in order for them to not conflict with eachother. The shop also had those, and I got two working at once. My micromouse will have three.
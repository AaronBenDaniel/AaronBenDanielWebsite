
---
title: "Senior Week 14"
date: 2024-12-12
Summary: "Building my maze"
tags: ["FDM Printing","Laser Cutting","Manufacturing","Micromouse","Programming","Robotics Shop Blog"]
# CAD, CAM, Cameras, Electronics, Electronics Tube, FDM Printing, Frame, General CAD, Laser Cutting, Manufacturing, Micromouse, Milling, Miscellaneous, PCB Design,
# Programming, Robotics Shop Blog, Routing, SLA Printing, Soldering, Sunk Robotics, Water-Jet Cutting, Watts Water Plaque, Machinist's Jack, Turning
cover:
    image: "/img/senior/seniorweek14/maze.webp" # image path/url
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

The main thing I got done this week was building my 12x12 half-scale maze. The original reason I chose to build a half-scale Micromouse instead of a normal-scale one, even though it's much harder, was because I wanted to be able to build a reasonably sized maze that could still fit on a tabletop.

This maze is fully reconfigurable and I should be able to build any pattern I want. It's smaller than a true to-spec half-scale Micromouse maze, which is 22x22 cells. I haven't printed enough wall posts to fill out the entire maze, but I don't need more than I have right now, I'll eventually print the rest.

!["The file that I needed to fix PlatformIO"](/img/senior/seniorweek14/partitions.webp)

{{< rawhtml >}} <figure><figcaption><p> This was the file I needed to fix PlatformIO, not sure why I suddenly needed it. </p></figcaption></figure> {{< /rawhtml >}}

The maze took two days to make, and I spent the other two researching and testing ways to make my Micromouse more precise. I also spent quite a while chasing Github issues and forum posts trying to fix PlatformIO, which decided to break for some reason. Despite the... challenges... I've faced with it, I still much prefer using VSCode over the Arduino IDE.
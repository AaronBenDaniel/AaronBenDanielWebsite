---
title: "Junior Week 22"
date: 2024-02-08
Summary: "JONA has taken it’s first real swim! Also I have more work to do…"
tags: ["CAD","General CAD","Miscellaneous","Robotics Shop Blog","Sunk Robotics"]
# CAD, CAM, Cameras, Electronics, Electronics Tube, FDM Printing, Frame, General CAD, Laser Cutting, Manufacturing, Milling, Miscellaneous, PCB Design,
# Robotics Shop Blog, Routing, SLA Printing, Soldering, Sunk Robotics, WAter-Jet Cutting, Watts Water Plaque, General CAD, Machinist's Jack, Turning
cover:
    image: "/img/juniorweek22/jona.webp" # image path/url
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

This week was rather slow, as I was between projects and was doing a number of quick and small tasks.

The main exciting thing that happened this week was that JONA finally got to take a swim in the pool. Unfortunately, the rear camera didn’t work due to a corrupted SD card (which might be due to a hard power-off or just a bad card) and there were… technical difficulties that led to the IMU not working during our testing. The IMU issue is fixed now, but that meant that we couldn’t test rotational PID this week.

The RPi4 is having power issues. I thought that I had solved this issue by decreasing the resistance in the 5V power systems, but the problem has reappeared. I don’t think that it is begin caused by the same source, though, this time. There is very little voltage drop, not enough to be causing this issue. I believe that out voltage regulator simply cannot supply enough current to power the 5V system. Unfortunately, I can’t accurately measure the current consumption of the ROV, as the Shop doesn’t have any tools to measure quick current spikes, which I believe to be the problem.

I haven’t confirmed the actual cause of the ROV’s problems, and am betting that it’s due to insufficient current supply. If increasing the available current still doesn’t solve the issue… I don’t know what I’ll do.

{{< youtube Fl3BkwJZ8EQ >}}
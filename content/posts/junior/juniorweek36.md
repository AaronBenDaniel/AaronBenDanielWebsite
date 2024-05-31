
---
title: "Junior Week 36"
date: 2024-05-30
Summary: "Editing our documentation for the international competition"
tags: ["Cameras","Electronics","Miscellaneous","Robotics Shop Blog","Sunk Robotics"]
# CAD, CAM, Cameras, Electronics, Electronics Tube, FDM Printing, Frame, General CAD, Laser Cutting, Manufacturing, Milling, Miscellaneous, PCB Design,
# Robotics Shop Blog, Routing, SLA Printing, Soldering, Sunk Robotics, Water-Jet Cutting, Watts Water Plaque, General CAD, Machinist's Jack, Turning
cover:
    image: "/img/junior/juniorweek36/wire.webp" # image path/url
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

This week has been mainly taken up with my assembling of our 50ft tether. We originally built a 100ft tether because we didn't want to ever run into a scenario where we didn't have a long enough tether, but it turns out that the tether *can* be too long. JONA ROV works as is, but there is a significant voltage drop on the ROV side while drawing a large amount of current. The shorter tether should significantly reduce voltage drop, while still being more than long enough for the MATE ROV Competition.

We're building a whole new tether, so we'll still have our 100ft tether if we ever need the extra range.

!["Image of the epoxy"](/img/junior/juniorweek36/epoxy.webp)

Midway through the week, it looked like we'd need to put a hold on the 50ft tether for a few days as we did not end up having enough epoxy to seal the splices in the tether for the Blue Trail Engineering connectors. Luckily, Mr. Christy was able to pick up some epoxy on his way home and we were only set back one day instead of the rest of the week.

!["Logo of the camera electronics"](/img/junior/juniorweek36/camera.webp)

We've been having a very annoying and potentially competition-costing problem where the bottom camera is *very* inconsistent to turn on. Once it's on, it's stable, but getting it to turn on is a big pain and can take quite a few power cycles. I never really figured out the problem, as (in theory) the hardware in the bottom camera is identical to the back camera, which has had no issues whatsoever.

I had a hunch that *maybe* the RPi in the bottom camera was somehow broken or otherwise just less resilient to wonky power-ons, like what the ROV does on startup. I switched the hardware out for another camera module I had and, while I haven't done extensive testing yet, it appears to have solved the problem. Hopefully this will significantly improve the reliability of JONA ROV.

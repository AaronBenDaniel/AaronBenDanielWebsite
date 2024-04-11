
---
title: "Junior Week 30"
date: 2024-04-11
Summary: "The ROV broke... But it's fixed now"
tags: ["Electronics","Electronics Tube","Miscellaneous","Robotics Shop Blog","Sunk Robotics","Soldering"]
# CAD, CAM, Cameras, Electronics, Electronics Tube, FDM Printing, Frame, General CAD, Laser Cutting, Manufacturing, Milling, Miscellaneous, PCB Design,
# Robotics Shop Blog, Routing, SLA Printing, Soldering, Sunk Robotics, Water-Jet Cutting, Watts Water Plaque, General CAD, Machinist's Jack, Turning
cover:
    image: "/img/junior/juniorweek30/andrews.webp" # image path/url
    alt: "" # alt text
    caption: "" # display caption under cover
    relative: false # when using page bundles set this to true
    hidden: false # only hide on current single page
draft: true

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

Thursday last week I had started a project to build a shelf for the cart, but that got postponed when on Friday, the day of our Andrews presentation, JONA ROV mysteriously stopped working. Before we left for the Andrews, I determined that one of the ESC Board was the cause of the problem. For the live demos for the middle schoolers. I rewired the motors so that only four of them worked, but four motors gave JONA enough freedom of movemtns for the demo. It was quite disapointing that it broke *just in time* for a live demonstration.

!["Image of the now fixed ESC Board"](/img/junior/juniorweek30/escboard.webp)

It took me three days to fix JONA, and I am left none the wiser as to the cause of the problem than before.

Not one but two ESCs had mysteriously broken and were drawing massive amounts of current whenever they were connected. I ened up replacing them and the ESC Board worked again. However, before I determined they were the issue, I ended up desoldering a functional ESC in the process. Sometime between me testing the first ESC I desoldered and after I tested it again once it was back on the ESC Board, it was no longer functional.

I have to assume the repeatly soldering and desoldering the ESCs damages them over time, or at least has a high chance to damage them each time I do it. This ESC worked fine before I began investigating, but now it is dead. (For an unknown reason).

The whole ordeal finished with me replacing a total of three ESCs, all of which broke for unknown reasons. Definently not for the regional, but assuming we win, I plan to design an ESC Board V3 that we not require the ESCs to be directly soldered to the PCBs. It was a good idea, but ultimatly it appears it has too high a chance to damage the ESCs.

!["Image of my the cart"](/img/junior/juniorweek30/cart.webp)

After I had JONA fixed, I began cleaning the cart. It desperatly needed a wipe-down and the cables were a mess. I reorganized the cart and hopefully it should remain so for a slightly longer amount of time than it lasted before. I *am* aware that it will be impossible to keep the cart clean and organized, so I guess we'll just have to give it semi-annual cleanings. Or something.

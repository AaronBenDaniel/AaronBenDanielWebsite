
---
title: "Senior Week 16"
date: 2025-01-09
Summary: "Back from winter break"
tags: ["CAM","Manufacturing","Micromouse","Milling","Miscellaneous","Programming","Robotics Shop Blog","Water-Jet Cutting"]
# CAD, CAM, Cameras, Electronics, Electronics Tube, FDM Printing, Frame, General CAD, Laser Cutting, Manufacturing, Micromouse, Milling, Miscellaneous, PCB Design,
# Programming, Robotics Shop Blog, Routing, SLA Printing, Soldering, Sunk Robotics, Water-Jet Cutting, Watts Water Plaque, Machinist's Jack, Turning
cover:
    image: "/img/senior/seniorweek16/plaque.webp" # image path/url
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

Technically last week was the first week back from winter break, but it was only two days. This is the first *full* week back from winter break. I did three main things this week.

The first was that I finished the project Mr. L gave to me a while ago, that was stuck waiting for approval from the people who requested it from Mr. L. It's a plaque that'll go... somewhere... at the McGlynn Middle School. I water-jet cut the piece and then laser-engraved the text.

---

{{< youtube hhGokJL29Uo >}}

---

[Ben Wirz](https://benwirz.netlify.app/) is working on a project that involves a lot of milling, and he asked for my help with using our Tormach PCNC1100 CNC Mill. We wanted to try machining the part using the 4th axis, as it would reduce the number of setups and hopefully increase dimensional accuracy. Suffice it to say, it did not. Unfortunately it appears that our 4th axis has some weird issues (or we're just using it wrong) and rotating the part throws the Z axis all off. The part we took a video of has a skirt of metal around it that isn't supposed to be there. We ended up just doing it without the 4th axis and it finally came out correct.

Finally, I continued the frustrating task of attempting to make my Micromouse not drive into walls. My idea of the week is active angle correction based on the Time of Flight sensors. This is what a lot of other Micromice do, but it's so far been a challenge implementing it. In addition to actually implementing the adaptive movement, I needed to rewrite my motor driving code to be non-blocking. Before, I was creating a PWM signal using delays, but I've rewritten everything to use the ESP32 LEDC API, which uses hardware timers and interrupts to allow PWM signals to be generated in a non-blocking manner. Unfortunately, the different motor control method means I need to re-tune most of the movement stuff, which is a real pain.
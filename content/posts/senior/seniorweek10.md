
---
title: "Senior Week 10"
date: 2024-11-07
Summary: "More Turner's Cube(ing) with the Sophomores"
tags: ["Electronics","Micromouse","Milling","Robotics Shop Blog","Soldering"]
# CAD, CAM, Cameras, Electronics, Electronics Tube, FDM Printing, Frame, General CAD, Laser Cutting, Manufacturing, Micromouse, Milling, Miscellaneous, PCB Design,
# Programming, Robotics Shop Blog, Routing, SLA Printing, Soldering, Sunk Robotics, Water-Jet Cutting, Watts Water Plaque, Machinist's Jack, Turning
cover:
    image: "/img/senior/seniorweek10/cube.webp" # image path/url
    hidden: false # only hide on current single page
draft: true

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

This was a short week as we had Tuesday off because of the presidential election.

The main thing I did this week was to continue supervising the Sophomores in the machine shop while they were making their Turner's Cubes. This took up pretty much all of my time, so I didn't get to do too much on my Micromouse.

On Monday, I made some changes to and ordered the Upper Boards from JLC PCB, so they should be arriving sometime next week and I should (hopefully) be able to finish the hardware for my Micromouse.

On Wednesday, I wrote code to turn the on-board Neopixel on the QT-PY into a status indicator. I will use the RGB-LED to indicate the current state of the Micromoues. The color scheme will be:

```
Green - Done
Blue - Waiting
Yellow - Moving
Red - Failure
```

{{< highlight arduino  "linenos=table" >}}

void setColor(uint8_t color) {
  switch (color) {
    case RED:
      pixel.setPixelColor(0, 255, 0, 0);
      break;
    case GREEN:
      pixel.setPixelColor(0, 0, 255, 0);
      break;
    case BLUE:
      pixel.setPixelColor(0, 0, 0, 255);
      break;
    case YELLOW:
      pixel.setPixelColor(0, 255, 255, 0);
      break;
    case OFF:
      pixel.setPixelColor(0, 0, 0, 0);
      break;
  }
  pixel.show();
}

{{</ highlight >}}

I also wrote some code to use the on-board push-button to prompt the Micromouse to continue. I can add a `buttonCheckpoint();` line in the code to make the Mouse wait for a button press before continuing.

{{< highlight arduino  "linenos=table" >}}

void buttonCheckpoint() {
  int time = millis();
  bool toggle = false;
  while (digitalRead(0) == HIGH) {
    if (millis() - time > 500) {
      if (toggle) {
        setColor(BLUE);
        toggle = false;
      } else {
        setColor(OFF);
        toggle = true;
      }
      time = millis();
    }
  }
  setColor(BLUE);
  delay(3000);
}

{{</ highlight >}}

!["Image of the motor I'm using"](/img/senior/seniorweek10/motor.webp)

Last week, when I assembled the Lower Board, I switched one of the motors I had for another one that had straighter headers. I did not inspect or test the new motor at all. This was a mistake. Despite being labeled "50:1" the gear ratio on it was actually 75:1. This meant that one wheel took significantly more torque to turn and spun at a slower rate.

On Thursday, I desoldered the mislabeled motor and replaced it with one that I had verified had a 50:1 gear ratio.

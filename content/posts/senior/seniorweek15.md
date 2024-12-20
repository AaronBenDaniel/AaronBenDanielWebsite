
---
title: "Senior Week 15"
date: 2024-12-16
Summary: "Making my Micromouse go straight"
tags: ["Micromouse","Miscellaneous","Programming","Robotics Shop Blog"]
# CAD, CAM, Cameras, Electronics, Electronics Tube, FDM Printing, Frame, General CAD, Laser Cutting, Manufacturing, Micromouse, Milling, Miscellaneous, PCB Design,
# Programming, Robotics Shop Blog, Routing, SLA Printing, Soldering, Sunk Robotics, Water-Jet Cutting, Watts Water Plaque, Machinist's Jack, Turning
cover:
    image: "/img/senior/seniorweek15/guide.webp" # image path/url
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

I honestly didn't get much done this week. I've spent pretty much the entire week trying (and failing) a bunch of different methods to get my Micromouse to drive straight. Everything about the robot works, except for the fact that drives just the tiniest bit off-axis, which causes it to crash into the walls of the maze. I've tried almost everything I can think of to get it to stay parallel to the walls, and had some moderate success. Unfortunately, my efforts were insufficient and it still is not good enough.

However, I have one last trick up my sleeve, which is active wall-sensing angle adjustment. This is a pretty common feature in Micromice and I am taking some inspiration from a Micromouse guide I found online. Active wall-sensing was one of the first things I tried this week, but it didn't end up working out because the Time of Flight sensors I'm using take 40 milliseconds *each* to send back a reading, and in that time all other code execution is blocked, including my PWM motor control. Even if the adaptive driving code worked, code execution is blocked for too long and it spins wildly out of control.

However, after digging through the library I'm using to interface with the sensors and despite the utter lack of documentation, I found out that it has an asynchronous mode that will allow me to continuously read from the sensors in a non-blocking manor.

{{< highlight arduino  "linenos=table" >}}

class ToF_t {
   public:
    ToF_t(uint8_t initId, uint8_t initOffset) {
        id = initId;
        offset = initOffset;
    }

    void init() {
        tcaselect(id);
        if (!sensor.begin()) {
            Serial.print("Failed to find ToF sensor ");
            Serial.println(id);
            failure(2);
        }
        sensor.startRangeContinuous();
    }

    uint16_t getDistance() {
        tcaselect(id);
        if (sensor.isRangeComplete()) distance = sensor.readRange();
        return (distance);
    }

    bool detectWall() { return (getDistance() < MAZE_CELL_SIZE); }

   private:
    uint8_t id;
    Adafruit_VL53L0X sensor;
    uint8_t offset;
    uint16_t distance;

    void tcaselect(uint8_t i) {
        if (i > 7) return;

        Wire.beginTransmission(TCAADDR);
        Wire.write(1 << i);
        Wire.endTransmission();
    }
};

{{< / highlight >}}

This is my new and improved `ToF_t` class that should hopefully allow for continuous senor polling that does not block the execution of other code.

I haven't finished writing the adaptive driving code, as I just finished implementing asynchronous sensor polling today (2024-12-19), but I'm hopeful that it will work how I imagine it will. Maybe my Micromouse will finally work.
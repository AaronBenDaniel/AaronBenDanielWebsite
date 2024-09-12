
---
title: "Senior Week 02"
date: 2024-09-12
Summary: "Messing with (computer) mice and refactoring code"
tags: ["Electronics","Micromouse","Programming","Robotics Shop Blog"]
# CAD, CAM, Cameras, Electronics, Electronics Tube, FDM Printing, Frame, General CAD, Laser Cutting, Manufacturing, Micromouse, Milling, Miscellaneous, PCB Design,
# Programming, Robotics Shop Blog, Routing, SLA Printing, Soldering, Sunk Robotics, Water-Jet Cutting, Watts Water Plaque, Machinist's Jack, Turning
cover:
    image: "/img/senior/seniorweek02/mice.webp" # image path/url
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

I spent the first half of my week attempting to get data from an optical computer mouse with an Arduino board. My intention was to use the (computer) mouse to track xy movement of my (micro) mouse. However, I was ultimately unsuccessful and it appears I will need to find another way to track movement. Probably encoders.

After the disappointing outcome of my exploration into computer mice, I wanted to work on something other than electronics for a few days, so I began refactoring/rewriting my pathfinding code at the suggestion of [Scott Campbell](https://josephscottcampbell.com/), who believed that I could make my implementation of a Flood-Fill pathfinding algorithm significantly more memory efficient.

![".gif animation of the roll-over feature of my FIFO Queue"](/img/senior/seniorweek02/animation.gif)


I'm not done with refactoring the code, as I got side-tracked trying to write my own implementation of a First-In-First-Out (FIFO) Queue in Arduino/C++. I want to use a FIFO Queue in my new pathfinding algorithm, but Arduino/C++ does not natively support that data structure. I wanted to try writing my own, and I half succeeded. The code shown below is what I ended up writing. It has some very mysterious problems, though. When I compile it with G++ for Linux, it works fine, but when using the Arduino IDE it breaks.

I think this implementation (other than it's bugs) is pretty cool, it leverages the "feature" of unsigned integers that they roll over to `0` when they reach their maximum. This means that data never needs to be moved to shift the index of all the elements over one, because it can just continuously append data and when it reaches the end of the internal array, it will just roll over back to the start.

To be a bit more specific about it's problems, it works as expected when `startIndex` is a `uint8_t`, but that's too small and I need at least a `uint16_t`. However, this results in some very strange behavior. After appending the first piece of data, `startIndex` suddenly skips from `0` to `256`. This is a *very* suspicious number as it's exactly `2^8`, which implies something weird is happening to the low-byte and there's a weird off-by-one error.

I don't know what the problem is, and I'll probably never know, as I've given up on writing my own and have resigned to using an Arduino library to create a FIFO Queue. It (so far) appears to work as expected.

{{< highlight arduino  "linenos=table" >}}
class FIFOArray_t {
    struct xyPair_t array[65536];
    uint16_t startIndex = 0;
    uint16_t length = 0;

  public:
    struct xyPair_t read(uint16_t index) {
      index += startIndex;
      return (array[index]);
    }

    void remove() {
      startIndex++;
      length--;
    }

    int append(struct xyPair_t data) {
      uint16_t index = startIndex;
      index += length;
      if (index == startIndex && length != 0) return (0);
      array[index].y = data.y;
      array[index].x = data.x;
      length++;
      return (1);
    }
};
{{< / highlight >}}

I am aware of the off-by-one error involving `length`, but as I said, I'm not actually going to end up using this code.
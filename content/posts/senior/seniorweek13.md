
---
title: "Senior Week 13"
date: 2024-12-05
Summary: "My Micromouse works!*"
tags: ["Micromouse","Miscellaneous","Programming","Robotics Shop Blog"]
# CAD, CAM, Cameras, Electronics, Electronics Tube, FDM Printing, Frame, General CAD, Laser Cutting, Manufacturing, Micromouse, Milling, Miscellaneous, PCB Design,
# Programming, Robotics Shop Blog, Routing, SLA Printing, Soldering, Sunk Robotics, Water-Jet Cutting, Watts Water Plaque, Machinist's Jack, Turning
cover:
    image: "/img/senior/seniorweek13/samba.webp" # image path/url
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

The first two days of my week I spent setting up a Debian server and filesharing container for the Shop. I wanted to take a quick break from working on my Micromouse and was reminded of my repeated frustrations with Google Drive. The shop uses Google Drive to transfer files between computers, such as from my own to the Laser Cutter computer, but it's always slow and after editing a file, it takes a long time for the changes to sync.

I ended up building a server out of a Thinkpad running an instance of the `adevur/easy-samba` Docker container. It allows for instantaneous file transfers and can be used for other services as well, should the Shop require them.

---

{{< video "/img/senior/seniorweek13/video.mp4" "video" >}}

---

My big accomplishment for this week was finally getting my Micromouse running! It's still a long way from being done, but all the parts are together and now the main thing it needs is some tuning. At the moment, it's capable of navigating a maze, but it's very inconsistent and it's movements are quite imprecise. It needs to be baby-sat to keep from crashing into a wall. Some of the problems are due to the bumpy cardboard maze, and I do intend to build a nice wooden one. The maze I've been using so far is actually [Gabe Araujo](https://gabrielaraujo07.wordpress.com/)'s maze, who is building a normal size Micromouse.

The only information the robot is given in order to traverse a maze is:

- Starting coordinates
- Starting orientation
- Goal coordinates
- Cell size
- Maze dimensions

Everything else is learned during runtime using the onboard sensors.

Yes I know that it keeps turning in the wrong direction, I intend to fix that.
---
title: "Junior Week 04"
date: 2023-09-28
Summary: "The plaque is done! Also more PCB design…"
tags: ["CAD","Electronics","Electronics Tube","Manufacturing","PCB Design","Robotics Shop Blog","Sunk Robotics","Routing","Watts Water Plaque"]
cover:
    image: "/img/junior/juniorweek04/plaquefancy.webp" # image path/url
    alt: "Image of the Watts Water Plaque" # alt text
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

This week was a 4-day week, so I got less done this week than I normally would.

!["Image of the Watts Water Plaque"](/img/junior/juniorweek04/plaquehigh.webp)

!["Image of the Watts Water Plaque"](/img/junior/juniorweek04/plaquefancy.webp)

I finally finished the plaque for Watts Water, and it looks pretty good! I’m quite disappointed that my CNC engraved idea didn’t work out. I ended up just spray painting the metal sheet and then laser-engraving the text into it. The upside to this method is that I can do solid shapes and logos, instead of just lines.

!["Image of a 3D model of the Electronics Tube"](/img/junior/juniorweek04/electronics.webp)

After I finished up the plaque, I got back to work on the new electronics enclosure. Our new design will hopefully be far cleaner, easier to modify, and will also look a lot cooler. Our main tube (6in diameter) will have a frame with a bunch of slots on it, and a bunch of PCBs will go into each slot and be connected together with as few wires as possible. This week I designed two PCBs: the Power Distribution Board, and the I2C & Power Bus Board.

!["Image of a 3D model of the Power Distribution PCB"](/img/junior/juniorweek04/pd.webp)

The Power Distribution Board splits the incoming 12V for use in the two ESC Boards, and for the 12V to 5V converter on the PCB. The Power Distribution Board also has the 12 Channel PWM Controller for the ESCs, as it is the closest board to the ESC boards and the extra space.

!["Image of a 3D model of the logic PCB"](/img/junior/juniorweek04/lb.webp)

The I2C & Power Bus Board has a 6-port I2C bus and a 4-port 5V power bus. This board is not full size, and will go on a clear acrylic piece that fill fit into the electronics frame. This acrylic piece will also hold the Raspberry Pi 4B and a 9-axis IMU.

**While writing this blog post I thought of a much better way to do the I2C & Power Bus Board, so I’m gonna completely remake it Friday.**

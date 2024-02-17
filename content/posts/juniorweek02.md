---
title: "Junior Week 02"
date: 2023-09-14
Summary: "Engraving testing and facing the router."
tags: ["CAD","CAM","Manufacturing","Milling","Robotics Shop Blog","Sunk Robotics","Routing","Watts Water Plaque"]
cover:
    image: "/img/juniorweek02/router.webp" # image path/url
    alt: "Image of the spoilboard of the router after it was faced" # alt text
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
searchHidden: true
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

!["Image of my engraving attempt"](/img/juniorweek02/engrave.webp)

On Monday I tested out the engraving method I will use for the plaque I’m making for Watts Water Technologies. I used a diamond-drag engraving bit in the Tormach to CNC engrave some text (the words “Lanky Giraffe” were provided by Tanzy). The above engraving involved three engraving passes for each character offset 0.01 inches. The text came out very good and I believe I will continue to use this method for all my future engraving. I also was curious to see what the text would look like when sandblasted. The answer is not too good.

{{< figure src="/img/juniorweek02/before.webp" caption="Before facing" alt="Image of the router's spoilboard before facing" >}}

{{< figure src="/img/juniorweek02/router.webp" caption="After facing" alt="Image of the router's spoilboard after facing" >}}

In order to cut the wooden portion of the Watts Gift, I need to use the CNC router. I have had some experience with the machine, but I am definitely not confident with it yet. However, before the router can be used at all this year, the MDF board on it must be flat. It could either be replaced, or it could be faced down so that it’s flat again. I decided to try facing it down, and this involved creating a CNC program to have the router run over the entire board with a 3 inch diameter wood facing bit.

The program did not end up facing the entire board, with ~.25 in of board left over. I didn’t measure or zero the board or machine…. in any precise way, so this was expected. I manually faced the remaining bit by jogging the machine with the spindle active. Once the board was completely flat, I removed all of the old tape and retaped the board with the assistance of Tanzy.

!["Image of my engraving attempt"](/img/juniorweek02/drawing.webp)

I have written a CAM program to route the wooden part of the Watts Gift, but I haven’t cut it yet (as of Thursday).
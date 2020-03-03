# GameTube
I do not know what I am doing, but I will try to build a gaming platform.

GameTube is a code name for this project. This name actually my son came up. I do not think I would be able to use this name in production. It is sounding very close to YouTube. For now, it's a code name for the project.

## My vision for the GameTube

It's a gaming platform, and I think the YouTube analogy is perfect for explaining what I am envisioning. I want any person in the world to be able to make a game and publish it. And I want people to have easy access to games. Back in the days before YouTube, only big studios were able to produce and share video content -- movies. And to watch movies, people needed to go to the store or movie theater. Later they were able to download the content, I am talking about piracy, but no streaming. Right now it is a similar situation with games, you have to go and buy a game, we have some online platforms such as Steam, butyou have to purchase a game and download the whole game. We have Xbox (bata). It is like Netflix for games. I tried it a little, and I realized one thing is missing is a streaming ability, I have to download the whole game. Also, games made by game studios. I want making games and publishing them make as easy as making videos and posting them. To make a video, you need your smartphone, push the button, and upload it on YouTube.

This is, in general, my vision.

### Monetization
Objects on the platform have custom scripts (look at [scratch]( https://en.wikipedia.org/wiki/Scratch_(programming_language))). Objects need bits to run custom scripts. Bits can be acquired by watching ads or purchased by money.

## Plan
### January
- [x] png decoder
- [x] ogg decoder
- [x] export models
- [x] font rendering
- [x] Spatial sound
- [x] libuv or asio
- [x] Renderer [Vulkan](https://www.khronos.org/vulkan/) note: Godot does
      OpenGL 3 ES and it is fine
 

Retro:
Decided to use Godot engine


### February
- [x] Client-server communication/Network
  - [x] GDNative
- [x] audio encoder ([opus](http://opus-codec.org/))
- [x] serialization solution
- [x] encryption

Retro:
- Godot has a crash bug, the fix still in PR
- Spend some time moving to the bedroom from the loft
- Everything is implemented 25 minutes before new month

### March
Planing to have 2 game jams

#### Redis DB
- [ ] make a Godot project: multiplayer, VoIP, infinite floor and eggs
      as a player models
- [ ] save players position and rotations in DB
#### 3D modeler
#### Physics engine
- [ ] place cubes in the world


### April
- [ ] game simulation
- [ ] CDN Online assets
- [ ] Lobby
### May
- [ ] Redis DB cluster setup
- [ ] deploys
### June
- [ ] Log
- [ ] configuration
### July
- [ ] GUI solution
- [ ] curl
### August
- [ ] Animation
- [ ] Animator
### September
- [ ] Login
### October
- [ ] OAuth2
- [ ] http-server
### November
- [ ] Autoscale
- [ ] Money processing
### December
- [ ] telemetry
- [ ] integrate ad network

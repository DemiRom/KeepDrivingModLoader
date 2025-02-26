# Keep Driving Mod Loader / SDK

Hopefully the future mod loader and sdk for Keep Driving
Buy the game here: [Keep Driving On Steam](https://store.steampowered.com/app/2756920/Keep_Driving/)

## Building
Ensure you have a basic C development set up with meson and ninja.
```
mkdir build
cd build
meson setup ../
meson compile
```

## Goals
- Create a mod loader that is compatible as many game maker games as possible but focus on **Keep Driving**
- Keep dependencies to a minimum to allow for easy code readability and portability

## How it works
The data extractor binary unpacks the data.win file in the game, allowing for modifications of existing content.
The data packer binary packs everything back up to a data.win including whats included in the mods folder.
### The Mods Folder
Shall contain folders of each individual mod that includes scripts, textures, sprites and all other assets, including a *modinfo.json* file.

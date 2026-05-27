[![discord](https://shields.io/discord/1334106568253509692?style=for-the-badge&label=OG:BG&logo=discord&labelColor=black&color=5865F2)](https://discord.gg/E5vXyRd4ks)  
You can join our *Discord* server by clicking the button above.  


### STATUS  
  ### 🟢 Active, currently debugging the game's binary using an SDK generator and IDA and Ghidra.

### Progress 0.7% 




# <img src="web_help_files/pubg_lite_logo.png" width="40" height="40" />   OG:Battlegrounds Lite.
PUBG LITE game reverse engineering, for educational purposes.  


I want a free roam version of this game, which is why I'm working hard on the project.  
And also to have control over the game, I want to do funny things.  


In short, the game is working but needs several things fixed to make it stable and functional.  

# README! The game works, but it's not playable!  

This repository is to demonstrate progress and how things are going and how they stand.  

Don't expect too much for now.  

Below is a list of problems that haven't been fixed yet.  

I hope you understand.  


## NOTE! Current issues - 🟢 Repaired / 🟡 Partially repaired / 🔴 UNREPAIRED
 

#### 🚗 Vehicles
 - 🟢 Being able to drive  - Fix by ```PHIKILL```
 - 🟢 character positioned correctly in the seats  - Fix by ```PHIKILL```
 - 🟢 correctly switch to the vehicle seats, press CTRL + 1, 2, 3, 4, 5, 6, 7, 8, 9  - Fix by ```PHIKILL```
 - 🟡 to be able to get out of the vehicle  - Fix by ```PHIKILL```[^note].
   [^note]: NOTE! For now, the character is quite buggy when exiting the vehicle.
      The bugs are: character rotation and invalid activation of the underwater state.
  
#### 🧍‍♂️ Character 
 - 🔴 When aiming with ADS, the animation should be correct.  
 - 🟡 When looking around, the server replicates the character rotation according to the yaw while it is stationary.[^note2].
   [^note2]: - NOTE! I made a quick fix, so this conflicts with the **```ALT FreeCam```**, but it helps with the punching gameplay.
 - 🟢 receive and give damage - *needs to improve*  - Fix By ```H4tiux```
 - 🟢 successfully landing - *needs to improve* - Fix By ```JerryPrimeDev``` and ```PHIKILL```  
 - 🔴 Correctly updating character information in the inventory. such as keeping a helmet and other equipment even when they are unequipped.

#### 🌎 World
 - 🔴 Relevance correction based on distance from the camera's ```viewTarget```. - This problem causes physics-based actors to fall when they are far from the host's camera.  
 - 🔴 DOORS, Yes, the doors are quite complicated; they neither open nor close, and they are not being replicated.
    - NOTE! Partially fixed, it works on the host, but the door is not replicated to the clients.
 - 🔴 Item spawning on maps  
 - 🔴 Vehicle spawning on maps  


#### 🔫 Weapons
 - 🔴 Replicate gunshots, including impact, decals, effects, and damage.  
 - 🟡 reloading weapons in newer versions - Fix By ```H4tiux``` [^note3].
  [^note3]: It works well, but needs improvement because it's quite broken.
 - 🔴 The Grenades timings has been corrected to 5 seconds instead of 2.5.  

### Other issues in newer versions were fixed by H4tiux, such as the camera in the battle royale plane, getting out of the plane, crash problems, and others.


## Game Lobby 

### Lobby Code : -> [ogbg_lobby](https://github.com/phikill/RE_PUBG_LITE/tree/ogbg_lobby)  
#### *WORKS ON ALL VERSIONS OF THE GAME*  

## READ  

The lobby is just web code, so you can open it in your browser.  

The game uses Coherent GT to apply web elements as UI.  

#### It has several problems such as  
 - 🔴 Sometimes, repeatedly, or constantly, the asynchronous loading of game information via Coherent GT fails to respond and gets stuck in an infinite loading loop.  
 - 🔴 Clicks fail in the lobby; you have to move the cursor so that the command switching focuses on web elements.

 The code is completely *open source* ❤️; **if anyone has the knowledge, they can access the branch listed above and modify the code**. It would help me a lot 
 Since -> ***I don't have much experience with web coding*** 💔, I hate it and it's very annoying.   

 
### The following are parameter commands for the online lobby hosted on GitHub Pages.
### If you want to use it offline, access the branch and follow the instructions.  

```@PUBGLite-Win64-Shipping.exe -UI -LobbyUrl="https://phikill.github.io/RE_PUBG_LITE/custom_lobby/index.html" -AllowJoinAnyMatchState -LOG -NOSPLASH```

## The ```-AllowJoinAnyMatchState``` parameter is required for creating matches; otherwise, you will not be able to.

<img src="web_help_files/lobby_preview.png" alt="lobby_preview" width="600">
<img src="web_help_files/lobby_preview_2.png" alt="lobby_preview_2" width="600">

You can create simple matches in the ```custom_match``` menu. To play, simply open two instances of the game: one will be the ```server``` and the other the ```client```.   

## 🕹️ 🎮 🌐 PLAY! | Creation of Match / Open Map | Join a Match


### Remember, you need to open the program twice! this part is to turn the current process window into a host server, which is not playable.

***To play, you need another instance and to join the match. as a CLIENT***

These images below are an example.  

The host cannot interact with elements in the environment, among other things; it is not meant to be played, only to host the game.  

(1) Host (2) Client  

```0.7.0.1```
<img src="web_help_files/host_pic_0701.png" width="400"><img src="web_help_files/client_pic_0701.png" width="400">  
```1.4.0.15```
<img src="web_help_files/host_pic_14015.png" alt="host_pic_14015" width="400"><img src="web_help_files/client_pic_14015.png" alt="client_pic_14015" width="400">  

You can ***create matches*** from the *lobby* in any version of the game except those mentioned later, and you can also use an SDK to open the map with DLL injection, or in the server panel.

### STEPS TO PLAY
  (1). First, create a match as ***host*** 👑🌐🗔.  
  - Make sure you have all the pre-configuration information, such as **server port** and the map's **gamemode blueprint**.  
  
  (2). You can join the match 🖥️🎮   
  - from the lobby by entering the IP address in the ```join from IP Adress``` option. If you are on the same computer as the host, simply enter ```127.0.0.1``` if everything is standard.
  - If you're trying to connect using a different port or IP address, just try something like this.

  on the page : ```CUSTOM MATCH/JOIN FROM IP ADRESS```  
    (1) in case it's a different port : Example ```9999```  
    - ```127.0.0.1:9999```  
      
  (2) In case it's a different IP address but with the standard port : ```7777```.  
    -  ```192.168.15.15```    
  
  (3) in case the IP address and port are configured differently : Example ```4050```   
    -  ```192.168.15.15:4050```    

  (4) default local address, and default port   
  - ```127.0.0.1:7777``` The address of the same computer that is being hosted and the default port defined by Unreal Engine.       
  
By default, the game opens on port ```7777```.   

 (1).You can **change** the port by adding a new parameter ```?port=``` to the ```UWorld``` URL in Unreal Engine  
  - Like :  ```open MapName?listen?port=7778```  

(2).Or you can use it in the program parameters ```-port=```
 - Like :  ```PUBGLite-Win64-Shipping.exe -UI -LobbyUrl="" -AllowJoinAnyMatchState -NOSPLASH -port=9999 ```  



matchmaking works up to version ```1.4.0.15```, in higher versions like ```1.4.2.423``` and ```1.4.2.681``` the game crashes

## Note: the fixes are in the releases; you just need to inject the DLL on the host side when the game is loaded and in the lobby. You can inject it during the match, but I recommend injecting it before any player joins the match or lobby.


## Game Launcher

##### *WORKS ON ALL VERSIONS OF THE GAME*   

 I'm decompiling the launcher and making it in pure C, with support for ~~Linux~~ and even ~~Windows XP~~.  
### Currently, I only have Windows, and I've disabled XP support for now, as it doesn't make sense.  

### You can download this branch here; it contains the source code and the binary file in ```bin/nt_64/```.   
## Branch Link :[Launcher Source Code](https://github.com/phikill/RE_PUBG_LITE/tree/ogbg_game_launcher)  

### README!

(1). Currently, the launcher only serves to add a nickname, in this case, simply change the UID, and disable the ```Please run from launcher``` error message.  
<img src="web_help_files/no_launcher_err.png" alt="no_launcher" width="200">  

(2). If you are trying to open PUBG Lite 0.7.0.1 and are receiving a LauncherIpc.dll message like the one below.  
<img src="web_help_files/LauncherIpc_dll_err.png" alt="LauncherIpc_dll_err" width="300">  

 - You need the crack that's in this release : [0.7.0.1 Crack Patch](https://github.com/phikill/RE_PUBG_LITE/releases/tag/mod_dev)  

That's all there is to it; **you can't start the game from the Launcher**, -> you have to start it ***Externally***.  

If you want, you can implement it yourself; the code is in C, using Chromium for web with the LIBCEF library for its implementation.   

And be happy, the code is in the branch mentioned above.  

 
 Login Page - nickname only  
<img src="web_help_files/lpc_launcher_login_01.png" alt="launcher_windows_login" width="600">  

 Login Page - nickname Set *```CHICKEN```*  in capital  
<img src="web_help_files/lpc_launcher_login_02.png" alt="launcher_windows_login_2" width="600">  

 Main Page - there is little here   
<img src="web_help_files/lpc_launcher_main_page.png" alt="launcher_windows_mainPage" width="600">  

### The ```LauncherIpc.dll``` implementations work.  

 Nickname inside Game - set in launcher - lobby view 0.7.0.1  
<img src="web_help_files/ingame_nickname_01.png" alt="launcher_windows_ingame" width="600">  

 Nickname inside Game - set in launcher - Training Mode 0.7.0.1  
<img src="web_help_files/ingame_nickname_02.png" alt="launcher_windows_ingame_2" width="600">  


## IGNORE, OLD PHOTOS , the first steps of the project , It only works now on ```Windows 7 x64``` or higher .
 Cef Working o Windows XP  
<img src="web_help_files/lpc_launcher_nt.png" alt="launcher_windows" width="600">

 and the same code working on linux  
<img src="web_help_files/lpc_launcher_linux.png" alt="launcher_linux" width="600">





## Server Panel

I created this Server Panel to remotely control the server from a browser, view its status, and more.  

#### Don't expect too much; when trying to spawn vehicles, there's a 99% chance your server will crash. But it works fine.  

More implementations and bug fixes will follow in the future.  

<img src="web_help_files/server_panel.png" alt="server_panel" width="1000">  

#### You can switch maps and gamemode blueprints.   
<img src="web_help_files/server_panel_change_map.png" alt="server_panel_map_change" width="1000">  

#### The players' positions will be represented on the 2D map.   

<img src="web_help_files/server_panel_game_compare.png" alt="server_panel_position_comparision" width="1000">  

#### You can call Unreal console commands from the page; there are some tick issues at the moment, but I'll fix that later.   
<img src="web_help_files/server_panel_unreal_console.png" alt="server_panel_console" width="1000">  


#### You can spawn vehicles from the page; there are some tick issues at the moment, but I'll fix that later.
<img src="web_help_files/server_panel_vehicle_spawn.png" alt="server_panel_vehicle_spawn" width="1000">  


#### You can kick any players you want out of the match.
<img src="web_help_files/server_panel_kick_player.png" alt="server_panel_kick_player" width="1000"> 


# ⬇️ Download Section <- Game Backups  

or this  
  🟢[1.4.2.681 | (02.22.2021) link 1](https://drive.google.com/drive/folders/19vs1__70kZsb7YQScpdWKtGa2-Xwi9gj)  
  🟢[1.4.2.681 | (02.22.2021) link 2](https://archive.org/details/pubglitebuild)  
  🟢[1.4.2.423 | (23.02.2020)](https://drive.google.com/drive/folders/1IWccZ7mIpKqnnrxmyTDGBmvkkb2tyOqD)  
  🟢[1.4.2.14  | (..)](https://archive.org/details/pubglite-client-garena)  
  🟢[1.4.0.15  | (21.11.2019)](https://drive.google.com/file/d/1vQizbEEg1mBOqHECOLK_x265lKeJYsWr/view)  
  🟢[1.3.0.90  | (10.10.2019)](https://drive.google.com/drive/folders/1ZVqzeA_iAaDMlKcgl4jdZ7Vxj8J78qS4)  
  🔴[1.0.0.40  | (2019)](https://windows96.net/)  
  🟢[0.8.3.14  | (6.07.2019) link 1](https://drive.google.com/file/d/1wotozQEiRqluQlcPX__wfgg1dLGDOkCj)  
  🟢[0.8.3.14  | (6.07.2019) link 2](https://drive.google.com/file/d/1Pgsy5zvh6LkAXkD9flAm4XzQ8z94fwlw)  
  🟢[0.8.1.29  | (1.8.2019) link 1](https://www.mediafire.com/folder/ae379oal06b31/PUBG_Lite_Pc)  
  🟢[0.8.1.29  | (1.8.2019) link 2](https://drive.google.com/file/d/1iSWF9-58YD8qAft4wjSaMgEw1742tYZn)  
  🟢[0.7.7.20  | (2019)](https://drive.google.com/drive/folders/1IksQao0KPgU1KEnwEug7qDpdiBBIAxxt)  
  🔴[0.7.3.32  | (2019)](https://cat-bounce.com/)   
  🔴[0.7.1.48  | (2.2019)](https://hackertyper.net/)  
  🟢[0.7.0.1   | (24.1.2019) link 1](https://gamingredzzone.blogspot.com/2018/03/download-pubg-pc-lite-highly-compressed.html)  
  🟢[0.7.0.1   | (24.1.2019) link 2](https://drive.google.com/file/d/1KYxERzT6huJszMLa5hljvZ1KoR5L3tbG)  

## TOOLS

some tools that I use to modify the game

name of the tools so I don't forget  


 ### *navigate through the game's resources.*  

.PAK files exploring [PUBG Lite Explorer by Warranty Voider](https://github.com/zeroKilo/PUBGLiteExplorerWV)  
[UMODEL](https://www.gildor.org/en/projects/umodel)   
[FModel](https://fmodel.app/)   
[UAssetGUI](https://github.com/atenfyr/UAssetGUI)  
[UnrealLocres](https://github.com/Snoozeds/UnrealLocresEditor)  


### *Network manipulation and Backend*

[Wireshark](https://www.wireshark.org/) 
[EchoMirage](https://sourceforge.net/projects/echomirage.oldbutgold.p/)  
[FakeNet](https://github.com/fireeye/flare-fakenet-ng/releases)  
[Cain & Abel](https://sectools.org/tool/cain/)   
[Postman](https://www.postman.com/)   
[node.js](https://nodejs.org/)   
[Nmap](https://nmap.org/)   


### *Direct Modification to the binary*

QuickUnpack 4.3  
[xvolkolak Unpacker](https://n10info.blogspot.com/2018/03/xvolkolak-010.html)    
[Detect It Easy DIE](https://github.com/horsicq/Detect-It-Easy)    
[HXD](https://mh-nexus.de/en/hxd/)    
[ImHex](https://imhex.werwolv.net/)    

##### Launcher Binaries and C# things
[dnSpy](https://dnspy.org/)    
[ILSpy](https://ilspy.org/)    

### *Manipulating values ​​in memory*

[CheatEngine](https://www.cheatengine.org/)  

### *Unreal Engine Dumpers, and others*  

[Dumper-7](https://github.com/Encryqed/Dumper-7)   
[UE4-Function-Address-Finder](https://github.com/patrickBakin/UE4-Function-Address-Finder)   
[Unreal Engine Uasset Viewer/Editor](https://github.com/kaiheilos/Utilities)  
[Kismet Analyzer](https://github.com/trumank/kismet-analyzer)  

### *Analyze system calls and usage of the Win32 API, among other things.*

[depends22_x64](https://www.dependencywalker.com/)    
[winapiexec64](https://ramensoftware.com/winapiexec)    
[Xenos_2.3.2](https://github.com/DarthTon/Xenos/releases)    
[X64DBG](https://x64dbg.com/)  
[Ghidra](https://github.com/NationalSecurityAgency/ghidra)     
[Error Lookup](https://github.com/henrypp/errorlookup)    
[FileGrab](https://sourceforge.net/projects/filegrab/)    
[ForceToolKit](https://autoclose.net/forcetoolkit.html)    
[RegShot](https://sourceforge.net/projects/regshot/)     
[Process Explorer](https://www.majorgeeks.com/files/details/microsoft_process_explorer.html)   
[OpenHashTab](https://github.com/namazso/OpenHashTab)    

[JWlink](https://github.com/JWasm/JWlink)    
[UASM](https://github.com/Terraspace/UASM)   

  

### *other utilities*
  
[CyberChef](https://gchq.github.io/CyberChef/)    
[XOpcodeCalc](https://github.com/horsicq/XOpcodeCalc)  
[Hollows_Hunter](https://github.com/hasherezade/hollows_hunter)  
 
   
  


  

 
  
  
  




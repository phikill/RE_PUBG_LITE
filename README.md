


v <strike>1.4.2.423 </strike>  
 First I'm going to do 0.7.0.1, as it's "easier"  


### STATUS  
  ### 🟢 Active, currently debugging the game's binary using an SDK generator and IDA and Ghidra.

 #### I recently got the game's vehicles working and helped with the automatic landing fix.  

### Progress 0.4% 




# <img src="web_help_files/pubg_lite_logo.png" width="40" height="40" />   OG:Battlegrounds Lite.
PUBG LITE game reverse engineering, for educational purposes.  


I want a free roam version of this game, which is why I'm working hard on the project.  

 ### *Yes, there will be bots in the future; the OGBG team is working on it.*  

# -> ⬇️ Download Section<- Game Backups  
 ### GOOGLE DOCS LINK: [Pubg Lite Versions](https://docs.google.com/spreadsheets/d/1IHKbZCIqBKopSOlVbpHOP9RoFpKclbAfpKhAF2aYa2U/edit?gid=0)  

### 📦 OR With a Better! Summary
<details>
  <summary>➡️ Click Summary</summary>
  
  ### 🟢[1.4.2.681 (02.22.2021) link 1](https://drive.google.com/drive/folders/19vs1__70kZsb7YQScpdWKtGa2-Xwi9gj)  
  ### 🟢[1.4.2.681 (02.22.2021) link 2](https://archive.org/details/pubglitebuild)  
  ### 🟢[1.4.2.423 (23.02.2020)](https://drive.google.com/drive/folders/1IWccZ7mIpKqnnrxmyTDGBmvkkb2tyOqD)
  ###	🟢[1.4.2.14](https://archive.org/details/pubglite-client-garena)
  ###	🟢[1.4.0.15 (21.11.2019)](https://drive.google.com/file/d/1vQizbEEg1mBOqHECOLK_x265lKeJYsWr/view)
  ###	🟢[1.3.0.90 (10.10.2019)](https://drive.google.com/drive/folders/1ZVqzeA_iAaDMlKcgl4jdZ7Vxj8J78qS4)
  ###	🔴[1.0.0.40 (2019)]
  ###	🟢[0.8.3.14 (6.07.2019) link 1](https://drive.google.com/file/d/1wotozQEiRqluQlcPX__wfgg1dLGDOkCj)
  ###	🟢[0.8.3.14 (6.07.2019) link 2](https://drive.google.com/file/d/1Pgsy5zvh6LkAXkD9flAm4XzQ8z94fwlw)
  ###	🟢[0.8.1.29 (1.8.2019) link 1](https://www.mediafire.com/folder/ae379oal06b31/PUBG_Lite_Pc)
  ###	🟢[0.8.1.29 (1.8.2019) link 2](https://drive.google.com/file/d/1iSWF9-58YD8qAft4wjSaMgEw1742tYZn)
  ###	🟢[0.7.7.20 (2019)](https://drive.google.com/drive/folders/1IksQao0KPgU1KEnwEug7qDpdiBBIAxxt)
  ### 🔴[0.7.3.32 (2019)]
  ###	🔴[0.7.1.48 (2.2019)]
  ###	🟢[0.7.0.1 (24.1.2019) link 1](https://gamingredzzone.blogspot.com/2018/03/download-pubg-pc-lite-highly-compressed.html)
  ###	🟢[0.7.0.1 (24.1.2019) link 2](https://drive.google.com/file/d/1KYxERzT6huJszMLa5hljvZ1KoR5L3tbG)

</details>

## Game Lobby 

Lobby Code : Branch  [ogbg_lobby](https://github.com/phikill/RE_PUBG_LITE/tree/ogbg_lobby)  
##### *WORKS ON ALL VERSIONS OF THE GAME*  

```@PUBGLite-Win64-Shipping.exe -UI -LobbyUrl="https://phikill.github.io/RE_PUBG_LITE/custom_lobby/index.html" -AllowJoinAnyMatchState -stdout -LOG -cmd -NOSPLASH -nothreadtimeout```


<img src="web_help_files/lobby_preview.png" alt="lobby_preview" width="600">
<img src="web_help_files/lobby_preview_2.png" alt="lobby_preview_2" width="600">

You can create simple matches in the custom_match menu. To play, simply open two instances of the game: one will be the ```server``` and the other the ```client```.   

By default, the game opens on port ```7777```.   

matchmaking works up to version ```1.4.0.15```, in higher versions like ```1.4.2.423``` and ```1.4.2.681``` the game crashes


## Game Launcher

##### *WORKS ON ALL VERSIONS OF THE GAME*   

 I'm decompiling the launcher and making it in pure C, with support for ~~Linux~~ and even ~~Windows XP~~.  
### Currently, I only have Windows, and I've disabled XP support for now, as it doesn't make sense.  

### You can download this branch here; it contains the source code and the binary file in ```bin/nt_64/```.   
## Branch Link :[Launcher Source Code](https://github.com/phikill/RE_PUBG_LITE/tree/ogbg_game_launcher)  
 
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



## TOOLS


name of the tools so I don't forget  

.PAK files exploring [PUBG Lite Explorer by Warranty Voider](https://github.com/zeroKilo/PUBGLiteExplorerWV)  
UMODEL 

depends22_x64  
FModel  
JWlink  
SmartSteamEmu143  
uasm256_x86  
umodel_win32  
CheatEngine  
node.js  
UAssetGUI  
UnrealLocres  
Wireshark  
Xenos_2.3.2  
Ghidra  
7zip  
xvolkolak  
ForceToolKit  
SublimeText  
RegShot  
winapiexec64  
QuickUnpack 4.3  
Process Explorer  
Detect It Easy DIE  
OpenHashTab  
EchoMirage  
[FakeNet](https://github.com/fireeye/flare-fakenet-ng/releases)  
Nmap  
HXD  
ImHex  
FileGrab  
Error Lookup  
dnSpyEx64  
ILSpy  
Delphi IDR  
X64DBG  
CyberChef  
XOpcodeCalc  
Hollows_Hunter  
Cain & Abel  
Postman  
  




# LITEPC Launcher

#### rebuilding and reverse engineering pubg lite launcher  

## What is the focus of this repository?  

It focuses on rebuilding the pubg lite launcher, using c and c++ instead of c#.

Focusing on cross-platform and weaker PCs, supporting up to Windows XP SP3+ / Linux / macos, the development may be a bit long, but this code could become something special

the implementations will be the same/similar to the original launcher  

Currently the code is in the initial stages of basic testing, just for functionality

## BUILD   
### What is needed to compile ?  

</div>
  <details>
   <summary> Windows 7 or higher </summary>
   You need Visual Studio 2019 or 2022, I only tested it with these, maybe it will work with other versions, just change some parameters within the batch script  
 
 
run `build_launcher_visual_studio.bat` and it will compile and generate an `X32` or `X64` file locally `lpc_launcher.exe` , which you can test by placing it inside `bin/nt_86``` or  ```bin/nt_86` depending on what architecture you built  

to modify which architecture or version of visual studio, open `build_launcher_visual_studio.bat` with any text editor and modify the variables `set vsv= ` for the year of the version of your visual studio, sometimes it may not always work if you have installed it in a different location, but in this case I am following the standard installation, and for the architecture you modify the variable `set cpuarch= ` supporting the values `​​86` or `64`

</details>

# old scripts that no longer work


</div>
  <details>
   <summary> Windows XP SP3 or higher </summary>  


 to compile for Windows XP and higher systems you need `Open Watcom 1.9`  


run ```build_launcher_watcom.bat``` and it will compile and generate an X32 file locally ```lpc_launcher.exe``` , which you can test by placing it inside ```bin/nt_86```  


watcom generates light, fast and optimized files, but not secure.  


watcom only supports 32-bit binaries, from 386 to 686 floating point control  

</details>



</div>
  <details>
   <summary> Linux </summary>  
  
  to compile on linux you need `gcc` and some additional dependencies related to `x11` and `cef`  
  
`libx11-dev libxcomposite-dev libxrandr-dev libxtst-dev libxext-dev
libxfixes-dev libxrender-dev libxcursor-dev libgconf-2-dev
libglib2.0-dev libnss3-dev libatk1.0-dev libasound2-dev libxdamage-dev libdl-dev
libpthread-stubs0-dev librt-dev`  
  
  to compile just run `build_launcher_gcc_linux.sh` which will generate a `x64` binary file locally `lpc_launcher.elf`, and you can test it by placing it inside `bin/linux_64`

</details>  

</div>
  <details>
   <summary> Apple Systems </summary>  

</details>  
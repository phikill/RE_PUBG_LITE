
## Attention  

I recommend compiling the code in debug mode.  

 
Furthermore, you will encounter compilation issues due to missing static libraries, such as the file ```SDK_142681_LIB.lib```.    


But don't worry—you can create your own file;  
simply compile ALL the ```.cpp``` files from the SDK and build a static ```.lib``` library.   
This will make it easier to compile the final project—the DLL used for modifying the game.   

# Important!  

The SDK may contain errors, so you might occasionally end up accessing the wrong offsets—unintentionally—due to the incorrect alignment of members within structures and classes.   

Sometimes the issue stems from a simple `#pragma` directive,  
  sometimes from members having the wrong size, or from more complex problems involving inheritance—such as those found in the `UObject` class, among others.

Nevertheless, it remains usable; I personally use it in my own code, though it requires an extra check.  

Unlike version 0.7.0.1, this version is more prone to crashes and employs more aggressive encryption, which makes using the SDK somewhat more challenging.  


The TDM modes work quite well; just comment out the call to `ProcessPlayers`, as it occasionally causes crashes—I’m not sure exactly where it’s located at the moment.  
There are also some check codes for applying appearance changes within `ProcessEvent`; you should comment those out as well—though feel free to keep them if you’d prefer.  


The hooks required for important fixes are those for ```GetNetMode()```; I disabled the main one due to issues and conflicts, but left the ones for ```AActor_InternalGetNetMode``` and ```UActorComponent_InternalGetNetMode``` enabled.  


Internal code performs a `netMode` check, always expecting a "dedicated server" environment to function correctly.  
Since the PUBG Lite architecture was designed exclusively for a dedicated server model, playing via a "listen server" (where a player acts as the host) causes `getNetMode` to return an unexpected value.  
Because the system does not identify this as a standard client, various issues arise—most notably regarding input handling, switching seats or exiting vehicles, character updates within the inventory, game state synchronization, the battle royale plane, and the interaction with in-game doors, among other elements.

Therefore, it is essential that these two hooks remain enabled.  

# master masons who contributed to the project 

H4tiux  
Senku Aoki  
PHIKILL  
xXMrYashXx   
Kirito/miku~/ ... IDK  

among other members whose names I’ve forgotten  


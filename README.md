v <strike>1.4.2.423 </strike>  
 now 0.7.0.1  First I'm going to do 0.7.0.1, as it's "easier"  

### STATUS  
  PAUSED  

### Progress

 the game and launcher are still not buildable, I stopped for a long time.

# <img src="web_help_files/pubg_lite_logo.png" width="40" height="40" />   Battlegrounds Lite.
PUBG LITE game reverse engineering test

you can find some old backup files in my google drive including 2019 launcher and game with version 1.4.2.423
[PUBG LITE Backup April 2020 - Google Drive](https://drive.google.com/drive/u/0/folders/1IWccZ7mIpKqnnrxmyTDGBmvkkb2tyOqD)  
includes the 2019 launcher but some update servers are still active.  

and includes the game with its files. 

## TOOLS

.PAK files exploring [PUBG Lite Explorer by Warranty Voider](https://github.com/zeroKilo/PUBGLiteExplorerWV)  
UMODEL = bug

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
  
## Launcher Free ThirdParty Resources.

Launcher [Newtonsoft.json.dll](https://github.com/JamesNK/Newtonsoft.Json/releases/tag/13.0.3 ) v12.01  
Launcher [WpfAnimatedGif.dll](https://github.com/XamlAnimatedGif/WpfAnimatedGif) v1.4.18  
Launcher [System.Web.Http.dll](https://www.nuget.org/packages/microsoft.aspnet.webapi.client/5.2.6) v5.2.61128.0  ASP.NET  
Launcher [System.ValueTuple.dll](https://dotnet.microsoft.com/pt-br/download/dotnet-framework/net462) v4.6.26515.6  NET.FRMW  
Launcher [System.Net.Http.Formatting.dll](https://www.nuget.org/packages/microsoft.aspnet.webapi.client/5.2.6) v5.2.61128.0  ASP.NET  
Launcher [System.Diagnostics.FileVersionInfo.dll](https://dotnet.microsoft.com/pt-br/download/dotnet-framework/net462) v4.6.24705.1 NET-FRMW  
Launcher [Microsoft.IdentityModel.Tokens.dll](https://www.nuget.org/packages/Microsoft.IdentityModel.Tokens/5.4.0) v5.4.0.60123  Microsoft IdentityModel  
Launcher [Microsoft.IdentityModel.Logging.dll](https://www.nuget.org/packages/Microsoft.IdentityModel.Tokens/5.4.0) v5.4.0.60123  Microsoft IdentityModel  
Launcher [libGLESv2.dll](https://github.com/adobe/angle/tree/master/src/libGLESv2) v2.1.0.0  
Launcher [libEGL.dll](https://github.com/adobe/angle/tree/master/src/libEGL) v2.1.00  
Launcher [libcef.dll](https://www.nuget.org/packages/AZ.ChromiumFX) v3.3578.1870.0  I didn't find this version.  
Launcher [d3dcompiler_47.dll](https://strontic.github.io/xcyclopedia/library/d3dcompiler_47.dll-F63597DF3B9348FFC0700915768987D1.html) v10.0.17134.12  
Launcher [chrome_elf.dll](https://chromium.googlesource.com/chromium/src/+/master/chrome/chrome_elf/) v71.0.3578.98 ??  
Launcher [chrome_elf.dll](https://chromereleases.googleblog.com/2018/12/stable-channel-update-for-desktop_12.html) v71.0.3578.98 ??  
Launcher [CefSharp.Wpf.dll](https://www.nuget.org/packages/CefSharp.Common/71.0.2) v71.0.2.0  
Launcher [CefSharp.dll](https://www.nuget.org/packages/CefSharp.Common/71.0.2) v71.0.2.0  
Launcher [CefSharp.Core.dll](https://www.nuget.org/packages/CefSharp.Common/71.0.0) v71.0.0.0  
Launcher [CefSharp.BrowserSubprocess.Core.dll](https://www.nuget.org/packages/CefSharp.Common/71.0.0) v71.0.0.0  
Launcher [CefSharp.BrowserSubprocess.exe](https://www.nuget.org/packages/CefSharp.Common/71.0.2) v71.0.2.0  
Launcher CefSharp Source [Link](https://github.com/cefsharp/CefSharp/releases/tag/v71.0.2) v71.0.2  
Launcher CefSharp Source [Link](https://github.com/cefsharp/CefSharp/releases/tag/v71.0.0) v71.0.0  

### What are these remaining files for? 

#### ``` cef.pak, cef_100_percent.pak, cef_200_percent.pak, cef_extensions.pak ```: These are CEF (Chromium Embedded Framework) resource packs. They contain data such as texts, images, settings, and other resources necessary for the built-in browser to function. The "100_percent" and "200_percent" versions refer to the resolution of the assets (100% and 200% for high DPI devices).  

#### ``` devtools_resources.pak ```: This file contains the resources used by the Chromium Developer Tools, which can be accessed in Chromium-based browsers.  

#### ``` icudtl.dat: ```: This file contains internationalization and language support data, necessary for CEF to support different languages ​​and text encodings (via ICU - International Components for Unicode).  

#### ``` snapshot_blob.bin ```: This file is part of the V8 engine (Chromium's JavaScript engine). It stores a snapshot (an initial "image") of the JavaScript virtual machine's memory state to speed up loading.  

#### ``` v8_context_snapshot.bin ```: This file is used by V8 to initialize JavaScript execution contexts more quickly. It contains a predefined capture of a JavaScript environment that can be loaded directly instead of being generated dynamically.  

#### Many of the files are related to the Chromium Embedded Framework (CEF), which the launcher appears to use to embed a Chromium-based browser within the application. This allows the launcher interface to utilize web technologies and execute scripts, such as JavaScript, in a secure and controlled environment. The .pak and .bin files are part of the support for web rendering, internationalization, and efficient JavaScript execution.  

## code tree 

``` 
T
└───buildagent
    └───work
        └───53e164db35e35713
            └───LitePC
                ├───client-launcher
│               └───launcher
│                   └───LauncherView
│                       │   MainWindow.xaml.cs
│                       │
│                       └───JsInterop
│                            LauncherObject.cs
│
├───Survive
│   │   AssetRegistry.bin
│   │   CookedIniVersion.txt
│   │   DevelopmentAssetRegistry.bin
│   │   Missing_Modules.txt
│   │   ShadowTrackerExtra.uproject
│   │
│   ├───Config
│   │   │   AIConfig.ini
│   │   │   ConsoleVariables.ini
│   │   │   DefaultCommandLet.ini
│   │   │   DefaultDeviceProfiles.ini
│   │   │   DefaultEditor.ini
│   │   │   DefaultEditorSettings.ini
│   │   │   DefaultEngine.ini
│   │   │   DefaultGame.ini
│   │   │   DefaultGameUserSettings.ini
│   │   │   DefaultInput.ini
│   │   │   DefaultLogSuppression.ini
│   │   │   DefaultPrivateSettings.ini
│   │   │   DefaultScalability.backup.ini
│   │   │   DefaultScalability.ini
│   │   │   DefaultServerSwitch.ini
│   │   │   DefaultUAE.ini
│   │   │   Plugin.ini
│   │   │   SafeConfig.ini
│   │   │
│   │   └───Localization
│   │           Game_Compile.ini
│   │           Game_Export.ini
│   │           Game_Gather.ini
│   │           Game_GenerateReports.ini
│   │           Game_Import.ini
│   │
│   ├───Intermediate
│   │   ├───Build
│   │   │   └───BuildRules
│   │   │           ShadowTrackerExtraModuleRules.dll
│   │   │           ShadowTrackerExtraModuleRules.pdb
│   │   │           ShadowTrackerExtraModuleRulesSourceFiles.txt
│   │   │
│   │   ├───Config
│   │   │   └───CoalescedSourceConfigs
│   │   │           ActorSequence.ini
│   │   │           AESHandlerComponent.ini
│   │   │           AndroidPermission.ini
│   │   │           ApexDestruction.ini
│   │   │           AppleARKit.ini
│   │   │           AvfMedia.ini
│   │   │           BlueprintMaterialTextureNodes.ini
│   │   │           CableComponent.ini
│   │   │           CoherentUIGTPlugin.ini
│   │   │           Compat.ini
│   │   │           Editor.ini
│   │   │           EditorKeyBindings.ini
│   │   │           EditorLayout.ini
│   │   │           EditorPerProjectUserSettings.ini
│   │   │           EditorSettings.ini
│   │   │           Engine.ini
│   │   │           ExampleDeviceProfileSelector.ini
│   │   │           Game.ini
│   │   │           GameUserSettings.ini
│   │   │           GVoiceSDK.ini
│   │   │           Hardware.ini
│   │   │           HTTPChunkInstaller.ini
│   │   │           ImgMedia.ini
│   │   │           ImmediatePhysics.ini
│   │   │           ImpostorBaker.ini
│   │   │           Input.ini
│   │   │           ItemIconCreator.ini
│   │   │           Lightmass.ini
│   │   │           MatineeToLevelSequence.ini
│   │   │           MediaCompositing.ini
│   │   │           MinimapCreator.ini
│   │   │           MobilePatchingUtils.ini
│   │   │           OceanPlugin.ini
│   │   │           OMobileFBPL.ini
│   │   │           OnlineSubsystem.ini
│   │   │           OnlineSubsystemNull.ini
│   │   │           OnlineSubsystemUtils.ini
│   │   │           Paper2D.ini
│   │   │           PhysXVehicles.ini
│   │   │           PlatformCrypto.ini
│   │   │           ProceduralMeshComponent.ini
│   │   │           PUBGLauncher.ini
│   │   │           RenderDocPlugin.ini
│   │   │           RuntimeMeshComponent.ini
│   │   │           RuntimePhysXCooking.ini
│   │   │           Scalability.ini
│   │   │           ScriptGeneratorPlugin.ini
│   │   │           ScriptPlugin.ini
│   │   │           SkillEditor.ini
│   │   │           TApm.ini
│   │   │           Tss.ini
│   │   │           UAEStateMachine.ini
│   │   │           UAETrigger.ini
│   │   │           WindowsMoviePlayer.ini
│   │   │           WmfMedia.ini
│   │   │           Wwise.ini
│   │   │
│   │   └───Source
│   │           ShadowTrackerExtra.Target.cs
│   │
│   ├───Plugins
│   │   │   ShadowTrackerExtra.upluginmanifest
│   │   │
│   │   ├───GVoiceSDK
│   │   │   │   GVoiceSDK.uplugin
│   │   │   │
│   │   │   ├───Source
│   │   │   │   └───GVoiceSDK
│   │   │   │       └───Private
│   │   │   │               GVoiceSDK.cpp
│   │   │   │
│   │   │   └───TencentVoiceForUE4-1.0
│   │   │       │   .gitignore
│   │   │       │   README.md
│   │   │       │   TencentVoiceForUnreal.uplugin
│   │   │       │
│   │   │       ├───Binaries
│   │   │       │   ├───Win32
│   │   │       │   │       UE4-TencentVoiceForUnreal-Win32-Shipping.lib
│   │   │       │   │       UE4-TencentVoiceForUnreal.lib
│   │   │       │   │
│   │   │       │   └───Win64
│   │   │       │           UE4-TencentVoiceForUnreal-Win64-Shipping.lib
│   │   │       │           UE4-TencentVoiceForUnreal.lib
│   │   │       │           UE4Editor-TencentVoiceForUnreal.dll
│   │   │       │           UE4Editor.modules
│   │   │       │
│   │   │       ├───Resources
│   │   │       │       Icon128.png
│   │   │       │
│   │   │       ├───Source
│   │   │       │   └───TencentVoiceForUnreal
│   │   │       │       │   TencentVoiceForUnreal.Build.cs
│   │   │       │       │
│   │   │       │       ├───Private
│   │   │       │       │       NotifyBase.cpp
│   │   │       │       │       TencentVoiceForUnreal.cpp
│   │   │       │       │       VoiceClient.cpp
│   │   │       │       │
│   │   │       │       └───Public
│   │   │       │               NotifyBase.h
│   │   │       │               TencentVoiceForUnreal.h
│   │   │       │               VoiceClient.h
│   │   │       │
│   │   │       └───ThirdParty
│   │   │           ├───x64
│   │   │           │   ├───include
│   │   │           │   │       GCloudVoice.h
│   │   │           │   │       GCloudVoiceErrno.h
│   │   │           │   │       GCloudVoiceExtension.h
│   │   │           │   │       GCloudVoiceVersion.h
│   │   │           │   │       GVoice.h
│   │   │           │   │
│   │   │           │   └───lib
│   │   │           │           GCloudVoice.dll
│   │   │           │           GCloudVoice.lib
│   │   │           │
│   │   │           └───x86
│   │   │               ├───include
│   │   │               │       GCloudVoice.h
│   │   │               │       GCloudVoiceErrno.h
│   │   │               │       GCloudVoiceExtension.h
│   │   │               │       GCloudVoiceVersion.h
│   │   │               │       GVoice.h
│   │   │               │
│   │   │               └───lib
│   │   │                       GCloudVoice.dll
│   │   │                       GCloudVoice.lib
│   │   │
│   │   ├───ImpostorBaker
│   │   │   │   .gitattributes
│   │   │   │   ImpostorBaker.uplugin
│   │   │   │   README.md
│   │   │   │   TestDiagram
│   │   │   │
│   │   │   ├───Content
│   │   │   │   └───ImpostorBaker
│   │   │   │       ├───BP
│   │   │   │       │   │   asdf.uasset
│   │   │   │       │   │   blutil.uasset
│   │   │   │       │   │   BP_GeneratePerFrameMesh_Debug.uasset
│   │   │   │       │   │   BP_Generate_ImposterSprites.uasset
│   │   │   │       │   │   InspectMesh.uasset
│   │   │   │       │   │
│   │   │   │       │   ├───Debug
│   │   │   │       │   │       DrawView.uasset
│   │   │   │       │   │
│   │   │   │       │   ├───Enums
│   │   │   │       │   │       EImposterLayoutType.uasset
│   │   │   │       │   │       EImpostorBakeTypes.uasset
│   │   │   │       │   │
│   │   │   │       │   ├───Libraries
│   │   │   │       │   │       BPVectorFunctions.uasset
│   │   │   │       │   │       ConversionMacroLibrary.uasset
│   │   │   │       │   │       HemiOctahedra.uasset
│   │   │   │       │   │
│   │   │   │       │   └───Structs
│   │   │   │       │           BPTextureData.uasset
│   │   │   │       │           ImpostorStaticTextureData.uasset
│   │   │   │       │           LightingState.uasset
│   │   │   │       │
│   │   │   │       ├───Maps
│   │   │   │       │       Generate_Impostor_Map.umap
│   │   │   │       │
│   │   │   │       ├───MaterialFunctions
│   │   │   │       │       CUV-Pack.uasset
│   │   │   │       │       CUV-UnPack.uasset
│   │   │   │       │       FrameBlendWeights.uasset
│   │   │   │       │       FrameBlendWeights_TextureObject.uasset
│   │   │   │       │       HemiOctahedronToUnitVector.uasset
│   │   │   │       │       ImposterCaptureSwitch.uasset
│   │   │   │       │       ImposterFrameTransform.uasset
│   │   │   │       │       ImposterFrameTransform_Setup.uasset
│   │   │   │       │       ImposterSpriteProjection.uasset
│   │   │   │       │       ImpostorGridToVector.uasset
│   │   │   │       │       ImpostorInfo.uasset
│   │   │   │       │       Impostor_SingleFrame.uasset
│   │   │   │       │       Impostor_ThreeFrameBlend.uasset
│   │   │   │       │       Motion_4WayChaos_Normal_Time.uasset
│   │   │   │       │       POM_Impostor.uasset
│   │   │   │       │       TransformToFixedFrame.uasset
│   │   │   │       │       TriangleInterpolator.uasset
│   │   │   │       │       TriangleInterpolator_Symmetrical.uasset
│   │   │   │       │       TriangulatedWireframe.uasset
│   │   │   │       │       UnitVectorToHemiOctahedra.uasset
│   │   │   │       │       V3ExpandRange.uasset
│   │   │   │       │       VirtualPlaneCoordinates_Imposter.uasset
│   │   │   │       │
│   │   │   │       ├───Materials
│   │   │   │       │   │   M_Billboard_01.uasset
│   │   │   │       │   │   M_Imposter_PerPixel_Parallax.uasset
│   │   │   │       │   │   M_Imposter_PerPixel_Parallax_FullSphere.uasset
│   │   │   │       │   │   M_Impostor_SimpleOffset.uasset
│   │   │   │       │   │   M_Impostor_SimpleOffset_FullSphere.uasset
│   │   │   │       │   │
│   │   │   │       │   ├───Debug
│   │   │   │       │   │       Debug_Oct.uasset
│   │   │   │       │   │       DrawTestTex.uasset
│   │   │   │       │   │       M_Debug.uasset
│   │   │   │       │   │       M_DebugNormals.uasset
│   │   │   │       │   │       M_GreyRough.uasset
│   │   │   │       │   │       M_ImposterPreview_01.uasset
│   │   │   │       │   │       M_py.uasset
│   │   │   │       │   │       M_SphereTest.uasset
│   │   │   │       │   │       M_Tangents.uasset
│   │   │   │       │   │       M_VertInterp_Precision_Bug.uasset
│   │   │   │       │   │       M_VirtualPlaneTest_01.uasset
│   │   │   │       │   │       M_VSShrink.uasset
│   │   │   │       │   │       M_White.uasset
│   │   │   │       │   │       Sphere_Preview.uasset
│   │   │   │       │   │       Sphere_Unfold.uasset
│   │   │   │       │   │       Sphere_Unfold_Inst.uasset
│   │   │   │       │   │       Sphere_Unfold_Inst_Full.uasset
│   │   │   │       │   │       Triangle_Interp.uasset
│   │   │   │       │   │
│   │   │   │       │   ├───Generation
│   │   │   │       │   │       M_AddAlpha.uasset
│   │   │   │       │   │       M_BaseColor_CustomLighting.uasset
│   │   │   │       │   │       M_CombineNormalsDepth.uasset
│   │   │   │       │   │       M_Resample_RT.uasset
│   │   │   │       │   │       M_Sample_Frame.uasset
│   │   │   │       │   │       M_Sample_Frame_DFAlpha.uasset
│   │   │   │       │   │       M_SeedMat.uasset
│   │   │   │       │   │       M_ViewFrame_UV.uasset
│   │   │   │       │   │
│   │   │   │       │   ├───OldMats
│   │   │   │       │   │       M_ImposterBump01_SimpleGridMain.uasset
│   │   │   │       │   │       M_ImposterBump01_SimpleGrid_2.uasset
│   │   │   │       │   │       M_ImposterBump01_SimpleGrid_IsolateBug.uasset
│   │   │   │       │   │       M_ImposterBump01_SimpleGrid_Main.uasset
│   │   │   │       │   │       M_ImposterBump01_SimpleGrid_NewMaster.uasset
│   │   │   │       │   │       M_ImposterBump01_SingleFrame.uasset
│   │   │   │       │   │       M_Imposter_DepthInterpolation_01_Simple.uasset
│   │   │   │       │   │       M_Imposter_DepthInterpolation_02.uasset
│   │   │   │       │   │       M_Imposter_DepthParallax_01_recover.uasset
│   │   │   │       │   │       M_Imposter_Depth_01.uasset
│   │   │   │       │   │
│   │   │   │       │   ├───PostProcess
│   │   │   │       │   │       M_Capture_PostProcess.uasset
│   │   │   │       │   │
│   │   │   │       │   └───Recover
│   │   │   │       │       └───oops
│   │   │   │       │               M_Imposter_DepthParallax_01_recover.uasset
│   │   │   │       │
│   │   │   │       ├───MPC
│   │   │   │       │       MPC_ImposterCapture.uasset
│   │   │   │       │
│   │   │   │       └───TestContent
│   │   │   │           ├───ColorCalibCopy
│   │   │   │           │       Cube-Scaled.uasset
│   │   │   │           │       M_ChromeBall.uasset
│   │   │   │           │       M_ClearCoat.uasset
│   │   │   │           │       M_ClearCoatBlack.uasset
│   │   │   │           │       M_ColorGrid.uasset
│   │   │   │           │       M_GreyBall.uasset
│   │   │   │           │
│   │   │   │           └───Meshes
│   │   │   │                   S_Grid_03_6x6.uasset
│   │   │   │                   S_Grid_03_6x6_b.uasset
│   │   │   │
│   │   │   └───Resources
│   │   │           Icon128.png
│   │   │
│   │   ├───ItemIconCreation
│   │   │       ItemIconCreator.uplugin
│   │   │
│   │   ├───MinimapCreation
│   │   │       MinimapCreator.uplugin
│   │   │
│   │   ├───OceanPlugin
│   │   │   │   OceanPlugin.uplugin
│   │   │   │
│   │   │   ├───Binaries
│   │   │   │   └───Win64
│   │   │   │           UE4Editor-OceanPlugin.dll
│   │   │   │           UE4Editor.modules
│   │   │   │
│   │   │   ├───Resources
│   │   │   │       Icon128.png
│   │   │   │
│   │   │   └───Source
│   │   │       └───OceanPlugin
│   │   │           │   OceanPlugin.Build.cs
│   │   │           │
│   │   │           ├───Classes
│   │   │           │   │   BuoyancyComponent.h
│   │   │           │   │   BuoyancyForceComponent.h
│   │   │           │   │   BuoyantDestructible.h
│   │   │           │   │   BuoyantDestructibleComponent.h
│   │   │           │   │   CustomVehicleController.h
│   │   │           │   │   InfiniteSystemComponent.h
│   │   │           │   │   OceanManager.h
│   │   │           │   │   OceanPlugin.h
│   │   │           │   │   OceanPluginPrivatePCH.h
│   │   │           │   │
│   │   │           │   ├───AdvancedBuoyancyComponent
│   │   │           │   │       AdvancedBuoyancyComponent.h
│   │   │           │   │
│   │   │           │   ├───BuoyantMesh
│   │   │           │   │       BuoyantMeshComponent.h
│   │   │           │   │       BuoyantMeshSubtriangle.h
│   │   │           │   │       BuoyantMeshTriangle.h
│   │   │           │   │       BuoyantMeshVertex.h
│   │   │           │   │       WaterHeightmapComponent.h
│   │   │           │   │
│   │   │           │   ├───Fish
│   │   │           │   │       FishManager.h
│   │   │           │   │       FishState.h
│   │   │           │   │       FlockFish.h
│   │   │           │   │
│   │   │           │   └───Sky
│   │   │           │           SkyManager.h
│   │   │           │           TimeDate.h
│   │   │           │           TimeManager.h
│   │   │           │
│   │   │           └───Private
│   │   │               │   BuoyancyComponent.cpp
│   │   │               │   BuoyancyForceComponent.cpp
│   │   │               │   BuoyantDestructible.cpp
│   │   │               │   BuoyantDestructibleComponent.cpp
│   │   │               │   CustomVehicleController.cpp
│   │   │               │   InfiniteSystemComponent.cpp
│   │   │               │   OceanManager.cpp
│   │   │               │   OceanPlugin.cpp
│   │   │               │
│   │   │               ├───AdvancedBuoyancyComponent
│   │   │               │       AdvancedBuoyancyComponent.cpp
│   │   │               │
│   │   │               ├───BuoyantMesh
│   │   │               │       BuoyantMeshComponent.cpp
│   │   │               │       BuoyantMeshSubtriangle.cpp
│   │   │               │       BuoyantMeshTriangle.cpp
│   │   │               │       BuoyantMeshVertex.cpp
│   │   │               │       WaterHeightmapComponent.cpp
│   │   │               │
│   │   │               ├───Fish
│   │   │               │       FishManager.cpp
│   │   │               │       FishState.cpp
│   │   │               │       FlockFish.cpp
│   │   │               │
│   │   │               └───Sky
│   │   │                       SkyManager.cpp
│   │   │                       TimeDate.cpp
│   │   │                       TimeManager.cpp
│   │   │
│   │   ├───PUBGLauncher
│   │   │   │   PUBGLauncher.uplugin
│   │   │   │
│   │   │   └───Source
│   │   │       └───PUBGLauncher
│   │   │           ├───Private
│   │   │           │       PUBGLauncher.cpp
│   │   │           │
│   │   │           └───Public
│   │   ├───RuntimeMeshComponent
│   │   │   │   .gitignore
│   │   │   │   LICENSE
│   │   │   │   README.md
│   │   │   │   RuntimeMeshComponent.uplugin
│   │   │   │   RuntimeMeshComponent.uplugin_ORIG
│   │   │   │
│   │   │   ├───Resources
│   │   │   │       Icon128.png
│   │   │   │
│   │   │   └───Source
│   │   │       ├───RuntimeMeshComponent
│   │   │       │   │   RuntimeMeshComponent.Build.cs
│   │   │       │   │
│   │   │       │   ├───Private
│   │   │       │   │       RuntimeMeshComponent.cpp
│   │   │       │   │       RuntimeMeshComponentPlugin.cpp
│   │   │       │   │       RuntimeMeshComponentPluginPrivatePCH.h
│   │   │       │   │       RuntimeMeshCore.cpp
│   │   │       │   │       RuntimeMeshGenericVertex.cpp
│   │   │       │   │       RuntimeMeshLibrary.cpp
│   │   │       │   │       TessellationUtilities.cpp
│   │   │       │   │       TessellationUtilities.h
│   │   │       │   │
│   │   │       │   └───Public
│   │   │       │           RuntimeMeshAsync.h
│   │   │       │           RuntimeMeshBuilder.h
│   │   │       │           RuntimeMeshComponent.h
│   │   │       │           RuntimeMeshComponentPlugin.h
│   │   │       │           RuntimeMeshCore.h
│   │   │       │           RuntimeMeshGenericVertex.h
│   │   │       │           RuntimeMeshLibrary.h
│   │   │       │           RuntimeMeshProfiling.h
│   │   │       │           RuntimeMeshRendering.h
│   │   │       │           RuntimeMeshSection.h
│   │   │       │           RuntimeMeshSectionProxy.h
│   │   │       │           RuntimeMeshUpdateCommands.h
│   │   │       │           RuntimeMeshVersion.h
│   │   │       │
│   │   │       └───RuntimeMeshComponentEditor
│   │   │           │   RuntimeMeshComponentEditor.Build.cs
│   │   │           │
│   │   │           ├───Private
│   │   │           │       RuntimeMeshComponentDetails.cpp
│   │   │           │       RuntimeMeshComponentDetails.h
│   │   │           │       RuntimeMeshComponentEditorPlugin.cpp
│   │   │           │       RuntimeMeshComponentEditorPrivatePCH.h
│   │   │           │
│   │   │           └───Public
│   │   │                   IRuntimeMeshComponentEditorPlugin.h
│   │   │
│   │   ├───SkillEditor
│   │   │   │   SkillEditor.uplugin
│   │   │   │
│   │   │   └───Source
│   │   │       └───Skill
│   │   │           └───Private
│   │   │                   UTSkill.cpp
│   │   │                   UTSkillManagerComponent.cpp
│   │   │                   UTSkillPhase.cpp
│   │   │
│   │   ├───TApm
│   │   │   │   TApm.uplugin
│   │   │   │
│   │   │   └───Source
│   │   │       └───TApm
│   │   │           └───Private
│   │   │                   TApmHelper.cpp
│   │   │                   TApmHelper.hpp
│   │   │
│   │   ├───Tss
│   │   │       Tss.uplugin
│   │   │
│   │   ├───UAEStateMachine
│   │   │       UAEStateMachine.uplugin
│   │   │
│   │   ├───UAETrigger
│   │   │   │   UAETrigger.uplugin
│   │   │   │
│   │   │   └───Source
│   │   │       └───UAETrigger
│   │   │           ├───Private
│   │   │           │   │   UAELevelDirector.cpp
│   │   │           │   │   UAETriggerObject.cpp
│   │   │           │   │
│   │   │           │   ├───Event
│   │   │           │   │       LevelEventCenter.cpp
│   │   │           │   │
│   │   │           │   └───FlowControll
│   │   │           │           TriggersFlowTree.cpp
│   │   │           │
│   │   │           └───Public
│   │   │               ├───Core
│   │   │               │       EUAETriggerActionState.hpp
│   │   │               │       EUAETriggerRunType.hpp
│   │   │               │       EUAETriggerVariableType.hpp
│   │   │               │       TriggerAction.hpp
│   │   │               │       TriggerCondition.hpp
│   │   │               │       TriggerEvent.hpp
│   │   │               │       TriggerEventBroadcastInterface.hpp
│   │   │               │       TriggerEventListenerTrigger.hpp
│   │   │               │       UAELevelDirector.hpp
│   │   │               │       UAELevelDirectorRepData.hpp
│   │   │               │       UAELevelEventCenterInterface.hpp
│   │   │               │       UAETriggerEventSystem.hpp
│   │   │               │       UAETriggerObject.hpp
│   │   │               │
│   │   │               ├───Event
│   │   │               │       LevelEventCenter.hpp
│   │   │               │
│   │   │               ├───FlowControll
│   │   │               │       AndFlowNode.hpp
│   │   │               │       BranchFlowNode.hpp
│   │   │               │       EFlowNodeType.hpp
│   │   │               │       FlowNodeBase.hpp
│   │   │               │       OrFlowNode.hpp
│   │   │               │       SequenceFlowNode.hpp
│   │   │               │       SubBranchFlowNode.hpp
│   │   │               │       TriggersFlowTree.hpp
│   │   │               │       UFlowNodeRepData.hpp
│   │   │               │
│   │   │               └───Variables
│   │   │                       UAETriggerVariable.hpp
│   │   │                       Variable.hpp
│   │   │                       VariableSet.hpp
│   │   │
│   │   └───WWise
│   │       │   Wwise.uplugin
│   │       │   Wwise.uplugin_ORIG
│   │       │   Wwise_UE4_Integration.chm
│   │       │   Wwise_UE4_Integration_ja.chm
│   │       │
│   │       ├───Binaries
│   │       │   ├───Android
│   │       │   │       UE4-AkAudio-armv7-es2.a
│   │       │   │
│   │       │   ├───IOS
│   │       │   │       UE4-AkAudio.a
│   │       │   │
│   │       │   ├───Mac
│   │       │   │       UE4Editor-AkAudio.dylib
│   │       │   │       UE4Editor-AudiokineticTools.dylib
│   │       │   │       UE4Editor.modules
│   │       │   │
│   │       │   └───Win64
│   │       │           UE4Editor-AkAudio.dll
│   │       │           UE4Editor-AkAudio.pdb
│   │       │           UE4Editor-AudiokineticTools.dll
│   │       │           UE4Editor-AudiokineticTools.pdb
│   │       │           UE4Editor.modules
│   │       │
│   │       ├───Content
│   │       │   │   AnimNotify_AkEvent.uasset
│   │       │   │   S_AkComponent.uasset
│   │       │   │   S_AkSpotReflector.uasset
│   │       │   │
│   │       │   ├───AnimNotifyRedirectors
│   │       │   │       AnimNotify_AkEvent.uasset
│   │       │   │       AnimNotify_AkEventByName.uasset
│   │       │   │
│   │       │   └───WwisePicker
│   │       │           acotex_nor.png
│   │       │           auxbus_nor.png
│   │       │           bus_nor.png
│   │       │           event_nor.png
│   │       │           folder_nor.png
│   │       │           gameparameter_nor.png
│   │       │           physical_folder_nor.png
│   │       │           workunit_nor.png
│   │       │           wproj.png
│   │       │           wwise_icon_16.png
│   │       │           wwise_icon_512.png
│   │       │           wwise_logo_32.png
│   │       │
│   │       ├───Resources
│   │       │       Icon128.png
│   │       │
│   │       └───Source
│   │           ├───AkAudio
│   │           │   │   AkAudio.Build.cs
│   │           │   │
│   │           │   ├───Classes
│   │           │   │       AkAcousticPortal.h
│   │           │   │       AkAcousticTexture.h
│   │           │   │       AkAmbientSound.h
│   │           │   │       AkAudioBank.h
│   │           │   │       AkAudioEvent.h
│   │           │   │       AkAuxBus.h
│   │           │   │       AkBankManager.h
│   │           │   │       AkComponent.h
│   │           │   │       AkGameplayStatics.h
│   │           │   │       AkLateReverbComponent.h
│   │           │   │       AkReverbVolume.h
│   │           │   │       AkRoomComponent.h
│   │           │   │       AkSettings.h
│   │           │   │       AkSpatialAudioVolume.h
│   │           │   │       AkSpotReflector.h
│   │           │   │       AkSurfaceReflectorSetComponent.h
│   │           │   │       AkUEFeatures.h
│   │           │   │       InterpTrackAkAudioEvent.h
│   │           │   │       InterpTrackAkAudioRTPC.h
│   │           │   │       InterpTrackInstAkAudioEvent.h
│   │           │   │       InterpTrackInstAkAudioRTPC.h
│   │           │   │       MovieSceneAkAudioEventSection.h
│   │           │   │       MovieSceneAkAudioEventTrack.h
│   │           │   │       MovieSceneAkAudioRTPCSection.h
│   │           │   │       MovieSceneAkAudioRTPCTrack.h
│   │           │   │       MovieSceneAkTrack.h
│   │           │   │
│   │           │   ├───Private
│   │           │   │   │   AkAcousticPortal.cpp
│   │           │   │   │   AkAcousticTexture.cpp
│   │           │   │   │   AkAmbientSound.cpp
│   │           │   │   │   AkAudioBank.cpp
│   │           │   │   │   AkAudioDevice.cpp
│   │           │   │   │   AkAudioEvent.cpp
│   │           │   │   │   AkAudioModule.cpp
│   │           │   │   │   AkAuxBus.cpp
│   │           │   │   │   AkComponent.cpp
│   │           │   │   │   AkComponentCallbackManager.cpp
│   │           │   │   │   AkComponentCallbackManager.h
│   │           │   │   │   AkCustomVersion.cpp
│   │           │   │   │   AkCustomVersion.h
│   │           │   │   │   AkGameplayStatics.cpp
│   │           │   │   │   AkLateReverbComponent.cpp
│   │           │   │   │   AkReverbVolume.cpp
│   │           │   │   │   AkRoomComponent.cpp
│   │           │   │   │   AkSettings.cpp
│   │           │   │   │   AkSpatialAudioVolume.cpp
│   │           │   │   │   AkSpotReflector.cpp
│   │           │   │   │   AkSurfaceReflectorSetComponent.cpp
│   │           │   │   │   AkUnrealIOHookDeferred.cpp
│   │           │   │   │   AkUnrealIOHookDeferred.h
│   │           │   │   │   InterpTrackAkAudioEvent.cpp
│   │           │   │   │   InterpTrackAkAudioRTPC.cpp
│   │           │   │   │   InterpTrackInstAkAudioEvent.cpp
│   │           │   │   │   InterpTrackInstAkAudioRTPC.cpp
│   │           │   │   │   MovieSceneAkAudioEventSection.cpp
│   │           │   │   │   MovieSceneAkAudioEventTemplate.cpp
│   │           │   │   │   MovieSceneAkAudioEventTemplate.h
│   │           │   │   │   MovieSceneAkAudioEventTrack.cpp
│   │           │   │   │   MovieSceneAkAudioRTPCSection.cpp
│   │           │   │   │   MovieSceneAkAudioRTPCTemplate.cpp
│   │           │   │   │   MovieSceneAkAudioRTPCTemplate.h
│   │           │   │   │   MovieSceneAkAudioRTPCTrack.cpp
│   │           │   │   │
│   │           │   │   └───FilePackageIO
│   │           │   │           AkFilePackage.cpp
│   │           │   │           AkFilePackage.h
│   │           │   │           AkFilePackageLowLevelIO.h
│   │           │   │           AkFilePackageLowLevelIO.inl
│   │           │   │           AkFilePackageLUT.cpp
│   │           │   │           AkFilePackageLUT.h
│   │           │   │
│   │           │   └───Public
│   │           │           AkAudioDevice.h
│   │           │           AkAudioModule.h
│   │           │           AkInclude.h
│   │           │
│   │           └───AudiokineticTools
│   │               │   AudiokineticTools.Build.cs
│   │               │
│   │               ├───Classes
│   │               │   │   ActorFactoryAkAmbientSound.h
│   │               │   │   AkAcousticTextureFactory.h
│   │               │   │   AkAudioBankFactory.h
│   │               │   │   AkAudioEventFactory.h
│   │               │   │   AkAuxBusFactory.h
│   │               │   │   AkJsonFactory.h
│   │               │   │   InterpTrackAkAudioEventHelper.h
│   │               │   │   InterpTrackAkAudioRTPCHelper.h
│   │               │   │
│   │               │   └───WwisePicker
│   │               │           SWwisePicker.h
│   │               │           WwiseEventDragDropOp.h
│   │               │           WwiseTreeItem.h
│   │               │           WwiseWwuParser.h
│   │               │
│   │               ├───Private
│   │               │   │   ActorFactoryAkAmbientSound.cpp
│   │               │   │   AkAcousticTextureFactory.cpp
│   │               │   │   AkAudioBankFactory.cpp
│   │               │   │   AkAudioBankGenerationHelpers.cpp
│   │               │   │   AkAudioBankGenerationHelpers.h
│   │               │   │   AkAudioEventFactory.cpp
│   │               │   │   AkAuxBusFactory.cpp
│   │               │   │   AkComponentVisualizer.cpp
│   │               │   │   AkComponentVisualizer.h
│   │               │   │   AkEventAssetBroker.h
│   │               │   │   AkJsonFactory.cpp
│   │               │   │   AkLateReverbComponentDetailsCustomization.cpp
│   │               │   │   AkLateReverbComponentDetailsCustomization.h
│   │               │   │   AkMatineeImportTools.cpp
│   │               │   │   AkMatineeImportTools.h
│   │               │   │   AkRoomComponentDetailsCustomization.cpp
│   │               │   │   AkRoomComponentDetailsCustomization.h
│   │               │   │   AkSurfaceReflectorSetComponentVisualizer.cpp
│   │               │   │   AkSurfaceReflectorSetComponentVisualizer.h
│   │               │   │   AkSurfaceReflectorSetDetailsCustomization.cpp
│   │               │   │   AkSurfaceReflectorSetDetailsCustomization.h
│   │               │   │   AssetTypeActions_AkAcousticTexture.cpp
│   │               │   │   AssetTypeActions_AkAcousticTexture.h
│   │               │   │   AssetTypeActions_AkAudioBank.cpp
│   │               │   │   AssetTypeActions_AkAudioBank.h
│   │               │   │   AssetTypeActions_AkAudioEvent.cpp
│   │               │   │   AssetTypeActions_AkAudioEvent.h
│   │               │   │   AssetTypeActions_AkAuxBus.cpp
│   │               │   │   AssetTypeActions_AkAuxBus.h
│   │               │   │   AudiokineticToolsModule.cpp
│   │               │   │   AudiokineticToolsPrivatePCH.h
│   │               │   │   AudiokineticToolsStyle.cpp
│   │               │   │   AudiokineticToolsStyle.h
│   │               │   │   InterpTrackAkAudioEventHelper.cpp
│   │               │   │   InterpTrackAkAudioRTPCHelper.cpp
│   │               │   │   MovieSceneAkAudioEventTrackEditor.cpp
│   │               │   │   MovieSceneAkAudioEventTrackEditor.h
│   │               │   │   MovieSceneAkAudioRTPCTrackEditor.cpp
│   │               │   │   MovieSceneAkAudioRTPCTrackEditor.h
│   │               │   │   SGenerateSoundBanks.cpp
│   │               │   │   SGenerateSoundBanks.h
│   │               │   │   SMatineeAkEventKeyFrameAdder.cpp
│   │               │   │   SMatineeAkEventKeyFrameAdder.h
│   │               │   │
│   │               │   └───WwisePicker
│   │               │           SWwisePicker.cpp
│   │               │           WwiseEventDragDropOp.cpp
│   │               │           WwiseWwuParser.cpp
│   │               │
│   │               └───Public
│   │                       IAudiokineticTools.h
│   │
│   ├───Saved
│   │   ├───Config
│   │   │   ├───CrashReportClient
│   │   │   │   └───UE4CC-Windows-EC1448854AB3C00083FADABB31B70686
│   │   │   │           CrashReportClient.ini
│   │   │   │
│   │   │   └───Windows
│   │   │           ApexDestruction.ini
│   │   │           Compat.ini
│   │   │           Editor.ini
│   │   │           EditorPerProjectUserSettings.ini
│   │   │           Engine.ini
│   │   │           Game.ini
│   │   │           GameUserSettings.ini
│   │   │           Hardware.ini
│   │   │           Input.ini
│   │   │           Lightmass.ini
│   │   │           Paper2D.ini
│   │   │           PhysXVehicles.ini
│   │   │           Scalability.ini
│   │   │
│   │   └───Logs
│   │           ShadowTrackerExtra-backup-2024.11.15-15.59.38.log
│   │           ShadowTrackerExtra-backup-2024.11.15-15.59.44.log
│   │           ShadowTrackerExtra-backup-2024.11.15-17.04.43.log
│   │           ShadowTrackerExtra-backup-2024.11.15-17.05.08.log
│   │           ShadowTrackerExtra-backup-2024.11.15-18.22.51.log
│   │           ShadowTrackerExtra-backup-2024.11.23-10.43.15.log
│   │           ShadowTrackerExtra.log
│   │
│   └───Source
│       ├───Basic
│       │   ├───Buff
│       │   │       STBaseBuffSystemCompnent.cpp
│       │   │
│       │   └───Private
│       │           AttrModifyComponent.cpp
│       │           BattleItem.cpp
│       │           BPClassManager.cpp
│       │           ItemContainer.cpp
│       │           PackTool.cpp
│       │           UAEGameEngine.cpp
│       │           UAELoadedClassManager.cpp
│       │           UAENetConnection.cpp
│       │           UAENetDriver.cpp
│       │           UAETableManager.cpp
│       │           UAEVersion.cpp
│       │
│       ├───Client
│       │   │   ClientNetInterface.cpp
│       │   │   ClientNetInterface.hpp
│       │   │   EGVoiceServer.cpp
│       │   │   EGVoiceServer.hpp
│       │   │   FightFriendChat.cpp
│       │   │   FightFriendChat.hpp
│       │   │   GameWidgetConfig.cpp
│       │   │   GameWidgetConfig.hpp
│       │   │   GCloudLoginAccountInfo.cpp
│       │   │   GCloudLoginAccountInfo.hpp
│       │   │   GroupInfoWrapper.cpp
│       │   │   GroupInfoWrapper.hpp
│       │   │   NearByPersonInfo.cpp
│       │   │   NearByPersonInfo.hpp
│       │   │   PlatformAppraise.cpp
│       │   │   PlatformAppraise.hpp
│       │   │   PlayerFinishedGuide.cpp
│       │   │   PlayerFinishedGuide.hpp
│       │   │   QRCodeGenQRImgInfo.cpp
│       │   │   QRCodeGenQRImgInfo.hpp
│       │   │   ScreenshotMaker.cpp
│       │   │   ScreenshotMaker.hpp
│       │   │   TestHUD.cpp
│       │   │   TestHUD.hpp
│       │   │   UAEClientGameMode.cpp
│       │   │   UAEClientGameMode.hpp
│       │   │   UAELobbyGameMode.cpp
│       │   │   UAELobbyGameMode.hpp
│       │   │   UAELobbyPlayerController.cpp
│       │   │   UAELobbyPlayerController.hpp
│       │   │   WakeupInfoWrapper.cpp
│       │   │   WakeupInfoWrapper.hpp
│       │   │   WebviewInfoWrapper.cpp
│       │   │   WebviewInfoWrapper.hpp
│       │   │   WechatGroupInfomation.cpp
│       │   │   WechatGroupInfomation.hpp
│       │   │
│       │   ├───BpToolLib
│       │   │       BusinessHelper.cpp
│       │   │       BusinessHelper.hpp
│       │   │
│       │   ├───HotUpdate
│       │   │       HotUpdater.cpp
│       │   │       HotUpdater.hpp
│       │   │
│       │   ├───Private
│       │   │       GameBackendHUD.cpp
│       │   │       GameBackendHUD.hpp
│       │   │       GameBackendUtils.cpp
│       │   │       GameBackendUtils.hpp
│       │   │       GameBusinessManager.cpp
│       │   │       GameBusinessManager.hpp
│       │   │       GameFrontendHUD.cpp
│       │   │       GameFrontendHUD.hpp
│       │   │       GameFrontendUtils.cpp
│       │   │       GameFrontendUtils.hpp
│       │   │       InGameUIManager.cpp
│       │   │       InGameUIManager.hpp
│       │   │       LuaClassObj.cpp
│       │   │       LuaClassObj.hpp
│       │   │       TssManager.cpp
│       │   │       TssManager.hpp
│       │   │
│       │   ├───ScriptHelp
│       │   │       ScriptHelperClient.cpp
│       │   │       ScriptHelperClient.hpp
│       │   │       ScriptHelperEngine.cpp
│       │   │       ScriptHelperEngine.hpp
│       │   │
│       │   ├───Tools
│       │   │       GVoiceInterface.cpp
│       │   │       GVoiceInterface.hpp
│       │   │       ImageDownloader.cpp
│       │   │       ImageDownloader.hpp
│       │   │       LoadTexture.cpp
│       │   │       LoadTexture.hpp
│       │   │
│       │   └───Widgets
│       │           SUTRichTextBlock.cpp
│       │           UAERichTextBlock.cpp
│       │           UTRichTextBlock.hpp
│       │
│       ├───Gameplay
│       │   │   AimFlow.hpp
│       │   │   AirDropBoxInOb.hpp
│       │   │   AsyncLoadCharAnimParams.hpp
│       │   │   AttackFlow.hpp
│       │   │   BattleResultData.hpp
│       │   │   BuildingStatisticsData.hpp
│       │   │   CharacterJumpAnimData.hpp
│       │   │   CharacterMovementAnimData.hpp
│       │   │   CharacterStateChangedParams.hpp
│       │   │   ChararacterJumpPhaseData.hpp
│       │   │   ChararacterPoseAnimData.hpp
│       │   │   CircleDataMining.hpp
│       │   │   CircleFlow.hpp
│       │   │   ClientCircleFlow.hpp
│       │   │   ClientGameEndFlow.hpp
│       │   │   ClientGameStartFlow.hpp
│       │   │   ClientJumpFlow.hpp
│       │   │   EBattleItemOperationFailedReason.hpp
│       │   │   EBattleItemOperationType.hpp
│       │   │   ECharaAnimListType.hpp
│       │   │   ECharacterAnimType.hpp
│       │   │   ECharacterGender.hpp
│       │   │   ECharacterJumpPhase.hpp
│       │   │   ECharacterJumpType.hpp
│       │   │   ECharacterPoseType.hpp
│       │   │   ECharacterVehicleAnimType.hpp
│       │   │   ECharAnimEventType.hpp
│       │   │   ESpotGroupType.hpp
│       │   │   ESpotType.hpp
│       │   │   ETLog_BackpackEquipmentSlotType.hpp
│       │   │   EVehicleSeatType.hpp
│       │   │   EVehicleSpotRandomType.hpp
│       │   │   EVehicleType.hpp
│       │   │   GameBaseInfo.hpp
│       │   │   GameDataMining.hpp
│       │   │   GameEndFlow.hpp
│       │   │   GameModeAIPlayerParams.hpp
│       │   │   GameModeGameOverData.hpp
│       │   │   GameModeParams.hpp
│       │   │   GameModePlayerBanChat.hpp
│       │   │   GameModePlayerBattleResultData.hpp
│       │   │   GameModePlayerEquipmentAvatar.hpp
│       │   │   GameModePlayerItem.hpp
│       │   │   GameModePlayerParams.hpp
│       │   │   GameModeStateChangedParams.hpp
│       │   │   GameModeTeamBattleResultData.hpp
│       │   │   GameModeTeammateBattleResultData.hpp
│       │   │   Gameplay.UAEWindowRepData.hpp
│       │   │   GameStartFlow.hpp
│       │   │   GroupSpotComponentArray.hpp
│       │   │   GroupTypeSceneComponents.hpp
│       │   │   HitFlow.hpp
│       │   │   HurtFlow.hpp
│       │   │   ItemClassStatisticsData.hpp
│       │   │   ItemGenerateSpawnClass.hpp
│       │   │   ItemGenerateSpawnData.hpp
│       │   │   ItemGenerateSpawnDataArray.hpp
│       │   │   ItemGenerateStatisticsData.hpp
│       │   │   ItemGenerateTableRow.hpp
│       │   │   ItemGroupStatisticsData.hpp
│       │   │   ItemSpawnClass.hpp
│       │   │   ItemSpawnData.hpp
│       │   │   ItemSpotSceneComponentArray.hpp
│       │   │   ItemSpotStatisticsData.hpp
│       │   │   JsonSpotGroupPropertiesContainer.hpp
│       │   │   JumpFlow.hpp
│       │   │   MemBTResultData.hpp
│       │   │   OnePlayerWeapon.hpp
│       │   │   PlayerAnimData.hpp
│       │   │   PlayerAnimList.hpp
│       │   │   PlayerBaseInfoInOB.hpp
│       │   │   PlayerBehaviorFlow.hpp
│       │   │   PlayerInfoInOB.hpp
│       │   │   PlayerNetStats.hpp
│       │   │   PlayerRouteFlow.hpp
│       │   │   PlayerStateChangedParams.hpp
│       │   │   PlayerStaticInfoInOB.hpp
│       │   │   PlayerVehAnimList.hpp
│       │   │   PosAndTime.hpp
│       │   │   ResultRatingData.hpp
│       │   │   SpotGroupProperty.hpp
│       │   │   SpotTypeProperty.hpp
│       │   │   SpotWeight.hpp
│       │   │   TLog_PickUpItemFlow.hpp
│       │   │   TLog_PropEquipUnequipFlow.hpp
│       │   │   TotalWeaponReport.hpp
│       │   │   TreasureBoxSpotProperty.hpp
│       │   │   VehCharAnimData.hpp
│       │   │   VehicleClassStatisticsData.hpp
│       │   │   VehicleGenerateRandomInfo.hpp
│       │   │   VehicleGenerateSpawnData.hpp
│       │   │   VehicleGenerateSpawnDataArray.hpp
│       │   │   VehicleGenerateStatisticsData.hpp
│       │   │   VehicleSpotComponentArray.hpp
│       │   │   VehicleSpotProperty.hpp
│       │   │   VehicleSpotStatisticsData.hpp
│       │   │   VoiceParam.hpp
│       │   │   WeaponReport.hpp
│       │   │   WorldTileSpotArray.hpp
│       │   │
│       │   └───Private
│       │           BackpackComponent.cpp
│       │           BackpackComponent.hpp
│       │           BaseGeneratorComponent.cpp
│       │           BaseGeneratorComponent.hpp
│       │           ChaVehAnimListComponent.cpp
│       │           ConfigInterface.cpp
│       │           ConfigInterface.hpp
│       │           GeneratorActorAIInterface.cpp
│       │           GeneratorActorAIInterface.hpp
│       │           GeneratorActorInterface.cpp
│       │           GeneratorActorInterface.hpp
│       │           GeneratorVehicleInterface.cpp
│       │           GeneratorVehicleInterface.hpp
│       │           GlobalConfigActor.cpp
│       │           GlobalConfigActor.hpp
│       │           GroupSpotSceneComponent.cpp
│       │           GroupSpotSceneComponent.hpp
│       │           ItemActorComponent.cpp
│       │           ItemActorComponent.hpp
│       │           ItemConfigActorComponent.cpp
│       │           ItemConfigActorComponent.hpp
│       │           ItemGeneratorComponent.cpp
│       │           ItemGeneratorComponent.hpp
│       │           ItemGroupSpotSceneComponent.cpp
│       │           ItemGroupSpotSceneComponent.hpp
│       │           ItemSceneComponent.cpp
│       │           ItemSceneComponent.hpp
│       │           ItemSpotSceneComponent.cpp
│       │           ItemSpotSceneComponent.hpp
│       │           SpotGeneratorStruct.cpp
│       │           SpotGeneratorStruct.hpp
│       │           SpotSceneComponent.cpp
│       │           SpotSceneComponent.hpp
│       │           TestAttrModifyActor.cpp
│       │           TestAttrModifyActor.hpp
│       │           UAECharacter.cpp
│       │           UAECharacter.hpp
│       │           UAECharacterAnimListComponent.cpp
│       │           UAECharacterAnimListComponent.hpp
│       │           UAECharAnimListCompBase.cpp
│       │           UAECharAnimListCompBase.hpp
│       │           UAEChaVehAnimListComponent.cpp
│       │           UAEChaVehAnimListComponent.hpp
│       │           UAEGameMode.cpp
│       │           UAEGameMode.hpp
│       │           UAEGameState.cpp
│       │           UAEGameState.hpp
│       │           UAEHouseActor.cpp
│       │           UAEHouseActor.hpp
│       │           UAEOBState.cpp
│       │           UAEOBState.hpp
│       │           UAEPlayerController.cpp
│       │           UAEPlayerController.hpp
│       │           UAEPlayerState.cpp
│       │           UAEPlayerState.hpp
│       │           UAEProjectile.cpp
│       │           UAEProjectile.hpp
│       │           UAESimpleSceneActor.cpp
│       │           UAESimpleSceneActor.hpp
│       │           UAEWindowComponent.cpp
│       │           UAEWindowComponent.hpp
│       │           VehicleAndTreasureBoxGeneratorComponent.cpp
│       │           VehicleAndTreasureBoxGeneratorComponent.hpp
│       │           VehicleConfigActorComponent.cpp
│       │           VehicleConfigActorComponent.hpp
│       │           VehicleGeneratorComponent.cpp
│       │           VehicleGeneratorComponent.hpp
│       │           VehicleGroupSpotSceneComponent.cpp
│       │           VehicleGroupSpotSceneComponent.hpp
│       │           VehicleSpotSceneComponent.cpp
│       │           VehicleSpotSceneComponent.hpp
│       │           WeatherConfigComponent.cpp
│       │           WeatherConfigComponent.hpp
│       │
│       ├───Server
│       ├───ShadowTrackerExtra
│       │   │   STExtraGameInstance.cpp
│       │   │   STExtraGameInstance.hpp
│       │   │   STExtraGameMode.cpp
│       │   │   STExtraGameMode.hpp
│       │   │   STExtraGameplayStatics.cpp
│       │   │   STExtraGameplayStatics.hpp
│       │   │
│       │   ├───Animation
│       │   │       STExtraAnimInstance.cpp
│       │   │       STExtraAnimInstance.hpp
│       │   │
│       │   ├───BackPack
│       │   │       BackpackAvatarItem.cpp
│       │   │       BackpackAvatarItemCustom.cpp
│       │   │       BackpackBlueprintUtils.hpp
│       │   │       BackpackPlaneAvatarHandle.hpp
│       │   │       BackpackUtils.cpp
│       │   │       BackPackUtils.hpp
│       │   │       BackpackVehicleAvatarHandle.hpp
│       │   │       BackpackWeaponAttachHandle.cpp
│       │   │       BackpackWeaponAttachHandle.hpp
│       │   │       BackpackWeaponHandle.hpp
│       │   │
│       │   ├───Buff
│       │   │       STExtraBuffAction_AdjustStunPostMat.cpp
│       │   │       STExtraBuffAction_AdjustStunPostMat.hpp
│       │   │       STExtraBuffAction_Attachment.hpp
│       │   │       STExtraBuffAction_Dot.hpp
│       │   │       STExtraBuffAction_DrowningDamage.cpp
│       │   │       STExtraBuffAction_DrowningDamage.hpp
│       │   │       STExtraBuffAction_EnableAttrModifier.hpp
│       │   │       STExtraBuffAction_Log.hpp
│       │   │       STExtraBuffAction_PeriodAction.hpp
│       │   │       STExtraBuffAction_PlayAnimation.hpp
│       │   │       STExtraBuffAction_StopMovement.hpp
│       │   │       STExtraBuffApplierComponent.hpp
│       │   │       STExtraBuffStatusType_CanAttack.hpp
│       │   │       STExtraBuffStatusType_CanMove.hpp
│       │   │
│       │   ├───Caching
│       │   │       CachingManager.cpp
│       │   │       CachingManager.hpp
│       │   │
│       │   ├───ChallengeLevel
│       │   │       DrivingChallengeLevelRules.cpp
│       │   │       DrivingChallengeLevelRules.hpp
│       │   │       OnTimeSpawnChallengeLevelRules.cpp
│       │   │       OnTimeSpawnChallengeLevelRules.hpp
│       │   │
│       │   ├───Character
│       │   │       CharacterWeaponManagerComponent.cpp
│       │   │       CharacterWeaponManagerComponent.hpp
│       │   │       SceneCaptureCharacter.cpp
│       │   │       SceneCaptureCharacter.hpp
│       │   │       STCharacterFollowComp.cpp
│       │   │       STCharacterFollowComp.hpp
│       │   │       STCharacterMovementComponent.cpp
│       │   │       STCharacterMovementComponent.hpp
│       │   │       STCharacterNearDeathComp.cpp
│       │   │       STCharacterNearDeathComp.hpp
│       │   │       STCharacterRescueOtherComp.cpp
│       │   │       STCharacterRescueOtherComp.hpp
│       │   │       STExtraBaseCharacter.cpp
│       │   │       STExtraBaseCharacter.hpp
│       │   │
│       │   ├───Chat
│       │   │       ChatComponent.cpp
│       │   │       ChatComponent.hpp
│       │   │
│       │   ├───CustomActor
│       │   │       AirDropBoxActor.cpp
│       │   │       AirDropBoxActor.hpp
│       │   │       AirDropPlane.cpp
│       │   │       AirDropPlane.hpp
│       │   │       CircleAreaVolume.cpp
│       │   │       CircleAreaVolume.hpp
│       │   │       PUBGDoor.cpp
│       │   │       PUBGDoor.hpp
│       │   │
│       │   ├───CustomComponent
│       │   │       AirAttackComponent.cpp
│       │   │       AirAttackComponent.hpp
│       │   │       AirAttackCS.cpp
│       │   │       AirAttackCS.hpp
│       │   │       AirDropComponent.cpp
│       │   │       AirDropComponent.hpp
│       │   │       AvatarComponent.cpp
│       │   │       AvatarComponent.hpp
│       │   │       CharacterAvatarComponent.cpp
│       │   │       CharacterAvatarComponent.hpp
│       │   │       CircleMgrComponent.cpp
│       │   │       CircleMgrComponent.hpp
│       │   │       CommonBtnComponent.cpp
│       │   │       CommonBtnComponent.hpp
│       │   │       CustomParticleSystemComponent.cpp
│       │   │       CustomParticleSystemComponent.hpp
│       │   │       GameEventListener.cpp
│       │   │       GameEventListener.hpp
│       │   │       LandScapeLODByHeight.cpp
│       │   │       LandScapeLODByHeight.hpp
│       │   │       NewbieGuideComponent.cpp
│       │   │       NewbieGuideComponent.hpp
│       │   │       ParachuteFollowComponent.cpp
│       │   │       ParachuteFollowComponent.hpp
│       │   │       PlaneComponent.cpp
│       │   │       PlaneComponent.hpp
│       │   │       SecuryInfoComponent.cpp
│       │   │       SecuryInfoComponent.hpp
│       │   │       ServerSwitchComponent.cpp
│       │   │       ServerSwitchComponent.hpp
│       │   │       STExtraUnderWaterEffectComp.cpp
│       │   │       STExtraUnderWaterEffectComp.hpp
│       │   │       STScreenAppearanceComponent.cpp
│       │   │       STScreenAppearanceComponent.hpp
│       │   │       TimerRegistComponent.cpp
│       │   │       TimerRegistComponent.hpp
│       │   │       VehicleSpringArmComponent.cpp
│       │   │       VehicleSpringArmComponent.hpp
│       │   │       WeaponAvatarComponent.cpp
│       │   │       WeaponAvatarComponent.hpp
│       │   │
│       │   ├───Effect
│       │   │       Effect.cpp
│       │   │       EffectComponent.cpp
│       │   │       EffectConsumeItem.cpp
│       │   │       EffectDamage.cpp
│       │   │       EffectGraph.cpp
│       │   │       EffectRefreshWeapon.cpp
│       │   │       EffectReloadWait.cpp
│       │   │       EffectTakeItem.cpp
│       │   │       EffectWait.cpp
│       │   │       EffectWeaponCheckReload.cpp
│       │   │
│       │   ├───Game
│       │   │       STExtraGameStateBase.cpp
│       │   │       STExtraGameStateBase.hpp
│       │   │
│       │   ├───GameMode
│       │   │   │   BattleRoyaleGameMode.cpp
│       │   │   │   BattleRoyaleGameMode.hpp
│       │   │   │   BattleRoyaleGameModeGroup.cpp
│       │   │   │   BattleRoyaleGameModeGroup.hpp
│       │   │   │   BattleRoyaleGameModeTeam.cpp
│       │   │   │   BattleRoyaleGameModeTeam.hpp
│       │   │   │   DeathMatchGameMode.cpp
│       │   │   │   DeathMatchGameMode.hpp
│       │   │   │   DeathMatchGameState.cpp
│       │   │   │   DeathMatchGameState.hpp
│       │   │   │   FreeForAllGameMode.cpp
│       │   │   │   FreeForAllGameMode.hpp
│       │   │   │   GameModeDataAsset.cpp
│       │   │   │   GameModeDataAsset.hpp
│       │   │   │   GameModeStateActive.cpp
│       │   │   │   GameModeStateActive.hpp
│       │   │   │   GameModeStateEmpty.cpp
│       │   │   │   GameModeStateEmpty.hpp
│       │   │   │   GameModeStateFighting.cpp
│       │   │   │   GameModeStateFighting.hpp
│       │   │   │   GameModeStateFinished.cpp
│       │   │   │   GameModeStateFinished.hpp
│       │   │   │   GameModeStateFinishedGroup.cpp
│       │   │   │   GameModeStateFinishedGroup.hpp
│       │   │   │   GameModeStateFinishedTeam.cpp
│       │   │   │   GameModeStateFinishedTeam.hpp
│       │   │   │   GameModeStateFinishedWar.cpp
│       │   │   │   GameModeStateFinishedWar.hpp
│       │   │   │   GameModeStateFlying.cpp
│       │   │   │   GameModeStateFlying.hpp
│       │   │   │   GameModeStateFlyingGroup.cpp
│       │   │   │   GameModeStateFlyingGroup.hpp
│       │   │   │   GameModeStateFlyingTeam.cpp
│       │   │   │   GameModeStateFlyingTeam.hpp
│       │   │   │   GameModeStateFlyingWar.cpp
│       │   │   │   GameModeStateFlyingWar.hpp
│       │   │   │   GameModeStateReady.cpp
│       │   │   │   GameModeStateReady.hpp
│       │   │   │   GameModeState_Challenge.cpp
│       │   │   │   GameModeState_Challenge.hpp
│       │   │   │   GameModeState_Training.cpp
│       │   │   │   GameModeState_Training.hpp
│       │   │   │   WarGameMode.cpp
│       │   │   │   WarGameMode.hpp
│       │   │   │
│       │   │   ├───FreeForAllMatch
│       │   │   │       GameModeStateActive_FreeForAll.cpp
│       │   │   │       GameModeStateActive_FreeForAll.hpp
│       │   │   │       GameModeStateFighting_FreeForAll.cpp
│       │   │   │       GameModeStateFighting_FreeForAll.hpp
│       │   │   │       GameModeStateFinished_FreeForAll.cpp
│       │   │   │       GameModeStateFinished_FreeForAll.hpp
│       │   │   │       GameModeStateReady_FreeForAll.cpp
│       │   │   │       GameModeStateReady_FreeForAll.hpp
│       │   │   │
│       │   │   └───TeamMatch
│       │   │           GameModeStateActive_TeamMatch.cpp
│       │   │           GameModeStateActive_TeamMatch.hpp
│       │   │           GameModeStateFighting_TeamMatch.cpp
│       │   │           GameModeStateFighting_TeamMatch.hpp
│       │   │           GameModeStateFinished_TeamMatch.cpp
│       │   │           GameModeStateFinished_TeamMatch.hpp
│       │   │           GameModeStateReady_TeamMatch.cpp
│       │   │           GameModeStateReady_TeamMatch.hpp
│       │   │           GameModeStateStartScene_TeamMatch.cpp
│       │   │           GameModeStateStartScene_TeamMatch.hpp
│       │   │
│       │   ├───GunPlay
│       │   │       AimingComp.cpp
│       │   │       AimingComp.hpp
│       │   │
│       │   ├───Landscape
│       │   │       MyLandscape.cpp
│       │   │       MyLandscape.hpp
│       │   │       MyLandscapeGeometry.hpp
│       │   │
│       │   ├───Online
│       │   │       STExtraGameSession.cpp
│       │   │       STExtraGameSession.hpp
│       │   │       STExtraOnlineSession.cpp
│       │   │       STExtraOnlineSession.hpp
│       │   │
│       │   ├───Option
│       │   │       TslGameUserSettings.cpp
│       │   │       TslGameUserSettings.hpp
│       │   │
│       │   ├───Pickup
│       │   │       PickupManagerComponent.cpp
│       │   │       PickupManagerComponent.hpp
│       │   │
│       │   ├───Player
│       │   │   │   AutoRunTest.cpp
│       │   │   │   AutoRunTest.hpp
│       │   │   │   AutoRunTestInfoOut.cpp
│       │   │   │   PlayerControllerStateActive.cpp
│       │   │   │   PlayerControllerStateActive.hpp
│       │   │   │   PlayerControllerStateFighting.cpp
│       │   │   │   PlayerControllerStateFighting.hpp
│       │   │   │   PlayerControllerStateFinished.cpp
│       │   │   │   PlayerControllerStateFinished.hpp
│       │   │   │   PlayerControllerStateFlying.cpp
│       │   │   │   PlayerControllerStateFlying.hpp
│       │   │   │   PlayerControllerStateJumping.cpp
│       │   │   │   PlayerControllerStateJumping.hpp
│       │   │   │   PlayerControllerStateLanding.cpp
│       │   │   │   PlayerControllerStateLanding.hpp
│       │   │   │   PlayerControllerStateMachine.cpp
│       │   │   │   PlayerControllerStateMachine.hpp
│       │   │   │   STExtraPlayerCharacter.cpp
│       │   │   │   STExtraPlayerCharacter.hpp
│       │   │   │   STExtraPlayerController.cpp
│       │   │   │   STExtraPlayerController.hpp
│       │   │   │   STExtraPlayerController_Spectator.cpp
│       │   │   │   STExtraPlayerScreenCheck.cpp
│       │   │   │   STExtraPlayerState.cpp
│       │   │   │   STExtraPlayerState.hpp
│       │   │   │   VehicleUserComponent.cpp
│       │   │   │   VehicleUserComponent.hpp
│       │   │   │
│       │   │   └───ItemAvatarComponent
│       │   │           ItemAvatarComponentBase.cpp
│       │   │           ItemAvatarComponentBase.hpp
│       │   │           VehicleAvatarComponent.cpp
│       │   │           VehicleAvatarComponent.hpp
│       │   │
│       │   ├───Private
│       │   │   │   GMCheatManager.cpp
│       │   │   │   GMCheatManager.hpp
│       │   │   │   HackReporterComponent.cpp
│       │   │   │   HackReporterComponent.hpp
│       │   │   │   InteractorComponent.cpp
│       │   │   │   InteractorComponent.hpp
│       │   │   │   LPCLevelScriptActor.cpp
│       │   │   │   LPCLevelScriptActor.hpp
│       │   │   │   TargetKeyOperation.cpp
│       │   │   │   TargetKeyOperation.hpp
│       │   │   │   TslStatics.cpp
│       │   │   │   TslStatics.hpp
│       │   │   │   TslWebSocket.cpp
│       │   │   │
│       │   │   ├───AI
│       │   │   │   ├───Assist
│       │   │   │   │       AIActingComponent.cpp
│       │   │   │   │       AIActingComponent.hpp
│       │   │   │   │       AIWorldVolume.cpp
│       │   │   │   │       AIWorldVolume.hpp
│       │   │   │   │       AIWorldVolumeBase.cpp
│       │   │   │   │       AIWorldVolumeBase.hpp
│       │   │   │   │       UAEAIOcclusion.cpp
│       │   │   │   │       UAERecastNavMesh.cpp
│       │   │   │   │       UAERecastNavMesh.hpp
│       │   │   │   │
│       │   │   │   ├───Component
│       │   │   │   │       NewPathFollowingComponent.cpp
│       │   │   │   │       NewPathFollowingComponent.hpp
│       │   │   │   │
│       │   │   │   ├───Controller
│       │   │   │   │       BaseAIController.cpp
│       │   │   │   │       BaseAIController.hpp
│       │   │   │   │       FakePlayerAIController.cpp
│       │   │   │   │       FakePlayerAIController.hpp
│       │   │   │   │
│       │   │   │   ├───Service
│       │   │   │   │       BTService_AdvancedShooting.cpp
│       │   │   │   │       BTService_AdvancedShooting.hpp
│       │   │   │   │       BTService_AvoidBluezone.cpp
│       │   │   │   │       BTService_AvoidBluezone.hpp
│       │   │   │   │       BTService_ChooseEnemy.cpp
│       │   │   │   │       BTService_ChooseEnemy.hpp
│       │   │   │   │       BTService_ChooseFightbackEnemy.cpp
│       │   │   │   │       BTService_ChooseFightbackEnemy.hpp
│       │   │   │   │       BTService_Cruising.cpp
│       │   │   │   │       BTService_Cruising.hpp
│       │   │   │   │       BTService_DeliverControl.cpp
│       │   │   │   │       BTService_DeliverControl.hpp
│       │   │   │   │       BTService_DistantJudge.cpp
│       │   │   │   │       BTService_DistantJudge.hpp
│       │   │   │   │       BTService_FightDecisionSystem.cpp
│       │   │   │   │       BTService_FightDecisionSystem.hpp
│       │   │   │   │       BTService_Focus.cpp
│       │   │   │   │       BTService_Focus.hpp
│       │   │   │   │       BTService_LookAround.cpp
│       │   │   │   │       BTService_LookAround.hpp
│       │   │   │   │       BTService_SensedEnemy.cpp
│       │   │   │   │       BTService_SensedEnemy.hpp
│       │   │   │   │       BTService_Shooting.cpp
│       │   │   │   │       BTService_Shooting.hpp
│       │   │   │   │
│       │   │   │   └───Task
│       │   │   │           BTTaskNode_EquipOrUnWeapon.cpp
│       │   │   │           BTTaskNode_EquipOrUnWeapon.hpp
│       │   │   │           BTTaskNode_FindItemSpot.cpp
│       │   │   │           BTTaskNode_FindItemSpot.hpp
│       │   │   │           BTTaskNode_NewParachuteJump.cpp
│       │   │   │           BTTaskNode_NewParachuteJump.hpp
│       │   │   │           BTTaskNode_ParachuteJumpV3.cpp
│       │   │   │           BTTaskNode_ParachuteJumpV3.hpp
│       │   │   │           BTTaskNode_PickItemsAtSpot.cpp
│       │   │   │           BTTaskNode_PickItemsAtSpot.hpp
│       │   │   │           BTTask_ClearDelivery.cpp
│       │   │   │           BTTask_ClearDelivery.hpp
│       │   │   │           BTTask_DealNextBuildingPathNode.cpp
│       │   │   │           BTTask_DealNextBuildingPathNode.hpp
│       │   │   │           BTTask_Escape.cpp
│       │   │   │           BTTask_Escape.hpp
│       │   │   │           BTTask_FindAndPickItem.cpp
│       │   │   │           BTTask_FindAndPickItem.hpp
│       │   │   │           BTTask_FindAndPickupEquip.cpp
│       │   │   │           BTTask_FindAndPickupEquip.hpp
│       │   │   │           BTTask_FindNearestTombBoxTask.cpp
│       │   │   │           BTTask_FindNearestTombBoxTask.hpp
│       │   │   │           BTTask_FindOcclusionPoint.cpp
│       │   │   │           BTTask_FindOcclusionPoint.hpp
│       │   │   │           BTTask_ForceIdle.cpp
│       │   │   │           BTTask_ForceIdle.hpp
│       │   │   │           BTTask_GetRandomAttackablePosition.cpp
│       │   │   │           BTTask_GetRandomAttackablePosition.hpp
│       │   │   │           BTTask_MagicMove.cpp
│       │   │   │           BTTask_MagicMove.hpp
│       │   │   │           BTTask_ModifyBlackboardData.cpp
│       │   │   │           BTTask_ModifyBlackboardData.hpp
│       │   │   │           BTTask_MoveAround.cpp
│       │   │   │           BTTask_MoveAround.hpp
│       │   │   │           BTTask_MoveToOcclusion.cpp
│       │   │   │           BTTask_MoveToOcclusion.hpp
│       │   │   │           BTTask_MoveToSafeArea.cpp
│       │   │   │           BTTask_MoveToSafeArea.hpp
│       │   │   │           BTTask_PickUpItemAtTombBox.cpp
│       │   │   │           BTTask_PickUpItemAtTombBox.hpp
│       │   │   │           BTTask_ShortDistanceMove.cpp
│       │   │   │           BTTask_ShortDistanceMove.hpp
│       │   │   │           BTTask_SpawnItem.cpp
│       │   │   │           BTTask_SpawnItem.hpp
│       │   │   │           BTTask_StrategyMove.cpp
│       │   │   │           BTTask_StrategyMove.hpp
│       │   │   │           BTTask_TeleportToSpecLoc.cpp
│       │   │   │           BTTask_TeleportToSpecLoc.hpp
│       │   │   │
│       │   │   ├───AntiCheat
│       │   │   │   ├───SteamNetworkStatusControl
│       │   │   │   │       SteamNetworkStatusControl.cpp
│       │   │   │   │
│       │   │   │   └───Xenuine
│       │   │   │           XenuineHelper.cpp
│       │   │   │
│       │   │   ├───InterfaceForLobbyLink
│       │   │   │       GameInstanceForLobbyLink.cpp
│       │   │   │       GameInstanceForLobbyLink.h
│       │   │   │       GameModeForLobbyLink.cpp
│       │   │   │       GameModeForLobbyLink.h
│       │   │   │
│       │   │   ├───Online
│       │   │   │       TslLPCGameMode.cpp
│       │   │   │       TslLPCGameMode.hpp
│       │   │   │       TslPCPlayerState.cpp
│       │   │   │
│       │   │   ├───Tests
│       │   │   │       AutoRunPlayerTestActor.cpp
│       │   │   │       AutoRunPlayerTestActor.hpp
│       │   │   │
│       │   │   ├───Trigger
│       │   │   │   ├───Action
│       │   │   │   │       TriggerAction_PrintMsg.cpp
│       │   │   │   │       TriggerAction_PrintMsg.hpp
│       │   │   │   │
│       │   │   │   └───Item
│       │   │   │           TriggerItem_TriggerClock.cpp
│       │   │   │           TriggerItem_TriggerClock.hpp
│       │   │   │
│       │   │   └───UI
│       │   │       │   CoherentCommonBinder.cpp
│       │   │       │   CoherentCommonBinder.hpp
│       │   │       │   LobbyHUD.cpp
│       │   │       │   LobbyHUD.hpp
│       │   │       │   TslBaseHUD.cpp
│       │   │       │   TslBaseHUD.hpp
│       │   │       │   TslNaviWidgetInterface.h
│       │   │       │
│       │   │       └───HUD
│       │   │               TslBoostGaugeWidget.cpp
│       │   │               TslBoostGaugeWidget.hpp
│       │   │
│       │   ├───Props
│       │   │       FakeTombBox.cpp
│       │   │       FakeTombBox.hpp
│       │   │       ItemGeneratorBase.cpp
│       │   │       ItemGeneratorBase.hpp
│       │   │       PickUpListWrapperActor.cpp
│       │   │       PickUpListWrapperActor.hpp
│       │   │       PickUpWrapperActor.cpp
│       │   │       PickUpWrapperActor.hpp
│       │   │       PlayerTombBox.cpp
│       │   │       PlayerTombBox.hpp
│       │   │       STExtraProp.cpp
│       │   │       STExtraProp.hpp
│       │   │
│       │   ├───Replay
│       │   │       DeathPlayback.cpp
│       │   │       DeathPlayback.hpp
│       │   │       WonderfulRecordingCut.cpp
│       │   │       WonderfulRecordingCut.hpp
│       │   │
│       │   ├───Security
│       │   │       SecurityLogWeaponCollector.cpp
│       │   │       SecurityLogWeaponCollector.hpp
│       │   │
│       │   ├───Skill
│       │   │       UAEBaseSkill.cpp
│       │   │       UAEBaseSkill.hpp
│       │   │       UAESkill.cpp
│       │   │       UAESkill.hpp
│       │   │       UAESkillAction_AttachActor.cpp
│       │   │       UAESkillAction_AttachActor.hpp
│       │   │       UAESkillAction_BreakGlass.cpp
│       │   │       UAESkillAction_BreakGlass.hpp
│       │   │       UAESkillAction_GasCan.cpp
│       │   │       UAESkillAction_GasCan.hpp
│       │   │       UAESkillAction_GrenadeSwitchBackToWeapon.cpp
│       │   │       UAESkillAction_GrenadeSwitchBackToWeapon.hpp
│       │   │       UAESkillAction_HealOverTimeBuff.cpp
│       │   │       UAESkillAction_HealOverTimeBuff.hpp
│       │   │       UAESkillAction_JumpPhase.cpp
│       │   │       UAESkillAction_JumpPhase.hpp
│       │   │       UAESkillAction_JumpToRandomPhase.cpp
│       │   │       UAESkillAction_JumpToRandomPhase.hpp
│       │   │       UAESkillAction_LockItem.cpp
│       │   │       UAESkillAction_LockItem.hpp
│       │   │       UAESkillAction_Log.cpp
│       │   │       UAESkillAction_Log.hpp
│       │   │       UAESkillAction_PauseAnims.cpp
│       │   │       UAESkillAction_PauseAnims.hpp
│       │   │       UAESkillAction_PlayMontage.cpp
│       │   │       UAESkillAction_PlayMontage.hpp
│       │   │       UAESkillAction_PlayMontage_Jump.cpp
│       │   │       UAESkillAction_PlayMontage_Jump.hpp
│       │   │       UAESkillAction_PlayMontage_Pose.cpp
│       │   │       UAESkillAction_PlayMontage_Pose.hpp
│       │   │       UAESkillAction_RandomAction.cpp
│       │   │       UAESkillAction_RandomAction.hpp
│       │   │       UAESkillAction_Recovery.cpp
│       │   │       UAESkillAction_Recovery.hpp
│       │   │       UAESkillAction_ReplaceCharAnim.cpp
│       │   │       UAESkillAction_ReplaceCharAnim.hpp
│       │   │       UAESkillAction_SetPlayerState.cpp
│       │   │       UAESkillAction_SetPlayerState.hpp
│       │   │       UAESkillAction_SetRecoveryPrompt.cpp
│       │   │       UAESkillAction_SetRecoveryPrompt.hpp
│       │   │       UAESkillAction_ShowSkillPrompt.cpp
│       │   │       UAESkillAction_ShowSkillPrompt.hpp
│       │   │       UAESkillAction_ShowWeapon.cpp
│       │   │       UAESkillAction_ShowWeapon.hpp
│       │   │       UAESkillAction_SpawnActor.cpp
│       │   │       UAESkillAction_SpawnActor.hpp
│       │   │       UAESkillAction_SpawnProjectile.cpp
│       │   │       UAESkillAction_SpawnProjectile.hpp
│       │   │       UAESkillAction_StopSkill.cpp
│       │   │       UAESkillAction_StopSkill.hpp
│       │   │       UAESkillAction_SwitchWeapon.cpp
│       │   │       UAESkillAction_SwitchWeapon.hpp
│       │   │       UAESkillAction_SwitchWeaponToGrenade.cpp
│       │   │       UAESkillAction_SwitchWeaponToGrenade.hpp
│       │   │       UAESkillAction_TakeDamage.cpp
│       │   │       UAESkillAction_TakeDamage.hpp
│       │   │       UAESkillCondition.cpp
│       │   │       UAESkillCondition.hpp
│       │   │       UAESkillConditionAction.cpp
│       │   │       UAESkillConditionAction.hpp
│       │   │       UAESkillCondition_And.cpp
│       │   │       UAESkillCondition_And.hpp
│       │   │       UAESkillCondition_FallingMode.cpp
│       │   │       UAESkillCondition_FallingMode.hpp
│       │   │       UAESkillCondition_GrenadeMode.cpp
│       │   │       UAESkillCondition_GrenadeMode.hpp
│       │   │       UAESkillCondition_HandleItemLimit.cpp
│       │   │       UAESkillCondition_HandleItemLimit.hpp
│       │   │       UAESkillCondition_KeyEvent.cpp
│       │   │       UAESkillCondition_KeyEvent.hpp
│       │   │       UAESkillCondition_MoveDist.cpp
│       │   │       UAESkillCondition_MoveDist.hpp
│       │   │       UAESkillCondition_Not.cpp
│       │   │       UAESkillCondition_Not.hpp
│       │   │       UAESkillCondition_Or.cpp
│       │   │       UAESkillCondition_Or.hpp
│       │   │       UAESkillCondition_PlayerState.cpp
│       │   │       UAESkillCondition_PlayerState.hpp
│       │   │       UAESkillCondition_PropertyLimit.cpp
│       │   │       UAESkillCondition_PropertyLimit.hpp
│       │   │       UAESkillCondition_VehicleDriver.cpp
│       │   │       UAESkillCondition_VehicleDriver.hpp
│       │   │       UAESkillEventEffectMapForEditor.cpp
│       │   │       UAESkillEventEffectMapForEditor.hpp
│       │   │       UAESkillInterface.cpp
│       │   │       UAESkillInterface.hpp
│       │   │       UAESkillManagerComponent.cpp
│       │   │       UAESkillManagerComponent.hpp
│       │   │       UAESkillPhase.cpp
│       │   │       UAESkillPhase.hpp
│       │   │       UAESkillPicker.cpp
│       │   │       UAESkillPicker.hpp
│       │   │       UAESkillPicker_Fan.cpp
│       │   │       UAESkillPicker_Fan.hpp
│       │   │       UAESkillPicker_FanForClient.cpp
│       │   │       UAESkillPicker_FanForClient.hpp
│       │   │       UAESkillPicker_SkillOwner.cpp
│       │   │       UAESkillPicker_SkillOwner.hpp
│       │   │       UTSkillAppearance_AddParticle.cpp
│       │   │       UTSkillAppearance_AddParticle.hpp
│       │   │       UTSkillAppearance_ParticleSystem.cpp
│       │   │       UTSkillAppearance_ParticleSystem.hpp
│       │   │       UTSkillAppearance_RomoveParticle.cpp
│       │   │       UTSkillAppearance_RomoveParticle.hpp
│       │   │       UTSkillAppearance_SoundCue.cpp
│       │   │       UTSkillAppearance_SoundCue.hpp
│       │   │
│       │   ├───Templates
│       │   │       TemplateMgr.cpp
│       │   │       TemplateUtil.cpp
│       │   │
│       │   ├───UI
│       │   │   │   VoiceCheckObject.cpp
│       │   │   │   VoiceCheckObject.hpp
│       │   │   │
│       │   │   ├───KeyHint
│       │   │   │   └───KeyboardAndMouse
│       │   │   │           TslKeyboardAndMouseHintWidget.cpp
│       │   │   │           TslKeyboardAndMouseHintWidget.hpp
│       │   │   │
│       │   │   └───Widget
│       │   │           CustomScrollBox.cpp
│       │   │           CustomScrollBox.hpp
│       │   │           ParachutingWidget.cpp
│       │   │           ParachutingWidget.hpp
│       │   │           SCustomScrollBox.cpp
│       │   │           SRadarChartUserWidget.cpp
│       │   │           SRadarChartUserWidget.hpp
│       │   │
│       │   ├───Utility
│       │   │       ActorCacheMgr.cpp
│       │   │       ActorCacheMgr.hpp
│       │   │       BitMsg.cpp
│       │   │       BitMsg.hpp
│       │   │       STExtraBlueprintFunctionLibrary.cpp
│       │   │       STExtraBlueprintFunctionLibrary.hpp
│       │   │       STExtraMapFunctionLibrary.cpp
│       │   │       STExtraUIUtils.cpp
│       │   │
│       │   ├───Vehicle
│       │   │   │   STExtraVehicleBase.cpp
│       │   │   │   STExtraVehicleBase.hpp
│       │   │   │   STExtraVehicleUtils.cpp
│       │   │   │   STExtraVehicleUtils.hpp
│       │   │   │   VehicleDamageComponent.cpp
│       │   │   │   VehicleDamageComponent.hpp
│       │   │   │   VehicleSeatComponent.cpp
│       │   │   │   VehicleSeatComponent.hpp
│       │   │   │   VehicleSyncComponent.cpp
│       │   │   │   VehicleSyncComponent.hpp
│       │   │   │
│       │   │   └───Wheeled
│       │   │           STExtraVehicleMovementComponent4W.cpp
│       │   │           STExtraVehicleMovementComponent4W.hpp
│       │   │           STExtraWheeledVehicle.cpp
│       │   │           STExtraWheeledVehicle.hpp
│       │   │
│       │   └───Weapons
│       │           FireWeaponState.cpp
│       │           FireWeaponState.hpp
│       │           IdleWeaponState.cpp
│       │           IdleWeaponState.hpp
│       │           STEFlareGunProjectComponent.cpp
│       │           STEShootWeaponProjectComponent.cpp
│       │           STEShootWeaponProjectComponent.hpp
│       │           STExtraShootWeapon.cpp
│       │           STExtraShootWeapon.hpp
│       │           STExtraShootWeaponComponent.cpp
│       │           STExtraShootWeaponComponent.hpp
│       │           STExtraWeapon.cpp
│       │           STExtraWeapon.hpp
│       │           WeaponAntiCheatComp.cpp
│       │           WeaponAntiCheatComp.hpp
│       │           WeaponManagerComponent.cpp
│       │           WeaponManagerComponent.hpp
│       │           WeaponPostFireState.cpp
│       │           WeaponPostFireState.hpp
│       │           WeaponPreFireState.cpp
│       │           WeaponPreFireState.hpp
│       │           WeaponSpecificHandler.cpp
│       │           WeaponSpecificHandler.hpp
│       │           WeaponStateManager.cpp
│       │           WeaponStateManager.hpp
│       │
│       ├───SurviveLoadingScreen
│       │       SurviveLoadingSettings.hpp
│       │
│       ├───ThirdParty
│       │   ├───BGPrimary
│       │   │       BGPrimary.cpp
│       │   │       BGPrimaryRunnable.cpp
│       │   │
│       │   └───Discord
│       │           BGDiscord.cpp
│       │
│       ├───TslCommon
│       │   ├───Private
│       │   │       TslGameLog.cpp
│       │   │       TslWebSocket.cpp
│       │   │       TslWebSocketRunnable.cpp
│       │   │
│       │   └───Public
│       ├───UAEEditor
│       └───UnrealArchExt
│           └───Private
│                   BackendHUD.cpp
│                   FrontendHUD.cpp
│                   LogicManagerBase.cpp
│                   UAEUserWidget.cpp
│
└───UE4181

```

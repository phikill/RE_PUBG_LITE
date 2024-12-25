// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.IO;
using System;

public class TencentVoiceForUnreal : ModuleRules
{
	public TencentVoiceForUnreal(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicIncludePaths.AddRange(
			new string[] {
				"TencentVoiceForUnreal/Public",
				// ... add public include paths required here ...
			}
			);
				
		
		PrivateIncludePaths.AddRange(
			new string[] {
				"TencentVoiceForUnreal/Private",
				// ... add other private include paths required here ...
            }
			);
			
		
		PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
				// ... add other public dependencies that you statically link with here ...
                "Projects"
            }
			);
			
		
		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"CoreUObject",
				"Engine",
				"Slate",
				"SlateCore",
				// ... add private dependencies that you statically link with here ...	
			}
			);
		
		
		DynamicallyLoadedModuleNames.AddRange(
			new string[]
			{
				// ... add any modules that your module loads dynamically here ...
			}
			);

        LoadThirdParty(Target);
    }

    private string GetProjectPath
    {
        get { return Path.GetFullPath(Path.Combine(ModuleDirectory, "../../../../")); }
    }

    private string ThirdPartyPath
    {
        get { return Path.GetFullPath(Path.Combine(ModuleDirectory, "../../ThirdParty/")); }
    }

    private bool LoadThirdParty(ReadOnlyTargetRules Target)
    {
        bool isLibrarySupported = false;
        if (Target.Platform == UnrealTargetPlatform.Win32 || Target.Platform == UnrealTargetPlatform.Win64)
        {
            isLibrarySupported = true;

            string OSVersion = (Target.Platform == UnrealTargetPlatform.Win32) ? "x86" : "x64";

            PrivateIncludePaths.Add(Path.Combine(ThirdPartyPath, OSVersion, "include"));

            string LibPath = Path.Combine(ThirdPartyPath, OSVersion, "lib");
            //string DllPath = Path.Combine(ThirdPartyPath, "dll");
            //System.Console.WriteLine(Path.Combine(LibPath, "GCloudVoice.dll"));

            // Add Library Path 
            PublicLibraryPaths.Add(LibPath);

            //Add Static Libraries
            PublicAdditionalLibraries.Add("GCloudVoice.lib");

            //Add Dynamic Libraries
            PublicDelayLoadDLLs.Add("GCloudVoice.dll");
            //PublicDelayLoadDLLs.Add(Path.Combine(LibPath, "GCloudVoice.dll"));

            RuntimeDependencies.Add(new RuntimeDependency(Path.Combine(LibPath, "GCloudVoice.dll")));

            CopyToBinaries(Path.Combine(LibPath, "GCloudVoice.dll"), Target);
        }
        return isLibrarySupported;
    }

    private void CopyToBinaries(string Filepath, ReadOnlyTargetRules Target)
    {
        string binariesDir = Path.Combine(GetProjectPath, "Binaries", Target.Platform.ToString());
        string filename = Path.GetFileName(Filepath);

        if (!Directory.Exists(binariesDir))
        {
            Directory.CreateDirectory(binariesDir);
        }

        if (!File.Exists(Path.Combine(binariesDir, filename)))
        {
            try
            {
                File.Copy(Filepath, Path.Combine(binariesDir, filename), true);
            }
            catch(Exception e)
            {
                Console.WriteLine("Copy dll exception, ", e.ToString());
            }
        }
    }
}
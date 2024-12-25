// Copyright 1998-2012 Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class AudiokineticTools : ModuleRules
{
#if WITH_FORWARDED_MODULE_RULES_CTOR
    public AudiokineticTools(ReadOnlyTargetRules Target) : base(Target)
#else
    public AudiokineticTools(TargetInfo Target)
#endif
    {
        PCHUsage = PCHUsageMode.UseSharedPCHs;
		PrivateIncludePaths.Add("AudiokineticTools/Private");
        PrivateIncludePathModuleNames.AddRange(
            new string[]
            {
                "TargetPlatform",
                "MainFrame",
				"MovieSceneTools",
                "LevelEditor"
            });

        PublicIncludePathModuleNames.AddRange(
            new string[] 
            { 
                "AssetTools",
                "ContentBrowser",
                "Matinee"
            });

        PublicDependencyModuleNames.AddRange(
            new string[] 
            { 
                "AkAudio",
                "Core",
                "InputCore",
                "CoreUObject",
                "Engine",
                "UnrealEd",
                "Slate",
                "SlateCore",
                "Matinee",
                "EditorStyle",
				"Json",
				"XmlParser",
				"WorkspaceMenuStructure",
				"DirectoryWatcher",
                "Projects",
				"Sequencer",
                "PropertyEditor"
            });

        PrivateDependencyModuleNames.AddRange(
            new string[]
            {
				"MovieScene",
				"MovieSceneTools",
				"MovieSceneTracks",
				"MatineeToLevelSequence",
                "RenderCore"
			});
	}
}

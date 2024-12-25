// Copyright 1998-2014 Epic Games, Inc. All Rights Reserved.

#include "AkAudioDevice.h"
#include "AkSettings.h"

#if WITH_EDITOR
#include "Misc/MessageDialog.h"
#include "HAL/FileManager.h"
#include "SDockTab.h"
#endif

#include "UnrealType.h"


//////////////////////////////////////////////////////////////////////////
// UAkSettings

UAkSettings::UAkSettings(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	TCHAR WwiseDir[AK_MAX_PATH];
	FPlatformMisc::GetEnvironmentVariable(TEXT("WWISEROOT"), WwiseDir, AK_MAX_PATH);

	WwiseWindowsInstallationPath.Path = FString(WwiseDir);
}

#if WITH_EDITOR
namespace UAkSettings_Helper
{
	void TrimPath(FString& Path)
	{
#if UE_4_18_OR_LATER
		Path.TrimStartAndEndInline();
#else
		Path = Path.Trim();
		Path = Path.TrimTrailing();
#endif // UE_4_18_OR_LATER
	}

	FString GetProjectDirectory()
	{
#if UE_4_18_OR_LATER
		return FPaths::ProjectDir();
#else
		return FPaths::GameDir();
#endif // UE_4_18_OR_LATER
	}

	void SanitizePath(FString& Path, const FString& PreviousPath, const FText& DialogMessage)
	{
		TrimPath(Path);

		FText FailReason;
		if (!FPaths::ValidatePath(Path, &FailReason))
		{
			FMessageDialog::Open(EAppMsgType::Ok, FailReason);
			Path = PreviousPath;
		}

		const FString TempPath = FPaths::IsRelative(Path) ? FPaths::ConvertRelativePathToFull(GetProjectDirectory(), Path) : Path;
		if (!FPaths::DirectoryExists(TempPath))
		{
			FMessageDialog::Open(EAppMsgType::Ok, DialogMessage);
			Path = PreviousPath;
		}
	}

	void SanitizeProjectPath(FString& Path, const FString& PreviousPath, const FText& DialogMessage, bool& bRequestRefresh)
	{
		TrimPath(Path);

		FString TempPath = IFileManager::Get().ConvertToAbsolutePathForExternalAppForWrite(*Path);

		FText FailReason;
		if (!FPaths::ValidatePath(TempPath, &FailReason))
		{
			if (EAppReturnType::Ok == FMessageDialog::Open(EAppMsgType::Ok, FailReason))
			{
				Path = PreviousPath;
				return;
			}
		}

		auto ProjectDirectory = GetProjectDirectory();
		if (!FPaths::FileExists(TempPath))
		{
			// Path might be a valid one (relative to game) entered manually. Check that.
			TempPath = FPaths::ConvertRelativePathToFull(ProjectDirectory, Path);

			if (!FPaths::FileExists(TempPath))
			{
				if (EAppReturnType::Ok == FMessageDialog::Open(EAppMsgType::Ok, DialogMessage))
				{
					Path = PreviousPath;
					return;
				}
			}
		}

		// Make the path relative to the game dir
		FPaths::MakePathRelativeTo(TempPath, *ProjectDirectory);
		Path = TempPath;

		if (Path != PreviousPath)
		{
			TSharedRef<SDockTab> WwisePickerTab = FGlobalTabmanager::Get()->InvokeTab(FName("WwisePicker"));
			bRequestRefresh = true;
		}
	}
}

void UAkSettings::PreEditChange(UProperty* PropertyAboutToChange)
{
	PreviousWwiseProjectPath = WwiseProjectPath.FilePath;
	PreviousWwiseMacPath = WwiseMacInstallationPath.FilePath;
	PreviousWwiseWindowsPath = WwiseWindowsInstallationPath.Path;
}

void UAkSettings::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	const FName PropertyName = (PropertyChangedEvent.Property != nullptr) ? PropertyChangedEvent.Property->GetFName() : NAME_None;
	const FName MemberPropertyName = (PropertyChangedEvent.Property != nullptr) ? PropertyChangedEvent.MemberProperty->GetFName() : NAME_None;

	if ( PropertyName == GET_MEMBER_NAME_CHECKED(UAkSettings, MaxSimultaneousReverbVolumes) )
	{
		MaxSimultaneousReverbVolumes = FMath::Clamp<uint8>( MaxSimultaneousReverbVolumes, 0, AK_MAX_AUX_PER_OBJ );
		FAkAudioDevice* AkAudioDevice = FAkAudioDevice::Get();
		if( AkAudioDevice )
		{
			AkAudioDevice->SetMaxAuxBus(MaxSimultaneousReverbVolumes);
		}
	}
	else if (MemberPropertyName == GET_MEMBER_NAME_CHECKED(UAkSettings, WwiseWindowsInstallationPath))
	{
		UAkSettings_Helper::SanitizePath(WwiseWindowsInstallationPath.Path, PreviousWwiseWindowsPath, FText::FromString("Please enter a valid Wwise Authoring Windows executable path"));
	}
	else if (MemberPropertyName == GET_MEMBER_NAME_CHECKED(UAkSettings, WwiseMacInstallationPath))
	{
		UAkSettings_Helper::SanitizePath(WwiseMacInstallationPath.FilePath, PreviousWwiseMacPath, FText::FromString("Please enter a valid Wwise Authoring Mac executable path"));
	}
	else if (MemberPropertyName == GET_MEMBER_NAME_CHECKED(UAkSettings, WwiseProjectPath))
	{
		UAkSettings_Helper::SanitizeProjectPath(WwiseProjectPath.FilePath, PreviousWwiseProjectPath, FText::FromString("Please enter a valid Wwise project"), bRequestRefresh);
	}

	Super::PostEditChangeProperty(PropertyChangedEvent);
}
#endif


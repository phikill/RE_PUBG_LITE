#pragma once

#include "AkSettings.generated.h"

UCLASS(config = Game, defaultconfig)
class AKAUDIO_API UAkSettings : public UObject
{
	GENERATED_UCLASS_BODY()

	// The number of AkReverbVolumes that will be simultaneously applied to a sound source
	UPROPERTY(Config, EditAnywhere, Category="Ak Reverb Volume")
	uint8 MaxSimultaneousReverbVolumes = AK_MAX_AUX_PER_OBJ;

	// Wwise Project Path
	UPROPERTY(Config, EditAnywhere, Category="Installation", meta=(FilePathFilter="wproj", AbsolutePath))
	FFilePath WwiseProjectPath;

	// Wwise Installation Path (Windows Authoring tool)
	UPROPERTY(Config, EditAnywhere, Category="Installation")
	FDirectoryPath WwiseWindowsInstallationPath;

	// Wwise Installation Path (Mac Authoring tool)
	UPROPERTY(Config, EditAnywhere, Category="Installation", meta=(FilePathFilter="app", AbsolutePath))
	FFilePath WwiseMacInstallationPath;

	UPROPERTY(Config)
	bool SuppressWwiseProjectPathWarnings = false;

	UPROPERTY(Config, EditAnywhere, Category = "Experimental Features")
	bool UseAlternateObstructionOcclusionFeature = false;

protected:
#if WITH_EDITOR
	virtual void PostEditChangeProperty( struct FPropertyChangedEvent& PropertyChangedEvent ) override;
	virtual void PreEditChange(UProperty* PropertyAboutToChange) override;

#endif

private:
	FString PreviousWwiseProjectPath;
	FString PreviousWwiseMacPath;
	FString PreviousWwiseWindowsPath;

public:
	bool bRequestRefresh = false;
};

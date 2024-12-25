// Copyright (c) 2006-2012 Audiokinetic Inc. / All Rights Reserved

/*=============================================================================
	AkAcousticsPortal.h:
=============================================================================*/
#pragma once

#include "GameFramework/Volume.h"
#include "AkAcousticPortal.generated.h"

UENUM(BlueprintType)
enum class AkAcousticPortalState : uint8
{
	Closed = 0,
	Open = 1,
};

UCLASS(ClassGroup = Audiokinetic, hidecategories=(Advanced, Attachment, Volume), BlueprintType)
class AKAUDIO_API AAkAcousticPortal : public AVolume
{
	GENERATED_UCLASS_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = AkAcousticPortal)
	float						Gain;

	virtual void PostRegisterAllComponents() override;
	virtual void PostUnregisterAllComponents() override;

	UFUNCTION(BlueprintCallable, Category = "Audiokinetic|AkAcousticPortal")
	void OpenPortal();

	UFUNCTION(BlueprintCallable, Category = "Audiokinetic|AkAcousticPortal")
	void ClosePortal();

	UFUNCTION(BlueprintCallable, Category = "Audiokinetic|AkAcousticPortal")
	AkAcousticPortalState GetCurrentState() const;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = AkAcousticPortal)
	AkAcousticPortalState InitialState;

protected:
	int CurrentState;
};

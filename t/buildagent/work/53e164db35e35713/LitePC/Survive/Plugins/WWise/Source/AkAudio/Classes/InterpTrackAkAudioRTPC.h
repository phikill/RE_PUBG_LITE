// Copyright (c) 2006-2012 Audiokinetic Inc. / All Rights Reserved
#pragma once

#include "Matinee/InterpTrackFloatBase.h"
#include "InterpTrackAkAudioRTPC.generated.h"

/**
 *
 *
 *	A track that plays ak events on the groups Actor.
 */

UCLASS(MinimalAPI)
class UInterpTrackAkAudioRTPC : public UInterpTrackFloatBase
{
	GENERATED_UCLASS_BODY()

	/** Array of rtpc events to play at specific times. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=InterpTrackAkAudioRTPC)
	FString Param;

	/** if set, rtpc event plays only when playing the matinee in reverse instead of when the matinee plays forward */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=InterpTrackAkAudioRTPC)
	uint32 bPlayOnReverse:1;

	/** If true, rtpc events on this track will not be forced to finish when the matinee sequence finishes. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=InterpTrackAkAudioRTPC)
	uint32 bContinueRTPCOnMatineeEnd:1;


	// Begin UObject Interface
	virtual void PostLoad() override;
	// End UObject Interface

	// Begin UInterpTrack interface
	virtual int32 AddKeyframe(float Time, UInterpTrackInst* TrInst, EInterpCurveMode InitInterpMode) override;
	virtual void PreviewUpdateTrack(float NewPosition, UInterpTrackInst* TrInst) override;
	virtual void UpdateTrack(float NewPosition, UInterpTrackInst* TrInst, bool bJump) override;
	virtual const FString GetEdHelperClassName() const override;
	virtual const FString GetSlateHelperClassName() const override;
	virtual bool AllowStaticActors() override { return true; }
	virtual void SetTrackToSensibleDefault() override;
#if WITH_EDITORONLY_DATA
	virtual class UTexture2D* GetTrackIcon() const override;
#endif
	// End UInterpTrack interface
};


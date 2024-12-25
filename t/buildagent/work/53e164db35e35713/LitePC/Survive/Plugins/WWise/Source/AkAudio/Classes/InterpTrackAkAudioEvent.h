// Copyright (c) 2006-2012 Audiokinetic Inc. / All Rights Reserved
#pragma once

#include "Matinee/InterpTrack.h"
#include "Matinee/InterpTrackVectorBase.h"
#include "InterpTrackAkAudioEvent.generated.h"

/**
 *
 *
 *	A track that plays ak events on the groups Actor.
 */

/** Information for one event in the track. */
USTRUCT(BlueprintType)
struct FAkAudioEventTrackKey
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY()
	float Time;

	UPROPERTY(Category=AkAudioEventTrackKey, VisibleAnywhere, BlueprintReadWrite)
	class UAkAudioEvent* AkAudioEvent;

	UPROPERTY(Category = AkAudioEventTrackKey, VisibleAnywhere, BlueprintReadWrite)
	FString EventName;

	FAkAudioEventTrackKey()
	: Time(0)
	, AkAudioEvent(NULL)
	{
	}
};

UCLASS(/*MinimalAPI*/)
class AKAUDIO_API UInterpTrackAkAudioEvent : public UInterpTrackVectorBase
{
	GENERATED_UCLASS_BODY()

	/** Array of ak events to play at specific times. */
	UPROPERTY()
	TArray<struct FAkAudioEventTrackKey> Events;

	/** If true, events on this track will not be forced to finish when the matinee sequence finishes. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=InterpTrackAkAudioEvent)
	uint32 bContinueEventOnMatineeEnd:1;

	// Begin UObject Interface
	virtual void PostLoad() override;
	// End UObject Interface

	// Begin UInterpTrack interface
	virtual int32 GetNumKeyframes() const override;
	virtual void GetTimeRange(float& StartTime, float& EndTime) const override;
	virtual float GetKeyframeTime(int32 KeyIndex) const override;
	virtual int32 AddKeyframe(float Time, UInterpTrackInst* TrInst, EInterpCurveMode InitInterpMode) override;
	virtual int32 SetKeyframeTime(int32 KeyIndex, float NewKeyTime, bool bUpdateOrder=true) override;
	virtual void RemoveKeyframe(int32 KeyIndex) override;
	virtual int32 DuplicateKeyframe(int32 KeyIndex, float NewKeyTime, UInterpTrack* ToTrack = NULL) override;
	virtual bool GetClosestSnapPosition(float InPosition, TArray<int32> &IgnoreKeys, float& OutPosition) override;
	virtual void PreviewUpdateTrack(float NewPosition, UInterpTrackInst* TrInst) override;
	virtual void UpdateTrack(float NewPosition, UInterpTrackInst* TrInst, bool bJump) override;
	virtual const FString GetEdHelperClassName() const override;
	virtual const FString GetSlateHelperClassName() const override;
	virtual void DrawTrack( FCanvas* Canvas, UInterpGroup* Group, const FInterpTrackDrawParams& Params ) override;
	virtual bool AllowStaticActors() override { return true; }
	virtual void SetTrackToSensibleDefault() override;
#if WITH_EDITORONLY_DATA
	virtual class UTexture2D* GetTrackIcon() const override;
#endif
	// End UInterpTrack interface

	/**
	 * Return the key at the specified position in the track.
	 */
	struct FAkAudioEventTrackKey& GetAkEventTrackKeyAtPosition(float InPosition);
};




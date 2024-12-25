// Copyright (c) 2006-2012 Audiokinetic Inc. / All Rights Reserved

/*=============================================================================
	InterpTrackAkAudioRTPC.h:
=============================================================================*/

#include "AkAudioDevice.h"
#include "AkAudioClasses.h"
#include "EngineClasses.h"
#include "InterpolationHitProxy.h"

/*-----------------------------------------------------------------------------
	UInterpTrackAkAudioRTPC
-----------------------------------------------------------------------------*/

UInterpTrackAkAudioRTPC::UInterpTrackAkAudioRTPC(const class FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	// Property initialization
	TrackInstClass = UInterpTrackInstAkAudioEvent::StaticClass();
	TrackTitle = TEXT("Ak Audio RTPC");
}

void UInterpTrackAkAudioRTPC::SetTrackToSensibleDefault()
{
	FloatTrack.Points.Empty();

	FloatTrack.AddPoint( 0.0f, 0.0f );
}

int32 UInterpTrackAkAudioRTPC::AddKeyframe(float Time, UInterpTrackInst* TrInst, EInterpCurveMode InitInterpMode)
{
	float DefaultValue = 0.0f;
	float NewFloatValue = FloatTrack.Eval( Time, DefaultValue );

	int32 NewKeyIndex = FloatTrack.AddPoint( Time, NewFloatValue );
	FloatTrack.Points[NewKeyIndex].InterpMode = InitInterpMode;

	FloatTrack.AutoSetTangents(CurveTension);

	return NewKeyIndex;
}

void UInterpTrackAkAudioRTPC::PostLoad()
{
	Super::PostLoad();
	if (FloatTrack.Points.Num() <= 0)
	{
		SetTrackToSensibleDefault();
	}
}

void UInterpTrackAkAudioRTPC::UpdateTrack(float NewPosition, UInterpTrackInst* TrInst, bool bJump)
{
	AActor* Actor = TrInst->GetGroupActor();

	float DefaultValue = 0.0f;
	float NewFloatValue = FloatTrack.Eval( NewPosition, DefaultValue );

	FAkAudioDevice * AudioDevice = FAkAudioDevice::Get();
	if( AudioDevice && Param.Len() )
	{
		AudioDevice->SetRTPCValue( *Param, NewFloatValue, 0, Actor );
	}
}

void UInterpTrackAkAudioRTPC::PreviewUpdateTrack(float NewPosition, UInterpTrackInst* TrInst)
{
	UpdateTrack(NewPosition, TrInst, false);
}

const FString UInterpTrackAkAudioRTPC::GetEdHelperClassName() const
{
	return FString( TEXT("AudiokineticTools.InterpTrackAkAudioRTPCHelper") );
}

const FString UInterpTrackAkAudioRTPC::GetSlateHelperClassName() const
{
	return FString( TEXT("AudiokineticTools.InterpTrackAkAudioRTPCHelper") );
}

#if WITH_EDITORONLY_DATA
UTexture2D* UInterpTrackAkAudioRTPC::GetTrackIcon() const
{
	return (UTexture2D*)StaticLoadObject( UTexture2D::StaticClass(), NULL, TEXT("/Engine/EditorMaterials/MatineeGroups/MAT_Groups_Sound.MAT_Groups_Sound"), NULL, LOAD_None, NULL );
}
#endif

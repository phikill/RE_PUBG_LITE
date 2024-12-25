// Copyright (c) 2006-2012 Audiokinetic Inc. / All Rights Reserved

/*=============================================================================
	InterpTrackAkRTPCHelper.cpp: 
=============================================================================*/
#include "AudiokineticToolsPrivatePCH.h"
#include "AkAudioClasses.h"
#include "MatineeClasses.h"
#include "InterpTrackAkAudioRTPCHelper.h"

/*-----------------------------------------------------------------------------
	UInterpTrackAkAudioRTPCHelper
-----------------------------------------------------------------------------*/

UInterpTrackAkAudioRTPCHelper::UInterpTrackAkAudioRTPCHelper(const class FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	// Property initialization
}

bool UInterpTrackAkAudioRTPCHelper::PreCreateKeyframe( UInterpTrack *Track, float KeyTime ) const
{
	return true;
}

void  UInterpTrackAkAudioRTPCHelper::PostCreateKeyframe( UInterpTrack *Track, int32 KeyIndex ) const
{
}

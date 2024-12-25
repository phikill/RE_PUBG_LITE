// Copyright (c) 2006-2012 Audiokinetic Inc. / All Rights Reserved

/*=============================================================================
	InterpTrackInstAkEvent.h:
=============================================================================*/

#include "AkAudioDevice.h"
#include "Matinee/InterpGroupInst.h"
#include "Matinee/MatineeActor.h"
#include "InterpTrackInstAkAudioEvent.h"

/*-----------------------------------------------------------------------------
	UInterpTrackInstAkAudioEvent
-----------------------------------------------------------------------------*/

UInterpTrackInstAkAudioEvent::UInterpTrackInstAkAudioEvent(const class FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	// Property initialization
}

void UInterpTrackInstAkAudioEvent::InitTrackInst(UInterpTrack* Track)
{
	UInterpGroupInst* GrInst = CastChecked<UInterpGroupInst>( GetOuter() );
	AMatineeActor* MatineeActor = CastChecked<AMatineeActor>( GrInst->GetOuter() );
	LastUpdatePosition = MatineeActor->InterpPosition;
}

void UInterpTrackInstAkAudioEvent::TermTrackInst(UInterpTrack* Track)
{
}
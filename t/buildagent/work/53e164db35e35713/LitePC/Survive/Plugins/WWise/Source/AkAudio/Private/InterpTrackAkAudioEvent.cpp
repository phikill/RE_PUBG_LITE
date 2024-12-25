// Copyright (c) 2006-2012 Audiokinetic Inc. / All Rights Reserved

/*=============================================================================
	InterpTrackAkAudioEvent.cpp:
=============================================================================*/

#include "AkAudioDevice.h"
#include "AkAudioEvent.h"
#include "InterpTrackAkAudioEvent.h"
#include "InterpTrackInstAkAudioEvent.h"
#include "EngineClasses.h"
#include "InterpolationHitProxy.h"

/*-----------------------------------------------------------------------------
	Macros for making arrays-of-structs type tracks easier
-----------------------------------------------------------------------------*/

#define STRUCTTRACK_GETNUMKEYFRAMES( TrackClass, KeyArray ) \
int32 TrackClass::GetNumKeyframes() const \
{ \
	return KeyArray.Num(); \
}

#define STRUCTTRACK_GETTIMERANGE( TrackClass, KeyArray, TimeVar ) \
void TrackClass::GetTimeRange(float& StartTime, float& EndTime) const \
{ \
	if(KeyArray.Num() == 0) \
	{ \
		StartTime = 0.f; \
		EndTime = 0.f; \
	} \
	else \
	{ \
		StartTime = KeyArray[0].TimeVar; \
		EndTime = KeyArray[ KeyArray.Num()-1 ].TimeVar; \
	} \
}

// The default implementation returns the time of the last keyframe.
#define STRUCTTRACK_GETTRACKENDTIME( TrackClass, KeyArray, TimeVar ) \
float TrackClass::GetTrackEndTime() const \
{ \
	return KeyArray.Num() ? KeyArray[KeyArray.Num() - 1].TimeVar : 0.0f; \
} 

#define STRUCTTRACK_GETKEYFRAMETIME( TrackClass, KeyArray, TimeVar ) \
float TrackClass::GetKeyframeTime(int32 KeyIndex) const \
{ \
	if( KeyIndex < 0 || KeyIndex >= KeyArray.Num() ) \
	{ \
		return 0.f; \
	} \
 	return KeyArray[KeyIndex].TimeVar; \
}

#define STRUCTTRACK_SETKEYFRAMETIME( TrackClass, KeyArray, TimeVar, KeyType ) \
int32 TrackClass::SetKeyframeTime(int32 KeyIndex, float NewKeyTime, bool bUpdateOrder) \
{ \
	if( KeyIndex < 0 || KeyIndex >= KeyArray.Num() ) \
	{ \
		return KeyIndex; \
	} \
	if(bUpdateOrder) \
	{ \
		/* First, remove cut from track */ \
		KeyType MoveKey = KeyArray[KeyIndex]; \
		KeyArray.RemoveAt(KeyIndex); \
		/* Set its time to the new one. */ \
		MoveKey.TimeVar = NewKeyTime; \
		/* Find correct new position and insert. */ \
		int32 i=0; \
		for( i=0; i<KeyArray.Num() && KeyArray[i].TimeVar < NewKeyTime; i++); \
		KeyArray.InsertZeroed(i); \
		KeyArray[i] = MoveKey; \
		return i; \
	} \
	else \
	{ \
		KeyArray[KeyIndex].TimeVar = NewKeyTime; \
		return KeyIndex; \
	} \
}

#define STRUCTTRACK_REMOVEKEYFRAME( TrackClass, KeyArray ) \
void TrackClass::RemoveKeyframe(int32 KeyIndex) \
{ \
	if( KeyIndex < 0 || KeyIndex >= KeyArray.Num() ) \
	{ \
		return; \
	} \
	KeyArray.RemoveAt(KeyIndex); \
}

#define STRUCTTRACK_DUPLICATEKEYFRAME( TrackClass, KeyArray, TimeVar, KeyType ) \
int32 TrackClass::DuplicateKeyframe(int32 KeyIndex, float NewKeyTime, UInterpTrack* ToTrack) \
{ \
	if( KeyIndex < 0 || KeyIndex >= KeyArray.Num() ) \
	{ \
		return INDEX_NONE; \
	} \
	KeyType NewKey = KeyArray[KeyIndex]; \
	NewKey.TimeVar = NewKeyTime; \
	/* Find the correct index to insert this key. */ \
	int32 i=0; for( i=0; i<KeyArray.Num() && KeyArray[i].TimeVar < NewKeyTime; i++); \
	KeyArray.InsertZeroed(i); \
	KeyArray[i] = NewKey; \
	return i; \
}

#define STRUCTTRACK_GETCLOSESTSNAPPOSITION( TrackClass, KeyArray, TimeVar ) \
bool TrackClass::GetClosestSnapPosition(float InPosition, TArray<int32> &IgnoreKeys, float& OutPosition) \
{ \
	if(KeyArray.Num() == 0) \
	{ \
		return false; \
	} \
	bool bFoundSnap = false; \
	float ClosestSnap = 0.f; \
	float ClosestDist = BIG_NUMBER; \
	for(int32 i=0; i<KeyArray.Num(); i++) \
	{ \
		if(!IgnoreKeys.Contains(i)) \
		{ \
			float Dist = FMath::Abs( KeyArray[i].TimeVar - InPosition ); \
			if(Dist < ClosestDist) \
			{ \
				ClosestSnap = KeyArray[i].TimeVar; \
				ClosestDist = Dist; \
				bFoundSnap = true; \
			} \
		} \
	} \
	OutPosition = ClosestSnap; \
	return bFoundSnap; \
}

STRUCTTRACK_GETNUMKEYFRAMES(UInterpTrackAkAudioEvent, Events)
STRUCTTRACK_GETTIMERANGE(UInterpTrackAkAudioEvent, Events, Time)
STRUCTTRACK_GETKEYFRAMETIME(UInterpTrackAkAudioEvent, Events, Time)
STRUCTTRACK_SETKEYFRAMETIME(UInterpTrackAkAudioEvent, Events, Time, FAkAudioEventTrackKey )
STRUCTTRACK_REMOVEKEYFRAME(UInterpTrackAkAudioEvent, Events )
STRUCTTRACK_DUPLICATEKEYFRAME(UInterpTrackAkAudioEvent, Events, Time, FAkAudioEventTrackKey )
STRUCTTRACK_GETCLOSESTSNAPPOSITION(UInterpTrackAkAudioEvent, Events, Time)

static const FColor KeyLabelColor(225,225,225);
static const int32	KeyVertOffset = 3;

UInterpTrackAkAudioEvent::UInterpTrackAkAudioEvent(const class FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	// Property initialization
	TrackInstClass = UInterpTrackInstAkAudioEvent::StaticClass();
	TrackTitle = TEXT("Ak Audio Event");
}

void UInterpTrackAkAudioEvent::SetTrackToSensibleDefault()
{
	VectorTrack.Points.Empty();

	VectorTrack.AddPoint( 0.0f, FVector::ZeroVector );
}

int32 UInterpTrackAkAudioEvent::AddKeyframe(float Time, UInterpTrackInst* TrInst, EInterpCurveMode InitInterpMode)
{
	FAkAudioEventTrackKey NewAkEvent;
	NewAkEvent.AkAudioEvent = NULL;
	NewAkEvent.Time = Time;

	// Find the correct index to insert this cut.
	int32 i=0; for( i=0; i<Events.Num() && Events[i].Time < Time; i++);
	Events.Insert(NewAkEvent, i);
	
	return i;
}

void UInterpTrackAkAudioEvent::PostLoad()
{
	Super::PostLoad();
	if (VectorTrack.Points.Num() <= 0)
	{
		SetTrackToSensibleDefault();
	}
}

FAkAudioEventTrackKey& UInterpTrackAkAudioEvent::GetAkEventTrackKeyAtPosition(float InPosition)
{
	int32 EventIndex;

	for (EventIndex = -1; EventIndex<Events.Num()-1 && Events[EventIndex+1].Time < InPosition; EventIndex++);
	if (EventIndex == -1)
	{
		EventIndex = 0;
	}

	return Events[EventIndex];
}

void UInterpTrackAkAudioEvent::UpdateTrack(float NewPosition, UInterpTrackInst* TrInst, bool bJump)
{
	if (Events.Num() <= 0)
	{
		//UE_LOG(LogMatinee, Warning,TEXT("No sounds for sound track %s"),*GetName());
		return;
	}

	UInterpTrackInstAkAudioEvent* EventInst = CastChecked<UInterpTrackInstAkAudioEvent>(TrInst);

	// Only play AkEvents if we are playing Matinee forwards, and 
	if(NewPosition > EventInst->LastUpdatePosition && !bJump)
	{
		// Find which sound we are starting in. -1 Means before first sound.
		int32 StartEventIdx = -1; 
		for( StartEventIdx = -1; StartEventIdx<Events.Num()-1 && Events[StartEventIdx+1].Time < EventInst->LastUpdatePosition; StartEventIdx++);

		// Find which sound we are ending in. -1 Means before first sound.
		int32 EndEventIdx = -1; 
		for( EndEventIdx = -1; EndEventIdx<Events.Num()-1 && Events[EndEventIdx+1].Time < NewPosition; EndEventIdx++);

		// If we have moved into a new sound, we should start playing it now.
		if(StartEventIdx != EndEventIdx)
		{
			FAkAudioEventTrackKey & AkEvenTrackKey = GetAkEventTrackKeyAtPosition(NewPosition);
			UAkAudioEvent* AkEvent = AkEvenTrackKey.AkAudioEvent;
			AActor* Actor = TrInst->GetGroupActor();

			FAkAudioDevice * AudioDevice = FAkAudioDevice::Get();
			if (AudioDevice)
			{
				AudioDevice->PostEvent(GET_AK_EVENT_NAME(AkEvent, AkEvenTrackKey.EventName), Actor);
			}
		}
	}

	// Finally update the current position as the last one.
	EventInst->LastUpdatePosition = NewPosition;
}

void UInterpTrackAkAudioEvent::PreviewUpdateTrack(float NewPosition, UInterpTrackInst* TrInst)
{
	UInterpGroupInst* GrInst = CastChecked<UInterpGroupInst>( TrInst->GetOuter() );
	AMatineeActor* MatineeActor = CastChecked<AMatineeActor>( GrInst->GetOuter() );
	UInterpGroup* Group = CastChecked<UInterpGroup>( GetOuter() );

	// Dont play sounds unless we are preview playback (ie not scrubbing).
	bool bJump = !(MatineeActor->bIsPlaying);
	UpdateTrack(NewPosition, TrInst, bJump);
}

const FString UInterpTrackAkAudioEvent::GetEdHelperClassName() const
{
	return FString( TEXT("AudiokineticTools.InterpTrackAkAudioEventHelper") );
}

const FString UInterpTrackAkAudioEvent::GetSlateHelperClassName() const
{
	return FString( TEXT("AudiokineticTools.InterpTrackAkAudioEventHelper") );
}

void UInterpTrackAkAudioEvent::DrawTrack( FCanvas* Canvas, UInterpGroup* Group, const FInterpTrackDrawParams& Params )
{
	bool bHitTesting = Canvas->IsHitTesting();

	// Use base-class to draw key triangles
	Super::DrawTrack(Canvas, Group, Params );

	// Draw event name for each block on top.
	for(int32 i = 0; i < Events.Num(); i++)
	{
		float SoundStartTime = Events[i].Time;
		int32 PixelPos = FMath::TruncToInt((SoundStartTime - Params.StartTime) * Params.PixelsPerSec);

		UAkAudioEvent * Event = Events[i].AkAudioEvent;
	
		FString SoundString( TEXT("None") );
		if(Event)
		{
			SoundString = FString( Event->GetName() );
		}
		else
		{
			SoundString = Events[i].EventName;
		}
		
		int32 XL, YL;
		StringSize( GEngine->GetSmallFont(), XL, YL, *SoundString );

		if(bHitTesting) 
		{
			Canvas->SetHitProxy( new HInterpTrackKeypointProxy(Group, this, i) );
		}
		Canvas->DrawShadowedString( PixelPos + 2, Params.TrackHeight - YL - KeyVertOffset, *SoundString, GEngine->GetSmallFont(), KeyLabelColor );
		if(bHitTesting)
		{
			Canvas->SetHitProxy(NULL);
		}
	}
}

#if WITH_EDITORONLY_DATA
UTexture2D* UInterpTrackAkAudioEvent::GetTrackIcon() const
{
	return (UTexture2D*)StaticLoadObject( UTexture2D::StaticClass(), NULL, TEXT("/Engine/EditorMaterials/MatineeGroups/MAT_Groups_Sound.MAT_Groups_Sound"), NULL, LOAD_None, NULL );
}
#endif

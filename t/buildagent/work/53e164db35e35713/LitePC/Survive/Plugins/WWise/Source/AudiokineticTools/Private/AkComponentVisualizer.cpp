// Copyright (c) 2006-2012 Audiokinetic Inc. / All Rights Reserved

/*=============================================================================
	AkComponentVisualizer.cpp:
=============================================================================*/
#include "AudiokineticToolsPrivatePCH.h"

#include "AkComponentVisualizer.h"
#include "AkAudioDevice.h"
#include "AkAudioClasses.h"
#include "SceneView.h"
#include "SceneManagement.h"

void FAkComponentVisualizer::DrawVisualization( const UActorComponent* Component, const FSceneView* View, FPrimitiveDrawInterface* PDI )
{
	if (View->Family->EngineShowFlags.AudioRadius)
	{
		float radius = -1.0f;
		const UAkComponent* AkComponent = Cast<const UAkComponent>(Component);

		if ( !AkComponent )
		{
			return;
		}

		if( !AkComponent->AkAudioEvent )
		{
			return;
		}

#ifdef AK_SOUNDFRAME
		TArray<AkUniqueID> soundIdsToListenTo;

		FAkAudioDevice* AkAudioDevice = FAkAudioDevice::Get();
		if ( !AkAudioDevice )
		{
			return;
		}

		AK::SoundFrame::ISoundFrame * SoundFrame = AkAudioDevice->GetSoundFrame();
		if ( SoundFrame )
		{
			// Stop listening...
			SoundFrame->ListenAttenuation(NULL, 0);

			FString eventName( AkComponent->AkAudioEvent->GetName() );
			AK::SoundFrame::IEvent * pSFEvent;
			if ( SoundFrame->GetEvent( *eventName, &pSFEvent ) )
			{
				AK::SoundFrame::IActionList * pActionList = pSFEvent->GetActionList();
				if ( pActionList )
				{
					// Generate an array of sound ids to observe
					while ( AK::SoundFrame::IAction * pAction = pActionList->Next() )
					{
						const AkUniqueID & SoundID = pAction->GetSoundObjectID();
						if ( SoundID != AK_INVALID_UNIQUE_ID )
						{
							soundIdsToListenTo.Add(SoundID);
						}
					}

					// Reset the sounds we're listening to, if required
					if ( soundIdsToListenTo.Num() )
					{
						SoundFrame->ListenAttenuation(&soundIdsToListenTo.Top(), soundIdsToListenTo.Num());

						// Obtain the attenuations for the component's sounds
						for ( int32 i = 0; i < soundIdsToListenTo.Num(); ++i )
						{
							AK::SoundFrame::ISoundObject * pSoundObject;
							if ( SoundFrame->GetSoundObject( soundIdsToListenTo[i], &pSoundObject ) )
							{
								radius = pSoundObject->AttenuationMaxDistance() * AkComponent->AttenuationScalingFactor;
							}
						}
					}
				}
				pSFEvent->Release();
			}
		}
#endif
		// If no SoundFrame, or something went wrong with SoundFrame, use the information from the SoundBanks
		if( radius == -1.0f )
		{
			radius = AkComponent->GetAttenuationRadius();
		}
		FColor AudioOuterRadiusColor(255, 153, 0);
		DrawWireSphereAutoSides(PDI, AkComponent->GetComponentLocation(), AudioOuterRadiusColor, radius, SDPG_World);

	}
}

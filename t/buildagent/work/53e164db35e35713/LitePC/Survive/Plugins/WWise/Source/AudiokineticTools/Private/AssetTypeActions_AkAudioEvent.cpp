// Copyright (c) 2006-2012 Audiokinetic Inc. / All Rights Reserved

/*=============================================================================
	AssetTypeActions_AkAudioEvent.cpp:
=============================================================================*/
#include "AudiokineticToolsPrivatePCH.h"
#include "IAssetTools.h"
#include "AkAudioClasses.h"
#include "AkAudioDevice.h"
#include "AssetTypeActions_AkAudioEvent.h"
#include "AkAudioDevice.h"
#include "Toolkits/SimpleAssetEditor.h"
#include "MultiBox/MultiBoxBuilder.h"
#include "Misc/ScopeLock.h"

#define LOCTEXT_NAMESPACE "AssetTypeActions"

FCriticalSection FAssetTypeActions_AkAudioEvent::m_PlayingAkEventsCriticalSection;


static void AkEventPreviewCallback( AkCallbackType in_eType, AkCallbackInfo* in_pCallbackInfo )
{
	AkEventCallbackInfo * EventInfo = (AkEventCallbackInfo *)in_pCallbackInfo;
	TMap<FString, AkPlayingID> * pPlayingAkEvents = (TMap<FString, AkPlayingID> *)EventInfo->pCookie;

	{
		FScopeLock Lock(&FAssetTypeActions_AkAudioEvent::m_PlayingAkEventsCriticalSection);

		for(TMap<FString, AkPlayingID>::TConstIterator It(*pPlayingAkEvents); It; ++It)
		{
			if( It.Value() == EventInfo->playingID )
			{
				pPlayingAkEvents->Remove(It.Key());
				return;
			}
		}
	}
}

void FAssetTypeActions_AkAudioEvent::GetActions( const TArray<UObject*>& InObjects, FMenuBuilder& MenuBuilder )
{
	auto Events = GetTypedWeakObjectPtrs<UAkAudioEvent>(InObjects);

	MenuBuilder.AddMenuEntry(
		LOCTEXT("AkAudioEvent_PlayEvent","Play Event"),
		LOCTEXT("AkAudioEvent_PlayEventTooltip", "Plays the selected event."),
		FSlateIcon(),
		FUIAction(
			FExecuteAction::CreateSP( this, &FAssetTypeActions_AkAudioEvent::PlayEvent, Events ),
			FCanExecuteAction()
			)
		);

	MenuBuilder.AddMenuEntry(
		LOCTEXT("AkAudioEvent_StopEvent","Stop Event"),
		LOCTEXT("AkAudioEvent_StopEventTooltip", "Stops the selected event."),
		FSlateIcon(),
		FUIAction(
			FExecuteAction::CreateSP( this, &FAssetTypeActions_AkAudioEvent::StopEvent, Events ),
			FCanExecuteAction()
			)
		);
}

void FAssetTypeActions_AkAudioEvent::OpenAssetEditor( const TArray<UObject*>& InObjects, TSharedPtr<IToolkitHost> EditWithinLevelEditor )
{
	FSimpleAssetEditor::CreateEditor(EToolkitMode::Standalone, EditWithinLevelEditor, InObjects);
}

void FAssetTypeActions_AkAudioEvent::AssetsActivated( const TArray<UObject*>& InObjects, EAssetTypeActivationMethod::Type ActivationType )
{
	if ( ActivationType == EAssetTypeActivationMethod::DoubleClicked || ActivationType == EAssetTypeActivationMethod::Opened )
	{
		if ( InObjects.Num() == 1 )
		{
			FAssetEditorManager::Get().OpenEditorForAsset(InObjects[0]);
		}
		else if ( InObjects.Num() > 1 )
		{
			FAssetEditorManager::Get().OpenEditorForAssets(InObjects);
		}
	}
	else if (ActivationType == EAssetTypeActivationMethod::Previewed)
	{
		for (auto ObjIt = InObjects.CreateConstIterator(); ObjIt; ++ObjIt)
		{
			UAkAudioEvent * pEvent = Cast<UAkAudioEvent>(*ObjIt);
			if ( pEvent )
			{
				FAkAudioDevice * AudioDevice = FAkAudioDevice::Get();
				if ( AudioDevice )
				{
					AkPlayingID* foundID;
					{
						FScopeLock Lock(&m_PlayingAkEventsCriticalSection);
						foundID = m_PlayingAkEvents.Find(pEvent->GetName());
					}
					if( foundID != NULL )
					{
						AudioDevice->StopPlayingID( *foundID );
					}
					else
					{
						AkPlayingID CurrentPlayingID = AudioDevice->PostEvent( pEvent, NULL, AK_EndOfEvent, &AkEventPreviewCallback, &m_PlayingAkEvents );
						
						if( CurrentPlayingID != AK_INVALID_PLAYING_ID )
						{
							FScopeLock Lock(&m_PlayingAkEventsCriticalSection);
							AkPlayingID& newPlayingID = m_PlayingAkEvents.FindOrAdd(pEvent->GetName());
							newPlayingID = CurrentPlayingID;
						}
					}
				}
				// Only target the first valid AkEvent
				break;
			}
		}
	}
}

void FAssetTypeActions_AkAudioEvent::PlayEvent(TArray<TWeakObjectPtr<UAkAudioEvent>> Objects)
{
	FAkAudioDevice * AudioDevice = FAkAudioDevice::Get();
	if ( AudioDevice )
	{
		for (auto ObjIt = Objects.CreateConstIterator(); ObjIt; ++ObjIt)
		{
			UAkAudioEvent * pEvent = (UAkAudioEvent *)(*ObjIt).Get();
			if ( pEvent )
			{
				AkPlayingID* foundID;
				{
					FScopeLock Lock(&m_PlayingAkEventsCriticalSection);
					foundID = m_PlayingAkEvents.Find(pEvent->GetName());
				}
				if( foundID != NULL )
				{
					AudioDevice->StopPlayingID( *foundID );
				}
				else
				{
					AkPlayingID CurrentPlayingID = AudioDevice->PostEvent( pEvent, NULL, AK_EndOfEvent, &AkEventPreviewCallback, &m_PlayingAkEvents );

					if( CurrentPlayingID != AK_INVALID_PLAYING_ID )
					{
						FScopeLock Lock(&m_PlayingAkEventsCriticalSection);
						AkPlayingID& newPlayingID = m_PlayingAkEvents.FindOrAdd(pEvent->GetName());
						newPlayingID = CurrentPlayingID;
					}
				}
			}
		}
	}
}

void FAssetTypeActions_AkAudioEvent::StopEvent(TArray<TWeakObjectPtr<UAkAudioEvent>> Objects)
{
	
	FAkAudioDevice * AudioDevice = FAkAudioDevice::Get();
	if ( AudioDevice )
	{
		AudioDevice->StopGameObject( NULL );
	}
}

#undef LOCTEXT_NAMESPACE
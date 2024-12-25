// Copyright (c) 2006-2012 Audiokinetic Inc. / All Rights Reserved

/*=============================================================================
	AkAudioClasses.cpp:
=============================================================================*/

#include "AkAudioDevice.h"
#include "AkAudioClasses.h"
#include "Net/UnrealNetwork.h"
#include "EngineUtils.h"
#include "Model.h"
#include "UObject/UObjectIterator.h"
#include "Engine/GameEngine.h"
#include "Misc/ScopeLock.h"


bool UAkGameplayStatics::m_bSoundEngineRecording = false;
float UAkGameplayStatics::OcclusionScalingFactor = 1.0f;

/*-----------------------------------------------------------------------------
	UAkGameplayStatics.
-----------------------------------------------------------------------------*/

UAkGameplayStatics::UAkGameplayStatics(const class FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	// Property initialization
}

class UAkComponent * UAkGameplayStatics::GetAkComponent( class USceneComponent* AttachToComponent, FName AttachPointName, FVector Location, EAttachLocation::Type LocationType )
{
	if ( AttachToComponent == NULL )
	{
		UE_LOG(LogScript, Warning, TEXT("UAkGameplayStatics::GetAkComponent: NULL AttachToComponent specified!"));
		return NULL;
	}

	FAkAudioDevice * AkAudioDevice = FAkAudioDevice::Get();
	if( AkAudioDevice )
	{
		return AkAudioDevice->GetAkComponent( AttachToComponent, AttachPointName, &Location, LocationType );
	}

	return NULL;
}

bool UAkGameplayStatics::IsEditor()
{
#if WITH_EDITOR
	return true;
#else
	return false;
#endif
}

bool UAkGameplayStatics::IsGame(UObject* WorldContextObject)
{
	EWorldType::Type WorldType = EWorldType::None;
	if (WorldContextObject)
	{
#if UE_4_17_OR_LATER
		UWorld* World = GEngine->GetWorldFromContextObject(WorldContextObject, EGetWorldErrorMode::ReturnNull);
#else
		UWorld* World = GEngine->GetWorldFromContextObject(WorldContextObject);
#endif
		if(World)
			WorldType = World->WorldType;
	}

	return WorldType == EWorldType::Game || WorldType == EWorldType::GamePreview || WorldType == EWorldType::PIE;
}

struct AkDeviceAndWorld
{
	FAkAudioDevice* AkAudioDevice;
	UWorld* CurrentWorld;

	AkDeviceAndWorld(AActor* in_pActor) :
		AkAudioDevice(FAkAudioDevice::Get()),
		CurrentWorld(in_pActor ? in_pActor->GetWorld() : nullptr)
	{}

	AkDeviceAndWorld(UObject* in_pWorldContextObject) :
		AkAudioDevice(FAkAudioDevice::Get()),
#if UE_4_17_OR_LATER
		CurrentWorld(GEngine->GetWorldFromContextObject(in_pWorldContextObject, EGetWorldErrorMode::ReturnNull))
#else
		CurrentWorld(GEngine->GetWorldFromContextObject(in_pWorldContextObject))
#endif // UE_4_17_OR_LATER
	{}

	bool IsValid() const { return (CurrentWorld && CurrentWorld->AllowAudioPlayback() && AkAudioDevice); }
};

int32 UAkGameplayStatics::PostEventAttached(class UAkAudioEvent* in_pAkEvent, class AActor* in_pActor, FName in_attachPointName, bool in_stopWhenAttachedToDestroyed, FString EventName)
{
	if (in_pAkEvent == NULL && EventName.IsEmpty())
	{
		UE_LOG(LogScript, Warning, TEXT("UAkGameplayStatics::PostEventAttached: No Event specified!"));
		return AK_INVALID_PLAYING_ID;
	}

	if ( in_pActor == NULL )
	{
		UE_LOG(LogScript, Warning, TEXT("UAkGameplayStatics::PostEventAttached: NULL Actor specified!"));
		return AK_INVALID_PLAYING_ID;
	}

	AkDeviceAndWorld DeviceAndWorld(in_pActor);
	if (DeviceAndWorld.IsValid())
	{
		return DeviceAndWorld.AkAudioDevice->PostEvent(GET_AK_EVENT_NAME(in_pAkEvent, EventName), in_pActor, 0, NULL, NULL, in_stopWhenAttachedToDestroyed);
	}

	return AK_INVALID_PLAYING_ID;
}

int32 UAkGameplayStatics::PostEvent(class UAkAudioEvent* in_pAkEvent, class AActor* in_pActor, bool in_stopWhenAttachedToDestroyed, FString EventName)
{
	if (in_pAkEvent == NULL && EventName.IsEmpty())
	{
		UE_LOG(LogScript, Warning, TEXT("UAkGameplayStatics::PostEvent: No Event specified!"));
		return AK_INVALID_PLAYING_ID;
	}

	if ( in_pActor == NULL )
	{
		UE_LOG(LogScript, Warning, TEXT("UAkGameplayStatics::PostEvent: NULL Actor specified!"));
		return AK_INVALID_PLAYING_ID;
	}

	AkDeviceAndWorld DeviceAndWorld(in_pActor);
	if (DeviceAndWorld.IsValid())
	{
		return DeviceAndWorld.AkAudioDevice->PostEvent(GET_AK_EVENT_NAME(in_pAkEvent, EventName), in_pActor, 0, NULL, NULL, in_stopWhenAttachedToDestroyed);
	}

	return AK_INVALID_PLAYING_ID;
}

void UAkGameplayStatics::PostEventByName(const FString& EventName, class AActor* in_pActor, bool in_stopWhenAttachedToDestroyed)
{
	PostEvent(NULL, in_pActor, in_stopWhenAttachedToDestroyed, EventName);
}

int32 UAkGameplayStatics::PostEventAtLocation(class UAkAudioEvent* in_pAkEvent, FVector Location, FRotator Orientation, const FString& EventName, UObject* WorldContextObject)
{
	if ( in_pAkEvent == NULL && EventName.IsEmpty() )
	{
		UE_LOG(LogScript, Warning, TEXT("UAkGameplayStatics::PostEventAtLocation: No Event specified!"));
		return AK_INVALID_PLAYING_ID;
	}

	AkDeviceAndWorld DeviceAndWorld(WorldContextObject);
	if (DeviceAndWorld.IsValid())
	{
		return DeviceAndWorld.AkAudioDevice->PostEventAtLocation(GET_AK_EVENT_NAME(in_pAkEvent, EventName), Location, Orientation, DeviceAndWorld.CurrentWorld);
	}

	return AK_INVALID_PLAYING_ID;
}

void UAkGameplayStatics::PostEventAtLocationByName(const FString& EventName, FVector Location, FRotator Orientation, UObject* WorldContextObject)
{
	PostEventAtLocation(NULL, Location, Orientation, EventName, WorldContextObject);
}

UAkComponent* UAkGameplayStatics::SpawnAkComponentAtLocation(UObject* WorldContextObject, class UAkAudioEvent* AkEvent, class UAkAuxBus* EarlyReflectionsBus, FVector Location, FRotator Orientation, bool AutoPost, const FString& EventName, const FString& EarlyReflectionsBusName, bool AutoDestroy /* = true*/)
{
	AkDeviceAndWorld DeviceAndWorld(WorldContextObject);
	if (DeviceAndWorld.IsValid())
	{
		return DeviceAndWorld.AkAudioDevice->SpawnAkComponentAtLocation(AkEvent, EarlyReflectionsBus, Location, Orientation, AutoPost, EventName, EarlyReflectionsBusName, AutoDestroy, DeviceAndWorld.CurrentWorld);
	}

	return nullptr;
}

void UAkGameplayStatics::SetRTPCValue( FName RTPC, float Value, int32 InterpolationTimeMs = 0, class AActor* Actor = NULL )
{
	FAkAudioDevice * AudioDevice = FAkAudioDevice::Get();
	if( AudioDevice && RTPC.IsValid() )
	{
		AudioDevice->SetRTPCValue( *RTPC.ToString(), Value, InterpolationTimeMs, Actor );
	}
}

void UAkGameplayStatics::SetState( FName stateGroup, FName state )
{
	FAkAudioDevice * AudioDevice = FAkAudioDevice::Get();
	if( AudioDevice && stateGroup.IsValid() && state.IsValid() )
	{
		AudioDevice->SetState( *stateGroup.ToString() , *state.ToString() );
	}
}

void UAkGameplayStatics::PostTrigger( FName Trigger, class AActor* Actor )
{
	if ( Actor == NULL )
	{
		UE_LOG(LogScript, Warning, TEXT("UAkGameplayStatics::PostTrigger: NULL Actor specified!"));
		return;
	}

	FAkAudioDevice * AudioDevice = FAkAudioDevice::Get();
	if( AudioDevice && Trigger.IsValid() )
	{
		AudioDevice->PostTrigger( *Trigger.ToString(), Actor );
	}
}

void UAkGameplayStatics::SetSwitch( FName SwitchGroup, FName SwitchState, class AActor* Actor )
{
	if ( Actor == NULL )
	{
		UE_LOG(LogScript, Warning, TEXT("UAkGameplayStatics::SetSwitch: NULL Actor specified!"));
		return;
	}

	FAkAudioDevice * AudioDevice = FAkAudioDevice::Get();
	if( AudioDevice && SwitchGroup.IsValid() && SwitchState.IsValid() )
	{
		AudioDevice->SetSwitch( *SwitchGroup.ToString(), *SwitchState.ToString(), Actor );
	}
}

void UAkGameplayStatics::UseReverbVolumes(bool inUseReverbVolumes, class AActor* Actor )
{
	if ( Actor == NULL )
	{
		UE_LOG(LogScript, Warning, TEXT("UAkGameplayStatics::UseReverbVolumes: NULL Actor specified!"));
		return;
	}

	FAkAudioDevice * AudioDevice = FAkAudioDevice::Get();
	if( AudioDevice )
	{
		UAkComponent * ComponentToSet = AudioDevice->GetAkComponent(Actor->GetRootComponent(), FName(), NULL, EAttachLocation::KeepRelativeOffset);
		if( ComponentToSet != NULL )
		{
			ComponentToSet->UseReverbVolumes(inUseReverbVolumes);
		}
	}
}

void UAkGameplayStatics::UseEarlyReflections(class AActor* Actor,
	class UAkAuxBus* AuxBus,
	bool Left,
	bool Right,
	bool Floor,
	bool Ceiling,
	bool Back,
	bool Front,
	bool SpotReflectors,
	const FString& AuxBusName) 
{
	if (Actor == NULL) 
	{
		UE_LOG(LogScript, Warning, TEXT("UAkGameplayStatics::UseEarlyReflections: NULL Actor specified!"));
		return;
	}

	FAkAudioDevice * AudioDevice = FAkAudioDevice::Get(); 
	if (AudioDevice)
	{
		UAkComponent * ComponentToSet = AudioDevice->GetAkComponent(Actor->GetRootComponent(), FName(), NULL, EAttachLocation::KeepRelativeOffset);
		if (ComponentToSet != NULL)
		{
			ComponentToSet->UseEarlyReflections(AuxBus, Left, Right, Floor, Ceiling, Back, Front, SpotReflectors, AuxBusName);
		}
	}
}

void UAkGameplayStatics::SetOutputBusVolume(float BusVolume, class AActor* Actor)
{
	if (Actor == NULL)
	{
		UE_LOG(LogScript, Warning, TEXT("UAkGameplayStatics::SetOutputBusVolume: NULL Actor specified!"));
		return;
	}

	FAkAudioDevice * AudioDevice = FAkAudioDevice::Get();
	if (AudioDevice)
	{
		UAkComponent * ComponentToSet = AudioDevice->GetAkComponent(Actor->GetRootComponent(), FName(), NULL, EAttachLocation::KeepRelativeOffset);
		if (ComponentToSet != NULL)
		{
			ComponentToSet->SetOutputBusVolume(BusVolume);
		}
	}
}

void UAkGameplayStatics::GetChannelConfig(AkChannelConfiguration ChannelConfiguration, AkChannelConfig& config)
{
	switch (ChannelConfiguration)
	{
	case AkChannelConfiguration::Ak_1_0:
		config.SetStandard(AK_SPEAKER_SETUP_MONO);
		break;
	case AkChannelConfiguration::Ak_2_0:
		config.SetStandard(AK_SPEAKER_SETUP_STEREO);
		break;
	case AkChannelConfiguration::Ak_3_0:
		config.SetStandard(AK_SPEAKER_SETUP_3STEREO);
		break;
	case AkChannelConfiguration::Ak_4_0:
		config.SetStandard(AK_SPEAKER_SETUP_4);
		break;
	case AkChannelConfiguration::Ak_5_1:
		config.SetStandard(AK_SPEAKER_SETUP_5POINT1);
		break;
	case AkChannelConfiguration::Ak_7_1:
		config.SetStandard(AK_SPEAKER_SETUP_7POINT1);
		break;
	case AkChannelConfiguration::Ak_5_1_2:
		config.SetStandard(AK_SPEAKER_SETUP_DOLBY_5_1_2);
		break;
	case AkChannelConfiguration::Ak_7_1_2:
		config.SetStandard(AK_SPEAKER_SETUP_DOLBY_7_1_2);
		break;
	case AkChannelConfiguration::Ak_7_1_4:
		config.SetStandard(AK_SPEAKER_SETUP_DOLBY_7_1_4);
		break;
	case AkChannelConfiguration::Ak_Auro_9_1:
		config.SetStandard(AK_SPEAKER_SETUP_AURO_9POINT1);
		break;
	case AkChannelConfiguration::Ak_Auro_10_1:
		config.SetStandard(AK_SPEAKER_SETUP_AURO_10POINT1);
		break;
	case AkChannelConfiguration::Ak_Auro_11_1:
		config.SetStandard(AK_SPEAKER_SETUP_AURO_11POINT1);
		break;
	case AkChannelConfiguration::Ak_Auro_13_1:
		config.SetStandard(AK_SPEAKER_SETUP_AURO_13POINT1_751);
		break;
	case AkChannelConfiguration::Ak_Ambisonics_1st_order:
		config.SetAmbisonic(4);
		break;
	case AkChannelConfiguration::Ak_Ambisonics_2nd_order:
		config.SetAmbisonic(9);
		break;
	case AkChannelConfiguration::Ak_Ambisonics_3rd_order:
		config.SetAmbisonic(16);
		break;
	case AkChannelConfiguration::Ak_Parent:
	default:
		config.Clear();
		break;
	}
}

void UAkGameplayStatics::SetBusConfig(const FString& in_BusName, AkChannelConfiguration ChannelConfiguration)
{
	FAkAudioDevice * AudioDevice = FAkAudioDevice::Get();
	if (AudioDevice)
	{
		AkChannelConfig config;
		GetChannelConfig(ChannelConfiguration, config);
		AudioDevice->SetBusConfig(in_BusName, config);
	}
}

void UAkGameplayStatics::SetPanningRule(PanningRule PanRule)
{
	FAkAudioDevice * AudioDevice = FAkAudioDevice::Get();
	if (AudioDevice)
	{
		AkPanningRule AkPanRule = (PanRule == PanningRule::PanningRule_Headphones) ? AkPanningRule_Headphones : AkPanningRule_Speakers;
		AudioDevice->SetPanningRule(AkPanRule);
	}
}

void UAkGameplayStatics::SetOcclusionRefreshInterval(float RefreshInterval, class AActor* Actor )
{
	if ( Actor == NULL )
	{
		UE_LOG(LogScript, Warning, TEXT("UAkGameplayStatics::SetOcclusionRefreshInterval: NULL Actor specified!"));
		return;
	}

	FAkAudioDevice * AudioDevice = FAkAudioDevice::Get();
	if( AudioDevice )
	{
		UAkComponent * ComponentToSet = AudioDevice->GetAkComponent(Actor->GetRootComponent(), FName(), NULL, EAttachLocation::KeepRelativeOffset);
		if( ComponentToSet != NULL )
		{
			ComponentToSet->OcclusionRefreshInterval = RefreshInterval;
		}
	}
}

void UAkGameplayStatics::StopActor(class AActor* Actor)
{
	if ( Actor == NULL )
	{
		UE_LOG(LogScript, Warning, TEXT("UAkGameplayStatics::StopActor: NULL Actor specified!"));
		return;
	}

	FAkAudioDevice * AudioDevice = FAkAudioDevice::Get();
	if( AudioDevice )
	{
		AudioDevice->StopGameObject(AudioDevice->GetAkComponent(Actor->GetRootComponent(), FName(), NULL, EAttachLocation::KeepRelativeOffset));
	}
}

void UAkGameplayStatics::StopAll()
{
	FAkAudioDevice * AudioDevice = FAkAudioDevice::Get();
	if( AudioDevice )
	{
		AudioDevice->StopAllSounds();
	}
}

void UAkGameplayStatics::StartAllAmbientSounds(UObject* WorldContextObject)
{
	AkDeviceAndWorld DeviceAndWorld(WorldContextObject);
	if (DeviceAndWorld.IsValid())
	{
		for (FActorIterator It(DeviceAndWorld.CurrentWorld);It;++It)
		{
			AAkAmbientSound* pAmbientSound = Cast<AAkAmbientSound>(*It);
			if (pAmbientSound != NULL)
			{
				UAkComponent* pComponent = pAmbientSound->AkComponent;
				if (pComponent && GWorld->Scene == pComponent->GetScene())
				{
					pAmbientSound->StartPlaying();
				}
			}
		}
	}
}

void UAkGameplayStatics::StopAllAmbientSounds(UObject* WorldContextObject)
{
	AkDeviceAndWorld DeviceAndWorld(WorldContextObject);
	if (DeviceAndWorld.IsValid())
	{
		for (FActorIterator It(DeviceAndWorld.CurrentWorld);It;++It)
		{
			AAkAmbientSound* pAmbientSound = Cast<AAkAmbientSound>(*It);
			if (pAmbientSound != NULL)
			{
				UAkComponent* pComponent = pAmbientSound->AkComponent;
				if (pComponent && GWorld->Scene == pComponent->GetScene())
				{
					pAmbientSound->StopPlaying();
				}
			}
		}
	}
}

void UAkGameplayStatics::ClearBanks()
{
	FAkAudioDevice * AudioDevice = FAkAudioDevice::Get();
	if( AudioDevice )
	{
		AudioDevice->ClearBanks();
	}
}

void UAkGameplayStatics::LoadBank(UAkAudioBank * bank, const FString& BankName)
{
	if ( bank )
	{
		bank->Load();
	}
	else
	{
		LoadBankByName(BankName);
	}
}

void UAkGameplayStatics::LoadBankByName(const FString& BankName)
{
	
	FAkAudioDevice * AudioDevice = FAkAudioDevice::Get();
	if( AudioDevice )
	{
		if(AudioDevice->GetAkBankManager() != NULL )
		{
			for ( TObjectIterator<UAkAudioBank> Iter; Iter; ++Iter )
			{
				if( Iter->GetName() == BankName )
				{
					Iter->Load();
					return;
				}
			}

			// Bank not found in the assets, load it by name anyway
		}

		AkUInt32 bankID;
		AudioDevice->LoadBank(BankName, AK_DEFAULT_POOL_ID, bankID);
	}
}

void UAkGameplayStatics::LoadBanks(const TArray<UAkAudioBank *>& SoundBanks, bool SynchronizeSoundBanks)
{
	if( SynchronizeSoundBanks )
	{
		TSet<UAkAudioBank*> BanksToUnload;
		TSet<UAkAudioBank*> BanksToLoad;
		TSet<UAkAudioBank*> InputBankSet(SoundBanks);
		FAkAudioDevice * AkAudioDevice = FAkAudioDevice::Get();
		if( AkAudioDevice )
		{
			FAkBankManager* BankManager = AkAudioDevice->GetAkBankManager();
			if( BankManager )
			{
				FScopeLock Lock(&BankManager->m_BankManagerCriticalSection);
				const TSet<UAkAudioBank *>* LoadedBanks = BankManager->GetLoadedBankList();

				// We load what's in the input set, but not in the already loaded set
				BanksToLoad = InputBankSet.Difference(*LoadedBanks);

				// We unload what's in the loaded set but not in the input set
				BanksToUnload = LoadedBanks->Difference(InputBankSet);
			}
			else
			{
				UE_LOG(LogScript, Warning, TEXT("UAkGameplayStatics::LoadBanks: Bank Manager unused, and CleanUpBanks set to true!"));
			}
		}
		for(TSet<UAkAudioBank*>::TConstIterator LoadIter(BanksToLoad); LoadIter; ++LoadIter)
		{
			if( *LoadIter != NULL )
			{
				(*LoadIter)->Load();
			}
		}

		for(TSet<UAkAudioBank*>::TConstIterator UnloadIter(BanksToUnload); UnloadIter; ++UnloadIter)
		{
			if( *UnloadIter != NULL )
			{
				(*UnloadIter)->Unload();
			}
		}
	}
	else
	{
		for(TArray<UAkAudioBank*>::TConstIterator LoadIter(SoundBanks); LoadIter; ++LoadIter)
		{
			if( *LoadIter != NULL )
			{
				(*LoadIter)->Load();
			}
		}
	}


}

void UAkGameplayStatics::LoadInitBank()
{
	FAkAudioDevice * AudioDevice = FAkAudioDevice::Get();
	if( AudioDevice )
	{
		AudioDevice->LoadInitBank();
	}
}


void UAkGameplayStatics::UnloadBank(class UAkAudioBank * bank, const FString& BankName)
{
	if ( bank )
	{
		bank->Unload();
	}
	else
	{
		UnloadBankByName(BankName);
	}
}

void UAkGameplayStatics::UnloadBankByName(const FString& BankName)
{
	FAkAudioDevice * AudioDevice = FAkAudioDevice::Get();
	if( AudioDevice )
	{
		if(AudioDevice->GetAkBankManager() != NULL )
		{
			for ( TObjectIterator<UAkAudioBank> Iter; Iter; ++Iter )
			{
				if( Iter->GetName() == BankName )
				{
					Iter->Unload();
					return;
				}
			}

			// Bank not found in the assets, unload it by name anyway
		}

		AudioDevice->UnloadBank(BankName);
	}
}

void UAkGameplayStatics::StartOutputCapture(const FString& Filename)
{
	FAkAudioDevice * AudioDevice = FAkAudioDevice::Get();
	if( AudioDevice )
	{
		FString name = Filename;
		if( !name.EndsWith(".wav") )
		{
			name += ".wav";
		}
		AudioDevice->StartOutputCapture(name);
	} 
}

void UAkGameplayStatics::AddOutputCaptureMarker(const FString& MarkerText)
{
	FAkAudioDevice * AudioDevice = FAkAudioDevice::Get();
	if( AudioDevice )
	{
		AudioDevice->AddOutputCaptureMarker(MarkerText);
	} 
}

void UAkGameplayStatics::StopOutputCapture()
{
	FAkAudioDevice * AudioDevice = FAkAudioDevice::Get();
	if( AudioDevice )
	{
		AudioDevice->StopOutputCapture();
	}
}

void UAkGameplayStatics::StartProfilerCapture(const FString& Filename)
{
	FAkAudioDevice * AudioDevice = FAkAudioDevice::Get();
	if( AudioDevice )
	{
		FString name = Filename;
		if( !name.EndsWith(".prof") )
		{
			name += ".prof";
		}
		AudioDevice->StartProfilerCapture(name);
	} 
}

void UAkGameplayStatics::StopProfilerCapture()
{
	FAkAudioDevice * AudioDevice = FAkAudioDevice::Get();
	if( AudioDevice )
	{
		AudioDevice->StopProfilerCapture();
	}
}

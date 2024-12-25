// Copyright (c) 2006-2012 Audiokinetic Inc. / All Rights Reserved

/*=============================================================================
	AkComponent.cpp:
=============================================================================*/

#include "AkAudioDevice.h"
#include "AkInclude.h"
#include "AkAudioClasses.h"
#include "Net/UnrealNetwork.h"
#include "Engine/Texture2D.h"
#include "Components/BillboardComponent.h"
#include "GameFramework/PlayerController.h"
#include "Engine/World.h"
#include "DrawDebugHelpers.h"
#include "AkComponentCallbackManager.h"

/*------------------------------------------------------------------------------------
	UAkComponent
------------------------------------------------------------------------------------*/

const static ECollisionChannel COLLISION_CHANNEL = ECC_Pawn;
static FName NAME_SoundOcclusion = FName(TEXT("SoundOcclusion"));
static bool bUseNewObstructionOcclusionFeature = false;

UAkComponent::UAkComponent(const class FObjectInitializer& ObjectInitializer) :
Super(ObjectInitializer)
{
	// Property initialization

	EnableSpotReflectors = false;
	DrawFirstOrderReflections = false;
	DrawSecondOrderReflections = false;
	DrawHigherOrderReflections = false;
	EarlyReflectionOrder = 1;
	EarlyReflectionMaxPathLength = 100000.f;
	EarlyReflectionBusSendGain = 1.f;
	ReflectionFilter = -1;

 	StopWhenOwnerDestroyed = true;
	bUseReverbVolumes = true;
	OcclusionRefreshInterval = 0.2f;
	LastObstructionOcclusionRefresh = -1;

	PrimaryComponentTick.bCanEverTick = true;
	PrimaryComponentTick.TickGroup = TG_DuringPhysics;
	PrimaryComponentTick.bAllowTickOnDedicatedServer = false;
	bTickInEditor = true;

	bAutoActivate = true;
	bNeverNeedsRenderUpdate = true;
	bWantsOnUpdateTransform = true;

#if WITH_EDITORONLY_DATA
	bVisualizeComponent = true;
#endif

	AttenuationScalingFactor = 1.0f;
	bAutoDestroy = false;
	bStarted = false;
	bUseDefaultListeners = true;

	const UAkSettings* AkSettings = GetDefault<UAkSettings>();
	bUseNewObstructionOcclusionFeature = AkSettings && AkSettings->UseAlternateObstructionOcclusionFeature;
}

void UAkComponent::SetEarlyReflectionOrder(int NewEarlyReflectionOrder)
{
	if (NewEarlyReflectionOrder < 0 || NewEarlyReflectionOrder > 4)
	{
		UE_LOG(LogAkAudio, Error, TEXT("SetEarlyReflectionOrder: Invalid value. Value should be between 0 and 4."));
	}

	EarlyReflectionOrder = NewEarlyReflectionOrder; 
	auto AkAudioDevice = FAkAudioDevice::Get();
	if (AkAudioDevice)
	{
		AkAudioDevice->RegisterSpatialAudioEmitter(this);
	}
}

int32 UAkComponent::PostAssociatedAkEvent()
{
	return PostAkEvent(AkAudioEvent, EventName);
}

int32 UAkComponent::PostAkEvent( class UAkAudioEvent * AkEvent, const FString& in_EventName )
{
	return PostAkEventByName(GET_AK_EVENT_NAME(AkEvent, in_EventName));
}

int32 UAkComponent::PostAkEventByName(const FString& in_EventName)
{
	return PostAkEventByNameWithCallback(in_EventName);
}

bool UAkComponent::VerifyEventName(const FString& in_EventName) const
{
	const bool IsEventNameEmpty = in_EventName.IsEmpty();
	if (IsEventNameEmpty)
	{
		FString OwnerName = FString(TEXT(""));
		FString ObjectName = GetFName().ToString();

		const auto owner = GetOwner();
		if (owner)
			OwnerName = owner->GetName();

		UE_LOG(LogAkAudio, Warning, TEXT("[%s.%s] AkComponent: Attempted to post an empty AkEvent name."), *OwnerName, *ObjectName);
	}

	return !IsEventNameEmpty;
}

bool UAkComponent::AllowAudioPlayback() const
{
	UWorld* CurrentWorld = GetWorld();
	return (CurrentWorld && CurrentWorld->AllowAudioPlayback() && !IsBeingDestroyed());
}

AkPlayingID UAkComponent::PostAkEventByNameWithCallback(const FString& in_EventName, AkUInt32 in_uFlags /*= 0*/, AkCallbackFunc in_pfnUserCallback /*= NULL*/, void * in_pUserCookie /*= NULL*/)
{
	AkPlayingID playingID = AK_INVALID_PLAYING_ID;

	auto AudioDevice = FAkAudioDevice::Get();
	if (AudioDevice)
	{
		playingID = AudioDevice->PostEvent(in_EventName, this, in_uFlags, in_pfnUserCallback, in_pUserCookie);
		if (playingID != AK_INVALID_PLAYING_ID)
			bStarted = true;
	}

	return playingID;
}

AkRoomID UAkComponent::GetSpatialAudioRoom() const
{
	AkRoomID roomID;
	if (CurrentRoom)
		roomID = CurrentRoom->GetRoomID();
	return roomID;
}

void UAkComponent::Stop()
{
	if (FAkAudioDevice::Get() && IsRegisteredWithWwise)
	{
		AK::SoundEngine::StopAll(GetAkGameObjectID());
	}
}

void UAkComponent::SetRTPCValue(FString RTPC, float Value, int32 InterpolationTimeMs = 0)
{
	if (FAkAudioDevice::Get())
	{
		auto szRTPC = TCHAR_TO_AK(*RTPC);
		AK::SoundEngine::SetRTPCValue(szRTPC, Value, GetAkGameObjectID(), InterpolationTimeMs);
	}
}

void UAkComponent::PostTrigger(FString Trigger)
{
	if (FAkAudioDevice::Get())
	{
		auto szTrigger = TCHAR_TO_AK(*Trigger);
		AK::SoundEngine::PostTrigger(szTrigger, GetAkGameObjectID());
	}
}

void UAkComponent::SetSwitch(FString SwitchGroup, FString SwitchState)
{
	if (FAkAudioDevice::Get())
	{
		auto szSwitchGroup = TCHAR_TO_AK(*SwitchGroup);
		auto szSwitchState = TCHAR_TO_AK(*SwitchState);

		AK::SoundEngine::SetSwitch(szSwitchGroup, szSwitchState, GetAkGameObjectID());
	}
}

void UAkComponent::SetStopWhenOwnerDestroyed(bool bStopWhenOwnerDestroyed)
{
	StopWhenOwnerDestroyed = bStopWhenOwnerDestroyed;
}

void UAkComponent::SetListeners(const TArray<UAkComponent*>& NewListeners)
{
	auto AudioDevice = FAkAudioDevice::Get();
	if (AudioDevice)
	{
		bUseDefaultListeners = false;

		//We want to preserve the occlusion data for listeners that are already present.
		for (auto It = ListenerInfoMap.CreateIterator(); It; ++It)
		{
			if (!NewListeners.Contains(It.Key()))
				It.RemoveCurrent();
		}

		for (auto Listener : NewListeners)
		{
			ListenerInfoMap.FindOrAdd(Listener);
			Listener->Emitters.Add(this);
		}

		TArray<UAkComponent*> Listeners;
		ListenerInfoMap.GetKeys(Listeners);
		AudioDevice->SetListeners(this, Listeners);
	}
}

void UAkComponent::UseReverbVolumes(bool inUseReverbVolumes)
{
	bUseReverbVolumes = inUseReverbVolumes;
}

void UAkComponent::UseEarlyReflections(
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
	EarlyReflectionAuxBus = AuxBus;
	EarlyReflectionAuxBusName = AuxBusName;

	EnableSpotReflectors = SpotReflectors;
	
	auto AkAudioDevice = FAkAudioDevice::Get();
	if (AkAudioDevice)
	{
		if (EarlyReflectionAuxBus || !EarlyReflectionAuxBusName.IsEmpty())
			AkAudioDevice->RegisterSpatialAudioEmitter(this);
		else
			AkAudioDevice->UnregisterSpatialAudioEmitter(this);
	}
}

float UAkComponent::GetAttenuationRadius() const
{
	return AkAudioEvent ? AttenuationScalingFactor * AkAudioEvent->MaxAttenuationRadius : 0.f;
}

void UAkComponent::SetOutputBusVolume(float BusVolume)
{
	FAkAudioDevice * AudioDevice = FAkAudioDevice::Get();
	if (AudioDevice)
	{
		for (auto It = ListenerInfoMap.CreateIterator(); It; ++It)
		{
			AudioDevice->SetGameObjectOutputBusVolume(this, It->Key, BusVolume);
		}
	}
}

void UAkComponent::OnRegister()
{
	const UWorld* CurrentWorld = GetWorld();
	if(!IsRegisteredWithWwise && CurrentWorld && CurrentWorld->WorldType != EWorldType::Inactive && CurrentWorld->WorldType != EWorldType::None)
		RegisterGameObject(); // Done before parent so that OnUpdateTransform follows registration and updates position correctly.

	if (CurrentWorld && OcclusionRefreshInterval > 0.0f)
	{
		// Added to distribute the occlusion/obstruction computations
		LastObstructionOcclusionRefresh = CurrentWorld->GetTimeSeconds() + FMath::RandRange(0.0f, OcclusionRefreshInterval);
	}

	Super::OnRegister();

#if WITH_EDITORONLY_DATA
	UpdateSpriteTexture();
#endif
}

#if WITH_EDITORONLY_DATA
void UAkComponent::UpdateSpriteTexture()
{
	if (SpriteComponent)
	{
		SpriteComponent->SetSprite(LoadObject<UTexture2D>(NULL, TEXT("/Wwise/S_AkComponent.S_AkComponent")));
	}
}
#endif


void UAkComponent::OnUnregister()
{
	// Route OnUnregister event.
	Super::OnUnregister();

	// Don't stop audio and clean up component if owner has been destroyed (default behaviour). This function gets
	// called from AActor::ClearComponents when an actor gets destroyed which is not usually what we want for one-
	// shot sounds.
	AActor* Owner = GetOwner();
	UWorld* CurrentWorld = GetWorld();
	if( !Owner || !CurrentWorld || StopWhenOwnerDestroyed || CurrentWorld->bIsTearingDown || (Owner->GetClass() == APlayerController::StaticClass() && CurrentWorld->WorldType == EWorldType::PIE))
	{
		Stop();
	}
}

void UAkComponent::FinishDestroy( void )
{
	UnregisterGameObject();

	Super::FinishDestroy();
}

void UAkComponent::OnComponentDestroyed( bool bDestroyingHierarchy )
{
	Super::OnComponentDestroyed(bDestroyingHierarchy);

	UnregisterGameObject();
}

void UAkComponent::ShutdownAfterError( void )
{
	UnregisterGameObject();

	Super::ShutdownAfterError();
}

void UAkComponent::ApplyAkReverbVolumeList(float DeltaTime)
{
	if(CurrentLateReverbComponents.Num() > 0 )
	{
		// Fade control
		for( int32 Idx = 0; Idx < CurrentLateReverbComponents.Num(); Idx++ )
		{
			if(CurrentLateReverbComponents[Idx].CurrentControlValue != CurrentLateReverbComponents[Idx].TargetControlValue || CurrentLateReverbComponents[Idx].bIsFadingOut )
			{
				float Increment = ComputeFadeIncrement(DeltaTime, CurrentLateReverbComponents[Idx].FadeRate, CurrentLateReverbComponents[Idx].TargetControlValue);
				if(CurrentLateReverbComponents[Idx].bIsFadingOut )
				{
					CurrentLateReverbComponents[Idx].CurrentControlValue -= Increment;
					if(CurrentLateReverbComponents[Idx].CurrentControlValue <= 0.f )
					{
						CurrentLateReverbComponents.RemoveAt(Idx);
					}
				}
				else
				{
					CurrentLateReverbComponents[Idx].CurrentControlValue += Increment;
					if(CurrentLateReverbComponents[Idx].CurrentControlValue > CurrentLateReverbComponents[Idx].TargetControlValue )
					{
						CurrentLateReverbComponents[Idx].CurrentControlValue = CurrentLateReverbComponents[Idx].TargetControlValue;
					}
				}
			}
		}

		// Sort the list of active AkReverbVolumes by descending priority, if necessary
		if(CurrentLateReverbComponents.Num() > 1 )
		{
			CurrentLateReverbComponents.Sort([](const AkReverbFadeControl& A, const AkReverbFadeControl& B)
			{
				// Ensure the fading out buffers are sent to the end of the array.
				// Use room ID as a tie breaker for priority to ensure a deterministic order.
				return (A.bIsFadingOut == B.bIsFadingOut) ? (A.Priority > B.Priority) : (A.bIsFadingOut < B.bIsFadingOut);
			});
		}
	}

	TArray<AkAuxSendValue> AuxSendValues;
	AkAuxSendValue	TmpSendValue;
	AuxSendValues.Empty();

	// Build a list to set as AuxBusses
	FAkAudioDevice * AkAudioDevice = FAkAudioDevice::Get();
	if( AkAudioDevice )
	{
		for (int32 Idx = 0; Idx < CurrentLateReverbComponents.Num() && Idx < AkAudioDevice->GetMaxAuxBus(); Idx++)
		{
			AkAuxSendValue* FoundAuxSend = AuxSendValues.FindByPredicate([=](const AkAuxSendValue& ItemInArray) { return ItemInArray.auxBusID == CurrentLateReverbComponents[Idx].AuxBusId; });
			if (FoundAuxSend)
			{
				FoundAuxSend->fControlValue += CurrentLateReverbComponents[Idx].CurrentControlValue;
			}
			else
			{
				TmpSendValue.listenerID = AK_INVALID_GAME_OBJECT;
				TmpSendValue.auxBusID = CurrentLateReverbComponents[Idx].AuxBusId;
				TmpSendValue.fControlValue = CurrentLateReverbComponents[Idx].CurrentControlValue;
				AuxSendValues.Add(TmpSendValue);
			}
		}

		AkAudioDevice->SetAuxSends(GetAkGameObjectID(), AuxSendValues);
	}

}

void UAkComponent::TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction *ThisTickFunction)
{
	if ( AK::SoundEngine::IsInitialized() )
	{
		Super::TickComponent( DeltaTime, TickType, ThisTickFunction );

		// If we're a listener, update our position here instead of in OnUpdateTransform. 
		// This is because PlayerController->GetAudioListenerPosition caches its value, and it can be out of sync
		if (Cast<APlayerCameraManager>(GetOwner()))
			UpdateGameObjectPosition();


		FAkAudioDevice * AkAudioDevice = FAkAudioDevice::Get();
		if( AkAudioDevice )
		{
			// Update AkReverbVolume fade in/out
			if( bUseReverbVolumes && AkAudioDevice->GetMaxAuxBus() > 0 )
			{
				ApplyAkReverbVolumeList(DeltaTime);
			}
		}

		// Check Occlusion/Obstruction, if enabled
		if( OcclusionRefreshInterval > 0.f || ClearingOcclusionObstruction )
		{
			SetObstructionOcclusion(DeltaTime);
		}
		else
		{
			ClearOcclusionValues();
		}

		if( !HasActiveEvents() && bAutoDestroy && bStarted)
		{
			DestroyComponent();
		}

#if !UE_BUILD_SHIPPING
		if ( DrawFirstOrderReflections || DrawSecondOrderReflections || DrawHigherOrderReflections )
		{
			DebugDrawReflections();
		}
#endif
	}
}


void UAkComponent::Activate(bool bReset)
{
	Super::Activate( bReset );

	NumVirtualPos = 0;

	UpdateGameObjectPosition();

	// If spawned inside AkReverbVolume(s), we do not want the fade in effect to kick in.
	UpdateAkLateReverbComponentList(GetComponentLocation());
	for( int32 Idx = 0; Idx < CurrentLateReverbComponents.Num(); Idx++ )
	{
		CurrentLateReverbComponents[Idx].CurrentControlValue = CurrentLateReverbComponents[Idx].TargetControlValue;
	}

	FAkAudioDevice * AudioDevice = FAkAudioDevice::Get();
	if (AudioDevice)
	{
		AudioDevice->SetAttenuationScalingFactor(this, AttenuationScalingFactor);
	}
}

void UAkComponent::SetAttenuationScalingFactor(float Value)
{
	AttenuationScalingFactor = Value;
	FAkAudioDevice * AudioDevice = FAkAudioDevice::Get();
	if (AudioDevice)
	{
		AudioDevice->SetAttenuationScalingFactor(this, AttenuationScalingFactor);
	}
}


void UAkComponent::OnUpdateTransform(EUpdateTransformFlags UpdateTransformFlags, ETeleportType Teleport)
{
	Super::OnUpdateTransform(UpdateTransformFlags, Teleport);

	// If we're a listener, our position will be updated from Tick instead of here.
	// This is because PlayerController->GetAudioListenerPosition caches its value, and it can be out of sync
	if(!Cast<APlayerCameraManager>(GetOwner()))
		UpdateGameObjectPosition();
}

bool UAkComponent::HasActiveEvents() const
{
	auto CallbackManager = FAkComponentCallbackManager::GetInstance();
	return (CallbackManager != nullptr) && CallbackManager->HasActiveEvents(GetAkGameObjectID());
}

AkGameObjectID UAkComponent::GetAkGameObjectID() const
{
	return (AkGameObjectID)this;
}

void UAkComponent::GetAkGameObjectName(FString& Name) const
{
	AActor* parentActor = GetOwner();
	if (parentActor)
		Name = parentActor->GetFName().ToString() + ".";

	Name += GetFName().ToString();

	UWorld* CurrentWorld = GetWorld();
	switch (CurrentWorld->WorldType)
	{
	case  EWorldType::Editor:
		Name += "(Editor)";
		break;
	case  EWorldType::EditorPreview:
		Name += "(EditorPreview)";
		break;
	case  EWorldType::GamePreview:
		Name += "(GamePreview)";
		break;
	case  EWorldType::Inactive:
		Name += "(Inactive)";
		break;
	}
}

void UAkComponent::RegisterGameObject()
{
	FAkAudioDevice* AkAudioDevice = FAkAudioDevice::Get();
	if ( AkAudioDevice )
	{
		if ( bUseDefaultListeners )
		{
			auto& DefaultListeners = AkAudioDevice->GetDefaultListeners();
			ListenerInfoMap.Empty(DefaultListeners.Num());
			for (auto Listener : DefaultListeners)
			{
				ListenerInfoMap.Add(Listener);
				// NOTE: We do not add this to Listener's emitter list, the list is only for user specified (non-default) emitters.
			}
		}

		AkAudioDevice->RegisterComponent(this);
        IsRegisteredWithWwise = true;
	}
}

void UAkComponent::UnregisterGameObject()
{
	FAkAudioDevice* AkAudioDevice = FAkAudioDevice::Get();
    if (AkAudioDevice)
    {
        AkAudioDevice->UnregisterComponent(this);
        IsRegisteredWithWwise = false;
    }

	for (auto Listener : ListenerInfoMap)
		Listener.Key->Emitters.Remove(this);

	for (auto Emitter : Emitters)
		Emitter->ListenerInfoMap.Remove(this);
}

int32 UAkComponent::FindNewAkLateReverbComponentInCurrentlist(void* FadeControlUniqueId)
{
	return CurrentLateReverbComponents.IndexOfByPredicate([=](const AkReverbFadeControl& Candidate)
	{
		return FadeControlUniqueId == Candidate.FadeControlUniqueId;
	});
}

static int32 FindCurrentAkLateReverbComponentInNewlist(TArray<UAkLateReverbComponent*> FoundVolumes, uint32 AuxBusId)
{
	return FoundVolumes.IndexOfByPredicate([=](const UAkLateReverbComponent* const Candidate)
	{
		return AuxBusId == Candidate->GetAuxBusId();
	});
}

void UAkComponent::UpdateAkLateReverbComponentList( FVector Loc )
{
	FAkAudioDevice* AkAudioDevice = FAkAudioDevice::Get();
	if (!AkAudioDevice)
		return;

	TArray<UAkLateReverbComponent*> FoundComponents = AkAudioDevice->FindLateReverbComponentsAtLocation(Loc, GetWorld());

	// Add the new volumes to the current list
	for( int32 Idx = 0; Idx < FoundComponents.Num(); Idx++ )
	{
		AkAuxBusID	CurrentAuxBusId = FoundComponents[Idx]->GetAuxBusId();
		int32 FoundIdx = FindNewAkLateReverbComponentInCurrentlist((void*)FoundComponents[Idx]);
		if( FoundIdx == INDEX_NONE )
		{
			// The volume was not found, add it to the list
			CurrentLateReverbComponents.Add(AkReverbFadeControl(*FoundComponents[Idx]));
		}
		else
		{
			// The volume was found. We still have to check if it is currently fading out, in case we are
			// getting back in a volume we just exited.
			if(CurrentLateReverbComponents[FoundIdx].bIsFadingOut == true )
			{
				CurrentLateReverbComponents[FoundIdx].bIsFadingOut = false;
			}
		}
	}

	// Fade out the current volumes not found in the new list
	for( int32 Idx = 0; Idx < CurrentLateReverbComponents.Num(); Idx++ )
	{
		if(FindCurrentAkLateReverbComponentInNewlist(FoundComponents, CurrentLateReverbComponents[Idx].AuxBusId) == INDEX_NONE )
		{
			// Our current volume was not found in the array of volumes at the current position. Begin fading it out
			CurrentLateReverbComponents[Idx].bIsFadingOut = true;
		}
	}
}

const FTransform& UAkComponent::GetTransform() const
{
#if UE_4_17_OR_LATER
	return GetComponentTransform();
#else
	return ComponentToWorld;
#endif // UE_4_17_OR_LATER
}

FVector UAkComponent::GetPosition() const
{
	APlayerCameraManager* AsPlayerCameraManager = nullptr;
	if (nullptr != (AsPlayerCameraManager = Cast<APlayerCameraManager>(GetOwner())))
	{
		APlayerController* pPlayerController = AsPlayerCameraManager->GetOwningPlayerController();
		if (pPlayerController != nullptr)
		{
			FVector Location, Front, Right;
			pPlayerController->GetAudioListenerPosition(Location, Front, Right);
			return Location;
		}
	}

	return GetTransform().GetTranslation();
}

void UAkComponent::UpdateGameObjectPosition()
{
#ifdef _DEBUG
	CheckEmitterListenerConsistancy();
#endif
	FAkAudioDevice * AkAudioDevice = FAkAudioDevice::Get();
	if ( bIsActive && AkAudioDevice )
	{
		bool bUseComponentTransform = true;
		AkSoundPosition soundpos;
		APlayerCameraManager* AsPlayerCameraManager  = nullptr;
		if (nullptr != (AsPlayerCameraManager = Cast<APlayerCameraManager>(GetOwner())) )
		{
			APlayerController* pPlayerController = AsPlayerCameraManager->GetOwningPlayerController(); 
			if (pPlayerController != nullptr)
			{
				FVector Location, Front, Right;
				pPlayerController->GetAudioListenerPosition(Location, Front, Right);
				FVector Up = FVector::CrossProduct(Front, Right);
				FAkAudioDevice::FVectorsToAKTransform(Location, Front, Up, soundpos);
				bUseComponentTransform = false;
			}
		}

		if (bUseComponentTransform)
		{
			FAkAudioDevice::FVectorsToAKTransform(GetTransform().GetTranslation(), GetTransform().GetUnitAxis(EAxis::X), GetTransform().GetUnitAxis(EAxis::Z), soundpos);
		}

		if (AllowAudioPlayback())
		{
			UpdateSpatialAudioRoom(GetComponentLocation());
			AkAudioDevice->SetEmitterPosition(this, soundpos, VirtualPositions, NumVirtualPos);
		}

		// Find and apply all AkReverbVolumes at this location
		if( bUseReverbVolumes && AkAudioDevice->GetMaxAuxBus() > 0 )
		{
			UpdateAkLateReverbComponentList( GetComponentLocation() );
		}
	}
}

void UAkComponent::UpdateSpatialAudioRoom(FVector Location)
{
    if (IsRegisteredWithWwise)
    {
        FAkAudioDevice* AkAudioDevice = FAkAudioDevice::Get();
        if (AkAudioDevice)
        {
            TArray<UAkRoomComponent*> RoomComponents = AkAudioDevice->FindRoomComponentsAtLocation(Location, GetWorld(), 1);
            if (RoomComponents.Num() == 0 && AkAudioDevice->WorldHasActiveRooms(GetWorld()))
            {
                CurrentRoom = nullptr;
                AkAudioDevice->SetInSpatialAudioRoom(GetAkGameObjectID(), GetSpatialAudioRoom());
            }
            else if (RoomComponents.Num() > 0 && CurrentRoom != RoomComponents[0])
            {
                CurrentRoom = RoomComponents[0];
                AkAudioDevice->SetInSpatialAudioRoom(GetAkGameObjectID(), GetSpatialAudioRoom());
            }
        }
    }
}


UAkComponent::FAkListenerOcclusionObstruction::FAkListenerOcclusionObstruction(float in_TargetValue, float in_CurrentValue)
	: CurrentValue(in_CurrentValue)
	, TargetValue(in_TargetValue)
	, Rate(0.0f)
{}

void UAkComponent::FAkListenerOcclusionObstruction::SetTarget(float in_TargetValue)
{
	TargetValue = FMath::Clamp(in_TargetValue, 0.0f, 1.0f);

	const float UAkComponent_OCCLUSION_FADE_RATE = 2.0f; // from 0.0 to 1.0 in 0.5 seconds
	Rate = FMath::Sign(TargetValue - CurrentValue) * UAkComponent_OCCLUSION_FADE_RATE;
}

bool UAkComponent::FAkListenerOcclusionObstruction::Update(float DeltaTime)
{
	auto OldValue = CurrentValue;
	if (OldValue != TargetValue)
	{
		const auto NewValue = OldValue + Rate * DeltaTime;
		if (OldValue > TargetValue)
			CurrentValue = FMath::Clamp(NewValue, TargetValue, OldValue);
		else
			CurrentValue = FMath::Clamp(NewValue, OldValue, TargetValue);

		AKASSERT(CurrentValue >= 0.f && CurrentValue <= 1.f);
		return true;
	}

	return false;
}

bool UAkComponent::FAkListenerOcclusionObstruction::ReachedTarget()
{
	return CurrentValue == TargetValue;
}

bool UAkComponent::FAkListenerOcclusionObstructionPair::Update(float DeltaTime)
{
	bool bObsChanged = Obs.Update(DeltaTime);
	bool bOccChanged = Occ.Update(DeltaTime);
	return bObsChanged || bOccChanged;
}

bool UAkComponent::FAkListenerOcclusionObstructionPair::ReachedTarget()
{
	return Obs.ReachedTarget() && Occ.ReachedTarget();
}

void UAkComponent::SetObstructionOcclusion(const float DeltaTime)
{
	auto AudioDevice = FAkAudioDevice::Get();

	// Fade the active occlusions
	bool StillClearingObsOcc = false;
	for (auto& ListenerPack : ListenerInfoMap)
	{
		auto& Listener = ListenerPack.Key;
		auto& ObsOccPair = ListenerPack.Value;

		if (ObsOccPair.Update(DeltaTime) && AudioDevice)
		{
			AudioDevice->SetOcclusionObstruction(this, Listener, ObsOccPair.Obs.CurrentValue, ObsOccPair.Occ.CurrentValue);
		}

		if (ClearingOcclusionObstruction)
		{
			StillClearingObsOcc |= !ObsOccPair.ReachedTarget();
		}
	}

	if (ClearingOcclusionObstruction)
	{
		ClearingOcclusionObstruction = StillClearingObsOcc;
		return;
	}

	// Compute occlusion only when needed.
	// Have to have "LastObstructionOcclusionRefresh == -1" because GetWorld() might return nullptr in UAkComponent's constructor,
	// preventing us from initializing it to something smart.
	const UWorld* CurrentWorld = GetWorld();
	if (CurrentWorld)
	{
		float CurrentTime = CurrentWorld->GetTimeSeconds();
		if (CurrentTime < LastObstructionOcclusionRefresh && LastObstructionOcclusionRefresh - CurrentTime > OcclusionRefreshInterval)
		{
			// Occlusion refresh interval was made shorter since the last refresh, we need to re-distribute the next random calculation
			LastObstructionOcclusionRefresh = CurrentTime + FMath::RandRange(0.0f, OcclusionRefreshInterval);
		}

		if (LastObstructionOcclusionRefresh == -1 || (CurrentTime - LastObstructionOcclusionRefresh) >= OcclusionRefreshInterval)
			CalculateObstructionOcclusionValues(true);
	}
}

void UAkComponent::CalculateObstructionOcclusionValues(bool CalledFromTick)
{
	if(CalledFromTick)
		LastObstructionOcclusionRefresh = GetWorld()->GetTimeSeconds();

	if (bUseNewObstructionOcclusionFeature)
	{
		NumVirtualPos = 0;

		for (auto& ListenerPack : ListenerInfoMap)
		{
			UAkComponent* Listener = ListenerPack.Key;
			FAkListenerOcclusionObstruction& Occ = ListenerPack.Value.Occ;
			FAkListenerOcclusionObstruction& Obs = ListenerPack.Value.Obs;

			SetOcclusionForListener(Listener, ListenerPack.Value);

			if (!CalledFromTick)
			{
				Occ.CurrentValue = Occ.TargetValue;
				Obs.CurrentValue = Obs.TargetValue;

				FAkAudioDevice* AkAudioDevice = FAkAudioDevice::Get();
				if (AkAudioDevice)
				{
					AkAudioDevice->SetOcclusionObstruction(this, Listener, Obs.TargetValue, Occ.CurrentValue);
				}
			}
		}
	}
	else
	{
		for (auto& ListenerPack : ListenerInfoMap)
		{
			UAkComponent* Listener = ListenerPack.Key;
			auto& Occlusion = ListenerPack.Value.Occ;
			auto& Obstruction = ListenerPack.Value.Obs;

			FHitResult OutHit;
			FVector ListenerPosition = Listener->GetPosition();
			FVector SourcePosition = GetPosition();

			UWorld* CurrentWorld = GetWorld();
			APlayerController* PlayerController = CurrentWorld ? CurrentWorld->GetFirstPlayerController() : NULL;
			FCollisionQueryParams CollisionParams(NAME_SoundOcclusion, true, GetOwner());
			if (PlayerController != NULL)
			{
				CollisionParams.AddIgnoredActor(PlayerController->GetPawn());
			}

			bool bNowOccluded = GetWorld()->LineTraceSingleByChannel(OutHit, SourcePosition, ListenerPosition, OcclusionCollisionChannel, CollisionParams);
			
			if (bNowOccluded && CalculateObstructionBasedOnShoeboxes(SourcePosition, GetSpatialAudioRoom(), ListenerPosition, Listener->GetSpatialAudioRoom(), ListenerPack.Value))
			{
				// Obstructed.  Update virtual positions.
				UpdateGameObjectPosition();
			}
 			else 
			{
				if (bNowOccluded)
				{
					FBox BoundingBox;

					if (OutHit.Actor.IsValid())
					{
						BoundingBox = OutHit.Actor->GetComponentsBoundingBox();
					}
					else if (OutHit.Component.IsValid())
					{
						BoundingBox = OutHit.Component->Bounds.GetBox();
					}

					// Translate the impact point to the bounding box of the obstacle
					TArray<FVector> Points;
					Points.Add(FVector(OutHit.ImpactPoint.X, BoundingBox.Min.Y, BoundingBox.Min.Z));
					Points.Add(FVector(OutHit.ImpactPoint.X, BoundingBox.Min.Y, BoundingBox.Max.Z));
					Points.Add(FVector(OutHit.ImpactPoint.X, BoundingBox.Max.Y, BoundingBox.Min.Z));
					Points.Add(FVector(OutHit.ImpactPoint.X, BoundingBox.Max.Y, BoundingBox.Max.Z));

					Points.Add(FVector(BoundingBox.Min.X, OutHit.ImpactPoint.Y, BoundingBox.Min.Z));
					Points.Add(FVector(BoundingBox.Min.X, OutHit.ImpactPoint.Y, BoundingBox.Max.Z));
					Points.Add(FVector(BoundingBox.Max.X, OutHit.ImpactPoint.Y, BoundingBox.Min.Z));
					Points.Add(FVector(BoundingBox.Max.X, OutHit.ImpactPoint.Y, BoundingBox.Max.Z));

					Points.Add(FVector(BoundingBox.Min.X, BoundingBox.Min.Y, OutHit.ImpactPoint.Z));
					Points.Add(FVector(BoundingBox.Min.X, BoundingBox.Max.Y, OutHit.ImpactPoint.Z));
					Points.Add(FVector(BoundingBox.Max.X, BoundingBox.Min.Y, OutHit.ImpactPoint.Z));
					Points.Add(FVector(BoundingBox.Max.X, BoundingBox.Max.Y, OutHit.ImpactPoint.Z));

					// Compute the number of "second order paths" that are also obstructed. This will allow us to approximate
					// "how obstructed" the source is.
					int32 NumObstructedPaths = 0;
					for (int32 PointIdx = 0; PointIdx < Points.Num(); PointIdx++)
					{
						FHitResult TempHit;
						bool bListenerToObstacle = GetWorld()->LineTraceSingleByChannel(TempHit, ListenerPosition, Points[PointIdx], OcclusionCollisionChannel, CollisionParams);
						bool bSourceToObstacle = GetWorld()->LineTraceSingleByChannel(TempHit, SourcePosition, Points[PointIdx], OcclusionCollisionChannel, CollisionParams);
						if (bListenerToObstacle || bSourceToObstacle)
						{
							NumObstructedPaths++;
						}
					}

					// Modulate occlusion by blocked secondary paths. 
					float ratio = (float)NumObstructedPaths / Points.Num();
					
					FAkAudioDevice* AkAudioDevice = FAkAudioDevice::Get();
					if (AkAudioDevice && AkAudioDevice->UsingSpatialAudioRooms(GetWorld()))
					{
						Occlusion.SetTarget(0.0f);
						Obstruction.SetTarget(ratio);
					}
					else
					{
						Occlusion.SetTarget(ratio);
						Obstruction.SetTarget(0.0f);
					}

#define AK_DEBUG_OCCLUSION 0
#if AK_DEBUG_OCCLUSION
					// Draw bounding box and "second order paths"
					//UE_LOG(LogAkAudio, Log, TEXT("Target Occlusion level: %f"), ListenerOcclusionInfo[ListenerIdx].TargetValue);
					::FlushPersistentDebugLines(GetWorld());
					::FlushDebugStrings(GetWorld());
					::DrawDebugBox(GetWorld(), BoundingBox.GetCenter(), BoundingBox.GetExtent(), FColor::White, false, 4);
					::DrawDebugPoint(GetWorld(), ListenerPosition, 10.0f, FColor(0, 255, 0), false, 4);
					::DrawDebugPoint(GetWorld(), SourcePosition, 10.0f, FColor(0, 255, 0), false, 4);
					::DrawDebugPoint(GetWorld(), OutHit.ImpactPoint, 10.0f, FColor(0, 255, 0), false, 4);

					for (int32 i = 0; i < Points.Num(); i++)
					{
						::DrawDebugPoint(GetWorld(), Points[i], 10.0f, FColor(255, 255, 0), false, 4);
						::DrawDebugString(GetWorld(), Points[i], FString::Printf(TEXT("%d"), i), nullptr, FColor::White, 4);
						::DrawDebugLine(GetWorld(), Points[i], ListenerPosition, FColor::Cyan, false, 4);
						::DrawDebugLine(GetWorld(), Points[i], SourcePosition, FColor::Cyan, false, 4);
					}
					FColor LineColor = FColor::MakeRedToGreenColorFromScalar(1.0f - Occlusion.TargetValue);
					::DrawDebugLine(GetWorld(), ListenerPosition, SourcePosition, LineColor, false, 4);
#endif // AK_DEBUG_OCCLUSION
				}
				else
				{
					Obstruction.SetTarget(0.0f);
					Occlusion.SetTarget(0.0f);
				}

				// Clear the virtual positions, if they were previously set.
				if (NumVirtualPos > 0)
				{
					NumVirtualPos = 0;
					UpdateGameObjectPosition();
				}
			}

			if (!CalledFromTick)
			{
				Occlusion.CurrentValue = Occlusion.TargetValue;
				FAkAudioDevice* AkAudioDevice = FAkAudioDevice::Get();
				if (AkAudioDevice)
				{
					AkAudioDevice->SetOcclusionObstruction(this, Listener, Obstruction.CurrentValue, Occlusion.CurrentValue);
				}
			}
		}
	}
}

#define AK_DEBUG_OCCLUSION_PRINT 0
#if AK_DEBUG_OCCLUSION_PRINT
static int framecounter = 0;
#endif

void UAkComponent::SetOcclusionForListener(const UAkComponent* in_Listener, FAkListenerOcclusionObstructionPair& OccObs)
{
	FAkListenerOcclusionObstruction& Occ = OccObs.Occ;
	FAkListenerOcclusionObstruction& Obs = OccObs.Obs;

	FVector ListenerPosition;
	FAkAudioDevice * AkAudioDevice = FAkAudioDevice::Get();
	AKASSERT(AkAudioDevice);
	if (AkAudioDevice)
	{
		ListenerPosition = in_Listener->GetPosition();
	}

	FVector SourcePosition = GetComponentLocation();

	UWorld* CurrentWorld = GetWorld();
	APlayerController* PlayerController = CurrentWorld ? CurrentWorld->GetFirstPlayerController() : NULL;
	FCollisionQueryParams CollisionParams(NAME_SoundOcclusion, true, GetOwner());
	if (PlayerController != NULL)
	{
		CollisionParams.AddIgnoredActor(PlayerController->GetPawn());
	}

	FHitResult OutHit;
	TArray<struct FHitResult> OutHits;

	Occ.TargetValue = 0.0f;
	Obs.TargetValue = 0.0f;
	NumVirtualPos = 0;

	bool bObstructed = LineTrace(SourcePosition, ListenerPosition, OutHit, CollisionParams);

	if (bObstructed && CalculateObstructionBasedOnShoeboxes(SourcePosition, GetSpatialAudioRoom(), ListenerPosition, in_Listener->GetSpatialAudioRoom(), OccObs))
	{
		UpdateGameObjectPosition();
		
		// Bail out!
		return;
	}

	TArray<FVector> deviationPath;

#define AK_DEBUG_OCCLUSION 0
#if AK_DEBUG_OCCLUSION
	TArray<FVector> TracePoints;
	TracePoints.Add(SourcePosition);

	::FlushPersistentDebugLines(GetWorld());
	::FlushDebugStrings(GetWorld());

	::DrawDebugPoint(GetWorld(), ListenerPosition, 10.0f, FColor(0, 255, 0), false, 4);
	::DrawDebugPoint(GetWorld(), SourcePosition, 10.0f, FColor(0, 255, 0), false, 4);
#endif


	FVector prevOrigin = SourcePosition;
	FVector nextPoint;
	FVector pointTo;
	bool rayIntersecWithBox = false;
	FBox boundingBox;

	float cumulAngle = 0.f;
	float angle = 0.f;

#if AK_DEBUG_OCCLUSION_PRINT
	char msg[256];
	framecounter++;
	if (framecounter % 5 == 0)
	{
		sprintf(msg, "-----------------------------------------------------------------------------------------\n");
		AKPLATFORM::OutputDebugMsg(msg);

		sprintf(msg, "origin = [%f, %f, %f];\n", SourcePosition.X, SourcePosition.Y, SourcePosition.Z);
		AKPLATFORM::OutputDebugMsg(msg);

		sprintf(msg, "destination = [%f, %f, %f];\n", ListenerPosition.X, ListenerPosition.Y, ListenerPosition.Z);
		AKPLATFORM::OutputDebugMsg(msg);

		sprintf(msg, "v = [origin; pointOrigin0];\n");  //sprintf(msg, "v = [point%i; point%i];\n", i - 1, i);
		AKPLATFORM::OutputDebugMsg(msg);
	}
#endif

	bool bDestinationWhitinLastBoundingBox = false;

	deviationPath.Add(SourcePosition);

	int cpt = 0;
	while (bObstructed && !bDestinationWhitinLastBoundingBox && cpt < 20)
	{
		/*char msg[256];
		char msg2[256];
		FString::Printf("%s", OutHit.Actor.Get()->GetFName().ToString(), msg2);
		sprintf(msg, "pointOrigin%i = [%s];\n", cpt, msg2);
		AKPLATFORM::OutputDebugMsg(msg);*/
		FString objectName;
		if (OutHit.Actor != nullptr)
		{
			objectName = OutHit.Actor.Get()->GetFName().ToString();
		}
		//UE_LOG(LogScript, Log, TEXT("Occlusion debug: %i, %s"), cpt, *objectName);

		/*if (cpt > 10) // for debugging
		{
		wchar_t msg[256];
		swprintf(msg, L"pointOrigin%i = [%ls];\n", cpt, *objectName);
		AKPLATFORM::OutputDebugMsg(msg);
		}*/

		cpt++;
		//ActorIt =
		//for (TArray<struct FHitResult>::TConstIterator ActorIt = HitResults.CreateConstIterator(); ActorIt; ++ActorIt)
		{
			//if (!OutHit->bBlockingHit)
			//
			//break;

			if (OutHit.Actor.IsValid())
			{
				boundingBox = OutHit.Actor->GetComponentsBoundingBox();
				CollisionParams.AddIgnoredActor(OutHit.GetActor());
			}
			else if (OutHit.Component.IsValid())
			{
				boundingBox = OutHit.Component->Bounds.GetBox();
				CollisionParams.AddIgnoredComponent(OutHit.GetComponent());
			}
			else
			{
				AKASSERT(0);
			}

			rayIntersecWithBox = FindPathAroundObstacle(prevOrigin, ListenerPosition, boundingBox, pointTo, nextPoint, bDestinationWhitinLastBoundingBox);

#if AK_DEBUG_OCCLUSION
			::DrawDebugBox(GetWorld(), boundingBox.GetCenter(), boundingBox.GetExtent(), FColor::White, false, 4);
			::DrawDebugSphere(GetWorld(), OutHit.ImpactPoint, 10.0f, 50, FColor::White, false, 4);

			//TracePoints.Add(OutHit.ImpactPoint); // TracePoints.Add(nextPoint);

			TracePoints.Add(pointTo);
			TracePoints.Add(nextPoint);
#endif

#if AK_DEBUG_OCCLUSION_PRINT

			if (framecounter % 5 == 0)
			{
				sprintf(msg, "pointOrigin%i = [%f, %f, %f];\n", i, prevOrigin.X, prevOrigin.Y, prevOrigin.Z);
				AKPLATFORM::OutputDebugMsg(msg);
				sprintf(msg, "pointTo%i = [%f, %f, %f];\n", i, pointTo.X, pointTo.Y, pointTo.Z);
				AKPLATFORM::OutputDebugMsg(msg);
				sprintf(msg, "point%i = [%f, %f, %f];\n", i, nextPoint.X, nextPoint.Y, nextPoint.Z);
				AKPLATFORM::OutputDebugMsg(msg);

				sprintf(msg, "v = [pointOrigin%i; pointTo%i];\n", i, i);  //sprintf(msg, "v = [point%i; point%i];\n", i - 1, i);
				AKPLATFORM::OutputDebugMsg(msg);
				sprintf(msg, "plot3(v(:, 1), v(:, 2), v(:, 3), 'g');\n");
				AKPLATFORM::OutputDebugMsg(msg);

				sprintf(msg, "v = [pointTo%i; point%i];\n", i, i);  //sprintf(msg, "v = [point%i; point%i];\n", i - 1, i);
				AKPLATFORM::OutputDebugMsg(msg);
				sprintf(msg, "plot3(v(:, 1), v(:, 2), v(:, 3), 'g');\n");
				AKPLATFORM::OutputDebugMsg(msg);

				sprintf(msg, "BBmin%i = [%f, %f, %f];\n", i, boundingBox.Min.X, boundingBox.Min.Y, boundingBox.Min.Z);
				AKPLATFORM::OutputDebugMsg(msg);
				sprintf(msg, "BBmax%i = [%f, %f, %f];\n", i, boundingBox.Max.X, boundingBox.Max.Y, boundingBox.Max.Z);
				AKPLATFORM::OutputDebugMsg(msg);

				sprintf(msg, "min = BBmin%i;\n", i);
				AKPLATFORM::OutputDebugMsg(msg);
				sprintf(msg, "max = BBmax%i;\n", i);
				AKPLATFORM::OutputDebugMsg(msg);

				sprintf(msg, "my_vertices = [min(1) min(2) min(3); min(1) max(2) min(3); max(1) max(2) min(3); max(1) min(2) min(3); min(1) min(2) max(3); min(1) max(2) max(3); max(1) max(2) max(3); max(1) min(2) max(3)];\n");
				AKPLATFORM::OutputDebugMsg(msg);
				sprintf(msg, "my_faces = [1 2 3 4; 2 6 7 3; 4 3 7 8; 1 5 8 4; 1 2 6 5; 5 6 7 8];\n");
				AKPLATFORM::OutputDebugMsg(msg);
				sprintf(msg, "patch('Vertices', my_vertices, 'Faces', my_faces, 'FaceColor', 'c');\n");
				AKPLATFORM::OutputDebugMsg(msg);
			}
#endif

			// For each obstacle, find the best path from last position around next obstacle,
			// possibly, due to change of directions, some actor will not intersec anymore, we simply skip those.
			if (rayIntersecWithBox)
			{
				if (pointTo != nextPoint)
				{
					deviationPath.Add(pointTo);
					deviationPath.Add(nextPoint);
				}
				else
				{
					deviationPath.Add(nextPoint);
				}
			}
			// Optimise, end midway when no good paths are found
		}

		bObstructed = LineTrace(nextPoint, ListenerPosition, OutHit, CollisionParams);
		//i++;
	}

	deviationPath.Add(ListenerPosition);

	cumulAngle = 0.f;
	for (int32 i = 0; i < deviationPath.Num() - 2; i++)
	{
		FVector v1 = deviationPath[i + 1] - deviationPath[i];
		FVector v2 = deviationPath[i + 2] - deviationPath[i];

		v1.Normalize();
		v2.Normalize();

		cumulAngle += FMath::Acos(FVector::DotProduct(v1, v2));
	}

	if (cumulAngle == 0.f)
	{
		NumVirtualPos = 0;
		Occ.SetTarget(0.0f);
		Obs.SetTarget(0.0f);
	}
	else if (cumulAngle >= PI)
	{
		NumVirtualPos = 0;
		Occ.SetTarget(1.0f);
		Obs.SetTarget(0.0f);
	}
	else
	{
		AKASSERT(deviationPath.Num() > 2);
		FVector originalPath = SourcePosition - ListenerPosition;
		float len = originalPath.Size();
		FVector newPath = deviationPath[deviationPath.Num() - 2] - ListenerPosition;
		newPath.Normalize();
		newPath = newPath * len;
		FVector virtualPosition = ListenerPosition + newPath;

		//FVector orientation = ListenerPosition - virtualPosition;
		//orientation.Normalize();

		FAkAudioDevice::FVectorsToAKTransform(virtualPosition, GetTransform().GetUnitAxis(EAxis::X), GetTransform().GetUnitAxis(EAxis::Z), VirtualPositions[0]);
		NumVirtualPos = 1;

#if AK_DEBUG_OCCLUSION
		::DrawDebugSphere(GetWorld(), virtualPosition, 10.0f, 50, FColor::Cyan, false, 4);
#endif

		Occ.SetTarget(0.0f);
		Obs.SetTarget(cumulAngle / PI);
	}

	UpdateGameObjectPosition();

#if AK_DEBUG_OCCLUSION
	TracePoints.Add(ListenerPosition);

	// Draw bounding box and "second order paths"
	//UE_LOG(LogAkAudio, Log, TEXT("Target Occlusion level: %f"), Occ.TargetValue);

	//::DrawDebugPoint(GetWorld(), OutHit.ImpactPoint, 10.0f, FColor(0, 255, 0), false, 4);

	for (int32 i = 0; i < TracePoints.Num() - 1; i++)
	{
		::DrawDebugLine(GetWorld(), TracePoints[i], TracePoints[i + 1], FColor::Cyan, false, 1.f, 0.f, 4.f);
		/*if (i % 2 == 0)
		::DrawDebugLine(GetWorld(), TracePoints[i], TracePoints[i + 1], FColor::Blue, false, 4);
		else
		::DrawDebugLine(GetWorld(), TracePoints[i], TracePoints[i + 1], FColor::Yellow, false, 4);*/
	}

	//FColor LineColor = FColor::MakeRedToGreenColorFromScalar(1.0f - Occ.TargetValue);
	//::DrawDebugLine(GetWorld(), ListenerPosition, SourcePosition, LineColor, false, 4);
#endif // AK_DEBUG_OCCLUSION

#if AK_DEBUG_OCCLUSION_PRINT
	if (framecounter % 5 == 0)
	{
		sprintf(msg, "v = [point%i; destination];\n", i - 1);  //sprintf(msg, "v = [point%i; point%i];\n", i - 1, i);
		AKPLATFORM::OutputDebugMsg(msg);
		sprintf(msg, "plot3(v(:, 1), v(:, 2), v(:, 3), 'g');\n");
		AKPLATFORM::OutputDebugMsg(msg);
		sprintf(msg, "--------------------------------------------------\n");
		AKPLATFORM::OutputDebugMsg(msg);
	}
#endif

}

bool UAkComponent::CalculateObstructionBasedOnShoeboxes(const FVector& SourcePosition, AkRoomID SourceRoom, const FVector& ListenerPosition, AkRoomID ListenerRoom, FAkListenerOcclusionObstructionPair& OccObs)
{
	const AkVector akSourcePos = FAkAudioDevice::FVectorToAKVector(SourcePosition);
	const AkVector akListenerPos = FAkAudioDevice::FVectorToAKVector(ListenerPosition);

	float fOccl, fObs;
	NumVirtualPos = kMaxVirtualPos;
	bool bObsructed = AK::SpatialAudio::CalcOcclusionAndVirtualPositions(
		akSourcePos,
		SourceRoom,
		akListenerPos,
		ListenerRoom,
		fOccl,
		fObs,
		VirtualPositions,
		(AkUInt32&)NumVirtualPos
	);

	if (bObsructed)
	{
		OccObs.Occ.SetTarget(fOccl);
		OccObs.Obs.SetTarget(fObs);
	}

	return bObsructed;
}

bool UAkComponent::FindPathAroundObstacle(FVector in_origin, FVector in_destination, FBox in_boundingBox, FVector& out_toPoint, FVector& out_newPoint, bool& out_bDestinationWhitinLastBoundingBox)
{
	TArray<FVector> pointsTo;
	TArray<FVector> pointsAwayFrom;

	bool result = IntersecBoundingBox(in_boundingBox, in_origin, in_destination, pointsTo, pointsAwayFrom);

	if (result)
	{
		if (pointsTo.Num() == 1)
		{
			out_toPoint = pointsTo[0];
			out_newPoint = pointsTo[0];

		}
		else if (pointsAwayFrom.Num() == 0)
		{
			bool res = FindBestCornerPath(in_origin, in_destination, pointsTo, out_newPoint);
			out_bDestinationWhitinLastBoundingBox = true;

			out_toPoint = out_newPoint;

		}
		else
		{
			//FVector bestTo;
			bool res = FindBestPath(in_origin, in_destination, pointsTo, pointsAwayFrom, out_toPoint, out_newPoint);

			if (!res)
			{
				//out_angle = PI;
				return false;
			}

		}
	}
	return result;
}

bool UAkComponent::FindBestCornerPath(FVector in_origin, FVector in_destination, TArray<FVector>& in_pointsTo, FVector& out_bestTo)
{
	AKASSERT(in_pointsTo.Num() >= 3);

	FVector segment1;
	FVector segment2;
	float len;
	float bestlen = 1000000.f;
	int32 bestI = -1;

	bool bObstructed = true;
	do
	{
		bestlen = 1000000.f;
		for (int32 i = 0; i < in_pointsTo.Num(); i++)
		{
			segment1 = in_origin - in_pointsTo[i];
			segment2 = in_pointsTo[i] - in_destination;

			len = segment1.Size() + segment2.Size();

			if (len < bestlen)
			{
				bestlen = len;
				bestI = i;
			}
		}

		FHitResult OutHit;
		//bObstructed = GetWorld()->LineTraceSingle(OutHit, in_pointsTo[bestI], in_destination, OcclusionCollisionChannel, FCollisionQueryParams(NAME_SoundOcclusion, true, ActorToIgnore));
		bObstructed = false;  // keep best for now

		if (bObstructed)
		{
			in_pointsTo.RemoveAt(bestI);
		}
		else
		{
			out_bestTo = in_pointsTo[bestI];
		}

	} while (bObstructed && in_pointsTo.Num() > 0);

	return !bObstructed;
}

bool UAkComponent::FindBestPath(FVector in_origin, FVector in_destination, TArray<FVector>& in_pointsTo, TArray<FVector>& in_pointsAwayFrom, FVector& out_bestTo, FVector& out_bestAwayFrom)
{
	//AKASSERT(in_pointsTo.Num() >= 3);
	//AKASSERT(in_pointsAwayFrom.Num() >= 3);
	AKASSERT(in_pointsTo.Num() == in_pointsAwayFrom.Num());

	UWorld* CurrentWorld = GetWorld();
	APlayerController* PlayerController = CurrentWorld ? CurrentWorld->GetFirstPlayerController() : NULL;
	FCollisionQueryParams CollisionParams(NAME_SoundOcclusion, true, GetOwner());
	if (PlayerController != NULL)
	{
		CollisionParams.AddIgnoredActor(PlayerController->GetPawn());
	}

	FVector segment1;
	FVector segment2;
	float len;
	float bestlen = 1000000.f;
	int32 bestI = 0;

	bool bObstructed = true;
	do
	{
		bestlen = 1000000.f;
		for (int32 i = 0; i < in_pointsTo.Num(); i++)
		{
			segment1 = in_origin - in_pointsTo[i];
			segment2 = in_pointsAwayFrom[i] - in_destination;

			len = segment1.Size() + segment2.Size();

			if (len < bestlen)
			{
				bestlen = len;
				bestI = i;
			}
		}

		FHitResult OutHit;

		bObstructed = LineTrace(in_pointsTo[bestI], in_pointsAwayFrom[bestI], OutHit, CollisionParams);

		if (bObstructed)
		{
			in_pointsTo.RemoveAt(bestI);
			in_pointsAwayFrom.RemoveAt(bestI);
		}
		else
		{
			out_bestTo = in_pointsTo[bestI];
			out_bestAwayFrom = in_pointsAwayFrom[bestI];
		}

	} while (bObstructed && in_pointsTo.Num() > 0);

	return !bObstructed;
}

bool UAkComponent::IntersecBoundingBox(FBox in_boundingBox, FVector in_origin, FVector in_destination, TArray<FVector>& out_pointsTo, TArray<FVector>& out_pointsAwayFrom)
{
	//double tmin = -INFINITY, tmax = INFINITY;

	FVector ray = in_destination - in_origin;
	FVector one_over_ray = FVector(1.f / ray.X,
		1.f / ray.Y,
		1.f / ray.Z);

	bool direction_ray[3] = { one_over_ray.X < 0.f,
		one_over_ray.Y < 0.f,
		one_over_ray.Z < 0.f };

	EFaces faceToBB = (!direction_ray[0] ? MINX : MAXX);
	EFaces faceOutOfBB = (direction_ray[0] ? MINX : MAXX);

	float tmin, tmax, tymin, tymax, tzmin, tzmax;

	tmin = ((!direction_ray[0] ? in_boundingBox.Min.X : in_boundingBox.Max.X) - in_origin.X) * one_over_ray.X;
	tmax = ((direction_ray[0] ? in_boundingBox.Min.X : in_boundingBox.Max.X) - in_origin.X) * one_over_ray.X;

	tymin = ((!direction_ray[1] ? in_boundingBox.Min.Y : in_boundingBox.Max.Y) - in_origin.Y) * one_over_ray.Y;
	tymax = ((direction_ray[1] ? in_boundingBox.Min.Y : in_boundingBox.Max.Y) - in_origin.Y) * one_over_ray.Y;

	tzmin = ((!direction_ray[2] ? in_boundingBox.Min.Z : in_boundingBox.Max.Z) - in_origin.Z) * one_over_ray.Z;
	tzmax = ((direction_ray[2] ? in_boundingBox.Min.Z : in_boundingBox.Max.Z) - in_origin.Z) * one_over_ray.Z;

	// default case, min / max are on X axis

	if ((tmin > tymax) || (tymin > tmax))
		return false;

	//  min is on Y axis
	if (tymin > tmin)
	{
		faceToBB = (!direction_ray[1] ? MINY : MAXY);
		tmin = tymin;
	}

	//  max is on Y axis
	if (tymax < tmax)
	{
		faceOutOfBB = (direction_ray[1] ? MINY : MAXY);
		tmax = tymax;
	}

	if ((tmin > tzmax) || (tzmin > tmax))
		return false;

	//  min is on Z axis
	if (tzmin > tmin)
	{
		faceToBB = (!direction_ray[1] ? MINZ : MAXZ);
		tmin = tzmin;
	}

	//  max is on Z axis
	if (tzmax < tmax)
	{
		faceOutOfBB = (direction_ray[1] ? MINZ : MAXZ);
		tmax = tzmax;
	}

	FVector hitpointTo = in_origin + tmin * ray;
	FVector hitpointFrom = in_origin + tmax * ray;
	FVector facenormal;

	// TODO, what to do when a point is inside the box!?

	if (tmax >= 1.f) // Destination is inside bounding box
	{
		// there's a path going around obstacle using one vertex, let's find it
		FaceToVertices(faceToBB, in_boundingBox, hitpointTo, out_pointsTo);
	}
	else if (faceToBB / 2 != faceOutOfBB / 2)
	{
		// there's a path going around obstacle using one vertex, let's find it
		FVector Point;
		FaceToVertex(faceToBB, faceOutOfBB, in_boundingBox, hitpointTo, Point);

		out_pointsTo.Add(Point);
		out_pointsAwayFrom.Add(Point);
	}
	else
	{
		FaceToVertices(faceToBB, in_boundingBox, hitpointTo, out_pointsTo);
		FBox expandedBox = in_boundingBox.ExpandBy(1.1f);
		FaceToVertices(faceOutOfBB, expandedBox, hitpointFrom, out_pointsAwayFrom);
	}

	return true;
}

void UAkComponent::FaceToVertices(EFaces in_face, FBox in_boundingBox, FVector in_hitpoint, TArray<FVector>& out_Points)
{
	// Removed path going through the floor, collisions aren't properly detected.
	switch (in_face) {
	case MINX:
		out_Points.Add(FVector(in_boundingBox.Min.X, in_boundingBox.Min.Y, in_hitpoint.Z));
		out_Points.Add(FVector(in_boundingBox.Min.X, in_boundingBox.Max.Y, in_hitpoint.Z));
		//out_Points.Add(FVector(in_boundingBox.Min.X, in_hitpoint.Y, in_boundingBox.Min.Z));
		out_Points.Add(FVector(in_boundingBox.Min.X, in_hitpoint.Y, in_boundingBox.Max.Z));
		break;

	case MAXX:
		out_Points.Add(FVector(in_boundingBox.Max.X, in_boundingBox.Min.Y, in_hitpoint.Z));
		out_Points.Add(FVector(in_boundingBox.Max.X, in_boundingBox.Max.Y, in_hitpoint.Z));
		//out_Points.Add(FVector(in_boundingBox.Max.X, in_hitpoint.Y, in_boundingBox.Min.Z));
		out_Points.Add(FVector(in_boundingBox.Max.X, in_hitpoint.Y, in_boundingBox.Max.Z));
		break;

	case MINY:
		out_Points.Add(FVector(in_boundingBox.Min.X, in_boundingBox.Min.Y, in_hitpoint.Z));
		out_Points.Add(FVector(in_boundingBox.Max.X, in_boundingBox.Min.Y, in_hitpoint.Z));
		//out_Points.Add(FVector(in_hitpoint.X, in_boundingBox.Min.Y, in_boundingBox.Min.Z));
		out_Points.Add(FVector(in_hitpoint.X, in_boundingBox.Min.Y, in_boundingBox.Max.Z));
		break;

	case MAXY:
		out_Points.Add(FVector(in_boundingBox.Min.X, in_boundingBox.Max.Y, in_hitpoint.Z));
		out_Points.Add(FVector(in_boundingBox.Max.X, in_boundingBox.Max.Y, in_hitpoint.Z));
		//out_Points.Add(FVector(in_hitpoint.X, in_boundingBox.Max.Y, in_boundingBox.Min.Z));
		out_Points.Add(FVector(in_hitpoint.X, in_boundingBox.Max.Y, in_boundingBox.Max.Z));
		break;

	case MINZ:
		out_Points.Add(FVector(in_boundingBox.Min.X, in_hitpoint.Y, in_boundingBox.Min.Z));
		out_Points.Add(FVector(in_boundingBox.Max.X, in_hitpoint.Y, in_boundingBox.Min.Z));
		out_Points.Add(FVector(in_hitpoint.X, in_boundingBox.Min.Y, in_boundingBox.Min.Z));
		out_Points.Add(FVector(in_hitpoint.X, in_boundingBox.Max.Y, in_boundingBox.Min.Z));
		break;

	case MAXZ:
		out_Points.Add(FVector(in_boundingBox.Min.X, in_hitpoint.Y, in_boundingBox.Max.Z));
		out_Points.Add(FVector(in_boundingBox.Max.X, in_hitpoint.Y, in_boundingBox.Max.Z));
		out_Points.Add(FVector(in_hitpoint.X, in_boundingBox.Min.Y, in_boundingBox.Max.Z));
		out_Points.Add(FVector(in_hitpoint.X, in_boundingBox.Max.Y, in_boundingBox.Max.Z));
		break;
	default:
		AKASSERT(0);
	};
}

void UAkComponent::FaceToVertex(EFaces in_faceA, EFaces in_faceB, const FBox& in_boundingBox, const FVector& in_hitpoint, FVector& out_Point)
{
	out_Point = FVector(in_hitpoint.X, in_hitpoint.Y, in_hitpoint.Z);

	AKASSERT(in_faceA / 2 != in_faceB / 2);

	FaceToVertexHelper(in_faceA, in_boundingBox, out_Point);
	FaceToVertexHelper(in_faceB, in_boundingBox, out_Point);
}

void UAkComponent::FaceToVertexHelper(EFaces in_face, const FBox& in_boundingBox, FVector& out_Point)
{
	switch (in_face)
	{
	case MINX:
		out_Point.X = in_boundingBox.Min.X;
		break;
	case MAXX:
		out_Point.X = in_boundingBox.Max.X;
		break;

	case MINY:
		out_Point.Y = in_boundingBox.Min.Y;
		break;
	case MAXY:
		out_Point.Y = in_boundingBox.Max.Y;
		break;

	case MINZ:
		out_Point.Z = in_boundingBox.Min.Z;
		break;
	case MAXZ:
		out_Point.Z = in_boundingBox.Max.Z;
		break;

	default:
		AKASSERT(0);
	};
}

bool UAkComponent::LineTrace(const FVector& in_From, const FVector& in_To, FHitResult& out_Hit, const FCollisionQueryParams& collisionQueryParam)
{
	const UWorld* CurrentWorld = GetWorld();
	return CurrentWorld && CurrentWorld->LineTraceSingleByChannel(out_Hit, in_From, in_To, OcclusionCollisionChannel, collisionQueryParam);
}

void UAkComponent::ClearOcclusionValues()
{
	ClearingOcclusionObstruction = false;

	for (auto& ListenerPack : ListenerInfoMap)
	{
		FAkListenerOcclusionObstructionPair& Pair = ListenerPack.Value;
		Pair.Occ.SetTarget(0.0f);
		Pair.Obs.SetTarget(0.0f);
		ClearingOcclusionObstruction |= !Pair.ReachedTarget();
	}
}

const TSet<UAkComponent*>& UAkComponent::GetEmitters()
{
	FAkAudioDevice* Device = FAkAudioDevice::Get();
	if (Device)
	{
		auto DefaultListeners = Device->GetDefaultListeners();
		if (DefaultListeners.Contains(this))
			return Device->GetDefaultEmitters();
		else
			return Emitters;
	}
	return Emitters;
}

void UAkComponent::CheckEmitterListenerConsistancy()
{
	for (auto Emitter : GetEmitters())
	{
		check(Emitter->ListenerInfoMap.Contains(this));
	}

	for (auto Listener : ListenerInfoMap)
	{
		check(Listener.Key->GetEmitters().Contains(this));
	}
}

#if WITH_EDITOR
void UAkComponent::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	FName PropertyName = (PropertyChangedEvent.Property != NULL) ? PropertyChangedEvent.Property->GetFName() : NAME_None;
	if (PropertyName == GET_MEMBER_NAME_CHECKED(UAkComponent, EarlyReflectionAuxBus) ||
		PropertyName == GET_MEMBER_NAME_CHECKED(UAkComponent, EarlyReflectionAuxBusName) ||
		PropertyName == GET_MEMBER_NAME_CHECKED(UAkComponent, EarlyReflectionBusSendGain) ||
		PropertyName == GET_MEMBER_NAME_CHECKED(UAkComponent, EarlyReflectionOrder) ||
		PropertyName == GET_MEMBER_NAME_CHECKED(UAkComponent, EnableSpotReflectors) ||
		PropertyName == GET_MEMBER_NAME_CHECKED(UAkComponent, ReflectionFilter) )
	{
		if (EarlyReflectionAuxBus || !EarlyReflectionAuxBusName.IsEmpty())
			FAkAudioDevice::Get()->RegisterSpatialAudioEmitter(this);
		else
			FAkAudioDevice::Get()->UnregisterSpatialAudioEmitter(this);
	}


	Super::PostEditChangeProperty(PropertyChangedEvent);
}
#endif

void UAkComponent::_DebugDrawReflections( const AkVector& akEmitterPos, const AkVector& akListenerPos, const AkSoundPathInfo* paths, AkUInt32 uNumPaths) const
{
	::FlushDebugStrings(GWorld);

	for (AkInt32 idxPath = uNumPaths-1; idxPath >= 0; --idxPath)
	{
		const AkSoundPathInfo& path = paths[idxPath];

		unsigned int order = path.numReflections;

		if ((DrawFirstOrderReflections && order == 1) ||
			(DrawSecondOrderReflections && order == 2) ||
			(DrawHigherOrderReflections && order > 2))
		{
			FColor colorLight;
			FColor colorMed;
			FColor colorDark;

			switch ((order - 1))
			{
			case 0:
				colorLight = FColor(0x9DEBF3);
				colorMed = FColor(0x318087);
				colorDark = FColor(0x186067);
				break;
			case 1:
				colorLight = FColor(0xFCDBA2);
				colorMed = FColor(0xDEAB4E);
				colorDark = FColor(0xA97B27);
				break;
			case 2:
			default:
				colorLight = FColor(0xFCB1A2);
				colorMed = FColor(0xDE674E);
				colorDark = FColor(0xA93E27);
				break;
			}

			FColor colorLightGrey(75, 75, 75);
			FColor colorMedGrey(50, 50, 50);
			FColor colorDarkGrey(35, 35, 35);

			const int kPathThickness = 5.f;
			const float kRadiusSphere = 25.f;
			const int kNumSphereSegments = 8;

			const FVector emitterPos = FAkAudioDevice::AKVectorToFVector(akEmitterPos);
			FVector listenerPt = FAkAudioDevice::AKVectorToFVector(akListenerPos);

			for (int idxSeg = path.numReflections-1; idxSeg >= 0; --idxSeg)
			{
				const FVector reflectionPt = FAkAudioDevice::AKVectorToFVector(path.reflectionPoint[idxSeg]);
				
				if (idxSeg != path.numReflections - 1)
				{
					// Note: Not drawing the first leg of the path from the listener.  Often hard to see because it is typically the camera position.
					::DrawDebugLine(GWorld, listenerPt, reflectionPt, path.isOccluded ? colorLightGrey : colorLight, false, -1.f, (uint8)'\000', kPathThickness / order);

					::DrawDebugSphere(GWorld, reflectionPt, (kRadiusSphere/2) / order, kNumSphereSegments, path.isOccluded ? colorLightGrey : colorLight);
				}
				else
				{
					::DrawDebugSphere(GWorld, reflectionPt, kRadiusSphere / order, kNumSphereSegments, path.isOccluded ? colorMedGrey : colorMed);
				}

				if (!path.isOccluded)
				{
					const FVector triPt0 = FAkAudioDevice::AKVectorToFVector(path.triangles[idxSeg].point0);
					const FVector triPt1 = FAkAudioDevice::AKVectorToFVector(path.triangles[idxSeg].point1);
					const FVector triPt2 = FAkAudioDevice::AKVectorToFVector(path.triangles[idxSeg].point2);

					::DrawDebugLine(GWorld, triPt0, triPt1, colorDark);
					::DrawDebugLine(GWorld, triPt1, triPt2, colorDark);
					::DrawDebugLine(GWorld, triPt2, triPt0, colorDark);
					::DrawDebugString(GWorld, reflectionPt, FString(path.triangles[idxSeg].strName));
				}
				
				// Draw image source point.  Not as useful as I had hoped.
				//const FVector imageSrc = FAkAudioDevice::AKVectorToFVector(path.imageSource);
				//::DrawDebugSphere(GWorld, imageSrc, kRadiusSphere/order, kNumSphereSegments, colorDark);

				listenerPt = reflectionPt;
			}

			if (!path.isOccluded)
			{
				// Finally the last path segment towards the emitter.
				::DrawDebugLine(GWorld, listenerPt, emitterPos, path.isOccluded ? colorLightGrey : colorLight, false, -1.f, (uint8)'\000', kPathThickness / order);
			}
			else
			{
				const FVector occlusionPt = FAkAudioDevice::AKVectorToFVector(path.occlusionPoint);
				::DrawDebugSphere(GWorld, occlusionPt, kRadiusSphere / order, kNumSphereSegments, colorDarkGrey);
			}
		}
	}
	
}

void UAkComponent::DebugDrawReflections() const
{
	const AkUInt32 kMaxPaths = 64;
	AkSoundPathInfo paths[kMaxPaths];
	AkUInt32 uNumPaths = kMaxPaths;
	
	AkVector listenerPos, emitterPos;

	if ( AK::SpatialAudio::QueryIndirectPaths(GetAkGameObjectID(), listenerPos, emitterPos, paths, uNumPaths) == AK_Success)
	{
		if (uNumPaths > 0)
			_DebugDrawReflections(emitterPos, listenerPos, paths, uNumPaths);
	}
}

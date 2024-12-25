// Fill out your copyright notice in the Description page of Project Settings.

#include "AkAudioDevice.h"
#include "AkAudioClasses.h"
#include "Engine/Texture2D.h"
#include "Components/BillboardComponent.h"

#include <AK/SpatialAudio/Common/AkSpatialAudio.h>
#include <AK/Plugin/AkReflectGameData.h>

// Sets default values
AAkSpotReflector::AAkSpotReflector(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
	, AcousticTexture(NULL)
    , DistanceScalingFactor(2.f)
    , Level(1.f)
	, m_uAuxBusID(AK_INVALID_AUX_ID)
{
	RootComponent = ObjectInitializer.CreateDefaultSubobject<USceneComponent>(this, TEXT("SpotReclectorRootComponent"));

#if WITH_EDITORONLY_DATA
	SpriteComponent = CreateEditorOnlyDefaultSubobject<UBillboardComponent>(TEXT("Sprite"));
	if (SpriteComponent) 
	{
		SpriteComponent->SetSprite(LoadObject<UTexture2D>(NULL, TEXT("/Wwise/S_AkSpotReflector.S_AkSpotReflector")));
		SpriteComponent->RelativeScale3D = FVector(0.5f, 0.5f, 0.5f);
		SpriteComponent->SetupAttachment(RootComponent);
	}
#endif

	// AActor properties 
	bHidden = true;
	bCanBeDamaged = false;
}

// Called when the game starts or when spawned
void AAkSpotReflector::BeginPlay()
{
	Super::BeginPlay();
	
	AkReflectImageSource sourceInfo;
	FAkAudioDevice* pDev = FAkAudioDevice::Get();

	if(!pDev)
		return;

	if (AuxBus)
	{
		m_uAuxBusID = AuxBus->GetAuxBusId();
	}
	else
	{
		if (!AuxBusName.IsEmpty())
			m_uAuxBusID = pDev->GetIDFromString(AuxBusName);
		else
			m_uAuxBusID = AK_INVALID_UNIQUE_ID;
	}

	sourceInfo.uNumChar = 0;
	sourceInfo.pName = NULL;

	sourceInfo.fDistanceScalingFactor = DistanceScalingFactor;
	sourceInfo.fLevel = Level;

	sourceInfo.uNumTexture = 0;

	if (AcousticTexture)
	{
		sourceInfo.uNumTexture = 1;
		sourceInfo.arTextureID[0] = FAkAudioDevice::Get()->GetIDFromString(AcousticTexture->GetName());
	}

#if UE_4_17_OR_LATER
	const auto& RootTransform = RootComponent->GetComponentTransform();
#else
	const auto& RootTransform = RootComponent->ComponentToWorld;
#endif // UE_4_17_OR_LATER

	sourceInfo.uID = (AkImageSourceID)(uint64)this;
	sourceInfo.sourcePosition = FAkAudioDevice::FVectorToAKVector(RootTransform.GetTranslation());


	AkRoomID roomID;
	TArray<UAkRoomComponent*> AkRooms = pDev->FindRoomComponentsAtLocation(RootTransform.GetTranslation(), GetWorld(), 1);
	if (AkRooms.Num() > 0)
		roomID = AkRooms[0]->GetRoomID();

#if WITH_EDITOR
	FString Name = GetActorLabel();
#else
	FString Name = "";
#endif
	pDev->AddImageSource(sourceInfo, m_uAuxBusID, roomID, Name);
}

void AAkSpotReflector::BeginDestroy()
{
	Super::BeginDestroy();
	FAkAudioDevice* AkAudioDevice = FAkAudioDevice::Get();
	if (!IsRunningCommandlet() && AkAudioDevice)
	{
		AkAudioDevice->RemoveImageSource(this, m_uAuxBusID);
	}
}
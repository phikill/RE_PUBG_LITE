
#include "AkAudioDevice.h"
#include "AkAudioClasses.h"
#include "Net/UnrealNetwork.h"
#include "Components/BrushComponent.h"
#include "Model.h"
#include "Engine/Polys.h"
#include "AkSurfaceReflectorSetComponent.h"

#include <AK/SpatialAudio/Common/AkSpatialAudio.h>

#if WITH_EDITOR
#include "Editor.h"
#endif

#include "UObject/Object.h"
#include "Engine/GameEngine.h"

UAkSurfaceReflectorSetComponent::UAkSurfaceReflectorSetComponent(const class FObjectInitializer& ObjectInitializer) :
	Super(ObjectInitializer)
{
	// Property initialization
	bWantsOnUpdateTransform = true;

	bEnableSurfaceReflectors = 1;
	
#if WITH_EDITOR
	PrimaryComponentTick.bCanEverTick = true;
	bTickInEditor = true;
	WasSelected = false;
#endif
}

void UAkSurfaceReflectorSetComponent::OnRegister()
{
	Super::OnRegister();
	InitializeParentBrush();
}

void UAkSurfaceReflectorSetComponent::InitializeParentBrush()
{
	AVolume* Parent = Cast<AVolume>(GetOwner());
	if (Parent)
	{
		ParentBrush = Parent->Brush;
#if WITH_EDITOR
		if (ParentBrush && ParentBrush->Nodes.Num() != AcousticPolys.Num())
		{
			UpdatePolys();
		}
		UpdateText(bEnableSurfaceReflectors && GetOwner()->IsSelected());
#endif
	}
	else
	{
		bEnableSurfaceReflectors = false;
		ParentBrush = nullptr;
		UE_LOG(LogAkAudio, Error, TEXT("UAkSurfaceReflectorSetComponent requires to be attached to an actor inheriting from AVolume."));
	}
}

void UAkSurfaceReflectorSetComponent::PostLoad()
{
	Super::PostLoad();

	InitializeParentBrush();

#if WITH_EDITOR
	UpdatePolys();
	UpdateText(IsSelected());
#endif
}


void UAkSurfaceReflectorSetComponent::OnUnregister()
{
#if WITH_EDITOR
	if (!HasAnyFlags(RF_Transient) && GetOwner()->IsActorBeingDestroyed())
	{
		DestroyTextVisualizers();
	}
#endif
	Super::OnUnregister();
}

#if WITH_EDITOR
void UAkSurfaceReflectorSetComponent::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	Super::PostEditChangeProperty(PropertyChangedEvent);
	
	InitializeParentBrush();
		
	if (ParentBrush != nullptr)
	{
		UpdatePolys();
	}

	UpdateText(bEnableSurfaceReflectors);
}

void UAkSurfaceReflectorSetComponent::PostEditUndo()
{
	OnRefreshDetails.ExecuteIfBound(); 
	Super::PostEditUndo(); 
}

FText UAkSurfaceReflectorSetComponent::GetPolyText(int32 PolyIdx) const
{
	if (AcousticPolys.Num() > PolyIdx && AcousticPolys[PolyIdx].Texture)
	{
		return FText::FromString(AcousticPolys[PolyIdx].Texture->GetName());
	}
	else
	{
		return FText::FromString(FString::FromInt(PolyIdx));
	}
}

void UAkSurfaceReflectorSetComponent::UpdateText(bool Visible)
{
	bool bReallyVisible = GetWorld() && GetWorld()->WorldType == EWorldType::Editor && Visible;
	for (int32 i = 0; i < TextVisualizers.Num(); i++)
	{
		if (TextVisualizers[i])
		{
			TextVisualizers[i]->SetText(GetPolyText(i));
			TextVisualizers[i]->SetVisibility(bReallyVisible);
		}
	}
}

void UAkSurfaceReflectorSetComponent::DestroyTextVisualizers()
{
	for (int32 i = 0; i < TextVisualizers.Num(); i++)
	{
		if(TextVisualizers[i])
			TextVisualizers[i]->DestroyComponent();
	}

	TextVisualizers.Empty();
}

void UAkSurfaceReflectorSetComponent::UpdatePolys()
{
	if (!ParentBrush || HasAnyFlags(RF_Transient))
	{
		return;
	}

	int32 NumTextures = AcousticPolys.Num();
	int32 NumPolys = ParentBrush->Nodes.Num();
	if (NumPolys > NumTextures)
	{
		AcousticPolys.AddDefaulted(NumPolys - NumTextures);
	}
	else if(NumPolys < NumTextures)
	{
		AcousticPolys.RemoveAt(NumPolys, NumTextures - NumPolys);
	}

	if (AcousticPolys.Num() != TextVisualizers.Num())
	{
		DestroyTextVisualizers();

		for (int32 i = 0; i < AcousticPolys.Num(); i++)
		{
			FString VizName = GetOwner()->GetName() + GetName() + TEXT("TextViz ") + FString::FromInt(i);
			int32 idx = TextVisualizers.Add(NewObject<UTextRenderComponent>(GetOuter(), *VizName));
			if (TextVisualizers[idx])
			{
				TextVisualizers[idx]->SetHorizontalAlignment(EHorizTextAligment::EHTA_Center);
				TextVisualizers[idx]->RegisterComponentWithWorld(GetWorld());
				TextVisualizers[idx]->bIsEditorOnly = true;
			}
		}

		OnRefreshDetails.ExecuteIfBound();
	}
}

void UAkSurfaceReflectorSetComponent::TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction *ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	if (!ParentBrush)
	{
		InitializeParentBrush();
	}

	if (ParentBrush && ParentBrush->Nodes.Num() != AcousticPolys.Num())
	{
		UpdatePolys();
	}

	if (GetOwner()->IsSelected() && !WasSelected)
	{
		WasSelected = true;
		UpdateText(bEnableSurfaceReflectors);
	}

	if (!GetOwner()->IsSelected() && WasSelected)
	{
		WasSelected = false;
		UpdateText(false);
	}
}
#endif // WITH_EDITOR

void UAkSurfaceReflectorSetComponent::OnUpdateTransform(EUpdateTransformFlags UpdateTransformFlags, ETeleportType Teleport)
{
	Super::OnUpdateTransform(UpdateTransformFlags, Teleport);

	UpdateSurfaceReflectorSet();
}

inline bool UAkSurfaceReflectorSetComponent::ShouldSendGeometry() const
{
	UWorld* CurrentWorld = GetWorld();
	if (CurrentWorld && ParentBrush && bEnableSurfaceReflectors && !IsRunningCommandlet())
	{
		return CurrentWorld->WorldType == EWorldType::Game || CurrentWorld->WorldType == EWorldType::PIE;
	}
	return false;
}

void UAkSurfaceReflectorSetComponent::BeginPlay()
{
	Super::BeginPlay();

	SendSurfaceReflectorSet();
}

void UAkSurfaceReflectorSetComponent::SendSurfaceReflectorSet() 
{
	FAkAudioDevice* AkAudioDevice = FAkAudioDevice::Get();

	if (AkAudioDevice && ShouldSendGeometry())
	{
		TArray<AkTriangle> TrianglesToSend;
		TArray<AK::SpatialAudio::String> triangleNames;
		FString ParentName = GetOwner()->GetName();
		// Some clarifications: 
		// - All of the brush's vertices are held in the UModel->Verts array (elements of type FVert)
		// - FVert contains pVertex, which points to the UModel->Points array (actual coords of the point in actor space)
		// - Polygons are represented by the UModel->Nodes array (elements of type FBspNode).
		// - FBspNode contains iVertPool, which represents the index in the UModel->Verts at which the node's verts start
		// - FBspNode contains NumVertices, the number of vertices that compose this node.
		//
		// For more insight on how all of these tie together, look at UModel::BuildVertexBuffers().
		FTransform OwnerToWorld = GetOwner()->ActorToWorld();
		for (int32 NodeIdx = 0; NodeIdx < ParentBrush->Nodes.Num(); ++NodeIdx)
		{
			if (AcousticPolys.Num() > NodeIdx)
			{
				if (ParentBrush->Nodes[NodeIdx].NumVertices > 2 && AcousticPolys[NodeIdx].EnableSurface)
				{
					int32 VertStartIndex = ParentBrush->Nodes[NodeIdx].iVertPool;

					const FVert& Vert0 = ParentBrush->Verts[VertStartIndex + 0];
					const FVert& Vert1 = ParentBrush->Verts[VertStartIndex + 1];
					const FVector& Vertex0InActorSpace = ParentBrush->Points[Vert0.pVertex];
					const FVector& Vertex1InActorSpace = ParentBrush->Points[Vert1.pVertex];

					FVector Vertex0 = OwnerToWorld.TransformPosition(Vertex0InActorSpace);
					FVector Vertex1 = OwnerToWorld.TransformPosition(Vertex1InActorSpace);

					for (int32 VertexIdx = 2; VertexIdx < ParentBrush->Nodes[NodeIdx].NumVertices; ++VertexIdx)
					{
						const FVert& Vert2 = ParentBrush->Verts[VertStartIndex + VertexIdx];
						const FVector& Vertex2InActorSpace = ParentBrush->Points[Vert2.pVertex];
						FVector Vertex2 = OwnerToWorld.TransformPosition(Vertex2InActorSpace);

						FString TriangleName;
						if (AcousticPolys[NodeIdx].Texture != nullptr)
						{
							TriangleName = ParentName + GetName() + FString(TEXT("_")) + AcousticPolys[NodeIdx].Texture->GetName() + FString::FromInt(NodeIdx) + FString(TEXT("_")) + FString::FromInt(VertexIdx - 2);
						}
						else
						{
							TriangleName = ParentName + GetName() + FString(TEXT("_")) + FString::FromInt(NodeIdx) + FString(TEXT("_")) + FString::FromInt(VertexIdx - 2);
						}

						AkTriangle NewTriangle;
						FAkAudioDevice::FVectorToAKVector(Vertex0, NewTriangle.point0);
						FAkAudioDevice::FVectorToAKVector(Vertex1, NewTriangle.point1);
						FAkAudioDevice::FVectorToAKVector(Vertex2, NewTriangle.point2);
						NewTriangle.textureID = AcousticPolys[NodeIdx].Texture != NULL ? FAkAudioDevice::Get()->GetIDFromString(AcousticPolys[NodeIdx].Texture->GetName()) : 0;

						int32 newIdx = triangleNames.Add(TCHAR_TO_ANSI(*TriangleName));
						triangleNames[newIdx].AllocCopy(); //the conversion macro TCHAR_TO_ANSI will reuse the same buffer, so we need a local copy.
						NewTriangle.strName = triangleNames[newIdx].Get();
						TrianglesToSend.Add(NewTriangle);

						// Prepare next loop
						Vertex1 = Vertex2;
					}
				}
			}
		}

		if (TrianglesToSend.Num() > 0)
		{
			if (AkAudioDevice->AddGeometrySet(AkGeometrySetID(this), TrianglesToSend.GetData(), TrianglesToSend.Num()) == AK_Success)
				GeometryHasBeenSent = true;
		}
	}
}

void UAkSurfaceReflectorSetComponent::RemoveSurfaceReflectorSet()
{
	FAkAudioDevice* AkAudioDevice = FAkAudioDevice::Get();
	if (AkAudioDevice && ShouldSendGeometry() && GeometryHasBeenSent)
		if(AkAudioDevice->RemoveGeometrySet(AkGeometrySetID(this)) == AK_Success)
			GeometryHasBeenSent = false;
}

void UAkSurfaceReflectorSetComponent::UpdateSurfaceReflectorSet()
{
	RemoveSurfaceReflectorSet();
	SendSurfaceReflectorSet();
}

void UAkSurfaceReflectorSetComponent::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);
	RemoveSurfaceReflectorSet();
}

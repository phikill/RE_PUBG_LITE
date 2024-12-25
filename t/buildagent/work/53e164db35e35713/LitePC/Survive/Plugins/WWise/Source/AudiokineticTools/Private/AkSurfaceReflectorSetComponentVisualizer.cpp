// Copyright (c) 2006-2012 Audiokinetic Inc. / All Rights Reserved

/*=============================================================================
AkWwiseAcousticsComponentVisualizer.cpp:
=============================================================================*/
#include "AudiokineticToolsPrivatePCH.h"

#include "AkSurfaceReflectorSetComponentVisualizer.h"
#include "AkAudioDevice.h"
#include "AkAudioClasses.h"
#include "Editor.h"
#include "EditorModeManager.h"
#include "EditorModes.h"
#include "Components/BrushComponent.h"
#include "Components/TextRenderComponent.h"
#include "Model.h"
#include "Engine/Polys.h"
#include "EngineGlobals.h"
#include "DynamicMeshBuilder.h"
#include "Materials/Material.h"
#include "Editor.h"
#include "LevelEditorViewport.h"

void FAkSurfaceReflectorSetComponentVisualizer::DrawVisualization(const UActorComponent* Component, const FSceneView* View, FPrimitiveDrawInterface* PDI)
{

	if (GLevelEditorModeTools().IsModeActive(FBuiltinEditorModes::EM_Geometry))
	{
		return;
	}

	const UAkSurfaceReflectorSetComponent* SurfaceReflectorSet = Cast<const UAkSurfaceReflectorSetComponent>(Component);
	const AAkSpatialAudioVolume* SpatialAudioVolume = Cast<const AAkSpatialAudioVolume>(Component->GetOwner());

	if (SpatialAudioVolume == nullptr ||
		SurfaceReflectorSet == nullptr ||
		SurfaceReflectorSet->ParentBrush == nullptr ||
		!SurfaceReflectorSet->bEnableSurfaceReflectors )
	{
		return;
	}

	// Build a mesh by basically drawing the triangles of each 
	for (int32 NodeIdx = 0; NodeIdx < SurfaceReflectorSet->ParentBrush->Nodes.Num() && NodeIdx < SurfaceReflectorSet->TextVisualizers.Num(); ++NodeIdx)
	{
		UTextRenderComponent* TextComp = SurfaceReflectorSet->TextVisualizers[NodeIdx];
		FVector PolyMidPoint(0,0,0);
		if (SurfaceReflectorSet->AcousticPolys.Num() > NodeIdx && !SpatialAudioVolume->IsHiddenEd())
		{
#if UE_4_19_OR_LATER
			FDynamicMeshBuilder MeshBuilder(ERHIFeatureLevel::Type::ES2);
#else
			FDynamicMeshBuilder MeshBuilder;
#endif
			if (SurfaceReflectorSet->ParentBrush->Nodes[NodeIdx].NumVertices > 2)
			{
				int32 VertStartIndex = SurfaceReflectorSet->ParentBrush->Nodes[NodeIdx].iVertPool;

				const FVert& Vert0 = SurfaceReflectorSet->ParentBrush->Verts[VertStartIndex + 0];
				const FVert& Vert1 = SurfaceReflectorSet->ParentBrush->Verts[VertStartIndex + 1];
				const FVector Vertex0 = SurfaceReflectorSet->ParentBrush->Points[Vert0.pVertex];
				FVector Vertex1 = SurfaceReflectorSet->ParentBrush->Points[Vert1.pVertex];
				PolyMidPoint = Vertex0 + Vertex1;

				if (SurfaceReflectorSet->AcousticPolys[NodeIdx].Texture != nullptr)
				{
					MeshBuilder.AddVertex(Vertex0, FVector2D::ZeroVector, FVector(1, 0, 0), FVector(0, 1, 0), FVector(0, 0, 1), FColor::White);
					MeshBuilder.AddVertex(Vertex1, FVector2D::ZeroVector, FVector(1, 0, 0), FVector(0, 1, 0), FVector(0, 0, 1), FColor::White);
				}
				for (int32 VertexIdx = 2; VertexIdx < SurfaceReflectorSet->ParentBrush->Nodes[NodeIdx].NumVertices; ++VertexIdx)
				{
					const FVert& Vert2 = SurfaceReflectorSet->ParentBrush->Verts[VertStartIndex + VertexIdx];
					FVector Vertex2 = SurfaceReflectorSet->ParentBrush->Points[Vert2.pVertex];
					PolyMidPoint += Vertex2;
					if (SurfaceReflectorSet->AcousticPolys[NodeIdx].Texture != nullptr)
					{
						MeshBuilder.AddVertex(Vertex2, FVector2D::ZeroVector, FVector(1, 0, 0), FVector(0, 1, 0), FVector(0, 0, 1), FColor::White);
						MeshBuilder.AddTriangle(0, VertexIdx, VertexIdx - 1);
					}
					Vertex1 = Vertex2;
				}

				PolyMidPoint /= SurfaceReflectorSet->ParentBrush->Nodes[NodeIdx].NumVertices;

				if (SurfaceReflectorSet->AcousticPolys[NodeIdx].Texture != nullptr)
				{
					FLinearColor SurfaceColor = SurfaceReflectorSet->AcousticPolys[NodeIdx].Texture->EditColor;
					SurfaceColor.A = 0.5f;
					FDynamicColoredMaterialRenderProxy* MatProxy = new FDynamicColoredMaterialRenderProxy(GEngine->GeomMaterial->GetRenderProxy(false), SurfaceColor);
					PDI->RegisterDynamicResource(MatProxy);
					MeshBuilder.Draw(PDI, SpatialAudioVolume->ActorToWorld().ToMatrixWithScale(), MatProxy, SDPG_World, false);
				}
			}
		}

		if (TextComp)
		{
			FVector StringPosition = SpatialAudioVolume->ActorToWorld().TransformPosition(PolyMidPoint);

			if (GCurrentLevelEditingViewportClient != nullptr)
			{
				FVector PointTo = GCurrentLevelEditingViewportClient->GetViewLocation() - StringPosition;
				TextComp->SetWorldRotation(PointTo.Rotation());
			}
			TextComp->SetWorldLocation(StringPosition);
			TextComp->SetWorldScale3D(SpatialAudioVolume->GetActorScale());
			TextComp->SetText(SurfaceReflectorSet->GetPolyText(NodeIdx));
			TextComp->SetVisibility(SurfaceReflectorSet->bEnableSurfaceReflectors && !SpatialAudioVolume->IsHiddenEd());
		}
	}
}

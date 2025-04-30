#pragma once

#include "../SDK.h"

// Name: LitePC_0701, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function RuntimeMeshComponent.RuntimeMeshComponent.UpdateMeshSection_Blueprint
struct URuntimeMeshComponent_UpdateMeshSection_Blueprint_Params
{
	int                                                SectionIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FVector>                             Vertices;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<int>                                        Triangles;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FVector>                             Normals;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FRuntimeMeshTangent>                 Tangents;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FVector2D>                           UV0;                                                      // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FVector2D>                           UV1;                                                      // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FLinearColor>                        Colors;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               bCalculateNormalTangent;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bGenerateTessellationTriangles;                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function RuntimeMeshComponent.RuntimeMeshComponent.SetSectionTessellationTriangles
struct URuntimeMeshComponent_SetSectionTessellationTriangles_Params
{
	int                                                SectionIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        TessellationTriangles;                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               bShouldMoveArray;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function RuntimeMeshComponent.RuntimeMeshComponent.SetMeshSectionVisible
struct URuntimeMeshComponent_SetMeshSectionVisible_Params
{
	int                                                SectionIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bNewVisibility;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function RuntimeMeshComponent.RuntimeMeshComponent.SetMeshSectionCollisionEnabled
struct URuntimeMeshComponent_SetMeshSectionCollisionEnabled_Params
{
	int                                                SectionIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bNewCollisionEnabled;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function RuntimeMeshComponent.RuntimeMeshComponent.SetMeshSectionCastsShadow
struct URuntimeMeshComponent_SetMeshSectionCastsShadow_Params
{
	int                                                SectionIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bNewCastsShadow;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function RuntimeMeshComponent.RuntimeMeshComponent.SetMeshCollisionSection
struct URuntimeMeshComponent_SetMeshCollisionSection_Params
{
	int                                                CollisionSectionIndex;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FVector>                             Vertices;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<int>                                        Triangles;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// DelegateFunction RuntimeMeshComponent.RuntimeMeshComponent.RuntimeMeshCollisionUpdatedDelegate__DelegateSignature
struct URuntimeMeshComponent_RuntimeMeshCollisionUpdatedDelegate__DelegateSignature_Params
{
};

// Function RuntimeMeshComponent.RuntimeMeshComponent.IsMeshSectionVisible
struct URuntimeMeshComponent_IsMeshSectionVisible_Params
{
	int                                                SectionIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function RuntimeMeshComponent.RuntimeMeshComponent.IsMeshSectionCollisionEnabled
struct URuntimeMeshComponent_IsMeshSectionCollisionEnabled_Params
{
	int                                                SectionIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function RuntimeMeshComponent.RuntimeMeshComponent.IsMeshSectionCastingShadows
struct URuntimeMeshComponent_IsMeshSectionCastingShadows_Params
{
	int                                                SectionIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function RuntimeMeshComponent.RuntimeMeshComponent.GetNumSections
struct URuntimeMeshComponent_GetNumSections_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function RuntimeMeshComponent.RuntimeMeshComponent.GetLastSectionIndex
struct URuntimeMeshComponent_GetLastSectionIndex_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function RuntimeMeshComponent.RuntimeMeshComponent.FirstAvailableMeshSectionIndex
struct URuntimeMeshComponent_FirstAvailableMeshSectionIndex_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function RuntimeMeshComponent.RuntimeMeshComponent.EndBatchUpdates
struct URuntimeMeshComponent_EndBatchUpdates_Params
{
};

// Function RuntimeMeshComponent.RuntimeMeshComponent.DoesSectionExist
struct URuntimeMeshComponent_DoesSectionExist_Params
{
	int                                                SectionIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function RuntimeMeshComponent.RuntimeMeshComponent.CreateMeshSection_Blueprint
struct URuntimeMeshComponent_CreateMeshSection_Blueprint_Params
{
	int                                                SectionIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FVector>                             Vertices;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<int>                                        Triangles;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FVector>                             Normals;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FRuntimeMeshTangent>                 Tangents;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FVector2D>                           UV0;                                                      // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FVector2D>                           UV1;                                                      // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FLinearColor>                        Colors;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               bCreateCollision;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bCalculateNormalTangent;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bGenerateTessellationTriangles;                           // (Parm, ZeroConstructor, IsPlainOldData)
	EUpdateFrequency                                   UpdateFrequency;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function RuntimeMeshComponent.RuntimeMeshComponent.CookCollisionNow
struct URuntimeMeshComponent_CookCollisionNow_Params
{
};

// Function RuntimeMeshComponent.RuntimeMeshComponent.ClearMeshSection
struct URuntimeMeshComponent_ClearMeshSection_Params
{
	int                                                SectionIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function RuntimeMeshComponent.RuntimeMeshComponent.ClearMeshCollisionSection
struct URuntimeMeshComponent_ClearMeshCollisionSection_Params
{
	int                                                CollisionSectionIndex;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function RuntimeMeshComponent.RuntimeMeshComponent.ClearCollisionConvexMeshes
struct URuntimeMeshComponent_ClearCollisionConvexMeshes_Params
{
};

// Function RuntimeMeshComponent.RuntimeMeshComponent.ClearAllMeshSections
struct URuntimeMeshComponent_ClearAllMeshSections_Params
{
};

// Function RuntimeMeshComponent.RuntimeMeshComponent.ClearAllMeshCollisionSections
struct URuntimeMeshComponent_ClearAllMeshCollisionSections_Params
{
};

// Function RuntimeMeshComponent.RuntimeMeshComponent.BeginBatchUpdates
struct URuntimeMeshComponent_BeginBatchUpdates_Params
{
};

// Function RuntimeMeshComponent.RuntimeMeshComponent.AddCollisionConvexMesh
struct URuntimeMeshComponent_AddCollisionConvexMesh_Params
{
	TArray<struct FVector>                             ConvexVerts;                                              // (Parm, ZeroConstructor)
};

// Function RuntimeMeshComponent.RuntimeMeshLibrary.GetSectionFromStaticMesh
struct URuntimeMeshLibrary_GetSectionFromStaticMesh_Params
{
	class UStaticMesh*                                 InMesh;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                LODIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SectionIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FVector>                             Vertices;                                                 // (Parm, OutParm, ZeroConstructor)
	TArray<int>                                        Triangles;                                                // (Parm, OutParm, ZeroConstructor)
	TArray<struct FVector>                             Normals;                                                  // (Parm, OutParm, ZeroConstructor)
	TArray<struct FVector2D>                           UVs;                                                      // (Parm, OutParm, ZeroConstructor)
	TArray<struct FRuntimeMeshTangent>                 Tangents;                                                 // (Parm, OutParm, ZeroConstructor)
};

// Function RuntimeMeshComponent.RuntimeMeshLibrary.GenerateTessellationIndexBuffer
struct URuntimeMeshLibrary_GenerateTessellationIndexBuffer_Params
{
	TArray<struct FVector>                             Vertices;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<int>                                        Triangles;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FVector2D>                           UVs;                                                      // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FVector>                             Normals;                                                  // (Parm, OutParm, ZeroConstructor)
	TArray<struct FRuntimeMeshTangent>                 Tangents;                                                 // (Parm, OutParm, ZeroConstructor)
	TArray<int>                                        OutTessTriangles;                                         // (Parm, OutParm, ZeroConstructor)
};

// Function RuntimeMeshComponent.RuntimeMeshLibrary.CreateGridMeshTriangles
struct URuntimeMeshLibrary_CreateGridMeshTriangles_Params
{
	int                                                NumX;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumY;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bWinding;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        Triangles;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function RuntimeMeshComponent.RuntimeMeshLibrary.CreateBoxMesh
struct URuntimeMeshLibrary_CreateBoxMesh_Params
{
	struct FVector                                     BoxRadius;                                                // (Parm, IsPlainOldData)
	TArray<struct FVector>                             Vertices;                                                 // (Parm, OutParm, ZeroConstructor)
	TArray<int>                                        Triangles;                                                // (Parm, OutParm, ZeroConstructor)
	TArray<struct FVector>                             Normals;                                                  // (Parm, OutParm, ZeroConstructor)
	TArray<struct FVector2D>                           UVs;                                                      // (Parm, OutParm, ZeroConstructor)
	TArray<struct FRuntimeMeshTangent>                 Tangents;                                                 // (Parm, OutParm, ZeroConstructor)
};

// Function RuntimeMeshComponent.RuntimeMeshLibrary.CopyRuntimeMeshFromStaticMeshComponent
struct URuntimeMeshLibrary_CopyRuntimeMeshFromStaticMeshComponent_Params
{
	class UStaticMeshComponent*                        StaticMeshComp;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                LODIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class URuntimeMeshComponent*                       RuntimeMeshComp;                                          // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bShouldCreateCollision;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function RuntimeMeshComponent.RuntimeMeshLibrary.ConvertQuadToTriangles
struct URuntimeMeshLibrary_ConvertQuadToTriangles_Params
{
	TArray<int>                                        Triangles;                                                // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                Vert0;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Vert1;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Vert2;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Vert3;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function RuntimeMeshComponent.RuntimeMeshLibrary.CalculateTangentsForMesh
struct URuntimeMeshLibrary_CalculateTangentsForMesh_Params
{
	TArray<struct FVector>                             Vertices;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<int>                                        Triangles;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FVector2D>                           UVs;                                                      // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FVector>                             Normals;                                                  // (Parm, OutParm, ZeroConstructor)
	TArray<struct FRuntimeMeshTangent>                 Tangents;                                                 // (Parm, OutParm, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

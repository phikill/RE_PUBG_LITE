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

// Function OceanPlugin.BuoyancyForceComponent.GetTestPointsUnderWater
struct UBuoyancyForceComponent_GetTestPointsUnderWater_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OceanPlugin.FlockFish.OnEndOverlap
struct AFlockFish_OnEndOverlap_Params
{
	class UPrimitiveComponent*                         activatedComp;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OceanPlugin.FlockFish.OnBeginOverlap
struct AFlockFish_OnBeginOverlap_Params
{
	class UPrimitiveComponent*                         activatedComp;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function OceanPlugin.OceanManager.LoadLandscapeHeightmap
struct AOceanManager_LoadLandscapeHeightmap_Params
{
	class UTexture2D*                                  Tex2D;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OceanPlugin.OceanManager.GetWaveHeightValue
struct AOceanManager_GetWaveHeightValue_Params
{
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class UWorld*                                      World;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               HeightOnly;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               TwoIterations;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function OceanPlugin.OceanManager.GetHeightmapPixel
struct AOceanManager_GetHeightmapPixel_Params
{
	float                                              U;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              V;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function OceanPlugin.TimeManager.SetCurrentLocalTime
struct ATimeManager_SetCurrentLocalTime_Params
{
	float                                              Time;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OceanPlugin.TimeManager.IsLeapYear
struct ATimeManager_IsLeapYear_Params
{
	int                                                Year;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OceanPlugin.TimeManager.InitializeCalendar
struct ATimeManager_InitializeCalendar_Params
{
	struct FTimeDate                                   Time;                                                     // (Parm)
};

// Function OceanPlugin.TimeManager.IncrementTime
struct ATimeManager_IncrementTime_Params
{
	float                                              DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OceanPlugin.TimeManager.GetYearPhase
struct ATimeManager_GetYearPhase_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OceanPlugin.TimeManager.GetElapsedDayInMinutes
struct ATimeManager_GetElapsedDayInMinutes_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OceanPlugin.TimeManager.GetDaysInYear
struct ATimeManager_GetDaysInYear_Params
{
	int                                                Year;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OceanPlugin.TimeManager.GetDaysInMonth
struct ATimeManager_GetDaysInMonth_Params
{
	int                                                Year;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Month;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OceanPlugin.TimeManager.GetDayPhase
struct ATimeManager_GetDayPhase_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OceanPlugin.TimeManager.GetDayOfYear
struct ATimeManager_GetDayOfYear_Params
{
	struct FTimeDate                                   Time;                                                     // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OceanPlugin.TimeManager.CalculateSunAngle
struct ATimeManager_CalculateSunAngle_Params
{
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function OceanPlugin.TimeManager.CalculateMoonPhase
struct ATimeManager_CalculateMoonPhase_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OceanPlugin.TimeManager.CalculateMoonAngle
struct ATimeManager_CalculateMoonAngle_Params
{
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function OceanPlugin.AdvancedBuoyancyComponent.TriangleArea
struct UAdvancedBuoyancyComponent_TriangleArea_Params
{
	struct FVector                                     A;                                                        // (Parm, IsPlainOldData)
	struct FVector                                     B;                                                        // (Parm, IsPlainOldData)
	struct FVector                                     C;                                                        // (Parm, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OceanPlugin.AdvancedBuoyancyComponent.SplitTriangle
struct UAdvancedBuoyancyComponent_SplitTriangle_Params
{
	struct FBuoyancyVertex                             H;                                                        // (Parm)
	struct FBuoyancyVertex                             M;                                                        // (Parm)
	struct FBuoyancyVertex                             L;                                                        // (Parm)
	struct FVector                                     InArrow;                                                  // (Parm, IsPlainOldData)
	TArray<struct FForceTriangle>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function OceanPlugin.AdvancedBuoyancyComponent.SetMeshDensity
struct UAdvancedBuoyancyComponent_SetMeshDensity_Params
{
	float                                              NewDensity;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              NewWaterDensity;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OceanPlugin.AdvancedBuoyancyComponent.GetOceanDepthFromGrid
struct UAdvancedBuoyancyComponent_GetOceanDepthFromGrid_Params
{
	struct FVector                                     Position;                                                 // (Parm, IsPlainOldData)
	bool                                               bJustGetHeightAtLocation;                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OceanPlugin.AdvancedBuoyancyComponent.GetOcean
struct UAdvancedBuoyancyComponent_GetOcean_Params
{
};

// Function OceanPlugin.AdvancedBuoyancyComponent.DrawDebugStuff
struct UAdvancedBuoyancyComponent_DrawDebugStuff_Params
{
	struct FForceTriangle                              TriForce;                                                 // (Parm)
	struct FColor                                      debugColor;                                               // (Parm, IsPlainOldData)
};

// Function OceanPlugin.AdvancedBuoyancyComponent.ApplySlamForce
struct UAdvancedBuoyancyComponent_ApplySlamForce_Params
{
	struct FVector                                     SlamForce;                                                // (Parm, IsPlainOldData)
	struct FVector                                     TriCenter;                                                // (Parm, IsPlainOldData)
};

// Function OceanPlugin.AdvancedBuoyancyComponent.ApplyForce
struct UAdvancedBuoyancyComponent_ApplyForce_Params
{
	struct FForceTriangle                              TriForce;                                                 // (Parm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

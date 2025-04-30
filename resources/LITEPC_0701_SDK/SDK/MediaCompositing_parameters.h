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

// Function MediaCompositing.MediaPlaneComponent.SetMediaPlane
struct UMediaPlaneComponent_SetMediaPlane_Params
{
	struct FMediaPlaneParameters                       Plane;                                                    // (Parm)
};

// Function MediaCompositing.MediaPlaneComponent.OnRenderTextureChanged
struct UMediaPlaneComponent_OnRenderTextureChanged_Params
{
};

// Function MediaCompositing.MediaPlaneComponent.GetPlane
struct UMediaPlaneComponent_GetPlane_Params
{
	struct FMediaPlaneParameters                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

// Copyright (c) 2006-2017 Audiokinetic Inc. / All Rights Reserved

/*=============================================================================
	AkCustomVersion.h:
=============================================================================*/
#pragma once

#include "CoreMinimal.h"
#include "Misc/Guid.h"

// Custom serialization version for all packages containing Paper2D asset types
struct FAkCustomVersion
{
	enum Type
	{
		// Before any version changes were made in the plugin
		BeforeCustomVersionWasAdded = 0,

		// Fixed negative volume in UPaperSprite 3D aggregate geometry (caused collision issues)
		AddedSpatialAudio = 1,

		// -----<new versions can be added above this line>-------------------------------------------------
		VersionPlusOne,
		LatestVersion = VersionPlusOne - 1
	};

	// The GUID for this custom version number
	const static FGuid GUID;

private:
	FAkCustomVersion() {}
};

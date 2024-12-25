// Copyright (c) 2006-2017 Audiokinetic Inc. / All Rights Reserved

#include "AkAudioDevice.h"
#include "AkCustomVersion.h"
#include "Serialization/CustomVersion.h"

const FGuid FAkCustomVersion::GUID(0xE2717C7E, 0x52F544D3, 0x950C5340, 0xB315035E);

// Register the custom version with core
FCustomVersionRegistration GRegisterAkCustomVersion(FAkCustomVersion::GUID, FAkCustomVersion::LatestVersion, TEXT("AkAudioVersion"));

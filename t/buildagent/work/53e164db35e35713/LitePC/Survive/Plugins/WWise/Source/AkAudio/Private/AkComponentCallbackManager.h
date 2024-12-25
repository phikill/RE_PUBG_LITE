// Copyright (c) 2006-2017 Audiokinetic Inc. / All Rights Reserved

#pragma once

#include "AkInclude.h"


struct AkUserCallbackPackage
{
	/** Copy of the user callback, for use in our own callback */
	AkCallbackFunc pfnUserCallback;

	/** Copy of the user cookie, for use in our own callback */
	void* pUserCookie;

	/** Copy of the user callback flags, for use in our own callback */
	uint32 uUserFlags;

	AkUserCallbackPackage(AkCallbackFunc in_cbFunc, void* in_Cookie, uint32 in_Flags)
		: pfnUserCallback(in_cbFunc)
		, pUserCookie(in_Cookie)
		, uUserFlags(in_Flags)
	{}

	AkUserCallbackPackage()
		: pfnUserCallback(nullptr)
		, pUserCookie(nullptr)
		, uUserFlags(0)
	{}
};

class FAkComponentCallbackManager
{
public:
	static FAkComponentCallbackManager* GetInstance();

	static FAkComponentCallbackManager* Instance;

	/** Our own event callback */
	static void AkComponentCallback(AkCallbackType in_eType, AkCallbackInfo* in_pCallbackInfo);

	FAkComponentCallbackManager();
	~FAkComponentCallbackManager();

	AkUserCallbackPackage* CreateCallbackPackage(AkCallbackFunc in_cbFunc, void* in_Cookie, uint32 in_Flags, AkGameObjectID in_gameObjID);
	void RemoveCallbackPackage(AkUserCallbackPackage* in_Package, AkGameObjectID in_gameObjID);

	void RegisterGameObject(AkGameObjectID in_gameObjID);
	void UnregisterGameObject(AkGameObjectID in_gameObjID);

	bool HasActiveEvents(AkGameObjectID in_gameObjID);

private:
	typedef TSet<AkUserCallbackPackage*> PackageSet;

	void RemovePackageFromSet(PackageSet* in_pPackageSet, AkUserCallbackPackage* in_pPackage, AkGameObjectID in_gameObjID);

	FCriticalSection CriticalSection;

	typedef AkGameObjectIdKeyFuncs<PackageSet, false> PackageSetGamneObjectIDKeyFuncs;
	TMap<AkGameObjectID, PackageSet, FDefaultSetAllocator, PackageSetGamneObjectIDKeyFuncs> GameObjectToPackagesMap;
};

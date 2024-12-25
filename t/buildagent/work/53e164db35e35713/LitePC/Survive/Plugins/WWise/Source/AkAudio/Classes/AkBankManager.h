// Copyright (c) 2006-2012 Audiokinetic Inc. / All Rights Reserved

/*=============================================================================
	AkAudioDevice.h: Audiokinetic audio interface object.
=============================================================================*/

#pragma once

/*------------------------------------------------------------------------------------
	AkAudioDevice system headers
------------------------------------------------------------------------------------*/


#include "AkInclude.h"
#include "Engine/EngineBaseTypes.h"

/*------------------------------------------------------------------------------------
	Audiokinetic SoundBank Manager.
------------------------------------------------------------------------------------*/
class AKAUDIO_API FAkBankManager
{
public:
	struct AkBankCallbackInfo
	{
		AkBankCallbackFunc		CallbackFunc;
		class UAkAudioBank *	pBank;
		void*					pUserCookie;
		FAkBankManager*			pBankManager;

		AkBankCallbackInfo(AkBankCallbackFunc cbFunc, class UAkAudioBank * bank, void* cookie, FAkBankManager* manager)
			: CallbackFunc(cbFunc)
			, pBank(bank)
			, pUserCookie(cookie)
			, pBankManager(manager)
		{}
	};

	void AddLoadedBank(class UAkAudioBank * Bank)
	{
		bool bIsAlreadyInSet = false;
		m_LoadedBanks.Add(Bank, &bIsAlreadyInSet);
		check(bIsAlreadyInSet == false);
	}

	void RemoveLoadedBank(class UAkAudioBank * Bank)
	{
		m_LoadedBanks.Remove(Bank);
	}

	void ClearLoadedBanks()
	{
		m_LoadedBanks.Empty();
	}

	const TSet<class UAkAudioBank *>* GetLoadedBankList()
	{
		return &m_LoadedBanks;
	}

	FCriticalSection m_BankManagerCriticalSection;

private:

	TSet< class UAkAudioBank * > m_LoadedBanks;
};
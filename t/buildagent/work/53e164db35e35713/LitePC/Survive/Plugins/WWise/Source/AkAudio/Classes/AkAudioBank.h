// Copyright (c) 2006-2012 Audiokinetic Inc. / All Rights Reserved

/*=============================================================================
	AkBank.h:
=============================================================================*/
#pragma once

#include "Engine/GameEngine.h"
#include "AkAudioBank.generated.h"

/*------------------------------------------------------------------------------------
	UAkAudioBank
------------------------------------------------------------------------------------*/
UCLASS(meta=(BlueprintSpawnableComponent))
class AKAUDIO_API UAkAudioBank : public UObject
{
	GENERATED_UCLASS_BODY() 

public:
	/** Auto-load bank when its package is accessed for the first time */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Behaviour)
	bool	AutoLoad;
	
	/**
	 * Loads an AkBank.
	 *
	 * @return Returns true if the laod was successful, otherwise false
	 */
	//UFUNCTION(KismetCallable, meta(K2Protected = "true", K2Category = "Audiokinetic"))
	//bool Load();
	
	/**
	 * Loads an AkBank asynchronously.
	 *
	 * @param in_pfnBankCallback		Function to call on completion
	 * @param in_pCookie				Cookie to pass in callback
	 * @return Returns true if the laod was successful, otherwise false
	 */
	//UFUNCTION(KismetCallable, meta(K2Protected = "true", K2Category = "Audiokinetic"))
	//bool LoadAsync(void* in_pfnBankCallback, void* in_pCookie);
	
	/**
	 * Unloads an AkBank.
	 */
	//UFUNCTION(KismetCallable, meta(K2Protected = "true", K2Category = "Audiokinetic"))
	//void Unload();
	
	/**
	 * Unloads an AkBank asynchronously.
	 *
	 * @param in_pfnBankCallback		Function to call on completion
	 * @param in_pCookie				Cookie to pass in callback
	 */
	//UFUNCTION(KismetCallable, meta(K2Protected = "true", K2Category = "Audiokinetic"))
	//void UnloadAsync(void* in_pfnBankCallback, void* in_pCookie);

#if CPP
	/**
	 * Called after load process is complete.
	 */
	virtual void PostLoad() override;

	/**
	 * Clean up.
	 */
	virtual void BeginDestroy() override;
	
	/**
	 * Loads an AkBank.
	 *
	 * @return Returns true if the load was successful, otherwise false
	 */
	bool Load();

	/**
	 * Loads an AkBank asynchronously.
	 *
	 * @param in_pfnBankCallback		Function to call on completion
	 * @param in_pCookie				Cookie to pass in callback
	 * @return Returns true if the load was successful, otherwise false
	 */
	bool LoadAsync(void* in_pfnBankCallback, void* in_pCookie);
	
	/**
	 * Unloads an AkBank.
	 */
	void Unload();
		
	/**
	 * Unloads an AkBank asynchronously.
	 *
	 * @param in_pfnBankCallback		Function to call on completion
	 * @param in_pCookie				Cookie to pass in callback
	 */
	void UnloadAsync(void* in_pfnBankCallback, void* in_pCookie);
#endif
};

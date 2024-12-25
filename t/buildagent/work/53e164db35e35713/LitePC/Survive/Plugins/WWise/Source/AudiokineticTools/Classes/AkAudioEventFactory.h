// Copyright (c) 2006-2012 Audiokinetic Inc. / All Rights Reserved

/*=============================================================================
	AkAudioEventFactory.h:
=============================================================================*/
#pragma once

#include "Factories/Factory.h"
#include "AkAudioEventFactory.generated.h"

/*------------------------------------------------------------------------------------
	UAkAudioEventFactory
------------------------------------------------------------------------------------*/
UCLASS(hidecategories=Object)
class UAkAudioEventFactory : public UFactory
{
	GENERATED_UCLASS_BODY()

#if CPP
	/*------------------------------------------------------------------------------------
		UFactory Interface
	------------------------------------------------------------------------------------*/
	/**
	 * Create a new instance
	 *
	 * @param Class		The type of class to create
	 * @param InParent	The parent class
	 * @param Name		The name of the new instance
	 * @param Flags		Creation flags
	 * @param Context	Creation context
	 * @param Warn		Warnings
	 * @return The new object if creation was successful, otherwise false 
	 */
	virtual UObject* FactoryCreateNew(UClass* Class,UObject* InParent,FName Name,EObjectFlags Flags,UObject* Context,FFeedbackContext* Warn) override;
#endif
};




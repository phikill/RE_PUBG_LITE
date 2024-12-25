// Copyright (c) 2006-2012 Audiokinetic Inc. / All Rights Reserved

/*=============================================================================
	ActorFactoryAkAmbientSound.h:
=============================================================================*/
#pragma once

#include "ActorFactories/ActorFactory.h"
#include "ActorFactoryAkAmbientSound.generated.h"

/*------------------------------------------------------------------------------------
	UActorFactoryAkAmbientSound
------------------------------------------------------------------------------------*/
UCLASS(config=Editor, collapsecategories, hidecategories=Object, MinimalAPI)
class UActorFactoryAkAmbientSound : public UActorFactory
{
	GENERATED_UCLASS_BODY()
	
	// Begin UActorFactory Interface
	virtual void PostSpawnActor( UObject* Asset, AActor* NewActor ) override;
	virtual void PostCreateBlueprint( UObject* Asset, AActor* CDO ) override;
	virtual bool CanCreateActorFrom( const FAssetData& AssetData, FText& OutErrorMsg ) override;
	virtual UObject* GetAssetFromActorInstance(AActor* ActorInstance) override;
	// End UActorFactory Interface
};




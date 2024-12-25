// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "PropertyEditorModule.h"
#include "IDetailCustomization.h"
//////////////////////////////////////////////////////////////////////////
// FAkSurfaceReflectorSetDetailsCustomization

class FAkSurfaceReflectorSetDetailsCustomization : public IDetailCustomization
{
public:
	FAkSurfaceReflectorSetDetailsCustomization();
	~FAkSurfaceReflectorSetDetailsCustomization();
	// Makes a new instance of this detail layout class for a specific detail view requesting it
	static TSharedRef<IDetailCustomization> MakeInstance();

	// IDetailCustomization interface
	virtual void CustomizeDetails(IDetailLayoutBuilder& DetailLayout) override;
	// End of IDetailCustomization interface

private:
	IDetailLayoutBuilder* MyDetailLayout;
	class UAkSurfaceReflectorSetComponent* ReflectorSetBeingCustomized;
	void OnEnableValueChanged();
	void OnGeometryChanged();
	void SetupGeometryModificationHandlers();
};

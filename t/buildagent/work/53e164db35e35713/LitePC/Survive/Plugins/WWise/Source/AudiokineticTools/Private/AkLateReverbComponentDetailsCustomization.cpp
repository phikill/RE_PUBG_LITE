// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.

#include "AudiokineticToolsPrivatePCH.h"
#include "AkLateReverbComponentDetailsCustomization.h"
#include "AkComponent.h"
#include "AkLateReverbComponent.h"

#include "DetailLayoutBuilder.h"
#include "DetailCategoryBuilder.h"
#include "PropertyEditing.h"
#include "ScopedTransaction.h"
#include "IPropertyUtilities.h"
#include "Text/STextBlock.h"

#define LOCTEXT_NAMESPACE "AudiokineticTools"


//////////////////////////////////////////////////////////////////////////
// FAkLateReverbComponentDetailsCustomization

FAkLateReverbComponentDetailsCustomization::FAkLateReverbComponentDetailsCustomization()
{
}

TSharedRef<IDetailCustomization> FAkLateReverbComponentDetailsCustomization::MakeInstance()
{
	return MakeShareable(new FAkLateReverbComponentDetailsCustomization());
}

void FAkLateReverbComponentDetailsCustomization::CustomizeDetails(IDetailLayoutBuilder& DetailLayout)
{
	MyDetailLayout = &DetailLayout;
	TArray<TWeakObjectPtr<UObject>> ObjectsBeingCustomized;
	DetailLayout.GetObjectsBeingCustomized(ObjectsBeingCustomized);
	if (ObjectsBeingCustomized.Num() != 1)
	{
		return;
	}

	UAkLateReverbComponent* LateReverbBeingCustomized = Cast<UAkLateReverbComponent>(ObjectsBeingCustomized[0].Get());
	if (LateReverbBeingCustomized)
	{
		IDetailCategoryBuilder& ToggleDetailCategory = DetailLayout.EditCategory("Toggle");
		auto EnableHandle = DetailLayout.GetProperty("bEnable");
		EnableHandle->SetOnPropertyValueChanged(FSimpleDelegate::CreateSP(this, &FAkLateReverbComponentDetailsCustomization::OnEnableValueChanged));

		if (!LateReverbBeingCustomized->bEnable)
		{
			DetailLayout.HideCategory("LateReverb");
		}
	}
}

void FAkLateReverbComponentDetailsCustomization::OnEnableValueChanged()
{
	MyDetailLayout->ForceRefreshDetails();
}

//////////////////////////////////////////////////////////////////////////

#undef LOCTEXT_NAMESPACE
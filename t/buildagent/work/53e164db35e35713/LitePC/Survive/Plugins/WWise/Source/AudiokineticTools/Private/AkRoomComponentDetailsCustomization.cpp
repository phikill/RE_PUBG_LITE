// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.

#include "AudiokineticToolsPrivatePCH.h"
#include "AkRoomComponentDetailsCustomization.h"
#include "AkComponent.h"
#include "AkRoomComponent.h"
#include "DetailLayoutBuilder.h"
#include "DetailCategoryBuilder.h"
#include "PropertyEditing.h"
#include "ScopedTransaction.h"
#include "IPropertyUtilities.h"
#include "Text/STextBlock.h"

#define LOCTEXT_NAMESPACE "AudiokineticTools"


//////////////////////////////////////////////////////////////////////////
// FAkRoomComponentDetailsCustomization

FAkRoomComponentDetailsCustomization::FAkRoomComponentDetailsCustomization()
{
}

TSharedRef<IDetailCustomization> FAkRoomComponentDetailsCustomization::MakeInstance()
{
	return MakeShareable(new FAkRoomComponentDetailsCustomization());
}

void FAkRoomComponentDetailsCustomization::CustomizeDetails(IDetailLayoutBuilder& DetailLayout)
{
	MyDetailLayout = &DetailLayout;
	TArray<TWeakObjectPtr<UObject>> ObjectsBeingCustomized;
	DetailLayout.GetObjectsBeingCustomized(ObjectsBeingCustomized);
	if (ObjectsBeingCustomized.Num() != 1)
	{
		return;
	}

	UAkRoomComponent* RoomBeingCustomized = Cast<UAkRoomComponent>(ObjectsBeingCustomized[0].Get());
	if (RoomBeingCustomized)
	{
		IDetailCategoryBuilder& ToggleDetailCategory = DetailLayout.EditCategory("Toggle");
		auto EnableHandle = DetailLayout.GetProperty("bEnable");
		EnableHandle->SetOnPropertyValueChanged(FSimpleDelegate::CreateSP(this, &FAkRoomComponentDetailsCustomization::OnEnableValueChanged));

		if (!RoomBeingCustomized->bEnable)
		{
			DetailLayout.HideCategory("Room");
		}
	}
}

void FAkRoomComponentDetailsCustomization::OnEnableValueChanged()
{
	MyDetailLayout->ForceRefreshDetails();
}

//////////////////////////////////////////////////////////////////////////

#undef LOCTEXT_NAMESPACE
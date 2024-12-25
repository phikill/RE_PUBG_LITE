// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.

#include "AudiokineticToolsPrivatePCH.h"
#include "AkSurfaceReflectorSetComponent.h"
#include "AkSurfaceReflectorSetDetailsCustomization.h"
#include "AkComponent.h"
#include "DetailLayoutBuilder.h"
#include "DetailCategoryBuilder.h"
#include "PropertyEditing.h"
#include "ScopedTransaction.h"
#include "IPropertyUtilities.h"
#include "Text/STextBlock.h"
#include "Views/SExpanderArrow.h"
#include "GameFramework/Volume.h"
#include "Model.h"

#include "Builders/ConeBuilder.h"
#include "Builders/CubeBuilder.h"
#include "Builders/CurvedStairBuilder.h"
#include "Builders/CylinderBuilder.h"
#include "Builders/LinearStairBuilder.h"
#include "Builders/SpiralStairBuilder.h"
#include "Builders/TetrahedronBuilder.h"

#define LOCTEXT_NAMESPACE "AudiokineticTools"


//////////////////////////////////////////////////////////////////////////
// FAkSurfaceReflectorSetDetailsCustomization

FAkSurfaceReflectorSetDetailsCustomization::FAkSurfaceReflectorSetDetailsCustomization()
{
	ReflectorSetBeingCustomized = nullptr;
}

FAkSurfaceReflectorSetDetailsCustomization::~FAkSurfaceReflectorSetDetailsCustomization()
{
	if (ReflectorSetBeingCustomized && ReflectorSetBeingCustomized->IsValidLowLevelFast() && ReflectorSetBeingCustomized->GetOnRefreshDetails() )
	{
		if (ReflectorSetBeingCustomized->GetOnRefreshDetails()->IsBoundToObject(this))
		{
			ReflectorSetBeingCustomized->ClearOnRefreshDetails();
		}
		ReflectorSetBeingCustomized = nullptr;
	}
}


TSharedRef<IDetailCustomization> FAkSurfaceReflectorSetDetailsCustomization::MakeInstance()
{
	return MakeShareable(new FAkSurfaceReflectorSetDetailsCustomization());
}

void FAkSurfaceReflectorSetDetailsCustomization::CustomizeDetails(IDetailLayoutBuilder& DetailLayout)
{
	MyDetailLayout = &DetailLayout;
	TArray<TWeakObjectPtr<UObject>> ObjectsBeingCustomized;
	DetailLayout.GetObjectsBeingCustomized(ObjectsBeingCustomized);
	if (ObjectsBeingCustomized.Num() != 1)
	{
		return;
	}

	ReflectorSetBeingCustomized = Cast<UAkSurfaceReflectorSetComponent>(ObjectsBeingCustomized[0].Get());
	if (ReflectorSetBeingCustomized)
	{
		SetupGeometryModificationHandlers();

		IDetailCategoryBuilder& DetailCategory = DetailLayout.EditCategory("AcousticSurfaces");
		auto AcousticPolysPropHandle = DetailLayout.GetProperty("AcousticPolys");
		DetailLayout.HideProperty("AcousticPolys");
		DetailLayout.HideCategory("AkSurfaceReflectorSet");

		if (ReflectorSetBeingCustomized->bEnableSurfaceReflectors)
		{
			DetailCategory.AddCustomRow(LOCTEXT("AkHeader", "Header"))
				.WholeRowContent()
				[
					SNew(SHorizontalBox)
					+ SHorizontalBox::Slot()
					.FillWidth(0.05f)
					.VAlign(VAlign_Center)
					[
						SNew(SSpacer)
					]
					+ SHorizontalBox::Slot()
					.FillWidth(0.70f)
					.HAlign(HAlign_Center)
					[
						SNew(STextBlock)
						.Text(LOCTEXT("AkAcousticTexture", "Acoustic Texture"))
					]

					+ SHorizontalBox::Slot()
					.FillWidth(0.25f)
					.Padding(8.0f, 1.0f, 3.0f, 3.0f)
					.HAlign(HAlign_Center)
					[
						SNew(STextBlock)
						.Text(LOCTEXT("AkEnableSurface", "Enable Surface"))
					]
				];

			for (int i = 0; i < ReflectorSetBeingCustomized->AcousticPolys.Num(); i++)
			{
				auto CurrentAcousticPolyPropHandle = AcousticPolysPropHandle->AsArray()->GetElement(i);
				bool valid1 = CurrentAcousticPolyPropHandle->IsValidHandle();
				auto TexturePropertyHandle = CurrentAcousticPolyPropHandle->GetChildHandle("Texture");
				bool valid2 = TexturePropertyHandle->IsValidHandle();
				auto EnablePolyPropertyHandle = CurrentAcousticPolyPropHandle->GetChildHandle("EnableSurface");
				bool valid3 = EnablePolyPropertyHandle->IsValidHandle();
				DetailCategory.AddCustomRow(TexturePropertyHandle->GetPropertyDisplayName())
					.WholeRowContent()
					[
						SNew(SHorizontalBox)
						+ SHorizontalBox::Slot()
						.FillWidth(0.05f)
						.VAlign(VAlign_Center)
						[
							SNew(STextBlock)
							.Text(FText::AsNumber(i))
						]
						+ SHorizontalBox::Slot()
						.FillWidth(0.70f)
						[
							TexturePropertyHandle->CreatePropertyValueWidget()
						]

						+ SHorizontalBox::Slot()
						.FillWidth(0.25f)
						.Padding(8.0f, 1.0f, 3.0f, 1.0f)
						.HAlign(HAlign_Center)
						[
							EnablePolyPropertyHandle->CreatePropertyValueWidget()
						]
					];
			}
		}
	}
}

#define REGISTER_PROPERTY_CHANGED(Class, Property) \
	auto Property ## Handle = MyDetailLayout->GetProperty(GET_MEMBER_NAME_CHECKED(Class, Property), Class::StaticClass(), BrushBuilderName); \
	if (Property ## Handle->IsValidHandle()) Property ## Handle->SetOnPropertyValueChanged(FSimpleDelegate::CreateSP(this, &FAkSurfaceReflectorSetDetailsCustomization::OnGeometryChanged))

void FAkSurfaceReflectorSetDetailsCustomization::SetupGeometryModificationHandlers()
{
	static const FName BrushBuilderName(TEXT("BrushBuilder"));

	if(!ReflectorSetBeingCustomized->ParentBrush)
		return;

	auto EnableHandle = MyDetailLayout->GetProperty("bEnableSurfaceReflectors");
	EnableHandle->SetOnPropertyValueChanged(FSimpleDelegate::CreateSP(this, &FAkSurfaceReflectorSetDetailsCustomization::OnEnableValueChanged));

	// This is to detect if the BrushBuilder changed.
	if (ReflectorSetBeingCustomized->AcousticPolys.Num() != ReflectorSetBeingCustomized->ParentBrush->Nodes.Num())
		MyDetailLayout->GetPropertyUtilities()->EnqueueDeferredAction(FSimpleDelegate::CreateSP(this, &FAkSurfaceReflectorSetDetailsCustomization::OnEnableValueChanged));

	// Need to register to a LOT of different properties, because some change the geometry but don't force a refresh of the details panel
	AVolume* ParentVolume = Cast<AVolume>(ReflectorSetBeingCustomized->GetOwner());
	UClass* BrushBuilderClass = nullptr;
	if (ParentVolume && ParentVolume->BrushBuilder)
	{
		BrushBuilderClass = ParentVolume->BrushBuilder->GetClass();
		if (BrushBuilderClass == nullptr)
		{
			return;
		}
	}

	if (BrushBuilderClass == UConeBuilder::StaticClass())
	{
		REGISTER_PROPERTY_CHANGED(UConeBuilder, Sides);
		REGISTER_PROPERTY_CHANGED(UConeBuilder, Hollow);
	}
	else if (BrushBuilderClass == UCubeBuilder::StaticClass())
	{
		REGISTER_PROPERTY_CHANGED(UCubeBuilder, Hollow);
		REGISTER_PROPERTY_CHANGED(UCubeBuilder, Tessellated);
	}
	else if (BrushBuilderClass == UCurvedStairBuilder::StaticClass())
	{
		REGISTER_PROPERTY_CHANGED(UCurvedStairBuilder, NumSteps);
	}
	else if (BrushBuilderClass == UCylinderBuilder::StaticClass())
	{
		REGISTER_PROPERTY_CHANGED(UCylinderBuilder, Sides);
		REGISTER_PROPERTY_CHANGED(UCylinderBuilder, Hollow);
	}
	else if (BrushBuilderClass == ULinearStairBuilder::StaticClass())
	{
		REGISTER_PROPERTY_CHANGED(ULinearStairBuilder, NumSteps);
	}
	else if (BrushBuilderClass == USpiralStairBuilder::StaticClass())
	{
		REGISTER_PROPERTY_CHANGED(USpiralStairBuilder, NumSteps);
	}
	else if (BrushBuilderClass == UTetrahedronBuilder::StaticClass())
	{
		REGISTER_PROPERTY_CHANGED(UTetrahedronBuilder, SphereExtrapolation);
	}

	FOnRefreshDetails DetailsChanged = FOnRefreshDetails::CreateRaw(this, &FAkSurfaceReflectorSetDetailsCustomization::OnEnableValueChanged);
	ReflectorSetBeingCustomized->SetOnRefreshDetails(DetailsChanged);
}

void FAkSurfaceReflectorSetDetailsCustomization::OnEnableValueChanged()
{
	ReflectorSetBeingCustomized->ClearOnRefreshDetails();
	MyDetailLayout->ForceRefreshDetails();
}

void FAkSurfaceReflectorSetDetailsCustomization::OnGeometryChanged()
{
	ReflectorSetBeingCustomized->UpdatePolys();
	ReflectorSetBeingCustomized->ClearOnRefreshDetails();
}

//////////////////////////////////////////////////////////////////////////

#undef LOCTEXT_NAMESPACE
// Copyright Audiokinetic 2015

#pragma once
#include "AkAcousticTexture.h"
#include "Components/SceneComponent.h"
#include "Components/TextRenderComponent.h"
#include "AkSurfaceReflectorSetComponent.generated.h"

DECLARE_DELEGATE(FOnRefreshDetails);


USTRUCT(BlueprintType)
struct FAkPoly
{
	GENERATED_USTRUCT_BODY()
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Audiokinetic|AkSurfaceReflectorSet")
	UAkAcousticTexture* Texture = nullptr;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Audiokinetic|AkSurfaceReflectorSet")
	bool EnableSurface = true;
};

UCLASS(ClassGroup = Audiokinetic, BlueprintType, hidecategories = (Transform, Rendering, Mobility, LOD, Component, Activation, Tags), meta = (BlueprintSpawnableComponent))
class AKAUDIO_API UAkSurfaceReflectorSetComponent : public USceneComponent
{
	GENERATED_UCLASS_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Audiokinetic|AkSurfaceReflectorSet")
	void SendSurfaceReflectorSet();

	UFUNCTION(BlueprintCallable, Category = "Audiokinetic|AkSurfaceReflectorSet")
	void RemoveSurfaceReflectorSet();

	UFUNCTION(BlueprintCallable, Category = "Audiokinetic|AkSurfaceReflectorSet")
	void UpdateSurfaceReflectorSet();

	/** Whether this volume is currently enabled and able to affect sounds */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Toggle)
	uint32 bEnableSurfaceReflectors : 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category ="AkSurfaceReflectorSet|AcousticSurfaces")
	TArray<FAkPoly> AcousticPolys;

	UModel* ParentBrush;

#if WITH_EDITORONLY_DATA
	UPROPERTY()
	TArray<UTextRenderComponent*> TextVisualizers;
	
	FText GetPolyText(int32 PolyIdx) const;

	void SetOnRefreshDetails(const FOnRefreshDetails& OnRefreshDetailsDelegate) { OnRefreshDetails = OnRefreshDetailsDelegate; }
	void ClearOnRefreshDetails() { OnRefreshDetails.Unbind(); }
	const FOnRefreshDetails* GetOnRefreshDetails() { return &OnRefreshDetails; }
#endif

#if WITH_EDITOR
	/**
	* Check for errors
	*/
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
	virtual void PostEditUndo() override;
	virtual void TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction *ThisTickFunction);

	void UpdatePolys();
	void UpdateText(bool Visible);
	void DestroyTextVisualizers();

	bool WasSelected;
#endif

	virtual void BeginPlay() override;
	virtual void PostLoad() override;
	virtual void OnRegister() override;
	virtual void OnUnregister() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
	virtual void OnUpdateTransform(EUpdateTransformFlags UpdateTransformFlags, ETeleportType Teleport) override;
	
private:
	inline bool ShouldSendGeometry() const;
	void InitializeParentBrush();

	bool GeometryHasBeenSent = false;

#if WITH_EDITORONLY_DATA
	FOnRefreshDetails OnRefreshDetails;
#endif
};

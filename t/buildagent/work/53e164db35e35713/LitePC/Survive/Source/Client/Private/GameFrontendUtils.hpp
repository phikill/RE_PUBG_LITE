

// Class Client.GameFrontendUtils
// //Class Client.GameFrontendUtils
//0x0000 (0x0380 - 0x0380)
class UGameFrontendUtils : public UFrontendUtils
{
public:

	// Function UnrealArchExt.FrontendUtils.SwitchSceneCameraToTransform
	// (Final, Native, Public, HasDefaults, BlueprintCallable)
	void SwitchSceneCameraToTransform(const struct FTransform& targetTransTEnumAsByte<ECameraProjectionMode> ProjectionModefloat FOVfloat BlendTimeunsigned char bForce);// sub_11ECED0()

	// Function UnrealArchExt.FrontendUtils.SwitchSceneCamera
	// (Final, Native, Public, BlueprintCallable)
	void SwitchSceneCamera(const struct FName& SceneCameraNamefloat BlendTimeunsigned char bForce);// sub_11ECDC0()

	// Function UnrealArchExt.FrontendUtils.SetScenePointLightProperty
	// (Final, Native, Public, HasDefaults, BlueprintCallable)
	void SetScenePointLightProperty(const struct FName& sceneLightNameconst struct FTransform& targetTransfloat Intensityconst struct FLinearColor& Colorint inverseSquareFallofffloat Radius);// sub_11ECA70()

	// Function UnrealArchExt.FrontendUtils.SetSceneDirectionalLightProperty
	// (Final, Native, Public, HasDefaults, BlueprintCallable)
	void SetSceneDirectionalLightProperty(const struct FName& sceneLightNameconst struct FTransform& targetTransfloat Intensityconst struct FLinearColor& Colorconst struct FLightingChannels& Channel);// sub_11EC880()

	// Function UnrealArchExt.FrontendUtils.RegisterScenePointLight
	// (Final, Native, Public, BlueprintCallable)
	void RegisterScenePointLight(const struct FName& sceneLightNameclass APointLight* Light);// sub_11EC7C0()

	// Function UnrealArchExt.FrontendUtils.RegisterSceneDirectionalLight
	// (Final, Native, Public, BlueprintCallable)
	void RegisterSceneDirectionalLight(const struct FName& sceneLightNameclass ADirectionalLight* Light);// sub_11EC700()

	// Function UnrealArchExt.FrontendUtils.RegisterSceneCamera
	// (Final, Native, Public, BlueprintCallable)
	void RegisterSceneCamera(const struct FName& SceneCameraNameclass ACameraActor* SceneCamera);// sub_11EC640()

	// Function UnrealArchExt.FrontendUtils.OnAllSceneCamerasRegistered
	// (Native, Public, BlueprintCallable)
	void OnAllSceneCamerasRegistered();// sub_316F20()

	// Function UnrealArchExt.FrontendUtils.GlobalUIEventDispatcher_GetDelegateIsBound
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	unsigned char GlobalUIEventDispatcher_GetDelegateIsBound(const struct FString& DelegateNum);// sub_11EC4B0()

	// Function UnrealArchExt.FrontendUtils.GetOwningFrontendHUD
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	class UFrontendHUD* GetOwningFrontendHUD();// sub_11EC3F0()

	// Function UnrealArchExt.FrontendUtils.GetGlobalUIEventDispatcher
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	class UObject* GetGlobalUIEventDispatcher();// sub_11EC2A0()

	// Function UnrealArchExt.FrontendUtils.GetGlobalUIContainer
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	class UUAEWidgetContainer* GetGlobalUIContainer(const struct FName& ContainerName);// sub_11EC210()


}



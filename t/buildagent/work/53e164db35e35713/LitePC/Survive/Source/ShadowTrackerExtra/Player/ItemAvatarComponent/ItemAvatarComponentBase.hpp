

// Class ShadowTrackerExtra.ItemAvatarComponentBase
// //Class ShadowTrackerExtra.ItemAvatarComponentBase
//0x0140 (0x0248 - 0x0108)
class UItemAvatarComponentBase : public UActorComponent
{
public:
	struct FItemDefineID                               DefaultCfg;                                               // 0x0108(0x0018) (Edit, BlueprintVisible)
	class UMeshComponent*                              ItemBodyMesh;                                             // 0x0120(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FItemDefineID                               synData;                                                  // 0x0128(0x0018) (Net, Transient)
	class USkeletalMesh*                               OriginSkeletalMesh;                                       // 0x0140(0x0008) (ZeroConstructor, IsPlainOldData)
	class UStaticMesh*                                 OriginStaticMesh;                                         // 0x0148(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<class UMaterialInterface*>                  OriginMaterials;                                          // 0x0150(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0xD0];                                      // 0x0160(0x00D0) MISSED OFFSET
	class UBackpackCommonAvatarHandle*                 ItemAvatarHandle;                                         // 0x0230(0x0008) (ZeroConstructor, IsPlainOldData)
	class UBackpackCommonAvatarHandle*                 DefaultItemAvatarHandle;                                  // 0x0238(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                ItemType;                                                 // 0x0240(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0244(0x0004) MISSED OFFSET

	// Function ShadowTrackerExtra.ItemAvatarComponentBase.PreChangeItemAvatar
	// (Native, Public, BlueprintCallable)
	void PreChangeItemAvatar(int InItemID);// sub_F8C310()

	// Function ShadowTrackerExtra.ItemAvatarComponentBase.OnRep_ItemAvatarChanged
	// (Final, Native, Public)
	void OnRep_ItemAvatarChanged();// sub_F8C0D0()

	// Function ShadowTrackerExtra.ItemAvatarComponentBase.IsValidAvatar
	// (Final, Native, Public, BlueprintCallable)
	unsigned char IsValidAvatar();// sub_F8BE80()

	// Function ShadowTrackerExtra.ItemAvatarComponentBase.GetSoftRefObj
	// (Final, Native, Protected, HasOutParms, HasDefaults)
	class UObject* GetSoftRefObj(struct FSoftObjectPath* AssetRef);// sub_F8BD90()

	// Function ShadowTrackerExtra.ItemAvatarComponentBase.GetDynamicMaterial
	// (Final, Native, Public, BlueprintCallable)
	class UMaterialInterface* GetDynamicMaterial(class UMaterialInstance* MatInstance);// sub_F8BAA0()

	// Function ShadowTrackerExtra.ItemAvatarComponentBase.ChangeItemAvatar
	// (Final, Native, Public, BlueprintCallable)
	void ChangeItemAvatar(int InItemID);// sub_F8B980()

	// Function ShadowTrackerExtra.ItemAvatarComponentBase.ApplyMesh
	// (Native, Public)
	unsigned char ApplyMesh(class UMeshComponent* meshCompclass USkeletalMesh* SkeletalMeshclass UStaticMesh* StaticMesh);// sub_F8B870()

	// Function ShadowTrackerExtra.ItemAvatarComponentBase.ApplyMaterial
	// (Native, Public, HasOutParms)
	unsigned char ApplyMaterial(class UMeshComponent* meshCompTArray<struct FItemAvatarMatPath> AvatarMatArray);// sub_F8B750()


}


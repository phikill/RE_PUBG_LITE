

// Class ShadowTrackerExtra.BackpackWeaponHandle
// //Class ShadowTrackerExtra.BackpackWeaponHandle
//0x0148 (0x0210 - 0x00C8)
class UBackpackWeaponHandle : public UBattleItemHandleBase
{
public:
	class UBackpackComponent*                          BackpackComp;                                             // 0x00C8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FWeaponMeshCfg                              MeshPackage;                                              // 0x00D0(0x00B0) (Edit, DisableEditOnInstance)
	class UAnimInstance*                               animBP;                                                   // 0x0180(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TMap<struct FItemDefineID, struct FItemDefineID>   AttachmentAvatarList;                                     // 0x0188(0x0050) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FItemDefineID>                       DefaultAvatarList;                                        // 0x01D8(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FItemDefineID                               ParentID;                                                 // 0x01E8(0x0018) (Edit, DisableEditOnInstance)
	class ASTExtraWeapon*                              LobbyWeapon;                                              // 0x0200(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FWeaponKillEffectCfg                        KillEffect;                                               // 0x0208(0x0008) (Edit, DisableEditOnInstance)

}


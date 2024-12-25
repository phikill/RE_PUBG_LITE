

// ScriptStruct Gameplay.PlayerAnimList
// 0x00F0
struct FPlayerAnimList
{
	struct FPlayerAnimData                             MovementAnim;                                             // 0x0000(0x0010) (Edit, BlueprintVisible)
	struct FPlayerAnimData                             AimAnim;                                                  // 0x0010(0x0010) (Edit, BlueprintVisible)
	struct FPlayerAnimData                             ReloadAnim;                                               // 0x0020(0x0010) (Edit, BlueprintVisible)
	struct FPlayerAnimData                             EquipWeaponAnim;                                          // 0x0030(0x0010) (Edit, BlueprintVisible)
	struct FPlayerAnimData                             ChangePoseAnim;                                           // 0x0040(0x0010) (Edit, BlueprintVisible)
	struct FPlayerAnimData                             PickUpAnim;                                               // 0x0050(0x0010) (Edit, BlueprintVisible)
	struct FPlayerAnimData                             FireAnim;                                                 // 0x0060(0x0010) (Edit, BlueprintVisible)
	struct FPlayerAnimData                             HurtAnim;                                                 // 0x0070(0x0010) (Edit, BlueprintVisible)
	struct FPlayerAnimData                             TurnAnim;                                                 // 0x0080(0x0010) (Edit, BlueprintVisible)
	struct FPlayerAnimData                             PullingPlugAnim;                                          // 0x0090(0x0010) (Edit, BlueprintVisible)
	struct FPlayerAnimData                             PutDownWeaponAnim;                                        // 0x00A0(0x0010) (Edit, BlueprintVisible)
	struct FPlayerAnimData                             WeaponIdle;                                               // 0x00B0(0x0010) (Edit, BlueprintVisible)
	struct FPlayerAnimData                             ForegripAnim;                                             // 0x00C0(0x0010) (Edit, BlueprintVisible)
	TArray<struct FPlayerAnimData>                     JumpAnimList;                                             // 0x00D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FPlayerAnimData>                     ExtraAnimList;                                            // 0x00E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};


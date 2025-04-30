#pragma once

// Name: LitePC_0701, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// ScriptBlueprintGeneratedClass bp_armory.bp_armory_C
// 0x01C8 (0x0558 - 0x0390)
class Abp_armory_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<struct FBP_STRUCT_ShortHand>                BP_ARRAY_CurrentShortHandEquip;                           // 0x0398(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_Current_WeaponType;                                    // 0x03A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FBP_STRUCT_ShortHand_Menu                   BP_STRUCT_ShortHand_Menu;                                 // 0x03AC(0x0008) (Edit, BlueprintVisible)
	int                                                BP_Armory_Isopen;                                         // 0x03B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FBP_STRUCT_WeaponAttr                       BP_STRUCT_WeaponAttr;                                     // 0x03B8(0x0028) (Edit, BlueprintVisible)
	TArray<struct FBP_STRUCT_Weapon_SecMenu>           BP_ARRAY_Weapon_SecMenuData;                              // 0x03E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FBP_STRUCT_Weapon_FirstMenu>         BP_ARRAY_Weapon_FirstMenuData;                            // 0x03F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FBP_STRUCT_WeaponAttr>               BP_ARRAY_WeaponAttrData;                                  // 0x0400(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_Current_ShortHandType;                                 // 0x0410(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0414(0x0004) MISSED OFFSET
	struct FBP_STRUCT_WeaponDetailInfo                 BP_STRUCT_WeaponDetailInfo;                               // 0x0418(0x0060) (Edit, BlueprintVisible)
	struct FBP_STRUCT_Weapon_FirstMenu                 BP_STRUCT_Weapon_FirstMenu;                               // 0x0478(0x0028) (Edit, BlueprintVisible)
	TArray<struct FBP_STRUCT_ShortHand>                BP_ARRAY_ShortHandData;                                   // 0x04A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_Current_WeaponID;                                      // 0x04B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_Current_ShortHandID;                                   // 0x04B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FBP_STRUCT_Weapon_SecMenu                   BP_STRUCT_Weapon_SecMenu;                                 // 0x04B8(0x0048) (Edit, BlueprintVisible)
	TArray<struct FBP_STRUCT_ShortHand_Menu>           BP_ARRAY_ShortHand_MenuData;                              // 0x0500(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_ShortHand                        BP_STRUCT_ShortHand;                                      // 0x0510(0x0040) (Edit, BlueprintVisible)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0550(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("ScriptBlueprintGeneratedClass bp_armory.bp_armory_C");
		return ptr;
	}


	void EventclickArmoryShortHandItem_NoFetch();
	void EventclickArmoryShortHandItem();
	void EventclickClearAllEquipment_NoFetch();
	void EventclickClearAllEquipment();
	void EventClickArmoryFirstMenu_NoFetch();
	void EventClickArmoryFirstMenu();
	void EventTestShowWeapon2_NoFetch();
	void EventTestShowWeapon2();
	void EventArmoryOpenArmoryMainUIEnter_NoFetch();
	void EventArmoryOpenArmoryMainUIEnter();
	void EventTestPutoffEquipment_NoFetch();
	void EventTestPutoffEquipment();
	void EventTestShowWeapon3_NoFetch();
	void EventTestShowWeapon3();
	void EventclickArmoryShorHandMenu_NoFetch();
	void EventclickArmoryShorHandMenu();
	void EventClickArmorySecMenu_NoFetch();
	void EventClickArmorySecMenu();
	void EventTestShowWeapon_NoFetch();
	void EventTestShowWeapon();
	void EventArmoryCloseArmoryMainUI_NoFetch();
	void EventArmoryCloseArmoryMainUI();
	void EventArmoryCloseArmoryMainUIEnter_NoFetch();
	void EventArmoryCloseArmoryMainUIEnter();
	void EventTestPutonEquipment_NoFetch();
	void EventTestPutonEquipment();
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

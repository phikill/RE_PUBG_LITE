#pragma once

// Name: LitePC_0701, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct BP_STRUCT_Item_type.BP_STRUCT_Item_type
// 0x0208
struct FBP_STRUCT_Item_type
{
	struct FString                                     ItemBigIcon_0_733663734EEB8DD5D7FF41A6E96480D4;           // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                MaxCount_1_D5BF33434E37E75739D213989C4FA372;              // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BPID_2_F73A5EF243D620CE49BBCAA8832C6AF9;                  // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ItemType_3_4CBCE77A4D2A20BEBD861AADEF3B616B;              // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               AutoEquipAndDrop_4_144B885646B92B9836CE33923842AB1E;      // 0x001C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
	int                                                ItemID_5_29F7B64741688A0A853FD281FAE4E28D;                // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Consumable_7_B08070BD407AD029B7CDA7BDB341A342;            // 0x0024(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0025(0x0003) MISSED OFFSET
	struct FText                                       ItemDesc_48_8ED919494479E8A62F11DBB9C7AD0F9A;             // 0x0028(0x0018) (Edit, BlueprintVisible)
	struct FString                                     ItemSmallIcon_9_B13D206C4A153C963FCE478A1B39C15F;         // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FText                                       ItemName_49_B257B36A422BB69651454E90EBC1323B;             // 0x0050(0x0018) (Edit, BlueprintVisible)
	struct FText                                       WardrobeTab_52_6562B47746AECB0B5C84BC9C96EACD9D;          // 0x0068(0x0018) (Edit, BlueprintVisible)
	int                                                ItemSubType_12_087F026E41DAB82F567758A4F56D72CF;          // 0x0080(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Equippable_13_BB222DC04DCB195FCB3F29B89EA210CA;           // 0x0084(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0085(0x0003) MISSED OFFSET
	float                                              UnitWeight_f_14_725EBB604F31443B93AF3597580ECAE4;         // 0x0088(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x008C(0x0004) MISSED OFFSET
	struct FString                                     ItemWhiteIcon_15_AA35FD8045790AA9F73F58829F202B94;        // 0x0090(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                ItemQuality_16_3EF7461D45D14FC186EB3DBB70D01484;          // 0x00A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                SellTokenType_17_B410373F45F6C04F12302FB860FB46DC;        // 0x00A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                SellPrice_18_12D0424A4E19AC2E29A301AB474CBFD8;            // 0x00A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x00AC(0x0004) MISSED OFFSET
	struct FString                                     PickUpSound_19_F461798D4A675E4E4E06DEBE9F1963B5;          // 0x00B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     UnEquipSound_20_503E4B5E4A5AB2AB8963A6AA19E9825A;         // 0x00C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     DropSound_21_6E25AFC0488F75E1AAAC208592F12715;            // 0x00D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     EquipSound_22_79C641814F4E53EB042738A286828E88;           // 0x00E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     UnEquipBank_23_F80BB1DA4DBEBC139ADD438FE7B3FB5C;          // 0x00F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     EquipBank_24_3AE3FFCC489EE53096363DB5965FAA7B;            // 0x0100(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     DropBank_25_C61E40874E82D5E55947C1AC3066F8A7;             // 0x0110(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     PickUpBank_26_4599D8304AA9F863D5CBB5BA603189F8;           // 0x0120(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     KillWhiteIcon_27_16289384496FF361F9005580DEF9CAD1;        // 0x0130(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               NeedShare_28_D9C0818D40A3C6AB07231BABA5477060;            // 0x0140(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0141(0x0003) MISSED OFFSET
	int                                                WeightforOrder_29_4373EFCD4D78E7DF4067FF9D3E213664;       // 0x0144(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     Preview_32_1997D4634D3D3F8CC7360283D2AF4E6C;              // 0x0148(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     ExTime_33_8299B7454C71BC6A899937AF00BFF0C5;               // 0x0158(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     JumpUrl_34_A5DE7C2C406E2C16620017929DDEEA4F;              // 0x0168(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                SourceBookEnable_35_80A540DA4CF5C9DEE5E79E9668E6511C;     // 0x0178(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x017C(0x0004) MISSED OFFSET
	struct FText                                       PickupDesc_50_D5D621864C55ED8C6ABE728B6F002D4E;           // 0x0180(0x0018) (Edit, BlueprintVisible)
	int                                                WardrobeMainTab_38_D234FCBE4A19AAF3066394AD7C7D98DF;      // 0x0198(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Durability_40_B27087B844712FA0144E98A98C4629B5;           // 0x019C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsBatchUse_42_314363B5483534A3A1693FAF3D25CE24;           // 0x01A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x7];                                       // 0x01A1(0x0007) MISSED OFFSET
	struct FString                                     JumpExchangeUrl_43_CFA0461741852B7F7A646C867014D798;      // 0x01A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                LongDescID_44_4E8350406652C05F7794F90804562904;           // 0x01B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                AIFullVaule_45_6A3A6FC023E58D4B4FDDDF270E81E075;          // 0x01BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     ArmorySimpleDesc_46_27A16200667F9D5C22753FAB004E0C93;     // 0x01C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FText                                       ArmoryDesc_51_5ADDC7800942285E5EA7A0880964AD23;           // 0x01D0(0x0018) (Edit, BlueprintVisible)
	struct FString                                     Category_55_3C7AB1D040BB35AAF369ED87A26F20FC;             // 0x01E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     SubCategory_57_90BF820243731F5207CB74AC95DD66B2;          // 0x01F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

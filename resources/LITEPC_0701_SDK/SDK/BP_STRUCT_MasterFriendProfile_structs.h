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

// UserDefinedStruct BP_STRUCT_MasterFriendProfile.BP_STRUCT_MasterFriendProfile
// 0x01AC
struct FBP_STRUCT_MasterFriendProfile
{
	int                                                segment_info_solo_0_1F7B21134D650E9B9ED7D7A4C7183AD8;     // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                endtime_1_6BFBBFE445616BD1E074E392D4E2232D;               // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                teamId_2_1F7EB18F482AA13D1961759839E2E4C0;                // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                online_3_AD4397574B1A87932812EDA49732BA10;                // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                vipLevel_4_562948624BB007F794F9589813EC09F9;              // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                total_5_7D3C70AC40B62C1657E33BA675DD4AED;                 // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     nickName_6_47C0AE514DD772918DFB83900BE1F885;              // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                maxTeamAmount_7_C2A3CA4A497FFA64AD0604840710F375;         // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	struct FString                                     remarks_name_8_0F0006484090AB8B3E34E8908D9FEAFC;          // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     modeStr_9_359FADA24CB941E87A978892C80A0A13;               // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                segment_info_duo_10_F9F04F734C02FB5C334A70BC1F9EBCB4;     // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
	struct FString                                     platName_11_AA5C65F64AE963129DA61A9F104B739D;             // 0x0058(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                timeSinceGameBegin_12_E11BA26C4426E39B86CC019E9F2EE50A;   // 0x0068(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                relation_13_260ED0834A2671A3A66970862F99A9C6;             // 0x006C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                bXiaoYue_14_F4321068474AA81A934A6F912E4DB3BE;             // 0x0070(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                showInviteIcon_15_3B09E0774ABBB1B3E80ABD899F8ECC01;       // 0x0074(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                lastInviteTime_16_746B54444A99DAC81DD046A2B8956911;       // 0x0078(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               isInnerFriendNotPlatFriend_17_9F4AA1CF4D5436084EC9CEAAD8EB234B;// 0x007C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x007D(0x0003) MISSED OFFSET
	int                                                expertArea_2_18_D278D2294F17F955887B6E939F920E6F;         // 0x0080(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                expertArea_1_19_9372FC5F4C1BECB5B7F481B3D669F2BC;         // 0x0084(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                rank_20_1FBB1A8B4535751FC94CAFA5F51B05B4;                 // 0x0088(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               isFriend_21_2DE307094FCD14064ECECB88DF68D7BA;             // 0x008C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x008D(0x0003) MISSED OFFSET
	struct FString                                     applyMsg_22_B2FC3E914FB87D89E8DB2B9D1C46C80C;             // 0x0090(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                playDate_23_8ED6A6DD4F53E34A83AE7B84D3FAA618;             // 0x00A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                qq_vip_24_358D7C174406EC94B84238A5B5A41CDB;               // 0x00A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                level_25_F413C3ED486A91A1A2874398D06A7E82;                // 0x00A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x00AC(0x0004) MISSED OFFSET
	struct FString                                     militaryRank_26_777F73CE489AA759219FCDAEA21ED87B;         // 0x00B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                lastLoginTime_27_022130EA41812501C5A6BA86E2CAB7D5;        // 0x00C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                intimacy_28_4513CEFD4A5963BA7BBA4B8EEB066E4F;             // 0x00C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                kill_29_F9D4950F4B25267E2DA76798B7011826;                 // 0x00C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                createTime_30_740C725744004FD368DFE18D736D2938;           // 0x00CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                mode_31_4D08333A48554B58DC1B67ABABBDEBB7;                 // 0x00D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                playTime_32_AA6E2E8B4CDF98671D2F61903C158CDB;             // 0x00D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                distance_33_4ECAD2644B6B80418643189D6061DD22;             // 0x00D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x00DC(0x0004) MISSED OFFSET
	struct FString                                     lastOnlineTimeStr_34_D564995049FB0B8FBF0EFFB7D41B4C03;    // 0x00E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                ladder_35_2929888B43678736A97D5182463E425F;               // 0x00F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x00F4(0x0004) MISSED OFFSET
	struct FString                                     timeSinceGameBeginStr_36_F055B8D746D09004D02BD3A3EB45C5B3;// 0x00F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                bNewMessage_37_D95524844CAB6508507E1A99FDA7304E;          // 0x0108(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x010C(0x0004) MISSED OFFSET
	struct FString                                     picUrl_38_EE9200344C1ADF8F6C3C759E936C50FB;               // 0x0110(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     gid_39_A4E5F0CE4E2AE27055B14EA566792DDC;                  // 0x0120(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                segment_info_squad_40_1FDCADB24F09586DDD49B686EBE50CF3;   // 0x0130(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                bPresentedCoin_41_41DBBE4244C0DBC7D8771BB9FF7055D3;       // 0x0134(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                lastPresentCoinTime_42_BC4F3B8D4AED57A8650240B03CA04E71;  // 0x0138(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                cur_avatar_box_id_43_7731EFF248D9C67CB436499A98A48922;    // 0x013C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     signature_44_A1D791BC42634274648E2D9978FE9E8F;            // 0x0140(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                tendency_45_57C63A204BA057C1AB4D53981F148001;             // 0x0150(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                friendType_46_8011C3D84CDDE822805CAAAE545C6A44;           // 0x0154(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                currentTeamAmount_47_A6833E1F475C77DF5F4B4AB9022F96DB;    // 0x0158(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                teamState_48_525B5D0D41D5BEEE5F750B98D904D94A;            // 0x015C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     score_49_9DB1495640A690BE0D663AB93C9E52C3;                // 0x0160(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                cityId_50_18C118024E99388009D4598113988BEB;               // 0x0170(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                exp_51_719281344E27385D4F746EB2D7CBAFE7;                  // 0x0174(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     createTimeStr_52_B49308C44D0C5F5C7F63A4A23A9D0C23;        // 0x0178(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                lastOnlineTime_53_C501892843DE0906B7344B8B1B95F771;       // 0x0188(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x4];                                       // 0x018C(0x0004) MISSED OFFSET
	struct FString                                     endtimeStr_54_7EA77F5F444FBCCA8725BDAB6E16C075;           // 0x0190(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                startup_type_55_25BA118D4C2858B8B29A8B85D418E5DB;         // 0x01A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                sex_56_C719673743A42892C67DEBBD06A46EFF;                  // 0x01A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                history_max_segment_level_57_D1E934AA4F58E2B8DD74919EB8ED0A8C;// 0x01A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

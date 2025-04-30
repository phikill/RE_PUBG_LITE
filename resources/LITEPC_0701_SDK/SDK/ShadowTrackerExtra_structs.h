#pragma once

// Name: LitePC_0701, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Enums
//---------------------------------------------------------------------------

// Enum ShadowTrackerExtra.EFreshWeaponStateType
enum class EFreshWeaponStateType : uint8_t
{
	FreshWeaponStateType_None      = 0,
	FreshWeaponStateType_Inactive  = 1,
	FreshWeaponStateType_Idle      = 2,
	FreshWeaponStateType_IdleToBackpack = 3,
	FreshWeaponStateType_Backpack  = 4,
	FreshWeaponStateType_BackpackToIdle = 5,
	FreshWeaponStateType_Fire      = 6,
	FreshWeaponStateType_Reload    = 7,
	FreshWeaponStateType_NoBullet  = 8,
	FreshWeaponStateType_PreFire   = 9,
	FreshWeaponStateType_PostFire  = 10,
	FreshWeaponStateType_MAX       = 11
};


// Enum ShadowTrackerExtra.EWeaponComponentType
enum class EWeaponComponentType : uint8_t
{
	WCT_None                       = 0,
	WCT_Scope                      = 1,
	WCT_Max                        = 2
};


// Enum ShadowTrackerExtra.ESurvivePickUpGlobalCategory
enum class ESurvivePickUpGlobalCategory : uint8_t
{
	SurvivePickUpItemGlobalCategory_None = 0,
	SurvivePickUpItemGlobalCategory_Weapon = 1,
	SurvivePickUpItemGlobalCategory_PlayerEquipment = 2,
	SurvivePickUpItemGlobalCategory_WeaponComponent = 3,
	SurvivePickUpItemGlobalCategory_ConsumeItem = 4,
	SurvivePickUpItemGlobalCategory_MAX = 5
};


// Enum ShadowTrackerExtra.EWeaponAction
enum class EWeaponAction : uint8_t
{
	WA_None                        = 0,
	WA_EquipWeapon                 = 1,
	WA_UnEquipWeapon               = 2,
	WA_Shoot                       = 3,
	WA_IdleToNoneIdle              = 4,
	WA_NoneShoot                   = 5,
	WA_Reload                      = 6,
	WA_AutoShoot                   = 7,
	WA_MAX                         = 8
};


// Enum ShadowTrackerExtra.EWeaponState
enum class EWeaponState : uint8_t
{
	WS_Unavailable                 = 0,
	WS_UnEquiped                   = 1,
	WS_Equiped                     = 2,
	WS_MAX                         = 3
};


// Enum ShadowTrackerExtra.EGunFireMode
enum class EGunFireMode : uint8_t
{
	EGunFireMode__OneBulletBursting = 0,
	EGunFireMode__MultiBulletsBursting = 1,
	EGunFireMode__Auto             = 2,
	EGunFireMode__None             = 3,
	EGunFireMode__EGunFireMode_MAX = 4
};


// Enum ShadowTrackerExtra.EAvatarSlotType
enum class EAvatarSlotType : uint8_t
{
	EAvatarSlotType__EAvatarSlotType_NONE = 0,
	EAvatarSlotType__EAvatarSlotType_HeadEquipemtSlot = 1,
	EAvatarSlotType__EAvatarSlotType_HairEquipemtSlot = 2,
	EAvatarSlotType__EAvatarSlotType_HatEquipemtSlot = 3,
	EAvatarSlotType__EAvatarSlotType_FaceEquipemtSlot = 4,
	EAvatarSlotType__EAvatarSlotType_ClothesEquipemtSlot = 5,
	EAvatarSlotType__EAvatarSlotType_PantsEquipemtSlot = 6,
	EAvatarSlotType__EAvatarSlotType_ShoesEquipemtSlot = 7,
	EAvatarSlotType__EAvatarSlotType_BackpackEquipemtSlot = 8,
	EAvatarSlotType__EAvatarSlotType_HelmetEquipemtSlot = 9,
	EAvatarSlotType__EAvatarSlotType_ArmorEquipemtSlot = 10,
	EAvatarSlotType__EAvatarSlotType_ParachuteEquipemtSlot = 11,
	EAvatarSlotType__EAvatarSlotType_MAX = 12
};


// Enum ShadowTrackerExtra.EMeshType
enum class EMeshType : uint8_t
{
	EMeshType__Skeletal            = 0,
	EMeshType__Static              = 1,
	EMeshType__SkeletalWithSocket  = 2,
	EMeshType__EMeshType_MAX       = 3
};


// Enum ShadowTrackerExtra.EAvatarSubSlot
enum class EAvatarSubSlot : uint8_t
{
	EAvatarSubSlot__ESubSlot_None  = 0,
	EAvatarSubSlot__ESubSlot_VeilSlot = 1,
	EAvatarSubSlot__ESubSlot_HoodSlot = 2,
	EAvatarSubSlot__ESubSlot_StockingSlot = 3,
	EAvatarSubSlot__ESubSlot_BootsSlot = 4,
	EAvatarSubSlot__ESubSlot_MAX   = 5
};


// Enum ShadowTrackerExtra.EWeaponAttachmentSocketType
enum class EWeaponAttachmentSocketType : uint8_t
{
	EWeaponAttachmentSocketType__GunPoint = 0,
	EWeaponAttachmentSocketType__Grip = 1,
	EWeaponAttachmentSocketType__Magazine = 2,
	EWeaponAttachmentSocketType__Gunstock = 3,
	EWeaponAttachmentSocketType__OpticalSight = 4,
	EWeaponAttachmentSocketType__EWeaponAttachmentSocketType_MAX = 5
};


// Enum ShadowTrackerExtra.ESyncOperation
enum class ESyncOperation : uint8_t
{
	ESyncOperation__PutOn          = 0,
	ESyncOperation__PutOff         = 1,
	ESyncOperation__ApplyHead      = 2,
	ESyncOperation__ESyncOperation_MAX = 3
};


// Enum ShadowTrackerExtra.EOpticalSightType
enum class EOpticalSightType : uint8_t
{
	EOpticalSightType__NoneSight   = 0,
	EOpticalSightType__UpperLarge  = 1,
	EOpticalSightType__UpperSmall  = 2,
	EOpticalSightType__EOpticalSightType_MAX = 3
};


// Enum ShadowTrackerExtra.EWeaponReloadMethod
enum class EWeaponReloadMethod : uint8_t
{
	All                            = 0,
	Tactical                       = 1,
	EWeaponReloadMethod_MAX        = 2
};


// Enum ShadowTrackerExtra.ESightType
enum class ESightType : uint8_t
{
	SightX1                        = 0,
	SightX2                        = 1,
	SightX4                        = 2,
	SightX8                        = 3,
	SightDefault                   = 4,
	ESightType_MAX                 = 5
};


// Enum ShadowTrackerExtra.EWeaponReloadType
enum class EWeaponReloadType : uint8_t
{
	Magzine                        = 0,
	OneByOne                       = 1,
	OneByOneAndClip                = 2,
	EWeaponReloadType_MAX          = 3
};


// Enum ShadowTrackerExtra.EWeaponAttachmentSlotID
enum class EWeaponAttachmentSlotID : uint8_t
{
	EWeaponAttachmentSlotID__None  = 0,
	EWeaponAttachmentSlotID__Muzzle = 1,
	EWeaponAttachmentSlotID__LowerRail = 2,
	EWeaponAttachmentSlotID__UpperRail_Scope = 3,
	EWeaponAttachmentSlotID__Magazine = 4,
	EWeaponAttachmentSlotID__Stock = 5,
	EWeaponAttachmentSlotID__EWeaponAttachmentSlotID_MAX = 6
};


// Enum ShadowTrackerExtra.EShootWeaponState
enum class EShootWeaponState : uint8_t
{
	SWS_Idle                       = 0,
	SWS_NoneIdle                   = 1,
	SWS_Shooting                   = 2,
	SWS_Reloading                  = 3,
	SWS_ReloadDone                 = 4,
	SWS_MAX                        = 5
};


// Enum ShadowTrackerExtra.EShootWeaponShootMode
enum class EShootWeaponShootMode : uint8_t
{
	SWST_MuzzleDirection           = 0,
	SWST_TargetDirection           = 1,
	SWST_TraceTarget               = 2,
	SWST_MAX                       = 3
};


// Enum ShadowTrackerExtra.ESTEPoseState
enum class ESTEPoseState : uint8_t
{
	ESTEPoseState__Stand           = 0,
	ESTEPoseState__Crouch          = 1,
	ESTEPoseState__Prone           = 2,
	ESTEPoseState__Sprint          = 3,
	ESTEPoseState__CrouchSprint    = 4,
	ESTEPoseState__Crawl           = 5,
	ESTEPoseState__Swim            = 6,
	ESTEPoseState__SwimSprint      = 7,
	ESTEPoseState__Dying           = 8,
	ESTEPoseState__ESTEPoseState_MAX = 9
};


// Enum ShadowTrackerExtra.EPlayerCameraMode
enum class EPlayerCameraMode : uint8_t
{
	PCM_Normal                     = 0,
	PCM_Near                       = 1,
	PCM_AimIn                      = 2,
	PCM_AimOut                     = 3,
	PCM_Plane                      = 4,
	PCM_FPP                        = 5,
	PCM_MAX                        = 6
};


// Enum ShadowTrackerExtra.ESTExtraVehicleSeatType
enum class ESTExtraVehicleSeatType : uint8_t
{
	ESTExtraVehicleSeatType__ESeatType_DriversSeat = 0,
	ESTExtraVehicleSeatType__ESeatType_PassengersSeat = 1,
	ESTExtraVehicleSeatType__ESeatType_MAX = 2
};


// Enum ShadowTrackerExtra.ESTExtraVehicleHealthState
enum class ESTExtraVehicleHealthState : uint8_t
{
	ESTExtraVehicleHealthState__VHS_Good = 0,
	ESTExtraVehicleHealthState__VHS_Smoking = 1,
	ESTExtraVehicleHealthState__VHS_Burning = 2,
	ESTExtraVehicleHealthState__VHS_Destroyed = 3,
	ESTExtraVehicleHealthState__VHS_MAX = 4
};


// Enum ShadowTrackerExtra.EPawnState
enum class EPawnState : uint8_t
{
	EPawnState__Move               = 0,
	EPawnState__Sprint             = 1,
	EPawnState__ProneMove          = 2,
	EPawnState__Stand              = 3,
	EPawnState__Crouch             = 4,
	EPawnState__Prone              = 5,
	EPawnState__Jump               = 6,
	EPawnState__GunFire            = 7,
	EPawnState__GunReload          = 8,
	EPawnState__GunADS             = 9,
	EPawnState__Picth              = 10,
	EPawnState__SwitchWeapon       = 11,
	EPawnState__Pick               = 12,
	EPawnState__MeleeAttack        = 13,
	EPawnState__HoldGrenade        = 14,
	EPawnState__Save               = 15,
	EPawnState__UseConsumables     = 16,
	EPawnState__Dying              = 17,
	EPawnState__Dead               = 18,
	EPawnState__DriveVehicle       = 19,
	EPawnState__InVehicle          = 20,
	EPawnState__LeanOutVehicle     = 21,
	EPawnState__Swim               = 22,
	EPawnState__InParachute        = 23,
	EPawnState__Vault              = 24,
	EPawnState__InPlane            = 25,
	EPawnState__GunOBOReload       = 26,
	EPawnState__SwitchPP           = 27,
	EPawnState__GunShoulderFiring  = 28,
	EPawnState__Walk               = 29,
	EPawnState__PlayEmote          = 30,
	EPawnState____MAX              = 31,
	EPawnState__EPawnState_MAX     = 32
};


// Enum ShadowTrackerExtra.EInviteResponceType
enum class EInviteResponceType : uint8_t
{
	EInviteResponceType__ETimeout  = 0,
	EInviteResponceType__EAgree    = 1,
	EInviteResponceType__ERefuse   = 2,
	EInviteResponceType__EBeInviting = 3,
	EInviteResponceType__EInviteResponceType_MAX = 4
};


// Enum ShadowTrackerExtra.ESurviveWeaponPropSlot
enum class ESurviveWeaponPropSlot : uint8_t
{
	ESurviveWeaponPropSlot__SWPS_None = 0,
	ESurviveWeaponPropSlot__SWPS_MainShootWeapon1 = 1,
	ESurviveWeaponPropSlot__SWPS_MainShootWeapon2 = 2,
	ESurviveWeaponPropSlot__SWPS_SubShootWeapon = 3,
	ESurviveWeaponPropSlot__SWPS_MeleeWeapon = 4,
	ESurviveWeaponPropSlot__SWPS_HandProp = 5,
	ESurviveWeaponPropSlot__SWPS_Max = 6
};


// Enum ShadowTrackerExtra.EHitPartJugementType
enum class EHitPartJugementType : uint8_t
{
	HitPos                         = 0,
	HitBone                        = 1,
	EHitPartJugementType_MAX       = 2
};


// Enum ShadowTrackerExtra.EGrenadeType
enum class EGrenadeType : uint8_t
{
	UnknownGrenade                 = 0,
	StunGrenade                    = 1,
	FireGrenade                    = 2,
	SmokeGrenade                   = 3,
	FragGrenade                    = 4,
	GrenadeMax                     = 5,
	EGrenadeType_MAX               = 6
};


// Enum ShadowTrackerExtra.EAvatarDamagePosition
enum class EAvatarDamagePosition : uint8_t
{
	EAvatarDamagePosition__Non     = 0,
	EAvatarDamagePosition__BigHead = 1,
	EAvatarDamagePosition__BigLimbs = 2,
	EAvatarDamagePosition__BigBody = 3,
	EAvatarDamagePosition__BigHand = 4,
	EAvatarDamagePosition__BigFoot = 5,
	EAvatarDamagePosition__Wheel0  = 6,
	EAvatarDamagePosition__Wheel1  = 7,
	EAvatarDamagePosition__Wheel2  = 8,
	EAvatarDamagePosition__Wheel3  = 9,
	EAvatarDamagePosition__NonSpecific = 10,
	EAvatarDamagePosition__EAvatarDamagePosition_MAX = 11
};


// Enum ShadowTrackerExtra.EParachuteState
enum class EParachuteState : uint8_t
{
	PS_None                        = 0,
	PS_FreeFall                    = 1,
	PS_Opening                     = 2,
	PS_Landing                     = 3,
	PS_MAX                         = 4
};


// Enum ShadowTrackerExtra.EWeaponHoldType
enum class EWeaponHoldType : uint8_t
{
	EWHT_None                      = 0,
	EWHT_SingleHand                = 1,
	EWHT_TwoHand                   = 2,
	EWHT_Max                       = 3
};


// Enum ShadowTrackerExtra.EWeaponType
enum class EWeaponType : uint8_t
{
	EWeaponType__AWT_None          = 0,
	EWeaponType__AWT_Pistol        = 1,
	EWeaponType__AWT_PistolSilencer = 2,
	EWeaponType__AWT_ShotGun       = 3,
	EWeaponType__AWT_SubmachineGun = 4,
	EWeaponType__AWT_RPG           = 5,
	EWeaponType__AWT_ChargeGun     = 6,
	EWeaponType__AWT_Knife         = 7,
	EWeaponType__AWT_EnegyCaptureWhip = 8,
	EWeaponType__AWT_RifleGun      = 9,
	EWeaponType__AWT_MAX           = 10
};


// Enum ShadowTrackerExtra.ESTExtraVehicleType
enum class ESTExtraVehicleType : uint8_t
{
	ESTExtraVehicleType__VT_Unknown = 0,
	ESTExtraVehicleType__VT_Motorbike = 1,
	ESTExtraVehicleType__VT_Motorbike01 = 2,
	ESTExtraVehicleType__VT_Motorbike_SideCart = 3,
	ESTExtraVehicleType__VT_Motorbike_SideCart01 = 4,
	ESTExtraVehicleType__VT_Dacia  = 5,
	ESTExtraVehicleType__VT_Dacia01 = 6,
	ESTExtraVehicleType__VT_Dacia02 = 7,
	ESTExtraVehicleType__VT_Dacia03 = 8,
	ESTExtraVehicleType__VT_UAZ    = 9,
	ESTExtraVehicleType__VT_UAZ01  = 10,
	ESTExtraVehicleType__VT_UAZ02  = 11,
	ESTExtraVehicleType__VT_Buggy  = 12,
	ESTExtraVehicleType__VT_Buggy01 = 13,
	ESTExtraVehicleType__VT_Buggy02 = 14,
	ESTExtraVehicleType__VT_PG117  = 15,
	ESTExtraVehicleType__VT_Aquarail = 16,
	ESTExtraVehicleType__VT_Minibus = 17,
	ESTExtraVehicleType__VT_MAX    = 18
};


// Enum ShadowTrackerExtra.EVHSeatSpecialType
enum class EVHSeatSpecialType : uint8_t
{
	EVHSeatSpecialType__EVHSeatSpecial_Common = 0,
	EVHSeatSpecialType__EVHSeatSpecial_Narrow = 1,
	EVHSeatSpecialType__EVHSeatSpecial_Max = 2
};


// Enum ShadowTrackerExtra.EVHSeatWeaponHoldType
enum class EVHSeatWeaponHoldType : uint8_t
{
	ESeatWeapon_None               = 0,
	ESeatWeapon_ShortOnly          = 1,
	ESeatWeapon_All                = 2,
	ESeatWeapon_MAX                = 3
};


// Enum ShadowTrackerExtra.EThrowGrenadeMode
enum class EThrowGrenadeMode : uint8_t
{
	HighThrowMode                  = 0,
	LowThrowMode                   = 1,
	EThrowGrenadeMode_MAX          = 2
};


// Enum ShadowTrackerExtra.EWeaponSlotType
enum class EWeaponSlotType : uint8_t
{
	WST_None                       = 0,
	WST_Main                       = 1,
	WST_Sub                        = 2,
	WST_Melee                      = 3,
	WST_Throw                      = 4,
	WST_Max                        = 5
};


// Enum ShadowTrackerExtra.ECharacterHealthStatus
enum class ECharacterHealthStatus : uint8_t
{
	HealthyAlive                   = 0,
	HasLastBreath                  = 1,
	FinishedLastBreath             = 2,
	Max                            = 3
};


// Enum ShadowTrackerExtra.EFootStepState
enum class EFootStepState : uint8_t
{
	EFootStepState__Run            = 0,
	EFootStepState__Squat          = 1,
	EFootStepState__Walk           = 2,
	EFootStepState__Crawl          = 3,
	EFootStepState__EFootStepState_MAX = 4
};


// Enum ShadowTrackerExtra.EShootVertifyRes
enum class EShootVertifyRes : uint8_t
{
	OK                             = 0,
	ShootBigHead                   = 1,
	ShootPointBigDeviation         = 2,
	ShootBigBoxNull                = 3,
	ShootOtherBlock                = 4,
	NoLagCompensation              = 5,
	ShootTimeTooDelay              = 6,
	MuzzleBigDeviation             = 7,
	ShootHitHeadError              = 8,
	ShootHitRotationError          = 9,
	ShootRangeError                = 10,
	ShootHitInVehicle              = 11,
	ShootHitAITarget               = 12,
	ShootHitVehicleTarget          = 13,
	BulletFlyTimeError             = 14,
	BulletDirError                 = 15,
	BulletImpactOffsetError        = 16,
	CharacterImpactOffsetError     = 17,
	Non                            = 18,
	EShootVertifyRes_MAX           = 19
};


// Enum ShadowTrackerExtra.ERecoveryReasonType
enum class ERecoveryReasonType : uint8_t
{
	ERecoveryReason_Medicine       = 0,
	ERecoveryReason_Energy         = 1,
	ERecoveryReason_RescueByTeammate = 2,
	ERecoveryReason_Max            = 3
};


// Enum ShadowTrackerExtra.EUAESkillEvent
enum class EUAESkillEvent : uint8_t
{
	UAESkillEvent_None             = 0,
	GrenadeModeChange              = 1,
	ThrowGrenade                   = 2,
	SkillCancel                    = 3,
	GrenadeTimeOut                 = 4,
	SwitchWeapon                   = 5,
	SwitchWeaponInterrupt          = 6,
	SwitchWeaponFinish             = 7,
	UnequipWeapon                  = 8,
	UnequipWeaponFinish            = 9,
	SkillInterrupt                 = 10,
	EUAESkillEvent_MAX             = 11
};


// Enum ShadowTrackerExtra.EUTSkillEntry
enum class EUTSkillEntry : uint8_t
{
	EUTSkillEntry__SkillEntry_None = 0,
	EUTSkillEntry__SkillEntry_Grenade_Down = 1,
	EUTSkillEntry__SkillEntry_Grenade_Up = 2,
	EUTSkillEntry__SkillEntry_Flash_Down = 3,
	EUTSkillEntry__SkillEntry_Flash_Up = 4,
	EUTSkillEntry__SkillEntry_Smoke_Down = 5,
	EUTSkillEntry__SkillEntry_Smoke_Up = 6,
	EUTSkillEntry__SkillEntry_Molotov_Down = 7,
	EUTSkillEntry__SkillEntry_Molotov_Up = 8,
	EUTSkillEntry__SkillEntry_Melee_Fist_Down = 9,
	EUTSkillEntry__SkillEntry_Melee_Fist_Up = 10,
	EUTSkillEntry__SkillEntry_Melee_Weapon_1_Down = 11,
	EUTSkillEntry__SkillEntry_Melee_Weapon_1_Up = 12,
	EUTSkillEntry__SkillEntry_Melee_Weapon_2_Down = 13,
	EUTSkillEntry__SkillEntry_Melee_Weapon_2_Up = 14,
	EUTSkillEntry__SkillEntry_Melee_Weapon_3_Down = 15,
	EUTSkillEntry__SkillEntry_Melee_Weapon_3_Up = 16,
	EUTSkillEntry__SkillEntry_Melee_Weapon_4_Down = 17,
	EUTSkillEntry__SkillEntry_Melee_Weapon_4_Up = 18,
	EUTSkillEntry__SkillEntry_Bandage_Down = 19,
	EUTSkillEntry__SkillEntry_EnergyDrink_Down = 20,
	EUTSkillEntry__SkillEntry_Painkiller_Down = 21,
	EUTSkillEntry__SkillEntry_AdrenalineSyringe_Down = 22,
	EUTSkillEntry__SkillEntry_FirstAidKit_Down = 23,
	EUTSkillEntry__SkillEntry_MedKit_Down = 24,
	EUTSkillEntry__SkillEntry_GasCan_Down = 25,
	EUTSkillEntry__SkillEntry_Max  = 26
};


// Enum ShadowTrackerExtra.EFollowState
enum class EFollowState : uint8_t
{
	EFollowState__None             = 0,
	EFollowState__Leader           = 1,
	EFollowState__Follower         = 2,
	EFollowState__EFollowState_MAX = 3
};


// Enum ShadowTrackerExtra.EHealthPredictShowType
enum class EHealthPredictShowType : uint8_t
{
	EHealthPredict_Add             = 0,
	EHealthPredict_Set             = 1,
	EHealthPredict_Max             = 2
};


// Enum ShadowTrackerExtra.EDamageType
enum class EDamageType : uint8_t
{
	EDamageType__ShootDamage       = 0,
	EDamageType__PoisonDamage      = 1,
	EDamageType__DrowningDamage    = 2,
	EDamageType__FallingDamage     = 3,
	EDamageType__MeleeDamage       = 4,
	EDamageType__GrenadeRadiusDamage = 5,
	EDamageType__BurningDamage     = 6,
	EDamageType__AirAttackDamage   = 7,
	EDamageType__VehicleDamage     = 8,
	EDamageType__VehicleExplodeRadiusDamage = 9,
	EDamageType__LastBreathWithoutRescue = 10,
	EDamageType__WinnerFakeDeath   = 11,
	EDamageType__InvalidDamageType = 12,
	EDamageType__EDamageType_MAX   = 13
};


// Enum ShadowTrackerExtra.ETeamNumber
enum class ETeamNumber : uint8_t
{
	ETeamNumber__POLICE            = 0,
	ETeamNumber__TERRORIST         = 1,
	ETeamNumber__CIVILIAN          = 2,
	ETeamNumber__UNKNOWN           = 3,
	ETeamNumber__ETeamNumber_MAX   = 4
};


// Enum ShadowTrackerExtra.EPlayerEnegyStage
enum class EPlayerEnegyStage : uint8_t
{
	PES_None                       = 0,
	PES_Stage1                     = 1,
	PES_Stage2                     = 2,
	PES_Stage3                     = 3,
	PES_Stage4                     = 4,
	PES_MAX                        = 5
};


// Enum ShadowTrackerExtra.EDriveCar
enum class EDriveCar : uint8_t
{
	EDriveCar__None                = 0,
	EDriveCar__Buggy               = 1,
	EDriveCar__EDriveCar_MAX       = 2
};


// Enum ShadowTrackerExtra.ExtraPlayerLiveState
enum class ExtraPlayerLiveState : uint8_t
{
	ExtraPlayerLiveState__InDefault = 0,
	ExtraPlayerLiveState__InPlane  = 1,
	ExtraPlayerLiveState__InParachute = 2,
	ExtraPlayerLiveState__InVehicle = 3,
	ExtraPlayerLiveState__InDying  = 4,
	ExtraPlayerLiveState__InDied   = 5,
	ExtraPlayerLiveState__Offline  = 6,
	ExtraPlayerLiveState__ExtraPlayerLiveState_MAX = 7
};


// Enum ShadowTrackerExtra.EAirAttackInfo
enum class EAirAttackInfo : uint8_t
{
	EAirAttackInfo__AttackWarningTips = 0,
	EAirAttackInfo__Attacking      = 1,
	EAirAttackInfo__AttackOver     = 2,
	EAirAttackInfo__NoAirAttack    = 3,
	EAirAttackInfo__EAirAttackInfo_MAX = 4
};


// Enum ShadowTrackerExtra.ECircleInfo
enum class ECircleInfo : uint8_t
{
	ECircleInfo__SafeZoneTips      = 0,
	ECircleInfo__BlueCirclePreWarning = 1,
	ECircleInfo__BlueCircleRun     = 2,
	ECircleInfo__NoCircleInfo      = 3,
	ECircleInfo__ECircleInfo_MAX   = 4
};


// Enum ShadowTrackerExtra.EPopupButtonID
enum class EPopupButtonID : uint8_t
{
	EPopupButtonID__Cancel_Or_No   = 0,
	EPopupButtonID__Yes_Or_OK      = 1,
	EPopupButtonID__EPopupButtonID_MAX = 2
};


// Enum ShadowTrackerExtra.ETopMostUIPanelType
enum class ETopMostUIPanelType : uint8_t
{
	ETopUIPanelType_MainInputPanel = 0,
	ETopUIPanelType_BackpackPanel  = 1,
	ETopUIPanelType_MAX            = 2
};


// Enum ShadowTrackerExtra.EWarScoreChangeReason
enum class EWarScoreChangeReason : uint8_t
{
	EWarScoreChangeReason__WarScoreChangeReason_NONE = 0,
	EWarScoreChangeReason__WarScoreChangeReason_WHOLETEAMKILLED = 1,
	EWarScoreChangeReason__WarScoreChangeReason_SAVETEAMMATE = 2,
	EWarScoreChangeReason__WarScoreChangeReason_KNOCKDOWNENEMY = 3,
	EWarScoreChangeReason__WarScoreChangeReason_KILLENEMY = 4,
	EWarScoreChangeReason__WarScoreChangeReason_MAX = 5
};


// Enum ShadowTrackerExtra.ESystemMessageType
enum class ESystemMessageType : uint8_t
{
	ESystemMessageType__Debug      = 0,
	ESystemMessageType__Notify     = 1,
	ESystemMessageType__Warning    = 2,
	ESystemMessageType__Error      = 3,
	ESystemMessageType__Important  = 4,
	ESystemMessageType__ESystemMessageType_MAX = 5
};


// Enum ShadowTrackerExtra.EServerStatType
enum class EServerStatType : uint8_t
{
	UE                             = 0,
	NET                            = 1,
	EServerStatType_MAX            = 2
};


// Enum ShadowTrackerExtra.ETouchFireType
enum class ETouchFireType : uint8_t
{
	NotFire                        = 0,
	ButtonFire                     = 1,
	TouchForceFire                 = 2,
	DoubleClickFire                = 3,
	ETouchFireType_MAX             = 4
};


// Enum ShadowTrackerExtra.EnmSprintOptType
enum class EnmSprintOptType : uint8_t
{
	NoneOpt                        = 0,
	TimeToSprint                   = 1,
	DistToSprint                   = 2,
	EnmSprintOptType_MAX           = 3
};


// Enum ShadowTrackerExtra.EKillOrPutDownMessageType
enum class EKillOrPutDownMessageType : uint8_t
{
	EKillOrPutDownMessageType_YouPutDownPlayer = 0,
	EKillOrPutDownMessageType_YouKilledPlayer = 1,
	EKillOrPutDownMessageType_YouHaveBeenPutDown = 2,
	EKillOrPutDownMessageType_YouHaveBeenKilled = 3,
	EKillOrPutDownMessageType_YourTeammatePutDownPlayer = 4,
	EKillOrPutDownMessageType_YourTeammateKilledPlayer = 5,
	EKillOrPutDownMessageType_YourTeammateHaveBeenPutDown = 6,
	EKillOrPutDownMessageType_YourTeammateHaveBeenKilled = 7,
	EKillOrPutDownMessageType_YouHaveBeenKilledByPoison = 8,
	EKillOrPutDownMessageType_YourTeammateHaveBeenKilledByPoison = 9,
	EKillOrPutDownMessageType_YouHaveBeenPutDownByPoison = 10,
	EKillOrPutDownMessageType_YourTeammateHaveBeenPutDownByPoison = 11,
	EKillOrPutDownMessageType_YouHaveBeenPutDownByFallingDown = 12,
	EKillOrPutDownMessageType_YourTeammateHaveBeenPutDownByFallingDown = 13,
	EKillOrPutDownMessageType_YouHaveBeenKilledByFallingDown = 14,
	EKillOrPutDownMessageType_YourTeammateHaveBeenKilledByFallingDown = 15,
	EKillOrPutDownMessageType_YouHaveBeenPutDownByDrowing = 16,
	EKillOrPutDownMessageType_YourTeammateHaveBeenPutDownByDrowing = 17,
	EKillOrPutDownMessageType_YouHaveBeenKilledByDrowing = 18,
	EKillOrPutDownMessageType_YourTeammateHaveBeenKilledByDrowing = 19,
	EKillOrPutDownMessageType_YouHaveBeenKilledFinally = 20,
	EKillOrPutDownMessageType_YourTeammateHaveBeenKilledFinally = 21,
	EKillOrPutDownMessageType_YouHaveBeenPutDownByAirAttack = 22,
	EKillOrPutDownMessageType_YourTeammateHaveBeenPutDownByAirAttack = 23,
	EKillOrPutDownMessageType_YouHaveBeenKilledByAirAttack = 24,
	EKillOrPutDownMessageType_YourTeammateHaveBeenKilledByAirAttack = 25,
	EKillOrPutDownMessageType_MAX  = 26
};


// Enum ShadowTrackerExtra.EFatalDamageRelationShip
enum class EFatalDamageRelationShip : uint8_t
{
	MyTeamateIsCauser              = 0,
	NotRelated                     = 1,
	MyTeammateIsVictim             = 2,
	MyTeammateIsCauserAndVictim    = 3,
	EFatalDamageRelationShip_MAX   = 4
};


// Enum ShadowTrackerExtra.EAutoAimType
enum class EAutoAimType : uint8_t
{
	EAutoAimType__FullTime         = 0,
	EAutoAimType__OnlyFire         = 1,
	EAutoAimType__OnlyTouch        = 2,
	EAutoAimType__OnlyNotTouch     = 3,
	EAutoAimType__TouchOrFire      = 4,
	EAutoAimType__EAutoAimType_MAX = 5
};


// Enum ShadowTrackerExtra.SwitchWeaponProgress
enum class ESwitchWeaponProgress : uint8_t
{
	SwitchWeaponProgress__None     = 0,
	SwitchWeaponProgress__Unequiping = 1,
	SwitchWeaponProgress__Equiping = 2,
	SwitchWeaponProgress__SwitchWeaponProgress_MAX = 3
};


// Enum ShadowTrackerExtra.EGamePawnEvent
enum class EGamePawnEvent : uint8_t
{
	EGamePawnEvent__Birth          = 0,
	EGamePawnEvent__Plane          = 1,
	EGamePawnEvent__Jump           = 2,
	EGamePawnEvent__Parachute      = 3,
	EGamePawnEvent__Land           = 4,
	EGamePawnEvent__Die            = 5,
	EGamePawnEvent__ReBirth        = 6,
	EGamePawnEvent__HeightCheck_High = 7,
	EGamePawnEvent__HeightCheck_Mid = 8,
	EGamePawnEvent__HeightCheck_Low = 9,
	EGamePawnEvent__Fighting       = 10,
	EGamePawnEvent__EGamePawnEvent_MAX = 11
};


// Enum ShadowTrackerExtra.EInteractType
enum class EInteractType : uint8_t
{
	EInteractType__IT_None         = 0,
	EInteractType__IT_RescueOther  = 1,
	EInteractType__IT_PickItem     = 2,
	EInteractType__IT_OpenDoor     = 3,
	EInteractType__IT_CloseDoor    = 4,
	EInteractType__IT_VehicleDrive = 5,
	EInteractType__IT_VehicleGetIn = 6,
	EInteractType__IT_VehicleCannotBoard = 7,
	EInteractType__IT_JumpPlane    = 8,
	EInteractType__IT_OpenParachute = 9,
	EInteractType__IT_Max          = 10
};


// Enum ShadowTrackerExtra.ObjectMovingType
enum class EObjectMovingType : uint8_t
{
	OMT_Uniform                    = 0,
	OMT_Acceleration               = 1,
	OMT_Deceleration               = 2,
	OMT_MAX                        = 3
};


// Enum ShadowTrackerExtra.ERatingRankType
enum class ERatingRankType : uint8_t
{
	ERatingRankType__None          = 0,
	ERatingRankType__Bronze        = 1,
	ERatingRankType__Silver        = 2,
	ERatingRankType__Gold          = 3,
	ERatingRankType__Platinum      = 4,
	ERatingRankType__Diamond       = 5,
	ERatingRankType__Elite         = 6,
	ERatingRankType__Master        = 7,
	ERatingRankType__GrandMaster   = 8,
	ERatingRankType__ERatingRankType_MAX = 9
};


// Enum ShadowTrackerExtra.ERenderStyle
enum class ERenderStyle : uint8_t
{
	ERenderStyle__Default          = 0,
	ERenderStyle__CLASSIC          = 1,
	ERenderStyle__COLOURFUL        = 2,
	ERenderStyle__REALISTIC        = 3,
	ERenderStyle__SOFT             = 4,
	ERenderStyle__ERenderStyle_MAX = 5
};


// Enum ShadowTrackerExtra.ERenderQuality
enum class ERenderQuality : uint8_t
{
	ERenderQuality__Default        = 0,
	ERenderQuality__SMOOTH         = 1,
	ERenderQuality__BALANCE        = 2,
	ERenderQuality__HIGHDEFINITION = 3,
	ERenderQuality__HIGHDEFINITIONPLUS = 4,
	ERenderQuality__ERenderQuality_MAX = 5
};


// Enum ShadowTrackerExtra.EAIMoveType
enum class EAIMoveType : uint8_t
{
	EAIMoveType__StraightMove      = 0,
	EAIMoveType__CurveMove         = 1,
	EAIMoveType__EAIMoveType_MAX   = 2
};


// Enum ShadowTrackerExtra.EAIWeaponShootType
enum class EAIWeaponShootType : uint8_t
{
	EAIWeaponShootType__SingleShot = 0,
	EAIWeaponShootType__Auto       = 1,
	EAIWeaponShootType__EAIWeaponShootType_MAX = 2
};


// Enum ShadowTrackerExtra.EAINewFocusPriority
enum class EAINewFocusPriority : uint8_t
{
	EAINewFocusPriority__Default   = 0,
	EAINewFocusPriority__Move      = 1,
	EAINewFocusPriority__Gameplay  = 2,
	EAINewFocusPriority__EAINewFocusPriority_MAX = 3
};


// Enum ShadowTrackerExtra.EAIMovePose
enum class EAIMovePose : uint8_t
{
	EAIMovePose__Walk              = 0,
	EAIMovePose__Run               = 1,
	EAIMovePose__CrouchSprint      = 2,
	EAIMovePose__KeepCurrentPose   = 3,
	EAIMovePose__EAIMovePose_MAX   = 4
};


// Enum ShadowTrackerExtra.EAIPoseState
enum class EAIPoseState : uint8_t
{
	EAIPoseState__Stand            = 0,
	EAIPoseState__Crouch           = 1,
	EAIPoseState__Prone            = 2,
	EAIPoseState__Jump             = 3,
	EAIPoseState__EAIPoseState_MAX = 4
};


// Enum ShadowTrackerExtra.EAITriggerAttrType
enum class EAITriggerAttrType : uint8_t
{
	EAITriggerAttrType__None       = 0,
	EAITriggerAttrType__Health     = 1,
	EAITriggerAttrType__Energy     = 2,
	EAITriggerAttrType__EAITriggerAttrType_MAX = 3
};


// Enum ShadowTrackerExtra.EAIAttrCompareType
enum class EAIAttrCompareType : uint8_t
{
	EAIAttrCompareType__None       = 0,
	EAIAttrCompareType__Great      = 1,
	EAIAttrCompareType__Less       = 2,
	EAIAttrCompareType__EAIAttrCompareType_MAX = 3
};


// Enum ShadowTrackerExtra.EAIEquipSpawnItemType
enum class EAIEquipSpawnItemType : uint8_t
{
	EAIEquipSpawnItemType__Shoot_Weap = 0,
	EAIEquipSpawnItemType__Backpack = 1,
	EAIEquipSpawnItemType__other   = 2,
	EAIEquipSpawnItemType__EAIEquipSpawnItemType_MAX = 3
};


// Enum ShadowTrackerExtra.EBoltActionWeaponProgressType
enum class EBoltActionWeaponProgressType : uint8_t
{
	EBoltActionWeaponProgressType__NoState = 0,
	EBoltActionWeaponProgressType__Weapon_Fired = 1,
	EBoltActionWeaponProgressType__BoltActionAnim_InProgress = 2,
	EBoltActionWeaponProgressType__EBoltActionWeaponProgressType_MAX = 3
};


// Enum ShadowTrackerExtra.EExecuteAirDropOrderResult
enum class EExecuteAirDropOrderResult : uint8_t
{
	MakeAirDropOrderDone           = 0,
	UndefinedADFReason             = 1,
	RandomDropFailure              = 2,
	NothingToDrop                  = 3,
	GameNotStart                   = 4,
	GameEnded                      = 5,
	GameStateInvalid               = 6,
	DroppingLocationOutSideLandscape = 7,
	LandscapeExtentInvalid         = 8,
	FlyingDirectionInValid         = 9,
	AirPlaneClassInvalid           = 10,
	EExecuteAirDropOrderResult_MAX = 11
};


// Enum ShadowTrackerExtra.EAvatarAttachmentSlot
enum class EAvatarAttachmentSlot : uint8_t
{
	EAvatarAttachmentSlot__NONE    = 0,
	EAvatarAttachmentSlot__Magazine = 1,
	EAvatarAttachmentSlot__MAX     = 2
};


// Enum ShadowTrackerExtra.EReplaceSlot
enum class EReplaceSlot : uint8_t
{
	EReplaceSlot__EReplaceType_NONE = 0,
	EReplaceSlot__EReplaceType_HeadEquipemtSlot = 1,
	EReplaceSlot__EReplaceType_HairEquipemtSlot = 2,
	EReplaceSlot__EReplaceType_HatEquipemtSlot = 3,
	EReplaceSlot__EReplaceType_FaceEquipemtSlot = 4,
	EReplaceSlot__EReplaceType_ClothesEquipemtSlot = 5,
	EReplaceSlot__EReplaceType_PantsEquipemtSlot = 6,
	EReplaceSlot__EReplaceType_ShoesEquipemtSlot = 7,
	EReplaceSlot__EReplaceType_BackpackEquipemtSlot = 8,
	EReplaceSlot__EReplaceType_HelmetEquipemtSlot = 9,
	EReplaceSlot__EReplaceType_ArmorEquipemtSlot = 10,
	EReplaceSlot__EReplaceType_ParachuteEquipemtSlot = 11,
	EReplaceSlot__EReplaceType_VeilSlot = 12,
	EReplaceSlot__EReplaceType_HoodSlot = 13,
	EReplaceSlot__EReplaceType_StockingSlot = 14,
	EReplaceSlot__EReplaceType_BootsSlot = 15,
	EReplaceSlot__EReplaceType_MAX = 16
};


// Enum ShadowTrackerExtra.EBackpackItemType
enum class EBackpackItemType : uint8_t
{
	UnknownBackpackItemType        = 0,
	BackpackItemType_Weapon        = 1,
	BackpackItemType_WeaponAttachment = 2,
	BackpackItemType_Ammo          = 3,
	BackpackItemType_Clothing      = 4,
	BackpackItemType_Armor         = 5,
	BackpackItemType_Consumable    = 6,
	EBackpackItemType_MAX          = 7
};


// Enum ShadowTrackerExtra.EGameModeType
enum class EGameModeType : uint8_t
{
	EGameModeType__EGameModeSingle = 0,
	EGameModeType__ETypicalGameMode = 1,
	EGameModeType__EEntertainmentGameMode = 2,
	EGameModeType__EGameModeGroup  = 3,
	EGameModeType__EWarGameMode    = 4,
	EGameModeType__EGameModeType_MAX = 5
};


// Enum ShadowTrackerExtra.EModifyBlackboardDataValueType
enum class EModifyBlackboardDataValueType : uint8_t
{
	EModifyBlackboardDataValueType__Int = 0,
	EModifyBlackboardDataValueType__Float = 1,
	EModifyBlackboardDataValueType__Bool = 2,
	EModifyBlackboardDataValueType__String = 3,
	EModifyBlackboardDataValueType__Object = 4,
	EModifyBlackboardDataValueType__Vector3 = 5,
	EModifyBlackboardDataValueType__EModifyBlackboardDataValueType_MAX = 6
};


// Enum ShadowTrackerExtra.ChatFlagType
enum class EChatFlagType : uint8_t
{
	ChatFlagType__DanagerForward   = 0,
	ChatFlagType__SaveMe           = 1,
	ChatFlagType__Congregation     = 2,
	ChatFlagType__SuppliesHere     = 3,
	ChatFlagType__GetOnCar         = 4,
	ChatFlagType__NeedSupplies     = 5,
	ChatFlagType__ChatFlagType_MAX = 6
};


// Enum ShadowTrackerExtra.ETslControllerType
enum class ETslControllerType : uint8_t
{
	ETslControllerType__Mouse      = 0,
	ETslControllerType__GamePad    = 1,
	ETslControllerType__Total      = 2,
	ETslControllerType__ETslControllerType_MAX = 3
};


// Enum ShadowTrackerExtra.ECameraDataType
enum class ECameraDataType : uint8_t
{
	ECameraDataType_Stand          = 0,
	ECameraDataType_Crouch         = 1,
	ECameraDataType_Prone          = 2,
	ECameraDataType_Indoor         = 3,
	ECameraDataType_LeanLeft       = 4,
	ECameraDataType_LeanRight      = 5,
	ECameraDataType_Vehicle        = 6,
	ECameraDataType_NearDeath      = 7,
	ECameraDataType_PeekLeft       = 8,
	ECameraDataType_PeekRight      = 9,
	ECameraDataType_IndoorLowerCameraStand = 10,
	ECameraDataType_IndoorLowerCameraCrouch = 11,
	ECameraDataType_IndoorLowerCameraProne = 12,
	ECameraDataType_ShoulderFiring = 13,
	ECameraDataType_PeekLeftAndShoulderFiring = 14,
	ECameraDataType_Max            = 15
};


// Enum ShadowTrackerExtra.EPlayerAuthState
enum class EPlayerAuthState : uint8_t
{
	EPlayerAuthState__None         = 0,
	EPlayerAuthState__Login        = 1,
	EPlayerAuthState__Logout       = 2,
	EPlayerAuthState__EPlayerAuthState_MAX = 3
};


// Enum ShadowTrackerExtra.ECheatType
enum class ECheatType : uint8_t
{
	ECheatType__SpeedHack          = 0,
	ECheatType__SpeedHack_UE       = 1,
	ECheatType__IgnoreWall_Hit     = 2,
	ECheatType__IgnoreWall_Sight   = 3,
	ECheatType__ItemPackage        = 4,
	ECheatType__CarePackageMount   = 5,
	ECheatType__HitLag             = 6,
	ECheatType__Aimbot             = 7,
	ECheatType__InvalidImpact      = 8,
	ECheatType__InvalidImpactZ     = 9,
	ECheatType__InvalidImpact_Gun_C = 10,
	ECheatType__InvalidOrigin_Gun  = 11,
	ECheatType__InvalidOrigin_Melee = 12,
	ECheatType__InvalidOrigin_Punch = 13,
	ECheatType__InvalidOrigin_Throwable = 14,
	ECheatType__InvalidRange       = 15,
	ECheatType__InvalidRange2      = 16,
	ECheatType__InvalidSequence    = 17,
	ECheatType__InvalidAmmo        = 18,
	ECheatType__InvalidReviving    = 19,
	ECheatType__InvalidKick        = 20,
	ECheatType__InvalidA0          = 21,
	ECheatType__InvalidB0          = 22,
	ECheatType__InvalidB1          = 23,
	ECheatType__InvalidB101        = 24,
	ECheatType__InvalidH0          = 25,
	ECheatType__InvalidOrigin_Gun_C = 26,
	ECheatType__InvalidD0          = 27,
	ECheatType__InvalidS0          = 28,
	ECheatType__InvalidS1          = 29,
	ECheatType__InvalidH1          = 30,
	ECheatType__InvalidC0          = 31,
	ECheatType__InvalidC1          = 32,
	ECheatType__InvalidC2          = 33,
	ECheatType__InvalidC3          = 34,
	ECheatType__InvalidC4          = 35,
	ECheatType__InvalidC5          = 36,
	ECheatType__InvalidC6          = 37,
	ECheatType__InvalidT0          = 38,
	ECheatType__CHKSUM_GUN         = 39,
	ECheatType__CHKSUM_PUNCH       = 40,
	ECheatType__CHKSUM_MELEE       = 41,
	ECheatType__CHKSUM_VEHICLE     = 42,
	ECheatType__CHKSUM_A0          = 43,
	ECheatType__CHKSUM_T0          = 44,
	ECheatType__CHKSUM_S0          = 45,
	ECheatType__CHKSUM_D0          = 46,
	ECheatType__CHKSUM_V0          = 47,
	ECheatType__CHKSUM_W0          = 48,
	ECheatType__CHKSUM_T1          = 49,
	ECheatType__CHKSUM_D1          = 50,
	ECheatType__CHKSUM_CD          = 51,
	ECheatType__CHKSUM_LC          = 52,
	ECheatType__CHKSUM_V1          = 53,
	ECheatType__CHKSUM_P0          = 54,
	ECheatType__CHKSUM_BP          = 55,
	ECheatType__CHKSUM_G0          = 56,
	ECheatType__CHKSUM_G1          = 57,
	ECheatType__VHC_RI             = 58,
	ECheatType__VHC_SC             = 59,
	ECheatType__VHC_MG             = 60,
	ECheatType__VHC_MG_FF          = 61,
	ECheatType__VHC_MG_FC          = 62,
	ECheatType__VHC_MG_SW          = 63,
	ECheatType__VHC_MG_OS          = 64,
	ECheatType__VHC_MG_BC          = 65,
	ECheatType__VHC_MGB            = 66,
	ECheatType__VHC_MGB_FF         = 67,
	ECheatType__VHC_MGB_FC         = 68,
	ECheatType__VHC_MGB_OS         = 69,
	ECheatType__VHC_MGB_BC         = 70,
	ECheatType__VHC_KILL           = 71,
	ECheatType__VHC_ED             = 72,
	ECheatType__CP_RZ              = 73,
	ECheatType__CP_RZD             = 74,
	ECheatType__KGB_FP             = 75,
	ECheatType__KGB_AF             = 76,
	ECheatType__KGB_AH             = 77,
	ECheatType__KGB_AH_NA          = 78,
	ECheatType__ESP1               = 79,
	ECheatType__ESP2               = 80,
	ECheatType__ESP3               = 81,
	ECheatType__SimilarHit         = 82,
	ECheatType__DoubleKill         = 83,
	ECheatType__B0Log              = 84,
	ECheatType__ECheatType_MAX     = 85
};


// Enum ShadowTrackerExtra.ELoadingScreenType
enum class ELoadingScreenType : uint8_t
{
	ELoadingScreenType__NONE       = 0,
	ELoadingScreenType__ICE_BRAKE  = 1,
	ELoadingScreenType__RULE_SET   = 2,
	ELoadingScreenType__WEAPON     = 3,
	ELoadingScreenType__ATTACHMENT = 4,
	ELoadingScreenType__EQUIPMENT  = 5,
	ELoadingScreenType__ITEM       = 6,
	ELoadingScreenType__VEHICLE    = 7,
	ELoadingScreenType__SYSTEM     = 8,
	ELoadingScreenType__DEFAULT    = 9,
	ELoadingScreenType__EXPOSE_WITH_HIGHEST_PRIORITY = 10,
	ELoadingScreenType__ELoadingScreenType_MAX = 11
};


// Enum ShadowTrackerExtra.ELobbyLinkState
enum class ELobbyLinkState : uint8_t
{
	ELobbyLinkState__Disconnect    = 0,
	ELobbyLinkState__WaitInitialize = 1,
	ELobbyLinkState__WaitStart     = 2,
	ELobbyLinkState__Gaming        = 3,
	ELobbyLinkState__Finished      = 4,
	ELobbyLinkState__ELobbyLinkState_MAX = 5
};


// Enum ShadowTrackerExtra.EAimingPose
enum class EAimingPose : uint8_t
{
	EAimingPose__NotAiming         = 0,
	EAimingPose__ShoulderFiring    = 1,
	EAimingPose__AimingDownSight   = 2,
	EAimingPose__EAimingPose_MAX   = 3
};


// Enum ShadowTrackerExtra.EMovement
enum class EMovement : uint8_t
{
	EMovement__Walk                = 0,
	EMovement__Run                 = 1,
	EMovement__Sprint              = 2,
	EMovement__EMovement_MAX       = 3
};


// Enum ShadowTrackerExtra.EStance
enum class EStance : uint8_t
{
	EStance__Stand                 = 0,
	EStance__Prone                 = 1,
	EStance__Crouch                = 2,
	EStance__DBNO                  = 3,
	EStance__EStance_MAX           = 4
};


// Enum ShadowTrackerExtra.EMovementDirection
enum class EMovementDirection : uint8_t
{
	EMovementDirection__F_Direction = 0,
	EMovementDirection__L_Direction = 1,
	EMovementDirection__R_Direction = 2,
	EMovementDirection__B_Direction = 3,
	EMovementDirection__FL_Direction = 4,
	EMovementDirection__FR_Direction = 5,
	EMovementDirection__BL_Direction = 6,
	EMovementDirection__BR_Direction = 7,
	EMovementDirection__EMovementDirection_MAX = 8
};


// Enum ShadowTrackerExtra.ECustomMovementMode
enum class ECustomMovementMode : uint8_t
{
	ECustomMovementMode__Vault     = 0,
	ECustomMovementMode__ECustomMovementMode_MAX = 1
};


// Enum ShadowTrackerExtra.ENewbieGuidePlayerCategory
enum class ENewbieGuidePlayerCategory : uint8_t
{
	Low                            = 0,
	Middle                         = 1,
	High                           = 2,
	ENewbieGuidePlayerCategory_MAX = 3
};


// Enum ShadowTrackerExtra.ENewbieGuideType
enum class ENewbieGuideType : uint8_t
{
	Op                             = 0,
	Rule                           = 1,
	ENewbieGuideType_MAX           = 2
};


// Enum ShadowTrackerExtra.EBulletImpactDir
enum class EBulletImpactDir : uint8_t
{
	ImpactNormal                   = 0,
	ImpactShootDir                 = 1,
	EBulletImpactDir_MAX           = 2
};


// Enum ShadowTrackerExtra.EMeleeDamageSubType
enum class EMeleeDamageSubType : uint8_t
{
	Fist                           = 0,
	Cowbar                         = 1,
	Pan                            = 2,
	Machete                        = 3,
	Sickle                         = 4,
	EMeleeDamageSubType_MAX        = 5
};


// Enum ShadowTrackerExtra.EDamageTypeCategory
enum class EDamageTypeCategory : uint8_t
{
	EDamageTypeCategory__Damage_None = 0,
	EDamageTypeCategory__Damage_Instant = 1,
	EDamageTypeCategory__Damage_Gun = 2,
	EDamageTypeCategory__Damage_Melee = 3,
	EDamageTypeCategory__Damage_ZombieMelee = 4,
	EDamageTypeCategory__Damage_Groggy = 5,
	EDamageTypeCategory__Damage_BlueZone = 6,
	EDamageTypeCategory__Damage_VehicleHit = 7,
	EDamageTypeCategory__Damage_VehicleCrashHit = 8,
	EDamageTypeCategory__Damage_Molotov = 9,
	EDamageTypeCategory__Damage_Explosion = 10,
	EDamageTypeCategory__Damage_Explosion_Grenade = 11,
	EDamageTypeCategory__Damage_Explosion_RedZone = 12,
	EDamageTypeCategory__Damage_Explosion_Vehicle = 13,
	EDamageTypeCategory__Damage_Instant_Fall = 14,
	EDamageTypeCategory__Damage_Drown = 15,
	EDamageTypeCategory__Damage_MAX = 16
};


// Enum ShadowTrackerExtra.EPlayerEquipmentLevel
enum class EPlayerEquipmentLevel : uint8_t
{
	PEL                            = 0,
	PEL01                          = 1,
	PEL02                          = 2,
	PEL_MAX                        = 3
};


// Enum ShadowTrackerExtra.FSoundType
enum class EFSoundType : uint8_t
{
	FSoundType__ESoundMove         = 0,
	FSoundType__ESoundFire         = 1,
	FSoundType__ESoundVehicle      = 2,
	FSoundType__FSoundType_MAX     = 3
};


// Enum ShadowTrackerExtra.EScopeMeshAnimType
enum class EScopeMeshAnimType : uint8_t
{
	ScopeMeshAnimType_Normal       = 0,
	ScopeMeshAnimType_Translate    = 1,
	ScopeMeshAnimType_Scope        = 2,
	ScopeMeshAnimType_MAX          = 3
};


// Enum ShadowTrackerExtra.EBattleTextType
enum class EBattleTextType : uint8_t
{
	EBattleTextType__EBattleTextType_Fist = 0,
	EBattleTextType__EBattleTextType_BurningBomb = 1,
	EBattleTextType__EBattleTextType_Use = 2,
	EBattleTextType__EBattleTextType_ShotAndExplode = 3,
	EBattleTextType__EBattleTextType_Vehicle = 4,
	EBattleTextType__EBattleTextType_You = 5,
	EBattleTextType__EBattleTextType_YourTeammate = 6,
	EBattleTextType__EBattleTextType_By = 7,
	EBattleTextType__EBattleTextType_HeadShot = 8,
	EBattleTextType__EBattleTextType_PutDown = 9,
	EBattleTextType__EBattleTextType_Kill = 10,
	EBattleTextType__EBattleTextType_Killed = 11,
	EBattleTextType__EBattleTextType_Le = 12,
	EBattleTextType__EBattleTextType_Because = 13,
	EBattleTextType__EBattleTextType_CriticalWounded = 14,
	EBattleTextType__EBattleTextType_HighFallingDown = 15,
	EBattleTextType__EBattleTextType_FallToGround = 16,
	EBattleTextType__EBattleTextType_InPosionArea = 17,
	EBattleTextType__EBattleTextType_TooMuchTime = 18,
	EBattleTextType__EBattleTextType_UnderWeater = 19,
	EBattleTextType__EBattleTextType_Finally = 20,
	EBattleTextType__EBattleTextType_AirAttackHit = 21,
	EBattleTextType__EBattleTextType_AccidentalDamage = 22,
	EBattleTextType__EBattleTextType_Myself = 23,
	EBattleTextType__EBattleTextType_Explosion = 24,
	EBattleTextType__EBattleTextType_MAX = 25
};


// Enum ShadowTrackerExtra.EHandlePickUpActionReplicatedDataActionType
enum class EHandlePickUpActionReplicatedDataActionType : uint8_t
{
	EHandlePickUpActionReplicatedDataActionType_None = 0,
	EHandlePickUpActionReplicatedDataActionType_PickUpWeapon = 1,
	EHandlePickUpActionReplicatedDataActionType_PickUpPlayerEquipment = 2,
	EHandlePickUpActionReplicatedDataActionType_PutDownlayerEquipment = 3,
	EHandlePickUpActionReplicatedDataActionType_MAX = 4
};


// Enum ShadowTrackerExtra.EConsumeItemCategory
enum class EConsumeItemCategory : uint8_t
{
	EConsumeItemCategory_None      = 0,
	EConsumeItemCategory_RecoverHealth = 1,
	EConsumeItemCategory_RecoverEnegy = 2,
	EConsumeItemCategory_MAX       = 3
};


// Enum ShadowTrackerExtra.EConsumeItemType
enum class EConsumeItemType : uint8_t
{
	EConsumeItemType_None          = 0,
	EConsumeItemType_Bandage       = 1,
	EConsumeItemType_MedicalBag    = 2,
	EConsumeItemType_MedicalBox    = 3,
	EConsumeItemType_EnegyDrink    = 4,
	EConsumeItemType_PainKillerPills = 5,
	EConsumeItemType_Adrenaline    = 6,
	EConsumeItemType_MAX           = 7
};


// Enum ShadowTrackerExtra.EPlayerEquipmentSlotType
enum class EPlayerEquipmentSlotType : uint8_t
{
	EPlayerEquipmentSlotType_None  = 0,
	EPlayerEquipmentSlotType_HeadEquipemtSlot = 1,
	EPlayerEquipmentSlotType_ChestEquipemtSlot = 2,
	EPlayerEquipmentSlotType_JacketEquipemtSlot = 3,
	EPlayerEquipmentSlotType_BackEquipemtSlot = 4,
	EPlayerEquipmentSlotType_LegsEquipemtSlot = 5,
	EPlayerEquipmentSlotType_FeetEquipemtSlot = 6,
	EPlayerEquipmentSlotType_MAX   = 7
};


// Enum ShadowTrackerExtra.EDataTableType
enum class EDataTableType : uint8_t
{
	EDataTableType_None            = 0,
	EDataTableType_PickUpGlobalDataTable = 1,
	EDataTableType_PickUpGlobalIDAndWrapperDataTable = 2,
	EDataTableType_WeaponDataTable = 3,
	EDataTableType_PlayerEquipmentDataTable = 4,
	EDataTableType_WeaponComponentDataTable = 5,
	EDataTableType_ConsumeItemDataTable = 6,
	EDataTableType_AkEventDataTable = 7,
	EDataTableType_MAX             = 8
};


// Enum ShadowTrackerExtra.ESurvivePickUpType
enum class ESurvivePickUpType : uint8_t
{
	SPUT_RifileGun                 = 0,
	SPUT_SubmachineGun             = 1,
	SPUT_SniperGun                 = 2,
	SPUT_Shotgun                   = 3,
	SPUT_Pistol                    = 4,
	SPUT_Helmet                    = 5,
	SPUT_Chest                     = 6,
	SPUT_Scop                      = 7,
	SPUT_Bandage                   = 8,
	SPUT_MedicalBag                = 9,
	SPUT_MedicalBox                = 10,
	SPUT_EnegyDrink                = 11,
	SPUT_PainKillerPills           = 12,
	SPUT_Adrenaline                = 13,
	SPUT_MAX                       = 14
};


// Enum ShadowTrackerExtra.ESurvivePickUpCategory
enum class ESurvivePickUpCategory : uint8_t
{
	SPUC_MainShootWeapon           = 0,
	SPUC_SubShootWeapon            = 1,
	SPUC_MeleWeapon                = 2,
	SPUC_Prop                      = 3,
	SPUC_PlayerEquipment           = 4,
	SPUC_WeaponComponent           = 5,
	SPUC_ConsumeItem               = 6,
	SPUC_Other                     = 7,
	SPUC_MAX                       = 8
};


// Enum ShadowTrackerExtra.EPostEffectBlendType
enum class EPostEffectBlendType : uint8_t
{
	PEBT_ScanBomb                  = 0,
	PEBT_DeadGray                  = 1,
	PEBT_PropOutline               = 2,
	PEBT_MAX                       = 3
};


// Enum ShadowTrackerExtra.EPlayerBodyPartType
enum class EPlayerBodyPartType : uint8_t
{
	PBPT_Head                      = 0,
	PBPT_LeftArm                   = 1,
	PBPT_RightArm                  = 2,
	PBPT_LeftLeg                   = 3,
	PBPT_RightLeg                  = 4,
	PBPT_Body                      = 5,
	PBPT_MAX                       = 6
};


// Enum ShadowTrackerExtra.EWeaponSlot
enum class EWeaponSlot : uint8_t
{
	Primary                        = 0,
	Secondary                      = 1,
	Pistol                         = 2,
	EWeaponSlot_MAX                = 3
};


// Enum ShadowTrackerExtra.EHMDType
enum class EHMDType : uint8_t
{
	EHMDType__None                 = 0,
	EHMDType__Oculus               = 1,
	EHMDType__Vive                 = 2,
	EHMDType__Morpheus             = 3,
	EHMDType__EHMDType_MAX         = 4
};


// Enum ShadowTrackerExtra.ELoopMoveMode
enum class ELoopMoveMode : uint8_t
{
	ELoopMoveMode__ELoopMoveMode_None = 0,
	ELoopMoveMode__ELoopMoveMode_NoLoop = 1,
	ELoopMoveMode__ELoopMoveMode_Forward = 2,
	ELoopMoveMode__ELoopMoveMode_Back = 3,
	ELoopMoveMode__ELoopMoveMode_MAX = 4
};


// Enum ShadowTrackerExtra.EActorCacheID
enum class EActorCacheID : uint8_t
{
	ACID_Bullet                    = 0,
	ACID_BulletImpactEffect        = 1,
	ACID_MAX                       = 2
};


// Enum ShadowTrackerExtra.EReleaseToFireType
enum class EReleaseToFireType : uint8_t
{
	EReleaseToFireType__RELEASEFIRE_NONE = 0,
	EReleaseToFireType__RELEASEFIRE_SHOTGUN = 1,
	EReleaseToFireType__RELEASEFIRE_SNIPER = 2,
	EReleaseToFireType__RELEASEFIRE_BRUST = 3,
	EReleaseToFireType__RELEASEFIRE_MAX = 4
};


// Enum ShadowTrackerExtra.EWeaponFireMode
enum class EWeaponFireMode : uint8_t
{
	WeaponFireMode_Single          = 0,
	WeaponFireMode_Burst           = 1,
	WeaponFireMode_Auto            = 2,
	WeaponFireMode_MAX             = 3
};


// Enum ShadowTrackerExtra.ShootWeaponAnimType
enum class EShootWeaponAnimType : uint8_t
{
	SWAT_Shoot                     = 0,
	SWAT_NoneShoot                 = 1,
	SWAT_Reload                    = 2,
	SWAT_IdleToNoneIdle            = 3,
	SWAT_MAX                       = 4
};


// Enum ShadowTrackerExtra.ESTEWeaponHoldType
enum class ESTEWeaponHoldType : uint8_t
{
	ESTEWeaponHoldType__Hand       = 0,
	ESTEWeaponHoldType__Rifle      = 1,
	ESTEWeaponHoldType__Pistol     = 2,
	ESTEWeaponHoldType__Melee      = 3,
	ESTEWeaponHoldType__ESTEWeaponHoldType_MAX = 4
};


// Enum ShadowTrackerExtra.EAirborne2
enum class EAirborne2 : uint8_t
{
	Airborne                       = 0,
	FreeFall                       = 1,
	Opening                        = 2,
	Landing                        = 3,
	EAirborne2_MAX                 = 4
};


// Enum ShadowTrackerExtra.EPlayerHurtAnimType
enum class EPlayerHurtAnimType : uint8_t
{
	EPlayerHurtAnim_None           = 0,
	EPlayerHurtAnim_Point          = 1,
	EPlayerHurtAnim_Melee          = 2,
	EPlayerHurtAnim_Max            = 3
};


// Enum ShadowTrackerExtra.EBuffApplierCondition
enum class EBuffApplierCondition : uint8_t
{
	BuffAppCondition_InSight       = 0,
	BuffAppConditio_Default        = 1,
	EBuffApplierCondition_MAX      = 2
};


// Enum ShadowTrackerExtra.EGameMap
enum class EGameMap : uint8_t
{
	NoMap                          = 0,
	SurviveRoot                    = 1,
	SurviveTestRoot                = 2,
	SurviveRCity                   = 3,
	EGameMap_MAX                   = 4
};


// Enum ShadowTrackerExtra.EPlayerOperation
enum class EPlayerOperation : uint8_t
{
	Parachute                      = 0,
	shooting                       = 1,
	Driving                        = 2,
	EPlayerOperation_MAX           = 3
};


// Enum ShadowTrackerExtra.EMapType
enum class EMapType : uint8_t
{
	ENTIREMAP                      = 0,
	MINIMAP                        = 1,
	EMapType_MAX                   = 2
};


// Enum ShadowTrackerExtra.EApplyStatus
enum class EApplyStatus : uint8_t
{
	REVERT                         = 0,
	NO_APPLY                       = 1,
	APPLY                          = 2,
	EApplyStatus_MAX               = 3
};


// Enum ShadowTrackerExtra.ELoadMode
enum class ELoadMode : uint8_t
{
	LOW_LOAD                       = 0,
	MEDIUM_LOAD                    = 1,
	HIGH_LOAD                      = 2,
	ELoadMode_MAX                  = 3
};


// Enum ShadowTrackerExtra.ETextVertPos
enum class ETextVertPos : uint8_t
{
	ETextVertPos__Top              = 0,
	ETextVertPos__Center           = 1,
	ETextVertPos__Bottom           = 2,
	ETextVertPos__MAX              = 3
};


// Enum ShadowTrackerExtra.ETextHorzPos
enum class ETextHorzPos : uint8_t
{
	ETextHorzPos__Left             = 0,
	ETextHorzPos__Center           = 1,
	ETextHorzPos__Right            = 2,
	ETextHorzPos__MAX              = 3
};


// Enum ShadowTrackerExtra.ECharOperationType
enum class ECharOperationType : uint8_t
{
	OpMove                         = 0,
	OpSprint                       = 1,
	OpJump                         = 2,
	OpInvalidEnum                  = 3,
	ECharOperationType_MAX         = 4
};


// Enum ShadowTrackerExtra.EOperationRunResult
enum class EOperationRunResult : uint8_t
{
	OpRunning                      = 0,
	OpSuccess                      = 1,
	OpAutoFinish                   = 2,
	OpFail                         = 3,
	OpNotStarted                   = 4,
	EOperationRunResult_MAX        = 5
};


// Enum ShadowTrackerExtra.EDrivingCheckPointState
enum class EDrivingCheckPointState : uint8_t
{
	DCPS_Invalid                   = 0,
	DCPS_Unpass                    = 1,
	DCPS_Pass                      = 2,
	DCPS_MAX                       = 3
};


// Enum ShadowTrackerExtra.EKillcamDisplayCode
enum class EKillcamDisplayCode : uint8_t
{
	EKillcamDisplayCode__NotVisible = 0,
	EKillcamDisplayCode__OptionDisabled = 1,
	EKillcamDisplayCode__Recording = 2,
	EKillcamDisplayCode__Playable  = 3,
	EKillcamDisplayCode__Replay    = 4,
	EKillcamDisplayCode__FailToLoad = 5,
	EKillcamDisplayCode__DemoFailure = 6,
	EKillcamDisplayCode__DetectedUnusualMovement = 7,
	EKillcamDisplayCode__EKillcamDisplayCode_MAX = 8
};


// Enum ShadowTrackerExtra.EWidgetShowType
enum class EWidgetShowType : uint8_t
{
	EWidgetShowType__Show          = 0,
	EWidgetShowType__Hide          = 1,
	EWidgetShowType__Toggle        = 2,
	EWidgetShowType__EWidgetShowType_MAX = 3
};


// Enum ShadowTrackerExtra.EEmoteAnimType
enum class EEmoteAnimType : uint8_t
{
	EEmoteAnimType__EmoteFullBody  = 0,
	EEmoteAnimType__EmoteUpperBody = 1,
	EEmoteAnimType__EmoteArm       = 2,
	EEmoteAnimType__EEmoteAnimType_MAX = 3
};


// Enum ShadowTrackerExtra.EWeaponGripLeftHand
enum class EWeaponGripLeftHand : uint8_t
{
	EWeaponGripLeftHand__NormalRifle = 0,
	EWeaponGripLeftHand__Foregrip1 = 1,
	EWeaponGripLeftHand__Foregrip2 = 2,
	EWeaponGripLeftHand__Thompson  = 3,
	EWeaponGripLeftHand__EWeaponGripLeftHand_MAX = 4
};


// Enum ShadowTrackerExtra.EAimingType
enum class EAimingType : uint8_t
{
	EAimingType__Aiming_None       = 0,
	EAimingType__Aiming_ShoulderFiring = 1,
	EAimingType__Aiming_AimingDownSight = 2,
	EAimingType__Aiming_MAX        = 3
};


// Enum ShadowTrackerExtra.ELobbyCharacterAnimationType
enum class ELobbyCharacterAnimationType : uint8_t
{
	ELobbyCharacterAnimationType__Default = 0,
	ELobbyCharacterAnimationType__Wardrobe = 1,
	ELobbyCharacterAnimationType__Appearance = 2,
	ELobbyCharacterAnimationType__ELobbyCharacterAnimationType_MAX = 3
};


// Enum ShadowTrackerExtra.ECustomDamageZoneType
enum class ECustomDamageZoneType : uint8_t
{
	ECustomDamageZoneType__Head    = 0,
	ECustomDamageZoneType__Arms    = 1,
	ECustomDamageZoneType__Legs    = 2,
	ECustomDamageZoneType__UpperBody = 3,
	ECustomDamageZoneType__LowerBody = 4,
	ECustomDamageZoneType__ECustomDamageZoneType_MAX = 5
};


// Enum ShadowTrackerExtra.ECustomDamageWeaponClass
enum class ECustomDamageWeaponClass : uint8_t
{
	ECustomDamageWeaponClass__Bullet = 0,
	ECustomDamageWeaponClass__Melee = 1,
	ECustomDamageWeaponClass__ECustomDamageWeaponClass_MAX = 2
};


// Enum ShadowTrackerExtra.EItemSpotType
enum class EItemSpotType : uint8_t
{
	EItemSpotType__TypeA           = 0,
	EItemSpotType__TypeB           = 1,
	EItemSpotType__TypeC           = 2,
	EItemSpotType__TypeD           = 3,
	EItemSpotType__TypeE           = 4,
	EItemSpotType__TypeF           = 5,
	EItemSpotType__EItemSpotType_MAX = 6
};


// Enum ShadowTrackerExtra.EEquipSlotID
enum class EEquipSlotID : uint8_t
{
	EEquipSlotID__Head             = 0,
	EEquipSlotID__Eyes             = 1,
	EEquipSlotID__Mask             = 2,
	EEquipSlotID__Torso            = 3,
	EEquipSlotID__TorsoArmor       = 4,
	EEquipSlotID__Outer            = 5,
	EEquipSlotID__Backpack         = 6,
	EEquipSlotID__Hands            = 7,
	EEquipSlotID__Legs             = 8,
	EEquipSlotID__Feet             = 9,
	EEquipSlotID__Belt             = 10,
	EEquipSlotID__WeaponPrimary    = 11,
	EEquipSlotID__WeaponSecondary  = 12,
	EEquipSlotID__WeaponMelee      = 13,
	EEquipSlotID__WeaponThrowable  = 14,
	EEquipSlotID__MaxOrNone        = 15,
	EEquipSlotID__EEquipSlotID_MAX = 16
};


// Enum ShadowTrackerExtra.EAttackType
enum class EAttackType : uint8_t
{
	EAttackType__None              = 0,
	EAttackType__Weapon            = 1,
	EAttackType__VehicleCrash      = 2,
	EAttackType__VehicleExplosion  = 3,
	EAttackType__Fall              = 4,
	EAttackType__BlueZone          = 5,
	EAttackType__RedZone           = 6,
	EAttackType__EAttackType_MAX   = 7
};


// Enum ShadowTrackerExtra.EPlayerMoveType
enum class EPlayerMoveType : uint8_t
{
	EPlayerMoveType__OnFoot        = 0,
	EPlayerMoveType__OnSwim        = 1,
	EPlayerMoveType__OnVehicle     = 2,
	EPlayerMoveType__OnParachute   = 3,
	EPlayerMoveType__OnFreefall    = 4,
	EPlayerMoveType__EPlayerMoveType_MAX = 5
};


// Enum ShadowTrackerExtra.EPopupStyle
enum class EPopupStyle : uint8_t
{
	EPopupStyle__Ok_Cancel         = 0,
	EPopupStyle__Ok                = 1,
	EPopupStyle__Yes_No            = 2,
	EPopupStyle__EPopupStyle_MAX   = 3
};


// Enum ShadowTrackerExtra.EForceRefreshDummy
enum class EForceRefreshDummy : uint8_t
{
	EForceRefreshDummy__Refresh1   = 0,
	EForceRefreshDummy__Refresh2   = 1,
	EForceRefreshDummy__EForceRefreshDummy_MAX = 2
};


// Enum ShadowTrackerExtra.EViewModeCategory
enum class EViewModeCategory : uint8_t
{
	EViewModeCategory__None        = 0,
	EViewModeCategory__Weapon      = 1,
	EViewModeCategory__Parachute   = 2,
	EViewModeCategory__Character   = 3,
	EViewModeCategory__EViewModeCategory_MAX = 4
};


// Enum ShadowTrackerExtra.ERankGuideType
enum class ERankGuideType : uint8_t
{
	ERankGuideType__ForElementaryRank = 0,
	ERankGuideType__ForExpertRank  = 1,
	ERankGuideType__ERankGuideType_MAX = 2
};


// Enum ShadowTrackerExtra.EUserRank
enum class EUserRank : uint8_t
{
	EUserRank__ElementaryRank      = 0,
	EUserRank__IntermediateRank    = 1,
	EUserRank__HighRank            = 2,
	EUserRank__ExpertRank          = 3,
	EUserRank__EUserRank_MAX       = 4
};


// Enum ShadowTrackerExtra.EProjectileParticleClass
enum class EProjectileParticleClass : uint8_t
{
	EProjectileParticleClass__PPC_None = 0,
	EProjectileParticleClass__PPC_Frag = 1,
	EProjectileParticleClass__PPC_Flash = 2,
	EProjectileParticleClass__PPC_Smoke = 3,
	EProjectileParticleClass__PPC_Molotov = 4,
	EProjectileParticleClass__PPC_Other = 5,
	EProjectileParticleClass__PPC_MAX = 6
};


// Enum ShadowTrackerExtra.EReticleType
enum class EReticleType : uint8_t
{
	EReticleType__RedDot           = 0,
	EReticleType__HoloSight        = 1,
	EReticleType__Scope2x          = 2,
	EReticleType__Scope3x          = 3,
	EReticleType__Scope4x          = 4,
	EReticleType__Scope6x          = 5,
	EReticleType__Scope8x          = 6,
	EReticleType__EReticleType_MAX = 7
};


// Enum ShadowTrackerExtra.EKeyHintType
enum class EKeyHintType : uint8_t
{
	EKeyHintType__Menu             = 0,
	EKeyHintType__Parachuting      = 1,
	EKeyHintType__Character        = 2,
	EKeyHintType__Driver           = 3,
	EKeyHintType__Rider            = 4,
	EKeyHintType__WeaponUse        = 5,
	EKeyHintType__WeaponChange     = 6,
	EKeyHintType__ADS              = 7,
	EKeyHintType__Aim              = 8,
	EKeyHintType__ADS_8x15x        = 9,
	EKeyHintType__ADS_6x           = 10,
	EKeyHintType__ADS_1x2x3x       = 11,
	EKeyHintType__ADS_IronSight    = 12,
	EKeyHintType__Throwing         = 13,
	EKeyHintType__Heal             = 14,
	EKeyHintType__Swimming         = 15,
	EKeyHintType__TeamSpectating   = 16,
	EKeyHintType__KillerSpectating = 17,
	EKeyHintType__WorldMap         = 18,
	EKeyHintType__None             = 19,
	EKeyHintType__FreefallNew      = 20,
	EKeyHintType__ParachuteNew     = 21,
	EKeyHintType__EKeyHintType_MAX = 22
};


// Enum ShadowTrackerExtra.EObserverOutlineType
enum class EObserverOutlineType : uint8_t
{
	SpectatedCharacter             = 0,
	SpectatedCharacterTeam         = 1,
	SpectatedCharacterEnemy        = 2,
	WithoutSpectatedCharacter      = 3,
	WithoutSpectatedTeamCharacter  = 4,
	InteractionFocusingColor       = 5,
	EObserverOutlineType_MAX       = 6
};


// Enum ShadowTrackerExtra.EOptionExposeType
enum class EOptionExposeType : uint8_t
{
	EOptionExposeType__All         = 0,
	EOptionExposeType__PcOnly      = 1,
	EOptionExposeType__XBoxOnly    = 2,
	EOptionExposeType__PS4Only     = 3,
	EOptionExposeType__PcAndXBox   = 4,
	EOptionExposeType__PcAndPS4    = 5,
	EOptionExposeType__XBoxAndPS4  = 6,
	EOptionExposeType__None        = 7,
	EOptionExposeType__EOptionExposeType_MAX = 8
};


// Enum ShadowTrackerExtra.EWeatherChange
enum class EWeatherChange : uint8_t
{
	EWeatherChange__NoChange       = 0,
	EWeatherChange__Rainy          = 1,
	EWeatherChange__Foggy          = 2,
	EWeatherChange__EWeatherChange_MAX = 3
};


// Enum ShadowTrackerExtra.EMinimapColorType
enum class EMinimapColorType : uint8_t
{
	EMinimapColorType__DESATURATED = 0,
	EMinimapColorType__SATURATED   = 1,
	EMinimapColorType__EMinimapColorType_MAX = 2
};


// Enum ShadowTrackerExtra.EDamageZoneType
enum class EDamageZoneType : uint8_t
{
	EDamageZoneType__Head          = 0,
	EDamageZoneType__Torso         = 1,
	EDamageZoneType__Arm           = 2,
	EDamageZoneType__Pelvis        = 3,
	EDamageZoneType__Leg           = 4,
	EDamageZoneType__EDamageZoneType_MAX = 5
};


// Enum ShadowTrackerExtra.ERedZoneGenerateType
enum class ERedZoneGenerateType : uint8_t
{
	ERedZoneGenerateType__None     = 0,
	ERedZoneGenerateType__Uniform_Distribution = 1,
	ERedZoneGenerateType__Ringtaw  = 2,
	ERedZoneGenerateType__Outsider = 3,
	ERedZoneGenerateType__RingtawOrOutsider = 4,
	ERedZoneGenerateType__ERedZoneGenerateType_MAX = 5
};


// Enum ShadowTrackerExtra.ETslHudType
enum class ETslHudType : uint8_t
{
	ETslHudType__None              = 0,
	ETslHudType__CharacterHud      = 1,
	ETslHudType__SpectatorHud      = 2,
	ETslHudType__ObserverHud       = 3,
	ETslHudType__ReplayHud         = 4,
	ETslHudType__ETslHudType_MAX   = 5
};


// Enum ShadowTrackerExtra.EAnimatableCustomizableTypes
enum class EAnimatableCustomizableTypes : uint8_t
{
	EAnimatableCustomizableTypes__Hair = 0,
	EAnimatableCustomizableTypes__Outer = 1,
	EAnimatableCustomizableTypes__Legs = 2,
	EAnimatableCustomizableTypes__EAnimatableCustomizableTypes_MAX = 3
};


// Enum ShadowTrackerExtra.EGameEndState
enum class EGameEndState : uint8_t
{
	EGameEndState__None            = 0,
	EGameEndState__CereMony        = 1,
	EGameEndState__Cinematic       = 2,
	EGameEndState__MatchFinish     = 3,
	EGameEndState__EGameEndState_MAX = 4
};


// Enum ShadowTrackerExtra.ELobbyBlurChangingStates
enum class ELobbyBlurChangingStates : uint8_t
{
	ELobbyBlurChangingStates__AlwaysOff = 0,
	ELobbyBlurChangingStates__AlwaysOn = 1,
	ELobbyBlurChangingStates__ELobbyBlurChangingStates_MAX = 2
};


// Enum ShadowTrackerExtra.ELobbyCameraStates
enum class ELobbyCameraStates : uint8_t
{
	ELobbyCameraStates__XBox_Home  = 0,
	ELobbyCameraStates__Main       = 1,
	ELobbyCameraStates__Main01     = 2,
	ELobbyCameraStates__Menu       = 3,
	ELobbyCameraStates__Custom     = 4,
	ELobbyCameraStates__Custom01   = 5,
	ELobbyCameraStates__EventPass_Milestone = 6,
	ELobbyCameraStates__EventPass_Milestone01 = 7,
	ELobbyCameraStates__EventPass_Missions = 8,
	ELobbyCameraStates__ViewMode_Character = 9,
	ELobbyCameraStates__ViewMode_Weapon = 10,
	ELobbyCameraStates__ViewMode_Parachute = 11,
	ELobbyCameraStates__EventPass_Milestone_0_Particle = 12,
	ELobbyCameraStates__None       = 13,
	ELobbyCameraStates__ELobbyCameraStates_MAX = 14
};


// Enum ShadowTrackerExtra.EUiShowType
enum class EUiShowType : uint8_t
{
	EUiShowType__AlwaysShow        = 0,
	EUiShowType__TpsOnlyShow       = 1,
	EUiShowType__FpsOnlyShow       = 2,
	EUiShowType__AlwaysHide        = 3,
	EUiShowType__EUiShowType_MAX   = 4
};


// Enum ShadowTrackerExtra.EGamepadInputResponseTypes
enum class EGamepadInputResponseTypes : uint8_t
{
	EGamepadInputResponseTypes__Pressed = 0,
	EGamepadInputResponseTypes__Released = 1,
	EGamepadInputResponseTypes__Tap = 2,
	EGamepadInputResponseTypes__Hold = 3,
	EGamepadInputResponseTypes__DoubleTap = 4,
	EGamepadInputResponseTypes__EGamepadInputResponseTypes_MAX = 5
};


// Enum ShadowTrackerExtra.EGamepadPresets
enum class EGamepadPresets : uint8_t
{
	EGamepadPresets__Preset        = 0,
	EGamepadPresets__Preset01      = 1,
	EGamepadPresets__Preset_MAX    = 2
};


// Enum ShadowTrackerExtra.EKeyGuideShowCases
enum class EKeyGuideShowCases : uint8_t
{
	EKeyGuideShowCases__Reload     = 0,
	EKeyGuideShowCases__ExitVehicle = 1,
	EKeyGuideShowCases__EKeyGuideShowCases_MAX = 2
};


// Enum ShadowTrackerExtra.ETslInputModes
enum class ETslInputModes : uint8_t
{
	ETslInputModes__Toggle         = 0,
	ETslInputModes__Hold           = 1,
	ETslInputModes__DoubleTap      = 2,
	ETslInputModes__ETslInputModes_MAX = 3
};


// Enum ShadowTrackerExtra.EGameplayClientReplay
enum class EGameplayClientReplay : uint8_t
{
	EGameplayClientReplay__Replay  = 0,
	EGameplayClientReplay__Killcam = 1,
	EGameplayClientReplay__EGameplayClientReplay_MAX = 2
};


// Enum ShadowTrackerExtra.EGameplayFunctionalities
enum class EGameplayFunctionalities : uint8_t
{
	EGameplayFunctionalities__FreeLookInterp = 0,
	EGameplayFunctionalities__EGameplayFunctionalities_MAX = 1
};


// Enum ShadowTrackerExtra.EInputModeSettingActions
enum class EInputModeSettingActions : uint8_t
{
	EInputModeSettingActions__Crouch = 0,
	EInputModeSettingActions__Prone = 1,
	EInputModeSettingActions__Walk = 2,
	EInputModeSettingActions__Sprint = 3,
	EInputModeSettingActions__HoldRotation = 4,
	EInputModeSettingActions__HoldBreath = 5,
	EInputModeSettingActions__Peek = 6,
	EInputModeSettingActions__Map  = 7,
	EInputModeSettingActions__ADS  = 8,
	EInputModeSettingActions__Aim  = 9,
	EInputModeSettingActions__HoldAngled = 10,
	EInputModeSettingActions__EInputModeSettingActions_MAX = 11
};


// Enum ShadowTrackerExtra.EKeyBindingSlot
enum class EKeyBindingSlot : uint8_t
{
	EKeyBindingSlot__FirstKey      = 0,
	EKeyBindingSlot__SecondKey     = 1,
	EKeyBindingSlot__EKeyBindingSlot_MAX = 2
};


// Enum ShadowTrackerExtra.EReportDetailCauseType
enum class EReportDetailCauseType : uint8_t
{
	EReportDetailCauseType__AutoAim = 0,
	EReportDetailCauseType__NoRecoil = 1,
	EReportDetailCauseType__EspOrPenetration = 2,
	EReportDetailCauseType__Speedhack = 3,
	EReportDetailCauseType__EReportDetailCauseType_MAX = 4
};


// Enum ShadowTrackerExtra.EReportedSessionType
enum class EReportedSessionType : uint8_t
{
	EReportedSessionType__PublicOrCustomGame = 0,
	EReportedSessionType__Killcam  = 1,
	EReportedSessionType__Replay   = 2,
	EReportedSessionType__EReportedSessionType_MAX = 3
};


// Enum ShadowTrackerExtra.EReportCause
enum class EReportCause : uint8_t
{
	EReportCause__Default          = 0,
	EReportCause__Cheat            = 1,
	EReportCause__TeamKill         = 2,
	EReportCause__Teaming          = 3,
	EReportCause__InappropriateID  = 4,
	EReportCause__VerbalHarassment = 5,
	EReportCause__Griefing         = 6,
	EReportCause__EReportCause_MAX = 7
};


// Enum ShadowTrackerExtra.ESubjectToReport
enum class ESubjectToReport : uint8_t
{
	ESubjectToReport__None         = 0,
	ESubjectToReport__Killer       = 1,
	ESubjectToReport__Spectating_Player = 2,
	ESubjectToReport__Replay_Player = 3,
	ESubjectToReport__Team_Member  = 4,
	ESubjectToReport__ESubjectToReport_MAX = 5
};


// Enum ShadowTrackerExtra.ECarePackageIconType
enum class ECarePackageIconType : uint8_t
{
	ECarePackageIconType__Normal   = 0,
	ECarePackageIconType__Flying   = 1,
	ECarePackageIconType__Opened   = 2,
	ECarePackageIconType__ECarePackageIconType_MAX = 3
};


// Enum ShadowTrackerExtra.ECharacterIconType
enum class ECharacterIconType : uint8_t
{
	ECharacterIconType__Normal     = 0,
	ECharacterIconType__Vehicle    = 1,
	ECharacterIconType__Parachute  = 2,
	ECharacterIconType__Die        = 3,
	ECharacterIconType__Groggy     = 4,
	ECharacterIconType__Quitter    = 5,
	ECharacterIconType__Observer   = 6,
	ECharacterIconType__ECharacterIconType_MAX = 7
};


// Enum ShadowTrackerExtra.EReportUiType
enum class EReportUiType : uint8_t
{
	EReportUiType__Normal          = 0,
	EReportUiType__Respawn         = 1,
	EReportUiType__EReportUiType_MAX = 2
};


// Enum ShadowTrackerExtra.ECharacterNegativeEffects
enum class ECharacterNegativeEffects : uint8_t
{
	ECharacterNegativeEffects__Blind = 0,
	ECharacterNegativeEffects__Burning = 1,
	ECharacterNegativeEffects__Total = 2,
	ECharacterNegativeEffects__ECharacterNegativeEffects_MAX = 3
};


// Enum ShadowTrackerExtra.EZombieModePlayerState
enum class EZombieModePlayerState : uint8_t
{
	EZombieModePlayerState__None   = 0,
	EZombieModePlayerState__Human  = 1,
	EZombieModePlayerState__ReadyToRevive = 2,
	EZombieModePlayerState__Zombie = 3,
	EZombieModePlayerState__EZombieModePlayerState_MAX = 4
};


// Enum ShadowTrackerExtra.ETeamChangeZombieMode
enum class ETeamChangeZombieMode : uint8_t
{
	ETeamChangeZombieMode__None    = 0,
	ETeamChangeZombieMode__LeaveTeam = 1,
	ETeamChangeZombieMode__JoinTeam = 2,
	ETeamChangeZombieMode__ETeamChangeZombieMode_MAX = 3
};


// Enum ShadowTrackerExtra.EFollowCameraMode
enum class EFollowCameraMode : uint8_t
{
	EFollowCameraMode__CharacterCamera = 0,
	EFollowCameraMode__VehicleCamera = 1,
	EFollowCameraMode__AircraftCamera = 2,
	EFollowCameraMode__ParachutingCamera = 3,
	EFollowCameraMode__FallingWithParachuteCamera = 4,
	EFollowCameraMode__EFollowCameraMode_MAX = 5
};


// Enum ShadowTrackerExtra.EObserverCameraMode
enum class EObserverCameraMode : uint8_t
{
	EObserverCameraMode__FixedCamera = 0,
	EObserverCameraMode__FreeCamera = 1,
	EObserverCameraMode__PlayerCamera = 2,
	EObserverCameraMode__FollowCamera = 3,
	EObserverCameraMode__EObserverCameraMode_MAX = 4
};


// Enum ShadowTrackerExtra.EObserverAuthorityType
enum class EObserverAuthorityType : uint8_t
{
	EObserverAuthorityType__None   = 0,
	EObserverAuthorityType__FromBeginning = 1,
	EObserverAuthorityType__AfterDeath = 2,
	EObserverAuthorityType__AfterExtermination = 3,
	EObserverAuthorityType__EagleEye = 4,
	EObserverAuthorityType__EObserverAuthorityType_MAX = 5
};


// Enum ShadowTrackerExtra.ETSLValueType
enum class ETSLValueType : uint8_t
{
	ETSLValueType__Float           = 0,
	ETSLValueType__Int             = 1,
	ETSLValueType__String          = 2,
	ETSLValueType__Bool            = 3,
	ETSLValueType__ETSLValueType_MAX = 4
};


// Enum ShadowTrackerExtra.EQualityType
enum class EQualityType : uint8_t
{
	EQualityType__EMainQuality     = 0,
	EQualityType__EViewDistanceQuality = 1,
	EQualityType__EShadowQuality   = 2,
	EQualityType__EAntiAliasingQuality = 3,
	EQualityType__ETextureQuality  = 4,
	EQualityType__EVisualEffectQuality = 5,
	EQualityType__EPostProcessingQuality = 6,
	EQualityType__EFoliageQuality  = 7,
	EQualityType__EQualityType_MAX = 8
};


// Enum ShadowTrackerExtra.ENearClippingLevel
enum class ENearClippingLevel : uint8_t
{
	ENearClippingLevel__Default    = 0,
	ENearClippingLevel__Low        = 1,
	ENearClippingLevel__Middle     = 2,
	ENearClippingLevel__High       = 3,
	ENearClippingLevel__ENearClippingLevel_MAX = 4
};


// Enum ShadowTrackerExtra.EThingSpotGroupType
enum class EThingSpotGroupType : uint8_t
{
	EThingSpotGroupType__GroupA    = 0,
	EThingSpotGroupType__GroupB    = 1,
	EThingSpotGroupType__GroupC    = 2,
	EThingSpotGroupType__GroupD    = 3,
	EThingSpotGroupType__GroupE    = 4,
	EThingSpotGroupType__GroupF    = 5,
	EThingSpotGroupType__GroupG    = 6,
	EThingSpotGroupType__GroupH    = 7,
	EThingSpotGroupType__GroupI    = 8,
	EThingSpotGroupType__GroupJ    = 9,
	EThingSpotGroupType__GroupK    = 10,
	EThingSpotGroupType__GroupL    = 11,
	EThingSpotGroupType__GroupM    = 12,
	EThingSpotGroupType__GroupN    = 13,
	EThingSpotGroupType__EThingSpotGroupType_MAX = 14
};


// Enum ShadowTrackerExtra.EPhysMaterialType
enum class EPhysMaterialType : uint8_t
{
	EPhysMaterialType__Unknown     = 0,
	EPhysMaterialType__Asphalt     = 1,
	EPhysMaterialType__Dirt        = 2,
	EPhysMaterialType__Water       = 3,
	EPhysMaterialType__Wood        = 4,
	EPhysMaterialType__Stone       = 5,
	EPhysMaterialType__Metal       = 6,
	EPhysMaterialType__EPhysMaterialType_MAX = 7
};


// Enum ShadowTrackerExtra.EEquipableItemSoundType
enum class EEquipableItemSoundType : uint8_t
{
	EEquipableItemSoundType__None  = 0,
	EEquipableItemSoundType__Vest  = 1,
	EEquipableItemSoundType__LongCoat = 2,
	EEquipableItemSoundType__HipSack = 3,
	EEquipableItemSoundType__Cloth = 4,
	EEquipableItemSoundType__BackPack = 5,
	EEquipableItemSoundType__MilitaryShoes = 6,
	EEquipableItemSoundType__Sneakers = 7,
	EEquipableItemSoundType__EEquipableItemSoundType_MAX = 8
};


// Enum ShadowTrackerExtra.EEquipableItemSoundGroup
enum class EEquipableItemSoundGroup : uint8_t
{
	EEquipableItemSoundGroup__Default = 0,
	EEquipableItemSoundGroup__Shoes = 1,
	EEquipableItemSoundGroup__EEquipableItemSoundGroup_MAX = 2
};


// Enum ShadowTrackerExtra.EColorBlindType
enum class EColorBlindType : uint8_t
{
	EColorBlindType__Normal        = 0,
	EColorBlindType__Deuteranopia  = 1,
	EColorBlindType__Protanopia    = 2,
	EColorBlindType__Tritanopia    = 3,
	EColorBlindType__EColorBlindType_MAX = 4
};


// Enum ShadowTrackerExtra.EFrameRateLimitType
enum class EFrameRateLimitType : uint8_t
{
	EFrameRateLimitType__Unlimited = 0,
	EFrameRateLimitType__Fixed     = 1,
	EFrameRateLimitType__Fixed01   = 2,
	EFrameRateLimitType__Customizable = 3,
	EFrameRateLimitType__DisplayBased = 4,
	EFrameRateLimitType__EFrameRateLimitType_MAX = 5
};


// Enum ShadowTrackerExtra.ETslPhysMaterialType
enum class ETslPhysMaterialType : uint8_t
{
	ETslPhysMaterialType__Unknown  = 0,
	ETslPhysMaterialType__Concrete = 1,
	ETslPhysMaterialType__Dirt     = 2,
	ETslPhysMaterialType__Water    = 3,
	ETslPhysMaterialType__Metal    = 4,
	ETslPhysMaterialType__Wood     = 5,
	ETslPhysMaterialType__Grass    = 6,
	ETslPhysMaterialType__Glass    = 7,
	ETslPhysMaterialType__Flesh    = 8,
	ETslPhysMaterialType__ETslPhysMaterialType_MAX = 9
};


// Enum ShadowTrackerExtra.EDamageReason
enum class EDamageReason : uint8_t
{
	EDamageReason__None            = 0,
	EDamageReason__HeadShot        = 1,
	EDamageReason__TorsoShot       = 2,
	EDamageReason__PelvisShot      = 3,
	EDamageReason__ArmShot         = 4,
	EDamageReason__LegShot         = 5,
	EDamageReason__LimbsShot       = 6,
	EDamageReason__NonSpecific     = 7,
	EDamageReason__EDamageReason_MAX = 8
};


// Enum ShadowTrackerExtra.ETppAimCameraPosition
enum class ETppAimCameraPosition : uint8_t
{
	ETppAimCameraPosition__LatestAimPosition = 0,
	ETppAimCameraPosition__LastPeekingPosition = 1,
	ETppAimCameraPosition__ResetToRightShoulderPosition = 2,
	ETppAimCameraPosition__ResetToLeftShoulderPosition = 3,
	ETppAimCameraPosition__ETppAimCameraPosition_MAX = 4
};


// Enum ShadowTrackerExtra.ETargetingType
enum class ETargetingType : uint8_t
{
	ETargetingType__Targeting_None = 0,
	ETargetingType__Targeting_Aiming = 1,
	ETargetingType__Targeting_Scoping = 2,
	ETargetingType__Targeting_MAX  = 3
};


// Enum ShadowTrackerExtra.EAccessorySlot
enum class EAccessorySlot : uint8_t
{
	EAccessorySlot__Slot_Primary   = 0,
	EAccessorySlot__Slot_Secondary = 1,
	EAccessorySlot__Slot_SideArm   = 2,
	EAccessorySlot__Slot_Melee     = 3,
	EAccessorySlot__Slot_Thrown    = 4,
	EAccessorySlot__Slot_None      = 5,
	EAccessorySlot__Slot_MAX       = 6
};


// Enum ShadowTrackerExtra.EWeaponClass
enum class EWeaponClass : uint8_t
{
	EWeaponClass__Class_None       = 0,
	EWeaponClass__Class_Pistol     = 1,
	EWeaponClass__Class_SMG        = 2,
	EWeaponClass__Class_Rifle      = 3,
	EWeaponClass__Class_Carbine    = 4,
	EWeaponClass__Class_Shotgun    = 5,
	EWeaponClass__Class_Sniper     = 6,
	EWeaponClass__Class_DMR        = 7,
	EWeaponClass__Class_LMG        = 8,
	EWeaponClass__Class_Melee      = 9,
	EWeaponClass__Class_Throwable  = 10,
	EWeaponClass__Class_Shield     = 11,
	EWeaponClass__Class_MAX        = 12
};


// Enum ShadowTrackerExtra.EThrownWeaponType
enum class EThrownWeaponType : uint8_t
{
	EThrownWeaponType__Thrown_Grenade = 0,
	EThrownWeaponType__Thrown_Molotov = 1,
	EThrownWeaponType__Thrown_Other = 2,
	EThrownWeaponType__Thrown_MAX  = 3
};


// Enum ShadowTrackerExtra.EAttachmentCalculateType
enum class EAttachmentCalculateType : uint8_t
{
	EAttachmentCalculateType__Addition = 0,
	EAttachmentCalculateType__Multiply = 1,
	EAttachmentCalculateType__EAttachmentCalculateType_MAX = 2
};


// Enum ShadowTrackerExtra.EFiringMode
enum class EFiringMode : uint8_t
{
	EFiringMode__Normal            = 0,
	EFiringMode__Burst             = 1,
	EFiringMode__FullAuto          = 2,
	EFiringMode__EFiringMode_MAX   = 3
};


// Enum ShadowTrackerExtra.EWeaponHand
enum class EWeaponHand : uint8_t
{
	EWeaponHand__Left              = 0,
	EWeaponHand__Right             = 1,
	EWeaponHand__Total             = 2,
	EWeaponHand__EWeaponHand_MAX   = 3
};


// Enum ShadowTrackerExtra.EAnimWeaponType
enum class EAnimWeaponType : uint8_t
{
	EAnimWeaponType__None          = 0,
	EAnimWeaponType__Rifle         = 1,
	EAnimWeaponType__Pistol        = 2,
	EAnimWeaponType__Throwable     = 3,
	EAnimWeaponType__Melee         = 4,
	EAnimWeaponType__Shield        = 5,
	EAnimWeaponType__EAnimWeaponType_MAX = 6
};


// Enum ShadowTrackerExtra.ECameraViewBehaviour
enum class ECameraViewBehaviour : uint8_t
{
	ECameraViewBehaviour__FpsAndTps = 0,
	ECameraViewBehaviour__FpsOnly  = 1,
	ECameraViewBehaviour__TpsOnly  = 2,
	ECameraViewBehaviour__ECameraViewBehaviour_MAX = 3
};


// Enum ShadowTrackerExtra.EPlayerStartType
enum class EPlayerStartType : uint8_t
{
	EPlayerStartType__OnePlace     = 0,
	EPlayerStartType__SeveralPlace = 1,
	EPlayerStartType__EPlayerStartType_MAX = 2
};


// Enum ShadowTrackerExtra.EMatchStartType
enum class EMatchStartType : uint8_t
{
	EMatchStartType__Normal        = 0,
	EMatchStartType__Airborne      = 1,
	EMatchStartType__EMatchStartType_MAX = 2
};


// Enum ShadowTrackerExtra.EGender
enum class EGender : uint8_t
{
	EGender__Male                  = 0,
	EGender__Female                = 1,
	EGender__EGender_MAX           = 2
};


// Enum ShadowTrackerExtra.ETslWheelWidgetMouseCursorDirectionType
enum class ETslWheelWidgetMouseCursorDirectionType : uint8_t
{
	ETslWheelWidgetMouseCursorDirectionType__ABSOLUTE_COORD = 0,
	ETslWheelWidgetMouseCursorDirectionType__AREA_RESTRICTED_COORD = 1,
	ETslWheelWidgetMouseCursorDirectionType__CIRCULAR_RESTRICTED_COORD = 2,
	ETslWheelWidgetMouseCursorDirectionType__ETslWheelWidgetMouseCursorDirectionType_MAX = 3
};


// Enum ShadowTrackerExtra.ETslWheelWidgetSelectType
enum class ETslWheelWidgetSelectType : uint8_t
{
	ETslWheelWidgetSelectType__BY_CLICK = 0,
	ETslWheelWidgetSelectType__BY_RELEASE = 1,
	ETslWheelWidgetSelectType__BY_MAX = 2
};


// Enum ShadowTrackerExtra.ERecoveryType
enum class ERecoveryType : uint8_t
{
	ERecovery_AddDirectly          = 0,
	ERecovery_AddTo                = 1,
	ERecovery_MAX                  = 2
};


// Enum ShadowTrackerExtra.EValueType
enum class EValueType : uint8_t
{
	EValueType_Percentage          = 0,
	EValueType_Absolute            = 1,
	EValueType_MAX                 = 2
};


// Enum ShadowTrackerExtra.EOperatorType
enum class EOperatorType : uint8_t
{
	EOperator_Equal                = 0,
	EOperator_Greater              = 1,
	EOperator_Less                 = 2,
	EOperator_GreaterEqual         = 3,
	EOperator_LessEqual            = 4,
	EOperator_MAX                  = 5
};


// Enum ShadowTrackerExtra.UTSkill_SoundCue_ListenType
enum class EUTSkill_SoundCue_ListenType : uint8_t
{
	UTSkill_SoundCue_ListenType__Listen_SelfOnly = 0,
	UTSkill_SoundCue_ListenType__Listen_Teammate = 1,
	UTSkill_SoundCue_ListenType__Listen_Target = 2,
	UTSkill_SoundCue_ListenType__Listen_AllTarget = 3,
	UTSkill_SoundCue_ListenType__Listen_All = 4,
	UTSkill_SoundCue_ListenType__Listen_MAX = 5
};


// Enum ShadowTrackerExtra.EVHSeatGUIType
enum class EVHSeatGUIType : uint8_t
{
	EVHSeatGUIType_NoSeat          = 0,
	EVHSeatGUIType_Empty           = 1,
	EVHSeatGUIType_Other           = 2,
	EVHSeatGUIType_Self            = 3,
	EVHSeatGUIType_Max             = 4
};


// Enum ShadowTrackerExtra.ESTExtraVehicleUserState
enum class ESTExtraVehicleUserState : uint8_t
{
	ESTExtraVehicleUserState__EVUS_OutOfVehicle = 0,
	ESTExtraVehicleUserState__EVUS_AsDriver = 1,
	ESTExtraVehicleUserState__EVUS_ASPassenger = 2,
	ESTExtraVehicleUserState__EVUS_MAX = 3
};


// Enum ShadowTrackerExtra.EWonderfulCutOutputType
enum class EWonderfulCutOutputType : uint8_t
{
	WonderfulCutOutputType_None    = 0,
	WonderfulCutOutputType_ChickenDinner = 1,
	WonderfulCutOutputType_ShootKill = 2,
	WonderfulCutOutputType_ShootLastBreath = 3,
	WonderfulCutOutputType_ShootDamage = 4,
	WonderfulCutOutputType_MeleeKill = 5,
	WonderfulCutOutputType_MeleeLastBreath = 6,
	WonderfulCutOutputType_GrenadeKill = 7,
	WonderfulCutOutputType_GrenadeLastBreath = 8,
	WonderfulCutOutputType_VehicleKill = 9,
	WonderfulCutOutputType_VehicleLastBreath = 10,
	WonderfulCutOutputType_MAX     = 11
};


// Enum ShadowTrackerExtra.EWonderfulCutShootDamageType
enum class EWonderfulCutShootDamageType : uint8_t
{
	WonderfulCutHurtType_None      = 0,
	WonderfulCutHurtType_Kill      = 1,
	WonderfulCutHurtType_LastBreath = 2,
	WonderfulCutHurtType_Hurt      = 3,
	WonderfulCutHurtType_MAX       = 4
};


// Enum ShadowTrackerExtra.EWonderfulCutCaptureType
enum class EWonderfulCutCaptureType : uint8_t
{
	WonderfulCutCaptureType_None   = 0,
	WonderfulCutCaptureType_ChickenDinner = 1,
	WonderfulCutCaptureType_Circle = 2,
	WonderfulCutCaptureType_Vehicle = 3,
	WonderfulCutCaptureType_Grenade = 4,
	WonderfulCutCaptureType_Melee  = 5,
	WonderfulCutCaptureType_ShootDamage = 6,
	WonderfulCutCaptureType_MAX    = 7
};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct ShadowTrackerExtra.AIActingCandidateData
// 0x0020
struct FAIActingCandidateData
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
	class AFakePlayerAIController*                     FakePlayerAIController;                                   // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.AIActingItem
// 0x0028
struct FAIActingItem
{
	float                                              StartSeconds;                                             // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              EndSeconds;                                               // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DeadPercent;                                              // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                PlayerNumScale;                                           // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0010(0x0008) MISSED OFFSET
	TArray<int>                                        WeaponIdList;                                             // 0x0018(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct ShadowTrackerExtra.AIBeginAttackEachOther
// 0x0008
struct FAIBeginAttackEachOther
{
	float                                              BeginAttackEachOtherTime;                                 // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RightRatingSection;                                       // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.DeliveryRatingConfig
// 0x0008
struct FDeliveryRatingConfig
{
	float                                              DeliveryInterval;                                         // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RightRatingSection;                                       // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.AIDeliveryAreaLimit
// 0x0018
struct FAIDeliveryAreaLimit
{
	struct FVector                                     TopLeftVec;                                               // 0x0000(0x000C) (Edit, IsPlainOldData)
	struct FVector                                     BottomRightVec;                                           // 0x000C(0x000C) (Edit, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.AIRatingDamage
// 0x0010
struct FAIRatingDamage
{
	float                                              RatingDamageScale;                                        // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FiringAccuracyRadius;                                     // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                AIFeedLimit;                                              // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SectionRightValue;                                        // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.AIAttackAIRatingDamage
// 0x000C
struct FAIAttackAIRatingDamage
{
	float                                              RatingDamageScale;                                        // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FiringAccuracyRadius;                                     // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SectionRightValue;                                        // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.DeliveryItem
// 0x0008
struct FDeliveryItem
{
	int                                                Percent;                                                  // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                DeliveryNum;                                              // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.DeliveryPlayerConfig
// 0x0018
struct FDeliveryPlayerConfig
{
	TArray<struct FDeliveryItem>                       DeliveryItem;                                             // 0x0000(0x0010) (Edit, ZeroConstructor)
	float                                              RightRatingSection;                                       // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.RegisterTimer
// 0x0030
struct FRegisterTimer
{
	int                                                waveindex;                                                // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	TArray<float>                                      times;                                                    // 0x0008(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x18];                                      // 0x0018(0x0018) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.AirAttackCfg
// 0x0014
struct FAirAttackCfg
{
	float                                              EscapeTime;                                               // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AttackLastingTime;                                        // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AttackAreaRadius;                                         // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                TotalBombs;                                               // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                BombsRadius;                                              // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.AirDropResource
// 0x0020
struct FAirDropResource
{
	class UStaticMesh*                                 AirdropBoxMesh;                                           // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMesh*                                 AirdropParachuteMesh;                                     // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             AirdropSmoke;                                             // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             AirdropFlash;                                             // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.AirDropBoxGenerateWrapperItemData
// 0x0010
struct FAirDropBoxGenerateWrapperItemData
{
	class UClass*                                      WrapperClass;                                             // 0x0000(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Count;                                                    // 0x0008(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.AirDropPlaneParams
// 0x001C
struct FAirDropPlaneParams
{
	float                                              FlyingHeight;                                             // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FlyingSpeed;                                              // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AirDropFallingSpeed;                                      // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsUseDebugLocation;                                      // 0x000C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	struct FVector                                     DebugDroppingLocation;                                    // 0x0010(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.AirDropConfig
// 0x000C
struct FAirDropConfig
{
	float                                              AirDropTime;                                              // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RandomDroppingRange;                                      // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DropStuffChance;                                          // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.SuperAirDropBoxDataItem
// 0x0010
struct FSuperAirDropBoxDataItem
{
	float                                              GenerateRate;                                             // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class UDataTable*                                  Table;                                                    // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.AirDropOrder
// 0x0030
struct FAirDropOrder
{
	struct FVector                                     AirDropPlaneSpawnPosition;                                // 0x0000(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     AirDropPlaneFlyingDirection;                              // 0x000C(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              AirDropPlaneFlyingSpeed;                                  // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     AirDropStuffFallingPosition;                              // 0x001C(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              AirDropStuffFallingSpeed;                                 // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsSpecialAirdrop;                                        // 0x002C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x002D(0x0003) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.FlyingParam
// 0x0014
struct FFlyingParam
{
	float                                              FlyingSpeed;                                              // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     FlyingDirection;                                          // 0x0004(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              AirPlaneSpawnServerTime;                                  // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.ReplacedSlotInfo
// 0x0008
struct FReplacedSlotInfo
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.HideBoneData
// 0x0010
struct FHideBoneData
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.MeshData
// 0x0080
struct FMeshData
{
	class UStaticMesh*                                 stMesh;                                                   // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class USkeletalMesh*                               skMesh;                                                   // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UMaterialInstance*                           matIns;                                                   // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	TArray<class UMaterialInstance*>                   additionalMats;                                           // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Transient)
	EMeshType                                          meshType;                                                 // 0x0028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
	TArray<int>                                        hiddenSlots;                                              // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Transient)
	TArray<struct FReplacedSlotInfo>                   replacedSlots;                                            // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Transient)
	TArray<struct FHideBoneData>                       hideBoneSlots;                                            // 0x0050(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Transient)
	struct FItemDefineID                               definedID;                                                // 0x0060(0x0018) (Edit, BlueprintVisible, Transient)
	EAvatarSubSlot                                     subSlot;                                                  // 0x0078(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0079(0x0007) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.MaterialSet
// 0x0030
struct FMaterialSet
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) UNKNOWN PROPERTY: SoftObjectProperty ShadowTrackerExtra.MaterialSet.targetMat
	EAvatarSlotType                                    targetSlot;                                               // 0x0028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.MeshPackage
// 0x0178
struct FMeshPackage
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) UNKNOWN PROPERTY: SoftObjectProperty ShadowTrackerExtra.MeshPackage.maleStMesh
	unsigned char                                      UnknownData01[0x28];                                      // 0x0028(0x0028) UNKNOWN PROPERTY: SoftObjectProperty ShadowTrackerExtra.MeshPackage.femaleStMesh
	unsigned char                                      UnknownData02[0x28];                                      // 0x0050(0x0028) UNKNOWN PROPERTY: SoftObjectProperty ShadowTrackerExtra.MeshPackage.maleSkMesh
	unsigned char                                      UnknownData03[0x28];                                      // 0x0078(0x0028) UNKNOWN PROPERTY: SoftObjectProperty ShadowTrackerExtra.MeshPackage.femaleSkMesh
	unsigned char                                      UnknownData04[0x28];                                      // 0x00A0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty ShadowTrackerExtra.MeshPackage.maleLODSkMesh
	unsigned char                                      UnknownData05[0x28];                                      // 0x00C8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty ShadowTrackerExtra.MeshPackage.femaleLODSkMesh
	unsigned char                                      UnknownData06[0x28];                                      // 0x00F0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty ShadowTrackerExtra.MeshPackage.maleMat
	unsigned char                                      UnknownData07[0x28];                                      // 0x0118(0x0028) UNKNOWN PROPERTY: SoftObjectProperty ShadowTrackerExtra.MeshPackage.femaleMat
	TArray<struct FMaterialSet>                        additionalMaleMats;                                       // 0x0140(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FMaterialSet>                        additionalFemaleMats;                                     // 0x0150(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class UMaterialInterface*                          baseMat;                                                  // 0x0160(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      animBP;                                                   // 0x0168(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EMeshType                                          meshType;                                                 // 0x0170(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x7];                                       // 0x0171(0x0007) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.AvatarItemData
// 0x0020 (0x00B8 - 0x0098)
struct FAvatarItemData : public FBattleItemData
{
	class USkeletalMesh*                               SkeletalMesh;                                             // 0x0098(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMesh*                                 StaticMesh;                                               // 0x00A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInstance*                           matInst;                                                  // 0x00A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                meshType;                                                 // 0x00B0(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00B4(0x0004) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.BodyAttachmentAttrModify
// 0x0018
struct FBodyAttachmentAttrModify
{
	struct FString                                     ModifyAttr;                                               // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	EAttrOperator                                      Op;                                                       // 0x0010(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	float                                              ModifyValue;                                              // 0x0014(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.BodyAttachmentConfig
// 0x0038
struct FBodyAttachmentConfig
{
	struct FText                                       AttachmentID;                                             // 0x0000(0x0018) (Edit, DisableEditOnInstance)
	TArray<struct FBodyAttachmentAttrModify>           BodyAttachmentAttrModifiers;                              // 0x0018(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     BodyDurabilityIndexName;                                  // 0x0028(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct ShadowTrackerExtra.PickUpItemData
// 0x0038
struct FPickUpItemData
{
	struct FItemDefineID                               ID;                                                       // 0x0000(0x0018) (Edit, BlueprintVisible)
	int                                                Count;                                                    // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	TArray<struct FBattleItemAdditionalData>           AdditionalDataList;                                       // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                InstanceID;                                               // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.SearchedPickUpItemResult
// 0x0040
struct FSearchedPickUpItemResult
{
	class APickUpWrapperActor*                         Wrapper;                                                  // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FPickUpItemData                             MainItemData;                                             // 0x0008(0x0038) (BlueprintVisible, BlueprintReadOnly)
};

// ScriptStruct ShadowTrackerExtra.BattleSearchItemSortingInfo
// 0x0048
struct FBattleSearchItemSortingInfo
{
	struct FSearchedPickUpItemResult                   SearchItemResult;                                         // 0x0000(0x0040) (BlueprintVisible)
	bool                                               bHighPriority;                                            // 0x0040(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0041(0x0007) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.BattleSearchBoxSortingInfo
// 0x0048
struct FBattleSearchBoxSortingInfo
{
	struct FSearchedPickUpItemResult                   pickUpItemResult;                                         // 0x0000(0x0040) (BlueprintVisible)
	bool                                               bHighPriority;                                            // 0x0040(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0041(0x0007) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.BattleItemSortingInfo
// 0x0020
struct FBattleItemSortingInfo
{
	struct FItemDefineID                               ItemDefineID;                                             // 0x0000(0x0018) (BlueprintVisible)
	bool                                               bHighPriority;                                            // 0x0018(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.SkinData
// 0x0008
struct FSkinData
{
	int                                                ParentID;                                                 // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                AvatarID;                                                 // 0x0004(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.BattleWeaponItemDisplayData
// 0x0020
struct FBattleWeaponItemDisplayData
{
	struct FString                                     ItemName;                                                 // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     WhiteIconPath;                                            // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct ShadowTrackerExtra.PickUpWrapperItem
// 0x0048
struct FPickUpWrapperItem
{
	struct FItemDefineID                               DefineID;                                                 // 0x0000(0x0018) (BlueprintVisible)
	int                                                Count;                                                    // 0x0018(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	TArray<struct FBattleItemAdditionalData>           AdditionalData;                                           // 0x0020(0x0010) (BlueprintVisible, ZeroConstructor)
	int                                                ParentIndex;                                              // 0x0030(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	struct FName                                       ParentSideAssociationName;                                // 0x0038(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ItemInstanceID;                                           // 0x0040(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.CreateBattleItemHandleAsyncRequest
// 0x0040
struct FCreateBattleItemHandleAsyncRequest
{
	struct FItemDefineID                               DefineID;                                                 // 0x0000(0x0018)
	class UObject*                                     Outer;                                                    // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     Path;                                                     // 0x0020(0x0010) (ZeroConstructor)
	struct FScriptDelegate                             Callback;                                                 // 0x0030(0x0014) (ZeroConstructor, InstancedReference)
};

// ScriptStruct ShadowTrackerExtra.WeaponAttachmentAttrModify
// 0x0018
struct FWeaponAttachmentAttrModify
{
	struct FString                                     ModifyAttr;                                               // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	EAttrOperator                                      Op;                                                       // 0x0010(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	float                                              ModifyValue;                                              // 0x0014(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.WeaponAttachmentDesc
// 0x0030
struct FWeaponAttachmentDesc
{
	struct FText                                       Desc;                                                     // 0x0000(0x0018) (Edit, DisableEditOnInstance)
	struct FText                                       DescValue;                                                // 0x0018(0x0018) (Edit, DisableEditOnInstance)
};

// ScriptStruct ShadowTrackerExtra.WeaponMeshCfg
// 0x00B0
struct FWeaponMeshCfg
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) UNKNOWN PROPERTY: SoftObjectProperty ShadowTrackerExtra.WeaponMeshCfg.stMesh
	unsigned char                                      UnknownData01[0x28];                                      // 0x0028(0x0028) UNKNOWN PROPERTY: SoftObjectProperty ShadowTrackerExtra.WeaponMeshCfg.skMesh
	unsigned char                                      UnknownData02[0x28];                                      // 0x0050(0x0028) UNKNOWN PROPERTY: SoftObjectProperty ShadowTrackerExtra.WeaponMeshCfg.stMeshLod
	unsigned char                                      UnknownData03[0x28];                                      // 0x0078(0x0028) UNKNOWN PROPERTY: SoftObjectProperty ShadowTrackerExtra.WeaponMeshCfg.skMeshLod
	class UMaterialInstance*                           MeshMat;                                                  // 0x00A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EMeshType                                          meshType;                                                 // 0x00A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x00A9(0x0007) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.ReplacedAttament
// 0x00C0
struct FReplacedAttament
{
	TArray<struct FItemDefineID>                       targetWeaponIDList;                                       // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FWeaponMeshCfg                              replacedAttachmentCfg;                                    // 0x0010(0x00B0) (Edit, DisableEditOnInstance)
};

// ScriptStruct ShadowTrackerExtra.WeaponAttachmentConfig
// 0x0160
struct FWeaponAttachmentConfig
{
	struct FText                                       AttachmentName;                                           // 0x0000(0x0018) (Edit, DisableEditOnInstance)
	EWeaponAttachmentSocketType                        AttachmentSocketType;                                     // 0x0018(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EOpticalSightType                                  SightType;                                                // 0x0019(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsExtendMaxBulletNumInOneClip;                            // 0x001A(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsSilencer;                                               // 0x001B(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsFireSuppressor;                                         // 0x001C(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsCompensator;                                            // 0x001D(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x001E(0x0002) MISSED OFFSET
	TArray<struct FWeaponAttachmentAttrModify>         WeaponAttachmentAttrModifys;                              // 0x0020(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FWeaponAttachmentDesc>               WeaponAttachmentDescs;                                    // 0x0030(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TMap<int, struct FName>                            socketTypeToName;                                         // 0x0040(0x0050) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FWeaponMeshCfg                              MeshPackage;                                              // 0x0090(0x00B0) (Edit, DisableEditOnInstance)
	TArray<struct FReplacedAttament>                   replacementWeapon;                                        // 0x0140(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<class UAnimationAsset*>                     AttachmentAnimList;                                       // 0x0150(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct ShadowTrackerExtra.AIControllerCachedData
// 0x0030
struct FAIControllerCachedData
{
	class ASTExtraBaseCharacter*                       ControlledPawn;                                           // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0008(0x0028) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.ModeStringParameter
// 0x0020
struct FModeStringParameter
{
	struct FString                                     Key;                                                      // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     Value;                                                    // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct ShadowTrackerExtra.TslBpRewardRule
// 0x0058 (0x0060 - 0x0008)
struct FTslBpRewardRule : public FTableRowBase
{
	float                                              OverallGain;                                              // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PlayTimeGain;                                             // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RankingGain;                                              // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              KillGain;                                                 // 0x0014(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DamageGain;                                               // 0x0018(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                ExpectedMatchParticipantsNum;                             // 0x001C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SessionWarmingUpTimeInMinutes;                            // 0x0020(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AvgMatchInProgressTimeInMinutes;                          // 0x0024(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AvgTotalKillsInSession;                                   // 0x0028(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AvgTotalDamageInSession;                                  // 0x002C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SurvivalTimeFactor;                                       // 0x0030(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TeamSpectatingTimeFactor;                                 // 0x0034(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BasePlayTimeInMinutes;                                    // 0x0038(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              EarlyPlayTimeSlopePerMinutes;                             // 0x003C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LaterPlayTimeSlopePerMinutes;                             // 0x0040(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TotalBpAmountForRankingPerHour;                           // 0x0044(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RankingDistributionFunctionWeight;                        // 0x0048(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RankingBonusWinner;                                       // 0x004C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RankingBonusTop10;                                        // 0x0050(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TotalBpAmountForKillPerHour;                              // 0x0054(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TotalBpAmountForDamagePerHour;                            // 0x0058(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.TslActionInputCallbackConfig
// 0x0018
struct FTslActionInputCallbackConfig
{
	struct FName                                       ActionName;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       CallbackName;                                             // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bConsume;                                                 // 0x0010(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInputEvent>                           InputEvent;                                               // 0x0011(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0012(0x0006) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.TslAxisInputCallbackConfig
// 0x0020
struct FTslAxisInputCallbackConfig
{
	struct FName                                       AxisName;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Scale;                                                    // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FName                                       CallbackName;                                             // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bConsume;                                                 // 0x0018(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.UmgWidgetBinder
// 0x0018
struct FUmgWidgetBinder
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	struct FName                                       Name;                                                     // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UUserWidget*                                 Parent;                                                   // 0x0010(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.UmgWidgetBinder_Animation
// 0x0008 (0x0020 - 0x0018)
struct FUmgWidgetBinder_Animation : public FUmgWidgetBinder
{
	class UWidgetAnimation*                            CachedAnimation;                                          // 0x0018(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.BlockAction
// 0x0010
struct FBlockAction
{
	struct FName                                       ActionName;                                               // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EInputEvent>                           KeyEvent;                                                 // 0x0008(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.AIAttrObserver
// 0x0008
struct FAIAttrObserver
{
	EAITriggerAttrType                                 AttrType;                                                 // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EAIAttrCompareType                                 CompareType;                                              // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	int                                                ComparePercentValue;                                      // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.WeaponType2Range
// 0x0008
struct FWeaponType2Range
{
	EWeaponType                                        WeaponType;                                               // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              Range;                                                    // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.AIDistantJudgeNoftify
// 0x0030
struct FAIDistantJudgeNoftify
{
	float                                              RightValue;                                               // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                SetBBValue;                                               // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FBlackboardKeySelector                      NotifyBlackBoardKey;                                      // 0x0008(0x0028) (Edit)
};

// ScriptStruct ShadowTrackerExtra.AIEquipSpawnItem
// 0x0014
struct FAIEquipSpawnItem
{
	EAIEquipSpawnItemType                              ItemType;                                                 // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                ItemSpecificID;                                           // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Count;                                                    // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ExtraConfigValue;                                         // 0x000C(0x0008) (Edit, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.AIEquipSpawnGroup
// 0x0010
struct FAIEquipSpawnGroup
{
	TArray<struct FAIEquipSpawnItem>                   Item;                                                     // 0x0000(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct ShadowTrackerExtra.AIEquipSpawnGroupDataBase
// 0x0018
struct FAIEquipSpawnGroupDataBase
{
	float                                              RightTime;                                                // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	TArray<struct FAIEquipSpawnGroup>                  AIEquipSpawnGroupList;                                    // 0x0008(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct ShadowTrackerExtra.BulletHitInfoUploadData
// 0x0064
struct FBulletHitInfoUploadData
{
	struct FVector                                     ImpactPoint;                                              // 0x0000(0x000C) (IsPlainOldData)
	struct FVector_NetQuantizeNormal                   ImpactNormal;                                             // 0x000C(0x000C)
	struct FVector                                     ImpactActorPos;                                           // 0x0018(0x000C) (IsPlainOldData)
	struct FVector                                     ShootMomentMuzzlePos;                                     // 0x0024(0x000C) (IsPlainOldData)
	struct FVector2D                                   ShootDir2D;                                               // 0x0030(0x0008) (IsPlainOldData)
	unsigned char                                      SurfaceType;                                              // 0x0038(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0039(0x0003) MISSED OFFSET
	uint32_t                                           ShootID;                                                  // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData)
	uint16_t                                           CompensationTime;                                         // 0x0040(0x0002) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0042(0x0002) MISSED OFFSET
	TWeakObjectPtr<class AActor>                       Actor;                                                    // 0x0044(0x0008) (ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class UPrimitiveComponent>          Component;                                                // 0x004C(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                Timestamp;                                                // 0x0054(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ClientTimeStamp;                                          // 0x0058(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      HitBodyType;                                              // 0x005C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x005D(0x0003) MISSED OFFSET
	uint32_t                                           CharacterImpactOffsetSquared;                             // 0x0060(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.LocalShootHitData
// 0x0078
struct FLocalShootHitData
{
	uint32_t                                           ShootID;                                                  // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FVector_NetQuantize                         ShootingDeviation;                                        // 0x0004(0x000C)
	struct FVector_NetQuantize                         BulletsBornPosition;                                      // 0x0010(0x000C)
	int                                                BulletFlyDistance;                                        // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                BulletDown;                                               // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	int8_t                                             CurBullet;                                                // 0x0024(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0025(0x0003) MISSED OFFSET
	int                                                ShootInterval;                                            // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                BulletFlyTime;                                            // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                BulletShootTime;                                          // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                BulletHitTime;                                            // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                AimFov;                                                   // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bulletDamageReduceRatio;                                  // 0x003C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x003D(0x0003) MISSED OFFSET
	struct FVector_NetQuantize                         ShootingRecoil;                                           // 0x0040(0x000C)
	unsigned char                                      UnknownData02[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
	int64_t                                            ClientStartTime;                                          // 0x0050(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<int>                                        MrpcsFlow;                                                // 0x0058(0x0010) (ZeroConstructor)
	int                                                AutoAimSpeed;                                             // 0x0068(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                AutoAimSpeedRateMax;                                      // 0x006C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                AutoAimRangeMax;                                          // 0x0070(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                AutoAimRangeRateMax;                                      // 0x0074(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.CameraSettings
// 0x0014
struct FCameraSettings
{
	float                                              TargetArmLength;                                          // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              LagSpeed;                                                 // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     SocketOffset;                                             // 0x0008(0x000C) (IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.MeshSynData
// 0x0020
struct FMeshSynData
{
	struct FItemDefineID                               DefineID;                                                 // 0x0000(0x0018)
	int                                                gender;                                                   // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	ESyncOperation                                     operationType;                                            // 0x001C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.SpawnAndBackpackWeaponReplicatedData
// 0x0058
struct FSpawnAndBackpackWeaponReplicatedData
{
	class ASTExtraWeapon*                              TargetWeapon;                                             // 0x0000(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       LogicSocket;                                              // 0x0008(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoUse;                                                 // 0x0010(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bNeedSwitch;                                              // 0x0011(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0012(0x0006) MISSED OFFSET
	struct FItemDefineID                               ID;                                                       // 0x0018(0x0018) (BlueprintVisible)
	bool                                               bResetBulletNum;                                          // 0x0030(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0031(0x0003) MISSED OFFSET
	int                                                OperationIndex;                                           // 0x0034(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class ACharacter*                                  OwnerCharacter;                                           // 0x0038(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     OwnerCharacterName;                                       // 0x0040(0x0010) (BlueprintVisible, ZeroConstructor)
	bool                                               bIsValid;                                                 // 0x0050(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0051(0x0007) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.WeaponSystemDataOnSimulateClient
// 0x0038
struct FWeaponSystemDataOnSimulateClient
{
	class ASTExtraWeapon*                              TargetWeapon;                                             // 0x0000(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       LogicSocket;                                              // 0x0008(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoUse;                                                 // 0x0010(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
	struct FItemDefineID                               ID;                                                       // 0x0018(0x0018) (BlueprintVisible)
	int                                                OperationIndex;                                           // 0x0030(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BagLevel;                                                 // 0x0034(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.WeaponReconnectReplicateData
// 0x0060
struct FWeaponReconnectReplicateData
{
	class ASTExtraPlayerController*                    OwnerPlayerController;                                    // 0x0000(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     OwnerPlayerName;                                          // 0x0008(0x0010) (BlueprintVisible, ZeroConstructor)
	struct FName                                       WeaponInventoryLogicSocket;                               // 0x0018(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                WeaponBulletNumInClip;                                    // 0x0020(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	uint32_t                                           WeaponShootID;                                            // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           WeaponClipID;                                             // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EFreshWeaponStateType>                 CurWeaponState;                                           // 0x002C(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EGunFireMode                                       FireMode;                                                 // 0x002D(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x002E(0x0002) MISSED OFFSET
	int                                                TotalFireMode;                                            // 0x0030(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	struct FItemDefineID                               DefineID;                                                 // 0x0038(0x0018) (BlueprintVisible)
	int                                                BackpackPistolListIndex;                                  // 0x0050(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsCurrentWeapon;                                         // 0x0054(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0055(0x0003) MISSED OFFSET
	int                                                OperationIndex;                                           // 0x0058(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.WeaponReconnectReplicateDataWrapper
// 0x0068
struct FWeaponReconnectReplicateDataWrapper
{
	struct FWeaponReconnectReplicateData               WeaponReconnectReplicateData;                             // 0x0000(0x0060)
	class ASTExtraWeapon*                              Weapon;                                                   // 0x0060(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.QuickChatIDAndAudio
// 0x0004
struct FQuickChatIDAndAudio
{
	int                                                chatTextID;                                               // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.QuickChatOption
// 0x0010
struct FQuickChatOption
{
	int                                                chatTextID;                                               // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class UAkAudioEvent*                               audioEvent1;                                              // 0x0008(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.IngameFriendChatMsg
// 0x0030
struct FIngameFriendChatMsg
{
	struct FString                                     Name;                                                     // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     Content;                                                  // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	bool                                               isSelf;                                                   // 0x0020(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0021(0x0003) MISSED OFFSET
	int                                                MsgType;                                                  // 0x0024(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bReply;                                                   // 0x0028(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.IngameFriendChat
// 0x0010
struct FIngameFriendChat
{
	TArray<struct FIngameFriendChatMsg>                ChatList;                                                 // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct ShadowTrackerExtra.QuickChatFlag
// 0x0018
struct FQuickChatFlag
{
	EChatFlagType                                      Type;                                                     // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                chatID;                                                   // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                AlternateChatID;                                          // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                FlagIndex;                                                // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                traceDist;                                                // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              minDist;                                                  // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.QuickGroundFlag
// 0x0014
struct FQuickGroundFlag
{
	int                                                Index;                                                    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                flagID;                                                   // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     hitPosition;                                              // 0x0008(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.InGameChatMsg
// 0x0040
struct FInGameChatMsg
{
	struct FString                                     PlayerName;                                               // 0x0000(0x0010) (ZeroConstructor)
	uint32_t                                           playerIdentifier;                                         // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	struct FString                                     msgContent;                                               // 0x0018(0x0010) (ZeroConstructor)
	int                                                msgID;                                                    // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               hitValid;                                                 // 0x002C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x002D(0x0003) MISSED OFFSET
	struct FVector                                     hitPosition;                                              // 0x0030(0x000C) (IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.CirCleCfg
// 0x0050
struct FCirCleCfg
{
	float                                              DelayTime;                                                // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RadiusWhenDestoryMap;                                     // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SafeZoneAppeartime;                                       // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	TArray<float>                                      BlueCirclePreWarning;                                     // 0x0010(0x0010) (Edit, ZeroConstructor)
	float                                              LastTime;                                                 // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              pain;                                                     // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseCustomBluePoint;                                      // 0x0028(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
	struct FVector2D                                   bluepoint;                                                // 0x002C(0x0008) (Edit, IsPlainOldData)
	float                                              blueradius;                                               // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseCustomWhitePoint;                                     // 0x0038(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0039(0x0003) MISSED OFFSET
	struct FVector2D                                   whitepoint;                                               // 0x003C(0x0008) (Edit, IsPlainOldData)
	float                                              whiteradius;                                              // 0x0044(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Alpha;                                                    // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DestinyChance;                                            // 0x004C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.ReConnectGameStateInfo
// 0x007C
struct FReConnectGameStateInfo
{
	bool                                               bIsLessning;                                              // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              CircleStateStartServerWorldSecond;                        // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              CircleStatusLastTime;                                     // 0x0008(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              CircleStatusElapsedTime;                                  // 0x000C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECircleInfo>                           CircleStatus;                                             // 0x0010(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	struct FVector                                     BlueCircle;                                               // 0x0014(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FVector                                     OriginalBlueCircle;                                       // 0x0020(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FVector                                     WhiteCircle;                                              // 0x002C(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	TEnumAsByte<EAirAttackInfo>                        AirAttackStatus;                                          // 0x0038(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0039(0x0003) MISSED OFFSET
	struct FVector                                     AirAttackArea;                                            // 0x003C(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	int                                                AirAttackWave;                                            // 0x0048(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     AirplaneStartLocation;                                    // 0x004C(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FVector                                     AirplaneStopLocation;                                     // 0x0058(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FVector                                     AirplaneCanJumpLocation;                                  // 0x0064(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FVector                                     AirplaneForceJumpLocation;                                // 0x0070(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.CameraOffsetData
// 0x001C
struct FCameraOffsetData
{
	struct FVector                                     SocketOffset;                                             // 0x0000(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     TargetOffset;                                             // 0x000C(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              SpringArmLength;                                          // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.DeathPlayCharacterTrans
// 0x0018
struct FDeathPlayCharacterTrans
{
	struct FVector                                     Location;                                                 // 0x0000(0x000C) (IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x000C(0x000C) (IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.GameModeParam
// 0x0034
struct FGameModeParam
{
	float                                              Radius0;                                                  // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Radius1;                                                  // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Radius2;                                                  // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Radius3;                                                  // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              BlueCircleRadius;                                         // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     MapCenter;                                                // 0x0014(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	float                                              PlaneSpeed;                                               // 0x0020(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              PlaneHeight;                                              // 0x0024(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              CanOpenParachuteHeight;                                   // 0x0028(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              ForceOpenParachuteHeight;                                 // 0x002C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              CloseParachuteHeight;                                     // 0x0030(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.ClientFatalDamageRecordData
// 0x0038
struct FClientFatalDamageRecordData
{
	struct FString                                     causer;                                                   // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     VictimName;                                               // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                DamageType;                                               // 0x0020(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                AdditionalParam;                                          // 0x0024(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               IsHeadshot;                                               // 0x0028(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
	int                                                ResultHealthStatus;                                       // 0x002C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EFatalDamageRelationShip>              RecordRelationShip;                                       // 0x0030(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0031(0x0003) MISSED OFFSET
	int                                                PreviousHealthStatus;                                     // 0x0034(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.SensibilityMode
// 0x0018
struct FSensibilityMode
{
	float                                              NoAim;                                                    // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Sight1X;                                                  // 0x0004(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Sight2X;                                                  // 0x0008(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Sight4X;                                                  // 0x000C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Sight8X;                                                  // 0x0010(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FPPNoAim;                                                 // 0x0014(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.SensibilityConfig
// 0x0054
struct FSensibilityConfig
{
	struct FSensibilityMode                            NormalMode;                                               // 0x0000(0x0018) (BlueprintVisible)
	struct FSensibilityMode                            FireMode;                                                 // 0x0018(0x0018) (BlueprintVisible)
	struct FSensibilityMode                            MotionMode;                                               // 0x0030(0x0018) (BlueprintVisible)
	float                                              VehicleEye;                                               // 0x0048(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ParachuteEye;                                             // 0x004C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FPPEye;                                                   // 0x0050(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.KillOrPutDownMessage
// 0x00C8
struct FKillOrPutDownMessage
{
	TEnumAsByte<EKillOrPutDownMessageType>             MsgType;                                                  // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FString                                     UserName;                                                 // 0x0008(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     ByString;                                                 // 0x0018(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     Name1;                                                    // 0x0028(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     AttackActionName;                                         // 0x0038(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     AttackName;                                               // 0x0048(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	bool                                               bIsHeadShot;                                              // 0x0058(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsCauserTeammate;                                        // 0x0059(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsVictimTeammate;                                        // 0x005A(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsTeamKill;                                              // 0x005B(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
	struct FString                                     HeadShotString;                                           // 0x0060(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     ByString2;                                                // 0x0070(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     PutDownOrKillString;                                      // 0x0080(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     PutDownOrKillString2;                                     // 0x0090(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     Name2;                                                    // 0x00A0(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                KillNum;                                                  // 0x00B0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bShowKillNum;                                             // 0x00B4(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x00B5(0x0003) MISSED OFFSET
	struct FString                                     FullMsg;                                                  // 0x00B8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct ShadowTrackerExtra.CameraData
// 0x0014
struct FCameraData
{
	float                                              CameraFOV;                                                // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     SpringArmSocketOffset;                                    // 0x0004(0x000C) (Edit, IsPlainOldData)
	float                                              SpringArmLength;                                          // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.SwitchCameraData
// 0x0010 (0x0024 - 0x0014)
struct FSwitchCameraData : public FCameraData
{
	float                                              StartCameraSwitchDelayTimeFrom_Normal;                    // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              StartCameraSwitchDelayTimeFrom_Near;                      // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              StartCameraSwitchDelayTimeFrom_Aim;                       // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CameraSwitchTime;                                         // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.CommonCameraModeData
// 0x0024
struct FCommonCameraModeData
{
	struct FSwitchCameraData                           SwitchCameraData;                                         // 0x0000(0x0024) (Edit)
};

// ScriptStruct ShadowTrackerExtra.AimCameraModeData
// 0x0024
struct FAimCameraModeData
{
	struct FSwitchCameraData                           SwitchCameraData;                                         // 0x0000(0x0024) (Edit)
};

// ScriptStruct ShadowTrackerExtra.CameraViewPitchLimitData
// 0x0008
struct FCameraViewPitchLimitData
{
	float                                              ViewPitchMin;                                             // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              ViewPitchMax;                                             // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.ServerHitEnemyReplicatedData
// 0x0010
struct FServerHitEnemyReplicatedData
{
	class ASTExtraBaseCharacter*                       HitTargetPawn;                                            // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	uint32_t                                           EventID;                                                  // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.WeaponSystemReconnectReplicateData
// 0x0030
struct FWeaponSystemReconnectReplicateData
{
	struct FName                                       LastUseNoneGrenadeLogicSlot;                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       LastUseLogicSlot;                                         // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               GrenadeLogicSlotList;                                     // 0x0010(0x0010) (ZeroConstructor)
	TArray<struct FItemDefineID>                       GrenadeDefineIDList;                                      // 0x0020(0x0010) (ZeroConstructor)
};

// ScriptStruct ShadowTrackerExtra.TeamMateStateInfo
// 0x0028
struct FTeamMateStateInfo
{
	class ASTExtraPlayerState*                         PlayerState;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // 0x0008(0x000C) (IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x0014(0x000C) (IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0020(0x0008) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.ObservedData
// 0x0028
struct FObservedData
{
	struct FString                                     PlayerName;                                               // 0x0000(0x0010) (BlueprintVisible, ZeroConstructor)
	int                                                TeamID;                                                   // 0x0010(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x14];                                      // 0x0014(0x0014) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.WarPlayerStateScore
// 0x0018
struct FWarPlayerStateScore
{
	int                                                Rank;                                                     // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                Score;                                                    // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EWarScoreChangeReason                              ScoreChangeReason;                                        // 0x0008(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	int                                                ScoreChangeCauserPlayerID;                                // 0x000C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                HighestScore;                                             // 0x0010(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                FollowScore;                                              // 0x0014(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.SearchedTombBoxAndWrapperListResult
// 0x0018
struct FSearchedTombBoxAndWrapperListResult
{
	class APlayerTombBox*                              Box;                                                      // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<struct FSearchedPickUpItemResult>           SearchedPickUpItemResultList;                             // 0x0008(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct ShadowTrackerExtra.GrenadePredictResult
// 0x0030
struct FGrenadePredictResult
{
	TArray<struct FVector>                             SplinePoints;                                             // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	bool                                               IsHitActor;                                               // 0x0010(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	struct FVector                                     HitActorLocation;                                         // 0x0014(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FRotator                                    HitActorRotation;                                         // 0x0020(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.GuideInfo
// 0x0020
struct FGuideInfo
{
	class UWidget*                                     Widget;                                                   // 0x0000(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                guildUI;                                                  // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   Offset;                                                   // 0x000C(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector2D                                   Size;                                                     // 0x0014(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	int                                                childData;                                                // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.ServerCheckBox
// 0x004C
struct FServerCheckBox
{
	TEnumAsByte<ESTEPoseState>                         PoseID;                                                   // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FVector                                     BodyBoundBoxExtent;                                       // 0x0004(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     HeadBoundBoxExtent;                                       // 0x0010(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     Offset;                                                   // 0x001C(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     PitchOffset;                                              // 0x0028(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              ReferenceHSlope;                                          // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ReferenceVSlope;                                          // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HMinScale;                                                // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              VMinScale;                                                // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HMaxScale;                                                // 0x0044(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              VMaxScale;                                                // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.HeightLOD
// 0x0008
struct FHeightLOD
{
	float                                              Height;                                                   // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                LOD;                                                      // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.TslWidgetConfig
// 0x0038
struct FTslWidgetConfig
{
	struct FSoftObjectPath                             WidgetClassReference;                                     // 0x0000(0x0018) (Edit, BlueprintVisible)
	bool                                               bDefaultShow;                                             // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseMouse;                                                // 0x0019(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bCloseByEscape;                                           // 0x001A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bRemovedByHiding;                                         // 0x001B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ZOrder;                                                   // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUsePcOnly;                                               // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseConsoleOnly;                                          // 0x0021(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bCharacterHudUi;                                          // 0x0022(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bSpectatorHudUi;                                          // 0x0023(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bObserverHudUi;                                           // 0x0024(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bReplayHudUi;                                             // 0x0025(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0026(0x0002) MISSED OFFSET
	TArray<struct FString>                             HideWidgetList;                                           // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct ShadowTrackerExtra.TslWidgetState
// 0x0048
struct FTslWidgetState
{
	struct FTslWidgetConfig                            Config;                                                   // 0x0000(0x0038)
	class UUserWidget*                                 Widget;                                                   // 0x0038(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0040(0x0008) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.AvatarCostumeData
// 0x0030
struct FAvatarCostumeData
{
	struct FString                                     NickName;                                                 // 0x0000(0x0010) (Edit, ZeroConstructor)
	int                                                gender;                                                   // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Head;                                                     // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Hair;                                                     // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	TArray<int>                                        ItemsIDs;                                                 // 0x0020(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct ShadowTrackerExtra.TslLobbySceneDataPair
// 0x0018
struct FTslLobbySceneDataPair
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.MoveCheatAntiStrategy
// 0x0080
struct FMoveCheatAntiStrategy
{
	uint32_t                                           bIsOpen;                                                  // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              MaxAllowClientSideTimeLag;                                // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              CheckTimeSpeedIntervel;                                   // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MaxAllowCheatMoveTimes;                                   // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              MaxMoveDistanceScaleFactor;                               // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              MaxPublishForbidMoveTime;                                 // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              ServerSendPingIntervel;                                   // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              MaxMoveSpeedValue;                                        // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MaxSpeedSplitNum;                                         // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5C];                                      // 0x0024(0x005C) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.MoveCheatAntiStrategy2
// 0x0058
struct FMoveCheatAntiStrategy2
{
	uint32_t                                           bIsOpen;                                                  // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              CheckTimeSpeedIntervel;                                   // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MaxAllowCheatMoveTimes;                                   // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              MaxMoveDistanceScaleFactor;                               // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              MaxPublishForbidMoveTime;                                 // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              MaxMoveSpeedValue;                                        // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MaxSpeedSplitNum;                                         // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3C];                                      // 0x001C(0x003C) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.CharacterZMoveDistanceCheck
// 0x0034
struct FCharacterZMoveDistanceCheck
{
	uint32_t                                           bIsOpen;                                                  // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MaxAllowCheatMoveTimes;                                   // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              MaxAllowMoveZHeight;                                      // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x28];                                      // 0x000C(0x0028) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.SubLevelComponentMapValue
// 0x0140
struct FSubLevelComponentMapValue
{
	struct FString                                     Name;                                                     // 0x0000(0x0010) (Edit, ZeroConstructor)
	TArray<int>                                        IndexOffsetArray;                                         // 0x0010(0x0010) (Edit, ZeroConstructor)
	TArray<int>                                        VertexOffsetIndex;                                        // 0x0020(0x0010) (Edit, ZeroConstructor)
	TArray<int>                                        BorderIndex1;                                             // 0x0030(0x0010) (Edit, ZeroConstructor)
	TArray<int>                                        BorderIndex2;                                             // 0x0040(0x0010) (Edit, ZeroConstructor)
	TArray<int>                                        BorderIndex3;                                             // 0x0050(0x0010) (Edit, ZeroConstructor)
	TArray<int>                                        BorderIndex4;                                             // 0x0060(0x0010) (Edit, ZeroConstructor)
	TArray<int>                                        UnderBorderIndex1;                                        // 0x0070(0x0010) (Edit, ZeroConstructor)
	TArray<int>                                        UnderBorderIndex2;                                        // 0x0080(0x0010) (Edit, ZeroConstructor)
	TArray<int>                                        UnderBorderIndex3;                                        // 0x0090(0x0010) (Edit, ZeroConstructor)
	TArray<int>                                        UnderBorderIndex4;                                        // 0x00A0(0x0010) (Edit, ZeroConstructor)
	TArray<int>                                        BorderIndicesBuffer1;                                     // 0x00B0(0x0010) (Edit, ZeroConstructor)
	TArray<int>                                        BorderIndicesBuffer2;                                     // 0x00C0(0x0010) (Edit, ZeroConstructor)
	TArray<int>                                        BorderIndicesBuffer3;                                     // 0x00D0(0x0010) (Edit, ZeroConstructor)
	TArray<int>                                        BorderIndicesBuffer4;                                     // 0x00E0(0x0010) (Edit, ZeroConstructor)
	struct FString                                     Sibling1Name;                                             // 0x00F0(0x0010) (Edit, ZeroConstructor)
	struct FString                                     Sibling2Name;                                             // 0x0100(0x0010) (Edit, ZeroConstructor)
	struct FString                                     Sibling3Name;                                             // 0x0110(0x0010) (Edit, ZeroConstructor)
	struct FString                                     Sibling4Name;                                             // 0x0120(0x0010) (Edit, ZeroConstructor)
	int                                                Sibling1Idx;                                              // 0x0130(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Sibling2Idx;                                              // 0x0134(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Sibling3Idx;                                              // 0x0138(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Sibling4Idx;                                              // 0x013C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.NewbieGuideItem
// 0x0060
struct FNewbieGuideItem
{
	int                                                ID;                                                       // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FString                                     Name;                                                     // 0x0008(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TEnumAsByte<ENewbieGuideType>                      Type;                                                     // 0x0018(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
	int                                                MaxGuideCounts;                                           // 0x001C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<TEnumAsByte<ENewbieGuidePlayerCategory>>    SubjectPlayerTypes;                                       // 0x0020(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	int                                                Priority;                                                 // 0x0030(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MuteFlag;                                                 // 0x0034(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                PreconditionID;                                           // 0x0038(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PreconditionTipTimeGap;                                   // 0x003C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class USTNewbieGuideConditionBase*>         Conditions;                                               // 0x0040(0x0010) (Edit, BlueprintVisible, ExportObject, ZeroConstructor)
	class USTNewbieGuideSuccessListenerBase*           QuickFinishedListener;                                    // 0x0050(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Duration;                                                 // 0x0058(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.PlaneData
// 0x0040
struct FPlaneData
{
	class AActor*                                      ThePlane;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               bCanJump;                                                 // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	struct FVector                                     FlyDir;                                                   // 0x000C(0x000C) (IsPlainOldData)
	struct FVector                                     PlaneVelocity;                                            // 0x0018(0x000C) (IsPlainOldData)
	struct FVector                                     ForceJumpPosition;                                        // 0x0024(0x000C) (IsPlainOldData)
	TArray<class APlayerController*>                   Players;                                                  // 0x0030(0x0010) (ZeroConstructor)
};

// ScriptStruct ShadowTrackerExtra.RespawnItem
// 0x0008
struct FRespawnItem
{
	int                                                ItemTableID;                                              // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                Count;                                                    // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.RespawnItemMinorGroup
// 0x0018
struct FRespawnItemMinorGroup
{
	int                                                RandomWeight;                                             // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	TArray<struct FRespawnItem>                        ItemList;                                                 // 0x0008(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct ShadowTrackerExtra.RespawnItemMajorGroup
// 0x0018
struct FRespawnItemMajorGroup
{
	int                                                RandomTimes;                                              // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	TArray<struct FRespawnItemMinorGroup>              MinorGroupList;                                           // 0x0008(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct ShadowTrackerExtra.WeaponPPSettings
// 0x0090
struct FWeaponPPSettings
{
	float                                              BlurLevel;                                                // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ScopeRadiusNear;                                          // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ScopeRadiusFar;                                           // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   ReticleRect;                                              // 0x000C(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	float                                              ReticleAngularSize;                                       // 0x0014(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                ReticleTint;                                              // 0x0018(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	float                                              ReticleGamma;                                             // 0x0028(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	class UTexture*                                    ReticleTexture;                                           // 0x0030(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UReticleSettings*                            ReticleSettings;                                          // 0x0038(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ScopeLensDistortion;                                      // 0x0040(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ScopeLensCA;                                              // 0x0044(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                ScopeLensTint;                                            // 0x0048(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	float                                              ScopeOuterBrightness;                                     // 0x0058(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DepthBlurPower;                                           // 0x005C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DepthBlurWhitePoint;                                      // 0x0060(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DepthBlurBlackPoint;                                      // 0x0064(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   RelativeOffsetMap;                                        // 0x0068(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	float                                              ParallaxMovementScale;                                    // 0x0070(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ParallaxRadiusScale;                                      // 0x0074(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BloomIntensity;                                           // 0x0078(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              NearClipStaticOffset;                                     // 0x007C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              NearClipMinClamp;                                         // 0x0080(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     WeaponCycleCameraOffset;                                  // 0x0084(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.STPointDamageEvent
// 0x0000 (0x00B0 - 0x00B0)
struct FSTPointDamageEvent : public FPointDamageEvent
{

};

// ScriptStruct ShadowTrackerExtra.ShootWeaponDamageEvent
// 0x0030 (0x00E0 - 0x00B0)
struct FShootWeaponDamageEvent : public FSTPointDamageEvent
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x00B0(0x0030) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.SecurityLogHitTargetInfo
// 0x0020
struct FSecurityLogHitTargetInfo
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.FPSMonitorConfigSwitch
// 0x0014
struct FFPSMonitorConfigSwitch
{
	bool                                               bFPSMonitor;                                              // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              FPSCollectInternal;                                       // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                FPSCollectCountForGroup;                                  // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              FPSThreshold;                                             // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                FPSLowActionType;                                         // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.FXDistancaScaleStruct
// 0x0010
struct FFXDistancaScaleStruct
{
	float                                              FXStartScaleDistance;                                     // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FXEndScaleDistance;                                       // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FXStartScaleValue;                                        // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FXEndScaleValue;                                          // 0x000C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.SurviveTableRowBase
// 0x0008 (0x0010 - 0x0008)
struct FSurviveTableRowBase : public FTableRowBase
{
	int                                                ID;                                                       // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                PickUpSoundID;                                            // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.PickUpGlobalDataTableRow
// 0x0120 (0x0130 - 0x0010)
struct FPickUpGlobalDataTableRow : public FSurviveTableRowBase
{
	TEnumAsByte<ESurvivePickUpGlobalCategory>          SurvivePickUpGlobalCategory;                              // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
	struct FSlateBrush                                 SmallProfileImage;                                        // 0x0018(0x0078) (Edit, BlueprintVisible)
	struct FSlateBrush                                 LargerProfileImage;                                       // 0x0090(0x0078) (Edit, BlueprintVisible)
	struct FString                                     Name;                                                     // 0x0108(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     Description;                                              // 0x0118(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                DisplayPriority;                                          // 0x0128(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x012C(0x0004) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.WeaponComponentDataTableRow
// 0x0010 (0x0020 - 0x0010)
struct FWeaponComponentDataTableRow : public FSurviveTableRowBase
{
	int                                                WeaponComponentID;                                        // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EWeaponComponentType>                  Type;                                                     // 0x0014(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
	class UStaticMesh*                                 ShowMesh;                                                 // 0x0018(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.WeaponComponentItemData
// 0x0150
struct FWeaponComponentItemData
{
	struct FPickUpGlobalDataTableRow                   PickUpGlobalDataTableRow;                                 // 0x0000(0x0130) (BlueprintVisible, BlueprintReadOnly)
	struct FWeaponComponentDataTableRow                WeaponComponentDataTableRow;                              // 0x0130(0x0020) (BlueprintVisible, BlueprintReadOnly)
};

// ScriptStruct ShadowTrackerExtra.WeaponHitPartCoff
// 0x0024
struct FWeaponHitPartCoff
{
	float                                              Head;                                                     // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Body;                                                     // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Limbs;                                                    // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Hand;                                                     // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Foot;                                                     // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Arms;                                                     // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Legs;                                                     // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              UpperBody;                                                // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LowerBody;                                                // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.SRangeAttenuateConfig
// 0x000C
struct FSRangeAttenuateConfig
{
	int                                                rangeStart;                                               // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                rangeEnd;                                                 // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              rangeAttenuateFactor;                                     // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.AutoAimingRangeConfig
// 0x0030
struct FAutoAimingRangeConfig
{
	float                                              Speed;                                                    // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RangeRate;                                                // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SpeedRate;                                                // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RangeRateSight;                                           // 0x000C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SpeedRateSight;                                           // 0x0010(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CrouchRate;                                               // 0x0014(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ProneRate;                                                // 0x0018(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              adsorbMaxRange;                                           // 0x001C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              adsorbMinRange;                                           // 0x0020(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              adsorbMinAttenuationDis;                                  // 0x0024(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              adsorbMaxAttenuationDis;                                  // 0x0028(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              adsorbActiveMinRange;                                     // 0x002C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.AutoAimingConfig
// 0x0064
struct FAutoAimingConfig
{
	struct FAutoAimingRangeConfig                      OuterRange;                                               // 0x0000(0x0030) (Edit)
	struct FAutoAimingRangeConfig                      InnerRange;                                               // 0x0030(0x0030) (Edit)
	float                                              followTimeMax;                                            // 0x0060(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.SRecoilInfo
// 0x0070
struct FSRecoilInfo
{
	float                                              VerticalRecoilMin;                                        // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              VerticalRecoilMax;                                        // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              VerticalRecoilVariation;                                  // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              VerticalRecoveryModifier;                                 // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              VerticalRecoveryClamp;                                    // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              VerticalRecoveryMax;                                      // 0x0014(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LeftMax;                                                  // 0x0018(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RightMax;                                                 // 0x001C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HorizontalTendency;                                       // 0x0020(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	class UCurveVector*                                RecoilCurve;                                              // 0x0028(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                BulletPerSwitch;                                          // 0x0030(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TimePerSwitch;                                            // 0x0034(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               SwitchOnTime;                                             // 0x0038(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0039(0x0003) MISSED OFFSET
	float                                              RecoilSpeedVertical;                                      // 0x003C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RecoilSpeedHorizontal;                                    // 0x0040(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RecovertySpeedVertical;                                   // 0x0044(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RecoilValueClimb;                                         // 0x0048(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RecoilValueFail;                                          // 0x004C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RecoilModifierStand;                                      // 0x0050(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RecoilModifierCrouch;                                     // 0x0054(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RecoilModifierProne;                                      // 0x0058(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RecoilHorizontalMinScalar;                                // 0x005C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BurstEmptyDelay;                                          // 0x0060(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ShootSightReturn;                                         // 0x0064(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0065(0x0003) MISSED OFFSET
	float                                              ShootSightReturnSpeed;                                    // 0x0068(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x006C(0x0004) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.SDeviation
// 0x0040
struct FSDeviation
{
	float                                              DeviationBase;                                            // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DeviationBaseAim;                                         // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DeviationBaseADS;                                         // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DeviationRecoilGain;                                      // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DeviationRecoilGainAim;                                   // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DeviationRecoilGainADS;                                   // 0x0014(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DeviationMax;                                             // 0x0018(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DeviationMinMove;                                         // 0x001C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DeviationMaxMove;                                         // 0x0020(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DeviationMoveMultiplier;                                  // 0x0024(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DeviationMoveMinRefrence;                                 // 0x0028(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DeviationMoveMaxRefrence;                                 // 0x002C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DeviationStanceStand;                                     // 0x0030(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DeviationStanceCrouch;                                    // 0x0034(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DeviationStanceProne;                                     // 0x0038(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DeviationStanceJump;                                      // 0x003C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.SegamentData
// 0x0010
struct FSegamentData
{
	struct FVector                                     TargetLocation;                                           // 0x0000(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	float                                              MoveSpeed;                                                // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.MovementFactor
// 0x0010
struct FMovementFactor
{
	float                                              BaseFactor;                                               // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class UCurveFloat*                                 DirectionalFactor;                                        // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.MovementData
// 0x0040
struct FMovementData
{
	float                                              BaseSpeed;                                                // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FMovementFactor                             Walk;                                                     // 0x0008(0x0010) (Edit, DisableEditOnInstance)
	struct FMovementFactor                             Run;                                                      // 0x0018(0x0010) (Edit, DisableEditOnInstance)
	struct FMovementFactor                             Sprint;                                                   // 0x0028(0x0010) (Edit, DisableEditOnInstance)
	float                                              ShoulderingFactor;                                        // 0x0038(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ADSFactor;                                                // 0x003C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.MovementStates
// 0x0003
struct FMovementStates
{
	EStance                                            Stance;                                                   // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	EAimingPose                                        AimingPose;                                               // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData)
	EMovement                                          Movement;                                                 // 0x0002(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.StanceUpdateCaller
// 0x0010
struct FStanceUpdateCaller
{
	int                                                P;                                                        // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                A;                                                        // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                B;                                                        // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                D;                                                        // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.anPickerData
// 0x0010
struct FanPickerData
{
	float                                              Radius;                                                   // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Angle;                                                    // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Offset;                                                   // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsShowDebugFan;                                           // 0x000C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableTrace;                                             // 0x000D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x000E(0x0002) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.RestoringDurationWithGameModeStruct
// 0x0010
struct FRestoringDurationWithGameModeStruct
{
	class UClass*                                      GameModeClass;                                            // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.DecalData
// 0x0020
struct FDecalData
{
	float                                              DecalSize;                                                // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LifeSpan;                                                 // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterial*                                   DecalMaterial;                                            // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ImpactEffectStartScaleDistance;                           // 0x0010(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ImpactEffectEndScaleDistance;                             // 0x0014(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ImpactEffectStartScaleValue;                              // 0x0018(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ImpactEffectEndScaleValue;                                // 0x001C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.AirborneSpeed
// 0x0040
struct FAirborneSpeed
{
	struct FVector                                     minSpeed;                                                 // 0x0000(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     MaxSpeed;                                                 // 0x000C(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     NormalSpeed;                                              // 0x0018(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     VerticalSpeed;                                            // 0x0024(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              TurnSpeed;                                                // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     TurnSpeedV;                                               // 0x0034(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.SceneCompUpdateOptimizationItem
// 0x0005
struct FSceneCompUpdateOptimizationItem
{
	unsigned char                                      UnknownData00[0x5];                                       // 0x0000(0x0005) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.WeaponAttrModifyData
// 0x0018
struct FWeaponAttrModifyData
{
	struct FString                                     ModifyAttr;                                               // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	EAttrOperator                                      Op;                                                       // 0x0010(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	float                                              ModifyValue;                                              // 0x0014(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.WeaponAttrModifyConfig
// 0x0020
struct FWeaponAttrModifyConfig
{
	struct FString                                     ModifyConfigID;                                           // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FWeaponAttrModifyData>               WeaponAttrModifiers;                                      // 0x0010(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct ShadowTrackerExtra.AnimVehParamList
// 0x0018
struct FAnimVehParamList
{
	bool                                               IsLeanOut;                                                // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsDriver;                                                 // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               DriverExist;                                              // 0x0002(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0003(0x0001) MISSED OFFSET
	struct FRotator                                    VehViewRotation;                                          // 0x0004(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	TEnumAsByte<EVHSeatWeaponHoldType>                 SeatWeaponHoldType;                                       // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EVHSeatSpecialType                                 SeatSpecialType;                                          // 0x0011(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	ESTExtraVehicleType                                VehicleType;                                              // 0x0012(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x0013(0x0001) MISSED OFFSET
	float                                              LeanOutPercentage;                                        // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.WeaponSlotSwitchTimeData
// 0x000C
struct FWeaponSlotSwitchTimeData
{
	ESurviveWeaponPropSlot                             EquipSlot;                                                // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              TotalTime;                                                // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AttachWeaponTime;                                         // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.BodyTypeDef
// 0x0008
struct FBodyTypeDef
{
	int                                                UpThreshold;                                              // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                DownThreshold;                                            // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.SyncAKEvent
// 0x0010
struct FSyncAKEvent
{
	int                                                AkEventID;                                                // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     AkLocation;                                               // 0x0004(0x000C) (IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.DamageCauserRecordData
// 0x0018
struct FDamageCauserRecordData
{
	class AController*                                 causer;                                                   // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Time;                                                     // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                StatusChangeMargin;                                       // 0x000C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                DamageType;                                               // 0x0010(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                AdditionalParam;                                          // 0x0014(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.SimViewData
// 0x0004
struct FSimViewData
{
	unsigned char                                      ViewPitch;                                                // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      ViewYaw;                                                  // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      ViewRoll;                                                 // 0x0002(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               FreeCamera;                                               // 0x0003(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.KilledTipsBlock
// 0x0038
struct FKilledTipsBlock
{
	EDamageType                                        DamageType;                                               // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FString                                     attackerName;                                             // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     WeaponName;                                               // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     DeadName;                                                 // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct ShadowTrackerExtra.PoseChangeTime
// 0x0018
struct FPoseChangeTime
{
	float                                              PoseChange_Prone_Stand;                                   // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PoseChange_Prone_Move;                                    // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PoseChange_UnProne_Stand;                                 // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PoseChange_UnProne_Move;                                  // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PoseChange_Stand_Crouch;                                  // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PoseChange_Crouch_Stand;                                  // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.AnimParamList
// 0x00D8
struct FAnimParamList
{
	struct FVector                                     Velocity;                                                 // 0x0000(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     MoveDir;                                                  // 0x000C(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	TEnumAsByte<EMovementMode>                         MovementMode;                                             // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	ECharacterPoseType                                 PoseType;                                                 // 0x0019(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x001A(0x0002) MISSED OFFSET
	struct FRotator                                    ViewRotation;                                             // 0x001C(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FRotator                                    ControlRotation;                                          // 0x0028(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	EWeaponType                                        WeaponType;                                               // 0x0034(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EWeaponHoldType>                       WeaponHoldType;                                           // 0x0035(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EFreshWeaponStateType>                 WeaponState;                                              // 0x0036(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EWeaponReloadMethod>                   WeaponReloadMethod;                                       // 0x0037(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESightType>                            SightType;                                                // 0x0038(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0039(0x0003) MISSED OFFSET
	float                                              RecoilKickADS;                                            // 0x003C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AnimationKick;                                            // 0x0040(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ForegripParam;                                            // 0x0044(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     OffsetFPPLocation;                                        // 0x0048(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    OffsetFPPRotation;                                        // 0x0054(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     OffsetFPPCrouchLocation;                                  // 0x0060(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    OffsetFPPCrouchRotation;                                  // 0x006C(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     OffsetFPPProneLocation;                                   // 0x0078(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    OffsetFPPProneRotation;                                   // 0x0084(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     OffsetMagLocation;                                        // 0x0090(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsHurting;                                                // 0x009C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsNearDeathStatus;                                        // 0x009D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsRescueing;                                              // 0x009E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsSprinting;                                              // 0x009F(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsCastingGenerate;                                        // 0x00A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x00A1(0x0003) MISSED OFFSET
	struct FVector                                     HurtDir;                                                  // 0x00A4(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	bool                                               IsDying;                                                  // 0x00B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsJumping;                                                // 0x00B1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECharacterJumpType>                    JumpType;                                                 // 0x00B2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EParachuteState>                       ParachuteState;                                           // 0x00B3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsTurning;                                                // 0x00B4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsOnVehicle;                                              // 0x00B5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsDisableAim;                                             // 0x00B6(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x1];                                       // 0x00B7(0x0001) MISSED OFFSET
	float                                              HandleFolderFactor;                                       // 0x00B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CharacterYawRotateRate;                                   // 0x00BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ShouldPauseAnim;                                          // 0x00C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               UsingBoltAction;                                          // 0x00C1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x16];                                      // 0x00C2(0x0016) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.AnimStatusKeyList
// 0x0020
struct FAnimStatusKeyList
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
	class ASTExtraWeapon*                              EquipWeapon;                                              // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.BodyPartCfg
// 0x0020
struct FBodyPartCfg
{
	float                                              DamageScale;                                              // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Durability;                                               // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              DamageReduceScale;                                        // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FString                                     BodyDurabilityIndexName;                                  // 0x0010(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct ShadowTrackerExtra.CharacterEnergyPhase
// 0x0018
struct FCharacterEnergyPhase
{
	float                                              MakeEffectSection;                                        // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FString                                     BuffName;                                                 // 0x0008(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct ShadowTrackerExtra.CharacterEnergyData
// 0x0038
struct FCharacterEnergyData
{
	TArray<struct FCharacterEnergyPhase>               EnergyEffactPhase;                                        // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	float                                              EnergyMax;                                                // 0x0010(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              EnergyCurrent;                                            // 0x0014(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AttenuationPeriod;                                        // 0x0018(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	float                                              AttenuationAmount;                                        // 0x001C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0020(0x0018) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.HealthPredictShowData
// 0x0020
struct FHealthPredictShowData
{
	struct FString                                     ShowDataKey;                                              // 0x0000(0x0010) (Edit, ZeroConstructor)
	TEnumAsByte<EHealthPredictShowType>                ShowType;                                                 // 0x0010(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	float                                              Value;                                                    // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LimitValue;                                               // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.STParachuteState
// 0x000C
struct FSTParachuteState
{
	float                                              ThrottleInput;                                            // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              SteerInput;                                               // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	int8_t                                             State;                                                    // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.STReplicatedMoveState
// 0x0024
struct FSTReplicatedMoveState
{
	struct FVector                                     Location;                                                 // 0x0000(0x000C) (IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x000C(0x000C) (IsPlainOldData)
	struct FVector                                     Velocity;                                                 // 0x0018(0x000C) (IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.ParachuteFollowState
// 0x0008
struct FParachuteFollowState
{
	EFollowState                                       FollowState;                                              // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                LeaderIdx;                                                // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.CharacterHistoryData
// 0x0060
struct FCharacterHistoryData
{
	struct FVector                                     Location;                                                 // 0x0000(0x000C) (IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x000C(0x000C) (IsPlainOldData)
	struct FBox                                        BoundBox;                                                 // 0x0018(0x001C) (IsPlainOldData)
	struct FBox                                        HeadBoundBox;                                             // 0x0034(0x001C) (IsPlainOldData)
	bool                                               IsInVehicle;                                              // 0x0050(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0051(0x0003) MISSED OFFSET
	struct FVector                                     VehicleLocation;                                          // 0x0054(0x000C) (IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.VehicleDamageEvent
// 0x0000 (0x00B0 - 0x00B0)
struct FVehicleDamageEvent : public FSTPointDamageEvent
{

};

// ScriptStruct ShadowTrackerExtra.PoisonDamageEvent
// 0x0000 (0x00B0 - 0x00B0)
struct FPoisonDamageEvent : public FSTPointDamageEvent
{

};

// ScriptStruct ShadowTrackerExtra.MeleeDamageEvent
// 0x0020 (0x00D0 - 0x00B0)
struct FMeleeDamageEvent : public FSTPointDamageEvent
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x00B0(0x0020) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.FallingDamageEvent
// 0x0010 (0x00C0 - 0x00B0)
struct FFallingDamageEvent : public FSTPointDamageEvent
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x00B0(0x0010) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.DrowningDamageEvent
// 0x0000 (0x00B0 - 0x00B0)
struct FDrowningDamageEvent : public FSTPointDamageEvent
{

};

// ScriptStruct ShadowTrackerExtra.STBurningDamageEvent
// 0x0018 (0x00C8 - 0x00B0)
struct FSTBurningDamageEvent : public FSTPointDamageEvent
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x00B0(0x0018) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.STAirAttackRadialDamageEvent
// 0x0000 (0x0048 - 0x0048)
struct FSTAirAttackRadialDamageEvent : public FRadialDamageEvent
{

};

// ScriptStruct ShadowTrackerExtra.UTBuffAttachment
// 0x0028
struct FUTBuffAttachment
{
	class USceneComponent*                             Component;                                                // 0x0000(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             ComponentEnemy;                                           // 0x0008(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       SocketName;                                               // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bShowOnlyFirstPersonView;                                 // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
	class USceneComponent*                             ComponentInstance;                                        // 0x0020(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.BuffAnimationItem
// 0x00A8
struct FBuffAnimationItem
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) UNKNOWN PROPERTY: SoftObjectProperty ShadowTrackerExtra.BuffAnimationItem.AnimationAssetToPlay
	unsigned char                                      UnknownData01[0x28];                                      // 0x0028(0x0028) UNKNOWN PROPERTY: SoftObjectProperty ShadowTrackerExtra.BuffAnimationItem.AnimationAssetToPlayFPP
	unsigned char                                      UnknownData02[0x28];                                      // 0x0050(0x0028) UNKNOWN PROPERTY: SoftObjectProperty ShadowTrackerExtra.BuffAnimationItem.AnimationMontageToPlay
	unsigned char                                      UnknownData03[0x28];                                      // 0x0078(0x0028) UNKNOWN PROPERTY: SoftObjectProperty ShadowTrackerExtra.BuffAnimationItem.AnimationMontageToPlayFPP
	bool                                               NeedReplayByChangFirstView;                               // 0x00A0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x00A1(0x0007) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.BuffAnimationTagItem
// 0x0028
struct FBuffAnimationTagItem
{
	struct FName                                       AnimationAssetTag;                                        // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       AnimationAssetTagFPP;                                     // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       AnimationMontageTag;                                      // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       AnimationMontageTagFPP;                                   // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               NeedReplayByChangFirstView;                               // 0x0020(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.BuffApplierConditionPair
// 0x0018
struct FBuffApplierConditionPair
{
	TEnumAsByte<EBuffApplierCondition>                 ConditionVar;                                             // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsShowDebugLine;                                          // 0x0001(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	float                                              InSightCheckAngle;                                        // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FName>                               BuffNameArray;                                            // 0x0008(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct ShadowTrackerExtra.VehicleSimViewData
// 0x0004
struct FVehicleSimViewData
{
	unsigned char                                      ViewPitch;                                                // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      ViewYaw;                                                  // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      ViewRoll;                                                 // 0x0002(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               FreeCamera;                                               // 0x0003(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.RenderQualitySettings
// 0x0003
struct FRenderQualitySettings
{
	TEnumAsByte<ERenderQuality>                        RenderQualitySetting;                                     // 0x0000(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ERenderStyle>                          RenderStyleSetting;                                       // 0x0001(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               RenderMSAASetting;                                        // 0x0002(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.RenderItem
// 0x0018
struct FRenderItem
{
	struct FString                                     RenderKey;                                                // 0x0000(0x0010) (ZeroConstructor)
	float                                              RenderValue;                                              // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.TslStartParameter
// 0x0080
struct FTslStartParameter
{
	bool                                               bIsCustomGame;                                            // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FString                                     MapName;                                                  // 0x0008(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     MatchId;                                                  // 0x0018(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                MinPlayerCount;                                           // 0x0028(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                MaxPlayerCount;                                           // 0x002C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TMap<struct FString, struct FString>               StringParameter;                                          // 0x0030(0x0050) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct ShadowTrackerExtra.AirAttackOrder
// 0x0028
struct FAirAttackOrder
{
	int                                                waveindex;                                                // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	TArray<struct FVector>                             bombsPosition;                                            // 0x0008(0x0010) (ZeroConstructor)
	TArray<float>                                      bombsInterval;                                            // 0x0018(0x0010) (ZeroConstructor)
};

// ScriptStruct ShadowTrackerExtra.AirplanePath
// 0x0030
struct FAirplanePath
{
	struct FVector                                     AirplaneStartLoc;                                         // 0x0000(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FVector                                     AirplaneStopLoc;                                          // 0x000C(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FVector                                     AirplaneCanJumpLoc;                                       // 0x0018(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FVector                                     AirplaneForceJumpLoc;                                     // 0x0024(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.GM
// 0x0004
struct FGM
{
	unsigned char                                      GrassEnable : 1;                                          // 0x0000(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.BuildingSearchPathLink
// 0x0018
struct FBuildingSearchPathLink
{
	TArray<struct FVector>                             WayPointList;                                             // 0x0000(0x0010) (ZeroConstructor)
	int                                                targetSpotIndex;                                          // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.BuildingSearchPath
// 0x0018
struct FBuildingSearchPath
{
	TArray<struct FBuildingSearchPathLink>             itemPosLinkList;                                          // 0x0000(0x0010) (ZeroConstructor)
	int                                                buildingPartIndext;                                       // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.AirplaneRouteData
// 0x0028
struct FAirplaneRouteData
{
	float                                              PlaneFlyingProcess;                                       // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   CanJumpLocInMap;                                          // 0x0004(0x0008) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FVector2D                                   ForceJumpLocInMap;                                        // 0x000C(0x0008) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	float                                              RouteWidgetRotateAngle;                                   // 0x0014(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              RouteLengthInMap;                                         // 0x0018(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   PlaneLocInMap;                                            // 0x001C(0x0008) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	float                                              PlaneRotation;                                            // 0x0024(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.MapRealTimeInfo
// 0x0080
struct FMapRealTimeInfo
{
	struct FVector                                     MapCenterToPlayer;                                        // 0x0000(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FVector                                     MapCenterToBlueCircle;                                    // 0x000C(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FVector                                     MapCenterToWhiteCircle;                                   // 0x0018(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FVector2D                                   PlayerCoord;                                              // 0x0024(0x0008) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FVector2D                                   SpectatedPlayerCoord;                                     // 0x002C(0x0008) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FVector2D                                   WhiteCircleCoord;                                         // 0x0034(0x0008) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FVector2D                                   BlueCircleCoord;                                          // 0x003C(0x0008) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	float                                              WhiteCircleRadius;                                        // 0x0044(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              BlueCircleRadius;                                         // 0x0048(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   LastDriveVehicleCoord;                                    // 0x004C(0x0008) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	bool                                               bCanPlayerSeeLastVehicle;                                 // 0x0054(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0055(0x0003) MISSED OFFSET
	struct FAirplaneRouteData                          PlaneRouteData;                                           // 0x0058(0x0028) (BlueprintVisible, BlueprintReadOnly)
};

// ScriptStruct ShadowTrackerExtra.ParachuteStateParams
// 0x0034
struct FParachuteStateParams
{
	float                                              MinForwardForce;                                          // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxForwardForce;                                          // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DragForceFractor;                                         // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinPitchAngle;                                            // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxPitchAngle;                                            // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinRollAngle;                                             // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxRollAngle;                                             // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinForwardSpeed;                                          // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxForwardSpeed;                                          // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinRightSpeed;                                            // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxRightSpeed;                                            // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinDownSpeed;                                             // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxDownSpeed;                                             // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.BulletFlySoundReplicatedData
// 0x0018
struct FBulletFlySoundReplicatedData
{
	class ASTExtraShootWeapon*                         InstigateWeapon;                                          // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     FlySoundPos;                                              // 0x0008(0x000C) (IsPlainOldData)
	int                                                TriggerEarSoundIndex;                                     // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.CharacterAutoFollowStruct
// 0x0010
struct FCharacterAutoFollowStruct
{
	bool                                               IsFollowing;                                              // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class ASTExtraBaseCharacter*                       Target;                                                   // 0x0008(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.CharacterLocAndRot
// 0x0018
struct FCharacterLocAndRot
{
	struct FVector                                     Loc;                                                      // 0x0000(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FRotator                                    Rot;                                                      // 0x000C(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.DriveCarNotify
// 0x0018
struct FDriveCarNotify
{
	TEnumAsByte<EDriveCar>                             DriveCar;                                                 // 0x0000(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class ASTExtraBaseCharacter*                       Character;                                                // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	class ASTExtraWheeledVehicle*                      Vehicle;                                                  // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.WheelHubSetup
// 0x0018
struct FWheelHubSetup
{
	class UClass*                                      WheelClass;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       TireBoneName;                                             // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       TireCollisionBoneName;                                    // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.AppearanceMatData
// 0x0028
struct FAppearanceMatData
{
	struct FString                                     AppearanceKey;                                            // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	float                                              LifeSpan;                                                 // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	class UMaterialInterface*                          ParentMaterial;                                           // 0x0018(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    AppearanceMat;                                            // 0x0020(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.CanvasIcon2D
// 0x0018
struct FCanvasIcon2D
{
	class UTexture2D*                                  Texture;                                                  // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              U;                                                        // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              V;                                                        // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              UL;                                                       // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              VL;                                                       // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.WeaponCrossHairIconData
// 0x0020
struct FWeaponCrossHairIconData
{
	struct FCanvasIcon2D                               Icon;                                                     // 0x0000(0x0018) (Edit, DisableEditOnInstance)
	float                                              Alpha;                                                    // 0x0018(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Rotate;                                                   // 0x001C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.HitPerformData
// 0x0060
struct FHitPerformData
{
	TArray<struct FWeaponCrossHairIconData>            IconList;                                                 // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	float                                              DefaultSpread;                                            // 0x0010(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SpreadMax;                                                // 0x0014(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AddSpreadScale;                                           // 0x0018(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SpreadDecreaseSpeed;                                      // 0x001C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DefaultOffset;                                            // 0x0020(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DefaultAlpha;                                             // 0x0024(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AlphaDecreaseSpeed;                                       // 0x0028(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsHeadshot;                                               // 0x002C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x002D(0x0003) MISSED OFFSET
	struct FLinearColor                                HitBodyDrawColor;                                         // 0x0030(0x0010) (Edit, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                HitHeadDrawColor;                                         // 0x0040(0x0010) (Edit, DisableEditOnInstance, IsPlainOldData)
	float                                              CurCrosshairSpread;                                       // 0x0050(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x0054(0x000C) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.TrajectoryWeaponData
// 0x0070
struct FTrajectoryWeaponData
{
	float                                              WeaponSpread;                                             // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AimingSpreadModifier;                                     // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ScopingSpreadModifier;                                    // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FiringSpreadBase;                                         // 0x000C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StandRecoveryTime;                                        // 0x0010(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CrouchRecoveryTime;                                       // 0x0014(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ProneRecoveryTime;                                        // 0x0018(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RecoveryInterval;                                         // 0x001C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RecoilSpeed;                                              // 0x0020(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RecoilRecoverySpeed;                                      // 0x0024(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RecoilPatternScale;                                       // 0x0028(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              InitialSpeed;                                             // 0x002C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                HitDamage;                                                // 0x0030(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	class UCurveVector*                                BallisticCurve;                                           // 0x0038(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RangeModifier;                                            // 0x0040(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ReferenceDistance;                                        // 0x0044(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TravelDistanceMax;                                        // 0x0048(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SimulationSubstepTime;                                    // 0x004C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              VDragCoefficient;                                         // 0x0050(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BDS;                                                      // 0x0054(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseAdvancedBallistics;                                   // 0x0058(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsPenetrable;                                             // 0x0059(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x005A(0x0006) MISSED OFFSET
	class UClass*                                      DamageType;                                               // 0x0060(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      bIsTrajectoryReplicationEnabled : 1;                      // 0x0068(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0069(0x0007) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.WeaponDeviationData
// 0x0044
struct FWeaponDeviationData
{
	float                                              DeviationBase;                                            // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DeviationBaseAim;                                         // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DeviationBaseADS;                                         // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MOA;                                                      // 0x000C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DeviationRecoilGain;                                      // 0x0010(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DeviationRecoilGainAim;                                   // 0x0014(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DeviationRecoilGainADS;                                   // 0x0018(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DeviationMax;                                             // 0x001C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DeviationMinMove;                                         // 0x0020(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DeviationMaxMove;                                         // 0x0024(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DeviationMoveMultiplier;                                  // 0x0028(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DeviationMoveMinReferenceVelocity;                        // 0x002C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DeviationMoveMaxReferenceVelocity;                        // 0x0030(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DeviationStanceStand;                                     // 0x0034(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DeviationStanceCrouch;                                    // 0x0038(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DeviationStanceProne;                                     // 0x003C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DeviationStanceJump;                                      // 0x0040(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.WeaponGunData
// 0x00D0
struct FWeaponGunData
{
	class UParticleSystem*                             TracerClass;                                              // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                AmmoPerClip;                                              // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TimeBetweenShots;                                         // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              NoAnimReloadDuration;                                     // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FiringBulletsSpread;                                      // 0x0014(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsArrowProjectile;                                       // 0x0018(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bRotationFromBarrelWhenScoped;                            // 0x0019(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EWeaponReloadType>                     reloadMethod;                                             // 0x001A(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x001B(0x0001) MISSED OFFSET
	float                                              ReloadDurationByOneInitial;                               // 0x001C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ReloadDurationByOneLoop;                                  // 0x0020(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MovementModifierAim;                                      // 0x0024(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MovementModifierScope;                                    // 0x0028(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WeaponLength;                                             // 0x002C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ShoulderLength;                                           // 0x0030(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WeaponSuppressorLength;                                   // 0x0034(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TraceRadius;                                              // 0x0038(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TraceAdditiveZ;                                           // 0x003C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DebugWeaponCollision;                                     // 0x0040(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0041(0x0003) MISSED OFFSET
	struct FVector                                     HandWeaponOffset;                                         // 0x0044(0x000C) (Edit, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     HandWeaponOffsetFPP;                                      // 0x0050(0x000C) (Edit, DisableEditOnInstance, IsPlainOldData)
	bool                                               bManualCycleAfterShot;                                    // 0x005C(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bManualCycleInitialStateReady;                            // 0x005D(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x005E(0x0002) MISSED OFFSET
	float                                              LongTailDelay;                                            // 0x0060(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseConstScope;                                           // 0x0064(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseGridPelletSpread;                                     // 0x0065(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x0066(0x0002) MISSED OFFSET
	TMap<int, struct FVector2D>                        PelletGrid;                                               // 0x0068(0x0050) (Edit, ZeroConstructor, DisableEditOnInstance)
	float                                              GridPelletSpreadHalfAngle;                                // 0x00B8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseReloadScalarOverride;                                 // 0x00BC(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x00BD(0x0003) MISSED OFFSET
	float                                              ReloadSpeedScalar;                                        // 0x00C0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ADSTimeMultiplier;                                        // 0x00C4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseInertiaPitchAdditive;                                 // 0x00C8(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x00C9(0x0003) MISSED OFFSET
	float                                              InertiaPitchAdditiveInterpSpeed;                          // 0x00CC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.WeaponGunAnim
// 0x0110
struct FWeaponGunAnim
{
	class UAnimMontage*                                Fire;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      bLoopedFire : 1;                                          // 0x0008(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	class UAnimMontage*                                Reload;                                                   // 0x0010(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UBlendSpace1D*                               CharacterGripBlendspace;                                  // 0x0018(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UBlendSpaceBase*                             CharacterLHGripBlendspace;                                // 0x0020(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                CharacterFire;                                            // 0x0028(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                CharacterFireCycle;                                       // 0x0030(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                CharacterFireSelector;                                    // 0x0038(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                CharacterReloadTactical;                                  // 0x0040(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                CharacterReloadCharge;                                    // 0x0048(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                CharacterReloadByOneStart;                                // 0x0050(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                CharacterReloadByOneStop;                                 // 0x0058(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                CharacterReloadByOneSingle;                               // 0x0060(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                WeaponReloadTactical;                                     // 0x0068(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                WeaponReloadCharge;                                       // 0x0070(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ReloadDurationTactical;                                   // 0x0078(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ReloadDurationCharge;                                     // 0x007C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ReloadDurationStart;                                      // 0x0080(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ReloadDurationLoop;                                       // 0x0084(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ReloadDurationMagOut;                                     // 0x0088(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseBoltAction;                                           // 0x008C(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x008D(0x0003) MISSED OFFSET
	float                                              FireCycleDelay;                                           // 0x0090(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FireCycleDuration;                                        // 0x0094(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CycleAfterReloadDelay;                                    // 0x0098(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bCycleAfterLastShot;                                      // 0x009C(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bCycleDuringReload;                                       // 0x009D(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x009E(0x0002) MISSED OFFSET
	class UClass*                                      ShotCameraShake;                                          // 0x00A0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      ShotCameraShakeIronsight;                                 // 0x00A8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      ShotCameraShakeADS;                                       // 0x00B0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCameraAnim*                                 CycleCameraAnim;                                          // 0x00B8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RecoilKickADS;                                            // 0x00C0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RecoilKick_MovementSpeedMax;                              // 0x00C4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RecoilKick_MovementMaxMultiplier;                         // 0x00C8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     RecoilADSSocketOffsetScale;                               // 0x00CC(0x000C) (Edit, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     MagDropLinearVelocity;                                    // 0x00D8(0x000C) (Edit, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     MagDropAngularVelocity;                                   // 0x00E4(0x000C) (Edit, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     MagLocationOffset_Stand;                                  // 0x00F0(0x000C) (Edit, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     MagLocationOffset_Prone;                                  // 0x00FC(0x000C) (Edit, DisableEditOnInstance, IsPlainOldData)
	float                                              InertiaInterpMultiplier;                                  // 0x0108(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              InertiaClampMultiplier;                                   // 0x010C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.WeaponData
// 0x00A8
struct FWeaponData
{
	float                                              TargetingFOV;                                             // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HoldBreathFOV;                                            // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       Rarity;                                                   // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     SocketOffset_Shoulder;                                    // 0x0010(0x000C) (Edit, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     SocketOffset_Hand;                                        // 0x001C(0x000C) (Edit, DisableEditOnInstance, IsPlainOldData)
	bool                                               bApplyGripPoseLeft;                                       // 0x0028(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EWeaponGripLeftHand                                WeaponGripLeft;                                           // 0x0029(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EWeaponClass                                       WeaponClass;                                              // 0x002A(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseDefaultScoreMultiplier;                               // 0x002B(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ScoreMultiplierByDamage;                                  // 0x002C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ScoreMultiplierByKill;                                    // 0x0030(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SwayModifier_Pitch;                                       // 0x0034(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SwayModifier_YawOffset;                                   // 0x0038(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SwayModifier_Movement;                                    // 0x003C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SwayModifier_Stand;                                       // 0x0040(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SwayModifier_Crouch;                                      // 0x0044(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SwayModifier_Prone;                                       // 0x0048(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CameraDOF_Range;                                          // 0x004C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CameraDOF_NearRange;                                      // 0x0050(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CameraDOF_Power;                                          // 0x0054(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseDynamicReverbAK;                                      // 0x0058(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0059(0x0007) MISSED OFFSET
	TArray<int>                                        IronSightZeroingDistances;                                // 0x0060(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	bool                                               bAlwaysUseIronSightZeroing;                               // 0x0070(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0071(0x0003) MISSED OFFSET
	float                                              AnimationKick;                                            // 0x0074(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                RecoilMontage;                                            // 0x0078(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DestructibleDoor;                                         // 0x0080(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EThrownWeaponType                                  ThrownType;                                               // 0x0081(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x0082(0x0002) MISSED OFFSET
	float                                              WeaponEquipDuration;                                      // 0x0084(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WeaponUnequipDuration;                                    // 0x0088(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WeaponBoltActionTrigger;                                  // 0x008C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WeaponReadyDuration;                                      // 0x0090(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bForceFireAfterEquip;                                     // 0x0094(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0095(0x0003) MISSED OFFSET
	float                                              PhysicalBodyHitImpactPower;                               // 0x0098(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x009C(0x0004) MISSED OFFSET
	struct FName                                       WeaponSensitivityOverride;                                // 0x00A0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.ServerNotifyHitArgs
// 0x0178
struct FServerNotifyHitArgs
{
	TArray<int>                                        RotationChecksums;                                        // 0x0000(0x0010) (ZeroConstructor)
	float                                              CR_Pitch;                                                 // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              CR_Yaw;                                                   // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           RaycastCallerCheck;                                       // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           BoneCallerCheck;                                          // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           PawnCallerCheck;                                          // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           AimbotCallerCheck;                                        // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<int>                                        Checksums;                                                // 0x0028(0x0010) (ZeroConstructor)
	int                                                LocationChecksum;                                         // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
	TArray<int>                                        LogChecksums;                                             // 0x0040(0x0010) (ZeroConstructor)
	int                                                checksum_direction;                                       // 0x0050(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                HookDetected;                                             // 0x0054(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                HookType;                                                 // 0x0058(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                HookCount;                                                // 0x005C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TimeSeconds;                                              // 0x0060(0x0004) (ZeroConstructor, IsPlainOldData)
	uint16_t                                           Segment;                                                  // 0x0064(0x0002) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      IsUnderwater;                                             // 0x0066(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x0067(0x0001) MISSED OFFSET
	struct FIntVector                                  ClientOrigin;                                             // 0x0068(0x000C) (IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0074(0x0004) MISSED OFFSET
	struct FHitResult                                  ClientOriginImpact;                                       // 0x0078(0x0088) (IsPlainOldData)
	struct FVector_NetQuantize                         LocalOriginAttackerLoc;                                   // 0x0100(0x000C)
	struct FVector                                     ClientOriginVictimLoc;                                    // 0x010C(0x000C) (IsPlainOldData)
	struct FVector                                     ClientOriginAmmoStartLoc;                                 // 0x0118(0x000C) (IsPlainOldData)
	struct FVector_NetQuantizeNormal                   AimDir;                                                   // 0x0124(0x000C)
	struct FVector_NetQuantizeNormal                   AmmoDir;                                                  // 0x0130(0x000C)
	struct FVector_NetQuantize                         AmmoVelocity;                                             // 0x013C(0x000C)
	struct FVector_NetQuantizeNormal                   ShootDir;                                                 // 0x0148(0x000C)
	struct FVector_NetQuantize                         RelLocation;                                              // 0x0154(0x000C)
	float                                              travelDistance;                                           // 0x0160(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              SpeedLoss;                                                // 0x0164(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Spread;                                                   // 0x0168(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FAttackId                                   AttackId;                                                 // 0x016C(0x0004)
	uint16_t                                           AmmoId;                                                   // 0x0170(0x0002) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x6];                                       // 0x0172(0x0006) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.ServerNotifyHitArgs_NonPlayerCharacter
// 0x00B8
struct FServerNotifyHitArgs_NonPlayerCharacter
{
	struct FHitResult                                  ServerOriginImpact;                                       // 0x0000(0x0088) (IsPlainOldData)
	struct FVector_NetQuantize                         RelLocation;                                              // 0x0088(0x000C)
	uint16_t                                           AmmoId;                                                   // 0x0094(0x0002) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0096(0x0002) MISSED OFFSET
	struct FVector_NetQuantizeNormal                   ShootDir;                                                 // 0x0098(0x000C)
	float                                              travelDistance;                                           // 0x00A4(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              SpeedLoss;                                                // 0x00A8(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FAttackId                                   AttackId;                                                 // 0x00AC(0x0004)
	bool                                               IsMultpleiBullet;                                         // 0x00B0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x00B1(0x0007) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.EmoteDBDataRow
// 0x0048 (0x0050 - 0x0008)
struct FEmoteDBDataRow : public FTableRowBase
{
	int                                                EmoteID;                                                  // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FText                                       EmoteLocalizedName;                                       // 0x0010(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UTexture2D*                                  UITexture;                                                // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInterface*                          UIMaterial;                                               // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                AnimMontage;                                              // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EEmoteAnimType                                     AnimType;                                                 // 0x0040(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsBGM_Sound;                                             // 0x0041(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsRotationAllowed;                                       // 0x0042(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsLoopable;                                              // 0x0043(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsRNG;                                                   // 0x0044(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsCooperative;                                           // 0x0045(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0046(0x0002) MISSED OFFSET
	class UTslEmoteTraceData*                          TraceDataRef;                                             // 0x0048(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.EmoteTraceCheck
// 0x001C
struct FEmoteTraceCheck
{
	struct FVector                                     InitialActorOffset;                                       // 0x0000(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     TraceVector;                                              // 0x000C(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	float                                              SphereRadius;                                             // 0x0018(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.UmgWidgetBinder_CanvasPanel
// 0x0008 (0x0020 - 0x0018)
struct FUmgWidgetBinder_CanvasPanel : public FUmgWidgetBinder
{
	class UCanvasPanel*                                CachedCanvasPanel;                                        // 0x0018(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.UmgWidgetBinder_WidgetSwitcher
// 0x0008 (0x0020 - 0x0018)
struct FUmgWidgetBinder_WidgetSwitcher : public FUmgWidgetBinder
{
	class UWidgetSwitcher*                             CachedWidgetSwitcher;                                     // 0x0018(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.UmgWidgetBinder_Overlay
// 0x0008 (0x0020 - 0x0018)
struct FUmgWidgetBinder_Overlay : public FUmgWidgetBinder
{
	class UOverlay*                                    CachedOverlay;                                            // 0x0018(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.UmgWidgetBinder_Image
// 0x0010 (0x0028 - 0x0018)
struct FUmgWidgetBinder_Image : public FUmgWidgetBinder
{
	class UImage*                                      CachedImage;                                              // 0x0018(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UMaterialInstanceDynamic*                    CachedMaterial;                                           // 0x0020(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.UmgWidgetBinder_TextBlock
// 0x0008 (0x0020 - 0x0018)
struct FUmgWidgetBinder_TextBlock : public FUmgWidgetBinder
{
	class UTextBlock*                                  CachedTextBlock;                                          // 0x0018(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.UmgWidgetBinder_SizeBox
// 0x0008 (0x0020 - 0x0018)
struct FUmgWidgetBinder_SizeBox : public FUmgWidgetBinder
{
	class USizeBox*                                    CachedSizeBox;                                            // 0x0018(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.TslInputKey
// 0x0020
struct FTslInputKey
{
	struct FKey                                        Key;                                                      // 0x0000(0x0018) (Edit, BlueprintVisible)
	unsigned char                                      bShift : 1;                                               // 0x0018(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bCtrl : 1;                                                // 0x0018(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bAlt : 1;                                                 // 0x0018(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.ScreenResolution
// 0x0008
struct FScreenResolution
{
	int                                                Width;                                                    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Height;                                                   // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.SurportQualityLevel
// 0x0020
struct FSurportQualityLevel
{
	int                                                QualityLevel;                                             // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FText                                       DisplayQualityLevelName;                                  // 0x0008(0x0018) (Edit, BlueprintVisible)
};

// ScriptStruct ShadowTrackerExtra.UiType
// 0x0028
struct FUiType
{
	struct FText                                       DisplayUiName;                                            // 0x0000(0x0018) (Edit, BlueprintVisible)
	struct FString                                     UiKey;                                                    // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct ShadowTrackerExtra.KeyInputModeName
// 0x0020
struct FKeyInputModeName
{
	struct FName                                       ModeName;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FText                                       DisplayName;                                              // 0x0008(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
};

// ScriptStruct ShadowTrackerExtra.TslGamepadInputKey
// 0x0028
struct FTslGamepadInputKey
{
	struct FKey                                        Key;                                                      // 0x0000(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	EGamepadInputResponseTypes                         ResponseType;                                             // 0x0018(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
	float                                              ResponseTime;                                             // 0x001C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bBlockDuplicatedKeyAction;                                // 0x0020(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.TslGamepadActionKeyData
// 0x0080
struct FTslGamepadActionKeyData
{
	struct FName                                       ActionName;                                               // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FText                                       DisplayName;                                              // 0x0008(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FString                                     Comment;                                                  // 0x0020(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FText                                       Desc;                                                     // 0x0030(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FString                                     Category;                                                 // 0x0048(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FTslGamepadInputKey                         GamepadActionKey;                                         // 0x0058(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly)
};

// ScriptStruct ShadowTrackerExtra.TslGamepadAxisKeyData
// 0x0040
struct FTslGamepadAxisKeyData
{
	struct FName                                       AxisName;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FText                                       DisplayName;                                              // 0x0008(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	float                                              Scale;                                                    // 0x0020(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	struct FKey                                        GamepadAxisKey;                                           // 0x0028(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
};

// ScriptStruct ShadowTrackerExtra.TslGamepadKeyPreset
// 0x0028
struct FTslGamepadKeyPreset
{
	struct FName                                       PresetName;                                               // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<struct FTslGamepadActionKeyData>            ActionKeyDatas;                                           // 0x0008(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FTslGamepadAxisKeyData>              AxisKeyDatas;                                             // 0x0018(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct ShadowTrackerExtra.PresetColor
// 0x0038
struct FPresetColor
{
	struct FLinearColor                                Color;                                                    // 0x0000(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FText                                       DisplayName;                                              // 0x0010(0x0018) (Edit, BlueprintVisible)
	struct FString                                     ColorString;                                              // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct ShadowTrackerExtra.ColorBlindType
// 0x0020
struct FColorBlindType
{
	EColorBlindType                                    Key;                                                      // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FText                                       DisplayName;                                              // 0x0008(0x0018) (Edit, BlueprintVisible)
};

// ScriptStruct ShadowTrackerExtra.QualityLevelInfo
// 0x0020
struct FQualityLevelInfo
{
	EQualityType                                       QualityType;                                              // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FText                                       DisplayQualityLevelName;                                  // 0x0008(0x0018) (Edit, BlueprintVisible)
};

// ScriptStruct ShadowTrackerExtra.CustomizableMouseSensitiveName
// 0x0028
struct FCustomizableMouseSensitiveName
{
	struct FText                                       DisplayName;                                              // 0x0000(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FName                                       MouseSensitiveName;                                       // 0x0018(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MouseSensitivity;                                         // 0x0020(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.CustomizableGamePadSensitiveName
// 0x0030
struct FCustomizableGamePadSensitiveName
{
	struct FText                                       DisplayName;                                              // 0x0000(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FName                                       GamePadSensitiveName;                                     // 0x0018(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GamePadSensitivity;                                       // 0x0020(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	class UCurveFloat*                                 GamePadCurve;                                             // 0x0028(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.CustomizableCategoryData
// 0x0030
struct FCustomizableCategoryData
{
	struct FText                                       DisplayName;                                              // 0x0000(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FName                                       Category;                                                 // 0x0018(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FName>                               NotDuplicateCategoryNames;                                // 0x0020(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct ShadowTrackerExtra.CustomizableAxisName
// 0x0030
struct FCustomizableAxisName
{
	struct FName                                       Category;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       AxisName;                                                 // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FText                                       DisplayName;                                              // 0x0010(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	float                                              Scale;                                                    // 0x0028(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.CustomizableActionName
// 0x0028
struct FCustomizableActionName
{
	struct FName                                       Category;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       ActionName;                                               // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FText                                       DisplayName;                                              // 0x0010(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
};

// ScriptStruct ShadowTrackerExtra.TslKeyIconData
// 0x0030
struct FTslKeyIconData
{
	struct FKey                                        Key;                                                      // 0x0000(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	class UTexture*                                    KeyIcon;                                                  // 0x0018(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UTexture*                                    KeyIcon_PS;                                               // 0x0020(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              IconRatio;                                                // 0x0028(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.HintKeyInfo
// 0x0020
struct FHintKeyInfo
{
	struct FName                                       KeyName;                                                  // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       SecondKeyName;                                            // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Scale;                                                    // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              SecondScale;                                              // 0x0014(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bHideInProneStance;                                       // 0x0018(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.UmgWidgetBinder_Gerneral
// 0x0008 (0x0020 - 0x0018)
struct FUmgWidgetBinder_Gerneral : public FUmgWidgetBinder
{
	class UWidget*                                     CachedWidget;                                             // 0x0018(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.TslKeyHintData
// 0x0010
struct FTslKeyHintData
{
	EKeyHintType                                       KeyHintType;                                              // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                Priority;                                                 // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UTslKeyHintChecker*                          KeyHintChecker;                                           // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.CustomActionKeyData
// 0x0018
struct FCustomActionKeyData
{
	struct FName                                       ActionName;                                               // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FTslInputKey>                        Keys;                                                     // 0x0008(0x0010) (ZeroConstructor)
};

// ScriptStruct ShadowTrackerExtra.CustomAxisKeyData
// 0x0020
struct FCustomAxisKeyData
{
	struct FName                                       AxisName;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              Scale;                                                    // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	TArray<struct FTslInputKey>                        Keys;                                                     // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct ShadowTrackerExtra.CustomMouseSensitiveData
// 0x0010
struct FCustomMouseSensitiveData
{
	struct FName                                       MouseSensitiveName;                                       // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              MouseSensitivity;                                         // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              LastConvertedMouseSensitivity;                            // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.CustomGamePadSensitiveData
// 0x0010
struct FCustomGamePadSensitiveData
{
	struct FName                                       GamePadSensitiveName;                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              GamePadSensitivity;                                       // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              LastConvertedGamePadSensitivity;                          // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.CustomSensitiveData
// 0x0010
struct FCustomSensitiveData
{
	struct FName                                       SensitiveName;                                            // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              Sensitivity;                                              // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              LastConvertedSensitivity;                                 // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.CustomSensitiveDataArray
// 0x0010
struct FCustomSensitiveDataArray
{
	TArray<struct FCustomSensitiveData>                Array;                                                    // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct ShadowTrackerExtra.CustomInputSettings
// 0x00C8
struct FCustomInputSettings
{
	TArray<struct FCustomActionKeyData>                ActionKeyList;                                            // 0x0000(0x0010) (ZeroConstructor, Config)
	TArray<struct FCustomAxisKeyData>                  AxisKeyList;                                              // 0x0010(0x0010) (ZeroConstructor, Config)
	bool                                               bIsUsingPerScopeMouseSensitivity;                         // 0x0020(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bIsUsingPerScopeGamepadSensitivity;                       // 0x0021(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0022(0x0006) MISSED OFFSET
	TArray<struct FCustomMouseSensitiveData>           MouseSensitiveList;                                       // 0x0028(0x0010) (ZeroConstructor, Config)
	TArray<struct FCustomGamePadSensitiveData>         GamePadSensitiveList;                                     // 0x0038(0x0010) (ZeroConstructor, Config)
	TMap<ETslControllerType, struct FCustomSensitiveDataArray> SensitiveMap;                                             // 0x0048(0x0050) (ZeroConstructor, Config)
	float                                              MouseVerticalSensitivityMultiplierAdjusted;               // 0x0098(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bInvertMouse;                                             // 0x009C(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bInvertGamePadY;                                          // 0x009D(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bInvertGamePadX;                                          // 0x009E(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x009F(0x0001) MISSED OFFSET
	float                                              GamePadDeadZone;                                          // 0x00A0(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              GamepadVerticalSensitivityMultiplier;                     // 0x00A4(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              StartRunningSensitivity;                                  // 0x00A8(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              GamePadDeadZone_Left;                                     // 0x00AC(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bEnableAimAccPad;                                         // 0x00B0(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData02[0x17];                                      // 0x00B1(0x0017) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.RecoilInfo
// 0x0088
struct FRecoilInfo
{
	float                                              VerticalRecoilMin;                                        // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              VerticalRecoilMax;                                        // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              VerticalRecoilRecoveryMin;                                // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              VerticalRecoilVariation;                                  // 0x000C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              VerticalRecoveryModifier;                                 // 0x0010(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              VerticalRecoveryClamp;                                    // 0x0014(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              VerticalRecoveryMax;                                      // 0x0018(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LeftMax;                                                  // 0x001C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RightMax;                                                 // 0x0020(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HorizontalTendency;                                       // 0x0024(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveVector*                                RecoilCurve;                                              // 0x0028(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                BulletsPerSwitch;                                         // 0x0030(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TimePerSwitch;                                            // 0x0034(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bSwitchOnTime;                                            // 0x0038(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0039(0x0003) MISSED OFFSET
	float                                              RecoilSpeed_Vertical;                                     // 0x003C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RecoilSpeed_Horizontal;                                   // 0x0040(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RecoverySpeed_Vertical;                                   // 0x0044(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RecoilValue_Climb;                                        // 0x0048(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RecoilValue_Fall;                                         // 0x004C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RecoilModifier_Stand;                                     // 0x0050(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RecoilModifier_Crouch;                                    // 0x0054(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RecoilModifier_Prone;                                     // 0x0058(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RecoilHorizontalMinScalar;                                // 0x005C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   RecoilStartTimeInMap;                                     // 0x0060(0x0008) (Edit, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   RecoilStartTimeOutMap;                                    // 0x0068(0x0008) (Edit, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   RecoilBlendInInMap;                                       // 0x0070(0x0008) (Edit, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   RecoilBlendInOutMap;                                      // 0x0078(0x0008) (Edit, DisableEditOnInstance, IsPlainOldData)
	float                                              StabilityForceModifier;                                   // 0x0080(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StabilitySpeedModifier;                                   // 0x0084(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.KeyboardAndMouseActionAndAxisBindingHintInfo
// 0x0028
struct FKeyboardAndMouseActionAndAxisBindingHintInfo
{
	struct FName                                       ActionOrAxisBindingName;                                  // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FText                                       HintDisplayName;                                          // 0x0008(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	bool                                               bHoldInput;                                               // 0x0020(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bReleaseInput;                                            // 0x0021(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bHideInProneStance;                                       // 0x0022(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x0023(0x0005) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.UmgWidgetBinder_UserWidget
// 0x0008 (0x0020 - 0x0018)
struct FUmgWidgetBinder_UserWidget : public FUmgWidgetBinder
{
	class UUserWidget*                                 CachedWidget;                                             // 0x0018(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.LoadingScreenTypePercent
// 0x0008
struct FLoadingScreenTypePercent
{
	ELoadingScreenType                                 LoadingScreenType;                                        // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              Percent;                                                  // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.LoadingScreenTypePercentConfig
// 0x0040
struct FLoadingScreenTypePercentConfig
{
	TArray<struct FLoadingScreenTypePercent>           LoadingScreenTypePercentForElementaryRank;                // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FLoadingScreenTypePercent>           LoadingScreenTypePercentForIntermediateRank;              // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FLoadingScreenTypePercent>           LoadingScreenTypePercentForHighRank;                      // 0x0020(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FLoadingScreenTypePercent>           LoadingScreenTypePercentForExpertRank;                    // 0x0030(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct ShadowTrackerExtra.ElementaryRankGuidePercentConfig
// 0x0010 (0x0018 - 0x0008)
struct FElementaryRankGuidePercentConfig : public FTableRowBase
{
	float                                              ShowElementaryRankPercentForElementaryRank;               // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ShowElementaryRankPercentForIntermediateRank;             // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ShowElementaryRankPercentForHighRank;                     // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ShowElementaryRankPercentForExpertRank;                   // 0x0014(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.TslPlayerStatistics
// 0x0004
struct FTslPlayerStatistics
{
	int                                                NumKills;                                                 // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.TslPlayerStatisticsForOwner
// 0x0010
struct FTslPlayerStatisticsForOwner
{
	float                                              TotalMovedDistanceMeter;                                  // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TotalGivenDamages;                                        // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              LongestDistanceKill;                                      // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                HeadShots;                                                // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.PlayerHitInfo
// 0x000C
struct FPlayerHitInfo
{
	int                                                Hits;                                                     // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Damages;                                                  // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Kills;                                                    // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.PlayerAttackInfo
// 0x0058
struct FPlayerAttackInfo
{
	int                                                Shots;                                                    // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	TMap<EDamageReason, struct FPlayerHitInfo>         HitInfoMap;                                               // 0x0008(0x0050) (ZeroConstructor)
};

// ScriptStruct ShadowTrackerExtra.TslPlayerStatisticsNotReplicated
// 0x0118
struct FTslPlayerStatisticsNotReplicated
{
	float                                              MovedDistanceOnFeetMeter;                                 // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              MovedDistanceOnSwimMeter;                                 // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              MovedDistanceOnVehicleMeter;                              // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              MovedDistanceOnParchuteMeter;                             // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              MovedDistanceOnFreefallMeter;                             // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                NumAssistToRevive;                                        // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                NumGunShots;                                              // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                NumGunShotHits;                                           // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	TMap<struct FString, struct FPlayerAttackInfo>     AttacksGivenInfos;                                        // 0x0020(0x0050) (ZeroConstructor)
	TMap<struct FString, struct FPlayerAttackInfo>     AttacksTakenInfos;                                        // 0x0070(0x0050) (ZeroConstructor)
	float                                              DamageDealtOnEnemy;                                       // 0x00C0(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00C4(0x0004) MISSED OFFSET
	TMap<struct FString, int>                          WeaponFireCounts;                                         // 0x00C8(0x0050) (ZeroConstructor)
};

// ScriptStruct ShadowTrackerExtra.TslPlayTime
// 0x0010
struct FTslPlayTime
{
	float                                              SurvivalTimeStart;                                        // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              TeamSpectatingTimeStart;                                  // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              SurvivalTimeAccumulated;                                  // 0x0008(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              TeamSpectatingTimeAccumulated;                            // 0x000C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.TslPlayerBpReward
// 0x0010
struct FTslPlayerBpReward
{
	float                                              BpByPlayTime;                                             // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              BpByRanking;                                              // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              BpByKills;                                                // 0x0008(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              BpByDamageDealt;                                          // 0x000C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.TslPlayerXpReward
// 0x0008
struct FTslPlayerXpReward
{
	float                                              XpBySurvivalTime;                                         // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              XpByTeamSpectatingTime;                                   // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.TslPlayerRewardBoost
// 0x0008
struct FTslPlayerRewardBoost
{
	float                                              BpBoost;                                                  // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              XpBoost;                                                  // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.TslPlayerRewardContext
// 0x000C
struct FTslPlayerRewardContext
{
	bool                                               bIsMaxLevel;                                              // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              CurrentDailyXp;                                           // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              DailyXpMax;                                               // 0x0008(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.MotoRollDampSettings
// 0x001C
struct FMotoRollDampSettings
{
	bool                                               bVelDampening;                                            // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              StabilizeAirPercentage;                                   // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StabilizeAirTorquePercentage;                             // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RollVelDampeningContact;                                  // 0x000C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RollVelDampeningNoContact;                                // 0x0010(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RollVelDampeningInterp;                                   // 0x0014(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseLinearInterp;                                         // 0x0018(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.PlayerDamageZoneDesc
// 0x00B0
struct FPlayerDamageZoneDesc
{
	float                                              GlobalMultiplier;                                         // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	TMap<struct FName, float>                          BonesMultipliers;                                         // 0x0008(0x0050) (Edit, ZeroConstructor, DisableEditOnInstance)
	TMap<EWeaponType, float>                           WeaponClassMultipliers;                                   // 0x0058(0x0050) (Edit, ZeroConstructor, DisableEditOnInstance)
	float                                              PunchMultiplier;                                          // 0x00A8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EEquipSlotID                                       ArmorSlot;                                                // 0x00AC(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EDamageReason                                      DamageReason;                                             // 0x00AD(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x00AE(0x0002) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.PostProcessMaterial
// 0x0010
struct FPostProcessMaterial
{
	class UMaterialInterface*                          EffectMaterial;                                           // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BlendWeight;                                              // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.PostProcessEffectParameter
// 0x0018
struct FPostProcessEffectParameter
{
	struct FString                                     Name;                                                     // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              Value;                                                    // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.PostProcessEffectDynamicMaterialState
// 0x0010
struct FPostProcessEffectDynamicMaterialState
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.BoneBinding
// 0x0010
struct FBoneBinding
{
	struct FName                                       ImpactBone;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       ReactionBone;                                             // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.ChineseLicensingDefaultCustomizeData
// 0x0010
struct FChineseLicensingDefaultCustomizeData
{
	struct FString                                     CustomizableObjectGroupName;                              // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct ShadowTrackerExtra.InteractionCollisionData
// 0x0014
struct FInteractionCollisionData
{
	float                                              CapsuleHalfHeight;                                        // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CapsuleRadius;                                            // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     CapsuleOffset;                                            // 0x0008(0x000C) (Edit, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.LevelLoadingBoostParameters
// 0x0010
struct FLevelLoadingBoostParameters
{
	float                                              AsyncLoadingTimeLimit;                                    // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PriorityAsyncLoadingExtraTime;                            // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LevelStreamingActorsUpdateTimeLimit;                      // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                LevelStreamingComponentsRegistrationGranularity;          // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.NearClippingValue
// 0x0008
struct FNearClippingValue
{
	ENearClippingLevel                                 Level;                                                    // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              Value;                                                    // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.NamedFovRecord
// 0x0010
struct FNamedFovRecord
{
	struct FName                                       SensitiveName;                                            // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FOV;                                                      // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.AimAcceleration
// 0x0008
struct FAimAcceleration
{
	class UCurveFloat*                                 RampUpTimeForTargetingCurve;                              // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.ColorBlindColorData
// 0x0014
struct FColorBlindColorData
{
	EColorBlindType                                    Type;                                                     // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FLinearColor                                Color;                                                    // 0x0004(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.ColorBlindColorSet
// 0x0010
struct FColorBlindColorSet
{
	TArray<struct FColorBlindColorData>                ColorSet;                                                 // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct ShadowTrackerExtra.ReticleColors
// 0x0018
struct FReticleColors
{
	EReticleType                                       ReticleType;                                              // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FColorBlindColorSet                         ColorSet;                                                 // 0x0008(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
};

// ScriptStruct ShadowTrackerExtra.TeamColorAndIcon
// 0x0038
struct FTeamColorAndIcon
{
	struct FColorBlindColorSet                         TeamMemberColor;                                          // 0x0000(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UTexture*                                    MarkerIcon;                                               // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UTexture*                                    PlayerIcon;                                               // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UTexture*                                    CompassIcon;                                              // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UTexture*                                    IndicatorIcon;                                            // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UTexture*                                    MapDeathIcon;                                             // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.OverrideScalabilityValue
// 0x0028
struct FOverrideScalabilityValue
{
	struct FString                                     ConsoleName;                                              // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	ETSLValueType                                      ValueType;                                                // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
	TArray<struct FString>                             Values;                                                   // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct ShadowTrackerExtra.OverrideScalability
// 0x0018
struct FOverrideScalability
{
	EQualityType                                       QualityType;                                              // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TArray<struct FOverrideScalabilityValue>           OverrideScalabilityValues;                                // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct ShadowTrackerExtra.ReportCauseData
// 0x0030
struct FReportCauseData
{
	struct FText                                       DisplayName;                                              // 0x0000(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	EReportCause                                       ReportCauseType;                                          // 0x0018(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
	TArray<EReportDetailCauseType>                     DetailCauseTypeList;                                      // 0x0020(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct ShadowTrackerExtra.SubjectToReport
// 0x0020
struct FSubjectToReport
{
	struct FText                                       DisplayName;                                              // 0x0000(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	ESubjectToReport                                   SubjectToReportType;                                      // 0x0018(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.ReportDetailCauseTypeDescription
// 0x0020
struct FReportDetailCauseTypeDescription
{
	EReportDetailCauseType                             ReportDetailCauseType;                                    // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FText                                       Description;                                              // 0x0008(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
};

// ScriptStruct ShadowTrackerExtra.AimAssistData
// 0x0030
struct FAimAssistData
{
	float                                              MinDistance;                                              // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxDistance;                                              // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TrackingModifier;                                         // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AdhesionSpeed;                                            // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DeadZoneValue;                                            // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseTrackingModifierCurve;                                // 0x0014(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
	class UCurveFloat*                                 TrackingModifierCurve;                                    // 0x0018(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseAdhesionSpeedCurve;                                   // 0x0020(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
	class UCurveFloat*                                 AdhesionSpeedCurve;                                       // 0x0028(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.AnimatableCustomizableObjectData
// 0x0018
struct FAnimatableCustomizableObjectData
{
	EAnimatableCustomizableTypes                       ParamType;                                                // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TArray<struct FName>                               AnimatableCustomizableObjectNames;                        // 0x0008(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct ShadowTrackerExtra.OptionContentDesc
// 0x0068
struct FOptionContentDesc
{
	struct FName                                       OptionName;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FText                                       DisplayName;                                              // 0x0008(0x0018) (Edit)
	struct FText                                       DescText;                                                 // 0x0020(0x0018) (Edit)
	EOptionExposeType                                  ExposeType;                                               // 0x0038(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bIsStepper;                                               // 0x0039(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x003A(0x0006) MISSED OFFSET
	TArray<struct FText>                               StepperContents;                                          // 0x0040(0x0010) (Edit, ZeroConstructor)
	int                                                StepperDefaultIndex;                                      // 0x0050(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bIsSlider;                                                // 0x0054(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0055(0x0003) MISSED OFFSET
	float                                              SliderMin;                                                // 0x0058(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SliderMax;                                                // 0x005C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SliderDefaultValue;                                       // 0x0060(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bIsSeparator;                                             // 0x0064(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPalette;                                               // 0x0065(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x0066(0x0002) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.ReticleTextureData
// 0x0030
struct FReticleTextureData
{
	float                                              ReticleAngularSize;                                       // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   ReticleCenter;                                            // 0x0004(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	class UTexture2D*                                  ReticleTexture;                                           // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseHaloTexture;                                          // 0x0018(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
	float                                              HaloTextureScale;                                         // 0x001C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     ReticleColor;                                             // 0x0020(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	float                                              ReticleScale;                                             // 0x002C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.WebPopupParam
// 0x0038
struct FWebPopupParam
{
	struct FString                                     PopupId;                                                  // 0x0000(0x0010) (BlueprintVisible, ZeroConstructor)
	struct FString                                     Uri;                                                      // 0x0010(0x0010) (BlueprintVisible, ZeroConstructor)
	float                                              X;                                                        // 0x0020(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Y;                                                        // 0x0024(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Width;                                                    // 0x0028(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Height;                                                   // 0x002C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FColor                                      BackgroundColor;                                          // 0x0030(0x0004) (BlueprintVisible, IsPlainOldData)
	bool                                               UseBackgroundColor;                                       // 0x0034(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ShowButtonGroup;                                          // 0x0035(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0036(0x0002) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.BrightnessConfig
// 0x0020
struct FBrightnessConfig
{
	class UCurveVector*                                ReticleBrightnessSettingsCurve;                           // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       ReticleBrightnessParamX;                                  // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       ReticleBrightnessParamY;                                  // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       ReticleBrightnessParamZ;                                  // 0x0018(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.WeaponAttachmentData
// 0x0218
struct FWeaponAttachmentData
{
	float                                              RecoilMultiplierHorizontal;                               // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RecoilMultiplierVertical;                                 // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RecoilRecoveryMultiplier;                                 // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MultipleFiringBulletsSpread;                              // 0x000C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MultipleFiringSpreadBase;                                 // 0x0010(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DeviationMultiplier;                                      // 0x0014(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AnimationKickMultiplier;                                  // 0x0018(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ADSSpeedMultiplier;                                       // 0x001C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SwayMultiplier;                                           // 0x0020(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	TMap<int, struct FVector2D>                        PelletGridOverride;                                       // 0x0028(0x0050) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<int>                                        ZeroingDistances;                                         // 0x0078(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	bool                                               bUsePelletGridOverride;                                   // 0x0088(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EWeaponAttachmentSlotID                            AttachmentSlotID;                                         // 0x0089(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x008A(0x0006) MISSED OFFSET
	struct FName                                       MouseSensitiveName;                                       // 0x0090(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MagnificationFOVMaxIncrement;                             // 0x0098(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MagnificationFOVSteps;                                    // 0x009C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MagnificationFOV;                                         // 0x00A0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x00A4(0x0004) MISSED OFFSET
	struct FBrightnessConfig                           ReticleBrightnessConfig;                                  // 0x00A8(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	TMap<class UClass*, class UMaterialInstance*>      ReticleMaterialOverrides;                                 // 0x00C8(0x0050) (Edit, ZeroConstructor, DisableEditOnInstance)
	TMap<class UClass*, class UTexture2D*>             ReticleTextureOverrides;                                  // 0x0118(0x0050) (Edit, ZeroConstructor, DisableEditOnInstance)
	TMap<class UClass*, class UReticleSettings*>       ReticleSettingsOverrides;                                 // 0x0168(0x0050) (Edit, ZeroConstructor, DisableEditOnInstance)
	class UReticlePostprocessData*                     ScopePostprocessData;                                     // 0x01B8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TMap<class UClass*, class UReticlePostprocessData*> ReticlePostProcessOverrideData;                           // 0x01C0(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	float                                              StabilitySpeedScalar;                                     // 0x0210(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StabilityForceModifier;                                   // 0x0214(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.SkillAction_AttachActorCreateData
// 0x0030
struct FSkillAction_AttachActorCreateData
{
	class UClass*                                      ActorTemplate;                                            // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       AttachSocketName;                                         // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     RelativeLocation;                                         // 0x0010(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FRotator                                    RelativeRotation;                                         // 0x001C(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	bool                                               DestroyAfterSkill;                                        // 0x0028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               DestroyAfterPhase;                                        // 0x0029(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x002A(0x0006) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.SkillPoseMontageData
// 0x0020
struct FSkillPoseMontageData
{
	class UAnimMontage*                                AnimMontage_Stand;                                        // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                AnimMontage_Crouch;                                       // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                AnimMontage_Prone;                                        // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                AnimMontage_Vehicle;                                      // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.RandomActionGroup
// 0x0010
struct FRandomActionGroup
{
	TArray<class UUTSkillAction*>                      Actions;                                                  // 0x0000(0x0010) (Edit, ExportObject, ZeroConstructor)
};

// ScriptStruct ShadowTrackerExtra.SkillAction_SpawnActorCreateData
// 0x0050
struct FSkillAction_SpawnActorCreateData
{
	class UClass*                                      ActorTemplate;                                            // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UUTSkillLocationPicker*                      LocationPicker;                                           // 0x0008(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bLocalSpawn;                                              // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableAttach;                                            // 0x0011(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0012(0x0006) MISSED OFFSET
	struct FName                                       AttachSocket;                                             // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     OffsetLocationStand;                                      // 0x0020(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     OffsetLocationCrouch;                                     // 0x002C(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     OffsetLocationProne;                                      // 0x0038(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FRotator                                    OffsetRotation;                                           // 0x0044(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.SkillAction_SpawnProjectileCreateData
// 0x0020
struct FSkillAction_SpawnProjectileCreateData
{
	class UClass*                                      ProjectileTemplate;                                       // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     OffsetLocation;                                           // 0x0008(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FRotator                                    OffsetRotation;                                           // 0x0014(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.UTSkillPicker_FanCreateData
// 0x0018
struct FUTSkillPicker_FanCreateData
{
	float                                              Radius;                                                   // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Angle;                                                    // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Offset;                                                   // 0x0008(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	bool                                               Random;                                                   // 0x0014(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsCheckHeadshot;                                          // 0x0015(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsShowDebugFan;                                           // 0x0016(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0017(0x0001) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.UTSkillEntryConfig
// 0x0018
struct FUTSkillEntryConfig
{
	EUTSkillEntry                                      Entry;                                                    // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                SkillIndex;                                               // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FString                                     Interrupts;                                               // 0x0008(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct ShadowTrackerExtra.ComparableGrenadeItemType
// 0x00A0
struct FComparableGrenadeItemType
{
	struct FBattleItemData                             BattleItemData;                                           // 0x0000(0x0098) (Edit, BlueprintVisible)
	TEnumAsByte<EGrenadeType>                          GrenadeItemType;                                          // 0x0098(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0099(0x0003) MISSED OFFSET
	int                                                ItemPriority;                                             // 0x009C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.CompatableComsumableItemType
// 0x00A0
struct FCompatableComsumableItemType
{
	struct FBattleItemData                             BattleItemData;                                           // 0x0000(0x0098) (Edit, BlueprintVisible)
	TEnumAsByte<EConsumeItemType>                      ConsumableItemType;                                       // 0x0098(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0099(0x0003) MISSED OFFSET
	int                                                ItemPriority;                                             // 0x009C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.UTSkillAppearance_ParticleSystem_Item
// 0x0078
struct FUTSkillAppearance_ParticleSystem_Item
{
	class UUTSkillPicker*                              TargetPicker;                                             // 0x0000(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystem*                             TemplateSelfTeam_Effect;                                  // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             TemplateEnermyTeam_Effect;                                // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             TemplateSelfTeamFPP_Effect;                               // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bLoop;                                                    // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0021(0x0003) MISSED OFFSET
	float                                              Scale;                                                    // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       SocketName;                                               // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LocationOffset;                                           // 0x0030(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FRotator                                    RotationOffset;                                           // 0x003C(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     LocationOffsetTPP;                                        // 0x0048(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FRotator                                    RotationOffsetTPP;                                        // 0x0054(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              ScaleTPP;                                                 // 0x0060(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0064(0x0004) MISSED OFFSET
	struct FName                                       HurtRotationSocketName;                                   // 0x0068(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AutoDispearTime;                                          // 0x0070(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAttachToPawn;                                            // 0x0074(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0075(0x0003) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.UTSkillAppearance_SoundCue_Item
// 0x0018
struct FUTSkillAppearance_SoundCue_Item
{
	EUTSkill_SoundCue_ListenType                       ListenType;                                               // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class UAkAudioEvent*                               AkEvent;                                                  // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bLoop;                                                    // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.STExtraVehicleWheelHP
// 0x0010
struct FSTExtraVehicleWheelHP
{
	float                                              HPMax;                                                    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FName                                       BoneName;                                                 // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.STVehicleWheelDust
// 0x0028
struct FSTVehicleWheelDust
{
	TEnumAsByte<EPhysicalSurface>                      ContactSurface;                                           // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class UParticleSystem*                             MoveFx;                                                   // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             SlipFx;                                                   // 0x0010(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             HubFx;                                                    // 0x0018(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              minSpeed;                                                 // 0x0020(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.STExtraVehicleSeat
// 0x0030
struct FSTExtraVehicleSeat
{
	ESTExtraVehicleSeatType                            SeatType;                                                 // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FName                                       AnimCompTagName;                                          // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       EnterVehicleSocket;                                       // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       LeaveVehicleSocket;                                       // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMovementMode>                         OccupyMovementMode;                                       // 0x0020(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EVHSeatWeaponHoldType>                 HoldWeaponType;                                           // 0x0021(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EVHSeatSpecialType                                 SeatSpecialType;                                          // 0x0022(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x0023(0x0001) MISSED OFFSET
	int                                                GUIDisplayIndex;                                          // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 MinViewPitchCurve;                                        // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.NearDeathRestoredOrignalHealthStruct
// 0x0010
struct FNearDeathRestoredOrignalHealthStruct
{
	class UClass*                                      GameModeClass;                                            // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Health;                                                   // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.VehicleUserReconnRepData
// 0x0018
struct FVehicleUserReconnRepData
{
	class ASTExtraVehicleBase*                         Vehicle;                                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class ASTExtraPlayerCharacter*                     Character;                                                // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	ESTExtraVehicleUserState                           VehicleUserState;                                         // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	int                                                SeatIdx;                                                  // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.VoiceCheckObjectNode
// 0x0048
struct FVoiceCheckObjectNode
{
	class ASTExtraBaseCharacter*                       nowCharacter;                                             // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class ASTExtraVehicleBase*                         nowVehicle;                                               // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	class UImage*                                      moveImage;                                                // 0x0010(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UImage*                                      weaponImage;                                              // 0x0018(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UImage*                                      silencerWeaponImage;                                      // 0x0020(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UImage*                                      VehicleImage;                                             // 0x0028(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UImage*                                      GlassImage;                                               // 0x0030(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0038(0x0010) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.RespawnItemConfigInst
// 0x0010
struct FRespawnItemConfigInst
{
	int                                                RandomWeight;                                             // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class UClass*                                      RespawnItemConfigClass;                                   // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.ScoreChangeValue
// 0x0008
struct FScoreChangeValue
{
	int                                                Score_RescueOthers;                                       // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                Score_Kill;                                               // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.EnemyInfo
// 0x0028
struct FEnemyInfo
{
	class ASTExtraPlayerCharacter*                     Pawn;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       aimPos;                                                   // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              disToScreenCenter;                                        // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              originMinAdsorbDis;                                       // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Point;                                                    // 0x0018(0x000C) (IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.CDInfo
// 0x000C
struct FCDInfo
{
	float                                              CDTime;                                                   // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              FireTime;                                                 // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              followTime;                                               // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.MiniItem
// 0x0008
struct FMiniItem
{
	int                                                Type;                                                     // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                TypeSpecificID;                                           // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.WonderfulCutOutputData
// 0x0020
struct FWonderfulCutOutputData
{
	float                                              BeginTimeSecs;                                            // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              EndTimeSecs;                                              // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	TEnumAsByte<EWonderfulCutOutputType>               WonderfulCutType;                                         // 0x0008(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	float                                              ShootDistance;                                            // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	struct FString                                     CauserName;                                               // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
};

// ScriptStruct ShadowTrackerExtra.WonderfulCut_OneShootDamage
// 0x0020
struct FWonderfulCut_OneShootDamage
{
	TEnumAsByte<EWonderfulCutCaptureType>              CaptureType;                                              // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EWonderfulCutShootDamageType>          ShootDamageType;                                          // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	float                                              DamageTimeSecs;                                           // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              ShootDistance;                                            // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FString                                     CauserName;                                               // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct ShadowTrackerExtra.WonderfulCutShootDamageData
// 0x0018
struct FWonderfulCutShootDamageData
{
	int                                                DamagePlayerID;                                           // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	TArray<struct FWonderfulCut_OneShootDamage>        ShootDamageList;                                          // 0x0008(0x0010) (ZeroConstructor)
};

// ScriptStruct ShadowTrackerExtra.WonderfulCutShootDamageSortData
// 0x0020
struct FWonderfulCutShootDamageSortData
{
	float                                              DamageIntervalSecs;                                       // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              DamageTimeSecs;                                           // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EWonderfulCutCaptureType>              CaptureType;                                              // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EWonderfulCutShootDamageType>          ShootDamageType;                                          // 0x0009(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x000A(0x0002) MISSED OFFSET
	float                                              ShootDistance;                                            // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     CauserName;                                               // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct ShadowTrackerExtra.AITriggerTupple
// 0x0038
struct FAITriggerTupple
{
	int                                                Probability;                                              // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FBlackboardKeySelector                      TriggerTarget;                                            // 0x0008(0x0028) (Edit)
	int                                                TriggerSetValue;                                          // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.AsyncMeshLoadedRes
// 0x0020
struct FAsyncMeshLoadedRes
{
	struct FSoftObjectPath                             meshRes;                                                  // 0x0000(0x0018)
	class UBackpackAvatarHandle*                       avatarHandle;                                             // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.MeshResSet
// 0x0018
struct FMeshResSet
{
	class UStaticMesh*                                 stMesh;                                                   // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class USkeletalMesh*                               skMesh;                                                   // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UMaterialInstance*                           matIns;                                                   // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.BitMsg
// 0x0028
struct FBitMsg
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.BitMsgDelta
// 0x0028
struct FBitMsgDelta
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.IngameInvitedNode
// 0x0020
struct FIngameInvitedNode
{
	struct FString                                     PlayerName;                                               // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     gid;                                                      // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct ShadowTrackerExtra.TslFriendPresence
// 0x0005
struct FTslFriendPresence
{
	bool                                               IsOnline;                                                 // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               IsPlaying;                                                // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               IsPlayingThisGame;                                        // 0x0002(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               IsJoinable;                                               // 0x0003(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      status;                                                   // 0x0004(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.TslFriend
// 0x0038
struct FTslFriend
{
	struct FString                                     UserSerial;                                               // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     UserRealName;                                             // 0x0010(0x0010) (ZeroConstructor)
	struct FString                                     UserDisplayName;                                          // 0x0020(0x0010) (ZeroConstructor)
	struct FTslFriendPresence                          Presence;                                                 // 0x0030(0x0005)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0035(0x0003) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.TslClientAuthData
// 0x0070
struct FTslClientAuthData
{
	struct FString                                     PlatformType;                                             // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     AppID;                                                    // 0x0010(0x0010) (ZeroConstructor)
	struct FString                                     FullGameVersion;                                          // 0x0020(0x0010) (ZeroConstructor)
	struct FString                                     UserSerial;                                               // 0x0030(0x0010) (ZeroConstructor)
	struct FString                                     AccessToken;                                              // 0x0040(0x0010) (ZeroConstructor)
	struct FString                                     UserDisplayName;                                          // 0x0050(0x0010) (ZeroConstructor)
	struct FString                                     PlayerNetId;                                              // 0x0060(0x0010) (ZeroConstructor)
};

// ScriptStruct ShadowTrackerExtra.DrawCircleItemData
// 0x0028
struct FDrawCircleItemData
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.DrawBoxItemData
// 0x0030
struct FDrawBoxItemData
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.AIPolicyDecisionSortItem
// 0x0010
struct FAIPolicyDecisionSortItem
{
	class ASTExtraBaseCharacter*                       Player;                                                   // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              RatingScore;                                              // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.LoadingScreenDataRowBase
// 0x0038 (0x0040 - 0x0008)
struct FLoadingScreenDataRowBase : public FTableRowBase
{
	ELoadingScreenType                                 LoadingScreenType;                                        // 0x0008(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	ERankGuideType                                     RankGuideType;                                            // 0x0009(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x000A(0x0006) MISSED OFFSET
	unsigned char                                      UnknownData01[0x28];                                      // 0x000A(0x0028) UNKNOWN PROPERTY: SoftObjectProperty ShadowTrackerExtra.LoadingScreenDataRowBase.BackgroundImage
	bool                                               bIsKeyGuide;                                              // 0x0038(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bExposedOnPCAndKeyboard;                                  // 0x0039(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bExposedOnPCAndGamepad;                                   // 0x003A(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bExposedOnXboxOne;                                        // 0x003B(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bExposedOnXboxPS4;                                        // 0x003C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x003D(0x0003) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.LoadingScreenDataRow
// 0x0030 (0x0070 - 0x0040)
struct FLoadingScreenDataRow : public FLoadingScreenDataRowBase
{
	struct FText                                       Title;                                                    // 0x0040(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FText                                       Description;                                              // 0x0058(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
};

// ScriptStruct ShadowTrackerExtra.LoadingScreenDataRow_KeyGuide
// 0x0008 (0x0048 - 0x0040)
struct FLoadingScreenDataRow_KeyGuide : public FLoadingScreenDataRowBase
{
	class UClass*                                      TipWidget;                                                // 0x0040(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.WuEventDamage
// 0x0058 (0x0068 - 0x0010)
struct FWuEventDamage : public FGameEventBase
{
	bool                                               IsDetailStatus;                                           // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               IsVictimMe;                                               // 0x0011(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0012(0x0002) MISSED OFFSET
	float                                              Damage;                                                   // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     DamageTypeCategory;                                       // 0x0018(0x0010) (ZeroConstructor)
	struct FString                                     attackerName;                                             // 0x0028(0x0010) (ZeroConstructor)
	struct FVector                                     AttackerLocation;                                         // 0x0038(0x000C) (IsPlainOldData)
	int                                                AttackerTeamId;                                           // 0x0044(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     VictimName;                                               // 0x0048(0x0010) (ZeroConstructor)
	struct FVector                                     VictimLocation;                                           // 0x0058(0x000C) (IsPlainOldData)
	int                                                VictimTeamId;                                             // 0x0064(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.WuEventKill
// 0x0078 (0x0088 - 0x0010)
struct FWuEventKill : public FGameEventBase
{
	bool                                               IsDetailStatus;                                           // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               IsKillerMe;                                               // 0x0011(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0012(0x0006) MISSED OFFSET
	struct FString                                     KillerName;                                               // 0x0018(0x0010) (ZeroConstructor)
	struct FVector                                     KillerLocation;                                           // 0x0028(0x000C) (IsPlainOldData)
	int                                                KillerTeamId;                                             // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               IsVictimMe;                                               // 0x0038(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0039(0x0007) MISSED OFFSET
	struct FString                                     VictimName;                                               // 0x0040(0x0010) (ZeroConstructor)
	struct FVector                                     VictimLocation;                                           // 0x0050(0x000C) (IsPlainOldData)
	int                                                VictimTeamId;                                             // 0x005C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     DamageCauser;                                             // 0x0060(0x0010) (ZeroConstructor)
	struct FString                                     DamageReason;                                             // 0x0070(0x0010) (ZeroConstructor)
	bool                                               IsGroggy;                                                 // 0x0080(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               IsStealKilled;                                            // 0x0081(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x0082(0x0006) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.WuEventDataPlayerResult
// 0x0018
struct FWuEventDataPlayerResult
{
	struct FString                                     PlayerName;                                               // 0x0000(0x0010) (ZeroConstructor)
	int                                                KillCount;                                                // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.WuEventDataTeamResult
// 0x0018
struct FWuEventDataTeamResult
{
	int                                                TeamID;                                                   // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Ranking;                                                  // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<struct FWuEventDataPlayerResult>            Members;                                                  // 0x0008(0x0010) (ZeroConstructor)
};

// ScriptStruct ShadowTrackerExtra.WuEventMatchResult
// 0x0028 (0x0038 - 0x0010)
struct FWuEventMatchResult : public FGameEventBase
{
	struct FString                                     MatchId;                                                  // 0x0010(0x0010) (ZeroConstructor)
	int                                                StartPlayerCount;                                         // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                StartTeamCount;                                           // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<struct FWuEventDataTeamResult>              Teams;                                                    // 0x0028(0x0010) (ZeroConstructor)
};

// ScriptStruct ShadowTrackerExtra.WuEventPlayerMatchResult
// 0x0038 (0x0048 - 0x0010)
struct FWuEventPlayerMatchResult : public FGameEventBase
{
	struct FString                                     MatchId;                                                  // 0x0010(0x0010) (ZeroConstructor)
	int                                                StartPlayerCount;                                         // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                StartTeamCount;                                           // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     PlayerName;                                               // 0x0028(0x0010) (ZeroConstructor)
	int                                                Ranking;                                                  // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                KillCount;                                                // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                HeadShotCount;                                            // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              GivenDamages;                                             // 0x0044(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.WuEventDataPlayerInfo
// 0x0050
struct FWuEventDataPlayerInfo
{
	struct FString                                     PlayerName;                                               // 0x0000(0x0010) (ZeroConstructor)
	int                                                TeamID;                                                   // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // 0x0014(0x000C) (IsPlainOldData)
	float                                              Health;                                                   // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              BoostGauge;                                               // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     State;                                                    // 0x0028(0x0010) (ZeroConstructor)
	struct FString                                     ArmedWeapon;                                              // 0x0038(0x0010) (ZeroConstructor)
	int                                                ArmedAmmoCount;                                           // 0x0048(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                InventoryAmmoCount;                                       // 0x004C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.WuEventMatchStatus
// 0x00A8 (0x00B8 - 0x0010)
struct FWuEventMatchStatus : public FGameEventBase
{
	bool                                               IsDetailStatus;                                           // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
	struct FString                                     MatchId;                                                  // 0x0018(0x0010) (ZeroConstructor)
	struct FString                                     TeamMode;                                                 // 0x0028(0x0010) (ZeroConstructor)
	struct FString                                     CameraMode;                                               // 0x0038(0x0010) (ZeroConstructor)
	struct FString                                     MatchState;                                               // 0x0048(0x0010) (ZeroConstructor)
	int                                                ElapsedTime;                                              // 0x0058(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                BlueZonePhase;                                            // 0x005C(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               IsBlueZoneMoving;                                         // 0x0060(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0061(0x0003) MISSED OFFSET
	float                                              BlueZoneRadius;                                           // 0x0064(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     BlueZoneLocation;                                         // 0x0068(0x000C) (IsPlainOldData)
	float                                              WhiteZoneRadius;                                          // 0x0074(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     WhiteZoneLocation;                                        // 0x0078(0x000C) (IsPlainOldData)
	float                                              RedZoneRadius;                                            // 0x0084(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     RedZoneLocation;                                          // 0x0088(0x000C) (IsPlainOldData)
	int                                                StartPlayerCount;                                         // 0x0094(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                AlivePlayerCount;                                         // 0x0098(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                StartTeamCount;                                           // 0x009C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                AliveTeamCount;                                           // 0x00A0(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x00A4(0x0004) MISSED OFFSET
	TArray<struct FWuEventDataPlayerInfo>              PlayerInfos;                                              // 0x00A8(0x0010) (ZeroConstructor)
};

// ScriptStruct ShadowTrackerExtra.WuEventPlayerStatus
// 0x0090 (0x00A0 - 0x0010)
struct FWuEventPlayerStatus : public FGameEventBase
{
	struct FString                                     MatchId;                                                  // 0x0010(0x0010) (ZeroConstructor)
	struct FString                                     MyPlayerName;                                             // 0x0020(0x0010) (ZeroConstructor)
	bool                                               IsSpetating;                                              // 0x0030(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0031(0x0003) MISSED OFFSET
	struct FVector                                     SpectatingCameraLocation;                                 // 0x0034(0x000C) (IsPlainOldData)
	struct FWuEventDataPlayerInfo                      CurrentPlayerInfo;                                        // 0x0040(0x0050)
	TArray<struct FWuEventDataPlayerInfo>              TeamMatesInfo;                                            // 0x0090(0x0010) (ZeroConstructor)
};

// ScriptStruct ShadowTrackerExtra.WuEventMatchJoin
// 0x0038 (0x0048 - 0x0010)
struct FWuEventMatchJoin : public FGameEventBase
{
	struct FString                                     MatchId;                                                  // 0x0010(0x0010) (ZeroConstructor)
	struct FString                                     TeamMode;                                                 // 0x0020(0x0010) (ZeroConstructor)
	struct FString                                     CameraMode;                                               // 0x0030(0x0010) (ZeroConstructor)
	bool                                               IsDetailObserver;                                         // 0x0040(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0041(0x0007) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.WuLogCharacter
// 0x0060
struct FWuLogCharacter
{
	struct FString                                     Name;                                                     // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     NetId;                                                    // 0x0010(0x0010) (ZeroConstructor)
	int                                                TeamID;                                                   // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Health;                                                   // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // 0x0028(0x000C) (IsPlainOldData)
	int                                                Ranking;                                                  // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     AccountId;                                                // 0x0038(0x0010) (ZeroConstructor)
	bool                                               IsInBlueZone;                                             // 0x0048(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               IsInRedZone;                                              // 0x0049(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x004A(0x0006) MISSED OFFSET
	TArray<struct FString>                             Zone;                                                     // 0x0050(0x0010) (ZeroConstructor)
};

// ScriptStruct ShadowTrackerExtra.WuLogWeaponFireCount
// 0x0078 (0x00D0 - 0x0058)
struct FWuLogWeaponFireCount : public FLogBase
{
	struct FWuLogCharacter                             Character;                                                // 0x0058(0x0060)
	struct FString                                     WeaponId;                                                 // 0x00B8(0x0010) (ZeroConstructor)
	int                                                FireCount;                                                // 0x00C8(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00CC(0x0004) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.WuEventMatchLeave
// 0x0010 (0x0020 - 0x0010)
struct FWuEventMatchLeave : public FGameEventBase
{
	struct FString                                     MatchId;                                                  // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct ShadowTrackerExtra.WuLogRedZoneEnded
// 0x0010 (0x0068 - 0x0058)
struct FWuLogRedZoneEnded : public FLogBase
{
	TArray<struct FWuLogCharacter>                     Drivers;                                                  // 0x0058(0x0010) (ZeroConstructor)
};

// ScriptStruct ShadowTrackerExtra.WuLogObjectDestroy
// 0x0080 (0x00D8 - 0x0058)
struct FWuLogObjectDestroy : public FLogBase
{
	struct FWuLogCharacter                             Character;                                                // 0x0058(0x0060)
	struct FString                                     ObjectType;                                               // 0x00B8(0x0010) (ZeroConstructor)
	struct FVector                                     ObjectLocation;                                           // 0x00C8(0x000C) (IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00D4(0x0004) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.WuLogParachuteLanding
// 0x0068 (0x00C0 - 0x0058)
struct FWuLogParachuteLanding : public FLogBase
{
	struct FWuLogCharacter                             Character;                                                // 0x0058(0x0060)
	float                                              Distance;                                                 // 0x00B8(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00BC(0x0004) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.WuLogEmote
// 0x0070 (0x00C8 - 0x0058)
struct FWuLogEmote : public FLogBase
{
	struct FWuLogCharacter                             Character;                                                // 0x0058(0x0060)
	struct FString                                     EmoteName;                                                // 0x00B8(0x0010) (ZeroConstructor)
};

// ScriptStruct ShadowTrackerExtra.WuLogVaultStart
// 0x0060 (0x00B8 - 0x0058)
struct FWuLogVaultStart : public FLogBase
{
	struct FWuLogCharacter                             Character;                                                // 0x0058(0x0060)
};

// ScriptStruct ShadowTrackerExtra.WuLogItem
// 0x0048
struct FWuLogItem
{
	struct FString                                     ItemID;                                                   // 0x0000(0x0010) (ZeroConstructor)
	int                                                StackCount;                                               // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	struct FString                                     Category;                                                 // 0x0018(0x0010) (ZeroConstructor)
	struct FString                                     SubCategory;                                              // 0x0028(0x0010) (ZeroConstructor)
	TArray<struct FString>                             AttachedItems;                                            // 0x0038(0x0010) (ZeroConstructor)
};

// ScriptStruct ShadowTrackerExtra.WuLogSkinUpdate
// 0x00C8 (0x0120 - 0x0058)
struct FWuLogSkinUpdate : public FLogBase
{
	struct FWuLogCharacter                             Character;                                                // 0x0058(0x0060)
	struct FWuLogItem                                  Item;                                                     // 0x00B8(0x0048)
	struct FString                                     SkinName;                                                 // 0x0100(0x0010) (ZeroConstructor)
	struct FString                                     SkinCategory;                                             // 0x0110(0x0010) (ZeroConstructor)
};

// ScriptStruct ShadowTrackerExtra.WuLogStatAccuracyItem
// 0x0018
struct FWuLogStatAccuracyItem
{
	struct FString                                     AccountId;                                                // 0x0000(0x0010) (ZeroConstructor)
	int                                                NumShots;                                                 // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                NumHits;                                                  // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.WuLogStatAccuracy
// 0x0010 (0x0068 - 0x0058)
struct FWuLogStatAccuracy : public FLogBase
{
	TArray<struct FWuLogStatAccuracyItem>              AccuracyList;                                             // 0x0058(0x0010) (ZeroConstructor)
};

// ScriptStruct ShadowTrackerExtra.WuStringStringPair
// 0x0020
struct FWuStringStringPair
{
	struct FString                                     First;                                                    // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     Second;                                                   // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct ShadowTrackerExtra.WuLogMatchSetting
// 0x0058 (0x00B0 - 0x0058)
struct FWuLogMatchSetting : public FLogBase
{
	bool                                               IsCustomGame;                                             // 0x0058(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0059(0x0007) MISSED OFFSET
	struct FString                                     MapName;                                                  // 0x0060(0x0010) (ZeroConstructor)
	struct FString                                     ModeName;                                                 // 0x0070(0x0010) (ZeroConstructor)
	struct FString                                     MatchId;                                                  // 0x0080(0x0010) (ZeroConstructor)
	int                                                TeamCount;                                                // 0x0090(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MinPlayerCount;                                           // 0x0094(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MaxPlayerCount;                                           // 0x0098(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x009C(0x0004) MISSED OFFSET
	TArray<struct FWuStringStringPair>                 MatchSettings;                                            // 0x00A0(0x0010) (ZeroConstructor)
};

// ScriptStruct ShadowTrackerExtra.WuLogBulletShotDistance
// 0x0088 (0x00E0 - 0x0058)
struct FWuLogBulletShotDistance : public FLogBase
{
	struct FVector                                     VictimLocation;                                           // 0x0058(0x000C) (IsPlainOldData)
	struct FVector                                     HitLocation;                                              // 0x0064(0x000C) (IsPlainOldData)
	float                                              Distance;                                                 // 0x0070(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               IsVictimInVehicle;                                        // 0x0074(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0075(0x0003) MISSED OFFSET
	float                                              VictimSpeed;                                              // 0x0078(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x007C(0x0004) MISSED OFFSET
	struct FString                                     VictimStanceMode;                                         // 0x0080(0x0010) (ZeroConstructor)
	struct FString                                     VictimMovementMode;                                       // 0x0090(0x0010) (ZeroConstructor)
	struct FString                                     AttackerAccountId;                                        // 0x00A0(0x0010) (ZeroConstructor)
	float                                              AttackerPing;                                             // 0x00B0(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              AttackerRDelay;                                           // 0x00B4(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              AttackerUDelay;                                           // 0x00B8(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              AttackerUMissPercent;                                     // 0x00BC(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     VictimAccountId;                                          // 0x00C0(0x0010) (ZeroConstructor)
	float                                              VictimPing;                                               // 0x00D0(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              VictimRDelay;                                             // 0x00D4(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              VictimUDelay;                                             // 0x00D8(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              VictimUMissPercent;                                       // 0x00DC(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.WuLogSteamNoNetworkConnection
// 0x0028 (0x0080 - 0x0058)
struct FWuLogSteamNoNetworkConnection : public FLogBase
{
	int                                                DisconnectionCountPerGame;                                // 0x0058(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
	struct FString                                     SteamKickReason;                                          // 0x0060(0x0010) (ZeroConstructor)
	struct FString                                     AccountId;                                                // 0x0070(0x0010) (ZeroConstructor)
};

// ScriptStruct ShadowTrackerExtra.WuLogBodyPenetrationDamageInfo
// 0x0080 (0x00D8 - 0x0058)
struct FWuLogBodyPenetrationDamageInfo : public FLogBase
{
	int                                                AttackId;                                                 // 0x0058(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
	struct FWuLogCharacter                             Attacker;                                                 // 0x0060(0x0060)
	float                                              DamageDiff;                                               // 0x00C0(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00C4(0x0004) MISSED OFFSET
	struct FString                                     DamageZone;                                               // 0x00C8(0x0010) (ZeroConstructor)
};

// ScriptStruct ShadowTrackerExtra.WuLogCheat
// 0x00A8 (0x0100 - 0x0058)
struct FWuLogCheat : public FLogBase
{
	struct FWuLogCharacter                             Character;                                                // 0x0058(0x0060)
	struct FString                                     CheatType;                                                // 0x00B8(0x0010) (ZeroConstructor)
	struct FString                                     Description;                                              // 0x00C8(0x0010) (ZeroConstructor)
	float                                              ParamFloat1;                                              // 0x00D8(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              ParamFloat2;                                              // 0x00DC(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     ParamString1;                                             // 0x00E0(0x0010) (ZeroConstructor)
	struct FString                                     ParamString2;                                             // 0x00F0(0x0010) (ZeroConstructor)
};

// ScriptStruct ShadowTrackerExtra.WuLogSwimEnd
// 0x0068 (0x00C0 - 0x0058)
struct FWuLogSwimEnd : public FLogBase
{
	struct FWuLogCharacter                             Character;                                                // 0x0058(0x0060)
	float                                              SwimDistance;                                             // 0x00B8(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              MaxSwimDepthOfWater;                                      // 0x00BC(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.WuLogSwimStart
// 0x0060 (0x00B8 - 0x0058)
struct FWuLogSwimStart : public FLogBase
{
	struct FWuLogCharacter                             Character;                                                // 0x0058(0x0060)
};

// ScriptStruct ShadowTrackerExtra.WuLogVehicle
// 0x0028
struct FWuLogVehicle
{
	struct FString                                     VehicleType;                                              // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     VehicleId;                                                // 0x0010(0x0010) (ZeroConstructor)
	float                                              HealthPercent;                                            // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              FeulPercent;                                              // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.WuLogWheelDestroy
// 0x00B0 (0x0108 - 0x0058)
struct FWuLogWheelDestroy : public FLogBase
{
	int                                                AttackId;                                                 // 0x0058(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
	struct FWuLogCharacter                             Attacker;                                                 // 0x0060(0x0060)
	struct FWuLogVehicle                               Vehicle;                                                  // 0x00C0(0x0028)
	struct FString                                     DamageTypeCategory;                                       // 0x00E8(0x0010) (ZeroConstructor)
	struct FString                                     DamageCauserName;                                         // 0x00F8(0x0010) (ZeroConstructor)
};

// ScriptStruct ShadowTrackerExtra.WuLogVehicleDestroy
// 0x00B8 (0x0110 - 0x0058)
struct FWuLogVehicleDestroy : public FLogBase
{
	int                                                AttackId;                                                 // 0x0058(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
	struct FWuLogCharacter                             Attacker;                                                 // 0x0060(0x0060)
	struct FWuLogVehicle                               Vehicle;                                                  // 0x00C0(0x0028)
	struct FString                                     DamageTypeCategory;                                       // 0x00E8(0x0010) (ZeroConstructor)
	struct FString                                     DamageCauserName;                                         // 0x00F8(0x0010) (ZeroConstructor)
	float                                              Distance;                                                 // 0x0108(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x010C(0x0004) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.WuLogVehicleLeave
// 0x0098 (0x00F0 - 0x0058)
struct FWuLogVehicleLeave : public FLogBase
{
	struct FWuLogCharacter                             Character;                                                // 0x0058(0x0060)
	struct FWuLogVehicle                               Vehicle;                                                  // 0x00B8(0x0028)
	float                                              RideDistance;                                             // 0x00E0(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SeatIndex;                                                // 0x00E4(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              MaxSpeed;                                                 // 0x00E8(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00EC(0x0004) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.WuLogVehicleRide
// 0x0090 (0x00E8 - 0x0058)
struct FWuLogVehicleRide : public FLogBase
{
	struct FWuLogCharacter                             Character;                                                // 0x0058(0x0060)
	struct FWuLogVehicle                               Vehicle;                                                  // 0x00B8(0x0028)
	int                                                SeatIndex;                                                // 0x00E0(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00E4(0x0004) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.WuLogVehicleSpawn
// 0x0020 (0x0078 - 0x0058)
struct FWuLogVehicleSpawn : public FLogBase
{
	struct FString                                     VehicleId;                                                // 0x0058(0x0010) (ZeroConstructor)
	struct FVector                                     Location;                                                 // 0x0068(0x000C) (IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0074(0x0004) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.WuLogItemPackage
// 0x0030
struct FWuLogItemPackage
{
	struct FString                                     ItemPackageId;                                            // 0x0000(0x0010) (ZeroConstructor)
	struct FVector                                     Location;                                                 // 0x0010(0x000C) (IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	TArray<struct FWuLogItem>                          Items;                                                    // 0x0020(0x0010) (ZeroConstructor)
};

// ScriptStruct ShadowTrackerExtra.WuLogCarePackageLand
// 0x0030 (0x0088 - 0x0058)
struct FWuLogCarePackageLand : public FLogBase
{
	struct FWuLogItemPackage                           ItemPackage;                                              // 0x0058(0x0030)
};

// ScriptStruct ShadowTrackerExtra.WuLogCarePackageSpawn
// 0x0030 (0x0088 - 0x0058)
struct FWuLogCarePackageSpawn : public FLogBase
{
	struct FWuLogItemPackage                           ItemPackage;                                              // 0x0058(0x0030)
};

// ScriptStruct ShadowTrackerExtra.WuLogLanguage
// 0x0080 (0x00D8 - 0x0058)
struct FWuLogLanguage : public FLogBase
{
	struct FWuLogCharacter                             Character;                                                // 0x0058(0x0060)
	struct FString                                     WindowsLanguage;                                          // 0x00B8(0x0010) (ZeroConstructor)
	struct FString                                     GameLanguage;                                             // 0x00C8(0x0010) (ZeroConstructor)
};

// ScriptStruct ShadowTrackerExtra.WuGraphicSettings
// 0x003C
struct FWuGraphicSettings
{
	int                                                ResolutionWidth;                                          // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ResolutionHeight;                                         // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               VSync;                                                    // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	int                                                DisplayMode;                                              // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                FOV;                                                      // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ScreenScale;                                              // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                AntiAliasing;                                             // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PostProcessing;                                           // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Shadows;                                                  // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Textures;                                                 // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Effects;                                                  // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Foliage;                                                  // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ViewDistance;                                             // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               MotionBlur;                                               // 0x0034(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               MinimapDynamicZoom;                                       // 0x0035(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               FreelockInterpolation;                                    // 0x0036(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               Replay;                                                   // 0x0037(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               DeathCam;                                                 // 0x0038(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0039(0x0003) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.WuSystemInfo
// 0x01A0 (0x01F8 - 0x0058)
struct FWuSystemInfo : public FLogBase
{
	struct FWuLogCharacter                             Character;                                                // 0x0058(0x0060)
	struct FString                                     OsLanguage;                                               // 0x00B8(0x0010) (ZeroConstructor)
	struct FString                                     GameLanguage;                                             // 0x00C8(0x0010) (ZeroConstructor)
	struct FString                                     OsVersion;                                                // 0x00D8(0x0010) (ZeroConstructor)
	struct FString                                     CpuName;                                                  // 0x00E8(0x0010) (ZeroConstructor)
	struct FString                                     GpuName;                                                  // 0x00F8(0x0010) (ZeroConstructor)
	int                                                RamInGB;                                                  // 0x0108(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x010C(0x0004) MISSED OFFSET
	struct FString                                     BaseBoardSerial;                                          // 0x0110(0x0010) (ZeroConstructor)
	TArray<struct FString>                             MemorySerials;                                            // 0x0120(0x0010) (ZeroConstructor)
	int                                                ArpIpCount;                                               // 0x0130(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0134(0x0004) MISSED OFFSET
	struct FString                                     OsUserAccount;                                            // 0x0138(0x0010) (ZeroConstructor)
	TArray<struct FString>                             DiskModelNames;                                           // 0x0148(0x0010) (ZeroConstructor)
	TArray<struct FString>                             DiskSerials;                                              // 0x0158(0x0010) (ZeroConstructor)
	TArray<struct FString>                             MonitorModelNames;                                        // 0x0168(0x0010) (ZeroConstructor)
	TArray<struct FString>                             MonitorSerials;                                           // 0x0178(0x0010) (ZeroConstructor)
	TArray<struct FString>                             MemoryModelNames;                                         // 0x0188(0x0010) (ZeroConstructor)
	struct FString                                     BaseBoardModelName;                                       // 0x0198(0x0010) (ZeroConstructor)
	TArray<struct FString>                             GatewayMacAddress;                                        // 0x01A8(0x0010) (ZeroConstructor)
	bool                                               UsingXenuine;                                             // 0x01B8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x01B9(0x0003) MISSED OFFSET
	struct FWuGraphicSettings                          GraphicSettings;                                          // 0x01BC(0x003C)
};

// ScriptStruct ShadowTrackerExtra.WuLogItemUse
// 0x00A8 (0x0100 - 0x0058)
struct FWuLogItemUse : public FLogBase
{
	struct FWuLogCharacter                             Character;                                                // 0x0058(0x0060)
	struct FWuLogItem                                  Item;                                                     // 0x00B8(0x0048)
};

// ScriptStruct ShadowTrackerExtra.WuLogHeal
// 0x00B0 (0x0108 - 0x0058)
struct FWuLogHeal : public FLogBase
{
	struct FWuLogCharacter                             Character;                                                // 0x0058(0x0060)
	struct FWuLogItem                                  Item;                                                     // 0x00B8(0x0048)
	float                                              HealAmount;                                               // 0x0100(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0104(0x0004) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.WuLogItemUnequip
// 0x00A8 (0x0100 - 0x0058)
struct FWuLogItemUnequip : public FLogBase
{
	struct FWuLogCharacter                             Character;                                                // 0x0058(0x0060)
	struct FWuLogItem                                  Item;                                                     // 0x00B8(0x0048)
};

// ScriptStruct ShadowTrackerExtra.WuLogItemAttach
// 0x00F0 (0x0148 - 0x0058)
struct FWuLogItemAttach : public FLogBase
{
	struct FWuLogCharacter                             Character;                                                // 0x0058(0x0060)
	struct FWuLogItem                                  ParentItem;                                               // 0x00B8(0x0048)
	struct FWuLogItem                                  ChildItem;                                                // 0x0100(0x0048)
};

// ScriptStruct ShadowTrackerExtra.WuLogItemEquip
// 0x00A8 (0x0100 - 0x0058)
struct FWuLogItemEquip : public FLogBase
{
	struct FWuLogCharacter                             Character;                                                // 0x0058(0x0060)
	struct FWuLogItem                                  Item;                                                     // 0x00B8(0x0048)
};

// ScriptStruct ShadowTrackerExtra.WuLogItemDrop
// 0x00A8 (0x0100 - 0x0058)
struct FWuLogItemDrop : public FLogBase
{
	struct FWuLogCharacter                             Character;                                                // 0x0058(0x0060)
	struct FWuLogItem                                  Item;                                                     // 0x00B8(0x0048)
};

// ScriptStruct ShadowTrackerExtra.WuLogItemPickupFromLootBox
// 0x00B0 (0x0108 - 0x0058)
struct FWuLogItemPickupFromLootBox : public FLogBase
{
	struct FWuLogCharacter                             Character;                                                // 0x0058(0x0060)
	struct FWuLogItem                                  Item;                                                     // 0x00B8(0x0048)
	int                                                OwnerTeamId;                                              // 0x0100(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0104(0x0004) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.WuLogItemPickup
// 0x00A8 (0x0100 - 0x0058)
struct FWuLogItemPickup : public FLogBase
{
	struct FWuLogCharacter                             Character;                                                // 0x0058(0x0060)
	struct FWuLogItem                                  Item;                                                     // 0x00B8(0x0048)
};

// ScriptStruct ShadowTrackerExtra.WuLogItemSpawn
// 0x0018 (0x0070 - 0x0058)
struct FWuLogItemSpawn : public FLogBase
{
	struct FString                                     ItemID;                                                   // 0x0058(0x0010) (ZeroConstructor)
	int                                                SpawnCount;                                               // 0x0068(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                StackCount;                                               // 0x006C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.WuLogReportInfo
// 0x00F0 (0x0148 - 0x0058)
struct FWuLogReportInfo : public FLogBase
{
	struct FWuLogCharacter                             Reporter;                                                 // 0x0058(0x0060)
	struct FWuLogCharacter                             ReportedPlayer;                                           // 0x00B8(0x0060)
	struct FString                                     ReportCauseType;                                          // 0x0118(0x0010) (ZeroConstructor)
	TArray<struct FString>                             DetailedCauses;                                           // 0x0128(0x0010) (ZeroConstructor)
	struct FString                                     ReportedSessionType;                                      // 0x0138(0x0010) (ZeroConstructor)
};

// ScriptStruct ShadowTrackerExtra.WuGameResultStatsPerPlayer
// 0x0020
struct FWuGameResultStatsPerPlayer
{
	int                                                KillCount;                                                // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Score;                                                    // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Xp;                                                       // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              DistanceOnFoot;                                           // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              DistanceOnSwim;                                           // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              DistanceOnVehicle;                                        // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              DistanceOnParachute;                                      // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              DistanceOnFreefall;                                       // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.WuGameResultPerPlayer
// 0x0060
struct FWuGameResultPerPlayer
{
	struct FString                                     PlayerNetId;                                              // 0x0000(0x0010) (ZeroConstructor)
	int                                                Rank;                                                     // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	struct FString                                     GameResult;                                               // 0x0018(0x0010) (ZeroConstructor)
	int                                                TeamID;                                                   // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FWuGameResultStatsPerPlayer                 Stats;                                                    // 0x002C(0x0020)
	unsigned char                                      UnknownData01[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
	struct FString                                     AccountId;                                                // 0x0050(0x0010) (ZeroConstructor)
};

// ScriptStruct ShadowTrackerExtra.WuLogPlayerKill
// 0x01D8 (0x0230 - 0x0058)
struct FWuLogPlayerKill : public FLogBase
{
	int                                                AttackId;                                                 // 0x0058(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
	struct FWuLogCharacter                             Killer;                                                   // 0x0060(0x0060)
	struct FWuLogCharacter                             Victim;                                                   // 0x00C0(0x0060)
	struct FWuLogCharacter                             Assistant;                                                // 0x0120(0x0060)
	int                                                DBNOId;                                                   // 0x0180(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0184(0x0004) MISSED OFFSET
	struct FString                                     DamageReason;                                             // 0x0188(0x0010) (ZeroConstructor)
	struct FString                                     DamageTypeCategory;                                       // 0x0198(0x0010) (ZeroConstructor)
	struct FString                                     DamageCauserName;                                         // 0x01A8(0x0010) (ZeroConstructor)
	TArray<struct FString>                             DamageCauserAdditionalInfo;                               // 0x01B8(0x0010) (ZeroConstructor)
	float                                              Distance;                                                 // 0x01C8(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x01CC(0x0004) MISSED OFFSET
	struct FWuGameResultPerPlayer                      VictimGameResult;                                         // 0x01D0(0x0060)
};

// ScriptStruct ShadowTrackerExtra.WuLogItemDetach
// 0x00F0 (0x0148 - 0x0058)
struct FWuLogItemDetach : public FLogBase
{
	struct FWuLogCharacter                             Character;                                                // 0x0058(0x0060)
	struct FWuLogItem                                  ParentItem;                                               // 0x00B8(0x0048)
	struct FWuLogItem                                  ChildItem;                                                // 0x0100(0x0048)
};

// ScriptStruct ShadowTrackerExtra.WuLogPlayerRevive
// 0x00C8 (0x0120 - 0x0058)
struct FWuLogPlayerRevive : public FLogBase
{
	struct FWuLogCharacter                             Reviver;                                                  // 0x0058(0x0060)
	struct FWuLogCharacter                             Victim;                                                   // 0x00B8(0x0060)
	int                                                DBNOId;                                                   // 0x0118(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x011C(0x0004) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.WuLogArmorDestroy
// 0x0148 (0x01A0 - 0x0058)
struct FWuLogArmorDestroy : public FLogBase
{
	int                                                AttackId;                                                 // 0x0058(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
	struct FWuLogCharacter                             Attacker;                                                 // 0x0060(0x0060)
	struct FWuLogCharacter                             Victim;                                                   // 0x00C0(0x0060)
	struct FString                                     DamageTypeCategory;                                       // 0x0120(0x0010) (ZeroConstructor)
	struct FString                                     DamageReason;                                             // 0x0130(0x0010) (ZeroConstructor)
	struct FString                                     DamageCauserName;                                         // 0x0140(0x0010) (ZeroConstructor)
	struct FWuLogItem                                  Item;                                                     // 0x0150(0x0048)
	float                                              Distance;                                                 // 0x0198(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x019C(0x0004) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.WuLogItemPickupFromCarepackage
// 0x00A8 (0x0100 - 0x0058)
struct FWuLogItemPickupFromCarepackage : public FLogBase
{
	struct FWuLogCharacter                             Character;                                                // 0x0058(0x0060)
	struct FWuLogItem                                  Item;                                                     // 0x00B8(0x0048)
};

// ScriptStruct ShadowTrackerExtra.WuLogPlayerMakeGroggy
// 0x0118 (0x0170 - 0x0058)
struct FWuLogPlayerMakeGroggy : public FLogBase
{
	int                                                AttackId;                                                 // 0x0058(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
	struct FWuLogCharacter                             Attacker;                                                 // 0x0060(0x0060)
	struct FWuLogCharacter                             Victim;                                                   // 0x00C0(0x0060)
	struct FString                                     DamageReason;                                             // 0x0120(0x0010) (ZeroConstructor)
	struct FString                                     DamageTypeCategory;                                       // 0x0130(0x0010) (ZeroConstructor)
	struct FString                                     DamageCauserName;                                         // 0x0140(0x0010) (ZeroConstructor)
	TArray<struct FString>                             DamageCauserAdditionalInfo;                               // 0x0150(0x0010) (ZeroConstructor)
	float                                              Distance;                                                 // 0x0160(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               IsAttackerInVehicle;                                      // 0x0164(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0165(0x0003) MISSED OFFSET
	int                                                DBNOId;                                                   // 0x0168(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x016C(0x0004) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.WuLogPlayerTakeDamage
// 0x0100 (0x0158 - 0x0058)
struct FWuLogPlayerTakeDamage : public FLogBase
{
	int                                                AttackId;                                                 // 0x0058(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
	struct FWuLogCharacter                             Attacker;                                                 // 0x0060(0x0060)
	struct FWuLogCharacter                             Victim;                                                   // 0x00C0(0x0060)
	struct FString                                     DamageTypeCategory;                                       // 0x0120(0x0010) (ZeroConstructor)
	struct FString                                     DamageReason;                                             // 0x0130(0x0010) (ZeroConstructor)
	float                                              Damage;                                                   // 0x0140(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0144(0x0004) MISSED OFFSET
	struct FString                                     DamageCauserName;                                         // 0x0148(0x0010) (ZeroConstructor)
};

// ScriptStruct ShadowTrackerExtra.WuLogPlayerAttack
// 0x00E8 (0x0140 - 0x0058)
struct FWuLogPlayerAttack : public FLogBase
{
	int                                                AttackId;                                                 // 0x0058(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                FireWeaponStackCount;                                     // 0x005C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FWuLogCharacter                             Attacker;                                                 // 0x0060(0x0060)
	struct FString                                     AttackType;                                               // 0x00C0(0x0010) (ZeroConstructor)
	struct FWuLogItem                                  Weapon;                                                   // 0x00D0(0x0048)
	struct FWuLogVehicle                               Vehicle;                                                  // 0x0118(0x0028)
};

// ScriptStruct ShadowTrackerExtra.WuLogPlayerPosition
// 0x00B0 (0x0108 - 0x0058)
struct FWuLogPlayerPosition : public FLogBase
{
	struct FWuLogCharacter                             Character;                                                // 0x0058(0x0060)
	struct FWuLogVehicle                               Vehicle;                                                  // 0x00B8(0x0028)
	float                                              ElapsedTime;                                              // 0x00E0(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                NumAlivePlayers;                                          // 0x00E4(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              ClientFPS;                                                // 0x00E8(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Under10FPS;                                               // 0x00EC(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Under20FPS;                                               // 0x00F0(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Under30FPS;                                               // 0x00F4(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Under60FPS;                                               // 0x00F8(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MinFps;                                                   // 0x00FC(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MaxFps;                                                   // 0x0100(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0104(0x0004) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.WuLogPlayerKicked
// 0x0070 (0x00C8 - 0x0058)
struct FWuLogPlayerKicked : public FLogBase
{
	struct FWuLogCharacter                             Character;                                                // 0x0058(0x0060)
	struct FString                                     Reason;                                                   // 0x00B8(0x0010) (ZeroConstructor)
};

// ScriptStruct ShadowTrackerExtra.WuLogPlayerLogout
// 0x0020 (0x0078 - 0x0058)
struct FWuLogPlayerLogout : public FLogBase
{
	struct FString                                     NetId;                                                    // 0x0058(0x0010) (ZeroConstructor)
	struct FString                                     AccountId;                                                // 0x0068(0x0010) (ZeroConstructor)
};

// ScriptStruct ShadowTrackerExtra.WuLogPlayerLogin
// 0x0038 (0x0090 - 0x0058)
struct FWuLogPlayerLogin : public FLogBase
{
	struct FString                                     NetId;                                                    // 0x0058(0x0010) (ZeroConstructor)
	bool                                               Result;                                                   // 0x0068(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0069(0x0007) MISSED OFFSET
	struct FString                                     ErrorMessage;                                             // 0x0070(0x0010) (ZeroConstructor)
	struct FString                                     AccountId;                                                // 0x0080(0x0010) (ZeroConstructor)
};

// ScriptStruct ShadowTrackerExtra.WuLogPlayerCreate
// 0x0060 (0x00B8 - 0x0058)
struct FWuLogPlayerCreate : public FLogBase
{
	struct FWuLogCharacter                             Character;                                                // 0x0058(0x0060)
};

// ScriptStruct ShadowTrackerExtra.WuLogServerStat
// 0x0030 (0x0088 - 0x0058)
struct FWuLogServerStat : public FLogBase
{
	int                                                ElapsedTime;                                              // 0x0058(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                NumAliveTeams;                                            // 0x005C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                NumJoinPlayers;                                           // 0x0060(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                NumStartPlayers;                                          // 0x0064(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                NumAlivePlayers;                                          // 0x0068(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              PingMin;                                                  // 0x006C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              PingMax;                                                  // 0x0070(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              PingAvg;                                                  // 0x0074(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              FrameRateMin;                                             // 0x0078(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              FrameRateMax;                                             // 0x007C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              FrameRateAvg;                                             // 0x0080(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0084(0x0004) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.WuLogGameState
// 0x0044
struct FWuLogGameState
{
	int                                                ElapsedTime;                                              // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                NumAliveTeams;                                            // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                NumJoinPlayers;                                           // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                NumStartPlayers;                                          // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                NumAlivePlayers;                                          // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     SafetyZonePosition;                                       // 0x0014(0x000C) (IsPlainOldData)
	float                                              SafetyZoneRadius;                                         // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     PoisonGasWarningPosition;                                 // 0x0024(0x000C) (IsPlainOldData)
	float                                              PoisonGasWarningRadius;                                   // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     RedZonePosition;                                          // 0x0034(0x000C) (IsPlainOldData)
	float                                              RedZoneRadius;                                            // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.WuLogGameStatePeriodic
// 0x0048 (0x00A0 - 0x0058)
struct FWuLogGameStatePeriodic : public FLogBase
{
	struct FWuLogGameState                             GameState;                                                // 0x0058(0x0044)
	unsigned char                                      UnknownData00[0x4];                                       // 0x009C(0x0004) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.WuLogPlayTimeRecord
// 0x0008
struct FWuLogPlayTimeRecord
{
	int                                                SurvivalTime;                                             // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                TeamSpectatingTime;                                       // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.WuLogBpReward
// 0x001C
struct FWuLogBpReward
{
	int                                                PlayTime;                                                 // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Ranking;                                                  // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Kill;                                                     // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Damage;                                                   // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Boosting;                                                 // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                RawTotal;                                                 // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                BoostedTotal;                                             // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.WuLogRewardDetail
// 0x0038
struct FWuLogRewardDetail
{
	struct FString                                     AccountId;                                                // 0x0000(0x0010) (ZeroConstructor)
	struct FWuLogPlayTimeRecord                        PlayTimeRecord;                                           // 0x0010(0x0008)
	struct FWuLogBpReward                              BpReward;                                                 // 0x0018(0x001C)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.WuGameFinishedResult
// 0x0010
struct FWuGameFinishedResult
{
	TArray<struct FWuGameResultPerPlayer>              Results;                                                  // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct ShadowTrackerExtra.WuLogMatchEnd
// 0x0030 (0x0088 - 0x0058)
struct FWuLogMatchEnd : public FLogBase
{
	TArray<struct FWuLogCharacter>                     Characters;                                               // 0x0058(0x0010) (ZeroConstructor)
	TArray<struct FWuLogRewardDetail>                  RewardDetail;                                             // 0x0068(0x0010) (ZeroConstructor)
	struct FWuGameFinishedResult                       GameResultOnFinished;                                     // 0x0078(0x0010)
};

// ScriptStruct ShadowTrackerExtra.WuLogMatchStart
// 0x0058 (0x00B0 - 0x0058)
struct FWuLogMatchStart : public FLogBase
{
	struct FString                                     MapName;                                                  // 0x0058(0x0010) (ZeroConstructor)
	struct FString                                     WeatherID;                                                // 0x0068(0x0010) (ZeroConstructor)
	TArray<struct FWuLogCharacter>                     Characters;                                               // 0x0078(0x0010) (ZeroConstructor)
	struct FString                                     CameraViewBehaviour;                                      // 0x0088(0x0010) (ZeroConstructor)
	int                                                TeamSize;                                                 // 0x0098(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               IsCustomGame;                                             // 0x009C(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               IsEventMode;                                              // 0x009D(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x009E(0x0002) MISSED OFFSET
	struct FString                                     BlueZoneCustomOptions;                                    // 0x00A0(0x0010) (ZeroConstructor)
};

// ScriptStruct ShadowTrackerExtra.WuLogCharacterRating
// 0x0030
struct FWuLogCharacterRating
{
	struct FString                                     AccountId;                                                // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     NetId;                                                    // 0x0010(0x0010) (ZeroConstructor)
	int                                                MMR;                                                      // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                RankPoint;                                                // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Ping;                                                     // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.WuLogMatchDefinition
// 0x0040 (0x0098 - 0x0058)
struct FWuLogMatchDefinition : public FLogBase
{
	struct FString                                     MatchId;                                                  // 0x0058(0x0010) (ZeroConstructor)
	struct FString                                     PingQuality;                                              // 0x0068(0x0010) (ZeroConstructor)
	struct FString                                     SeasonState;                                              // 0x0078(0x0010) (ZeroConstructor)
	TArray<struct FWuLogCharacterRating>               Ratings;                                                  // 0x0088(0x0010) (ZeroConstructor)
};

// ScriptStruct ShadowTrackerExtra.WuPrepareUsersResult
// 0x0010
struct FWuPrepareUsersResult
{
	TArray<struct FString>                             AccountIds;                                               // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct ShadowTrackerExtra.WuGameStartInfoPerPlayer
// 0x0020
struct FWuGameStartInfoPerPlayer
{
	struct FString                                     PlayerNetId;                                              // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     AccountId;                                                // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct ShadowTrackerExtra.WuGameStartInfo
// 0x0010
struct FWuGameStartInfo
{
	TArray<struct FWuGameStartInfoPerPlayer>           Players;                                                  // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct ShadowTrackerExtra.WuGameStartRequest
// 0x0010
struct FWuGameStartRequest
{
	TArray<struct FWuStringStringPair>                 StringParameters;                                         // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct ShadowTrackerExtra.WuGameInitializedResult
// 0x0008
struct FWuGameInitializedResult
{
	bool                                               IsSuccess;                                                // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                Port;                                                     // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.WuGameOverrideParameterRequest
// 0x0020
struct FWuGameOverrideParameterRequest
{
	struct FString                                     MatchId;                                                  // 0x0000(0x0010) (ZeroConstructor)
	TArray<struct FWuStringStringPair>                 StringParameters;                                         // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct ShadowTrackerExtra.WuGameInitializeRequest
// 0x0048
struct FWuGameInitializeRequest
{
	bool                                               IsCustomGame;                                             // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FString                                     MapName;                                                  // 0x0008(0x0010) (ZeroConstructor)
	struct FString                                     ModeName;                                                 // 0x0018(0x0010) (ZeroConstructor)
	int                                                TeamCount;                                                // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MinPlayerCount;                                           // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MaxPlayerCount;                                           // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	TArray<struct FWuStringStringPair>                 StringParameters;                                         // 0x0038(0x0010) (ZeroConstructor)
};

// ScriptStruct ShadowTrackerExtra.WuMatchRating
// 0x0008
struct FWuMatchRating
{
	int                                                RankPoint;                                                // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MMR;                                                      // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.WuStringBoolPair
// 0x0018
struct FWuStringBoolPair
{
	struct FString                                     First;                                                    // 0x0000(0x0010) (ZeroConstructor)
	bool                                               Second;                                                   // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.WuStringFloatPair
// 0x0018
struct FWuStringFloatPair
{
	struct FString                                     First;                                                    // 0x0000(0x0010) (ZeroConstructor)
	float                                              Second;                                                   // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.WuCharacterCustomizationOptions
// 0x0050
struct FWuCharacterCustomizationOptions
{
	TArray<struct FWuStringBoolPair>                   BoolOptions;                                              // 0x0000(0x0010) (ZeroConstructor)
	TArray<struct FWuStringFloatPair>                  FloatOptions;                                             // 0x0010(0x0010) (ZeroConstructor)
	TArray<struct FWuStringStringPair>                 StringOptions;                                            // 0x0020(0x0010) (ZeroConstructor)
	TArray<struct FString>                             ItemIds;                                                  // 0x0030(0x0010) (ZeroConstructor)
	struct FString                                     Emotes;                                                   // 0x0040(0x0010) (ZeroConstructor)
};

// ScriptStruct ShadowTrackerExtra.WuCharacterInfo
// 0x0068
struct FWuCharacterInfo
{
	struct FString                                     NickName;                                                 // 0x0000(0x0010) (ZeroConstructor)
	bool                                               gender;                                                   // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
	struct FWuCharacterCustomizationOptions            CustomizationOptions;                                     // 0x0018(0x0050)
};

// ScriptStruct ShadowTrackerExtra.WuUdpEncryptionKey
// 0x0030
struct FWuUdpEncryptionKey
{
	struct FString                                     Key;                                                      // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     ServerIV;                                                 // 0x0010(0x0010) (ZeroConstructor)
	struct FString                                     ClientIV;                                                 // 0x0020(0x0010) (ZeroConstructor)
};

// ScriptStruct ShadowTrackerExtra.WuStringIntPair
// 0x0018
struct FWuStringIntPair
{
	struct FString                                     First;                                                    // 0x0000(0x0010) (ZeroConstructor)
	int                                                Second;                                                   // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.WuUserAuthInfo
// 0x0120
struct FWuUserAuthInfo
{
	struct FString                                     PlayerNetId;                                              // 0x0000(0x0010) (ZeroConstructor)
	int                                                TeamID;                                                   // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                TeamMemberIndex;                                          // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SquadIndex;                                               // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FWuMatchRating                              Rating;                                                   // 0x001C(0x0008)
	bool                                               IsZombie;                                                 // 0x0024(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0025(0x0003) MISSED OFFSET
	struct FWuCharacterInfo                            CharacterInfo;                                            // 0x0028(0x0068)
	int                                                ObserverAuthorityType;                                    // 0x0090(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               BattlEyeDisabled;                                         // 0x0094(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               TPAntibotDisabled;                                        // 0x0095(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               EACDisabled;                                              // 0x0096(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               IsSuspect;                                                // 0x0097(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               DisallowVoiceChat;                                        // 0x0098(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0099(0x0007) MISSED OFFSET
	struct FString                                     AccountId;                                                // 0x00A0(0x0010) (ZeroConstructor)
	int                                                v1;                                                       // 0x00B0(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                v2;                                                       // 0x00B4(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                V3;                                                       // 0x00B8(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                V4;                                                       // 0x00BC(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FWuUdpEncryptionKey                         UdpEncryptionKey;                                         // 0x00C0(0x0030)
	TArray<struct FWuStringStringPair>                 CustomParameters;                                         // 0x00F0(0x0010) (ZeroConstructor)
	float                                              BpBoost;                                                  // 0x0100(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              XpBoost;                                                  // 0x0104(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              CurrentDailyXp;                                           // 0x0108(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               IsMaxLevel;                                               // 0x010C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x010D(0x0003) MISSED OFFSET
	TArray<struct FWuStringIntPair>                    StatTrakDataPairs;                                        // 0x0110(0x0010) (ZeroConstructor)
};

// ScriptStruct ShadowTrackerExtra.WuCustomizableObjectIdPair
// 0x0020
struct FWuCustomizableObjectIdPair
{
	struct FString                                     CustomizableObjectKey;                                    // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     CustomizableObjectValue;                                  // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct ShadowTrackerExtra.CharacterMovementCurves
// 0x00C0
struct FCharacterMovementCurves
{
	class UCurveFloat*                                 Curve_StandWalk;                                          // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 Curve_StandRun;                                           // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 Curve_StandSprint;                                        // 0x0010(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 Curve_CrouchWalk;                                         // 0x0018(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 Curve_CrouchRun;                                          // 0x0020(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 Curve_CrouchSprint;                                       // 0x0028(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 Curve_ProneWalk;                                          // 0x0030(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 Curve_ProneRun;                                           // 0x0038(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 Curve_ProneSprint;                                        // 0x0040(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 Curve_Swim;                                               // 0x0048(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 Curve_UnderwaterSwim;                                     // 0x0050(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 Curve_StandScope;                                         // 0x0058(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 Curve_CrouchScope;                                        // 0x0060(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 Curve_ProneScope;                                         // 0x0068(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 Curve_StandAim;                                           // 0x0070(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 Curve_CrouchAim;                                          // 0x0078(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 Curve_ProneAim;                                           // 0x0080(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 Curve_DBNO;                                               // 0x0088(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 Curve_GroundAngle;                                        // 0x0090(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveVector*                                Curve_WeaponSway;                                         // 0x0098(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveVector*                                Curve_WeaponSway_HoldBreath;                              // 0x00A0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 Curve_WeaponSwayFOVModifier;                              // 0x00A8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 Curve_TurningLerp;                                        // 0x00B0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 Curve_TurningLerpLocomotion;                              // 0x00B8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.WeaponAttachmentSlot
// 0x0004
struct FWeaponAttachmentSlot
{
	int                                                TypeSpecificID;                                           // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.SwitchWeaponReplicatedToOwnerData
// 0x0008
struct FSwitchWeaponReplicatedToOwnerData
{
	ESurviveWeaponPropSlot                             Slot;                                                     // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                OperationIndex;                                           // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.DestroyWeaponReplicatedToOwnerData
// 0x0010
struct FDestroyWeaponReplicatedToOwnerData
{
	struct FName                                       LogicSocket;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                OperationIndex;                                           // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.DisUseWeaponReplicatedToOwnerData
// 0x0004
struct FDisUseWeaponReplicatedToOwnerData
{
	int                                                OperationIndex;                                           // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.UseWeaponReplicatedToOwnerData
// 0x0010
struct FUseWeaponReplicatedToOwnerData
{
	struct FName                                       LogicSocket;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               bNeedWaitHandleSpawnFinishedOnClient;                     // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	int                                                OperationIndex;                                           // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.WeaponNotifyActionData
// 0x0008
struct FWeaponNotifyActionData
{
	int                                                OperationIndex;                                           // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EWeaponAction>                         Action;                                                   // 0x0004(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.PingPongSummary
// 0x000C
struct FPingPongSummary
{
	float                                              UnreliableAverageDelayMsec;                               // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              ReliableAverageDelayMsec;                                 // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	int8_t                                             UnreliableSentCount;                                      // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	int8_t                                             UnreliableMissCount;                                      // 0x0009(0x0001) (ZeroConstructor, IsPlainOldData)
	int8_t                                             ReliableCount;                                            // 0x000A(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x000B(0x0001) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.WeaponReloadData
// 0x000C
struct FWeaponReloadData
{
	float                                              FillTime;                                                 // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SingleBulletPrepareTime;                                  // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              UploadTime;                                               // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.STCustomRadialDamageEvent
// 0x0020 (0x0068 - 0x0048)
struct FSTCustomRadialDamageEvent : public FRadialDamageEvent
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0048(0x0020) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.SoundData
// 0x0014
struct FSoundData
{
	EFSoundType                                        SoundType;                                                // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FVector                                     SoundDir;                                                 // 0x0004(0x000C) (IsPlainOldData)
	float                                              SoundVolume;                                              // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.GrenadeSlotData
// 0x0008
struct FGrenadeSlotData
{
	TEnumAsByte<EGrenadeType>                          grenadeType;                                              // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                GrenadeCounts;                                            // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.AkEventTableRow
// 0x0010 (0x0018 - 0x0008)
struct FAkEventTableRow : public FTableRowBase
{
	int                                                ID;                                                       // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	class UAkAudioEvent*                               AkEvent;                                                  // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.PickUpGlobalDAndWrapperTableRow
// 0x0010 (0x0018 - 0x0008)
struct FPickUpGlobalDAndWrapperTableRow : public FTableRowBase
{
	int                                                ID;                                                       // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	class UClass*                                      Template;                                                 // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.PickUpActionReplicatedDataBroadcast
// 0x000C
struct FPickUpActionReplicatedDataBroadcast
{
	int                                                ActionID;                                                 // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                TargetPickUpItemID;                                       // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EHandlePickUpActionReplicatedDataActionType> ActionType;                                               // 0x0008(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.PickUpActionReplicatedData
// 0x0020
struct FPickUpActionReplicatedData
{
	int                                                ActionID;                                                 // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                TargetPickUpItemID;                                       // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class AActor*                                      ServerTargetActor;                                        // 0x0008(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class AActor*                                      WrapperActor;                                             // 0x0010(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EHandlePickUpActionReplicatedDataActionType> ActionType;                                               // 0x0018(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.ConsumeItemCDData
// 0x000C
struct FConsumeItemCDData
{
	unsigned char                                      UnknownData00[0xC];                                       // 0x0000(0x000C) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.ConsumeItemDataTableRow
// 0x0018 (0x0028 - 0x0010)
struct FConsumeItemDataTableRow : public FSurviveTableRowBase
{
	int                                                ConsumeItemID;                                            // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EConsumeItemType>                      Type;                                                     // 0x0014(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EConsumeItemCategory>                  Category;                                                 // 0x0015(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0016(0x0002) MISSED OFFSET
	float                                              ConsumeCD;                                                // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RecoverHealthPercentage;                                  // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxRecoverHealthPercentage;                               // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RecoverEnegy;                                             // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.PlayerEquipmentDataTableRow
// 0x0028 (0x0038 - 0x0010)
struct FPlayerEquipmentDataTableRow : public FSurviveTableRowBase
{
	int                                                PlayerEquipmentID;                                        // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EPlayerEquipmentSlotType>              Type;                                                     // 0x0014(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
	float                                              DamageMultiplyAdditionalRate;                             // 0x0018(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsAvata;                                                 // 0x001C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
	class UStaticMesh*                                 StaticMesh;                                               // 0x0020(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USkeletalMesh*                               SkeletalMesh;                                             // 0x0028(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstance*                           MaterialInstance;                                         // 0x0030(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.PlayerEquipmentItemData
// 0x0168
struct FPlayerEquipmentItemData
{
	struct FPickUpGlobalDataTableRow                   PickUpGlobalDataTableRow;                                 // 0x0000(0x0130) (BlueprintVisible, BlueprintReadOnly)
	struct FPlayerEquipmentDataTableRow                PlayerEquipmentDataTableRow;                              // 0x0130(0x0038) (BlueprintVisible, BlueprintReadOnly)
};

// ScriptStruct ShadowTrackerExtra.WeaponDataTableRow
// 0x0018 (0x0028 - 0x0010)
struct FWeaponDataTableRow : public FSurviveTableRowBase
{
	int                                                WeaponId;                                                 // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	class UClass*                                      WeaponTemplate;                                           // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESurvivePickUpCategory>                SurvivePickUpCategory;                                    // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.MainSlotItemData
// 0x0160
struct FMainSlotItemData
{
	struct FPickUpGlobalDataTableRow                   PickUpGlobalDataTableRow;                                 // 0x0000(0x0130) (BlueprintVisible, BlueprintReadOnly)
	struct FWeaponDataTableRow                         WeaponDataTableRow;                                       // 0x0130(0x0028) (BlueprintVisible, BlueprintReadOnly)
	class AActor*                                      TargetActor;                                              // 0x0158(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.UseBackpackItemParams
// 0x0001
struct FUseBackpackItemParams
{
	ESurviveWeaponPropSlot                             TargetEquipWeaponComponentMainSlot;                       // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.BackpackItemData
// 0x0148
struct FBackpackItemData
{
	int                                                Num;                                                      // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FPickUpGlobalDataTableRow                   BaseData;                                                 // 0x0008(0x0130) (BlueprintVisible, BlueprintReadOnly)
	bool                                               bIsUsing;                                                 // 0x0138(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0139(0x0003) MISSED OFFSET
	float                                              FinishPercentage;                                         // 0x013C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESurvivePickUpGlobalCategory>          SurvivePickUpGlobalCategory;                              // 0x0140(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0141(0x0007) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.UserCmdBitMsg
// 0x00F8
struct FUserCmdBitMsg
{
	unsigned char                                      UnknownData00[0xF8];                                      // 0x0000(0x00F8) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.CircleInfoInMap
// 0x0018
struct FCircleInfoInMap
{
	struct FVector2D                                   WhiteCircleCenter;                                        // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FVector2D                                   BlueCircleCenter;                                         // 0x0008(0x0008) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	float                                              WhiteCircleRadius;                                        // 0x0010(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              BlueCircleRadius;                                         // 0x0014(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.ImpactMapValueData
// 0x0010
struct FImpactMapValueData
{
	TArray<class ASTEShootWeaponBulletImpactEffect*>   ImpactEffectList;                                         // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct ShadowTrackerExtra.STExtraVehicleSfxLoop
// 0x0010
struct FSTExtraVehicleSfxLoop
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.STReplicatedVehicleState
// 0x0005
struct FSTReplicatedVehicleState
{
	int8_t                                             SteeringInput;                                            // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	int8_t                                             ThrottleInput;                                            // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData)
	int8_t                                             BrakeInput;                                               // 0x0002(0x0001) (ZeroConstructor, IsPlainOldData)
	int8_t                                             HandbrakeInput;                                           // 0x0003(0x0001) (ZeroConstructor, IsPlainOldData)
	int8_t                                             CurrentGear;                                              // 0x0004(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.TslPointDamageEvent
// 0x0008 (0x00B8 - 0x00B0)
struct FTslPointDamageEvent : public FPointDamageEvent
{
	bool                                               bDestructibleDoor;                                        // 0x00B0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00B1(0x0007) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.TslBaseLobbySceneData
// 0x0080 (0x0088 - 0x0008)
struct FTslBaseLobbySceneData : public FTableRowBase
{
	struct FName                                       SceneCameraTag;                                           // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       SceneLevelName;                                           // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	ELobbyCharacterAnimationType                       LobbyCharacterAnimationType;                              // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bHideMainLobbyCharacter;                                  // 0x0019(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bHideOtherLobbyCharacter;                                 // 0x001A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	ELobbyBlurChangingStates                           LobbyBlurChangingStates;                                  // 0x001B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bShowUmgBlur;                                             // 0x001C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
	TMap<struct FString, struct FName>                 TslLobbySceneTravelNames;                                 // 0x0020(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               bHideDefaultParticle;                                     // 0x0070(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0071(0x0007) MISSED OFFSET
	TArray<struct FName>                               ShowParticleTags;                                         // 0x0078(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct ShadowTrackerExtra.TslLobbyViewModeSceneData
// 0x00A0 (0x0128 - 0x0088)
struct FTslLobbyViewModeSceneData : public FTslBaseLobbySceneData
{
	TMap<EViewModeCategory, struct FName>              ViewModePivots;                                           // 0x0088(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	TMap<EWeaponClass, struct FName>                   OverrideWeaponViewModePivots;                             // 0x00D8(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct ShadowTrackerExtra.TslLobbySceneData
// 0x0010 (0x0098 - 0x0088)
struct FTslLobbySceneData : public FTslBaseLobbySceneData
{
	TArray<struct FName>                               LobbyCharacterPivotTags;                                  // 0x0088(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct ShadowTrackerExtra.EmoteBitArray
// 0x0020
struct FEmoteBitArray
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.TslLobbySceneTravelData
// 0x0008 (0x0010 - 0x0008)
struct FTslLobbySceneTravelData : public FTableRowBase
{
	class UClass*                                      LobbySceneTravelClass;                                    // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.TslGamepadInputKeySet
// 0x0010
struct FTslGamepadInputKeySet
{
	TArray<struct FTslGamepadInputKey>                 GamepadInputKeys;                                         // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct ShadowTrackerExtra.LimitCustomStringParameter
// 0x0018
struct FLimitCustomStringParameter
{
	struct FString                                     CustomStringParameter;                                    // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	float                                              MinLimit;                                                 // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MaxLimit;                                                 // 0x0014(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.SavedObPos
// 0x0018
struct FSavedObPos
{
	struct FVector                                     Loc;                                                      // 0x0000(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FRotator                                    Rot;                                                      // 0x000C(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.SavedObPosMapConfig
// 0x0020
struct FSavedObPosMapConfig
{
	struct FString                                     MapName;                                                  // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FSavedObPos>                         SavedObPos;                                               // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct ShadowTrackerExtra.HudUiConfig
// 0x0048
struct FHudUiConfig
{
	struct FString                                     WidgetName;                                               // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FTslWidgetConfig                            WidgetConfig;                                             // 0x0010(0x0038) (Edit, BlueprintVisible)
};

// ScriptStruct ShadowTrackerExtra.TslMissionInLobby
// 0x0068
struct FTslMissionInLobby
{
	struct FString                                     MissionId;                                                // 0x0000(0x0010) (ZeroConstructor)
	bool                                               bAchieved;                                                // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
	struct FString                                     Description;                                              // 0x0018(0x0010) (ZeroConstructor)
	int                                                Priority;                                                 // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	struct FString                                     Type;                                                     // 0x0030(0x0010) (ZeroConstructor)
	bool                                               bLocked;                                                  // 0x0040(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0041(0x0003) MISSED OFFSET
	float                                              ProgressRatio;                                            // 0x0044(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     ProgressText;                                             // 0x0048(0x0010) (ZeroConstructor)
	struct FString                                     MissionIconName;                                          // 0x0058(0x0010) (ZeroConstructor)
};

// ScriptStruct ShadowTrackerExtra.TslUserProfile
// 0x0018
struct FTslUserProfile
{
	struct FString                                     PlayerNetId;                                              // 0x0000(0x0010) (ZeroConstructor)
	float                                              TotalPlayTime_Sec;                                        // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.FixHighBitCounter
// 0x000C
struct FFixHighBitCounter
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	int                                                Counter;                                                  // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.WeatherChangeWeight
// 0x0008
struct FWeatherChangeWeight
{
	EWeatherChange                                     newWeather;                                               // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              weight;                                                   // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.BlueZoneCustomOption
// 0x0024
struct FBlueZoneCustomOption
{
	int                                                PhaseNum;                                                 // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StartDelay;                                               // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WarningDuration;                                          // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ReleaseDuration;                                          // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PoisonGasDamagePerSecond;                                 // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RadiusRate;                                               // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SpreadRatio;                                              // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LandRatio;                                                // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                CircleAlgorithm;                                          // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.RedZoneCustomOption
// 0x001C
struct FRedZoneCustomOption
{
	bool                                               bIsActive;                                                // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              MultiplierRedZoneExplosionDensity;                        // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MultiplierRedZoneStartTime;                               // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MultiplierRedZoneEndTime;                                 // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MultiplierRedZoneExplosionDelay;                          // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MultiplierRedZoneDuration;                                // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MultiplierRedZoneArea;                                    // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.TslKillcamMetadata
// 0x0098
struct FTslKillcamMetadata
{
	float                                              LastUpdateTime;                                           // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FString                                     KillerUniqueId;                                           // 0x0008(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     KillerName;                                               // 0x0018(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     PlayerUniqueId;                                           // 0x0028(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     PlayerName;                                               // 0x0038(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData01[0x50];                                      // 0x0048(0x0050) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.TslReportUserInfo
// 0x0038
struct FTslReportUserInfo
{
	struct FString                                     PlayerName;                                               // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     NetId;                                                    // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     AccountId;                                                // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                TeamID;                                                   // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	ESubjectToReport                                   SubjectToReport;                                          // 0x0034(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0035(0x0003) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.TslReportedInfo
// 0x0080
struct FTslReportedInfo
{
	struct FString                                     MatchId;                                                  // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FTslReportUserInfo                          UserInfo;                                                 // 0x0010(0x0038) (Edit, BlueprintVisible)
	struct FString                                     Cause;                                                    // 0x0048(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FString>                             DetailCauseList;                                          // 0x0058(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     ReportedSessionType;                                      // 0x0068(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              MatchElapsedTimeSec;                                      // 0x0078(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x007C(0x0004) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.TslPlayerMatchResultInfo
// 0x0028
struct FTslPlayerMatchResultInfo
{
	struct FString                                     PlayerName;                                               // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                NumKills;                                                 // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Ranking;                                                  // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                TeamID;                                                   // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                NumStartTeamMember;                                       // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsZombie;                                                // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.NearClippingLevelOverZ
// 0x0008
struct FNearClippingLevelOverZ
{
	float                                              Z;                                                        // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	ENearClippingLevel                                 Level;                                                    // 0x0004(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.PlayerStartsUserCount
// 0x0004
struct FPlayerStartsUserCount
{
	int                                                PlayerCount;                                              // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.SequenceBase
// 0x0098
struct FSequenceBase
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
	class UUserWidget*                                 Widget;                                                   // 0x0018(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x78];                                      // 0x0020(0x0078) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.Sequence_Vector
// 0x0008 (0x00A0 - 0x0098)
struct FSequence_Vector : public FSequenceBase
{
	class UCurveVector*                                VectorCurve;                                              // 0x0098(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.Sequence_Float
// 0x0008 (0x00A0 - 0x0098)
struct FSequence_Float : public FSequenceBase
{
	class UCurveFloat*                                 FloatCurve;                                               // 0x0098(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.UmgWidgetBinder_Spacer
// 0x0008 (0x0020 - 0x0018)
struct FUmgWidgetBinder_Spacer : public FUmgWidgetBinder
{
	class USpacer*                                     CachedSpacer;                                             // 0x0018(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.AnimationPlayData
// 0x0010
struct FAnimationPlayData
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.UmgWidgetBinder_RetainerBox
// 0x0008 (0x0020 - 0x0018)
struct FUmgWidgetBinder_RetainerBox : public FUmgWidgetBinder
{
	class URetainerBox*                                CachedRetainerBox;                                        // 0x0018(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.UmgWidgetBinder_Border
// 0x0008 (0x0020 - 0x0018)
struct FUmgWidgetBinder_Border : public FUmgWidgetBinder
{
	class UBorder*                                     CachedBorder;                                             // 0x0018(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.UmgWidgetBinder_HorizontalBox
// 0x0008 (0x0020 - 0x0018)
struct FUmgWidgetBinder_HorizontalBox : public FUmgWidgetBinder
{
	class UHorizontalBox*                              CachedHorizontalBox;                                      // 0x0018(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.UmgWidgetBinder_VerticalBox
// 0x0008 (0x0020 - 0x0018)
struct FUmgWidgetBinder_VerticalBox : public FUmgWidgetBinder
{
	class UVerticalBox*                                CachedVerticalBox;                                        // 0x0018(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.VoiceCheckSorttNode
// 0x0008
struct FVoiceCheckSorttNode
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.WarGameTeamScore
// 0x000C
struct FWarGameTeamScore
{
	int                                                TeamID;                                                   // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                TeamRank;                                                 // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                TeamScore;                                                // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.CompareEnemyInfo
// 0x0001
struct FCompareEnemyInfo
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.EnemyInfo2
// 0x0014
struct FEnemyInfo2
{
	float                                              OutterDis;                                                // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              InnerDis;                                                 // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   point2D;                                                  // 0x0008(0x0008) (IsPlainOldData)
	bool                                               bDraw;                                                    // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

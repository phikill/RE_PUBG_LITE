

// Class ShadowTrackerExtra.STExtraBuffAction_AdjustStunPostMat
// //Class ShadowTrackerExtra.STExtraBuffAction_AdjustStunPostMat
//0x0058 (0x01B0 - 0x0158)
class USTExtraBuffAction_AdjustStunPostMat : public UUTSkillAction
{
public:
	float                                              FadeInDuration;                                           // 0x0158(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      IsUseBreathPercentageAsAlpha : 1;                         // 0x015C(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x015D(0x0003) MISSED OFFSET
	float                                              FadeOutDuration;                                          // 0x0160(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      ResetOnRemove : 1;                                        // 0x0164(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0165(0x0003) MISSED OFFSET
	class UMaterialInterface*                          ParentMaterial;                                           // 0x0168(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       ShaderUniformName;                                        // 0x0170(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0178(0x0008) MISSED OFFSET
	class UMaterialInstanceDynamic*                    DynamicMat;                                               // 0x0180(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      IsUniqueEffect : 1;                                       // 0x0188(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0189(0x0007) MISSED OFFSET
	class UAkAudioEvent*                               Tinnitus;                                                 // 0x0190(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkComponent*                                TinnitusAKComp;                                           // 0x0198(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData04[0x8];                                       // 0x01A0(0x0008) MISSED OFFSET
	class UStaticMeshComponent*                        CameraStaticMeshCom;                                      // 0x01A8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)

}

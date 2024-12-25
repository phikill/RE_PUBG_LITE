

// Class Gameplay.TestAttrModifyActor
// //Class Gameplay.TestAttrModifyActor
//0x0018 (0x03D8 - 0x03C0)
class ATestAttrModifyActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x03C0(0x0008) MISSED OFFSET
	class UAttrModifyComponent*                        AttrModifyComp;                                           // 0x03C8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x03D0(0x0004) MISSED OFFSET
	float                                              FloatAttr;                                                // 0x03D4(0x0004) (Net, ZeroConstructor, IsPlainOldData)

	// Function Gameplay.TestAttrModifyActor.TestGetVariable
	// (Final, Native, Protected, BlueprintCallable)
	unsigned char TestGetVariable();// sub_15804A0()

	// Function Gameplay.TestAttrModifyActor.SetModify
	// (Final, Native, Public, BlueprintCallable)
	void SetModify(unsigned char Enable);// sub_1580380()

	// Function Gameplay.TestAttrModifyActor.GetAttrValue
	// (Final, Native, Public, HasOutParms, BlueprintCallable)
	void GetAttrValue(int* Ifloat* F);// sub_157F470()


}



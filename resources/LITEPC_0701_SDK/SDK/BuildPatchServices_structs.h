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

// Enum BuildPatchServices.EManifestFileHeader
enum class EManifestFileHeader : uint8_t
{
	EManifestFileHeader__STORED_RAW = 0,
	EManifestFileHeader__STORED_COMPRESSED = 1,
	EManifestFileHeader__STORED_MAX = 2
};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct BuildPatchServices.SHAHashData
// 0x0014
struct FSHAHashData
{
	unsigned char                                      Hash[0x14];                                               // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct BuildPatchServices.ChunkPartData
// 0x0018
struct FChunkPartData
{
	struct FGuid                                       Guid;                                                     // 0x0000(0x0010) (IsPlainOldData)
	uint32_t                                           Offset;                                                   // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           Size;                                                     // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct BuildPatchServices.FileManifestData
// 0x0070
struct FFileManifestData
{
	struct FString                                     Filename;                                                 // 0x0000(0x0010) (ZeroConstructor)
	struct FSHAHashData                                FileHash;                                                 // 0x0010(0x0014)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	TArray<struct FChunkPartData>                      FileChunkParts;                                           // 0x0028(0x0010) (ZeroConstructor)
	TArray<struct FString>                             InstallTags;                                              // 0x0038(0x0010) (ZeroConstructor)
	bool                                               bIsUnixExecutable;                                        // 0x0048(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0049(0x0007) MISSED OFFSET
	struct FString                                     SymlinkTarget;                                            // 0x0050(0x0010) (ZeroConstructor)
	bool                                               bIsReadOnly;                                              // 0x0060(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsCompressed;                                            // 0x0061(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0xE];                                       // 0x0062(0x000E) MISSED OFFSET
};

// ScriptStruct BuildPatchServices.ChunkInfoData
// 0x0040
struct FChunkInfoData
{
	struct FGuid                                       Guid;                                                     // 0x0000(0x0010) (IsPlainOldData)
	uint64_t                                           Hash;                                                     // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FSHAHashData                                ShaHash;                                                  // 0x0018(0x0014)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	int64_t                                            FileSize;                                                 // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      GroupNumber;                                              // 0x0038(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0039(0x0007) MISSED OFFSET
};

// ScriptStruct BuildPatchServices.CustomFieldData
// 0x0020
struct FCustomFieldData
{
	struct FString                                     Key;                                                      // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     Value;                                                    // 0x0010(0x0010) (ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

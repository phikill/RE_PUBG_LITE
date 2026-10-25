// Credits to https://github.com/C0HERENCE/LiteSDKGenerator for the base file

#include "UnrealContainers.hpp"	

#pragma once

using namespace UC; 
#define _BYTE  uint8
#define _WORD  uint16
#define _DWORD uint32
#define _QWORD uint64
#define NULL 0
#define LAST_IND(x,part_type)    (sizeof(x)/sizeof(part_type) - 1)
#define HIGH_IND(x,part_type)  LAST_IND(x,part_type)
#define LOW_IND(x,part_type)   0
#define BYTEn(x, n)   (*((_BYTE*)&(x)+n))
#define WORDn(x, n)   (*((_WORD*)&(x)+n))
#define DWORDn(x, n)  (*((_DWORD*)&(x)+n))
#define LODWORD(x) DWORDn(x,LOW_IND(x,_DWORD))
#define HIDWORD(x) DWORDn(x,HIGH_IND(x,_DWORD))
#define BYTE1(x)   BYTEn(x,  1)         // byte 1 (counting from 0)
#define BYTE2(x)   BYTEn(x,  2)
#define BYTE3(x)   BYTEn(x,  3)
#define BYTE4(x)   BYTEn(x,  4)
#define BYTE5(x)   BYTEn(x,  5)
#define BYTE6(x)   BYTEn(x,  6)
#define BYTE7(x)   BYTEn(x,  7)
#define BYTE8(x)   BYTEn(x,  8)
#define BYTE9(x)   BYTEn(x,  9)
#define BYTE10(x)  BYTEn(x, 10)
#define BYTE11(x)  BYTEn(x, 11)
#define BYTE12(x)  BYTEn(x, 12)
#define BYTE13(x)  BYTEn(x, 13)
#define BYTE14(x)  BYTEn(x, 14)
#define BYTE15(x)  BYTEn(x, 15)
#define WORD1(x)   WORDn(x,  1)
#define WORD2(x)   WORDn(x,  2)         // third word of the object, unsigned
#define WORD3(x)   WORDn(x,  3)
#define WORD4(x)   WORDn(x,  4)
#define WORD5(x)   WORDn(x,  5)
#define WORD6(x)   WORDn(x,  6)
#define WORD7(x)   WORDn(x,  7)

template<class T>  int16 __PAIR__(int8  high, T low) { return (((int16)high) << sizeof(high) * 8) | uint8(low); }
template<class T>  int32 __PAIR__(int16 high, T low) { return (((int32)high) << sizeof(high) * 8) | uint16(low); }
template<class T>  int64 __PAIR__(int32 high, T low) { return (((int64)high) << sizeof(high) * 8) | uint32(low); }
template<class T> uint16 __PAIR__(uint8  high, T low) { return (((uint16)high) << sizeof(high) * 8) | uint8(low); }
template<class T> uint32 __PAIR__(uint16 high, T low) { return (((uint32)high) << sizeof(high) * 8) | uint16(low); }
template<class T> uint64 __PAIR__(uint32 high, T low) { return (((uint64)high) << sizeof(high) * 8) | uint32(low); }

template<class T> T __ROL__(T value, int count)
{
	const uint32 nbits = sizeof(T) * 8;

	if (count > 0)
	{
		count %= nbits;
		T high = value >> (nbits - count);
		if (T(-1) < 0) // signed value
			high &= ~((T(-1) << count));
		value <<= count;
		value |= high;
	}
	else
	{
		count = -count % nbits;
		T low = value << (nbits - count);
		value >>= count;
		value |= low;
	}
	return value;
}

inline uint8  __ROL1__(uint8  value, int count) { return __ROL__((uint8)value, count); }
inline uint16 __ROL2__(uint16 value, int count) { return __ROL__((uint16)value, count); }
inline uint32 __ROL4__(uint32 value, int count) { return __ROL__((uint32)value, count); }
inline uint64 __ROL8__(uint64 value, int count) { return __ROL__((uint64)value, count); }
inline uint8  __ROR1__(uint8  value, int count) { return __ROL__((uint8)value, -count); }
inline uint16 __ROR2__(uint16 value, int count) { return __ROL__((uint16)value, -count); }
inline uint32 __ROR4__(uint32 value, int count) { return __ROL__((uint32)value, -count); }
inline uint64 __ROR8__(uint64 value, int count) { return __ROL__((uint64)value, -count); }

class Dec
{
public:
	// UObject
	static uint64 objobjects(uint64 v7)
	{
		uint64 v17;
		LODWORD(v17) = __ROL4__(__ROL4__(v7, 16) - 597889948, 16) ^ 0xDC5CEC64;
		HIDWORD(v17) = __ROR4__(__ROR4__(HIDWORD(v7), 8) - 605824028, 8) ^ 0x241C241C;
		return v17;
	}
	static int32 internal_id(uint32 v2)
	{
		int v49 = __ROR4__(v2 ^ 0xC6B2B218, 14);
		int decrypted = v49 ^ (v49 << 16) ^ 0xAA740C37;

		return decrypted;
	}
	static uint64 uclass(uint64 v6)
	{
		uint64 v21 = __ROR8__(v6 ^ 0x470898FB6D10C7ACLL, 28);
		uint64 DecryptedClass = v21 ^ (v21 << 32) ^ 0x5DE5A22A6289A4FLL;

		return DecryptedClass;
	}
	static uint64 outer(uint64 v18)
	{
		uint64 v62 = __ROL8__(v18 ^ 0x94426FF1A564B5E8uLL, 19);
		uint64 decrypted = v62 ^ (v62 << 32) ^ 0x72BCED0738B42294LL;

		return decrypted;
	}
	//FName
	static int32 comparison_id(uint32 v10)
	{
		int v15 = __ROL4__(v10 ^ 0xED10C7AF, 4);
		return v15 ^ (v15 << 16) ^ 0x3C659A4D;
	}
	static int32 number(uint32 v6)
	{
		int v16 = __ROL4__(v6 ^ 0xF7B20EA6, 14);
		return v16 ^ (v16 << 16) ^ 0xF914F7B2;
	}
};
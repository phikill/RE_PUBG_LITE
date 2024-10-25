using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.ConstrainedExecution;
using System.Runtime.ExceptionServices;
using System.Runtime.InteropServices;
using System.Security;
using System.Security.Permissions;
using System.Threading;
using <CppImplementationDetails>;
using <CrtImplementationDetails>;
using msclr.interop.details;
using std;

// Token: 0x02000001 RID: 1
internal class <Module>
{
	// Token: 0x06000001 RID: 1 RVA: 0x0000AA88 File Offset: 0x00009E88
	internal unsafe static void* @new(ulong _Size, void* _Where)
	{
		return _Where;
	}

	// Token: 0x06000002 RID: 2 RVA: 0x0000AA98 File Offset: 0x00009E98
	internal unsafe static exception* {ctor}(exception* A_0, exception* _Other)
	{
		*A_0 = ref <Module>.??_7exception@std@@6B@;
		exception* ptr = A_0 + 8L;
		initblk(ptr, 0, 16L);
		<Module>.__std_exception_copy(_Other / sizeof(__std_exception_data) + 8L, ptr);
		return A_0;
	}

	// Token: 0x06000003 RID: 3 RVA: 0x0000AAC4 File Offset: 0x00009EC4
	internal unsafe static void {dtor}(exception* A_0)
	{
		*A_0 = ref <Module>.??_7exception@std@@6B@;
		<Module>.__std_exception_destroy(A_0 / sizeof(__std_exception_data) + 8L);
	}

	// Token: 0x06000004 RID: 4 RVA: 0x0000B9A8 File Offset: 0x0000ADA8
	internal unsafe static sbyte* what(exception* A_0)
	{
		ulong num = (ulong)(*(A_0 + 8L));
		return num != 0UL ? num : ref <Module>.??_C@_0BC@EOODALEL@Unknown?5exception@;
	}

	// Token: 0x06000005 RID: 5 RVA: 0x0000B948 File Offset: 0x0000AD48
	internal unsafe static void* __vecDelDtor(exception* A_0, uint A_0)
	{
		if ((A_0 & 2U) != 0U)
		{
			exception* ptr = A_0 - 8L;
			<Module>.__ehvec_dtor(A_0, 24UL, (ulong)(*ptr), ldftn(std.exception.{dtor}));
			if ((A_0 & 1U) != 0U)
			{
				exception* ptr2 = ptr;
				<Module>.delete[](ptr2, (ulong)(*ptr2 * 24L + 8L));
			}
			return ptr;
		}
		*A_0 = ref <Module>.??_7exception@std@@6B@;
		<Module>.__std_exception_destroy(A_0 / sizeof(__std_exception_data) + 8L);
		if ((A_0 & 1U) != 0U)
		{
			<Module>.delete(A_0, 24UL);
		}
		return A_0;
	}

	// Token: 0x06000006 RID: 6 RVA: 0x0000AAE4 File Offset: 0x00009EE4
	internal unsafe static void {dtor}(exception_ptr* A_0)
	{
		<Module>.__ExceptionPtrDestroy(A_0);
	}

	// Token: 0x06000007 RID: 7 RVA: 0x0000AAF8 File Offset: 0x00009EF8
	internal unsafe static exception_ptr* {ctor}(exception_ptr* A_0, exception_ptr* _Rhs)
	{
		<Module>.__ExceptionPtrCopy(A_0, _Rhs);
		return A_0;
	}

	// Token: 0x06000008 RID: 8 RVA: 0x0000AB38 File Offset: 0x00009F38
	internal static long max()
	{
		return long.MaxValue;
	}

	// Token: 0x06000009 RID: 9 RVA: 0x0000AB50 File Offset: 0x00009F50
	internal unsafe static sbyte* copy(sbyte* _First1, sbyte* _First2, ulong _Count)
	{
		cpblk(_First1, _First2, _Count);
		return _First1;
	}

	// Token: 0x0600000A RID: 10 RVA: 0x0000AB68 File Offset: 0x00009F68
	internal unsafe static void assign(sbyte* _Left, sbyte* _Right)
	{
		*_Left = (byte)(*_Right);
	}

	// Token: 0x0600000B RID: 11 RVA: 0x0000AB7C File Offset: 0x00009F7C
	internal unsafe static void _Orphan_all(_Container_base0* A_0)
	{
	}

	// Token: 0x0600000C RID: 12 RVA: 0x0000AB8C File Offset: 0x00009F8C
	internal unsafe static _Container_base12* {ctor}(_Container_base12* A_0, _Container_base12* A_0)
	{
		*A_0 = 0L;
		return A_0;
	}

	// Token: 0x0600000D RID: 13 RVA: 0x0000B554 File Offset: 0x0000A954
	internal unsafe static _Iterator_base12* {ctor}(_Iterator_base12* A_0, _Iterator_base12* _Right)
	{
		*A_0 = 0L;
		*(A_0 + 8L) = 0L;
		ulong num = (ulong)(*_Right);
		if (0UL != num)
		{
			_Container_base12* ptr = *num;
			if (ptr != null)
			{
				*A_0 = *(long*)ptr;
			}
		}
		return A_0;
	}

	// Token: 0x0600000E RID: 14 RVA: 0x0000B184 File Offset: 0x0000A584
	internal unsafe static _Iterator_base12* =(_Iterator_base12* A_0, _Iterator_base12* _Right)
	{
		ulong num = (ulong)(*_Right);
		if (*A_0 != (long)num && num != 0UL)
		{
			_Container_base12* ptr = *num;
			if (ptr != null)
			{
				*A_0 = *(long*)ptr;
			}
		}
		return A_0;
	}

	// Token: 0x0600000F RID: 15 RVA: 0x0000ABA0 File Offset: 0x00009FA0
	internal unsafe static void _Adopt(_Iterator_base12* A_0, _Container_base12* _Parent)
	{
		if (_Parent != null)
		{
			*A_0 = *(long*)_Parent;
		}
	}

	// Token: 0x06000010 RID: 16 RVA: 0x0000ABB4 File Offset: 0x00009FB4
	internal static ulong _Get_size_of_n<1>(ulong _Count)
	{
		return _Count;
	}

	// Token: 0x06000011 RID: 17 RVA: 0x0000ABC4 File Offset: 0x00009FC4
	internal unsafe static void* _Allocate(ulong _Bytes)
	{
		return <Module>.@new(_Bytes);
	}

	// Token: 0x06000012 RID: 18 RVA: 0x0000ABD8 File Offset: 0x00009FD8
	internal unsafe static void _Adjust_manually_vector_aligned(void** _Ptr, ulong* _Bytes)
	{
		*_Bytes += 39L;
		long num = *_Ptr;
		ulong num2 = *(num - 8L);
		if (num - num2 - 8L <= 31L)
		{
			*_Ptr = num2;
		}
		else
		{
			<Module>._invalid_parameter_noinfo_noreturn();
		}
	}

	// Token: 0x06000013 RID: 19 RVA: 0x0000B9C8 File Offset: 0x0000ADC8
	internal unsafe static void* __vecDelDtor(runtime_error* A_0, uint A_0)
	{
		if ((A_0 & 2U) != 0U)
		{
			runtime_error* ptr = A_0 - 8L;
			<Module>.__ehvec_dtor(A_0, 24UL, (ulong)(*ptr), ldftn(std.runtime_error.{dtor}));
			if ((A_0 & 1U) != 0U)
			{
				runtime_error* ptr2 = ptr;
				<Module>.delete[](ptr2, (ulong)(*ptr2 * 24L + 8L));
			}
			return ptr;
		}
		*A_0 = ref <Module>.??_7exception@std@@6B@;
		<Module>.__std_exception_destroy(A_0 / sizeof(__std_exception_data) + 8L);
		if ((A_0 & 1U) != 0U)
		{
			<Module>.delete(A_0, 24UL);
		}
		return A_0;
	}

	// Token: 0x06000014 RID: 20 RVA: 0x0000AC0C File Offset: 0x0000A00C
	internal unsafe static void {dtor}(runtime_error* A_0)
	{
		*A_0 = ref <Module>.??_7exception@std@@6B@;
		<Module>.__std_exception_destroy(A_0 / sizeof(__std_exception_data) + 8L);
	}

	// Token: 0x06000015 RID: 21 RVA: 0x0000BA88 File Offset: 0x0000AE88
	internal unsafe static void* __vecDelDtor(bad_cast* A_0, uint A_0)
	{
		if ((A_0 & 2U) != 0U)
		{
			bad_cast* ptr = A_0 - 8L;
			<Module>.__ehvec_dtor(A_0, 24UL, (ulong)(*ptr), ldftn(std.bad_cast.{dtor}));
			if ((A_0 & 1U) != 0U)
			{
				bad_cast* ptr2 = ptr;
				<Module>.delete[](ptr2, (ulong)(*ptr2 * 24L + 8L));
			}
			return ptr;
		}
		*A_0 = ref <Module>.??_7exception@std@@6B@;
		<Module>.__std_exception_destroy(A_0 / sizeof(__std_exception_data) + 8L);
		if ((A_0 & 1U) != 0U)
		{
			<Module>.delete(A_0, 24UL);
		}
		return A_0;
	}

	// Token: 0x06000016 RID: 22 RVA: 0x0000BAE8 File Offset: 0x0000AEE8
	internal unsafe static void {dtor}(bad_cast* A_0)
	{
		*A_0 = ref <Module>.??_7exception@std@@6B@;
		<Module>.__std_exception_destroy(A_0 / sizeof(__std_exception_data) + 8L);
	}

	// Token: 0x06000017 RID: 23 RVA: 0x0000AC2C File Offset: 0x0000A02C
	internal unsafe static runtime_error* {ctor}(runtime_error* A_0, runtime_error* A_0)
	{
		*A_0 = ref <Module>.??_7exception@std@@6B@;
		runtime_error* ptr = A_0 + 8L;
		initblk(ptr, 0, 16L);
		<Module>.__std_exception_copy(A_0 / sizeof(__std_exception_data) + 8L, ptr);
		try
		{
			*A_0 = ref <Module>.??_7runtime_error@std@@6B@;
		}
		catch
		{
			<Module>.___CxxCallUnwindDtor(ldftn(std.exception.{dtor}), A_0);
			throw;
		}
		return A_0;
	}

	// Token: 0x06000018 RID: 24 RVA: 0x0000AC8C File Offset: 0x0000A08C
	internal unsafe static locale* {ctor}(locale* A_0, locale* _Right)
	{
		long num = *(_Right + 8L);
		*(A_0 + 8L) = num;
		long num2 = num;
		calli(System.Void modopt(System.Runtime.CompilerServices.CallConvCdecl)(System.IntPtr), (IntPtr)num2, *(*num2 + 8L));
		return A_0;
	}

	// Token: 0x06000019 RID: 25 RVA: 0x0000BA28 File Offset: 0x0000AE28
	internal unsafe static void* __vecDelDtor(_System_error* A_0, uint A_0)
	{
		if ((A_0 & 2U) != 0U)
		{
			_System_error* ptr = A_0 - 8L;
			<Module>.__ehvec_dtor(A_0, 40UL, (ulong)(*ptr), ldftn(std._System_error.{dtor}));
			if ((A_0 & 1U) != 0U)
			{
				_System_error* ptr2 = ptr;
				<Module>.delete[](ptr2, (ulong)(*ptr2 * 40L + 8L));
			}
			return ptr;
		}
		*A_0 = ref <Module>.??_7exception@std@@6B@;
		<Module>.__std_exception_destroy(A_0 / sizeof(__std_exception_data) + 8L);
		if ((A_0 & 1U) != 0U)
		{
			<Module>.delete(A_0, 40UL);
		}
		return A_0;
	}

	// Token: 0x0600001A RID: 26 RVA: 0x0000ACB4 File Offset: 0x0000A0B4
	internal unsafe static void {dtor}(_System_error* A_0)
	{
		*A_0 = ref <Module>.??_7exception@std@@6B@;
		<Module>.__std_exception_destroy(A_0 / sizeof(__std_exception_data) + 8L);
	}

	// Token: 0x0600001B RID: 27 RVA: 0x0000BB08 File Offset: 0x0000AF08
	internal unsafe static void* __vecDelDtor(system_error* A_0, uint A_0)
	{
		if ((A_0 & 2U) != 0U)
		{
			system_error* ptr = A_0 - 8L;
			<Module>.__ehvec_dtor(A_0, 40UL, (ulong)(*ptr), ldftn(std.system_error.{dtor}));
			if ((A_0 & 1U) != 0U)
			{
				system_error* ptr2 = ptr;
				<Module>.delete[](ptr2, (ulong)(*ptr2 * 40L + 8L));
			}
			return ptr;
		}
		*A_0 = ref <Module>.??_7exception@std@@6B@;
		<Module>.__std_exception_destroy(A_0 / sizeof(__std_exception_data) + 8L);
		if ((A_0 & 1U) != 0U)
		{
			<Module>.delete(A_0, 40UL);
		}
		return A_0;
	}

	// Token: 0x0600001C RID: 28 RVA: 0x0000ACD4 File Offset: 0x0000A0D4
	internal unsafe static void {dtor}(system_error* A_0)
	{
		*A_0 = ref <Module>.??_7exception@std@@6B@;
		<Module>.__std_exception_destroy(A_0 / sizeof(__std_exception_data) + 8L);
	}

	// Token: 0x0600001D RID: 29 RVA: 0x0000BB68 File Offset: 0x0000AF68
	internal unsafe static void* __vecDelDtor(ios_base.failure* A_0, uint A_0)
	{
		if ((A_0 & 2U) != 0U)
		{
			ios_base.failure* ptr = A_0 - 8L;
			<Module>.__ehvec_dtor(A_0, 40UL, (ulong)(*ptr), ldftn(std.ios_base.failure.{dtor}));
			if ((A_0 & 1U) != 0U)
			{
				ios_base.failure* ptr2 = ptr;
				<Module>.delete[](ptr2, (ulong)(*ptr2 * 40L + 8L));
			}
			return ptr;
		}
		*A_0 = ref <Module>.??_7exception@std@@6B@;
		<Module>.__std_exception_destroy(A_0 / sizeof(__std_exception_data) + 8L);
		if ((A_0 & 1U) != 0U)
		{
			<Module>.delete(A_0, 40UL);
		}
		return A_0;
	}

	// Token: 0x0600001E RID: 30 RVA: 0x0000BBC8 File Offset: 0x0000AFC8
	internal unsafe static void {dtor}(ios_base.failure* A_0)
	{
		*A_0 = ref <Module>.??_7exception@std@@6B@;
		<Module>.__std_exception_destroy(A_0 / sizeof(__std_exception_data) + 8L);
	}

	// Token: 0x0600001F RID: 31 RVA: 0x0000B580 File Offset: 0x0000A980
	internal unsafe static ios_base.failure* {ctor}(ios_base.failure* A_0, ios_base.failure* A_0)
	{
		<Module>.std._System_error.{ctor}(A_0, A_0);
		try
		{
			*A_0 = ref <Module>.??_7system_error@std@@6B@;
		}
		catch
		{
			<Module>.___CxxCallUnwindDtor(ldftn(std._System_error.{dtor}), A_0);
			throw;
		}
		try
		{
			*A_0 = ref <Module>.??_7failure@ios_base@std@@6B@;
		}
		catch
		{
			<Module>.___CxxCallUnwindDtor(ldftn(std.system_error.{dtor}), A_0);
			throw;
		}
		return A_0;
	}

	// Token: 0x06000020 RID: 32 RVA: 0x0000B1A8 File Offset: 0x0000A5A8
	internal unsafe static system_error* {ctor}(system_error* A_0, system_error* A_0)
	{
		<Module>.std._System_error.{ctor}(A_0, A_0);
		try
		{
			*A_0 = ref <Module>.??_7system_error@std@@6B@;
		}
		catch
		{
			<Module>.___CxxCallUnwindDtor(ldftn(std._System_error.{dtor}), A_0);
			throw;
		}
		return A_0;
	}

	// Token: 0x06000021 RID: 33 RVA: 0x0000ACF4 File Offset: 0x0000A0F4
	internal unsafe static _System_error* {ctor}(_System_error* A_0, _System_error* A_0)
	{
		*A_0 = ref <Module>.??_7exception@std@@6B@;
		_System_error* ptr = A_0 + 8L;
		initblk(ptr, 0, 16L);
		<Module>.__std_exception_copy(A_0 / sizeof(__std_exception_data) + 8L, ptr);
		try
		{
			*A_0 = ref <Module>.??_7runtime_error@std@@6B@;
		}
		catch
		{
			<Module>.___CxxCallUnwindDtor(ldftn(std.exception.{dtor}), A_0);
			throw;
		}
		try
		{
			*A_0 = ref <Module>.??_7_System_error@std@@6B@;
			cpblk(A_0 + 24L, A_0 + 24L, 16);
		}
		catch
		{
			<Module>.___CxxCallUnwindDtor(ldftn(std.runtime_error.{dtor}), A_0);
			throw;
		}
		return A_0;
	}

	// Token: 0x06000022 RID: 34 RVA: 0x0000AD90 File Offset: 0x0000A190
	internal static ref char PtrToStringChars(string s)
	{
		ref byte ptr = s;
		if ((ref ptr) != null)
		{
			ptr = (ulong)RuntimeHelpers.OffsetToStringData + (ref ptr);
		}
		return ref ptr;
	}

	// Token: 0x06000023 RID: 35 RVA: 0x0000ADAC File Offset: 0x0000A1AC
	internal static ulong GetAnsiStringSize(string _str)
	{
		ref byte ptr = _str;
		if ((ref ptr) != null)
		{
			ptr = (ulong)RuntimeHelpers.OffsetToStringData + (ref ptr);
		}
		ref char char_u0020modopt(IsConst)& = ref ptr;
		ulong num = (ulong)<Module>.WideCharToMultiByte(3U, 1024, ref char_u0020modopt(IsConst)&, _str.Length, null, 0, null, null);
		if (num == 0UL && _str.Length != 0)
		{
			throw new ArgumentException("Conversion from WideChar to MultiByte failed.  Please check the content of the string and/or locale settings.");
		}
		return num + 1UL;
	}

	// Token: 0x06000024 RID: 36 RVA: 0x0000AE00 File Offset: 0x0000A200
	internal unsafe static void WriteAnsiString(sbyte* _buf, ulong _size, string _str)
	{
		ref byte ptr = _str;
		if ((ref ptr) != null)
		{
			ptr = (ulong)RuntimeHelpers.OffsetToStringData + (ref ptr);
		}
		ref char char_u0020modopt(IsConst)& = ref ptr;
		if (_size > 2147483647UL)
		{
			throw new ArgumentOutOfRangeException("Size of string exceeds INT_MAX.");
		}
		ulong num = (ulong)<Module>.WideCharToMultiByte(3U, 1024, ref char_u0020modopt(IsConst)&, _str.Length, _buf, (int)_size, null, null);
		if (num < _size && (num != 0UL || _size == 1UL))
		{
			*(byte*)(num / (ulong)sizeof(sbyte) + _buf) = 0;
			return;
		}
		throw new ArgumentException("Conversion from WideChar to MultiByte failed.  Please check the content of the string and/or locale settings.");
	}

	// Token: 0x06000025 RID: 37 RVA: 0x0000AF30 File Offset: 0x0000A330
	internal unsafe static sbyte* release(char_buffer<char>* A_0)
	{
		sbyte* ptr = *A_0;
		*A_0 = 0L;
		return ptr;
	}

	// Token: 0x06000026 RID: 38 RVA: 0x0000AF44 File Offset: 0x0000A344
	internal unsafe static sbyte* get(char_buffer<char>* A_0)
	{
		return *A_0;
	}

	// Token: 0x06000027 RID: 39 RVA: 0x0000AF54 File Offset: 0x0000A354
	internal unsafe static void {dtor}(char_buffer<char>* A_0)
	{
		<Module>.delete[](*A_0);
	}

	// Token: 0x06000028 RID: 40 RVA: 0x0000AF68 File Offset: 0x0000A368
	internal unsafe static char_buffer<char>* {ctor}(char_buffer<char>* A_0, ulong _size)
	{
		*A_0 = <Module>.new[](_size);
		return A_0;
	}

	// Token: 0x06000029 RID: 41 RVA: 0x0000B7D8 File Offset: 0x0000ABD8
	internal unsafe static void {dtor}(basic_string<char,std::char_traits<char>,std::allocator<char>\u0020>* A_0)
	{
		try
		{
			<Module>.std.basic_string<char,std::char_traits<char>,std::allocator<char>\u0020>._Tidy_deallocate(A_0);
		}
		catch
		{
			<Module>.___CxxCallUnwindDtor(ldftn(std._String_alloc<std::_String_base_types<char,std::allocator<char>\u0020>\u0020>.{dtor}), A_0);
			throw;
		}
	}

	// Token: 0x0600002A RID: 42 RVA: 0x0000B818 File Offset: 0x0000AC18
	internal unsafe static basic_string<char,std::char_traits<char>,std::allocator<char>\u0020>* {ctor}(basic_string<char,std::char_traits<char>,std::allocator<char>\u0020>* A_0, basic_string<char,std::char_traits<char>,std::allocator<char>\u0020>* _Right)
	{
		try
		{
			*(A_0 + 16L) = 0L;
			*(A_0 + 24L) = 0L;
		}
		catch
		{
			<Module>.___CxxCallUnwindDtor(ldftn(std._String_val<std::_Simple_types<char>\u0020>._Bxty.{dtor}), A_0);
			throw;
		}
		try
		{
			<Module>.std.basic_string<char,std::char_traits<char>,std::allocator<char>\u0020>._Construct_lv_contents(A_0, _Right);
		}
		catch
		{
			<Module>.___CxxCallUnwindDtor(ldftn(std._String_alloc<std::_String_base_types<char,std::allocator<char>\u0020>\u0020>.{dtor}), A_0);
			throw;
		}
		return A_0;
	}

	// Token: 0x0600002B RID: 43 RVA: 0x0000B714 File Offset: 0x0000AB14
	internal unsafe static void {dtor}(_String_alloc<std::_String_base_types<char,std::allocator<char>\u0020>\u0020>* A_0)
	{
	}

	// Token: 0x0600002C RID: 44 RVA: 0x0000B630 File Offset: 0x0000AA30
	internal unsafe static void {dtor}(_Compressed_pair<std::allocator<char>,std::_String_val<std::_Simple_types<char>\u0020>,1>* A_0)
	{
	}

	// Token: 0x0600002D RID: 45 RVA: 0x0000B3B0 File Offset: 0x0000A7B0
	internal unsafe static void {dtor}(_String_val<std::_Simple_types<char>\u0020>* A_0)
	{
	}

	// Token: 0x0600002E RID: 46 RVA: 0x0000AF80 File Offset: 0x0000A380
	internal unsafe static void {dtor}(_String_val<std::_Simple_types<char>\u0020>._Bxty* A_0)
	{
	}

	// Token: 0x0600002F RID: 47 RVA: 0x0000AF90 File Offset: 0x0000A390
	[return: MarshalAs(UnmanagedType.U1)]
	internal unsafe static bool _Large_string_engaged(_String_val<std::_Simple_types<char>\u0020>* A_0)
	{
		return (16L <= *(A_0 + 24L)) ? 1 : 0;
	}

	// Token: 0x06000030 RID: 48 RVA: 0x0000B3C0 File Offset: 0x0000A7C0
	internal unsafe static sbyte* _Myptr(_String_val<std::_Simple_types<char>\u0020>* A_0)
	{
		sbyte* ptr = A_0;
		if (((16L <= *(A_0 + 24L)) ? 1 : 0) != 0)
		{
			ptr = *A_0;
		}
		return ptr;
	}

	// Token: 0x06000031 RID: 49 RVA: 0x0000AFB0 File Offset: 0x0000A3B0
	internal unsafe static allocator<char>* select_on_container_copy_construction(allocator<char>* A_0, allocator<char>* _Al)
	{
		return A_0;
	}

	// Token: 0x06000032 RID: 50 RVA: 0x0000B3E8 File Offset: 0x0000A7E8
	internal unsafe static _String_val<std::_Simple_types<char>\u0020>* _Get_data(_String_alloc<std::_String_base_types<char,std::allocator<char>\u0020>\u0020>* A_0)
	{
		return A_0;
	}

	// Token: 0x06000033 RID: 51 RVA: 0x0000B3F8 File Offset: 0x0000A7F8
	internal unsafe static _String_val<std::_Simple_types<char>\u0020>* _Get_data(_String_alloc<std::_String_base_types<char,std::allocator<char>\u0020>\u0020>* A_0)
	{
		return A_0;
	}

	// Token: 0x06000034 RID: 52 RVA: 0x0000B408 File Offset: 0x0000A808
	internal unsafe static allocator<char>* _Getal(_String_alloc<std::_String_base_types<char,std::allocator<char>\u0020>\u0020>* A_0)
	{
		return A_0;
	}

	// Token: 0x06000035 RID: 53 RVA: 0x0000B418 File Offset: 0x0000A818
	internal unsafe static allocator<char>* _Getal(_String_alloc<std::_String_base_types<char,std::allocator<char>\u0020>\u0020>* A_0)
	{
		return A_0;
	}

	// Token: 0x06000036 RID: 54 RVA: 0x0000B428 File Offset: 0x0000A828
	internal unsafe static void _Orphan_all(_String_alloc<std::_String_base_types<char,std::allocator<char>\u0020>\u0020>* A_0)
	{
	}

	// Token: 0x06000037 RID: 55 RVA: 0x0000B640 File Offset: 0x0000AA40
	internal unsafe static void _Tidy_deallocate(basic_string<char,std::char_traits<char>,std::allocator<char>\u0020>* A_0)
	{
		ulong num = (ulong)(*(A_0 + 24L));
		if (((16UL <= num) ? 1 : 0) != 0)
		{
			ulong num2 = num + 1UL;
			void* ptr = *A_0;
			if (num2 >= 4096UL)
			{
				<Module>.std._Adjust_manually_vector_aligned(ref ptr, ref num2);
			}
			<Module>.delete(ptr, num2);
		}
		*(A_0 + 16L) = 0L;
		*(A_0 + 24L) = 15L;
		*A_0 = 0;
	}

	// Token: 0x06000038 RID: 56 RVA: 0x0000B438 File Offset: 0x0000A838
	internal unsafe static ulong max_size(basic_string<char,std::char_traits<char>,std::allocator<char>\u0020>* A_0)
	{
		return long.MaxValue;
	}

	// Token: 0x06000039 RID: 57 RVA: 0x0000AFC0 File Offset: 0x0000A3C0
	internal unsafe static ulong* _Max_value<unsigned\u0020__int64>(ulong* _Left, ulong* _Right)
	{
		return (*_Left < *_Right) ? _Right : _Left;
	}

	// Token: 0x0600003A RID: 58 RVA: 0x0000B724 File Offset: 0x0000AB24
	internal unsafe static void _Construct_lv_contents(basic_string<char,std::char_traits<char>,std::allocator<char>\u0020>* A_0, basic_string<char,std::char_traits<char>,std::allocator<char>\u0020>* _Right)
	{
		ulong num = *(_Right + 16L);
		sbyte* ptr = _Right;
		if (((16L <= *(_Right + 24L)) ? 1 : 0) != 0)
		{
			ptr = *_Right;
		}
		if (num < 16L)
		{
			cpblk(A_0, ptr, 16L);
			*(A_0 + 16L) = num;
			*(A_0 + 24L) = 15L;
		}
		else
		{
			ulong num2 = <Module>.std.basic_string<char,std::char_traits<char>,std::allocator<char>\u0020>.max_size(A_0);
			ulong num3 = num | 15L;
			ulong num4 = num3;
			ulong num5 = *(ref num2 < num3 ? ref num2 : ref num4);
			ulong num6 = num5 + 1L;
			void* ptr2;
			if (num6 >= 4096L)
			{
				ptr2 = <Module>.std._Allocate_manually_vector_aligned<struct\u0020std::_Default_allocate_traits>(num6);
			}
			else if (num6 != null)
			{
				ptr2 = <Module>.@new(num6);
			}
			else
			{
				ptr2 = null;
			}
			*A_0 = ptr2;
			cpblk(ptr2, ptr, num + 1L);
			*(A_0 + 16L) = num;
			*(A_0 + 24L) = num5;
		}
	}

	// Token: 0x0600003B RID: 59 RVA: 0x0000B698 File Offset: 0x0000AA98
	internal unsafe static sbyte* allocate(allocator<char>* A_0, ulong _Count)
	{
		void* ptr;
		if (_Count >= 4096L)
		{
			ptr = <Module>.std._Allocate_manually_vector_aligned<struct\u0020std::_Default_allocate_traits>(_Count);
		}
		else if (_Count != null)
		{
			ptr = <Module>.@new(_Count);
		}
		else
		{
			ptr = null;
		}
		return ptr;
	}

	// Token: 0x0600003C RID: 60 RVA: 0x0000B450 File Offset: 0x0000A850
	internal unsafe static void deallocate(allocator<char>* A_0, sbyte* _Ptr, ulong _Count)
	{
		ulong num = _Count;
		void* ptr = _Ptr;
		if (_Count >= 4096L)
		{
			<Module>.std._Adjust_manually_vector_aligned(ref ptr, ref num);
		}
		<Module>.delete(ptr, num);
	}

	// Token: 0x0600003D RID: 61 RVA: 0x0000AFD8 File Offset: 0x0000A3D8
	internal unsafe static _String_val<std::_Simple_types<char>\u0020>* _Get_second(_Compressed_pair<std::allocator<char>,std::_String_val<std::_Simple_types<char>\u0020>,1>* A_0)
	{
		return A_0;
	}

	// Token: 0x0600003E RID: 62 RVA: 0x0000AFE8 File Offset: 0x0000A3E8
	internal unsafe static _String_val<std::_Simple_types<char>\u0020>* _Get_second(_Compressed_pair<std::allocator<char>,std::_String_val<std::_Simple_types<char>\u0020>,1>* A_0)
	{
		return A_0;
	}

	// Token: 0x0600003F RID: 63 RVA: 0x0000AFF8 File Offset: 0x0000A3F8
	internal unsafe static allocator<char>* _Get_first(_Compressed_pair<std::allocator<char>,std::_String_val<std::_Simple_types<char>\u0020>,1>* A_0)
	{
		return A_0;
	}

	// Token: 0x06000040 RID: 64 RVA: 0x0000B008 File Offset: 0x0000A408
	internal unsafe static allocator<char>* _Get_first(_Compressed_pair<std::allocator<char>,std::_String_val<std::_Simple_types<char>\u0020>,1>* A_0)
	{
		return A_0;
	}

	// Token: 0x06000041 RID: 65 RVA: 0x0000B018 File Offset: 0x0000A418
	internal unsafe static ulong max_size(allocator<char>* A_0)
	{
		return -1L;
	}

	// Token: 0x06000042 RID: 66 RVA: 0x0000B030 File Offset: 0x0000A430
	internal unsafe static ulong* _Min_value<unsigned\u0020__int64>(ulong* _Left, ulong* _Right)
	{
		return (*_Right < *_Left) ? _Right : _Left;
	}

	// Token: 0x06000043 RID: 67 RVA: 0x0000B048 File Offset: 0x0000A448
	internal unsafe static sbyte* _Unfancy<char>(sbyte* _Ptr)
	{
		return _Ptr;
	}

	// Token: 0x06000044 RID: 68 RVA: 0x0000B6C8 File Offset: 0x0000AAC8
	internal unsafe static _String_alloc<std::_String_base_types<char,std::allocator<char>\u0020>\u0020>* {ctor}<class\u0020std::allocator<char>,void>(_String_alloc<std::_String_base_types<char,std::allocator<char>\u0020>\u0020>* A_0, allocator<char>* _Al)
	{
		try
		{
			*(A_0 + 16L) = 0L;
			*(A_0 + 24L) = 0L;
		}
		catch
		{
			<Module>.___CxxCallUnwindDtor(ldftn(std._String_val<std::_Simple_types<char>\u0020>._Bxty.{dtor}), A_0);
			throw;
		}
		return A_0;
	}

	// Token: 0x06000045 RID: 69 RVA: 0x0000B058 File Offset: 0x0000A458
	internal unsafe static sbyte** addressof<char\u0020*>(sbyte** _Val)
	{
		return _Val;
	}

	// Token: 0x06000046 RID: 70 RVA: 0x0000B068 File Offset: 0x0000A468
	internal unsafe static void destroy<char\u0020*>(allocator<char>* __unnamed000, sbyte** _Ptr)
	{
	}

	// Token: 0x06000047 RID: 71 RVA: 0x0000B47C File Offset: 0x0000A87C
	internal unsafe static void construct<char\u0020*,char\u0020*\u0020const\u0020&>(allocator<char>* __unnamed000, sbyte** _Ptr, sbyte** <_Args_0>)
	{
		*_Ptr = *<_Args_0>;
	}

	// Token: 0x06000048 RID: 72 RVA: 0x0000B490 File Offset: 0x0000A890
	internal unsafe static void* _Allocate<16,struct\u0020std::_Default_allocate_traits,0>(ulong _Bytes)
	{
		if (_Bytes >= 4096L)
		{
			return <Module>.std._Allocate_manually_vector_aligned<struct\u0020std::_Default_allocate_traits>(_Bytes);
		}
		if (_Bytes != null)
		{
			return <Module>.@new(_Bytes);
		}
		return 0L;
	}

	// Token: 0x06000049 RID: 73 RVA: 0x0000B078 File Offset: 0x0000A478
	internal unsafe static void _Deallocate<16,0>(void* _Ptr, ulong _Bytes)
	{
		if (_Bytes >= 4096UL)
		{
			<Module>.std._Adjust_manually_vector_aligned(ref _Ptr, ref _Bytes);
		}
		<Module>.delete(_Ptr, _Bytes);
	}

	// Token: 0x0600004A RID: 74 RVA: 0x0000B0A0 File Offset: 0x0000A4A0
	internal unsafe static bad_cast* {ctor}(bad_cast* A_0, bad_cast* A_0)
	{
		*A_0 = ref <Module>.??_7exception@std@@6B@;
		bad_cast* ptr = A_0 + 8L;
		initblk(ptr, 0, 16L);
		<Module>.__std_exception_copy(A_0 / sizeof(__std_exception_data) + 8L, ptr);
		try
		{
			*A_0 = ref <Module>.??_7bad_cast@std@@6B@;
		}
		catch
		{
			<Module>.___CxxCallUnwindDtor(ldftn(std.exception.{dtor}), A_0);
			throw;
		}
		return A_0;
	}

	// Token: 0x0600004B RID: 75 RVA: 0x0000B4BC File Offset: 0x0000A8BC
	internal unsafe static _String_val<std::_Simple_types<char>\u0020>* {ctor}(_String_val<std::_Simple_types<char>\u0020>* A_0)
	{
		try
		{
			*(A_0 + 16L) = 0L;
			*(A_0 + 24L) = 0L;
		}
		catch
		{
			<Module>.___CxxCallUnwindDtor(ldftn(std._String_val<std::_Simple_types<char>\u0020>._Bxty.{dtor}), A_0);
			throw;
		}
		return A_0;
	}

	// Token: 0x0600004C RID: 76 RVA: 0x0000B100 File Offset: 0x0000A500
	internal unsafe static _String_val<std::_Simple_types<char>\u0020>._Bxty* {ctor}(_String_val<std::_Simple_types<char>\u0020>._Bxty* A_0)
	{
		return A_0;
	}

	// Token: 0x0600004D RID: 77 RVA: 0x0000B110 File Offset: 0x0000A510
	internal unsafe static allocator<char>* forward<class\u0020std::allocator<char>\u0020>(allocator<char>* _Arg)
	{
		return _Arg;
	}

	// Token: 0x0600004E RID: 78 RVA: 0x0000B508 File Offset: 0x0000A908
	internal unsafe static _Compressed_pair<std::allocator<char>,std::_String_val<std::_Simple_types<char>\u0020>,1>* {ctor}<class\u0020std::allocator<char>\u0020>(_Compressed_pair<std::allocator<char>,std::_String_val<std::_Simple_types<char>\u0020>,1>* A_0, _One_then_variadic_args_t __unnamed000, allocator<char>* _Val1)
	{
		try
		{
			*(A_0 + 16L) = 0L;
			*(A_0 + 24L) = 0L;
		}
		catch
		{
			<Module>.___CxxCallUnwindDtor(ldftn(std._String_val<std::_Simple_types<char>\u0020>._Bxty.{dtor}), A_0);
			throw;
		}
		return A_0;
	}

	// Token: 0x0600004F RID: 79 RVA: 0x0000B120 File Offset: 0x0000A520
	internal unsafe static sbyte** forward<char\u0020*\u0020const\u0020&>(sbyte** _Arg)
	{
		return _Arg;
	}

	// Token: 0x06000050 RID: 80 RVA: 0x0000B130 File Offset: 0x0000A530
	internal unsafe static void* _Allocate_manually_vector_aligned<struct\u0020std::_Default_allocate_traits>(ulong _Bytes)
	{
		ulong num = _Bytes + 39L;
		num = ((num <= _Bytes) ? ulong.MaxValue : num);
		ulong num2 = <Module>.@new(num);
		if (num2 != null)
		{
			void* ptr = (num2 + 39L) & -32L;
			*(ptr - 8L) = num2;
			return ptr;
		}
		<Module>._invalid_parameter_noinfo_noreturn();
		return 0L;
	}

	// Token: 0x06000051 RID: 81 RVA: 0x0000DC00 File Offset: 0x0000D000
	internal static void <CrtImplementationDetails>.ThrowNestedModuleLoadException(Exception innerException, Exception nestedException)
	{
		throw new ModuleLoadExceptionHandlerException("A nested exception occurred after the primary exception that caused the C++ module to fail to load.\n", innerException, nestedException);
	}

	// Token: 0x06000052 RID: 82 RVA: 0x0000D5AC File Offset: 0x0000C9AC
	internal static void <CrtImplementationDetails>.ThrowModuleLoadException(string errorMessage)
	{
		throw new ModuleLoadException(errorMessage);
	}

	// Token: 0x06000053 RID: 83 RVA: 0x0000D5C0 File Offset: 0x0000C9C0
	internal static void <CrtImplementationDetails>.ThrowModuleLoadException(string errorMessage, Exception innerException)
	{
		throw new ModuleLoadException(errorMessage, innerException);
	}

	// Token: 0x06000054 RID: 84 RVA: 0x0000D6DC File Offset: 0x0000CADC
	internal static void <CrtImplementationDetails>.RegisterModuleUninitializer(EventHandler handler)
	{
		ModuleUninitializer._ModuleUninitializer.AddHandler(handler);
	}

	// Token: 0x06000055 RID: 85 RVA: 0x0000D6F4 File Offset: 0x0000CAF4
	[SecuritySafeCritical]
	internal unsafe static Guid <CrtImplementationDetails>.FromGUID(_GUID* guid)
	{
		Guid guid2 = new Guid((uint)(*guid), *(guid + 4L), *(guid + 6L), *(guid + 8L), *(guid + 9L), *(guid + 10L), *(guid + 11L), *(guid + 12L), *(guid + 13L), *(guid + 14L), *(guid + 15L));
		return guid2;
	}

	// Token: 0x06000056 RID: 86 RVA: 0x0000D744 File Offset: 0x0000CB44
	[SecurityCritical]
	internal unsafe static int __get_default_appdomain(IUnknown** ppUnk)
	{
		ICorRuntimeHost* ptr = null;
		int num;
		try
		{
			Guid guid = <Module>.<CrtImplementationDetails>.FromGUID(ref <Module>._GUID_cb2f6722_ab3a_11d2_9c40_00c04fa30a3e);
			ptr = (ICorRuntimeHost*)RuntimeEnvironment.GetRuntimeInterfaceAsIntPtr(<Module>.<CrtImplementationDetails>.FromGUID(ref <Module>._GUID_cb2f6723_ab3a_11d2_9c40_00c04fa30a3e), guid).ToPointer();
			goto IL_36;
		}
		catch (Exception ex)
		{
			num = Marshal.GetHRForException(ex);
		}
		if (num < 0)
		{
			return num;
		}
		IL_36:
		long num2 = *(*(long*)ptr + 104L);
		num = calli(System.Int32 modopt(System.Runtime.CompilerServices.IsLong) modopt(System.Runtime.CompilerServices.CallConvCdecl)(System.IntPtr,IUnknown**), ptr, ppUnk, num2);
		ICorRuntimeHost* ptr2 = ptr;
		uint num3 = calli(System.UInt32 modopt(System.Runtime.CompilerServices.IsLong) modopt(System.Runtime.CompilerServices.CallConvCdecl)(System.IntPtr), ptr2, *(*(long*)ptr2 + 16L));
		return num;
	}

	// Token: 0x06000057 RID: 87 RVA: 0x0000D7C4 File Offset: 0x0000CBC4
	internal unsafe static void __release_appdomain(IUnknown* ppUnk)
	{
		uint num = calli(System.UInt32 modopt(System.Runtime.CompilerServices.IsLong) modopt(System.Runtime.CompilerServices.CallConvCdecl)(System.IntPtr), ppUnk, *(*(long*)ppUnk + 16L));
	}

	// Token: 0x06000058 RID: 88 RVA: 0x0000D7E0 File Offset: 0x0000CBE0
	[SecurityCritical]
	internal unsafe static AppDomain <CrtImplementationDetails>.GetDefaultDomain()
	{
		IUnknown* ptr = null;
		int num = <Module>.__get_default_appdomain(&ptr);
		if (num >= 0)
		{
			try
			{
				IntPtr intPtr = new IntPtr((void*)ptr);
				return (AppDomain)Marshal.GetObjectForIUnknown(intPtr);
			}
			finally
			{
				<Module>.__release_appdomain(ptr);
			}
		}
		Marshal.ThrowExceptionForHR(num);
		return null;
	}

	// Token: 0x06000059 RID: 89 RVA: 0x0000D840 File Offset: 0x0000CC40
	[SecurityCritical]
	internal unsafe static void <CrtImplementationDetails>.DoCallBackInDefaultDomain(method function, void* cookie)
	{
		Guid guid = <Module>.<CrtImplementationDetails>.FromGUID(ref <Module>._GUID_90f1a06c_7712_4762_86b5_7a5eba6bdb02);
		ICLRRuntimeHost* ptr = (ICLRRuntimeHost*)RuntimeEnvironment.GetRuntimeInterfaceAsIntPtr(<Module>.<CrtImplementationDetails>.FromGUID(ref <Module>._GUID_90f1a06e_7712_4762_86b5_7a5eba6bdb02), guid).ToPointer();
		try
		{
			AppDomain appDomain = <Module>.<CrtImplementationDetails>.GetDefaultDomain();
			long num = *(*(long*)ptr + 64L);
			int num2 = calli(System.Int32 modopt(System.Runtime.CompilerServices.IsLong) modopt(System.Runtime.CompilerServices.CallConvCdecl)(System.IntPtr,System.UInt32 modopt(System.Runtime.CompilerServices.IsLong),System.Int32 modopt(System.Runtime.CompilerServices.IsLong) modopt(System.Runtime.CompilerServices.CallConvCdecl) (System.Void*),System.Void*), ptr, appDomain.Id, function, cookie, num);
			if (num2 < 0)
			{
				Marshal.ThrowExceptionForHR(num2);
			}
		}
		finally
		{
			ICLRRuntimeHost* ptr2 = ptr;
			uint num3 = calli(System.UInt32 modopt(System.Runtime.CompilerServices.IsLong) modopt(System.Runtime.CompilerServices.CallConvCdecl)(System.IntPtr), ptr2, *(*(long*)ptr2 + 16L));
		}
	}

	// Token: 0x0600005A RID: 90 RVA: 0x0000D8F8 File Offset: 0x0000CCF8
	[return: MarshalAs(UnmanagedType.U1)]
	internal static bool __scrt_is_safe_for_managed_code()
	{
		return (<Module>.__scrt_native_dllmain_reason <= 1U) ? 0 : 1;
	}

	// Token: 0x0600005B RID: 91 RVA: 0x0000D930 File Offset: 0x0000CD30
	[SecuritySafeCritical]
	internal unsafe static int <CrtImplementationDetails>.DefaultDomain.DoNothing(void* cookie)
	{
		GC.KeepAlive(int.MaxValue);
		return 0;
	}

	// Token: 0x0600005C RID: 92 RVA: 0x0000D950 File Offset: 0x0000CD50
	[SecuritySafeCritical]
	[return: MarshalAs(UnmanagedType.U1)]
	internal unsafe static bool <CrtImplementationDetails>.DefaultDomain.HasPerProcess()
	{
		if (<Module>.?hasPerProcess@DefaultDomain@<CrtImplementationDetails>@@0W4TriBool@2@A == (TriBool)2)
		{
			void** ptr = (void**)(&<Module>.__xc_mp_a);
			if ((ref <Module>.__xc_mp_a) < (ref <Module>.__xc_mp_z))
			{
				while (*(long*)ptr == 0L)
				{
					ptr += 8L / (long)sizeof(void*);
					if (ptr >= (void**)(&<Module>.__xc_mp_z))
					{
						goto IL_35;
					}
				}
				<Module>.?hasPerProcess@DefaultDomain@<CrtImplementationDetails>@@0W4TriBool@2@A = (TriBool)(-1);
				return 1;
			}
			IL_35:
			<Module>.?hasPerProcess@DefaultDomain@<CrtImplementationDetails>@@0W4TriBool@2@A = (TriBool)0;
			return 0;
		}
		return (<Module>.?hasPerProcess@DefaultDomain@<CrtImplementationDetails>@@0W4TriBool@2@A == (TriBool)(-1)) ? 1 : 0;
	}

	// Token: 0x0600005D RID: 93 RVA: 0x0000D9A4 File Offset: 0x0000CDA4
	[SecuritySafeCritical]
	[return: MarshalAs(UnmanagedType.U1)]
	internal unsafe static bool <CrtImplementationDetails>.DefaultDomain.HasNative()
	{
		if (<Module>.?hasNative@DefaultDomain@<CrtImplementationDetails>@@0W4TriBool@2@A == (TriBool)2)
		{
			void** ptr = (void**)(&<Module>.__xi_a);
			if ((ref <Module>.__xi_a) < (ref <Module>.__xi_z))
			{
				while (*(long*)ptr == 0L)
				{
					ptr += 8L / (long)sizeof(void*);
					if (ptr >= (void**)(&<Module>.__xi_z))
					{
						goto IL_35;
					}
				}
				<Module>.?hasNative@DefaultDomain@<CrtImplementationDetails>@@0W4TriBool@2@A = (TriBool)(-1);
				return 1;
			}
			IL_35:
			void** ptr2 = (void**)(&<Module>.__xc_a);
			if ((ref <Module>.__xc_a) < (ref <Module>.__xc_z))
			{
				while (*(long*)ptr2 == 0L)
				{
					ptr2 += 8L / (long)sizeof(void*);
					if (ptr2 >= (void**)(&<Module>.__xc_z))
					{
						goto IL_62;
					}
				}
				<Module>.?hasNative@DefaultDomain@<CrtImplementationDetails>@@0W4TriBool@2@A = (TriBool)(-1);
				return 1;
			}
			IL_62:
			<Module>.?hasNative@DefaultDomain@<CrtImplementationDetails>@@0W4TriBool@2@A = (TriBool)0;
			return 0;
		}
		return (<Module>.?hasNative@DefaultDomain@<CrtImplementationDetails>@@0W4TriBool@2@A == (TriBool)(-1)) ? 1 : 0;
	}

	// Token: 0x0600005E RID: 94 RVA: 0x0000DA24 File Offset: 0x0000CE24
	[SecuritySafeCritical]
	[return: MarshalAs(UnmanagedType.U1)]
	internal static bool <CrtImplementationDetails>.DefaultDomain.NeedsInitialization()
	{
		int num;
		if ((<Module>.<CrtImplementationDetails>.DefaultDomain.HasPerProcess() != null && !<Module>.?InitializedPerProcess@DefaultDomain@<CrtImplementationDetails>@@2_NA) || (<Module>.<CrtImplementationDetails>.DefaultDomain.HasNative() != null && !<Module>.?InitializedNative@DefaultDomain@<CrtImplementationDetails>@@2_NA && <Module>.__scrt_current_native_startup_state == (__scrt_native_startup_state)0))
		{
			num = 1;
		}
		else
		{
			num = 0;
		}
		return (byte)num;
	}

	// Token: 0x0600005F RID: 95 RVA: 0x0000DA5C File Offset: 0x0000CE5C
	[return: MarshalAs(UnmanagedType.U1)]
	internal static bool <CrtImplementationDetails>.DefaultDomain.NeedsUninitialization()
	{
		return <Module>.?Entered@DefaultDomain@<CrtImplementationDetails>@@2_NA;
	}

	// Token: 0x06000060 RID: 96 RVA: 0x0000DA70 File Offset: 0x0000CE70
	[SecurityCritical]
	internal static void <CrtImplementationDetails>.DefaultDomain.Initialize()
	{
		<Module>.<CrtImplementationDetails>.DoCallBackInDefaultDomain(<Module>.__unep@?DoNothing@DefaultDomain@<CrtImplementationDetails>@@$$FCAJPEAX@Z, null);
	}

	// Token: 0x06000061 RID: 97 RVA: 0x000010F8 File Offset: 0x000004F8
	internal static void ??__E?Initialized@CurrentDomain@<CrtImplementationDetails>@@$$Q2HA@@YMXXZ()
	{
		<Module>.?Initialized@CurrentDomain@<CrtImplementationDetails>@@$$Q2HA = 0;
	}

	// Token: 0x06000062 RID: 98 RVA: 0x0000110C File Offset: 0x0000050C
	internal static void ??__E?Uninitialized@CurrentDomain@<CrtImplementationDetails>@@$$Q2HA@@YMXXZ()
	{
		<Module>.?Uninitialized@CurrentDomain@<CrtImplementationDetails>@@$$Q2HA = 0;
	}

	// Token: 0x06000063 RID: 99 RVA: 0x00001120 File Offset: 0x00000520
	internal static void ??__E?IsDefaultDomain@CurrentDomain@<CrtImplementationDetails>@@$$Q2_NA@@YMXXZ()
	{
		<Module>.?IsDefaultDomain@CurrentDomain@<CrtImplementationDetails>@@$$Q2_NA = false;
	}

	// Token: 0x06000064 RID: 100 RVA: 0x00001134 File Offset: 0x00000534
	internal static void ??__E?InitializedVtables@CurrentDomain@<CrtImplementationDetails>@@$$Q2W4Progress@2@A@@YMXXZ()
	{
		<Module>.?InitializedVtables@CurrentDomain@<CrtImplementationDetails>@@$$Q2W4Progress@2@A = (Progress)0;
	}

	// Token: 0x06000065 RID: 101 RVA: 0x00001148 File Offset: 0x00000548
	internal static void ??__E?InitializedNative@CurrentDomain@<CrtImplementationDetails>@@$$Q2W4Progress@2@A@@YMXXZ()
	{
		<Module>.?InitializedNative@CurrentDomain@<CrtImplementationDetails>@@$$Q2W4Progress@2@A = (Progress)0;
	}

	// Token: 0x06000066 RID: 102 RVA: 0x0000115C File Offset: 0x0000055C
	internal static void ??__E?InitializedPerProcess@CurrentDomain@<CrtImplementationDetails>@@$$Q2W4Progress@2@A@@YMXXZ()
	{
		<Module>.?InitializedPerProcess@CurrentDomain@<CrtImplementationDetails>@@$$Q2W4Progress@2@A = (Progress)0;
	}

	// Token: 0x06000067 RID: 103 RVA: 0x00001170 File Offset: 0x00000570
	internal static void ??__E?InitializedPerAppDomain@CurrentDomain@<CrtImplementationDetails>@@$$Q2W4Progress@2@A@@YMXXZ()
	{
		<Module>.?InitializedPerAppDomain@CurrentDomain@<CrtImplementationDetails>@@$$Q2W4Progress@2@A = (Progress)0;
	}

	// Token: 0x06000068 RID: 104 RVA: 0x0000DC54 File Offset: 0x0000D054
	[SecuritySafeCritical]
	[DebuggerStepThrough]
	internal unsafe static void <CrtImplementationDetails>.LanguageSupport.InitializeVtables(LanguageSupport* A_0)
	{
		<Module>.gcroot<System::String\u0020^>.=(A_0, "The C++ module failed to load during vtable initialization.\n");
		<Module>.?InitializedVtables@CurrentDomain@<CrtImplementationDetails>@@$$Q2W4Progress@2@A = (Progress)1;
		<Module>._initterm_m((method*)(&<Module>.__xi_vt_a), (method*)(&<Module>.__xi_vt_z));
		<Module>.?InitializedVtables@CurrentDomain@<CrtImplementationDetails>@@$$Q2W4Progress@2@A = (Progress)2;
	}

	// Token: 0x06000069 RID: 105 RVA: 0x0000DC88 File Offset: 0x0000D088
	[SecuritySafeCritical]
	internal unsafe static void <CrtImplementationDetails>.LanguageSupport.InitializeDefaultAppDomain(LanguageSupport* A_0)
	{
		<Module>.gcroot<System::String\u0020^>.=(A_0, "The C++ module failed to load while attempting to initialize the default appdomain.\n");
		<Module>.<CrtImplementationDetails>.DefaultDomain.Initialize();
	}

	// Token: 0x0600006A RID: 106 RVA: 0x0000DCA8 File Offset: 0x0000D0A8
	[SecuritySafeCritical]
	[DebuggerStepThrough]
	internal unsafe static void <CrtImplementationDetails>.LanguageSupport.InitializeNative(LanguageSupport* A_0)
	{
		<Module>.gcroot<System::String\u0020^>.=(A_0, "The C++ module failed to load during native initialization.\n");
		<Module>.__security_init_cookie();
		<Module>.?InitializedNative@DefaultDomain@<CrtImplementationDetails>@@2_NA = true;
		if (<Module>.__scrt_is_safe_for_managed_code() == null)
		{
			<Module>.abort();
		}
		if (<Module>.__scrt_current_native_startup_state == (__scrt_native_startup_state)1)
		{
			<Module>.abort();
		}
		if (<Module>.__scrt_current_native_startup_state == (__scrt_native_startup_state)0)
		{
			<Module>.?InitializedNative@CurrentDomain@<CrtImplementationDetails>@@$$Q2W4Progress@2@A = (Progress)1;
			<Module>.__scrt_current_native_startup_state = (__scrt_native_startup_state)1;
			if (<Module>._initterm_e((method*)(&<Module>.__xi_a), (method*)(&<Module>.__xi_z)) != 0)
			{
				<Module>.<CrtImplementationDetails>.ThrowModuleLoadException(<Module>.gcroot<System::String\u0020^>..PE$AAVString@System@@(A_0));
			}
			<Module>._initterm((method*)(&<Module>.__xc_a), (method*)(&<Module>.__xc_z));
			<Module>.__scrt_current_native_startup_state = (__scrt_native_startup_state)2;
			<Module>.?InitializedNativeFromCCTOR@DefaultDomain@<CrtImplementationDetails>@@2_NA = true;
			<Module>.?InitializedNative@CurrentDomain@<CrtImplementationDetails>@@$$Q2W4Progress@2@A = (Progress)2;
		}
	}

	// Token: 0x0600006B RID: 107 RVA: 0x0000DD38 File Offset: 0x0000D138
	[SecurityCritical]
	[DebuggerStepThrough]
	internal unsafe static void <CrtImplementationDetails>.LanguageSupport.InitializePerProcess(LanguageSupport* A_0)
	{
		<Module>.gcroot<System::String\u0020^>.=(A_0, "The C++ module failed to load during process initialization.\n");
		<Module>.?InitializedPerProcess@CurrentDomain@<CrtImplementationDetails>@@$$Q2W4Progress@2@A = (Progress)1;
		<Module>._initatexit_m();
		<Module>._initterm_m((method*)(&<Module>.__xc_mp_a), (method*)(&<Module>.__xc_mp_z));
		<Module>.?InitializedPerProcess@CurrentDomain@<CrtImplementationDetails>@@$$Q2W4Progress@2@A = (Progress)2;
		<Module>.?InitializedPerProcess@DefaultDomain@<CrtImplementationDetails>@@2_NA = true;
	}

	// Token: 0x0600006C RID: 108 RVA: 0x0000DD78 File Offset: 0x0000D178
	[SecurityCritical]
	[DebuggerStepThrough]
	internal unsafe static void <CrtImplementationDetails>.LanguageSupport.InitializePerAppDomain(LanguageSupport* A_0)
	{
		<Module>.gcroot<System::String\u0020^>.=(A_0, "The C++ module failed to load during appdomain initialization.\n");
		<Module>.?InitializedPerAppDomain@CurrentDomain@<CrtImplementationDetails>@@$$Q2W4Progress@2@A = (Progress)1;
		<Module>._initatexit_app_domain();
		<Module>._initterm_m((method*)(&<Module>.__xc_ma_a), (method*)(&<Module>.__xc_ma_z));
		<Module>.?InitializedPerAppDomain@CurrentDomain@<CrtImplementationDetails>@@$$Q2W4Progress@2@A = (Progress)2;
	}

	// Token: 0x0600006D RID: 109 RVA: 0x0000DDB4 File Offset: 0x0000D1B4
	[SecurityCritical]
	[DebuggerStepThrough]
	internal unsafe static void <CrtImplementationDetails>.LanguageSupport.InitializeUninitializer(LanguageSupport* A_0)
	{
		<Module>.gcroot<System::String\u0020^>.=(A_0, "The C++ module failed to load during registration for the unload events.\n");
		<Module>.<CrtImplementationDetails>.RegisterModuleUninitializer(new EventHandler(<Module>.<CrtImplementationDetails>.LanguageSupport.DomainUnload));
	}

	// Token: 0x0600006E RID: 110 RVA: 0x0000DDE0 File Offset: 0x0000D1E0
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	[SecurityCritical]
	[DebuggerStepThrough]
	internal unsafe static void <CrtImplementationDetails>.LanguageSupport._Initialize(LanguageSupport* A_0)
	{
		<Module>.?IsDefaultDomain@CurrentDomain@<CrtImplementationDetails>@@$$Q2_NA = AppDomain.CurrentDomain.IsDefaultAppDomain();
		<Module>.?Entered@DefaultDomain@<CrtImplementationDetails>@@2_NA = <Module>.?IsDefaultDomain@CurrentDomain@<CrtImplementationDetails>@@$$Q2_NA || <Module>.?Entered@DefaultDomain@<CrtImplementationDetails>@@2_NA;
		void* ptr = <Module>._getFiberPtrId();
		int num = 0;
		int num2 = 0;
		int num3 = 0;
		RuntimeHelpers.PrepareConstrainedRegions();
		try
		{
			while (num2 == 0)
			{
				try
				{
				}
				finally
				{
					void* ptr2 = Interlocked.CompareExchange(ref <Module>.__scrt_native_startup_lock, ptr, 0L);
					if (ptr2 == null)
					{
						num2 = 1;
					}
					else if (ptr2 == ptr)
					{
						num = 1;
						num2 = 1;
					}
				}
				if (num2 == 0)
				{
					<Module>.Sleep(1000);
				}
			}
			<Module>.<CrtImplementationDetails>.LanguageSupport.InitializeVtables(A_0);
			if (<Module>.?IsDefaultDomain@CurrentDomain@<CrtImplementationDetails>@@$$Q2_NA)
			{
				<Module>.<CrtImplementationDetails>.LanguageSupport.InitializeNative(A_0);
				<Module>.<CrtImplementationDetails>.LanguageSupport.InitializePerProcess(A_0);
			}
			else
			{
				num3 = ((<Module>.<CrtImplementationDetails>.DefaultDomain.NeedsInitialization() != 0) ? 1 : num3);
			}
		}
		finally
		{
			if (num == 0)
			{
				Interlocked.Exchange(ref <Module>.__scrt_native_startup_lock, 0L);
			}
		}
		if (num3 != 0)
		{
			<Module>.<CrtImplementationDetails>.LanguageSupport.InitializeDefaultAppDomain(A_0);
		}
		<Module>.<CrtImplementationDetails>.LanguageSupport.InitializePerAppDomain(A_0);
		<Module>.?Initialized@CurrentDomain@<CrtImplementationDetails>@@$$Q2HA = 1;
		<Module>.<CrtImplementationDetails>.LanguageSupport.InitializeUninitializer(A_0);
	}

	// Token: 0x0600006F RID: 111 RVA: 0x0000DA8C File Offset: 0x0000CE8C
	[SecurityCritical]
	internal static void <CrtImplementationDetails>.LanguageSupport.UninitializeAppDomain()
	{
		<Module>._app_exit_callback();
	}

	// Token: 0x06000070 RID: 112 RVA: 0x0000DAA0 File Offset: 0x0000CEA0
	[SecurityCritical]
	internal unsafe static int <CrtImplementationDetails>.LanguageSupport._UninitializeDefaultDomain(void* cookie)
	{
		<Module>._exit_callback();
		<Module>.?InitializedPerProcess@DefaultDomain@<CrtImplementationDetails>@@2_NA = false;
		if (<Module>.?InitializedNativeFromCCTOR@DefaultDomain@<CrtImplementationDetails>@@2_NA)
		{
			<Module>._cexit();
			<Module>.__scrt_current_native_startup_state = (__scrt_native_startup_state)0;
			<Module>.?InitializedNativeFromCCTOR@DefaultDomain@<CrtImplementationDetails>@@2_NA = false;
		}
		<Module>.?InitializedNative@DefaultDomain@<CrtImplementationDetails>@@2_NA = false;
		return 0;
	}

	// Token: 0x06000071 RID: 113 RVA: 0x0000DAD8 File Offset: 0x0000CED8
	[SecurityCritical]
	internal static void <CrtImplementationDetails>.LanguageSupport.UninitializeDefaultDomain()
	{
		if (<Module>.<CrtImplementationDetails>.DefaultDomain.NeedsUninitialization() != null)
		{
			if (AppDomain.CurrentDomain.IsDefaultAppDomain())
			{
				<Module>.<CrtImplementationDetails>.LanguageSupport._UninitializeDefaultDomain(null);
			}
			else
			{
				<Module>.<CrtImplementationDetails>.DoCallBackInDefaultDomain(<Module>.__unep@?_UninitializeDefaultDomain@LanguageSupport@<CrtImplementationDetails>@@$$FCAJPEAX@Z, null);
			}
		}
	}

	// Token: 0x06000072 RID: 114 RVA: 0x0000DB10 File Offset: 0x0000CF10
	[SecurityCritical]
	[PrePrepareMethod]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	internal static void <CrtImplementationDetails>.LanguageSupport.DomainUnload(object A_0, EventArgs A_1)
	{
		if (<Module>.?Initialized@CurrentDomain@<CrtImplementationDetails>@@$$Q2HA != 0 && Interlocked.Exchange(ref <Module>.?Uninitialized@CurrentDomain@<CrtImplementationDetails>@@$$Q2HA, 1) == 0)
		{
			byte b = ((Interlocked.Decrement(ref <Module>.?Count@AllDomains@<CrtImplementationDetails>@@2HA) == 0) ? 1 : 0);
			<Module>.<CrtImplementationDetails>.LanguageSupport.UninitializeAppDomain();
			if (b != 0)
			{
				<Module>.<CrtImplementationDetails>.LanguageSupport.UninitializeDefaultDomain();
			}
		}
	}

	// Token: 0x06000073 RID: 115 RVA: 0x0000DEE4 File Offset: 0x0000D2E4
	[DebuggerStepThrough]
	[SecurityCritical]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	internal unsafe static void <CrtImplementationDetails>.LanguageSupport.Cleanup(LanguageSupport* A_0, Exception innerException)
	{
		try
		{
			bool flag = ((Interlocked.Decrement(ref <Module>.?Count@AllDomains@<CrtImplementationDetails>@@2HA) == 0) ? 1 : 0) != 0;
			<Module>.<CrtImplementationDetails>.LanguageSupport.UninitializeAppDomain();
			if (flag)
			{
				<Module>.<CrtImplementationDetails>.LanguageSupport.UninitializeDefaultDomain();
			}
		}
		catch (Exception ex)
		{
			<Module>.<CrtImplementationDetails>.ThrowNestedModuleLoadException(innerException, ex);
		}
		catch (object obj)
		{
			<Module>.<CrtImplementationDetails>.ThrowNestedModuleLoadException(innerException, null);
		}
	}

	// Token: 0x06000074 RID: 116 RVA: 0x0000DF58 File Offset: 0x0000D358
	[SecurityCritical]
	internal unsafe static LanguageSupport* <CrtImplementationDetails>.LanguageSupport.{ctor}(LanguageSupport* A_0)
	{
		<Module>.gcroot<System::String\u0020^>.{ctor}(A_0);
		return A_0;
	}

	// Token: 0x06000075 RID: 117 RVA: 0x0000DF70 File Offset: 0x0000D370
	[SecurityCritical]
	internal unsafe static void <CrtImplementationDetails>.LanguageSupport.{dtor}(LanguageSupport* A_0)
	{
		<Module>.gcroot<System::String\u0020^>.{dtor}(A_0);
	}

	// Token: 0x06000076 RID: 118 RVA: 0x0000DF84 File Offset: 0x0000D384
	[DebuggerStepThrough]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	[SecurityCritical]
	internal unsafe static void <CrtImplementationDetails>.LanguageSupport.Initialize(LanguageSupport* A_0)
	{
		bool flag = false;
		RuntimeHelpers.PrepareConstrainedRegions();
		try
		{
			<Module>.gcroot<System::String\u0020^>.=(A_0, "The C++ module failed to load.\n");
			RuntimeHelpers.PrepareConstrainedRegions();
			try
			{
			}
			finally
			{
				Interlocked.Increment(ref <Module>.?Count@AllDomains@<CrtImplementationDetails>@@2HA);
				flag = true;
			}
			<Module>.<CrtImplementationDetails>.LanguageSupport._Initialize(A_0);
		}
		catch (Exception ex)
		{
			if (flag)
			{
				<Module>.<CrtImplementationDetails>.LanguageSupport.Cleanup(A_0, ex);
			}
			<Module>.<CrtImplementationDetails>.ThrowModuleLoadException(<Module>.gcroot<System::String\u0020^>..PE$AAVString@System@@(A_0), ex);
		}
		catch (object obj)
		{
			if (flag)
			{
				<Module>.<CrtImplementationDetails>.LanguageSupport.Cleanup(A_0, null);
			}
			<Module>.<CrtImplementationDetails>.ThrowModuleLoadException(<Module>.gcroot<System::String\u0020^>..PE$AAVString@System@@(A_0), null);
		}
	}

	// Token: 0x06000077 RID: 119 RVA: 0x0000E040 File Offset: 0x0000D440
	[SecurityCritical]
	[DebuggerStepThrough]
	static unsafe <Module>()
	{
		LanguageSupport languageSupport;
		<Module>.<CrtImplementationDetails>.LanguageSupport.{ctor}(ref languageSupport);
		try
		{
			<Module>.<CrtImplementationDetails>.LanguageSupport.Initialize(ref languageSupport);
		}
		catch
		{
			<Module>.___CxxCallUnwindDtor(ldftn(<CrtImplementationDetails>.LanguageSupport.{dtor}), (void*)(&languageSupport));
			throw;
		}
		<Module>.<CrtImplementationDetails>.LanguageSupport.{dtor}(ref languageSupport);
	}

	// Token: 0x06000078 RID: 120 RVA: 0x0000DB4C File Offset: 0x0000CF4C
	[SecuritySafeCritical]
	internal unsafe static string PE$AAVString@System@@(gcroot<System::String\u0020^>* A_0)
	{
		IntPtr intPtr = new IntPtr(*A_0);
		return ((GCHandle)intPtr).Target;
	}

	// Token: 0x06000079 RID: 121 RVA: 0x0000DB70 File Offset: 0x0000CF70
	[SecurityCritical]
	[DebuggerStepThrough]
	internal unsafe static gcroot<System::String\u0020^>* =(gcroot<System::String\u0020^>* A_0, string t)
	{
		IntPtr intPtr = new IntPtr(*A_0);
		((GCHandle)intPtr).Target = t;
		return A_0;
	}

	// Token: 0x0600007A RID: 122 RVA: 0x0000DB98 File Offset: 0x0000CF98
	[SecurityCritical]
	[DebuggerStepThrough]
	internal unsafe static void {dtor}(gcroot<System::String\u0020^>* A_0)
	{
		IntPtr intPtr = new IntPtr(*A_0);
		((GCHandle)intPtr).Free();
		*A_0 = 0L;
	}

	// Token: 0x0600007B RID: 123 RVA: 0x0000DBC0 File Offset: 0x0000CFC0
	[DebuggerStepThrough]
	[SecuritySafeCritical]
	internal unsafe static gcroot<System::String\u0020^>* {ctor}(gcroot<System::String\u0020^>* A_0)
	{
		*A_0 = ((IntPtr)GCHandle.Alloc(null)).ToPointer();
		return A_0;
	}

	// Token: 0x0600007C RID: 124 RVA: 0x0000E0B4 File Offset: 0x0000D4B4
	[HandleProcessCorruptedStateExceptions]
	[SecurityCritical]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	[SecurityPermission(SecurityAction.Assert, UnmanagedCode = true)]
	internal unsafe static void ___CxxCallUnwindDtor(method pDtor, void* pThis)
	{
		try
		{
			calli(System.Void(System.Void*), pThis, pDtor);
		}
		catch when (endfilter(<Module>.__FrameUnwindFilter(Marshal.GetExceptionPointers()) != null))
		{
		}
	}

	// Token: 0x0600007D RID: 125 RVA: 0x0000E0F8 File Offset: 0x0000D4F8
	[HandleProcessCorruptedStateExceptions]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	[SecurityCritical]
	[SecurityPermission(SecurityAction.Assert, UnmanagedCode = true)]
	internal unsafe static void ___CxxCallUnwindDelDtor(method pDtor, void* pThis)
	{
		try
		{
			calli(System.Void(System.Void*), pThis, pDtor);
		}
		catch when (endfilter(<Module>.__FrameUnwindFilter(Marshal.GetExceptionPointers()) != null))
		{
		}
	}

	// Token: 0x0600007E RID: 126 RVA: 0x0000E13C File Offset: 0x0000D53C
	[HandleProcessCorruptedStateExceptions]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	[SecurityCritical]
	[SecurityPermission(SecurityAction.Assert, UnmanagedCode = true)]
	internal unsafe static void ___CxxCallUnwindVecDtor(method pVecDtor, void* ptr, ulong size, int count, method pDtor)
	{
		try
		{
			calli(System.Void(System.Void*,System.UInt64,System.Int32,System.Void (System.Void*)), ptr, size, count, pDtor, pVecDtor);
		}
		catch when (endfilter(<Module>.__FrameUnwindFilter(Marshal.GetExceptionPointers()) != null))
		{
		}
	}

	// Token: 0x0600007F RID: 127 RVA: 0x0000E1FC File Offset: 0x0000D5FC
	[HandleProcessCorruptedStateExceptions]
	[SecurityCritical]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	internal unsafe static void __ehvec_dtor(void* ptr, ulong size, ulong count, method destructor)
	{
		bool flag = false;
		ptr = (void*)(size * count + (byte*)ptr);
		try
		{
			for (;;)
			{
				long num = (long)count;
				count -= 1UL;
				if (num == 0L)
				{
					break;
				}
				ptr = (void*)((byte*)ptr - size);
				calli(System.Void(System.Void*), ptr, destructor);
			}
			flag = true;
		}
		finally
		{
			if (!flag)
			{
				<Module>.__ArrayUnwind(ptr, size, count, destructor);
			}
		}
	}

	// Token: 0x06000080 RID: 128 RVA: 0x0000E184 File Offset: 0x0000D584
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	[SecurityCritical]
	[SecurityPermission(SecurityAction.Assert, UnmanagedCode = true)]
	internal unsafe static int ArrayUnwindFilter(_EXCEPTION_POINTERS* pExPtrs)
	{
		if (*(*(long*)pExPtrs) != -529697949)
		{
			return 0;
		}
		<Module>.terminate();
		return 0;
	}

	// Token: 0x06000081 RID: 129 RVA: 0x0000E1A4 File Offset: 0x0000D5A4
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	[SecurityCritical]
	[HandleProcessCorruptedStateExceptions]
	internal unsafe static void __ArrayUnwind(void* ptr, ulong size, ulong count, method destructor)
	{
		try
		{
			for (ulong num = 0UL; num != count; num += 1UL)
			{
				ptr = (void*)((byte*)ptr - size);
				calli(System.Void(System.Void*), ptr, destructor);
			}
		}
		catch when (endfilter(<Module>.?A0x94e83ccb.ArrayUnwindFilter(Marshal.GetExceptionPointers()) != null))
		{
		}
	}

	// Token: 0x06000082 RID: 130 RVA: 0x0000E258 File Offset: 0x0000D658
	[SecurityCritical]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	internal unsafe static void __ehvec_dtor(void* ptr, ulong size, int count, method destructor)
	{
		<Module>.__ehvec_dtor(ptr, size, (ulong)((long)count), destructor);
	}

	// Token: 0x06000083 RID: 131 RVA: 0x0000E270 File Offset: 0x0000D670
	[SecurityCritical]
	[DebuggerStepThrough]
	internal static ValueType <CrtImplementationDetails>.AtExitLock._handle()
	{
		if (<Module>.?_lock@AtExitLock@<CrtImplementationDetails>@@$$Q0PEAXEA != null)
		{
			IntPtr intPtr = new IntPtr(<Module>.?_lock@AtExitLock@<CrtImplementationDetails>@@$$Q0PEAXEA);
			return GCHandle.FromIntPtr(intPtr);
		}
		return null;
	}

	// Token: 0x06000084 RID: 132 RVA: 0x0000E768 File Offset: 0x0000DB68
	[DebuggerStepThrough]
	[SecurityCritical]
	internal static void <CrtImplementationDetails>.AtExitLock._lock_Construct(object value)
	{
		<Module>.?_lock@AtExitLock@<CrtImplementationDetails>@@$$Q0PEAXEA = null;
		<Module>.<CrtImplementationDetails>.AtExitLock._lock_Set(value);
	}

	// Token: 0x06000085 RID: 133 RVA: 0x0000E2A0 File Offset: 0x0000D6A0
	[SecurityCritical]
	[DebuggerStepThrough]
	internal static void <CrtImplementationDetails>.AtExitLock._lock_Set(object value)
	{
		ValueType valueType = <Module>.<CrtImplementationDetails>.AtExitLock._handle();
		if (valueType == null)
		{
			valueType = GCHandle.Alloc(value);
			<Module>.?_lock@AtExitLock@<CrtImplementationDetails>@@$$Q0PEAXEA = GCHandle.ToIntPtr((GCHandle)valueType).ToPointer();
		}
		else
		{
			((GCHandle)valueType).Target = value;
		}
	}

	// Token: 0x06000086 RID: 134 RVA: 0x0000E2F0 File Offset: 0x0000D6F0
	[DebuggerStepThrough]
	[SecurityCritical]
	internal static object <CrtImplementationDetails>.AtExitLock._lock_Get()
	{
		ValueType valueType = <Module>.<CrtImplementationDetails>.AtExitLock._handle();
		if (valueType != null)
		{
			return ((GCHandle)valueType).Target;
		}
		return null;
	}

	// Token: 0x06000087 RID: 135 RVA: 0x0000E314 File Offset: 0x0000D714
	[DebuggerStepThrough]
	[SecurityCritical]
	internal static void <CrtImplementationDetails>.AtExitLock._lock_Destruct()
	{
		ValueType valueType = <Module>.<CrtImplementationDetails>.AtExitLock._handle();
		if (valueType != null)
		{
			((GCHandle)valueType).Free();
			<Module>.?_lock@AtExitLock@<CrtImplementationDetails>@@$$Q0PEAXEA = null;
		}
	}

	// Token: 0x06000088 RID: 136 RVA: 0x0000E33C File Offset: 0x0000D73C
	[SecurityCritical]
	[DebuggerStepThrough]
	[return: MarshalAs(UnmanagedType.U1)]
	internal static bool <CrtImplementationDetails>.AtExitLock.IsInitialized()
	{
		return (<Module>.<CrtImplementationDetails>.AtExitLock._lock_Get() != null) ? 1 : 0;
	}

	// Token: 0x06000089 RID: 137 RVA: 0x0000E784 File Offset: 0x0000DB84
	[SecurityCritical]
	[DebuggerStepThrough]
	internal static void <CrtImplementationDetails>.AtExitLock.AddRef()
	{
		if (<Module>.<CrtImplementationDetails>.AtExitLock.IsInitialized() == null)
		{
			<Module>.<CrtImplementationDetails>.AtExitLock._lock_Construct(new object());
			<Module>.?_ref_count@AtExitLock@<CrtImplementationDetails>@@$$Q0HA = 0;
		}
		<Module>.?_ref_count@AtExitLock@<CrtImplementationDetails>@@$$Q0HA++;
	}

	// Token: 0x0600008A RID: 138 RVA: 0x0000E358 File Offset: 0x0000D758
	[DebuggerStepThrough]
	[SecurityCritical]
	internal static void <CrtImplementationDetails>.AtExitLock.RemoveRef()
	{
		<Module>.?_ref_count@AtExitLock@<CrtImplementationDetails>@@$$Q0HA += -1;
		if (<Module>.?_ref_count@AtExitLock@<CrtImplementationDetails>@@$$Q0HA == 0)
		{
			<Module>.<CrtImplementationDetails>.AtExitLock._lock_Destruct();
		}
	}

	// Token: 0x0600008B RID: 139 RVA: 0x0000E380 File Offset: 0x0000D780
	[SecurityCritical]
	[DebuggerStepThrough]
	internal static void <CrtImplementationDetails>.AtExitLock.Enter()
	{
		Monitor.Enter(<Module>.<CrtImplementationDetails>.AtExitLock._lock_Get());
	}

	// Token: 0x0600008C RID: 140 RVA: 0x0000E398 File Offset: 0x0000D798
	[SecurityCritical]
	[DebuggerStepThrough]
	internal static void <CrtImplementationDetails>.AtExitLock.Exit()
	{
		Monitor.Exit(<Module>.<CrtImplementationDetails>.AtExitLock._lock_Get());
	}

	// Token: 0x0600008D RID: 141 RVA: 0x0000E3B0 File Offset: 0x0000D7B0
	[SecurityCritical]
	[DebuggerStepThrough]
	[return: MarshalAs(UnmanagedType.U1)]
	internal static bool __global_lock()
	{
		bool flag = false;
		if (<Module>.<CrtImplementationDetails>.AtExitLock.IsInitialized() != null)
		{
			<Module>.<CrtImplementationDetails>.AtExitLock.Enter();
			flag = true;
		}
		return flag;
	}

	// Token: 0x0600008E RID: 142 RVA: 0x0000E3D0 File Offset: 0x0000D7D0
	[SecurityCritical]
	[DebuggerStepThrough]
	[return: MarshalAs(UnmanagedType.U1)]
	internal static bool __global_unlock()
	{
		bool flag = false;
		if (<Module>.<CrtImplementationDetails>.AtExitLock.IsInitialized() != null)
		{
			<Module>.<CrtImplementationDetails>.AtExitLock.Exit();
			flag = true;
		}
		return flag;
	}

	// Token: 0x0600008F RID: 143 RVA: 0x0000E7B4 File Offset: 0x0000DBB4
	[DebuggerStepThrough]
	[SecurityCritical]
	[return: MarshalAs(UnmanagedType.U1)]
	internal static bool __alloc_global_lock()
	{
		<Module>.<CrtImplementationDetails>.AtExitLock.AddRef();
		return <Module>.<CrtImplementationDetails>.AtExitLock.IsInitialized();
	}

	// Token: 0x06000090 RID: 144 RVA: 0x0000E3F0 File Offset: 0x0000D7F0
	[DebuggerStepThrough]
	[SecurityCritical]
	internal static void __dealloc_global_lock()
	{
		<Module>.<CrtImplementationDetails>.AtExitLock.RemoveRef();
	}

	// Token: 0x06000091 RID: 145 RVA: 0x0000E404 File Offset: 0x0000D804
	[SecurityCritical]
	internal unsafe static int _atexit_helper(method func, ulong* __pexit_list_size, method** __ponexitend_e, method** __ponexitbegin_e)
	{
		method system.Void_u0020() = 0L;
		if (func == null)
		{
			return -1;
		}
		if (<Module>.?A0x5f1aee9f.__global_lock() == 1)
		{
			try
			{
				method* ptr = (method*)<Module>.DecodePointer(*(long*)__ponexitbegin_e);
				method* ptr2 = (method*)<Module>.DecodePointer(*(long*)__ponexitend_e);
				long num = (long)(ptr2 - ptr);
				if (*__pexit_list_size - 1UL < (ulong)num >> 3)
				{
					try
					{
						ulong num2 = *__pexit_list_size * 8UL;
						ulong num3 = ((num2 < 4096UL) ? num2 : 4096UL);
						IntPtr intPtr = new IntPtr((int)(num2 + num3));
						IntPtr intPtr2 = new IntPtr((void*)ptr);
						IntPtr intPtr3 = Marshal.ReAllocHGlobal(intPtr2, intPtr);
						ptr2 = (method*)((byte*)intPtr3.ToPointer() + num);
						ptr = (method*)intPtr3.ToPointer();
						ulong num4 = *__pexit_list_size;
						ulong num5 = ((512UL < num4) ? 512UL : num4);
						*__pexit_list_size = num4 + num5;
					}
					catch (OutOfMemoryException)
					{
						IntPtr intPtr4 = new IntPtr((int)(*__pexit_list_size * 8UL + 12UL));
						IntPtr intPtr5 = new IntPtr((void*)ptr);
						IntPtr intPtr6 = Marshal.ReAllocHGlobal(intPtr5, intPtr4);
						ptr2 = (intPtr6.ToPointer() - ptr) / (IntPtr)sizeof(method) + ptr2;
						ptr = (method*)intPtr6.ToPointer();
						*__pexit_list_size += 4UL;
					}
				}
				*(long*)ptr2 = func;
				ptr2 += 8L / (long)sizeof(method);
				system.Void_u0020() = func;
				*(long*)__ponexitbegin_e = <Module>.EncodePointer((void*)ptr);
				*(long*)__ponexitend_e = <Module>.EncodePointer((void*)ptr2);
			}
			catch (OutOfMemoryException)
			{
			}
			finally
			{
				<Module>.?A0x5f1aee9f.__global_unlock();
			}
			if (system.Void_u0020() != null)
			{
				return 0;
			}
		}
		return -1;
	}

	// Token: 0x06000092 RID: 146 RVA: 0x0000E57C File Offset: 0x0000D97C
	[SecurityCritical]
	internal unsafe static void _exit_callback()
	{
		if (<Module>.?A0x5f1aee9f.__exit_list_size != 0UL)
		{
			method* ptr = (method*)<Module>.DecodePointer((void*)<Module>.?A0x5f1aee9f.__onexitbegin_m);
			method* ptr2 = (method*)<Module>.DecodePointer((void*)<Module>.?A0x5f1aee9f.__onexitend_m);
			if (ptr != -1L && ptr != null && ptr2 != null)
			{
				method* ptr3 = ptr;
				method* ptr4 = ptr2;
				for (;;)
				{
					ptr2 -= 8L / (long)sizeof(method);
					if (ptr2 < ptr)
					{
						break;
					}
					if (*(long*)ptr2 != <Module>.EncodePointer(null))
					{
						void* ptr5 = <Module>.DecodePointer(*(long*)ptr2);
						*(long*)ptr2 = <Module>.EncodePointer(null);
						calli(System.Void(), ptr5);
						method* ptr6 = (method*)<Module>.DecodePointer((void*)<Module>.?A0x5f1aee9f.__onexitbegin_m);
						method* ptr7 = (method*)<Module>.DecodePointer((void*)<Module>.?A0x5f1aee9f.__onexitend_m);
						if (ptr3 != ptr6 || ptr4 != ptr7)
						{
							ptr3 = ptr6;
							ptr = ptr6;
							ptr4 = ptr7;
							ptr2 = ptr7;
						}
					}
				}
				IntPtr intPtr = new IntPtr((void*)ptr);
				Marshal.FreeHGlobal(intPtr);
			}
			<Module>.?A0x5f1aee9f.__dealloc_global_lock();
		}
	}

	// Token: 0x06000093 RID: 147 RVA: 0x0000E7CC File Offset: 0x0000DBCC
	[DebuggerStepThrough]
	[SecurityCritical]
	internal unsafe static int _initatexit_m()
	{
		int num = 0;
		if (<Module>.?A0x5f1aee9f.__alloc_global_lock() == 1)
		{
			<Module>.?A0x5f1aee9f.__onexitbegin_m = (method*)<Module>.EncodePointer(Marshal.AllocHGlobal(256).ToPointer());
			<Module>.?A0x5f1aee9f.__onexitend_m = <Module>.?A0x5f1aee9f.__onexitbegin_m;
			<Module>.?A0x5f1aee9f.__exit_list_size = 32UL;
			num = 1;
		}
		return num;
	}

	// Token: 0x06000094 RID: 148 RVA: 0x0000E814 File Offset: 0x0000DC14
	internal static method _onexit_m(method _Function)
	{
		return (<Module>._atexit_m(_Function) == -1) ? 0L : _Function;
	}

	// Token: 0x06000095 RID: 149 RVA: 0x0000E62C File Offset: 0x0000DA2C
	[SecurityCritical]
	internal unsafe static int _atexit_m(method func)
	{
		return <Module>._atexit_helper(<Module>.EncodePointer(func), &<Module>.?A0x5f1aee9f.__exit_list_size, &<Module>.?A0x5f1aee9f.__onexitend_m, &<Module>.?A0x5f1aee9f.__onexitbegin_m);
	}

	// Token: 0x06000096 RID: 150 RVA: 0x0000E830 File Offset: 0x0000DC30
	[SecurityCritical]
	[DebuggerStepThrough]
	internal unsafe static int _initatexit_app_domain()
	{
		if (<Module>.?A0x5f1aee9f.__alloc_global_lock() == 1)
		{
			<Module>.__onexitbegin_app_domain = (method*)<Module>.EncodePointer(Marshal.AllocHGlobal(256).ToPointer());
			<Module>.__onexitend_app_domain = <Module>.__onexitbegin_app_domain;
			<Module>.__exit_list_size_app_domain = 32UL;
		}
		return 1;
	}

	// Token: 0x06000097 RID: 151 RVA: 0x0000E654 File Offset: 0x0000DA54
	[HandleProcessCorruptedStateExceptions]
	[SecurityCritical]
	internal unsafe static void _app_exit_callback()
	{
		if (<Module>.__exit_list_size_app_domain != 0UL)
		{
			method* ptr = (method*)<Module>.DecodePointer((void*)<Module>.__onexitbegin_app_domain);
			method* ptr2 = (method*)<Module>.DecodePointer((void*)<Module>.__onexitend_app_domain);
			try
			{
				if (ptr != -1L && ptr != null && ptr2 != null)
				{
					method* ptr3 = ptr;
					method* ptr4 = ptr2;
					for (;;)
					{
						do
						{
							ptr2 -= 8L / (long)sizeof(method);
						}
						while (ptr2 >= ptr && *(long*)ptr2 == <Module>.EncodePointer(null));
						if (ptr2 < ptr)
						{
							break;
						}
						method system.Void_u0020() = <Module>.DecodePointer(*(long*)ptr2);
						*(long*)ptr2 = <Module>.EncodePointer(null);
						calli(System.Void(), system.Void_u0020());
						method* ptr5 = (method*)<Module>.DecodePointer((void*)<Module>.__onexitbegin_app_domain);
						method* ptr6 = (method*)<Module>.DecodePointer((void*)<Module>.__onexitend_app_domain);
						if (ptr3 != ptr5 || ptr4 != ptr6)
						{
							ptr3 = ptr5;
							ptr = ptr5;
							ptr4 = ptr6;
							ptr2 = ptr6;
						}
					}
				}
			}
			finally
			{
				IntPtr intPtr = new IntPtr((void*)ptr);
				Marshal.FreeHGlobal(intPtr);
				<Module>.?A0x5f1aee9f.__dealloc_global_lock();
			}
		}
	}

	// Token: 0x06000098 RID: 152 RVA: 0x0000E874 File Offset: 0x0000DC74
	[SecurityCritical]
	internal static method _onexit_m_appdomain(method _Function)
	{
		return (<Module>._atexit_m_appdomain(_Function) == -1) ? 0L : _Function;
	}

	// Token: 0x06000099 RID: 153 RVA: 0x0000E740 File Offset: 0x0000DB40
	[DebuggerStepThrough]
	[SecurityCritical]
	internal unsafe static int _atexit_m_appdomain(method func)
	{
		return <Module>._atexit_helper(<Module>.EncodePointer(func), &<Module>.__exit_list_size_app_domain, &<Module>.__onexitend_app_domain, &<Module>.__onexitbegin_app_domain);
	}

	// Token: 0x0600009A RID: 154
	[SuppressUnmanagedCodeSecurity]
	[SecurityCritical]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	[DllImport("KERNEL32.dll")]
	public unsafe static extern void* DecodePointer(void* _Ptr);

	// Token: 0x0600009B RID: 155
	[SuppressUnmanagedCodeSecurity]
	[SecurityCritical]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	[DllImport("KERNEL32.dll")]
	public unsafe static extern void* EncodePointer(void* _Ptr);

	// Token: 0x0600009C RID: 156 RVA: 0x0000E890 File Offset: 0x0000DC90
	[DebuggerStepThrough]
	[SecurityCritical]
	internal unsafe static int _initterm_e(method* pfbegin, method* pfend)
	{
		int num = 0;
		if (pfbegin < pfend)
		{
			while (num == 0)
			{
				ulong num2 = (ulong)(*(long*)pfbegin);
				if (num2 != 0UL)
				{
					num = calli(System.Int32 modopt(System.Runtime.CompilerServices.CallConvCdecl)(), num2);
				}
				pfbegin += 8L / (long)sizeof(method);
				if (pfbegin >= pfend)
				{
					break;
				}
			}
		}
		return num;
	}

	// Token: 0x0600009D RID: 157 RVA: 0x0000E8C0 File Offset: 0x0000DCC0
	[SecurityCritical]
	[DebuggerStepThrough]
	internal unsafe static void _initterm(method* pfbegin, method* pfend)
	{
		if (pfbegin < pfend)
		{
			do
			{
				ulong num = (ulong)(*(long*)pfbegin);
				if (num != 0UL)
				{
					calli(System.Void modopt(System.Runtime.CompilerServices.CallConvCdecl)(), num);
				}
				pfbegin += 8L / (long)sizeof(method);
			}
			while (pfbegin < pfend);
		}
	}

	// Token: 0x0600009E RID: 158 RVA: 0x0000E8E8 File Offset: 0x0000DCE8
	[DebuggerStepThrough]
	internal static ModuleHandle <CrtImplementationDetails>.ThisModule.Handle()
	{
		return typeof(ThisModule).Module.ModuleHandle;
	}

	// Token: 0x0600009F RID: 159 RVA: 0x0000E938 File Offset: 0x0000DD38
	[SecurityCritical]
	[DebuggerStepThrough]
	[SecurityPermission(SecurityAction.Assert, UnmanagedCode = true)]
	internal unsafe static void _initterm_m(method* pfbegin, method* pfend)
	{
		if (pfbegin < pfend)
		{
			do
			{
				ulong num = (ulong)(*(long*)pfbegin);
				if (num != 0UL)
				{
					void* ptr = calli(System.Void modopt(System.Runtime.CompilerServices.IsConst)*(), <Module>.<CrtImplementationDetails>.ThisModule.ResolveMethod<void\u0020const\u0020*\u0020__clrcall(void)>(num));
				}
				pfbegin += 8L / (long)sizeof(method);
			}
			while (pfbegin < pfend);
		}
	}

	// Token: 0x060000A0 RID: 160 RVA: 0x0000E90C File Offset: 0x0000DD0C
	[DebuggerStepThrough]
	[SecurityCritical]
	internal static method <CrtImplementationDetails>.ThisModule.ResolveMethod<void\u0020const\u0020*\u0020__clrcall(void)>(method methodToken)
	{
		return <Module>.<CrtImplementationDetails>.ThisModule.Handle().ResolveMethodHandle(methodToken).GetFunctionPointer()
			.ToPointer();
	}

	// Token: 0x060000A1 RID: 161 RVA: 0x00001690 File Offset: 0x00000A90
	[SuppressUnmanagedCodeSecurity]
	[MethodImpl(MethodImplOptions.Unmanaged | MethodImplOptions.PreserveSig, MethodCodeType = MethodCodeType.Native)]
	internal unsafe static extern void WriteFormatted(char*);

	// Token: 0x060000A2 RID: 162 RVA: 0x0000EA13 File Offset: 0x0000DE13
	[SuppressUnmanagedCodeSecurity]
	[DllImport("", CallingConvention = CallingConvention.Cdecl, SetLastError = true)]
	[MethodImpl(MethodImplOptions.Unmanaged, MethodCodeType = MethodCodeType.Native)]
	internal static extern void _invalid_parameter_noinfo_noreturn();

	// Token: 0x060000A3 RID: 163 RVA: 0x0000EAED File Offset: 0x0000DEED
	[SuppressUnmanagedCodeSecurity]
	[DllImport("", CallingConvention = CallingConvention.Cdecl, SetLastError = true)]
	[MethodImpl(MethodImplOptions.Unmanaged, MethodCodeType = MethodCodeType.Native)]
	internal unsafe static extern int WideCharToMultiByte(uint, uint, char*, int, sbyte*, int, sbyte*, int*);

	// Token: 0x060000A4 RID: 164 RVA: 0x0000EADC File Offset: 0x0000DEDC
	[SuppressUnmanagedCodeSecurity]
	[MethodImpl(MethodImplOptions.Unmanaged | MethodImplOptions.PreserveSig, MethodCodeType = MethodCodeType.Native)]
	internal unsafe static extern void* new[](ulong);

	// Token: 0x060000A5 RID: 165 RVA: 0x0000EB47 File Offset: 0x0000DF47
	[SuppressUnmanagedCodeSecurity]
	[DllImport("", CallingConvention = CallingConvention.Cdecl, SetLastError = true)]
	[MethodImpl(MethodImplOptions.Unmanaged, MethodCodeType = MethodCodeType.Native)]
	internal unsafe static extern void __ExceptionPtrDestroy(void*);

	// Token: 0x060000A6 RID: 166 RVA: 0x0000C334 File Offset: 0x0000B734
	[SuppressUnmanagedCodeSecurity]
	[MethodImpl(MethodImplOptions.Unmanaged | MethodImplOptions.PreserveSig, MethodCodeType = MethodCodeType.Native)]
	internal unsafe static extern void delete(void*, ulong);

	// Token: 0x060000A7 RID: 167 RVA: 0x0000E9E9 File Offset: 0x0000DDE9
	[SuppressUnmanagedCodeSecurity]
	[DllImport("", CallingConvention = CallingConvention.Cdecl, SetLastError = true)]
	[MethodImpl(MethodImplOptions.Unmanaged, MethodCodeType = MethodCodeType.Native)]
	internal unsafe static extern void __std_exception_copy(__std_exception_data*, __std_exception_data*);

	// Token: 0x060000A8 RID: 168 RVA: 0x0000EB4D File Offset: 0x0000DF4D
	[SuppressUnmanagedCodeSecurity]
	[DllImport("", CallingConvention = CallingConvention.Cdecl, SetLastError = true)]
	[MethodImpl(MethodImplOptions.Unmanaged, MethodCodeType = MethodCodeType.Native)]
	internal unsafe static extern void __ExceptionPtrCopy(void*, void*);

	// Token: 0x060000A9 RID: 169 RVA: 0x0000C33C File Offset: 0x0000B73C
	[SuppressUnmanagedCodeSecurity]
	[MethodImpl(MethodImplOptions.Unmanaged | MethodImplOptions.PreserveSig, MethodCodeType = MethodCodeType.Native)]
	internal unsafe static extern void* @new(ulong);

	// Token: 0x060000AA RID: 170 RVA: 0x0000EB54 File Offset: 0x0000DF54
	[SuppressUnmanagedCodeSecurity]
	[MethodImpl(MethodImplOptions.Unmanaged | MethodImplOptions.PreserveSig, MethodCodeType = MethodCodeType.Native)]
	internal unsafe static extern void delete[](void*, ulong);

	// Token: 0x060000AB RID: 171 RVA: 0x0000EAD4 File Offset: 0x0000DED4
	[SuppressUnmanagedCodeSecurity]
	[MethodImpl(MethodImplOptions.Unmanaged | MethodImplOptions.PreserveSig, MethodCodeType = MethodCodeType.Native)]
	internal unsafe static extern void delete[](void*);

	// Token: 0x060000AC RID: 172 RVA: 0x0000E9E3 File Offset: 0x0000DDE3
	[SuppressUnmanagedCodeSecurity]
	[DllImport("", CallingConvention = CallingConvention.Cdecl, SetLastError = true)]
	[MethodImpl(MethodImplOptions.Unmanaged, MethodCodeType = MethodCodeType.Native)]
	internal unsafe static extern void __std_exception_destroy(__std_exception_data*);

	// Token: 0x060000AD RID: 173 RVA: 0x0000D920 File Offset: 0x0000CD20
	[SuppressUnmanagedCodeSecurity]
	[MethodImpl(MethodImplOptions.Unmanaged | MethodImplOptions.PreserveSig, MethodCodeType = MethodCodeType.Native)]
	internal unsafe static extern void* _getFiberPtrId();

	// Token: 0x060000AE RID: 174 RVA: 0x0000EAC1 File Offset: 0x0000DEC1
	[SuppressUnmanagedCodeSecurity]
	[DllImport("", CallingConvention = CallingConvention.Cdecl, SetLastError = true)]
	[MethodImpl(MethodImplOptions.Unmanaged, MethodCodeType = MethodCodeType.Native)]
	internal static extern void _cexit();

	// Token: 0x060000AF RID: 175 RVA: 0x0000EB59 File Offset: 0x0000DF59
	[SuppressUnmanagedCodeSecurity]
	[DllImport("", CallingConvention = CallingConvention.Cdecl, SetLastError = true)]
	[MethodImpl(MethodImplOptions.Unmanaged, MethodCodeType = MethodCodeType.Native)]
	internal static extern void Sleep(uint);

	// Token: 0x060000B0 RID: 176 RVA: 0x0000EB65 File Offset: 0x0000DF65
	[SuppressUnmanagedCodeSecurity]
	[DllImport("", CallingConvention = CallingConvention.Cdecl, SetLastError = true)]
	[MethodImpl(MethodImplOptions.Unmanaged, MethodCodeType = MethodCodeType.Native)]
	internal static extern void abort();

	// Token: 0x060000B1 RID: 177 RVA: 0x0000C910 File Offset: 0x0000BD10
	[SuppressUnmanagedCodeSecurity]
	[MethodImpl(MethodImplOptions.Unmanaged | MethodImplOptions.PreserveSig, MethodCodeType = MethodCodeType.Native)]
	internal static extern void __security_init_cookie();

	// Token: 0x060000B2 RID: 178 RVA: 0x0000EB5F File Offset: 0x0000DF5F
	[SuppressUnmanagedCodeSecurity]
	[DllImport("", CallingConvention = CallingConvention.Cdecl, SetLastError = true)]
	[MethodImpl(MethodImplOptions.Unmanaged, MethodCodeType = MethodCodeType.Native)]
	internal unsafe static extern int __FrameUnwindFilter(_EXCEPTION_POINTERS*);

	// Token: 0x060000B3 RID: 179 RVA: 0x0000EAC7 File Offset: 0x0000DEC7
	[SuppressUnmanagedCodeSecurity]
	[DllImport("", CallingConvention = CallingConvention.Cdecl, SetLastError = true)]
	[MethodImpl(MethodImplOptions.Unmanaged, MethodCodeType = MethodCodeType.Native)]
	internal static extern void terminate();

	// Token: 0x04000001 RID: 1 RVA: 0x00011A20 File Offset: 0x0000FE20
	internal static $ArrayType$$$BY0BC@$$CBD ??_C@_0BC@EOODALEL@Unknown?5exception@;

	// Token: 0x04000002 RID: 2 RVA: 0x0002CB58 File Offset: 0x0002AD58
	internal static $_TypeDescriptor$_extraBytes_27 ??_R0?AVfailure@ios_base@std@@@8;

	// Token: 0x04000003 RID: 3 RVA: 0x0002CAE0 File Offset: 0x0002ACE0
	internal static $_TypeDescriptor$_extraBytes_24 ??_R0?AVruntime_error@std@@@8;

	// Token: 0x04000004 RID: 4 RVA: 0x00027D70 File Offset: 0x00026170
	internal static _s__RTTICompleteObjectLocator2 ??_R4exception@std@@6B@;

	// Token: 0x04000005 RID: 5 RVA: 0x00027370 File Offset: 0x00025770
	internal static $_s__RTTIBaseClassArray$_extraBytes_32 ??_R2system_error@std@@8;

	// Token: 0x04000006 RID: 6 RVA: 0x00027348 File Offset: 0x00025748
	internal static _s__RTTIBaseClassDescriptor ??_R1A@?0A@EA@system_error@std@@8;

	// Token: 0x04000007 RID: 7 RVA: 0x00027298 File Offset: 0x00025698
	internal static _s__RTTICompleteObjectLocator2 ??_R4runtime_error@std@@6B@;

	// Token: 0x04000008 RID: 8 RVA: 0x00027320 File Offset: 0x00025720
	internal static _s__RTTICompleteObjectLocator2 ??_R4_System_error@std@@6B@;

	// Token: 0x04000009 RID: 9 RVA: 0x00027CA0 File Offset: 0x000260A0
	internal static _s__RTTIBaseClassDescriptor ??_R1A@?0A@EA@bad_cast@std@@8;

	// Token: 0x0400000A RID: 10 RVA: 0x00027240 File Offset: 0x00025640
	internal static _s__RTTIBaseClassDescriptor ??_R1A@?0A@EA@runtime_error@std@@8;

	// Token: 0x0400000B RID: 11 RVA: 0x000272E8 File Offset: 0x000256E8
	internal static $_s__RTTIBaseClassArray$_extraBytes_24 ??_R2_System_error@std@@8;

	// Token: 0x0400000C RID: 12 RVA: 0x0002CB30 File Offset: 0x0002AD30
	internal static $_TypeDescriptor$_extraBytes_23 ??_R0?AVsystem_error@std@@@8;

	// Token: 0x0400000D RID: 13 RVA: 0x00027D20 File Offset: 0x00026120
	internal static _s__RTTIBaseClassDescriptor ??_R1A@?0A@EA@exception@std@@8;

	// Token: 0x0400000E RID: 14 RVA: 0x000273B0 File Offset: 0x000257B0
	internal static _s__RTTICompleteObjectLocator2 ??_R4system_error@std@@6B@;

	// Token: 0x0400000F RID: 15 RVA: 0x00027308 File Offset: 0x00025708
	internal static _s__RTTIClassHierarchyDescriptor ??_R3_System_error@std@@8;

	// Token: 0x04000010 RID: 16 RVA: 0x00027CC8 File Offset: 0x000260C8
	internal static $_s__RTTIBaseClassArray$_extraBytes_16 ??_R2bad_cast@std@@8;

	// Token: 0x04000011 RID: 17 RVA: 0x00027D48 File Offset: 0x00026148
	internal static $_s__RTTIBaseClassArray$_extraBytes_8 ??_R2exception@std@@8;

	// Token: 0x04000012 RID: 18 RVA: 0x00027448 File Offset: 0x00025848
	internal static _s__RTTICompleteObjectLocator2 ??_R4failure@ios_base@std@@6B@;

	// Token: 0x04000013 RID: 19 RVA: 0x0002C0D0 File Offset: 0x0002A2D0
	internal static $ArrayType$$$BY02Q6AXXZ ??_7bad_cast@std@@6B@;

	// Token: 0x04000014 RID: 20 RVA: 0x0002CF98 File Offset: 0x0002B198
	internal static $_TypeDescriptor$_extraBytes_19 ??_R0?AVbad_cast@std@@@8;

	// Token: 0x04000015 RID: 21 RVA: 0x00027400 File Offset: 0x00025800
	internal static $_s__RTTIBaseClassArray$_extraBytes_40 ??_R2failure@ios_base@std@@8;

	// Token: 0x04000016 RID: 22 RVA: 0x00027430 File Offset: 0x00025830
	internal static _s__RTTIClassHierarchyDescriptor ??_R3failure@ios_base@std@@8;

	// Token: 0x04000017 RID: 23 RVA: 0x0002C008 File Offset: 0x0002A208
	internal static $ArrayType$$$BY02Q6AXXZ ??_7exception@std@@6B@;

	// Token: 0x04000018 RID: 24 RVA: 0x00027D58 File Offset: 0x00026158
	internal static _s__RTTIClassHierarchyDescriptor ??_R3exception@std@@8;

	// Token: 0x04000019 RID: 25 RVA: 0x0002C070 File Offset: 0x0002A270
	internal static $ArrayType$$$BY02Q6AXXZ ??_7runtime_error@std@@6B@;

	// Token: 0x0400001A RID: 26 RVA: 0x0002C0A8 File Offset: 0x0002A2A8
	internal static $ArrayType$$$BY02Q6AXXZ ??_7_System_error@std@@6B@;

	// Token: 0x0400001B RID: 27 RVA: 0x000273D8 File Offset: 0x000257D8
	internal static _s__RTTIBaseClassDescriptor ??_R1A@?0A@EA@failure@ios_base@std@@8;

	// Token: 0x0400001C RID: 28 RVA: 0x000272C0 File Offset: 0x000256C0
	internal static _s__RTTIBaseClassDescriptor ??_R1A@?0A@EA@_System_error@std@@8;

	// Token: 0x0400001D RID: 29 RVA: 0x00027CE0 File Offset: 0x000260E0
	internal static _s__RTTIClassHierarchyDescriptor ??_R3bad_cast@std@@8;

	// Token: 0x0400001E RID: 30 RVA: 0x0002CFF0 File Offset: 0x0002B1F0
	internal static int __@@_PchSym_@00@UxPdliphkzxvUxorvmgRozfmxsviUozfmxsviUolttvinzmztvwUcGEUivovzhvUhgwzucOlyq@4B2008FD98C1DD4;

	// Token: 0x0400001F RID: 31 RVA: 0x00027CF8 File Offset: 0x000260F8
	internal static _s__RTTICompleteObjectLocator2 ??_R4bad_cast@std@@6B@;

	// Token: 0x04000020 RID: 32 RVA: 0x00027268 File Offset: 0x00025668
	internal static $_s__RTTIBaseClassArray$_extraBytes_16 ??_R2runtime_error@std@@8;

	// Token: 0x04000021 RID: 33 RVA: 0x0002CB08 File Offset: 0x0002AD08
	internal static $_TypeDescriptor$_extraBytes_24 ??_R0?AV_System_error@std@@@8;

	// Token: 0x04000022 RID: 34 RVA: 0x00027398 File Offset: 0x00025798
	internal static _s__RTTIClassHierarchyDescriptor ??_R3system_error@std@@8;

	// Token: 0x04000023 RID: 35 RVA: 0x0002CFC0 File Offset: 0x0002B1C0
	internal static $_TypeDescriptor$_extraBytes_20 ??_R0?AVexception@std@@@8;

	// Token: 0x04000024 RID: 36 RVA: 0x0002C0F8 File Offset: 0x0002A2F8
	internal static $ArrayType$$$BY02Q6AXXZ ??_7system_error@std@@6B@;

	// Token: 0x04000025 RID: 37 RVA: 0x00027280 File Offset: 0x00025680
	internal static _s__RTTIClassHierarchyDescriptor ??_R3runtime_error@std@@8;

	// Token: 0x04000026 RID: 38 RVA: 0x0002C130 File Offset: 0x0002A330
	internal static $ArrayType$$$BY02Q6AXXZ ??_7failure@ios_base@std@@6B@;

	// Token: 0x04000027 RID: 39 RVA: 0x0002C180 File Offset: 0x0002A380
	public static method __m2mep@??2@$$FYAPEAX_KPEAX@Z;

	// Token: 0x04000028 RID: 40 RVA: 0x0002C018 File Offset: 0x0002A218
	public static method __m2mep@??0exception@std@@$$FQEAA@AEBV01@@Z;

	// Token: 0x04000029 RID: 41 RVA: 0x0002C1B0 File Offset: 0x0002A3B0
	public static method __m2mep@??1exception@std@@$$FUEAA@XZ;

	// Token: 0x0400002A RID: 42 RVA: 0x0002C1A0 File Offset: 0x0002A3A0
	public static method __m2mep@?what@exception@std@@$$FUEBAPEBDXZ;

	// Token: 0x0400002B RID: 43 RVA: 0x0002C190 File Offset: 0x0002A390
	public static method __m2mep@??_Eexception@std@@$$FUEAAPEAXI@Z;

	// Token: 0x0400002C RID: 44 RVA: 0x0002C1C0 File Offset: 0x0002A3C0
	public static method __m2mep@??1exception_ptr@std@@$$FQEAA@XZ;

	// Token: 0x0400002D RID: 45 RVA: 0x0002C028 File Offset: 0x0002A228
	public static method __m2mep@??0exception_ptr@std@@$$FQEAA@AEBV01@@Z;

	// Token: 0x0400002E RID: 46 RVA: 0x0002C038 File Offset: 0x0002A238
	public static method __m2mep@?<MarshalCopy>@exception_ptr@std@@$$FSMXPEAV12@0@Z;

	// Token: 0x0400002F RID: 47 RVA: 0x0002C048 File Offset: 0x0002A248
	public static method __m2mep@?<MarshalDestroy>@exception_ptr@std@@$$FSMXPEAV12@@Z;

	// Token: 0x04000030 RID: 48 RVA: 0x0002C1D0 File Offset: 0x0002A3D0
	public static method __m2mep@?max@?$numeric_limits@_J@std@@$$FSA_JXZ;

	// Token: 0x04000031 RID: 49 RVA: 0x0002C1E0 File Offset: 0x0002A3E0
	public static method __m2mep@?copy@?$char_traits@D@std@@$$FSAPEADQEADQEBD_K@Z;

	// Token: 0x04000032 RID: 50 RVA: 0x0002C1F0 File Offset: 0x0002A3F0
	public static method __m2mep@?assign@?$char_traits@D@std@@$$FSAXAEADAEBD@Z;

	// Token: 0x04000033 RID: 51 RVA: 0x0002C200 File Offset: 0x0002A400
	public static method __m2mep@?_Orphan_all@_Container_base0@std@@$$FQEAAXXZ;

	// Token: 0x04000034 RID: 52 RVA: 0x0002C058 File Offset: 0x0002A258
	public static method __m2mep@??0_Container_base12@std@@$$FQEAA@AEBU01@@Z;

	// Token: 0x04000035 RID: 53 RVA: 0x0002C118 File Offset: 0x0002A318
	public static method __m2mep@??0_Iterator_base12@std@@$$FQEAA@AEBU01@@Z;

	// Token: 0x04000036 RID: 54 RVA: 0x0002C440 File Offset: 0x0002A640
	public static method __m2mep@??4_Iterator_base12@std@@$$FQEAAAEAU01@AEBU01@@Z;

	// Token: 0x04000037 RID: 55 RVA: 0x0002C210 File Offset: 0x0002A410
	public static method __m2mep@?_Adopt@_Iterator_base12@std@@$$FQEAAXPEBU_Container_base12@2@@Z;

	// Token: 0x04000038 RID: 56 RVA: 0x0002C220 File Offset: 0x0002A420
	public static method __m2mep@??$_Get_size_of_n@$00@std@@$$FYA_K_K@Z;

	// Token: 0x04000039 RID: 57 RVA: 0x0002C230 File Offset: 0x0002A430
	public static method __m2mep@?_Allocate@_Default_allocate_traits@std@@$$FSAPEAX_K@Z;

	// Token: 0x0400003A RID: 58 RVA: 0x0002C240 File Offset: 0x0002A440
	public static method __m2mep@?_Adjust_manually_vector_aligned@std@@$$FYAXAEAPEAXAEA_K@Z;

	// Token: 0x0400003B RID: 59 RVA: 0x0002C260 File Offset: 0x0002A460
	public static method __m2mep@??_Eruntime_error@std@@$$FUEAAPEAXI@Z;

	// Token: 0x0400003C RID: 60 RVA: 0x0002C250 File Offset: 0x0002A450
	public static method __m2mep@??1runtime_error@std@@$$FUEAA@XZ;

	// Token: 0x0400003D RID: 61 RVA: 0x0002C3F0 File Offset: 0x0002A5F0
	public static method __m2mep@??_Ebad_cast@std@@$$FUEAAPEAXI@Z;

	// Token: 0x0400003E RID: 62 RVA: 0x0002C5B0 File Offset: 0x0002A7B0
	public static method __m2mep@??1bad_cast@std@@$$FUEAA@XZ;

	// Token: 0x0400003F RID: 63 RVA: 0x0002C080 File Offset: 0x0002A280
	public static method __m2mep@??0runtime_error@std@@$$FQEAA@AEBV01@@Z;

	// Token: 0x04000040 RID: 64 RVA: 0x0002C090 File Offset: 0x0002A290
	public static method __m2mep@??0locale@std@@$$FQEAA@AEBV01@@Z;

	// Token: 0x04000041 RID: 65 RVA: 0x0002C160 File Offset: 0x0002A360
	public static method __m2mep@?<MarshalCopy>@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@$$FSMXPEAV12@0@Z;

	// Token: 0x04000042 RID: 66 RVA: 0x0002C170 File Offset: 0x0002A370
	public static method __m2mep@?<MarshalDestroy>@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@$$FSMXPEAV12@@Z;

	// Token: 0x04000043 RID: 67 RVA: 0x0002C290 File Offset: 0x0002A490
	public static method __m2mep@??_E_System_error@std@@$$FUEAAPEAXI@Z;

	// Token: 0x04000044 RID: 68 RVA: 0x0002C270 File Offset: 0x0002A470
	public static method __m2mep@??1_System_error@std@@$$FUEAA@XZ;

	// Token: 0x04000045 RID: 69 RVA: 0x0002C450 File Offset: 0x0002A650
	public static method __m2mep@??_Esystem_error@std@@$$FUEAAPEAXI@Z;

	// Token: 0x04000046 RID: 70 RVA: 0x0002C280 File Offset: 0x0002A480
	public static method __m2mep@??1system_error@std@@$$FUEAA@XZ;

	// Token: 0x04000047 RID: 71 RVA: 0x0002C530 File Offset: 0x0002A730
	public static method __m2mep@??_Efailure@ios_base@std@@$$FUEAAPEAXI@Z;

	// Token: 0x04000048 RID: 72 RVA: 0x0002C5C0 File Offset: 0x0002A7C0
	public static method __m2mep@??1failure@ios_base@std@@$$FUEAA@XZ;

	// Token: 0x04000049 RID: 73 RVA: 0x0002C140 File Offset: 0x0002A340
	public static method __m2mep@??0failure@ios_base@std@@$$FQEAA@AEBV012@@Z;

	// Token: 0x0400004A RID: 74 RVA: 0x0002C108 File Offset: 0x0002A308
	public static method __m2mep@??0system_error@std@@$$FQEAA@AEBV01@@Z;

	// Token: 0x0400004B RID: 75 RVA: 0x0002C0B8 File Offset: 0x0002A2B8
	public static method __m2mep@??0_System_error@std@@$$FQEAA@AEBV01@@Z;

	// Token: 0x0400004C RID: 76 RVA: 0x0002C2A0 File Offset: 0x0002A4A0
	public static method __m2mep@?PtrToStringChars@@$$FYMPE$CB_WPE$ABVString@System@@@Z;

	// Token: 0x0400004D RID: 77 RVA: 0x0002C2B0 File Offset: 0x0002A4B0
	public static method __m2mep@?GetAnsiStringSize@details@interop@msclr@@$$FYM_KPE$AAVString@System@@@Z;

	// Token: 0x0400004E RID: 78 RVA: 0x0002C2C0 File Offset: 0x0002A4C0
	public static method __m2mep@?WriteAnsiString@details@interop@msclr@@$$FYMXPEAD_KPE$AAVString@System@@@Z;

	// Token: 0x0400004F RID: 79 RVA: 0x0002C2D0 File Offset: 0x0002A4D0
	public static method __m2mep@?release@?$char_buffer@D@details@interop@msclr@@$$FQEAAPEADXZ;

	// Token: 0x04000050 RID: 80 RVA: 0x0002C2E0 File Offset: 0x0002A4E0
	public static method __m2mep@?get@?$char_buffer@D@details@interop@msclr@@$$FQEBAPEADXZ;

	// Token: 0x04000051 RID: 81 RVA: 0x0002C2F0 File Offset: 0x0002A4F0
	public static method __m2mep@??1?$char_buffer@D@details@interop@msclr@@$$FQEAA@XZ;

	// Token: 0x04000052 RID: 82 RVA: 0x0002C300 File Offset: 0x0002A500
	public static method __m2mep@??0?$char_buffer@D@details@interop@msclr@@$$FQEAA@_K@Z;

	// Token: 0x04000053 RID: 83 RVA: 0x0002C5A0 File Offset: 0x0002A7A0
	public static method __m2mep@??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@$$FQEAA@XZ;

	// Token: 0x04000054 RID: 84 RVA: 0x0002C150 File Offset: 0x0002A350
	public static method __m2mep@??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@$$FQEAA@AEBV01@@Z;

	// Token: 0x04000055 RID: 85 RVA: 0x0002C580 File Offset: 0x0002A780
	public static method __m2mep@??1?$_String_alloc@U?$_String_base_types@DV?$allocator@D@std@@@std@@@std@@$$FQEAA@XZ;

	// Token: 0x04000056 RID: 86 RVA: 0x0002C540 File Offset: 0x0002A740
	public static method __m2mep@??1?$_Compressed_pair@V?$allocator@D@std@@V?$_String_val@U?$_Simple_types@D@std@@@2@$00@std@@$$FQEAA@XZ;

	// Token: 0x04000057 RID: 87 RVA: 0x0002C460 File Offset: 0x0002A660
	public static method __m2mep@??1?$_String_val@U?$_Simple_types@D@std@@@std@@$$FQEAA@XZ;

	// Token: 0x04000058 RID: 88 RVA: 0x0002C310 File Offset: 0x0002A510
	public static method __m2mep@??1_Bxty@?$_String_val@U?$_Simple_types@D@std@@@std@@$$FQEAA@XZ;

	// Token: 0x04000059 RID: 89 RVA: 0x0002C320 File Offset: 0x0002A520
	public static method __m2mep@?_Large_string_engaged@?$_String_val@U?$_Simple_types@D@std@@@std@@$$FQEBA_NXZ;

	// Token: 0x0400005A RID: 90 RVA: 0x0002C470 File Offset: 0x0002A670
	public static method __m2mep@?_Myptr@?$_String_val@U?$_Simple_types@D@std@@@std@@$$FQEBAPEBDXZ;

	// Token: 0x0400005B RID: 91 RVA: 0x0002C330 File Offset: 0x0002A530
	public static method __m2mep@?select_on_container_copy_construction@?$_Default_allocator_traits@V?$allocator@D@std@@@std@@$$FSA?AV?$allocator@D@2@AEBV32@@Z;

	// Token: 0x0400005C RID: 92 RVA: 0x0002C480 File Offset: 0x0002A680
	public static method __m2mep@?_Get_data@?$_String_alloc@U?$_String_base_types@DV?$allocator@D@std@@@std@@@std@@$$FQEBAAEBV?$_String_val@U?$_Simple_types@D@std@@@2@XZ;

	// Token: 0x0400005D RID: 93 RVA: 0x0002C490 File Offset: 0x0002A690
	public static method __m2mep@?_Get_data@?$_String_alloc@U?$_String_base_types@DV?$allocator@D@std@@@std@@@std@@$$FQEAAAEAV?$_String_val@U?$_Simple_types@D@std@@@2@XZ;

	// Token: 0x0400005E RID: 94 RVA: 0x0002C4A0 File Offset: 0x0002A6A0
	public static method __m2mep@?_Getal@?$_String_alloc@U?$_String_base_types@DV?$allocator@D@std@@@std@@@std@@$$FQEBAAEBV?$allocator@D@2@XZ;

	// Token: 0x0400005F RID: 95 RVA: 0x0002C4B0 File Offset: 0x0002A6B0
	public static method __m2mep@?_Getal@?$_String_alloc@U?$_String_base_types@DV?$allocator@D@std@@@std@@@std@@$$FQEAAAEAV?$allocator@D@2@XZ;

	// Token: 0x04000060 RID: 96 RVA: 0x0002C4C0 File Offset: 0x0002A6C0
	public static method __m2mep@?_Orphan_all@?$_String_alloc@U?$_String_base_types@DV?$allocator@D@std@@@std@@@std@@$$FQEAAXXZ;

	// Token: 0x04000061 RID: 97 RVA: 0x0002C550 File Offset: 0x0002A750
	public static method __m2mep@?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@$$FQEAAXXZ;

	// Token: 0x04000062 RID: 98 RVA: 0x0002C4D0 File Offset: 0x0002A6D0
	public static method __m2mep@?max_size@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@$$FQEBA_KXZ;

	// Token: 0x04000063 RID: 99 RVA: 0x0002C340 File Offset: 0x0002A540
	public static method __m2mep@??$_Max_value@_K@std@@$$FYAAEB_KAEB_K0@Z;

	// Token: 0x04000064 RID: 100 RVA: 0x0002C590 File Offset: 0x0002A790
	public static method __m2mep@?_Construct_lv_contents@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@$$FQEAAXAEBV12@@Z;

	// Token: 0x04000065 RID: 101 RVA: 0x0002C560 File Offset: 0x0002A760
	public static method __m2mep@?allocate@?$allocator@D@std@@$$FQEAAPEAD_K@Z;

	// Token: 0x04000066 RID: 102 RVA: 0x0002C4E0 File Offset: 0x0002A6E0
	public static method __m2mep@?deallocate@?$allocator@D@std@@$$FQEAAXQEAD_K@Z;

	// Token: 0x04000067 RID: 103 RVA: 0x0002C350 File Offset: 0x0002A550
	public static method __m2mep@?_Get_second@?$_Compressed_pair@V?$allocator@D@std@@V?$_String_val@U?$_Simple_types@D@std@@@2@$00@std@@$$FQEBAAEBV?$_String_val@U?$_Simple_types@D@std@@@2@XZ;

	// Token: 0x04000068 RID: 104 RVA: 0x0002C360 File Offset: 0x0002A560
	public static method __m2mep@?_Get_second@?$_Compressed_pair@V?$allocator@D@std@@V?$_String_val@U?$_Simple_types@D@std@@@2@$00@std@@$$FQEAAAEAV?$_String_val@U?$_Simple_types@D@std@@@2@XZ;

	// Token: 0x04000069 RID: 105 RVA: 0x0002C370 File Offset: 0x0002A570
	public static method __m2mep@?_Get_first@?$_Compressed_pair@V?$allocator@D@std@@V?$_String_val@U?$_Simple_types@D@std@@@2@$00@std@@$$FQEBAAEBV?$allocator@D@2@XZ;

	// Token: 0x0400006A RID: 106 RVA: 0x0002C380 File Offset: 0x0002A580
	public static method __m2mep@?_Get_first@?$_Compressed_pair@V?$allocator@D@std@@V?$_String_val@U?$_Simple_types@D@std@@@2@$00@std@@$$FQEAAAEAV?$allocator@D@2@XZ;

	// Token: 0x0400006B RID: 107 RVA: 0x0002C390 File Offset: 0x0002A590
	public static method __m2mep@?max_size@?$_Default_allocator_traits@V?$allocator@D@std@@@std@@$$FSA_KAEBV?$allocator@D@2@@Z;

	// Token: 0x0400006C RID: 108 RVA: 0x0002C3A0 File Offset: 0x0002A5A0
	public static method __m2mep@??$_Min_value@_K@std@@$$FYAAEB_KAEB_K0@Z;

	// Token: 0x0400006D RID: 109 RVA: 0x0002C3B0 File Offset: 0x0002A5B0
	public static method __m2mep@??$_Unfancy@D@std@@$$FYAPEADPEAD@Z;

	// Token: 0x0400006E RID: 110 RVA: 0x0002C570 File Offset: 0x0002A770
	public static method __m2mep@??$?0V?$allocator@D@std@@X@?$_String_alloc@U?$_String_base_types@DV?$allocator@D@std@@@std@@@std@@$$FQEAA@$$QEAV?$allocator@D@1@@Z;

	// Token: 0x0400006F RID: 111 RVA: 0x0002C3C0 File Offset: 0x0002A5C0
	public static method __m2mep@??$addressof@PEAD@std@@$$FYAPEAPEADAEAPEAD@Z;

	// Token: 0x04000070 RID: 112 RVA: 0x0002C3D0 File Offset: 0x0002A5D0
	public static method __m2mep@??$destroy@PEAD@?$_Default_allocator_traits@V?$allocator@D@std@@@std@@$$FSAXAEAV?$allocator@D@1@QEAPEAD@Z;

	// Token: 0x04000071 RID: 113 RVA: 0x0002C4F0 File Offset: 0x0002A6F0
	public static method __m2mep@??$construct@PEADAEBQEAD@?$_Default_allocator_traits@V?$allocator@D@std@@@std@@$$FSAXAEAV?$allocator@D@1@QEAPEADAEBQEAD@Z;

	// Token: 0x04000072 RID: 114 RVA: 0x0002C500 File Offset: 0x0002A700
	public static method __m2mep@??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@$$FYAPEAX_K@Z;

	// Token: 0x04000073 RID: 115 RVA: 0x0002C3E0 File Offset: 0x0002A5E0
	public static method __m2mep@??$_Deallocate@$0BA@$0A@@std@@$$FYAXPEAX_K@Z;

	// Token: 0x04000074 RID: 116 RVA: 0x0002C0E0 File Offset: 0x0002A2E0
	public static method __m2mep@??0bad_cast@std@@$$FQEAA@AEBV01@@Z;

	// Token: 0x04000075 RID: 117 RVA: 0x0002C510 File Offset: 0x0002A710
	public static method __m2mep@??0?$_String_val@U?$_Simple_types@D@std@@@std@@$$FQEAA@XZ;

	// Token: 0x04000076 RID: 118 RVA: 0x0002C400 File Offset: 0x0002A600
	public static method __m2mep@??0_Bxty@?$_String_val@U?$_Simple_types@D@std@@@std@@$$FQEAA@XZ;

	// Token: 0x04000077 RID: 119 RVA: 0x0002C410 File Offset: 0x0002A610
	public static method __m2mep@??$forward@V?$allocator@D@std@@@std@@$$FYA$$QEAV?$allocator@D@0@AEAV10@@Z;

	// Token: 0x04000078 RID: 120 RVA: 0x0002C520 File Offset: 0x0002A720
	public static method __m2mep@??$?0V?$allocator@D@std@@$$V@?$_Compressed_pair@V?$allocator@D@std@@V?$_String_val@U?$_Simple_types@D@std@@@2@$00@std@@$$FQEAA@U_One_then_variadic_args_t@1@$$QEAV?$allocator@D@1@@Z;

	// Token: 0x04000079 RID: 121 RVA: 0x0002C420 File Offset: 0x0002A620
	public static method __m2mep@??$forward@AEBQEAD@std@@$$FYAAEBQEADAEBQEAD@Z;

	// Token: 0x0400007A RID: 122 RVA: 0x0002C430 File Offset: 0x0002A630
	public static method __m2mep@??$_Allocate_manually_vector_aligned@U_Default_allocate_traits@std@@@std@@$$FYAPEAX_K@Z;

	// Token: 0x0400007B RID: 123 RVA: 0x00011768 File Offset: 0x0000FB68
	internal static __s_GUID _GUID_cb2f6723_ab3a_11d2_9c40_00c04fa30a3e;

	// Token: 0x0400007C RID: 124 RVA: 0x00011758 File Offset: 0x0000FB58
	internal static __s_GUID _GUID_cb2f6722_ab3a_11d2_9c40_00c04fa30a3e;

	// Token: 0x0400007D RID: 125
	[FixedAddressValueType]
	internal static int ?Uninitialized@CurrentDomain@<CrtImplementationDetails>@@$$Q2HA;

	// Token: 0x0400007E RID: 126 RVA: 0x00011608 File Offset: 0x0000FA08
	internal static method ?Uninitialized$initializer$@CurrentDomain@<CrtImplementationDetails>@@$$Q2P6MXXZEA;

	// Token: 0x0400007F RID: 127
	[FixedAddressValueType]
	internal static Progress ?InitializedNative@CurrentDomain@<CrtImplementationDetails>@@$$Q2W4Progress@2@A;

	// Token: 0x04000080 RID: 128 RVA: 0x00011620 File Offset: 0x0000FA20
	internal static method ?InitializedNative$initializer$@CurrentDomain@<CrtImplementationDetails>@@$$Q2P6MXXZEA;

	// Token: 0x04000081 RID: 129 RVA: 0x00011778 File Offset: 0x0000FB78
	internal static __s_GUID _GUID_90f1a06c_7712_4762_86b5_7a5eba6bdb02;

	// Token: 0x04000082 RID: 130 RVA: 0x00011788 File Offset: 0x0000FB88
	internal static __s_GUID _GUID_90f1a06e_7712_4762_86b5_7a5eba6bdb02;

	// Token: 0x04000083 RID: 131
	[FixedAddressValueType]
	internal static Progress ?InitializedPerAppDomain@CurrentDomain@<CrtImplementationDetails>@@$$Q2W4Progress@2@A;

	// Token: 0x04000084 RID: 132 RVA: 0x0002D5F8 File Offset: 0x00000000
	internal static bool ?Entered@DefaultDomain@<CrtImplementationDetails>@@2_NA;

	// Token: 0x04000085 RID: 133 RVA: 0x0002C604 File Offset: 0x0002A804
	internal static TriBool ?hasNative@DefaultDomain@<CrtImplementationDetails>@@0W4TriBool@2@A;

	// Token: 0x04000086 RID: 134 RVA: 0x0002D5FB File Offset: 0x00000000
	internal static bool ?InitializedPerProcess@DefaultDomain@<CrtImplementationDetails>@@2_NA;

	// Token: 0x04000087 RID: 135 RVA: 0x0002D5FC File Offset: 0x00000000
	internal static int ?Count@AllDomains@<CrtImplementationDetails>@@2HA;

	// Token: 0x04000088 RID: 136
	[FixedAddressValueType]
	internal static int ?Initialized@CurrentDomain@<CrtImplementationDetails>@@$$Q2HA;

	// Token: 0x04000089 RID: 137 RVA: 0x0002D5FA File Offset: 0x00000000
	internal static bool ?InitializedNativeFromCCTOR@DefaultDomain@<CrtImplementationDetails>@@2_NA;

	// Token: 0x0400008A RID: 138
	[FixedAddressValueType]
	internal static bool ?IsDefaultDomain@CurrentDomain@<CrtImplementationDetails>@@$$Q2_NA;

	// Token: 0x0400008B RID: 139
	[FixedAddressValueType]
	internal static Progress ?InitializedVtables@CurrentDomain@<CrtImplementationDetails>@@$$Q2W4Progress@2@A;

	// Token: 0x0400008C RID: 140 RVA: 0x0002D5F9 File Offset: 0x00000000
	internal static bool ?InitializedNative@DefaultDomain@<CrtImplementationDetails>@@2_NA;

	// Token: 0x0400008D RID: 141
	[FixedAddressValueType]
	internal static Progress ?InitializedPerProcess@CurrentDomain@<CrtImplementationDetails>@@$$Q2W4Progress@2@A;

	// Token: 0x0400008E RID: 142 RVA: 0x0002C600 File Offset: 0x0002A800
	internal static TriBool ?hasPerProcess@DefaultDomain@<CrtImplementationDetails>@@0W4TriBool@2@A;

	// Token: 0x0400008F RID: 143 RVA: 0x00011648 File Offset: 0x0000FA48
	internal static $ArrayType$$$BY00Q6MPEBXXZ __xc_mp_z;

	// Token: 0x04000090 RID: 144 RVA: 0x00011658 File Offset: 0x0000FA58
	internal static $ArrayType$$$BY00Q6MPEBXXZ __xi_vt_z;

	// Token: 0x04000091 RID: 145 RVA: 0x00011628 File Offset: 0x0000FA28
	internal static method ?InitializedPerProcess$initializer$@CurrentDomain@<CrtImplementationDetails>@@$$Q2P6MXXZEA;

	// Token: 0x04000092 RID: 146 RVA: 0x000115F8 File Offset: 0x0000F9F8
	internal static $ArrayType$$$BY00Q6MPEBXXZ __xc_ma_a;

	// Token: 0x04000093 RID: 147 RVA: 0x00011638 File Offset: 0x0000FA38
	internal static $ArrayType$$$BY00Q6MPEBXXZ __xc_ma_z;

	// Token: 0x04000094 RID: 148 RVA: 0x00011630 File Offset: 0x0000FA30
	internal static method ?InitializedPerAppDomain$initializer$@CurrentDomain@<CrtImplementationDetails>@@$$Q2P6MXXZEA;

	// Token: 0x04000095 RID: 149 RVA: 0x00011650 File Offset: 0x0000FA50
	internal static $ArrayType$$$BY00Q6MPEBXXZ __xi_vt_a;

	// Token: 0x04000096 RID: 150 RVA: 0x00011600 File Offset: 0x0000FA00
	internal static method ?Initialized$initializer$@CurrentDomain@<CrtImplementationDetails>@@$$Q2P6MXXZEA;

	// Token: 0x04000097 RID: 151 RVA: 0x00011640 File Offset: 0x0000FA40
	internal static $ArrayType$$$BY00Q6MPEBXXZ __xc_mp_a;

	// Token: 0x04000098 RID: 152 RVA: 0x00011618 File Offset: 0x0000FA18
	internal static method ?InitializedVtables$initializer$@CurrentDomain@<CrtImplementationDetails>@@$$Q2P6MXXZEA;

	// Token: 0x04000099 RID: 153 RVA: 0x00011610 File Offset: 0x0000FA10
	internal static method ?IsDefaultDomain$initializer$@CurrentDomain@<CrtImplementationDetails>@@$$Q2P6MXXZEA;

	// Token: 0x0400009A RID: 154 RVA: 0x0002C788 File Offset: 0x0002A988
	public static method __m2mep@?ThrowNestedModuleLoadException@<CrtImplementationDetails>@@$$FYMXPE$AAVException@System@@0@Z;

	// Token: 0x0400009B RID: 155 RVA: 0x0002C618 File Offset: 0x0002A818
	public static method __m2mep@?ThrowModuleLoadException@<CrtImplementationDetails>@@$$FYMXPE$AAVString@System@@@Z;

	// Token: 0x0400009C RID: 156 RVA: 0x0002C628 File Offset: 0x0002A828
	public static method __m2mep@?ThrowModuleLoadException@<CrtImplementationDetails>@@$$FYMXPE$AAVString@System@@PE$AAVException@3@@Z;

	// Token: 0x0400009D RID: 157 RVA: 0x0002C638 File Offset: 0x0002A838
	public static method __m2mep@?RegisterModuleUninitializer@<CrtImplementationDetails>@@$$FYMXPE$AAVEventHandler@System@@@Z;

	// Token: 0x0400009E RID: 158 RVA: 0x0002C648 File Offset: 0x0002A848
	public static method __m2mep@?FromGUID@<CrtImplementationDetails>@@$$FYM?AVGuid@System@@AEBU_GUID@@@Z;

	// Token: 0x0400009F RID: 159 RVA: 0x0002C658 File Offset: 0x0002A858
	public static method __m2mep@?__get_default_appdomain@@$$FYAJPEAPEAUIUnknown@@@Z;

	// Token: 0x040000A0 RID: 160 RVA: 0x0002C668 File Offset: 0x0002A868
	public static method __m2mep@?__release_appdomain@@$$FYAXPEAUIUnknown@@@Z;

	// Token: 0x040000A1 RID: 161 RVA: 0x0002C678 File Offset: 0x0002A878
	public static method __m2mep@?GetDefaultDomain@<CrtImplementationDetails>@@$$FYMPE$AAVAppDomain@System@@XZ;

	// Token: 0x040000A2 RID: 162 RVA: 0x0002C688 File Offset: 0x0002A888
	public static method __m2mep@?DoCallBackInDefaultDomain@<CrtImplementationDetails>@@$$FYAXP6AJPEAX@Z0@Z;

	// Token: 0x040000A3 RID: 163 RVA: 0x0002C698 File Offset: 0x0002A898
	public static method __m2mep@?__scrt_is_safe_for_managed_code@@$$FYA_NXZ;

	// Token: 0x040000A4 RID: 164 RVA: 0x0002C6A8 File Offset: 0x0002A8A8
	public static method __m2mep@?DoNothing@DefaultDomain@<CrtImplementationDetails>@@$$FCAJPEAX@Z;

	// Token: 0x040000A5 RID: 165 RVA: 0x0002C6B8 File Offset: 0x0002A8B8
	public static method __m2mep@?HasPerProcess@DefaultDomain@<CrtImplementationDetails>@@$$FSA_NXZ;

	// Token: 0x040000A6 RID: 166 RVA: 0x0002C6C8 File Offset: 0x0002A8C8
	public static method __m2mep@?HasNative@DefaultDomain@<CrtImplementationDetails>@@$$FSA_NXZ;

	// Token: 0x040000A7 RID: 167 RVA: 0x0002C6D8 File Offset: 0x0002A8D8
	public static method __m2mep@?NeedsInitialization@DefaultDomain@<CrtImplementationDetails>@@$$FSA_NXZ;

	// Token: 0x040000A8 RID: 168 RVA: 0x0002C6E8 File Offset: 0x0002A8E8
	public static method __m2mep@?NeedsUninitialization@DefaultDomain@<CrtImplementationDetails>@@$$FSA_NXZ;

	// Token: 0x040000A9 RID: 169 RVA: 0x0002C6F8 File Offset: 0x0002A8F8
	public static method __m2mep@?Initialize@DefaultDomain@<CrtImplementationDetails>@@$$FSAXXZ;

	// Token: 0x040000AA RID: 170 RVA: 0x0002C798 File Offset: 0x0002A998
	public static method __m2mep@?InitializeVtables@LanguageSupport@<CrtImplementationDetails>@@$$FAEAAXXZ;

	// Token: 0x040000AB RID: 171 RVA: 0x0002C7A8 File Offset: 0x0002A9A8
	public static method __m2mep@?InitializeDefaultAppDomain@LanguageSupport@<CrtImplementationDetails>@@$$FAEAAXXZ;

	// Token: 0x040000AC RID: 172 RVA: 0x0002C7B8 File Offset: 0x0002A9B8
	public static method __m2mep@?InitializeNative@LanguageSupport@<CrtImplementationDetails>@@$$FAEAAXXZ;

	// Token: 0x040000AD RID: 173 RVA: 0x0002C7C8 File Offset: 0x0002A9C8
	public static method __m2mep@?InitializePerProcess@LanguageSupport@<CrtImplementationDetails>@@$$FAEAAXXZ;

	// Token: 0x040000AE RID: 174 RVA: 0x0002C7D8 File Offset: 0x0002A9D8
	public static method __m2mep@?InitializePerAppDomain@LanguageSupport@<CrtImplementationDetails>@@$$FAEAAXXZ;

	// Token: 0x040000AF RID: 175 RVA: 0x0002C7E8 File Offset: 0x0002A9E8
	public static method __m2mep@?InitializeUninitializer@LanguageSupport@<CrtImplementationDetails>@@$$FAEAAXXZ;

	// Token: 0x040000B0 RID: 176 RVA: 0x0002C7F8 File Offset: 0x0002A9F8
	public static method __m2mep@?_Initialize@LanguageSupport@<CrtImplementationDetails>@@$$FAEAAXXZ;

	// Token: 0x040000B1 RID: 177 RVA: 0x0002C708 File Offset: 0x0002A908
	public static method __m2mep@?UninitializeAppDomain@LanguageSupport@<CrtImplementationDetails>@@$$FCAXXZ;

	// Token: 0x040000B2 RID: 178 RVA: 0x0002C718 File Offset: 0x0002A918
	public static method __m2mep@?_UninitializeDefaultDomain@LanguageSupport@<CrtImplementationDetails>@@$$FCAJPEAX@Z;

	// Token: 0x040000B3 RID: 179 RVA: 0x0002C728 File Offset: 0x0002A928
	public static method __m2mep@?UninitializeDefaultDomain@LanguageSupport@<CrtImplementationDetails>@@$$FCAXXZ;

	// Token: 0x040000B4 RID: 180 RVA: 0x0002C738 File Offset: 0x0002A938
	public static method __m2mep@?DomainUnload@LanguageSupport@<CrtImplementationDetails>@@$$FCMXPE$AAVObject@System@@PE$AAVEventArgs@4@@Z;

	// Token: 0x040000B5 RID: 181 RVA: 0x0002C808 File Offset: 0x0002AA08
	public static method __m2mep@?Cleanup@LanguageSupport@<CrtImplementationDetails>@@$$FAEAMXPE$AAVException@System@@@Z;

	// Token: 0x040000B6 RID: 182 RVA: 0x0002C818 File Offset: 0x0002AA18
	public static method __m2mep@??0LanguageSupport@<CrtImplementationDetails>@@$$FQEAA@XZ;

	// Token: 0x040000B7 RID: 183 RVA: 0x0002C828 File Offset: 0x0002AA28
	public static method __m2mep@??1LanguageSupport@<CrtImplementationDetails>@@$$FQEAA@XZ;

	// Token: 0x040000B8 RID: 184 RVA: 0x0002C838 File Offset: 0x0002AA38
	public static method __m2mep@?Initialize@LanguageSupport@<CrtImplementationDetails>@@$$FQEAAXXZ;

	// Token: 0x040000B9 RID: 185 RVA: 0x0002C608 File Offset: 0x0002A808
	public static method cctor@@$$FYMXXZ;

	// Token: 0x040000BA RID: 186 RVA: 0x0002C748 File Offset: 0x0002A948
	public static method __m2mep@??B?$gcroot@PE$AAVString@System@@@@$$FQEBMPE$AAVString@System@@XZ;

	// Token: 0x040000BB RID: 187 RVA: 0x0002C758 File Offset: 0x0002A958
	public static method __m2mep@??4?$gcroot@PE$AAVString@System@@@@$$FQEAMAEAU0@PE$AAVString@System@@@Z;

	// Token: 0x040000BC RID: 188 RVA: 0x0002C768 File Offset: 0x0002A968
	public static method __m2mep@??1?$gcroot@PE$AAVString@System@@@@$$FQEAA@XZ;

	// Token: 0x040000BD RID: 189 RVA: 0x0002C778 File Offset: 0x0002A978
	public static method __m2mep@??0?$gcroot@PE$AAVString@System@@@@$$FQEAA@XZ;

	// Token: 0x040000BE RID: 190 RVA: 0x00011798 File Offset: 0x0000FB98
	public unsafe static int** __unep@?DoNothing@DefaultDomain@<CrtImplementationDetails>@@$$FCAJPEAX@Z;

	// Token: 0x040000BF RID: 191 RVA: 0x000117A0 File Offset: 0x0000FBA0
	public unsafe static int** __unep@?_UninitializeDefaultDomain@LanguageSupport@<CrtImplementationDetails>@@$$FCAJPEAX@Z;

	// Token: 0x040000C0 RID: 192 RVA: 0x0002C880 File Offset: 0x0002AA80
	public static method __m2mep@?___CxxCallUnwindDtor@@$$J0YMXP6MXPEAX@Z0@Z;

	// Token: 0x040000C1 RID: 193 RVA: 0x0002C890 File Offset: 0x0002AA90
	public static method __m2mep@?___CxxCallUnwindDelDtor@@$$J0YMXP6MXPEAX@Z0@Z;

	// Token: 0x040000C2 RID: 194 RVA: 0x0002C8A0 File Offset: 0x0002AAA0
	public static method __m2mep@?___CxxCallUnwindVecDtor@@$$J0YMXP6MXPEAX_KHP6MX0@Z@Z01H2@Z;

	// Token: 0x040000C3 RID: 195 RVA: 0x0002C8C0 File Offset: 0x0002AAC0
	public static method __m2mep@??_M@$$FYMXPEAX_K1P6MX0@Z@Z;

	// Token: 0x040000C4 RID: 196 RVA: 0x0002C8E0 File Offset: 0x0002AAE0
	public static method __m2mep@?ArrayUnwindFilter@?A0x94e83ccb@@$$FYAHPEAU_EXCEPTION_POINTERS@@@Z;

	// Token: 0x040000C5 RID: 197 RVA: 0x0002C8B0 File Offset: 0x0002AAB0
	public static method __m2mep@?__ArrayUnwind@@$$FYMXPEAX_K1P6MX0@Z@Z;

	// Token: 0x040000C6 RID: 198 RVA: 0x0002C8D0 File Offset: 0x0002AAD0
	public static method __m2mep@??_M@$$FYMXPEAX_KHP6MX0@Z@Z;

	// Token: 0x040000C7 RID: 199 RVA: 0x0002D768 File Offset: 0x00000000
	internal unsafe static method* __onexitbegin_m;

	// Token: 0x040000C8 RID: 200 RVA: 0x0002D760 File Offset: 0x00000000
	internal static ulong __exit_list_size;

	// Token: 0x040000C9 RID: 201
	[FixedAddressValueType]
	internal unsafe static method* __onexitend_app_domain;

	// Token: 0x040000CA RID: 202
	[FixedAddressValueType]
	internal unsafe static void* ?_lock@AtExitLock@<CrtImplementationDetails>@@$$Q0PEAXEA;

	// Token: 0x040000CB RID: 203
	[FixedAddressValueType]
	internal static int ?_ref_count@AtExitLock@<CrtImplementationDetails>@@$$Q0HA;

	// Token: 0x040000CC RID: 204 RVA: 0x0002D770 File Offset: 0x00000000
	internal unsafe static method* __onexitend_m;

	// Token: 0x040000CD RID: 205
	[FixedAddressValueType]
	internal static ulong __exit_list_size_app_domain;

	// Token: 0x040000CE RID: 206
	[FixedAddressValueType]
	internal unsafe static method* __onexitbegin_app_domain;

	// Token: 0x040000CF RID: 207 RVA: 0x0002C980 File Offset: 0x0002AB80
	public static method __m2mep@?_handle@AtExitLock@<CrtImplementationDetails>@@$$FCMPE$AA__ZVGCHandle@InteropServices@Runtime@System@@XZ;

	// Token: 0x040000D0 RID: 208 RVA: 0x0002CA30 File Offset: 0x0002AC30
	public static method __m2mep@?_lock_Construct@AtExitLock@<CrtImplementationDetails>@@$$FCMXPE$AAVObject@System@@@Z;

	// Token: 0x040000D1 RID: 209 RVA: 0x0002C990 File Offset: 0x0002AB90
	public static method __m2mep@?_lock_Set@AtExitLock@<CrtImplementationDetails>@@$$FCMXPE$AAVObject@System@@@Z;

	// Token: 0x040000D2 RID: 210 RVA: 0x0002C9A0 File Offset: 0x0002ABA0
	public static method __m2mep@?_lock_Get@AtExitLock@<CrtImplementationDetails>@@$$FCMPE$AAVObject@System@@XZ;

	// Token: 0x040000D3 RID: 211 RVA: 0x0002C9B0 File Offset: 0x0002ABB0
	public static method __m2mep@?_lock_Destruct@AtExitLock@<CrtImplementationDetails>@@$$FCAXXZ;

	// Token: 0x040000D4 RID: 212 RVA: 0x0002C9C0 File Offset: 0x0002ABC0
	public static method __m2mep@?IsInitialized@AtExitLock@<CrtImplementationDetails>@@$$FSA_NXZ;

	// Token: 0x040000D5 RID: 213 RVA: 0x0002CA40 File Offset: 0x0002AC40
	public static method __m2mep@?AddRef@AtExitLock@<CrtImplementationDetails>@@$$FSAXXZ;

	// Token: 0x040000D6 RID: 214 RVA: 0x0002C9D0 File Offset: 0x0002ABD0
	public static method __m2mep@?RemoveRef@AtExitLock@<CrtImplementationDetails>@@$$FSAXXZ;

	// Token: 0x040000D7 RID: 215 RVA: 0x0002C9E0 File Offset: 0x0002ABE0
	public static method __m2mep@?Enter@AtExitLock@<CrtImplementationDetails>@@$$FSAXXZ;

	// Token: 0x040000D8 RID: 216 RVA: 0x0002C9F0 File Offset: 0x0002ABF0
	public static method __m2mep@?Exit@AtExitLock@<CrtImplementationDetails>@@$$FSAXXZ;

	// Token: 0x040000D9 RID: 217 RVA: 0x0002CA00 File Offset: 0x0002AC00
	public static method __m2mep@?__global_lock@?A0x5f1aee9f@@$$FYA_NXZ;

	// Token: 0x040000DA RID: 218 RVA: 0x0002CA10 File Offset: 0x0002AC10
	public static method __m2mep@?__global_unlock@?A0x5f1aee9f@@$$FYA_NXZ;

	// Token: 0x040000DB RID: 219 RVA: 0x0002CA50 File Offset: 0x0002AC50
	public static method __m2mep@?__alloc_global_lock@?A0x5f1aee9f@@$$FYA_NXZ;

	// Token: 0x040000DC RID: 220 RVA: 0x0002CA20 File Offset: 0x0002AC20
	public static method __m2mep@?__dealloc_global_lock@?A0x5f1aee9f@@$$FYAXXZ;

	// Token: 0x040000DD RID: 221 RVA: 0x0002C8F0 File Offset: 0x0002AAF0
	public static method __m2mep@?_atexit_helper@@$$J0YMHP6MXXZPEA_KPEAPEAP6MXXZ2@Z;

	// Token: 0x040000DE RID: 222 RVA: 0x0002C900 File Offset: 0x0002AB00
	public static method __m2mep@?_exit_callback@@$$J0YMXXZ;

	// Token: 0x040000DF RID: 223 RVA: 0x0002C940 File Offset: 0x0002AB40
	public static method __m2mep@?_initatexit_m@@$$J0YMHXZ;

	// Token: 0x040000E0 RID: 224 RVA: 0x0002C950 File Offset: 0x0002AB50
	public static method __m2mep@?_onexit_m@@$$J0YMP6MHXZP6MHXZ@Z;

	// Token: 0x040000E1 RID: 225 RVA: 0x0002C910 File Offset: 0x0002AB10
	public static method __m2mep@?_atexit_m@@$$J0YMHP6MXXZ@Z;

	// Token: 0x040000E2 RID: 226 RVA: 0x0002C960 File Offset: 0x0002AB60
	public static method __m2mep@?_initatexit_app_domain@@$$J0YMHXZ;

	// Token: 0x040000E3 RID: 227 RVA: 0x0002C920 File Offset: 0x0002AB20
	public static method __m2mep@?_app_exit_callback@@$$J0YMXXZ;

	// Token: 0x040000E4 RID: 228 RVA: 0x0002C970 File Offset: 0x0002AB70
	public static method __m2mep@?_onexit_m_appdomain@@$$J0YMP6MHXZP6MHXZ@Z;

	// Token: 0x040000E5 RID: 229 RVA: 0x0002C930 File Offset: 0x0002AB30
	public static method __m2mep@?_atexit_m_appdomain@@$$J0YMHP6MXXZ@Z;

	// Token: 0x040000E6 RID: 230 RVA: 0x0002CA60 File Offset: 0x0002AC60
	public static method __m2mep@?_initterm_e@@$$FYMHPEAP6AHXZ0@Z;

	// Token: 0x040000E7 RID: 231 RVA: 0x0002CA70 File Offset: 0x0002AC70
	public static method __m2mep@?_initterm@@$$FYMXPEAP6AXXZ0@Z;

	// Token: 0x040000E8 RID: 232 RVA: 0x0002CA90 File Offset: 0x0002AC90
	public static method __m2mep@?Handle@ThisModule@<CrtImplementationDetails>@@$$FCM?AVModuleHandle@System@@XZ;

	// Token: 0x040000E9 RID: 233 RVA: 0x0002CA80 File Offset: 0x0002AC80
	public static method __m2mep@?_initterm_m@@$$FYMXPEBQ6MPEBXXZ0@Z;

	// Token: 0x040000EA RID: 234 RVA: 0x0002CAA0 File Offset: 0x0002ACA0
	public static method __m2mep@??$ResolveMethod@$$A6MPEBXXZ@ThisModule@<CrtImplementationDetails>@@$$FSMP6MPEBXXZP6MPEBXXZ@Z;

	// Token: 0x040000EB RID: 235 RVA: 0x000116E0 File Offset: 0x0000FAE0
	internal static $ArrayType$$$BY01Q6AXXZ ??_7type_info@@6B@;

	// Token: 0x040000EC RID: 236 RVA: 0x000115D0 File Offset: 0x0000F9D0
	internal static $ArrayType$$$BY0A@P6AHXZ __xi_z;

	// Token: 0x040000ED RID: 237 RVA: 0x0002D010 File Offset: 0x00000000
	internal static __scrt_native_startup_state __scrt_current_native_startup_state;

	// Token: 0x040000EE RID: 238 RVA: 0x0002D018 File Offset: 0x00000000
	internal unsafe static void* __scrt_native_startup_lock;

	// Token: 0x040000EF RID: 239 RVA: 0x00011598 File Offset: 0x0000F998
	internal static $ArrayType$$$BY0A@P6AXXZ __xc_a;

	// Token: 0x040000F0 RID: 240 RVA: 0x000115C8 File Offset: 0x0000F9C8
	internal static $ArrayType$$$BY0A@P6AHXZ __xi_a;

	// Token: 0x040000F1 RID: 241 RVA: 0x0002C5D0 File Offset: 0x0002A7D0
	internal static uint __scrt_native_dllmain_reason;

	// Token: 0x040000F2 RID: 242 RVA: 0x000115C0 File Offset: 0x0000F9C0
	internal static $ArrayType$$$BY0A@P6AXXZ __xc_z;
}

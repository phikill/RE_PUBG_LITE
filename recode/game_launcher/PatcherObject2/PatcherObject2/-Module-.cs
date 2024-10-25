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
using CefSharp;
using CefSharp.Wpf;
using LauncherView;
using msclr.interop.details;
using Patcher;
using std;
using std.?append@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@$$FQEAAAEAV12@QEB_W_K@Z.__l2;
using std.?assign@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@$$FQEAAAEAV12@QEBD_K@Z.__l2;
using std.?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@$$FQEAAAEAV12@QEB_W_K@Z.__l2;
using std.?reserve@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@$$FQEAAX_K@Z.__l11;

// Token: 0x02000001 RID: 1
internal class <Module>
{
	// Token: 0x06000001 RID: 1 RVA: 0x000B468C File Offset: 0x000B3A8C
	internal unsafe static void {dtor}(exception* A_0)
	{
		*A_0 = ref <Module>.??_7exception@std@@6B@;
		<Module>.__std_exception_destroy(A_0 / sizeof(__std_exception_data) + 8L);
	}

	// Token: 0x06000002 RID: 2 RVA: 0x000B5044 File Offset: 0x000B4444
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

	// Token: 0x06000003 RID: 3 RVA: 0x000B46AC File Offset: 0x000B3AAC
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

	// Token: 0x06000004 RID: 4 RVA: 0x000B50A4 File Offset: 0x000B44A4
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

	// Token: 0x06000005 RID: 5 RVA: 0x000B5104 File Offset: 0x000B4504
	internal unsafe static void {dtor}(bad_cast* A_0)
	{
		*A_0 = ref <Module>.??_7exception@std@@6B@;
		<Module>.__std_exception_destroy(A_0 / sizeof(__std_exception_data) + 8L);
	}

	// Token: 0x06000006 RID: 6 RVA: 0x000B46E0 File Offset: 0x000B3AE0
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

	// Token: 0x06000007 RID: 7 RVA: 0x000B4734 File Offset: 0x000B3B34
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

	// Token: 0x06000008 RID: 8 RVA: 0x000B49E8 File Offset: 0x000B3DE8
	internal unsafe static void {dtor}(char_buffer<char>* A_0)
	{
		<Module>.delete[](*A_0);
	}

	// Token: 0x06000009 RID: 9 RVA: 0x000B4DFC File Offset: 0x000B41FC
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
		<Module>.std._String_alloc<std::_String_base_types<char,std::allocator<char>\u0020>\u0020>.{dtor}(A_0);
	}

	// Token: 0x0600000A RID: 10 RVA: 0x000B49FC File Offset: 0x000B3DFC
	internal unsafe static void {dtor}(_String_val<std::_Simple_types<wchar_t>\u0020>._Bxty* A_0)
	{
	}

	// Token: 0x0600000B RID: 11 RVA: 0x000B4A0C File Offset: 0x000B3E0C
	internal unsafe static void {dtor}(_String_val<std::_Simple_types<char>\u0020>._Bxty* A_0)
	{
	}

	// Token: 0x0600000C RID: 12 RVA: 0x000B4E40 File Offset: 0x000B4240
	internal unsafe static void _Construct_lv_contents(basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>* A_0, basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>* _Right)
	{
		ulong num = *(_Right + 16L);
		char* ptr = _Right;
		if (((8L <= *(_Right + 24L)) ? 1 : 0) != 0)
		{
			ptr = *_Right;
		}
		if (num < 8L)
		{
			cpblk(A_0, ptr, 16L);
			*(A_0 + 16L) = num;
			*(A_0 + 24L) = 7L;
		}
		else
		{
			ulong num2 = <Module>.std.basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>.max_size(A_0);
			ulong num3 = num | 7L;
			ulong num4 = num3;
			ulong num5 = *(ref num2 < num3 ? ref num2 : ref num4);
			char* ptr2 = <Module>.std.allocator<wchar_t>.allocate(A_0, num5 + 1L);
			*A_0 = ptr2;
			cpblk(ptr2, ptr, (num + 1L) * 2L);
			*(A_0 + 16L) = num;
			*(A_0 + 24L) = num5;
		}
	}

	// Token: 0x0600000D RID: 13 RVA: 0x000B4D58 File Offset: 0x000B4158
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

	// Token: 0x0600000E RID: 14 RVA: 0x000B4C58 File Offset: 0x000B4058
	internal unsafe static ulong max_size(basic_string<char,std::char_traits<char>,std::allocator<char>\u0020>* A_0)
	{
		return long.MaxValue;
	}

	// Token: 0x0600000F RID: 15 RVA: 0x000B4ED4 File Offset: 0x000B42D4
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

	// Token: 0x06000010 RID: 16 RVA: 0x000B4C70 File Offset: 0x000B4070
	internal unsafe static ulong max_size(basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>* A_0)
	{
		return 9223372036854775806L;
	}

	// Token: 0x06000011 RID: 17 RVA: 0x000B4DB0 File Offset: 0x000B41B0
	internal unsafe static char* allocate(allocator<wchar_t>* A_0, ulong _Count)
	{
		ulong num = _Count * 2L;
		if (9223372036854775807L < _Count)
		{
			num = ulong.MaxValue;
		}
		else if (num < 4096UL)
		{
			if (num != 0UL)
			{
				return <Module>.@new(num);
			}
			return 0L;
		}
		return <Module>.std._Allocate_manually_vector_aligned<struct\u0020std::_Default_allocate_traits>(num);
	}

	// Token: 0x06000012 RID: 18 RVA: 0x000B4C88 File Offset: 0x000B4088
	internal unsafe static _String_val<std::_Simple_types<wchar_t>\u0020>* {ctor}(_String_val<std::_Simple_types<wchar_t>\u0020>* A_0)
	{
		try
		{
			*(A_0 + 16L) = 0L;
			*(A_0 + 24L) = 0L;
		}
		catch
		{
			<Module>.___CxxCallUnwindDtor(ldftn(std._String_val<std::_Simple_types<wchar_t>\u0020>._Bxty.{dtor}), A_0);
			throw;
		}
		return A_0;
	}

	// Token: 0x06000013 RID: 19 RVA: 0x000B4CD4 File Offset: 0x000B40D4
	internal unsafe static _Compressed_pair<std::allocator<wchar_t>,std::_String_val<std::_Simple_types<wchar_t>\u0020>,1>* {ctor}<class\u0020std::allocator<wchar_t>\u0020>(_Compressed_pair<std::allocator<wchar_t>,std::_String_val<std::_Simple_types<wchar_t>\u0020>,1>* A_0, _One_then_variadic_args_t __unnamed000, allocator<wchar_t>* _Val1)
	{
		try
		{
			*(A_0 + 16L) = 0L;
			*(A_0 + 24L) = 0L;
		}
		catch
		{
			<Module>.___CxxCallUnwindDtor(ldftn(std._String_val<std::_Simple_types<wchar_t>\u0020>._Bxty.{dtor}), A_0);
			throw;
		}
		return A_0;
	}

	// Token: 0x06000014 RID: 20 RVA: 0x000B4A1C File Offset: 0x000B3E1C
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

	// Token: 0x06000015 RID: 21 RVA: 0x000B6E10 File Offset: 0x000B6210
	internal unsafe static PatcherManager* {ctor}(PatcherManager* A_0, basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>* game_id)
	{
		*A_0 = <Module>.LP_Create(false);
		PatcherManager* ptr = A_0 + 8L;
		try
		{
			*(ptr + 16L) = 0L;
			*(ptr + 24L) = 0L;
		}
		catch
		{
			<Module>.___CxxCallUnwindDtor(ldftn(std._String_val<std::_Simple_types<wchar_t>\u0020>._Bxty.{dtor}), ptr);
			throw;
		}
		try
		{
			<Module>.std.basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>._Construct_lv_contents(ptr, game_id);
		}
		catch
		{
			<Module>.___CxxCallUnwindDtor(ldftn(std._String_alloc<std::_String_base_types<wchar_t,std::allocator<wchar_t>\u0020>\u0020>.{dtor}), ptr);
			throw;
		}
		try
		{
			<Module>.std.basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>.{ctor}(A_0 + 40L);
			try
			{
				<Module>.std.basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>.{ctor}(A_0 + 72L);
			}
			catch
			{
				<Module>.___CxxCallUnwindDtor(ldftn(std.basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>.{dtor}), (void*)(A_0 + (byte*)40L));
				throw;
			}
		}
		catch
		{
			<Module>.___CxxCallUnwindDtor(ldftn(std.basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>.{dtor}), (void*)(A_0 + (byte*)8L));
			throw;
		}
		return A_0;
	}

	// Token: 0x06000016 RID: 22 RVA: 0x000B6F04 File Offset: 0x000B6304
	internal unsafe static void {dtor}(PatcherManager* A_0)
	{
		try
		{
			try
			{
				try
				{
					<Module>.LP_Delete(*A_0);
				}
				catch
				{
					<Module>.___CxxCallUnwindDtor(ldftn(std.basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>.{dtor}), (void*)(A_0 + (byte*)72L));
					throw;
				}
				basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>* ptr = A_0 + 72L;
				try
				{
					<Module>.std.basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>._Tidy_deallocate(ptr);
				}
				catch
				{
					<Module>.___CxxCallUnwindDtor(ldftn(std._String_alloc<std::_String_base_types<wchar_t,std::allocator<wchar_t>\u0020>\u0020>.{dtor}), ptr);
					throw;
				}
			}
			catch
			{
				<Module>.___CxxCallUnwindDtor(ldftn(std.basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>.{dtor}), (void*)(A_0 + (byte*)40L));
				throw;
			}
			basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>* ptr2 = A_0 + 40L;
			try
			{
				<Module>.std.basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>._Tidy_deallocate(ptr2);
			}
			catch
			{
				<Module>.___CxxCallUnwindDtor(ldftn(std._String_alloc<std::_String_base_types<wchar_t,std::allocator<wchar_t>\u0020>\u0020>.{dtor}), ptr2);
				throw;
			}
		}
		catch
		{
			<Module>.___CxxCallUnwindDtor(ldftn(std.basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>.{dtor}), (void*)(A_0 + (byte*)8L));
			throw;
		}
		basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>* ptr3 = A_0 + 8L;
		try
		{
			<Module>.std.basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>._Tidy_deallocate(ptr3);
		}
		catch
		{
			<Module>.___CxxCallUnwindDtor(ldftn(std._String_alloc<std::_String_base_types<wchar_t,std::allocator<wchar_t>\u0020>\u0020>.{dtor}), ptr3);
			throw;
		}
	}

	// Token: 0x06000017 RID: 23 RVA: 0x000B8E04 File Offset: 0x000B8204
	internal unsafe static PatcherManager* GetPatcherManager(basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>* game_id)
	{
		basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020> basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>;
		_One_then_variadic_args_t one_then_variadic_args_t;
		allocator<wchar_t> allocator<wchar_t>;
		<Module>.std._Compressed_pair<std::allocator<wchar_t>,std::_String_val<std::_Simple_types<wchar_t>\u0020>,1>.{ctor}<class\u0020std::allocator<wchar_t>\u0020>(ref basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>, one_then_variadic_args_t, ref allocator<wchar_t>);
		try
		{
			<Module>.std.basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>._Construct_lv_contents(ref basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>, game_id);
		}
		catch
		{
			<Module>.___CxxCallUnwindDtor(ldftn(std._String_alloc<std::_String_base_types<wchar_t,std::allocator<wchar_t>\u0020>\u0020>.{dtor}), (void*)(&basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>));
			throw;
		}
		PatcherManager* ptr5;
		try
		{
			method _unep@?toupper@@$$J0YAHH@Z = <Module>.__unep@?toupper@@$$J0YAHH@Z;
			_String_iterator<std::_String_val<std::_Simple_types<wchar_t>\u0020>\u0020> string_iterator<std::_String_val<std::_Simple_types<wchar_t>_u0020>_u0020>2;
			_String_iterator<std::_String_val<std::_Simple_types<wchar_t>\u0020>\u0020> string_iterator<std::_String_val<std::_Simple_types<wchar_t>_u0020>_u0020> = *<Module>.std.basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>.begin(ref basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>, &string_iterator<std::_String_val<std::_Simple_types<wchar_t>_u0020>_u0020>2);
			_String_iterator<std::_String_val<std::_Simple_types<wchar_t>\u0020>\u0020> string_iterator<std::_String_val<std::_Simple_types<wchar_t>_u0020>_u0020>4;
			_String_iterator<std::_String_val<std::_Simple_types<wchar_t>\u0020>\u0020> string_iterator<std::_String_val<std::_Simple_types<wchar_t>_u0020>_u0020>3 = *<Module>.std.basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>.end(ref basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>, &string_iterator<std::_String_val<std::_Simple_types<wchar_t>_u0020>_u0020>4);
			_String_iterator<std::_String_val<std::_Simple_types<wchar_t>\u0020>\u0020> string_iterator<std::_String_val<std::_Simple_types<wchar_t>_u0020>_u0020>6;
			_String_iterator<std::_String_val<std::_Simple_types<wchar_t>\u0020>\u0020> string_iterator<std::_String_val<std::_Simple_types<wchar_t>_u0020>_u0020>5 = *<Module>.std.basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>.begin(ref basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>, &string_iterator<std::_String_val<std::_Simple_types<wchar_t>_u0020>_u0020>6);
			char* ptr = string_iterator<std::_String_val<std::_Simple_types<wchar_t>_u0020>_u0020>5;
			if (string_iterator<std::_String_val<std::_Simple_types<wchar_t>_u0020>_u0020>5 != string_iterator<std::_String_val<std::_Simple_types<wchar_t>_u0020>_u0020>3)
			{
				method system.Int32_u0020modopt(System.Runtime.CompilerServices.CallConvCdecl)_u0020(System.Int32) = _unep@?toupper@@$$J0YAHH@Z;
				long num = string_iterator<std::_String_val<std::_Simple_types<wchar_t>_u0020>_u0020> - string_iterator<std::_String_val<std::_Simple_types<wchar_t>_u0020>_u0020>5;
				do
				{
					(num / 2L)[ptr] = calli(System.Int32 modopt(System.Runtime.CompilerServices.CallConvCdecl)(System.Int32), (int)(*ptr), system.Int32_u0020modopt(System.Runtime.CompilerServices.CallConvCdecl)_u0020(System.Int32));
					ptr += 2L / 2L;
				}
				while (ptr != string_iterator<std::_String_val<std::_Simple_types<wchar_t>_u0020>_u0020>3);
			}
			map<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>,PatcherManager\u0020*,std::less<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020>,std::allocator<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>\u0020>\u0020>* ptr2 = <Module>.PatcherManager.GetPatcherManagerMap();
			_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>\u0020>\u0020>\u0020> tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>_u0020const_u0020,PatcherManager_u0020*>_u0020>_u0020>_u0020> = 0L;
			<Module>.std._Tree<std::_Tmap_traits<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>,PatcherManager\u0020*,std::less<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020>,std::allocator<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>\u0020>,0>\u0020>.find(ptr2, &tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>_u0020const_u0020,PatcherManager_u0020*>_u0020>_u0020>_u0020>, ref basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>);
			long num2 = *ptr2;
			if (((tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>_u0020const_u0020,PatcherManager_u0020*>_u0020>_u0020>_u0020> == num2) ? 1 : 0) != 0)
			{
				PatcherManager* ptr3 = <Module>.@new(104UL);
				PatcherManager* ptr4;
				try
				{
					if (ptr3 != null)
					{
						initblk(ptr3, 0, 104L);
						ptr4 = <Module>.PatcherManager.{ctor}(ptr3, game_id);
					}
					else
					{
						ptr4 = null;
					}
				}
				catch
				{
					<Module>.delete((void*)ptr3, 104UL);
					throw;
				}
				pair<std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>\u0020>\u0020>\u0020>,bool> pair<std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>_u0020const_u0020,PatcherManager_u0020*>_u0020>_u0020>_u0020>,bool>;
				<Module>.std.map<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>,PatcherManager\u0020*,std::less<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020>,std::allocator<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>\u0020>\u0020>._Try_emplace<class\u0020std::basic_string<wchar_t,struct\u0020std::char_traits<wchar_t>,class\u0020std::allocator<wchar_t>\u0020>\u0020co(ptr2, &pair<std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>_u0020const_u0020,PatcherManager_u0020*>_u0020>_u0020>_u0020>,bool>, ref basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>);
				*(pair<std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>_u0020const_u0020,PatcherManager_u0020*>_u0020>_u0020>_u0020>,bool> + 32L + 32L) = ptr4;
				ptr5 = ptr4;
			}
			else
			{
				ptr5 = *(tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>_u0020const_u0020,PatcherManager_u0020*>_u0020>_u0020>_u0020> + 32L + 32L);
			}
		}
		catch
		{
			<Module>.___CxxCallUnwindDtor(ldftn(std.basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>.{dtor}), (void*)(&basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>));
			throw;
		}
		try
		{
			<Module>.std.basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>._Tidy_deallocate(ref basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>);
		}
		catch
		{
			<Module>.___CxxCallUnwindDtor(ldftn(std._String_alloc<std::_String_base_types<wchar_t,std::allocator<wchar_t>\u0020>\u0020>.{dtor}), (void*)(&basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>));
			throw;
		}
		return ptr5;
	}

	// Token: 0x06000018 RID: 24 RVA: 0x000B8FA8 File Offset: 0x000B83A8
	internal unsafe static void ClearAll()
	{
		map<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>,PatcherManager\u0020*,std::less<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020>,std::allocator<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>\u0020>\u0020>* ptr = <Module>.PatcherManager.GetPatcherManagerMap();
		_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>\u0020>\u0020>\u0020> tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>_u0020const_u0020,PatcherManager_u0020*>_u0020>_u0020>_u0020> = 0L;
		tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>_u0020const_u0020,PatcherManager_u0020*>_u0020>_u0020>_u0020> = *(*ptr);
		while (((((tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>_u0020const_u0020,PatcherManager_u0020*>_u0020>_u0020>_u0020> == *ptr) ? 1 : 0) == 0) ? 1 : 0) != 0)
		{
			ulong num = (ulong)(*(tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>_u0020const_u0020,PatcherManager_u0020*>_u0020>_u0020>_u0020> + 64L));
			if (num != 0UL)
			{
				PatcherManager* ptr2 = num;
				<Module>.PatcherManager.{dtor}(ptr2);
				<Module>.delete((void*)ptr2, 104UL);
			}
			<Module>.std._Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>\u0020>\u0020>,std::_Iterator_base0>.++(ref tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>_u0020const_u0020,PatcherManager_u0020*>_u0020>_u0020>_u0020>);
		}
		<Module>.std._Tree<std::_Tmap_traits<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>,PatcherManager\u0020*,std::less<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020>,std::allocator<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>\u0020>,0>\u0020>.clear(ptr);
	}

	// Token: 0x06000019 RID: 25 RVA: 0x000B7784 File Offset: 0x000B6B84
	internal unsafe static void SetInitInfo(PatcherManager* A_0, basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>* base_path, basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>* game_path, basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>* update_url)
	{
		uint num = 0U;
		if (*(game_path + 16L) > 2L)
		{
			char* ptr = game_path;
			ulong num2 = (ulong)(*(game_path + 24L));
			if (((8UL <= num2) ? 1 : 0) != 0)
			{
				ptr = *game_path;
			}
			if (*(ushort*)(ptr + 2L / (long)sizeof(char)) != 58)
			{
				char* ptr2 = game_path;
				if (((8UL <= num2) ? 1 : 0) != 0)
				{
					ptr2 = *game_path;
				}
				if (*(ushort*)ptr2 != 92)
				{
					goto IL_72;
				}
				char* ptr3 = game_path;
				if (((8UL <= num2) ? 1 : 0) != 0)
				{
					ptr3 = *game_path;
				}
				if (*(ushort*)(ptr3 + 2L / (long)sizeof(char)) != 92)
				{
					goto IL_72;
				}
			}
			<Module>.std.basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>.=(A_0 + 40L, game_path);
			goto IL_104;
		}
		IL_72:
		basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020> basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>;
		basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>* ptr4 = <Module>.std.operator+<wchar_t,struct\u0020std::char_traits<wchar_t>,class\u0020std::allocator<wchar_t>\u0020>(&basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>, base_path, ref <Module>.??_C@_13FPGAJAPJ@?$AA?2@);
		try
		{
			basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020> basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>2;
			try
			{
				basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>* ptr5 = <Module>.std.basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>.append(ptr4, game_path);
				basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>* ptr6 = <Module>.std.basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>.{ctor}(ref basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>2, ptr5);
				num = 2U;
				<Module>.std.basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>.=(A_0 + 40L, ptr6);
				num = 2U & 4294967293U;
			}
			catch
			{
				if ((num & 2U) != 0U)
				{
					num &= 4294967293U;
					<Module>.___CxxCallUnwindDtor(ldftn(std.basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>.{dtor}), (void*)(&basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>2));
				}
				throw;
			}
			try
			{
				<Module>.std.basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>._Tidy_deallocate(ref basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>2);
			}
			catch
			{
				<Module>.___CxxCallUnwindDtor(ldftn(std._String_alloc<std::_String_base_types<wchar_t,std::allocator<wchar_t>\u0020>\u0020>.{dtor}), (void*)(&basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>2));
				throw;
			}
		}
		catch
		{
			<Module>.___CxxCallUnwindDtor(ldftn(std.basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>.{dtor}), (void*)(&basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>));
			throw;
		}
		try
		{
			<Module>.std.basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>._Tidy_deallocate(ref basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>);
		}
		catch
		{
			<Module>.___CxxCallUnwindDtor(ldftn(std._String_alloc<std::_String_base_types<wchar_t,std::allocator<wchar_t>\u0020>\u0020>.{dtor}), (void*)(&basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>));
			throw;
		}
		IL_104:
		<Module>.std.basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>.=(A_0 + 72L, update_url);
	}

	// Token: 0x0600001A RID: 26 RVA: 0x000B7908 File Offset: 0x000B6D08
	internal unsafe static void CheckUpdate(PatcherManager* A_0, basic_string<char,std::char_traits<char>,std::allocator<char>\u0020>* update_public_key, int* result, int* local_version, int* latest_version, int* error, basic_string<char,std::char_traits<char>,std::allocator<char>\u0020>* current_file, int* reason, int* error_code)
	{
		*result = 0;
		*local_version = 0;
		*latest_version = 0;
		*error = 0;
		<Module>.std.basic_string<char,std::char_traits<char>,std::allocator<char>\u0020>._Eos(current_file, 0L);
		*reason = 0;
		*error_code = 0;
		PatcherManager* ptr = A_0 + 40L;
		basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>* ptr2 = ptr;
		char* ptr3 = ptr2;
		if (((8L <= *(ptr2 + 24L)) ? 1 : 0) != 0)
		{
			ptr3 = *ptr2;
		}
		PatcherManager* ptr4 = A_0 + 72L;
		basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>* ptr5 = ptr4;
		char* ptr6 = ptr5;
		if (((8L <= *(ptr5 + 24L)) ? 1 : 0) != 0)
		{
			ptr6 = *ptr5;
		}
		PatcherManager* ptr7 = A_0 + 8L;
		basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>* ptr8 = ptr7;
		char* ptr9 = ptr8;
		if (((8L <= *(ptr8 + 24L)) ? 1 : 0) != 0)
		{
			ptr9 = *ptr8;
		}
		if (<Module>.?use_log@LogMsg@@2_NA)
		{
			<Module>.LogMsg.Write((char*)(&<Module>.??_C@_1HK@GAGLAEAP@?$AAP?$AAa?$AAt?$AAc?$AAh?$AAe?$AAr?$AA?5?$AAI?$AAn?$AAi?$AAt?$AA?5?$AA?9?$AA?5@), __arglist((ushort*)ptr9, (ushort*)ptr6, (ushort*)ptr3));
		}
		basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>* ptr10 = ptr;
		char* ptr11 = ptr10;
		if (((8L <= *(ptr10 + 24L)) ? 1 : 0) != 0)
		{
			ptr11 = *ptr10;
		}
		basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>* ptr12 = ptr4;
		char* ptr13 = ptr12;
		if (((8L <= *(ptr12 + 24L)) ? 1 : 0) != 0)
		{
			ptr13 = *ptr12;
		}
		int num = <Module>.LP_Init(*A_0, ptr13, ptr11);
		basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>* ptr14 = ptr7;
		char* ptr15 = ptr14;
		if (((8L <= *(ptr14 + 24L)) ? 1 : 0) != 0)
		{
			ptr15 = *ptr14;
		}
		if (<Module>.?use_log@LogMsg@@2_NA)
		{
			<Module>.LogMsg.Write((char*)(&<Module>.??_C@_1GA@KKFNACNB@?$AAP?$AAa?$AAt?$AAc?$AAh?$AAe?$AAr?$AA?5?$AAI?$AAn?$AAi?$AAt?$AA?5?$AAr?$AAe@), __arglist((ushort*)ptr15, num));
		}
		if (num < 0)
		{
			*result = num;
			<Module>.PatcherManager.GetPatcherError(A_0, error, current_file, reason, error_code);
		}
		else if (num != 0)
		{
			*result = num;
		}
		else
		{
			sbyte* ptr16 = update_public_key;
			if (((16L <= *(update_public_key + 24L)) ? 1 : 0) != 0)
			{
				ptr16 = *update_public_key;
			}
			ulong num2 = *(update_public_key + 16L);
			<Module>.LP_ResetAbort(*A_0);
			basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>* ptr17 = ptr7;
			char* ptr18 = ptr17;
			if (((8L <= *(ptr17 + 24L)) ? 1 : 0) != 0)
			{
				ptr18 = *ptr17;
			}
			if (<Module>.?use_log@LogMsg@@2_NA)
			{
				<Module>.LogMsg.Write((char*)(&<Module>.??_C@_1DG@IMPPNGAB@?$AAC?$AAh?$AAe?$AAc?$AAk?$AAU?$AAp?$AAd?$AAa?$AAt?$AAe?$AA?5?$AA?9?$AA?5?$AAg@), __arglist((ushort*)ptr18));
			}
			num = <Module>.LP_CheckUpdate(*A_0, (byte*)ptr16, num2, null, null);
			basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>* ptr19 = ptr7;
			char* ptr20 = ptr19;
			if (((8L <= *(ptr19 + 24L)) ? 1 : 0) != 0)
			{
				ptr20 = *ptr19;
			}
			if (<Module>.?use_log@LogMsg@@2_NA)
			{
				<Module>.LogMsg.Write((char*)(&<Module>.??_C@_1FO@GIIPJINP@?$AAC?$AAh?$AAe?$AAc?$AAk?$AAU?$AAp?$AAd?$AAa?$AAt?$AAe?$AA?5?$AAr?$AAe?$AAs@), __arglist((ushort*)ptr20, num));
			}
			*result = num;
			if (num < 0)
			{
				<Module>.PatcherManager.GetPatcherError(A_0, error, current_file, reason, error_code);
			}
			int num3;
			if (0 == <Module>.LP_GetLocalVersion(*A_0, ref num3))
			{
				*local_version = num3;
			}
			int num4;
			if (0 == <Module>.LP_GetLatestVersion(*A_0, ref num4))
			{
				*latest_version = num4;
			}
		}
	}

	// Token: 0x0600001B RID: 27 RVA: 0x000B7B28 File Offset: 0x000B6F28
	internal unsafe static void Update(PatcherManager* A_0, int* result, int* error, basic_string<char,std::char_traits<char>,std::allocator<char>\u0020>* current_file, int* reason, int* error_code)
	{
		*result = 0;
		*error = 0;
		<Module>.std.basic_string<char,std::char_traits<char>,std::allocator<char>\u0020>._Eos(current_file, 0L);
		*reason = 0;
		*error_code = 0;
		<Module>.LP_ResetAbort(*A_0);
		PatcherManager* ptr = A_0 + 8L;
		basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>* ptr2 = ptr;
		char* ptr3 = ptr2;
		if (((8L <= *(ptr2 + 24L)) ? 1 : 0) != 0)
		{
			ptr3 = *ptr2;
		}
		if (<Module>.?use_log@LogMsg@@2_NA)
		{
			<Module>.LogMsg.Write((char*)(&<Module>.??_C@_1CM@KBJILKCK@?$AAU?$AAp?$AAd?$AAa?$AAt?$AAe?$AA?5?$AA?9?$AA?5?$AAg?$AAa?$AAm?$AAe?$AA?5?$AAi@), __arglist((ushort*)ptr3));
		}
		int num = <Module>.LP_Patch(*A_0, null);
		basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>* ptr4 = ptr;
		char* ptr5 = ptr4;
		if (((8L <= *(ptr4 + 24L)) ? 1 : 0) != 0)
		{
			ptr5 = *ptr4;
		}
		if (<Module>.?use_log@LogMsg@@2_NA)
		{
			<Module>.LogMsg.Write((char*)(&<Module>.??_C@_1FE@LAKPLKGL@?$AAU?$AAp?$AAd?$AAa?$AAt?$AAe?$AA?5?$AAr?$AAe?$AAs?$AAu?$AAl?$AAt?$AA?5?$AA?9@), __arglist((ushort*)ptr5, num));
		}
		if (num < 0)
		{
			*result = num;
			<Module>.PatcherManager.GetPatcherError(A_0, error, current_file, reason, error_code);
		}
		else if (num != null)
		{
			*result = num;
		}
		else
		{
			<Module>.LP_ClearPatchFiles(*A_0);
		}
	}

	// Token: 0x0600001C RID: 28 RVA: 0x000B7BE4 File Offset: 0x000B6FE4
	internal unsafe static void SimpleCheck(PatcherManager* A_0, int* result, int* error, basic_string<char,std::char_traits<char>,std::allocator<char>\u0020>* current_file, int* reason, int* error_code)
	{
		*result = 0;
		*error = 0;
		<Module>.std.basic_string<char,std::char_traits<char>,std::allocator<char>\u0020>._Eos(current_file, 0L);
		*reason = 0;
		*error_code = 0;
		<Module>.LP_ResetAbort(*A_0);
		PatcherManager* ptr = A_0 + 8L;
		basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>* ptr2 = ptr;
		char* ptr3 = ptr2;
		if (((8L <= *(ptr2 + 24L)) ? 1 : 0) != 0)
		{
			ptr3 = *ptr2;
		}
		if (<Module>.?use_log@LogMsg@@2_NA)
		{
			<Module>.LogMsg.Write((char*)(&<Module>.??_C@_1EM@MKCHHEEM@?$AAS?$AAi?$AAm?$AAp?$AAl?$AAe?$AAC?$AAh?$AAe?$AAc?$AAk?$AA?$CI?$AAC?$AAh?$AAe@), __arglist((ushort*)ptr3));
		}
		int num = <Module>.LP_CheckSize(*A_0);
		basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>* ptr4 = ptr;
		char* ptr5 = ptr4;
		if (((8L <= *(ptr4 + 24L)) ? 1 : 0) != 0)
		{
			ptr5 = *ptr4;
		}
		if (<Module>.?use_log@LogMsg@@2_NA)
		{
			<Module>.LogMsg.Write((char*)(&<Module>.??_C@_1HE@EHPFLABL@?$AAS?$AAi?$AAm?$AAp?$AAl?$AAe?$AAC?$AAh?$AAe?$AAc?$AAk?$AA?$CI?$AAC?$AAh?$AAe@), __arglist((ushort*)ptr5, num));
		}
		if (num < 0)
		{
			*result = num;
			<Module>.PatcherManager.GetPatcherError(A_0, error, current_file, reason, error_code);
		}
		else if (num != 0)
		{
			*result = num;
		}
		else
		{
			basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>* ptr6 = ptr;
			char* ptr7 = ptr6;
			if (((8L <= *(ptr6 + 24L)) ? 1 : 0) != 0)
			{
				ptr7 = *ptr6;
			}
			if (<Module>.?use_log@LogMsg@@2_NA)
			{
				<Module>.LogMsg.Write((char*)(&<Module>.??_C@_1EM@HFKLBJEB@?$AAS?$AAi?$AAm?$AAp?$AAl?$AAe?$AAC?$AAh?$AAe?$AAc?$AAk?$AA?$CI?$AAC?$AAh?$AAe@), __arglist((ushort*)ptr7));
			}
			num = <Module>.LP_CheckHash(*A_0);
			basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>* ptr8 = ptr;
			char* ptr9 = ptr8;
			if (((8L <= *(ptr8 + 24L)) ? 1 : 0) != 0)
			{
				ptr9 = *ptr8;
			}
			if (<Module>.?use_log@LogMsg@@2_NA)
			{
				<Module>.LogMsg.Write((char*)(&<Module>.??_C@_1HE@PFDCDBLB@?$AAS?$AAi?$AAm?$AAp?$AAl?$AAe?$AAC?$AAh?$AAe?$AAc?$AAk?$AA?$CI?$AAC?$AAh?$AAe@), __arglist((ushort*)ptr9, num));
			}
			if (num < 0)
			{
				*result = num;
				<Module>.PatcherManager.GetPatcherError(A_0, error, current_file, reason, error_code);
			}
			else if (num != 0)
			{
				*result = num;
			}
			else
			{
				<Module>.LP_ClearPatchFiles(*A_0);
			}
		}
	}

	// Token: 0x0600001D RID: 29 RVA: 0x000B7D2C File Offset: 0x000B712C
	internal unsafe static void FullCheck(PatcherManager* A_0, int* result, int* error, basic_string<char,std::char_traits<char>,std::allocator<char>\u0020>* current_file, int* reason, int* error_code)
	{
		*result = 0;
		*error = 0;
		<Module>.std.basic_string<char,std::char_traits<char>,std::allocator<char>\u0020>._Eos(current_file, 0L);
		*reason = 0;
		*error_code = 0;
		<Module>.LP_ResetAbort(*A_0);
		PatcherManager* ptr = A_0 + 8L;
		basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>* ptr2 = ptr;
		char* ptr3 = ptr2;
		if (((8L <= *(ptr2 + 24L)) ? 1 : 0) != 0)
		{
			ptr3 = *ptr2;
		}
		if (<Module>.?use_log@LogMsg@@2_NA)
		{
			<Module>.LogMsg.Write((char*)(&<Module>.??_C@_1EI@DIIGGBCD@?$AAF?$AAu?$AAl?$AAl?$AAC?$AAh?$AAe?$AAc?$AAk?$AA?$CI?$AAC?$AAh?$AAe?$AAc?$AAk@), __arglist((ushort*)ptr3));
		}
		int num = <Module>.LP_CheckFile(*A_0);
		basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>* ptr4 = ptr;
		char* ptr5 = ptr4;
		if (((8L <= *(ptr4 + 24L)) ? 1 : 0) != 0)
		{
			ptr5 = *ptr4;
		}
		if (<Module>.?use_log@LogMsg@@2_NA)
		{
			<Module>.LogMsg.Write((char*)(&<Module>.??_C@_1HA@BEBJIJJP@?$AAF?$AAu?$AAl?$AAl?$AAC?$AAh?$AAe?$AAc?$AAk?$AA?$CI?$AAC?$AAh?$AAe?$AAc?$AAk@), __arglist((ushort*)ptr5, num));
		}
		if (num < 0)
		{
			*result = num;
			<Module>.PatcherManager.GetPatcherError(A_0, error, current_file, reason, error_code);
		}
		else if (num != 0)
		{
			*result = num;
		}
		else
		{
			basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>* ptr6 = ptr;
			char* ptr7 = ptr6;
			if (((8L <= *(ptr6 + 24L)) ? 1 : 0) != 0)
			{
				ptr7 = *ptr6;
			}
			if (<Module>.?use_log@LogMsg@@2_NA)
			{
				<Module>.LogMsg.Write((char*)(&<Module>.??_C@_1EC@OKPLJGNE@?$AAF?$AAu?$AAl?$AAl?$AAC?$AAh?$AAe?$AAc?$AAk?$AA?$CI?$AAU?$AAp?$AAd?$AAa?$AAt@), __arglist((ushort*)ptr7));
			}
			num = <Module>.LP_Patch(*A_0, null);
			basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>* ptr8 = ptr;
			char* ptr9 = ptr8;
			if (((8L <= *(ptr8 + 24L)) ? 1 : 0) != 0)
			{
				ptr9 = *ptr8;
			}
			if (<Module>.?use_log@LogMsg@@2_NA)
			{
				<Module>.LogMsg.Write((char*)(&<Module>.??_C@_1GK@PKHPLNCL@?$AAF?$AAu?$AAl?$AAl?$AAC?$AAh?$AAe?$AAc?$AAk?$AA?$CI?$AAU?$AAp?$AAd?$AAa?$AAt@), __arglist((ushort*)ptr9, num));
			}
			if (num < 0)
			{
				*result = num;
				<Module>.PatcherManager.GetPatcherError(A_0, error, current_file, reason, error_code);
			}
			else if (num != 0)
			{
				*result = num;
			}
			else
			{
				<Module>.LP_ClearPatchFiles(*A_0);
			}
		}
	}

	// Token: 0x0600001E RID: 30 RVA: 0x000B7E74 File Offset: 0x000B7274
	internal unsafe static void GetProgress(PatcherManager* A_0, URequestProgressResult* progress)
	{
		uint num = 0U;
		LP_PROGRESS_INFO lp_PROGRESS_INFO;
		<Module>.LP_PROGRESS_INFO.{ctor}(ref lp_PROGRESS_INFO);
		<Module>.LP_GetProgress(*A_0, ref lp_PROGRESS_INFO);
		basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020> basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>;
		<Module>.std.basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>.{ctor}(ref basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>, (ref lp_PROGRESS_INFO) + 4);
		try
		{
			<Module>.ConvertPathToUrl(ref basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>);
			basic_ostringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020> basic_ostringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>;
			initblk(ref basic_ostringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>, 0, 232L);
			<Module>.std.basic_ostringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>.{ctor}(ref basic_ostringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>, 2, 1);
			try
			{
				basic_ostream<wchar_t,std::char_traits<wchar_t>\u0020>* ptr = <Module>.std.operator<<<wchar_t,struct\u0020std::char_traits<wchar_t>\u0020>(<Module>.std.operator<<<wchar_t,struct\u0020std::char_traits<wchar_t>\u0020>(<Module>.std.basic_ostream<wchar_t,std::char_traits<wchar_t>\u0020>.<<(<Module>.std.operator<<<wchar_t,struct\u0020std::char_traits<wchar_t>\u0020>(<Module>.std.operator<<<wchar_t,struct\u0020std::char_traits<wchar_t>,class\u0020std::allocator<wchar_t>\u0020>(<Module>.std.operator<<<wchar_t,struct\u0020std::char_traits<wchar_t>\u0020>(<Module>.std.operator<<<wchar_t,struct\u0020std::char_traits<wchar_t>\u0020>(ref basic_ostringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>, (sbyte*)(&<Module>.??_C@_0BE@HLJGKDAC@Patcher?5Progress?5?9?5@)), (sbyte*)(&<Module>.??_C@_09GNIEPPPF@game?5id?3?5@)), A_0 + 8L), (sbyte*)(&<Module>.??_C@_0N@OGFOBDBI@?0?5process?5?3?5@)), lp_PROGRESS_INFO), (sbyte*)(&<Module>.??_C@_02KEGNLNML@?0?5@)), (sbyte*)(&<Module>.??_C@_0BI@FFKOEDGE@current_file_progress?3?5@));
				ulong num2 = (ulong)(*((ref basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>) + 16));
				char* ptr2 = <Module>.std.basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>.data(ref basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>);
				<Module>.std.basic_ostream<wchar_t,std::char_traits<wchar_t>\u0020>.<<(<Module>.std.operator<<<wchar_t,struct\u0020std::char_traits<wchar_t>\u0020>(<Module>.std.operator<<<wchar_t,struct\u0020std::char_traits<wchar_t>\u0020>(<Module>.std.basic_ostream<wchar_t,std::char_traits<wchar_t>\u0020>.<<(<Module>.std.basic_ostream<wchar_t,std::char_traits<wchar_t>\u0020>.<<(<Module>.std.operator<<<wchar_t,struct\u0020std::char_traits<wchar_t>\u0020>(<Module>.std.operator<<<wchar_t,struct\u0020std::char_traits<wchar_t>\u0020>(<Module>.std.basic_ostream<wchar_t,std::char_traits<wchar_t>\u0020>.<<(<Module>.std.operator<<<wchar_t,struct\u0020std::char_traits<wchar_t>\u0020>(<Module>.std.basic_ostream<wchar_t,std::char_traits<wchar_t>\u0020>.<<(<Module>.std.operator<<<wchar_t,struct\u0020std::char_traits<wchar_t>\u0020>(<Module>.std.operator<<<wchar_t,struct\u0020std::char_traits<wchar_t>\u0020>(<Module>.std.basic_ostream<wchar_t,std::char_traits<wchar_t>\u0020>.<<(<Module>.std.operator<<<wchar_t,struct\u0020std::char_traits<wchar_t>\u0020>(<Module>.std.operator<<<wchar_t,struct\u0020std::char_traits<wchar_t>\u0020>(<Module>.std.basic_ostream<wchar_t,std::char_traits<wchar_t>\u0020>.<<(<Module>.std.operator<<<wchar_t,struct\u0020std::char_traits<wchar_t>\u0020>(<Module>.std.basic_ostream<wchar_t,std::char_traits<wchar_t>\u0020>.<<(<Module>.std.operator<<<wchar_t,struct\u0020std::char_traits<wchar_t>\u0020>(<Module>.std.operator<<<wchar_t,struct\u0020std::char_traits<wchar_t>\u0020>(<Module>.std.basic_ostream<wchar_t,std::char_traits<wchar_t>\u0020>.<<(<Module>.std.operator<<<wchar_t,struct\u0020std::char_traits<wchar_t>\u0020>(<Module>.std.basic_ostream<wchar_t,std::char_traits<wchar_t>\u0020>.<<(<Module>.std.operator<<<wchar_t,struct\u0020std::char_traits<wchar_t>\u0020>(<Module>.std.operator<<<wchar_t,struct\u0020std::char_traits<wchar_t>\u0020>(<Module>.std.basic_ostream<wchar_t,std::char_traits<wchar_t>\u0020>.<<(<Module>.std.operator<<<wchar_t,struct\u0020std::char_traits<wchar_t>\u0020>(<Module>.std.basic_ostream<wchar_t,std::char_traits<wchar_t>\u0020>.<<(<Module>.std.operator<<<wchar_t,struct\u0020std::char_traits<wchar_t>\u0020>(<Module>.std._Insert_string<wchar_t,struct\u0020std::char_traits<wchar_t>,unsigned\u0020__int64>(ptr, ptr2, num2), (sbyte*)(&<Module>.??_C@_02KEGNLNML@?0?5@)), *((ref lp_PROGRESS_INFO) + 528)), (sbyte*)(&<Module>.??_C@_03NIBMKKKC@?5?1?5@)), *((ref lp_PROGRESS_INFO) + 536)), (sbyte*)(&<Module>.??_C@_07GNNLDBBG@bytes?0?5@)), (sbyte*)(&<Module>.??_C@_0BC@PPHPKACJ@files?5processed?3?5@)), *((ref lp_PROGRESS_INFO) + 544)), (sbyte*)(&<Module>.??_C@_03NIBMKKKC@?5?1?5@)), *((ref lp_PROGRESS_INFO) + 548)), (sbyte*)(&<Module>.??_C@_02KEGNLNML@?0?5@)), (sbyte*)(&<Module>.??_C@_0BC@KOMNNLCC@downloaded?5size?3?5@)), *((ref lp_PROGRESS_INFO) + 560)), (sbyte*)(&<Module>.??_C@_03NIBMKKKC@?5?1?5@)), *((ref lp_PROGRESS_INFO) + 568)), (sbyte*)(&<Module>.??_C@_07JADGPAJA@?5bytes?5@)), (sbyte*)(&<Module>.??_C@_01ODHLEDKK@?$CI@)), (uint)(*((ref lp_PROGRESS_INFO) + 552))), (sbyte*)(&<Module>.??_C@_07PFKJKOEF@kB?1s?$CJ?0?5@)), (sbyte*)(&<Module>.??_C@_0P@MOJKMFCJ@patched?5size?3?5@)), *((ref lp_PROGRESS_INFO) + 576)), (sbyte*)(&<Module>.??_C@_03NIBMKKKC@?5?1?5@)), *((ref lp_PROGRESS_INFO) + 584)), (sbyte*)(&<Module>.??_C@_08GMABHIHC@?5bytes?0?5@)), (sbyte*)(&<Module>.??_C@_0BC@ELFMBGPL@patch?5list?5made?3?5@)), <Module>.__unep@?boolalpha@std@@$$FYAAEAVios_base@1@AEAV21@@Z), *((ref lp_PROGRESS_INFO) + 592) != 0), (sbyte*)(&<Module>.??_C@_02KEGNLNML@?0?5@)), (sbyte*)(&<Module>.??_C@_0BO@JJPIJFAH@downloaded_install_file_size?3@)), *((ref lp_PROGRESS_INFO) + 600));
				basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020> basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>2;
				try
				{
					basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>* ptr3 = <Module>.std.basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>.str((ref basic_ostringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>) + 8, &basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>2);
					num = 2U;
					char* ptr4 = (char*)ptr3;
					if (((8L <= *(long*)(ptr3 + 24L / (long)sizeof(basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>))) ? 1 : 0) != 0)
					{
						ptr4 = *(long*)ptr3;
					}
					if (<Module>.?use_log@LogMsg@@2_NA)
					{
						<Module>.LogMsg.Write(ptr4, __arglist());
					}
					num = 2U & 4294967293U;
				}
				catch
				{
					if ((num & 2U) != 0U)
					{
						num &= 4294967293U;
						<Module>.___CxxCallUnwindDtor(ldftn(std.basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>.{dtor}), (void*)(&basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>2));
					}
					throw;
				}
				try
				{
					<Module>.std.basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>._Tidy_deallocate(ref basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>2);
				}
				catch
				{
					<Module>.___CxxCallUnwindDtor(ldftn(std._String_alloc<std::_String_base_types<wchar_t,std::allocator<wchar_t>\u0020>\u0020>.{dtor}), (void*)(&basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>2));
					throw;
				}
			}
			catch
			{
				<Module>.___CxxCallUnwindDtor(ldftn(std.basic_ostringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>.__vbaseDtor), (void*)(&basic_ostringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>));
				throw;
			}
			<Module>.std.basic_ostringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>.{dtor}((ref basic_ostringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>) + 136);
			<Module>.std.basic_ios<wchar_t,std::char_traits<wchar_t>\u0020>.{dtor}((ref basic_ostringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>) + 136);
			*(progress + 32L) = lp_PROGRESS_INFO;
			basic_string<char,std::char_traits<char>,std::allocator<char>\u0020> basic_string<char,std::char_traits<char>,std::allocator<char>_u0020>;
			basic_string<char,std::char_traits<char>,std::allocator<char>\u0020>* ptr5 = <Module>.Utf16ToUtf8(&basic_string<char,std::char_traits<char>,std::allocator<char>_u0020>, ref basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>);
			try
			{
				<Module>.std.basic_string<char,std::char_traits<char>,std::allocator<char>\u0020>.=(progress + 40L, ptr5);
			}
			catch
			{
				<Module>.___CxxCallUnwindDtor(ldftn(std.basic_string<char,std::char_traits<char>,std::allocator<char>\u0020>.{dtor}), (void*)(&basic_string<char,std::char_traits<char>,std::allocator<char>_u0020>));
				throw;
			}
			try
			{
				<Module>.std.basic_string<char,std::char_traits<char>,std::allocator<char>\u0020>._Tidy_deallocate(ref basic_string<char,std::char_traits<char>,std::allocator<char>_u0020>);
			}
			catch
			{
				<Module>.___CxxCallUnwindDtor(ldftn(std._String_alloc<std::_String_base_types<char,std::allocator<char>\u0020>\u0020>.{dtor}), (void*)(&basic_string<char,std::char_traits<char>,std::allocator<char>_u0020>));
				throw;
			}
			*(progress + 72L) = *((ref lp_PROGRESS_INFO) + 528);
			*(progress + 80L) = *((ref lp_PROGRESS_INFO) + 536);
			*(progress + 88L) = *((ref lp_PROGRESS_INFO) + 544);
			*(progress + 92L) = *((ref lp_PROGRESS_INFO) + 548);
			*(progress + 96L) = *((ref lp_PROGRESS_INFO) + 552);
			*(progress + 104L) = *((ref lp_PROGRESS_INFO) + 560) >> 10;
			*(progress + 112L) = *((ref lp_PROGRESS_INFO) + 568) >> 10;
			*(progress + 120L) = *((ref lp_PROGRESS_INFO) + 576) >> 10;
			*(progress + 128L) = *((ref lp_PROGRESS_INFO) + 584) >> 10;
			*(progress + 136L) = *((ref lp_PROGRESS_INFO) + 592);
			*(progress + 144L) = *((ref lp_PROGRESS_INFO) + 600) >> 10;
		}
		catch
		{
			<Module>.___CxxCallUnwindDtor(ldftn(std.basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>.{dtor}), (void*)(&basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>));
			throw;
		}
		try
		{
			<Module>.std.basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>._Tidy_deallocate(ref basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>);
		}
		catch
		{
			<Module>.___CxxCallUnwindDtor(ldftn(std._String_alloc<std::_String_base_types<wchar_t,std::allocator<wchar_t>\u0020>\u0020>.{dtor}), (void*)(&basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>));
			throw;
		}
	}

	// Token: 0x0600001F RID: 31 RVA: 0x000B7034 File Offset: 0x000B6434
	internal unsafe static void __vbaseDtor(basic_ostringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>* A_0)
	{
		basic_ostringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>* ptr = A_0 + 136L;
		<Module>.std.basic_ostringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>.{dtor}(ptr);
		<Module>.std.basic_ios<wchar_t,std::char_traits<wchar_t>\u0020>.{dtor}(ptr);
	}

	// Token: 0x06000020 RID: 32 RVA: 0x000B6448 File Offset: 0x000B5848
	internal unsafe static void Abort(PatcherManager* A_0)
	{
		basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>* ptr = A_0 + 8L;
		char* ptr2 = ptr;
		if (((8L <= *(ptr + 24L)) ? 1 : 0) != 0)
		{
			ptr2 = *ptr;
		}
		if (<Module>.?use_log@LogMsg@@2_NA)
		{
			<Module>.LogMsg.Write((char*)(&<Module>.??_C@_1DK@PIINFAJB@?$AAP?$AAa?$AAt?$AAc?$AAh?$AAe?$AAr?$AA?5?$AAA?$AAb?$AAo?$AAr?$AAt?$AA?5?$AA?9@), __arglist((ushort*)ptr2));
		}
		<Module>.LP_Abort(*A_0);
	}

	// Token: 0x06000021 RID: 33 RVA: 0x000B7584 File Offset: 0x000B6984
	internal unsafe static void GetPatcherError(PatcherManager* A_0, int* error, basic_string<char,std::char_traits<char>,std::allocator<char>\u0020>* current_file, int* reason, int* error_code)
	{
		int num = 0;
		$ArrayType$$$BY0EAA@_W $ArrayType$$$BY0EAA@_W;
		cpblk(ref $ArrayType$$$BY0EAA@_W, ref <Module>.??_C@_11LOCGONAA@@, 2);
		initblk((ref $ArrayType$$$BY0EAA@_W) + 2, 0, 2046L);
		int num2 = 0;
		int num3 = 0;
		<Module>.LP_GetError(*A_0, ref num, (char*)(&$ArrayType$$$BY0EAA@_W), ref num2, ref num3);
		basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>* ptr = A_0 + 8L;
		char* ptr2 = ptr;
		if (((8L <= *(ptr + 24L)) ? 1 : 0) != 0)
		{
			ptr2 = *ptr;
		}
		if (<Module>.?use_log@LogMsg@@2_NA)
		{
			<Module>.LogMsg.Write((char*)(&<Module>.??_C@_1LE@PGOKOMN@?$AAP?$AAa?$AAt?$AAc?$AAh?$AAe?$AAr?$AA?5?$AAE?$AAr?$AAr?$AAo?$AAr?$AA?5?$AA?9@), __arglist((ushort*)ptr2, num, (ushort*)(&$ArrayType$$$BY0EAA@_W), num2, num3));
		}
		*error = num;
		basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020> basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>;
		<Module>.std.basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>.{ctor}(ref basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>, ref $ArrayType$$$BY0EAA@_W);
		try
		{
			basic_string<char,std::char_traits<char>,std::allocator<char>\u0020> basic_string<char,std::char_traits<char>,std::allocator<char>_u0020>;
			basic_string<char,std::char_traits<char>,std::allocator<char>\u0020>* ptr3 = <Module>.Utf16ToUtf8(&basic_string<char,std::char_traits<char>,std::allocator<char>_u0020>, ref basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>);
			try
			{
				<Module>.std.basic_string<char,std::char_traits<char>,std::allocator<char>\u0020>.=(current_file, ptr3);
			}
			catch
			{
				<Module>.___CxxCallUnwindDtor(ldftn(std.basic_string<char,std::char_traits<char>,std::allocator<char>\u0020>.{dtor}), (void*)(&basic_string<char,std::char_traits<char>,std::allocator<char>_u0020>));
				throw;
			}
			try
			{
				<Module>.std.basic_string<char,std::char_traits<char>,std::allocator<char>\u0020>._Tidy_deallocate(ref basic_string<char,std::char_traits<char>,std::allocator<char>_u0020>);
			}
			catch
			{
				<Module>.___CxxCallUnwindDtor(ldftn(std._String_alloc<std::_String_base_types<char,std::allocator<char>\u0020>\u0020>.{dtor}), (void*)(&basic_string<char,std::char_traits<char>,std::allocator<char>_u0020>));
				throw;
			}
		}
		catch
		{
			<Module>.___CxxCallUnwindDtor(ldftn(std.basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>.{dtor}), (void*)(&basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>));
			throw;
		}
		try
		{
			<Module>.std.basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>._Tidy_deallocate(ref basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>);
		}
		catch
		{
			<Module>.___CxxCallUnwindDtor(ldftn(std._String_alloc<std::_String_base_types<wchar_t,std::allocator<wchar_t>\u0020>\u0020>.{dtor}), (void*)(&basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>));
			throw;
		}
		<Module>.ConvertPathToUrl(current_file);
		*reason = num2;
		*error_code = num3;
	}

	// Token: 0x06000022 RID: 34 RVA: 0x000B82D8 File Offset: 0x000B76D8
	internal unsafe static _Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>\u0020>\u0020>\u0020>* find(_Tree<std::_Tmap_traits<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>,PatcherManager\u0020*,std::less<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020>,std::allocator<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>\u0020>,0>\u0020>* A_0, _Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>\u0020>\u0020>\u0020>* A_1, basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>* _Keyval)
	{
		_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>\u0020>\u0020>\u0020> tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>_u0020const_u0020,PatcherManager_u0020*>_u0020>_u0020>_u0020> = <Module>.std._Tree<std::_Tmap_traits<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>,PatcherManager\u0020*,std::less<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020>,std::allocator<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>\u0020>,0>\u0020>._Lbound<class\u0020std::basic_string<wchar_t,struct\u0020std::char_traits<wchar_t>,class\u0020std::allocator<wchar(A_0, _Keyval);
		_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>\u0020>\u0020>\u0020>* ptr;
		if (((tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>_u0020const_u0020,PatcherManager_u0020*>_u0020>_u0020>_u0020> == *A_0) ? 1 : 0) == 0 && ((<Module>.std.basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>.compare(_Keyval, tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>_u0020const_u0020,PatcherManager_u0020*>_u0020>_u0020>_u0020> + 32L) < 0) ? 1 : 0) == 0)
		{
			_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>\u0020>\u0020>\u0020> tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>_u0020const_u0020,PatcherManager_u0020*>_u0020>_u0020>_u0020>2 = tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>_u0020const_u0020,PatcherManager_u0020*>_u0020>_u0020>_u0020>;
			ptr = &tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>_u0020const_u0020,PatcherManager_u0020*>_u0020>_u0020>_u0020>2;
		}
		else
		{
			_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>\u0020>\u0020>\u0020> tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>_u0020const_u0020,PatcherManager_u0020*>_u0020>_u0020>_u0020>3 = *A_0;
			ptr = &tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>_u0020const_u0020,PatcherManager_u0020*>_u0020>_u0020>_u0020>3;
		}
		cpblk(A_1, ptr, 8);
		return A_1;
	}

	// Token: 0x06000023 RID: 35 RVA: 0x000B648C File Offset: 0x000B588C
	internal unsafe static _String_iterator<std::_String_val<std::_Simple_types<wchar_t>\u0020>\u0020>* end(basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>* A_0, _String_iterator<std::_String_val<std::_Simple_types<wchar_t>\u0020>\u0020>* A_1)
	{
		char* ptr = A_0;
		if (((8L <= *(A_0 + 24L)) ? 1 : 0) != 0)
		{
			ptr = *A_0;
		}
		*(long*)A_1 = *(A_0 + 16L) * 2L / 2L + ptr;
		return A_1;
	}

	// Token: 0x06000024 RID: 36 RVA: 0x000B64C0 File Offset: 0x000B58C0
	internal unsafe static _String_iterator<std::_String_val<std::_Simple_types<wchar_t>\u0020>\u0020>* begin(basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>* A_0, _String_iterator<std::_String_val<std::_Simple_types<wchar_t>\u0020>\u0020>* A_1)
	{
		char* ptr = A_0;
		if (((8L <= *(A_0 + 24L)) ? 1 : 0) != 0)
		{
			ptr = *A_0;
		}
		*(long*)A_1 = ptr;
		return A_1;
	}

	// Token: 0x06000025 RID: 37 RVA: 0x000B697C File Offset: 0x000B5D7C
	internal unsafe static basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>* =(basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>* A_0, basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>* _Right)
	{
		if (A_0 != _Right)
		{
			ulong num = (ulong)(*(_Right + 16L));
			char* ptr = _Right;
			if (((8L <= *(_Right + 24L)) ? 1 : 0) != 0)
			{
				ptr = *_Right;
			}
			<Module>.std.basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>.assign(A_0, ptr, num);
		}
		return A_0;
	}

	// Token: 0x06000026 RID: 38 RVA: 0x000B69B4 File Offset: 0x000B5DB4
	internal unsafe static void {dtor}(basic_ostringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>* A_0)
	{
		basic_ostringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>* ptr = A_0 - 136L;
		*(A_0 + (long)(*(*ptr + 4L)) - 136L) = ref <Module>.??_7?$basic_ostringstream@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@6B@;
		long num = (long)(*(*ptr + 4L));
		*(A_0 + num - 140L) = (int)(num - 136L);
		try
		{
			basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>* ptr2 = A_0 - 128L;
			*ptr2 = ref <Module>.??_7?$basic_stringbuf@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@6B@;
			try
			{
				<Module>.std.basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>._Tidy(ptr2);
			}
			catch
			{
				<Module>.___CxxCallUnwindDtor(ldftn(std.basic_streambuf<wchar_t,std::char_traits<wchar_t>\u0020>.{dtor}), ptr2);
				throw;
			}
			<Module>.std.basic_streambuf<wchar_t,std::char_traits<wchar_t>\u0020>.{dtor}(ptr2);
		}
		catch
		{
			<Module>.___CxxCallUnwindDtor(ldftn(std.basic_ostream<wchar_t,std::char_traits<wchar_t>\u0020>.{dtor}), (void*)(A_0 - 136L + (byte*)16L));
			throw;
		}
		<Module>.std.basic_ostream<wchar_t,std::char_traits<wchar_t>\u0020>.{dtor}(A_0 - 120L);
	}

	// Token: 0x06000027 RID: 39 RVA: 0x000B6A80 File Offset: 0x000B5E80
	internal unsafe static basic_ostringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>* {ctor}(basic_ostringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>* A_0, int _Mode, int A_2)
	{
		uint num = 0U;
		if (A_2 != 0)
		{
			*A_0 = ref <Module>.??_8?$basic_ostringstream@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@7B@;
			<Module>.std.basic_ios<wchar_t,std::char_traits<wchar_t>\u0020>.{ctor}(A_0 + 136L);
			try
			{
				num = 1U;
			}
			catch
			{
				if ((num & 1U) != 0U)
				{
					num &= 4294967294U;
					<Module>.___CxxCallUnwindDtor(ldftn(std.basic_ios<wchar_t,std::char_traits<wchar_t>\u0020>.{dtor}), (void*)(A_0 + (byte*)136L));
				}
				throw;
			}
		}
		try
		{
			basic_ostringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>* ptr = A_0 + 8L;
			<Module>.std.basic_ostream<wchar_t,std::char_traits<wchar_t>\u0020>.{ctor}(A_0, ptr, false, 0);
			try
			{
				*((long)(*(*A_0 + 4L)) + A_0) = ref <Module>.??_7?$basic_ostringstream@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@6B@;
				long num2 = (long)(*(*A_0 + 4L));
				*(A_0 + num2 - 4L) = (int)(num2 - 136L);
				basic_ostringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>* ptr2 = ptr;
				<Module>.std.basic_streambuf<wchar_t,std::char_traits<wchar_t>\u0020>.{ctor}(ptr2);
				try
				{
					*ptr2 = ref <Module>.??_7?$basic_stringbuf@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@6B@;
					*(ptr2 + 104L) = 0L;
					*(ptr2 + 112L) = <Module>.std.basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>._Getstate(_Mode | 2);
				}
				catch
				{
					<Module>.___CxxCallUnwindDtor(ldftn(std.basic_streambuf<wchar_t,std::char_traits<wchar_t>\u0020>.{dtor}), ptr2);
					throw;
				}
			}
			catch
			{
				<Module>.___CxxCallUnwindDtor(ldftn(std.basic_ostream<wchar_t,std::char_traits<wchar_t>\u0020>.{dtor}), (void*)(A_0 + (byte*)16L));
				throw;
			}
		}
		catch
		{
			if ((num & 1U) != 0U)
			{
				num &= 4294967294U;
				<Module>.___CxxCallUnwindDtor(ldftn(std.basic_ios<wchar_t,std::char_traits<wchar_t>\u0020>.{dtor}), (void*)(A_0 + (byte*)136L));
			}
			throw;
		}
		return A_0;
	}

	// Token: 0x06000028 RID: 40 RVA: 0x000B9454 File Offset: 0x000B8854
	internal unsafe static fpos<_Mbstatet>* seekpos(basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>* A_0, fpos<_Mbstatet>* A_1, fpos<_Mbstatet> _Pos, int _Mode)
	{
		long num = *((ref _Pos) + 8) + _Pos;
		char* ptr = <Module>.std.basic_streambuf<wchar_t,std::char_traits<wchar_t>\u0020>.gptr(A_0);
		char* ptr2 = <Module>.std.basic_streambuf<wchar_t,std::char_traits<wchar_t>\u0020>.pptr(A_0);
		if (ptr2 != null && *(A_0 + 104L) < ptr2)
		{
			*(A_0 + 104L) = ptr2;
		}
		char* ptr3 = <Module>.std.basic_streambuf<wchar_t,std::char_traits<wchar_t>\u0020>.eback(A_0);
		ulong num2 = (ulong)(*(A_0 + 104L));
		if (num > num2 - ptr3 >> 1)
		{
			*(long*)A_1 = -1L;
			*(long*)(A_1 + 8L / (long)sizeof(fpos<_Mbstatet>)) = 0L;
			initblk(A_1 + 16L / (long)sizeof(fpos<_Mbstatet>), 0, 8L);
			return A_1;
		}
		if (num != null && (((_Mode & 1) != 0 && ptr == null) || ((_Mode & 2) != 0 && ptr2 == null)))
		{
			*(long*)A_1 = -1L;
			*(long*)(A_1 + 8L / (long)sizeof(fpos<_Mbstatet>)) = 0L;
			initblk(A_1 + 16L / (long)sizeof(fpos<_Mbstatet>), 0, 8L);
			return A_1;
		}
		char* ptr4 = num * 2L + ptr3;
		if ((_Mode & 1) != 0 && ptr != null)
		{
			<Module>.std.basic_streambuf<wchar_t,std::char_traits<wchar_t>\u0020>.setg(A_0, ptr3, ptr4, num2);
		}
		if ((_Mode & 2) != 0 && ptr2 != null)
		{
			<Module>.std.basic_streambuf<wchar_t,std::char_traits<wchar_t>\u0020>.setp(A_0, ptr3, ptr4, <Module>.std.basic_streambuf<wchar_t,std::char_traits<wchar_t>\u0020>.epptr(A_0));
		}
		*(long*)A_1 = num;
		*(long*)(A_1 + 8L / (long)sizeof(fpos<_Mbstatet>)) = 0L;
		initblk(A_1 + 16L / (long)sizeof(fpos<_Mbstatet>), 0, 8L);
		return A_1;
	}

	// Token: 0x06000029 RID: 41 RVA: 0x000B92F8 File Offset: 0x000B86F8
	internal unsafe static fpos<_Mbstatet>* seekoff(basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>* A_0, fpos<_Mbstatet>* A_1, long _Off, int _Way, int _Mode)
	{
		char* ptr = <Module>.std.basic_streambuf<wchar_t,std::char_traits<wchar_t>\u0020>.gptr(A_0);
		char* ptr2 = <Module>.std.basic_streambuf<wchar_t,std::char_traits<wchar_t>\u0020>.pptr(A_0);
		if (ptr2 != null && *(A_0 + 104L) < ptr2)
		{
			*(A_0 + 104L) = ptr2;
		}
		char* ptr3 = <Module>.std.basic_streambuf<wchar_t,std::char_traits<wchar_t>\u0020>.eback(A_0);
		ulong num = (ulong)(*(A_0 + 104L));
		long num2 = num - ptr3 >> 1;
		long num3;
		if (_Way != 0)
		{
			if (_Way != 1)
			{
				if (_Way == 2)
				{
					num3 = num2;
					goto IL_9B;
				}
			}
			else if ((_Mode & 3) != 3)
			{
				if ((_Mode & 1) != 0)
				{
					if (ptr != null || ptr3 == null)
					{
						num3 = ptr - ptr3 >> 1;
						goto IL_9B;
					}
				}
				else if ((_Mode & 2) != 0 && (ptr2 != null || ptr3 == null))
				{
					num3 = ptr2 - ptr3 >> 1;
					goto IL_9B;
				}
			}
			*(long*)A_1 = -1L;
			*(long*)(A_1 + 8L / (long)sizeof(fpos<_Mbstatet>)) = 0L;
			initblk(A_1 + 16L / (long)sizeof(fpos<_Mbstatet>), 0, 8L);
			return A_1;
		}
		num3 = 0L;
		IL_9B:
		long num4 = num3 + _Off;
		if (num4 > num2)
		{
			*(long*)A_1 = -1L;
			*(long*)(A_1 + 8L / (long)sizeof(fpos<_Mbstatet>)) = 0L;
			initblk(A_1 + 16L / (long)sizeof(fpos<_Mbstatet>), 0, 8L);
			return A_1;
		}
		_Off = num4;
		if (_Off != 0L && (((_Mode & 1) != 0 && ptr == null) || ((_Mode & 2) != 0 && ptr2 == null)))
		{
			*(long*)A_1 = -1L;
			*(long*)(A_1 + 8L / (long)sizeof(fpos<_Mbstatet>)) = 0L;
			initblk(A_1 + 16L / (long)sizeof(fpos<_Mbstatet>), 0, 8L);
			return A_1;
		}
		char* ptr4 = _Off * 2L + ptr3;
		if ((_Mode & 1) != 0 && ptr != null)
		{
			<Module>.std.basic_streambuf<wchar_t,std::char_traits<wchar_t>\u0020>.setg(A_0, ptr3, ptr4, num);
		}
		if ((_Mode & 2) != 0 && ptr2 != null)
		{
			<Module>.std.basic_streambuf<wchar_t,std::char_traits<wchar_t>\u0020>.setp(A_0, ptr3, ptr4, <Module>.std.basic_streambuf<wchar_t,std::char_traits<wchar_t>\u0020>.epptr(A_0));
		}
		*(long*)A_1 = _Off;
		*(long*)(A_1 + 8L / (long)sizeof(fpos<_Mbstatet>)) = 0L;
		initblk(A_1 + 16L / (long)sizeof(fpos<_Mbstatet>), 0, 8L);
		return A_1;
	}

	// Token: 0x0600002A RID: 42 RVA: 0x000B926C File Offset: 0x000B866C
	internal unsafe static ushort underflow(basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>* A_0)
	{
		char* ptr = <Module>.std.basic_streambuf<wchar_t,std::char_traits<wchar_t>\u0020>.gptr(A_0);
		if (ptr == null)
		{
			return 65535;
		}
		if (ptr < <Module>.std.basic_streambuf<wchar_t,std::char_traits<wchar_t>\u0020>.egptr(A_0))
		{
			return *ptr;
		}
		char* ptr2 = <Module>.std.basic_streambuf<wchar_t,std::char_traits<wchar_t>\u0020>.pptr(A_0);
		if (ptr2 == null || (*(A_0 + 112L) & 4) != 0)
		{
			return 65535;
		}
		basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>* ptr3 = A_0 + 104L;
		char** ptr4 = ptr3;
		char* ptr5 = *(ref *ptr4 < ptr2 ? ref ptr2 : ptr4);
		if (ptr5 == ptr)
		{
			return 65535;
		}
		*ptr3 = ptr5;
		char* ptr6 = <Module>.std.basic_streambuf<wchar_t,std::char_traits<wchar_t>\u0020>.gptr(A_0);
		char* ptr7 = <Module>.std.basic_streambuf<wchar_t,std::char_traits<wchar_t>\u0020>.eback(A_0);
		<Module>.std.basic_streambuf<wchar_t,std::char_traits<wchar_t>\u0020>.setg(A_0, ptr7, ptr6, ptr5);
		return *<Module>.std.basic_streambuf<wchar_t,std::char_traits<wchar_t>\u0020>.gptr(A_0);
	}

	// Token: 0x0600002B RID: 43 RVA: 0x000B91FC File Offset: 0x000B85FC
	internal unsafe static ushort pbackfail(basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>* A_0, ushort _Meta)
	{
		char* ptr = <Module>.std.basic_streambuf<wchar_t,std::char_traits<wchar_t>\u0020>.gptr(A_0);
		if (ptr != null && ptr != <Module>.std.basic_streambuf<wchar_t,std::char_traits<wchar_t>\u0020>.eback(A_0) && (((65535 == _Meta) ? 1 : 0) != 0 || ((_Meta == *(ptr - 2L)) ? 1 : 0) != 0 || (*(A_0 + 112L) & 2) == 0))
		{
			<Module>.std.basic_streambuf<wchar_t,std::char_traits<wchar_t>\u0020>.gbump(A_0, -1);
			if (((65535 == _Meta) ? 1 : 0) == 0)
			{
				*<Module>.std.basic_streambuf<wchar_t,std::char_traits<wchar_t>\u0020>.gptr(A_0) = (short)_Meta;
			}
			return (_Meta != ushort.MaxValue) ? _Meta : 0;
		}
		return 65535;
	}

	// Token: 0x0600002C RID: 44 RVA: 0x000B9090 File Offset: 0x000B8490
	internal unsafe static ushort overflow(basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>* A_0, ushort _Meta)
	{
		if ((*(A_0 + 112L) & 2) != 0)
		{
			return 65535;
		}
		if (((65535 == _Meta) ? 1 : 0) != 0)
		{
			return (_Meta != ushort.MaxValue) ? _Meta : 0;
		}
		char* ptr = <Module>.std.basic_streambuf<wchar_t,std::char_traits<wchar_t>\u0020>.pptr(A_0);
		char* ptr2 = <Module>.std.basic_streambuf<wchar_t,std::char_traits<wchar_t>\u0020>.epptr(A_0);
		if (ptr != null && ptr < ptr2)
		{
			*<Module>.std.basic_streambuf<wchar_t,std::char_traits<wchar_t>\u0020>._Pninc(A_0) = (short)_Meta;
			*(A_0 + 104L) = ptr + 2L;
			return _Meta;
		}
		ulong num = 0UL;
		char* ptr3 = <Module>.std.basic_streambuf<wchar_t,std::char_traits<wchar_t>\u0020>.eback(A_0);
		ulong num2;
		if (ptr != null)
		{
			num = ptr2 - ptr3 >> 1;
			if (num >= 32UL)
			{
				if (num < 1073741823UL)
				{
					num2 = num << (int)1L;
					goto IL_9F;
				}
				if (num < 2147483647UL)
				{
					num2 = 2147483647UL;
					goto IL_9F;
				}
				return 65535;
			}
		}
		num2 = 32UL;
		IL_9F:
		char* ptr4 = <Module>.std.allocator<wchar_t>.allocate(A_0 + 116L, num2);
		ulong num3 = num * 2UL;
		cpblk(ptr4, ptr3, num3);
		char* ptr5 = num3 + ptr4;
		*(A_0 + 104L) = ptr5 + 2L;
		<Module>.std.basic_streambuf<wchar_t,std::char_traits<wchar_t>\u0020>.setp(A_0, ptr4, ptr5, num2 * 2UL + ptr4 / 2);
		if ((*(A_0 + 112L) & 4) != 0)
		{
			<Module>.std.basic_streambuf<wchar_t,std::char_traits<wchar_t>\u0020>.setg(A_0, ptr4, null, ptr4);
		}
		else
		{
			long num4 = *(A_0 + 104L);
			char* ptr6 = (<Module>.std.basic_streambuf<wchar_t,std::char_traits<wchar_t>\u0020>.gptr(A_0) - ptr3 >> 1) * 2L + ptr4;
			<Module>.std.basic_streambuf<wchar_t,std::char_traits<wchar_t>\u0020>.setg(A_0, ptr4, ptr6, num4);
		}
		if ((*(A_0 + 112L) & 1) != 0)
		{
			ulong num5 = num3;
			void* ptr7 = ptr3;
			if (num5 >= 4096UL)
			{
				<Module>.std._Adjust_manually_vector_aligned(ref ptr7, ref num5);
			}
			<Module>.delete(ptr7, num5);
		}
		*(A_0 + 112L) = *(A_0 + 112L) | 1;
		*<Module>.std.basic_streambuf<wchar_t,std::char_traits<wchar_t>\u0020>._Pninc(A_0) = (short)_Meta;
		return _Meta;
	}

	// Token: 0x0600002D RID: 45 RVA: 0x000B64E8 File Offset: 0x000B58E8
	internal unsafe static void {dtor}(basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>* A_0)
	{
		*A_0 = ref <Module>.??_7?$basic_stringbuf@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@6B@;
		try
		{
			<Module>.std.basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>._Tidy(A_0);
		}
		catch
		{
			<Module>.___CxxCallUnwindDtor(ldftn(std.basic_streambuf<wchar_t,std::char_traits<wchar_t>\u0020>.{dtor}), A_0);
			throw;
		}
		<Module>.std.basic_streambuf<wchar_t,std::char_traits<wchar_t>\u0020>.{dtor}(A_0);
	}

	// Token: 0x0600002E RID: 46 RVA: 0x000B9560 File Offset: 0x000B8960
	internal unsafe static void* __vecDelDtor(basic_ostringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>* A_0, uint A_0)
	{
		if ((A_0 & 2U) != 0U)
		{
			basic_ostringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>* ptr = A_0 - 144L;
			<Module>.__ehvec_dtor(A_0 - 136L, 232UL, (ulong)(*ptr), ldftn(std.basic_ostringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>.__vbaseDtor));
			if ((A_0 & 1U) != 0U)
			{
				basic_ostringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>* ptr2 = ptr;
				<Module>.delete[](ptr2, (ulong)(*ptr2 * 232L + 8L));
			}
			return ptr;
		}
		basic_ostringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>* ptr3 = A_0 - 136L;
		basic_ostringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>* ptr4 = ptr3 + 136L;
		<Module>.std.basic_ostringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>.{dtor}(ptr4);
		<Module>.std.basic_ios<wchar_t,std::char_traits<wchar_t>\u0020>.{dtor}(ptr4);
		if ((A_0 & 1U) != 0U)
		{
			<Module>.delete(ptr3, 232UL);
		}
		return ptr3;
	}

	// Token: 0x0600002F RID: 47 RVA: 0x000B9004 File Offset: 0x000B8404
	internal unsafe static void* __vecDelDtor(basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>* A_0, uint A_0)
	{
		if ((A_0 & 2U) != 0U)
		{
			basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>* ptr = A_0 - 8L;
			<Module>.__ehvec_dtor(A_0, 120UL, (ulong)(*ptr), ldftn(std.basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>.{dtor}));
			if ((A_0 & 1U) != 0U)
			{
				basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>* ptr2 = ptr;
				<Module>.delete[](ptr2, (ulong)(*ptr2 * 120L + 8L));
			}
			return ptr;
		}
		*A_0 = ref <Module>.??_7?$basic_stringbuf@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@6B@;
		try
		{
			<Module>.std.basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>._Tidy(A_0);
		}
		catch
		{
			<Module>.___CxxCallUnwindDtor(ldftn(std.basic_streambuf<wchar_t,std::char_traits<wchar_t>\u0020>.{dtor}), A_0);
			throw;
		}
		<Module>.std.basic_streambuf<wchar_t,std::char_traits<wchar_t>\u0020>.{dtor}(A_0);
		if ((A_0 & 1U) != 0U)
		{
			<Module>.delete(A_0, 120UL);
		}
		return A_0;
	}

	// Token: 0x06000030 RID: 48 RVA: 0x000B5668 File Offset: 0x000B4A68
	internal unsafe static void {dtor}(basic_ostream<wchar_t,std::char_traits<wchar_t>\u0020>.sentry* A_0)
	{
		try
		{
			if (<Module>.std.uncaught_exception() == null)
			{
				<Module>.std.basic_ostream<wchar_t,std::char_traits<wchar_t>\u0020>._Osfx(*A_0);
			}
		}
		catch
		{
			<Module>.___CxxCallUnwindDtor(ldftn(std.basic_ostream<wchar_t,std::char_traits<wchar_t>\u0020>._Sentry_base.{dtor}), A_0);
			throw;
		}
		<Module>.std.basic_ostream<wchar_t,std::char_traits<wchar_t>\u0020>._Sentry_base.{dtor}(A_0);
	}

	// Token: 0x06000031 RID: 49 RVA: 0x000B56B8 File Offset: 0x000B4AB8
	internal unsafe static basic_ostream<wchar_t,std::char_traits<wchar_t>\u0020>.sentry* {ctor}(basic_ostream<wchar_t,std::char_traits<wchar_t>\u0020>.sentry* A_0, basic_ostream<wchar_t,std::char_traits<wchar_t>\u0020>* _Ostr)
	{
		<Module>.std.basic_ostream<wchar_t,std::char_traits<wchar_t>\u0020>._Sentry_base.{ctor}(A_0, _Ostr);
		try
		{
			if (<Module>.std.ios_base.good((long)(*(*_Ostr + 4L)) + _Ostr) != null && <Module>.std.basic_ios<wchar_t,std::char_traits<wchar_t>\u0020>.tie((long)(*(*_Ostr + 4L)) + _Ostr) != null && <Module>.std.basic_ios<wchar_t,std::char_traits<wchar_t>\u0020>.tie((long)(*(*_Ostr + 4L)) + _Ostr) != _Ostr)
			{
				<Module>.std.basic_ostream<wchar_t,std::char_traits<wchar_t>\u0020>.flush(<Module>.std.basic_ios<wchar_t,std::char_traits<wchar_t>\u0020>.tie((long)(*(*_Ostr + 4L)) + _Ostr));
			}
			*(A_0 + 8L) = <Module>.std.ios_base.good((long)(*(*_Ostr + 4L)) + _Ostr);
		}
		catch
		{
			<Module>.___CxxCallUnwindDtor(ldftn(std.basic_ostream<wchar_t,std::char_traits<wchar_t>\u0020>._Sentry_base.{dtor}), A_0);
			throw;
		}
		return A_0;
	}

	// Token: 0x06000032 RID: 50 RVA: 0x000B5C7C File Offset: 0x000B507C
	internal unsafe static void _Tidy(basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>* A_0)
	{
		if ((*(A_0 + 112L) & 1) != 0)
		{
			ulong num = (((<Module>.std.basic_streambuf<wchar_t,std::char_traits<wchar_t>\u0020>.pptr(A_0) == null) ? <Module>.std.basic_streambuf<wchar_t,std::char_traits<wchar_t>\u0020>.egptr(A_0) : <Module>.std.basic_streambuf<wchar_t,std::char_traits<wchar_t>\u0020>.epptr(A_0)) - <Module>.std.basic_streambuf<wchar_t,std::char_traits<wchar_t>\u0020>.eback(A_0) >> 1) * 2L;
			void* ptr = <Module>.std.basic_streambuf<wchar_t,std::char_traits<wchar_t>\u0020>.eback(A_0);
			if (num >= 4096UL)
			{
				<Module>.std._Adjust_manually_vector_aligned(ref ptr, ref num);
			}
			<Module>.delete(ptr, num);
		}
		<Module>.std.basic_streambuf<wchar_t,std::char_traits<wchar_t>\u0020>.setg(A_0, null, null, null);
		<Module>.std.basic_streambuf<wchar_t,std::char_traits<wchar_t>\u0020>.setp(A_0, null, null);
		*(A_0 + 104L) = 0L;
		*(A_0 + 112L) = *(A_0 + 112L) & -2;
	}

	// Token: 0x06000033 RID: 51 RVA: 0x000B7058 File Offset: 0x000B6458
	internal unsafe static basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>* str(basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>* A_0, basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>* A_1)
	{
		try
		{
			uint num = 0U;
			basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>* ptr;
			basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>* ptr2;
			try
			{
				ptr = A_1 + 16L / (long)sizeof(basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>);
				*(long*)ptr = 0L;
				ptr2 = A_1 + 24L / (long)sizeof(basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>);
				*(long*)ptr2 = 0L;
			}
			catch
			{
				<Module>.___CxxCallUnwindDtor(ldftn(std._String_val<std::_Simple_types<wchar_t>\u0020>._Bxty.{dtor}), (void*)A_1);
				throw;
			}
			try
			{
				*(long*)ptr = 0L;
				*(long*)ptr2 = 7L;
				*(short*)A_1 = 0;
			}
			catch
			{
				<Module>.___CxxCallUnwindDtor(ldftn(std._String_alloc<std::_String_base_types<wchar_t,std::allocator<wchar_t>\u0020>\u0020>.{dtor}), (void*)A_1);
				throw;
			}
			num = 1U;
			if ((*(A_0 + 112L) & 2) == 0 && <Module>.std.basic_streambuf<wchar_t,std::char_traits<wchar_t>\u0020>.pptr(A_0) != null)
			{
				char* ptr3 = <Module>.std.basic_streambuf<wchar_t,std::char_traits<wchar_t>\u0020>.pbase(A_0);
				char* ptr4 = <Module>.std.basic_streambuf<wchar_t,std::char_traits<wchar_t>\u0020>.pptr(A_0);
				char** ptr5 = A_0 + 104L;
				char** ptr6 = (ptr4 < *ptr5 ? ptr5 : ref ptr4);
				<Module>.std.basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>.assign(A_1, ptr3, *(long*)ptr6 - ptr3 >> 1);
			}
			else if ((*(A_0 + 112L) & 4) == 0 && <Module>.std.basic_streambuf<wchar_t,std::char_traits<wchar_t>\u0020>.gptr(A_0) != null)
			{
				char* ptr7 = <Module>.std.basic_streambuf<wchar_t,std::char_traits<wchar_t>\u0020>.eback(A_0);
				<Module>.std.basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>.assign(A_1, ptr7, <Module>.std.basic_streambuf<wchar_t,std::char_traits<wchar_t>\u0020>.egptr(A_0) - ptr7 >> 1);
			}
		}
		catch
		{
			uint num;
			if ((num & 1U) != 0U)
			{
				num &= 4294967294U;
				<Module>.___CxxCallUnwindDtor(ldftn(std.basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>.{dtor}), (void*)A_1);
			}
			throw;
		}
		return A_1;
	}

	// Token: 0x06000034 RID: 52 RVA: 0x000B52FC File Offset: 0x000B46FC
	internal unsafe static void {dtor}(basic_ostream<wchar_t,std::char_traits<wchar_t>\u0020>._Sentry_base* A_0)
	{
		long num = *A_0;
		if (<Module>.std.basic_ios<wchar_t,std::char_traits<wchar_t>\u0020>.rdbuf((long)(*(*num + 4L)) + num) != null)
		{
			num = *A_0;
			basic_streambuf<wchar_t,std::char_traits<wchar_t>\u0020>* ptr = <Module>.std.basic_ios<wchar_t,std::char_traits<wchar_t>\u0020>.rdbuf((long)(*(*num + 4L)) + num);
			calli(System.Void modopt(System.Runtime.CompilerServices.CallConvCdecl)(System.IntPtr), ptr, *(*ptr + 16L));
		}
	}

	// Token: 0x06000035 RID: 53 RVA: 0x000B533C File Offset: 0x000B473C
	internal unsafe static basic_ostream<wchar_t,std::char_traits<wchar_t>\u0020>._Sentry_base* {ctor}(basic_ostream<wchar_t,std::char_traits<wchar_t>\u0020>._Sentry_base* A_0, basic_ostream<wchar_t,std::char_traits<wchar_t>\u0020>* _Ostr)
	{
		*A_0 = _Ostr;
		if (<Module>.std.basic_ios<wchar_t,std::char_traits<wchar_t>\u0020>.rdbuf((long)(*(*_Ostr + 4L)) + _Ostr) != null)
		{
			long num = *A_0;
			basic_streambuf<wchar_t,std::char_traits<wchar_t>\u0020>* ptr = <Module>.std.basic_ios<wchar_t,std::char_traits<wchar_t>\u0020>.rdbuf((long)(*(*num + 4L)) + num);
			calli(System.Void modopt(System.Runtime.CompilerServices.CallConvCdecl)(System.IntPtr), ptr, *(*ptr + 8L));
		}
		return A_0;
	}

	// Token: 0x06000036 RID: 54 RVA: 0x000B537C File Offset: 0x000B477C
	internal static int _Getstate(int _Mode)
	{
		int num = 0;
		num = (((_Mode & 1) == 0) ? 4 : num);
		if ((_Mode & 2) == 0)
		{
			num |= 2;
		}
		if ((_Mode & 8) != 0)
		{
			num |= 8;
		}
		if ((_Mode & 4) != 0)
		{
			num |= 16;
		}
		return num;
	}

	// Token: 0x06000037 RID: 55 RVA: 0x000B76DC File Offset: 0x000B6ADC
	internal unsafe static basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>* operator+<wchar_t,struct\u0020std::char_traits<wchar_t>,class\u0020std::allocator<wchar_t>\u0020>(basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>* A_0, basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>* _Left, char* _Right)
	{
		try
		{
			uint num = 0U;
			<Module>.std.basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>.{ctor}(A_0);
			num = 1U;
			ulong num2 = (ulong)(*(_Left + 16L));
			char* ptr = _Right;
			if (*_Right != 0)
			{
				do
				{
					ptr += 2L;
				}
				while (*ptr != 0);
			}
			<Module>.std.basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>.reserve(A_0, (ptr - _Right >> 1) + num2);
			<Module>.std.basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>.append(A_0, _Left);
			char* ptr2 = _Right;
			if (*_Right != 0)
			{
				do
				{
					ptr2 += 2L;
				}
				while (*ptr2 != 0);
			}
			<Module>.std.basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>.append(A_0, _Right, ptr2 - _Right >> 1);
		}
		catch
		{
			uint num;
			if ((num & 1U) != 0U)
			{
				num &= 4294967294U;
				<Module>.___CxxCallUnwindDtor(ldftn(std.basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>.{dtor}), (void*)A_0);
			}
			throw;
		}
		return A_0;
	}

	// Token: 0x06000038 RID: 56 RVA: 0x000B7188 File Offset: 0x000B6588
	internal unsafe static basic_ostream<wchar_t,std::char_traits<wchar_t>\u0020>* operator<<<wchar_t,struct\u0020std::char_traits<wchar_t>\u0020>(basic_ostream<wchar_t,std::char_traits<wchar_t>\u0020>* _Ostr, sbyte* _Val)
	{
		long num = (long)stackalloc byte[<Module>.__CxxQueryExceptionSize()];
		int num2 = 0;
		sbyte* ptr = _Val;
		if (*(sbyte*)_Val != 0)
		{
			do
			{
				ptr += 1L / (long)sizeof(sbyte);
			}
			while (*(sbyte*)ptr != 0);
		}
		long num3 = (long)(ptr - _Val);
		long num4;
		if (<Module>.std.ios_base.width((long)(*(*_Ostr + 4L)) + _Ostr) > 0L && <Module>.std.ios_base.width((long)(*(*_Ostr + 4L)) + _Ostr) > num3)
		{
			num4 = <Module>.std.ios_base.width((long)(*(*_Ostr + 4L)) + _Ostr) - num3;
		}
		else
		{
			num4 = 0L;
		}
		long num5 = num4;
		basic_ostream<wchar_t,std::char_traits<wchar_t>\u0020>.sentry sentry;
		<Module>.std.basic_ostream<wchar_t,std::char_traits<wchar_t>\u0020>.sentry.{ctor}(ref sentry, _Ostr);
		try
		{
			if (*((ref sentry) + 8) != 0)
			{
				uint exceptionCode;
				try
				{
					locale locale;
					locale* ptr2 = <Module>.std.ios_base.getloc((long)(*(*_Ostr + 4L)) + _Ostr, &locale);
					ctype<wchar_t>* ptr3;
					try
					{
						ptr3 = <Module>.std.use_facet<class\u0020std::ctype<wchar_t>\u0020>(ptr2);
					}
					catch
					{
						<Module>.___CxxCallUnwindDtor(ldftn(std.locale.{dtor}), (void*)(&locale));
						throw;
					}
					<Module>.std.locale.{dtor}(ref locale);
					if ((<Module>.std.ios_base.flags((long)(*(*_Ostr + 4L)) + _Ostr) & 448) != 64)
					{
						while (0L < num5)
						{
							basic_streambuf<wchar_t,std::char_traits<wchar_t>\u0020>* ptr4 = <Module>.std.basic_ios<wchar_t,std::char_traits<wchar_t>\u0020>.rdbuf((long)(*(*_Ostr + 4L)) + _Ostr);
							ushort num6 = <Module>.std.basic_ios<wchar_t,std::char_traits<wchar_t>\u0020>.fill((long)(*(*_Ostr + 4L)) + _Ostr);
							ushort num7 = <Module>.std.basic_streambuf<wchar_t,std::char_traits<wchar_t>\u0020>.sputc(ptr4, (char)num6);
							if (((65535 == num7) ? 1 : 0) != 0)
							{
								num2 |= 4;
								break;
							}
							num5 -= 1L;
						}
					}
					while (num2 == 0)
					{
						if (0L >= num3)
						{
							while (0L < num5)
							{
								basic_streambuf<wchar_t,std::char_traits<wchar_t>\u0020>* ptr5 = <Module>.std.basic_ios<wchar_t,std::char_traits<wchar_t>\u0020>.rdbuf((long)(*(*_Ostr + 4L)) + _Ostr);
								ushort num8 = <Module>.std.basic_ios<wchar_t,std::char_traits<wchar_t>\u0020>.fill((long)(*(*_Ostr + 4L)) + _Ostr);
								ushort num9 = <Module>.std.basic_streambuf<wchar_t,std::char_traits<wchar_t>\u0020>.sputc(ptr5, (char)num8);
								if (((65535 == num9) ? 1 : 0) != 0)
								{
									num2 |= 4;
									break;
								}
								num5 -= 1L;
							}
							break;
						}
						basic_streambuf<wchar_t,std::char_traits<wchar_t>\u0020>* ptr6 = <Module>.std.basic_ios<wchar_t,std::char_traits<wchar_t>\u0020>.rdbuf((long)(*(*_Ostr + 4L)) + _Ostr);
						ushort num10 = <Module>.std.ctype<wchar_t>.widen(ptr3, *(sbyte*)_Val);
						ushort num11 = <Module>.std.basic_streambuf<wchar_t,std::char_traits<wchar_t>\u0020>.sputc(ptr6, (char)num10);
						num2 = ((((65535 == num11) ? 1 : 0) != 0) ? 4 : num2);
						num3 -= 1L;
						_Val += 1L / (long)sizeof(sbyte);
					}
					<Module>.std.ios_base.width((long)(*(*_Ostr + 4L)) + _Ostr, 0L);
				}
				catch when (delegate
				{
					// Failed to create a 'catch-when' expression
					exceptionCode = (uint)Marshal.GetExceptionCode();
					endfilter(<Module>.__CxxExceptionFilter(Marshal.GetExceptionPointers(), null, 0, null) != null);
				})
				{
					uint num12 = 0U;
					<Module>.__CxxRegisterExceptionObject(Marshal.GetExceptionPointers(), num);
					try
					{
						try
						{
							<Module>.std.basic_ios<wchar_t,std::char_traits<wchar_t>\u0020>.setstate((long)(*(*_Ostr + 4L)) + _Ostr, 4, true);
							goto IL_222;
						}
						catch when (delegate
						{
							// Failed to create a 'catch-when' expression
							num12 = <Module>.__CxxDetectRethrow(Marshal.GetExceptionPointers());
							endfilter(num12 != 0U);
						})
						{
						}
						if (num12 != 0U)
						{
							throw;
						}
					}
					finally
					{
						<Module>.__CxxUnregisterExceptionObject(num, (int)num12);
					}
				}
			}
			else
			{
				num2 = 4;
			}
			IL_222:
			<Module>.std.basic_ios<wchar_t,std::char_traits<wchar_t>\u0020>.setstate((long)(*(*_Ostr + 4L)) + _Ostr, num2, false);
		}
		catch
		{
			<Module>.___CxxCallUnwindDtor(ldftn(std.basic_ostream<wchar_t,std::char_traits<wchar_t>\u0020>.sentry.{dtor}), (void*)(&sentry));
			throw;
		}
		try
		{
			if (<Module>.std.uncaught_exception() == null)
			{
				<Module>.std.basic_ostream<wchar_t,std::char_traits<wchar_t>\u0020>._Osfx(sentry);
			}
		}
		catch
		{
			<Module>.___CxxCallUnwindDtor(ldftn(std.basic_ostream<wchar_t,std::char_traits<wchar_t>\u0020>._Sentry_base.{dtor}), (void*)(&sentry));
			throw;
		}
		<Module>.std.basic_ostream<wchar_t,std::char_traits<wchar_t>\u0020>._Sentry_base.{dtor}(ref sentry);
		return _Ostr;
	}

	// Token: 0x06000039 RID: 57 RVA: 0x000B6534 File Offset: 0x000B5934
	internal unsafe static basic_ostream<wchar_t,std::char_traits<wchar_t>\u0020>* operator<<<wchar_t,struct\u0020std::char_traits<wchar_t>,class\u0020std::allocator<wchar_t>\u0020>(basic_ostream<wchar_t,std::char_traits<wchar_t>\u0020>* _Ostr, basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>* _Str)
	{
		ulong num = (ulong)(*(_Str + 16L));
		char* ptr = _Str;
		if (((8L <= *(_Str + 24L)) ? 1 : 0) != 0)
		{
			ptr = *_Str;
		}
		return <Module>.std._Insert_string<wchar_t,struct\u0020std::char_traits<wchar_t>,unsigned\u0020__int64>(_Ostr, ptr, num);
	}

	// Token: 0x0600003A RID: 58 RVA: 0x000B7498 File Offset: 0x000B6898
	internal unsafe static _Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>,void\u0020*>* _Lbound<class\u0020std::basic_string<wchar_t,struct\u0020std::char_traits<wchar_t>,class\u0020std::allocator<wchar_t>\u0020>\u0020>(_Tree<std::_Tmap_traits<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>,PatcherManager\u0020*,std::less<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020>,std::allocator<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>\u0020>,0>\u0020>* A_0, basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>* _Keyval)
	{
		_Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>,void\u0020*>* ptr = *A_0;
		_Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>,void\u0020*>* ptr2 = *(long*)(ptr + 8L / (long)sizeof(_Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>,void\u0020*>));
		if (*(sbyte*)(ptr2 + 25L / (long)sizeof(_Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>,void\u0020*>)) == 0)
		{
			do
			{
				if (((<Module>.std.basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>.compare(ptr2 + 32L / (long)sizeof(_Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>,void\u0020*>), _Keyval) < 0) ? 1 : 0) != 0)
				{
					ptr2 = *(long*)(ptr2 + 16L / (long)sizeof(_Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>,void\u0020*>));
				}
				else
				{
					ptr = ptr2;
					ptr2 = *(long*)ptr2;
				}
			}
			while (*(sbyte*)(ptr2 + 25L / (long)sizeof(_Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>,void\u0020*>)) == 0);
		}
		return ptr;
	}

	// Token: 0x0600003B RID: 59 RVA: 0x000B5D04 File Offset: 0x000B5104
	internal unsafe static int compare(basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>* A_0, basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>* _Right)
	{
		ulong num = (ulong)(*(_Right + 16L));
		char* ptr = _Right;
		if (((8L <= *(_Right + 24L)) ? 1 : 0) != 0)
		{
			ptr = *_Right;
		}
		ulong num2 = (ulong)(*(A_0 + 16L));
		char* ptr2 = A_0;
		if (((8L <= *(A_0 + 24L)) ? 1 : 0) != 0)
		{
			ptr2 = *A_0;
		}
		return <Module>.std._Traits_compare<struct\u0020std::char_traits<wchar_t>\u0020>(ptr2, num2, ptr, num);
	}

	// Token: 0x0600003C RID: 60 RVA: 0x000B5D54 File Offset: 0x000B5154
	internal unsafe static char* data(basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>* A_0)
	{
		char* ptr = A_0;
		if (((8L <= *(A_0 + 24L)) ? 1 : 0) != 0)
		{
			ptr = *A_0;
		}
		return ptr;
	}

	// Token: 0x0600003D RID: 61 RVA: 0x000B5754 File Offset: 0x000B4B54
	internal unsafe static basic_ostream<wchar_t,std::char_traits<wchar_t>\u0020>* _Insert_string<wchar_t,struct\u0020std::char_traits<wchar_t>,unsigned\u0020__int64>(basic_ostream<wchar_t,std::char_traits<wchar_t>\u0020>* _Ostr, char* _Data, ulong _Size)
	{
		long num = (long)stackalloc byte[<Module>.__CxxQueryExceptionSize()];
		int num2 = 0;
		ulong num3;
		if (<Module>.std.ios_base.width((long)(*(*_Ostr + 4L)) + _Ostr) > 0L && <Module>.std.ios_base.width((long)(*(*_Ostr + 4L)) + _Ostr) > _Size)
		{
			num3 = <Module>.std.ios_base.width((long)(*(*_Ostr + 4L)) + _Ostr) - _Size;
		}
		else
		{
			num3 = 0UL;
		}
		ulong num4 = num3;
		basic_ostream<wchar_t,std::char_traits<wchar_t>\u0020>.sentry sentry;
		<Module>.std.basic_ostream<wchar_t,std::char_traits<wchar_t>\u0020>.sentry.{ctor}(ref sentry, _Ostr);
		try
		{
			if (*((ref sentry) + 8) != 0)
			{
				uint exceptionCode;
				try
				{
					if ((<Module>.std.ios_base.flags((long)(*(*_Ostr + 4L)) + _Ostr) & 448) == 64)
					{
						goto IL_C7;
					}
					while (0UL < num4)
					{
						basic_streambuf<wchar_t,std::char_traits<wchar_t>\u0020>* ptr = <Module>.std.basic_ios<wchar_t,std::char_traits<wchar_t>\u0020>.rdbuf((long)(*(*_Ostr + 4L)) + _Ostr);
						ushort num5 = <Module>.std.basic_ios<wchar_t,std::char_traits<wchar_t>\u0020>.fill((long)(*(*_Ostr + 4L)) + _Ostr);
						ushort num6 = <Module>.std.basic_streambuf<wchar_t,std::char_traits<wchar_t>\u0020>.sputc(ptr, (char)num5);
						if (((65535 == num6) ? 1 : 0) != 0)
						{
							num2 |= 4;
							break;
						}
						num4 -= 1UL;
					}
					if (num2 == 0)
					{
						goto IL_C7;
					}
					IL_E3:
					while (0UL < num4)
					{
						basic_streambuf<wchar_t,std::char_traits<wchar_t>\u0020>* ptr2 = <Module>.std.basic_ios<wchar_t,std::char_traits<wchar_t>\u0020>.rdbuf((long)(*(*_Ostr + 4L)) + _Ostr);
						ushort num7 = <Module>.std.basic_ios<wchar_t,std::char_traits<wchar_t>\u0020>.fill((long)(*(*_Ostr + 4L)) + _Ostr);
						ushort num8 = <Module>.std.basic_streambuf<wchar_t,std::char_traits<wchar_t>\u0020>.sputc(ptr2, (char)num7);
						if (((65535 == num8) ? 1 : 0) != 0)
						{
							num2 |= 4;
							break;
						}
						num4 -= 1UL;
					}
					goto IL_12F;
					IL_C7:
					if (<Module>.std.basic_streambuf<wchar_t,std::char_traits<wchar_t>\u0020>.sputn(<Module>.std.basic_ios<wchar_t,std::char_traits<wchar_t>\u0020>.rdbuf((long)(*(*_Ostr + 4L)) + _Ostr), _Data, _Size) == _Size)
					{
						goto IL_E3;
					}
					num2 = 4;
					IL_12F:
					<Module>.std.ios_base.width((long)(*(*_Ostr + 4L)) + _Ostr, 0L);
				}
				catch when (delegate
				{
					// Failed to create a 'catch-when' expression
					exceptionCode = (uint)Marshal.GetExceptionCode();
					endfilter(<Module>.__CxxExceptionFilter(Marshal.GetExceptionPointers(), null, 0, null) != null);
				})
				{
					uint num9 = 0U;
					<Module>.__CxxRegisterExceptionObject(Marshal.GetExceptionPointers(), num);
					try
					{
						try
						{
							<Module>.std.basic_ios<wchar_t,std::char_traits<wchar_t>\u0020>.setstate((long)(*(*_Ostr + 4L)) + _Ostr, 4, true);
							goto IL_1A1;
						}
						catch when (delegate
						{
							// Failed to create a 'catch-when' expression
							num9 = <Module>.__CxxDetectRethrow(Marshal.GetExceptionPointers());
							endfilter(num9 != 0U);
						})
						{
						}
						if (num9 != 0U)
						{
							throw;
						}
					}
					finally
					{
						<Module>.__CxxUnregisterExceptionObject(num, (int)num9);
					}
				}
			}
			else
			{
				num2 = 4;
			}
			IL_1A1:
			<Module>.std.basic_ios<wchar_t,std::char_traits<wchar_t>\u0020>.setstate((long)(*(*_Ostr + 4L)) + _Ostr, num2, false);
		}
		catch
		{
			<Module>.___CxxCallUnwindDtor(ldftn(std.basic_ostream<wchar_t,std::char_traits<wchar_t>\u0020>.sentry.{dtor}), (void*)(&sentry));
			throw;
		}
		try
		{
			if (<Module>.std.uncaught_exception() == null)
			{
				<Module>.std.basic_ostream<wchar_t,std::char_traits<wchar_t>\u0020>._Osfx(sentry);
			}
		}
		catch
		{
			<Module>.___CxxCallUnwindDtor(ldftn(std.basic_ostream<wchar_t,std::char_traits<wchar_t>\u0020>._Sentry_base.{dtor}), (void*)(&sentry));
			throw;
		}
		<Module>.std.basic_ostream<wchar_t,std::char_traits<wchar_t>\u0020>._Sentry_base.{dtor}(ref sentry);
		return _Ostr;
	}

	// Token: 0x0600003E RID: 62 RVA: 0x000B8CE4 File Offset: 0x000B80E4
	internal unsafe static pair<std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>\u0020>\u0020>\u0020>,bool>* _Try_emplace<class\u0020std::basic_string<wchar_t,struct\u0020std::char_traits<wchar_t>,class\u0020std::allocator<wchar_t>\u0020>\u0020const\u0020&>(map<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>,PatcherManager\u0020*,std::less<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020>,std::allocator<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>\u0020>\u0020>* A_0, pair<std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>\u0020>\u0020>\u0020>,bool>* A_1, basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>* _Keyval)
	{
		_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>\u0020>\u0020>\u0020> tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>_u0020const_u0020,PatcherManager_u0020*>_u0020>_u0020>_u0020> = 0L;
		_Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>,void\u0020*>* ptr = <Module>.std._Tree<std::_Tmap_traits<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>,PatcherManager\u0020*,std::less<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020>,std::allocator<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>\u0020>,0>\u0020>._Lbound<class\u0020std::basic_string<wchar_t,struct\u0020std::char_traits<wchar_t>,class\u0020std::allocator<wchar(A_0, _Keyval);
		<Module>.std._Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>\u0020>\u0020>,std::_Iterator_base0>.{ctor}(ref tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>_u0020const_u0020,PatcherManager_u0020*>_u0020>_u0020>_u0020>, ptr, A_0);
		if (((tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>_u0020const_u0020,PatcherManager_u0020*>_u0020>_u0020>_u0020> == *A_0) ? 1 : 0) == 0)
		{
			long num = tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>_u0020const_u0020,PatcherManager_u0020*>_u0020>_u0020>_u0020> + 32L;
			if (((<Module>.std.basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>.compare(_Keyval, num) < 0) ? 1 : 0) == 0)
			{
				cpblk(A_1, ref tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>_u0020const_u0020,PatcherManager_u0020*>_u0020>_u0020>_u0020>, 8);
				*(byte*)(A_1 + 8L / (long)sizeof(pair<std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>\u0020>\u0020>\u0020>,bool>)) = 0;
				return A_1;
			}
		}
		tuple<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020&> tuple<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>_u0020const_u0020&> = _Keyval;
		_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>\u0020>\u0020>\u0020> tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>_u0020const_u0020,PatcherManager_u0020*>_u0020>_u0020>_u0020> = tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>_u0020const_u0020,PatcherManager_u0020*>_u0020>_u0020>_u0020>;
		tuple<> tuple<>;
		_Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>,void\u0020*>* ptr2 = <Module>.std._Tree_comp_alloc<std::_Tmap_traits<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>,PatcherManager\u0020*,std::less<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020>,std::allocator<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>\u0020>,0>\u0020>._Buynode<struct\u0020std::piecewise_construct_t\u0020const\u0020&,class\u0020std::tuple<class\u0020std:(A_0, ref <Module>.std.piecewise_construct, ref tuple<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>_u0020const_u0020&>, ref tuple<>);
		_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>\u0020>\u0020>\u0020> tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>_u0020const_u0020,PatcherManager_u0020*>_u0020>_u0020>_u0020>2;
		<Module>.std._Tree<std::_Tmap_traits<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>,PatcherManager\u0020*,std::less<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020>,std::allocator<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>\u0020>,0>\u0020>._Insert_hint<struct\u0020std::pair<class\u0020std::basic_string<wchar_t,struct\u0020std::char_traits<wchar_t>,clas(A_0, &tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>_u0020const_u0020,PatcherManager_u0020*>_u0020>_u0020>_u0020>2, tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>_u0020const_u0020,PatcherManager_u0020*>_u0020>_u0020>_u0020>, ptr2 + 32L / (long)sizeof(_Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>,void\u0020*>), ptr2);
		cpblk(A_1, ref tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>_u0020const_u0020,PatcherManager_u0020*>_u0020>_u0020>_u0020>2, 8);
		*(byte*)(A_1 + 8L / (long)sizeof(pair<std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>\u0020>\u0020>\u0020>,bool>)) = 1;
		return A_1;
	}

	// Token: 0x0600003F RID: 63 RVA: 0x000B59C8 File Offset: 0x000B4DC8
	internal unsafe static int _Traits_compare<struct\u0020std::char_traits<wchar_t>\u0020>(char* _Left, ulong _Left_size, char* _Right, ulong _Right_size)
	{
		ulong num = (ulong)(*(ref _Right_size < _Left_size ? ref _Right_size : ref _Left_size));
		char* ptr = _Right;
		int num2 = 0;
		if (num != 0UL)
		{
			ushort num3 = *_Left;
			ushort num4 = *_Right;
			if (num3 >= num4)
			{
				long num5 = _Left - _Right;
				while (num3 <= num4)
				{
					if (num == 1UL)
					{
						goto IL_57;
					}
					num -= 1UL;
					ptr += 2L;
					num3 = *(num5 + ptr);
					num4 = *ptr;
					if (num3 < num4)
					{
						goto IL_4F;
					}
				}
				num2 = 1;
				goto IL_57;
			}
			IL_4F:
			num2 = -1;
		}
		IL_57:
		int num6 = num2;
		if (num6 != null)
		{
			return num6;
		}
		if (_Left_size < _Right_size)
		{
			return -1;
		}
		return _Left_size > _Right_size;
	}

	// Token: 0x06000040 RID: 64 RVA: 0x000B87E0 File Offset: 0x000B7BE0
	internal unsafe static _Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>,void\u0020*>* _Buynode<struct\u0020std::piecewise_construct_t\u0020const\u0020&,class\u0020std::tuple<class\u0020std::basic_string<wchar_t,struct\u0020std::char_traits<wchar_t>,class\u0020std::allocator<wchar_t>\u0020>\u0020const\u0020&>,class\u0020std::tuple<>\u0020>(_Tree_comp_alloc<std::_Tmap_traits<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>,PatcherManager\u0020*,std::less<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020>,std::allocator<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>\u0020>,0>\u0020>* A_0, piecewise_construct_t* <_Val_0>, tuple<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020&>* <_Val_1>, tuple<>* <_Val_2>)
	{
		long num = (long)stackalloc byte[<Module>.__CxxQueryExceptionSize()];
		_Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>,void\u0020*>* ptr = <Module>.std._Tree_comp_alloc<std::_Tmap_traits<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>,PatcherManager\u0020*,std::less<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020>,std::allocator<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>\u0020>,0>\u0020>._Buynode0(A_0);
		*(byte*)(ptr + 24L / (long)sizeof(_Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>,void\u0020*>)) = 0;
		*(byte*)(ptr + 25L / (long)sizeof(_Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>,void\u0020*>)) = 0;
		uint exceptionCode;
		try
		{
			_Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>,void\u0020*>* ptr2 = ptr + 32L / (long)sizeof(_Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>,void\u0020*>);
			pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>* ptr3 = (pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>*)ptr2;
			tuple<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020&> tuple<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>_u0020const_u0020&>;
			cpblk(ref tuple<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>_u0020const_u0020&>, <_Val_1>, 8);
			piecewise_construct_t piecewise_construct_t = *<_Val_0>;
			basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>* ptr4 = tuple<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>_u0020const_u0020&>;
			try
			{
				*(long*)(ptr2 + 16L / (long)sizeof(_Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>,void\u0020*>)) = 0L;
				*(long*)(ptr2 + 24L / (long)sizeof(_Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>,void\u0020*>)) = 0L;
			}
			catch
			{
				<Module>.___CxxCallUnwindDtor(ldftn(std._String_val<std::_Simple_types<wchar_t>\u0020>._Bxty.{dtor}), (void*)ptr3);
				throw;
			}
			try
			{
				<Module>.std.basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>._Construct_lv_contents(ptr2, ptr4);
			}
			catch
			{
				<Module>.___CxxCallUnwindDtor(ldftn(std._String_alloc<std::_String_base_types<wchar_t,std::allocator<wchar_t>\u0020>\u0020>.{dtor}), (void*)ptr3);
				throw;
			}
			try
			{
				*(long*)(ptr2 + 32L / (long)sizeof(_Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>,void\u0020*>)) = 0L;
			}
			catch
			{
				<Module>.___CxxCallUnwindDtor(ldftn(std.basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>.{dtor}), (void*)ptr3);
				throw;
			}
		}
		catch when (delegate
		{
			// Failed to create a 'catch-when' expression
			exceptionCode = (uint)Marshal.GetExceptionCode();
			endfilter(<Module>.__CxxExceptionFilter(Marshal.GetExceptionPointers(), null, 0, null) != null);
		})
		{
			uint num2 = 0U;
			<Module>.__CxxRegisterExceptionObject(Marshal.GetExceptionPointers(), num);
			try
			{
				try
				{
					<Module>.std._Tree_comp_alloc<std::_Tmap_traits<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>,PatcherManager\u0020*,std::less<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020>,std::allocator<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>\u0020>,0>\u0020>._Freenode0(A_0, ptr);
					<Module>._CxxThrowException(null, null);
				}
				catch when (delegate
				{
					// Failed to create a 'catch-when' expression
					num2 = <Module>.__CxxDetectRethrow(Marshal.GetExceptionPointers());
					endfilter(num2 != 0U);
				})
				{
				}
				if (num2 != 0U)
				{
					throw;
				}
			}
			finally
			{
				<Module>.__CxxUnregisterExceptionObject(num, (int)num2);
			}
		}
		return ptr;
	}

	// Token: 0x06000041 RID: 65 RVA: 0x000B8988 File Offset: 0x000B7D88
	internal unsafe static _Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>\u0020>\u0020>\u0020>* _Insert_hint<struct\u0020std::pair<class\u0020std::basic_string<wchar_t,struct\u0020std::char_traits<wchar_t>,class\u0020std::allocator<wchar_t>\u0020>\u0020const\u0020,class\u0020PatcherManager\u0020*>\u0020&,struct\u0020std::_Tree_node<struct\u0020std::pair<class\u0020std::basic_string<wchar_t,struct\u0020std::char_traits<wchar_t>,class\u0020std::allocator<wchar_t>\u0020>\u0020const\u0020,class\u0020PatcherManager\u0020*>,void\u0020*>\u0020*>(_Tree<std::_Tmap_traits<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>,PatcherManager\u0020*,std::less<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020>,std::allocator<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>\u0020>,0>\u0020>* A_0, _Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>\u0020>\u0020>\u0020>* A_1, _Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>\u0020>\u0020>\u0020> _Where, pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>* _Val, _Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>,void\u0020*>* _Newnode)
	{
		long num = (long)stackalloc byte[<Module>.__CxxQueryExceptionSize()];
		_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>\u0020>\u0020>\u0020> tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>_u0020const_u0020,PatcherManager_u0020*>_u0020>_u0020>_u0020> = 0L;
		bool flag = false;
		uint exceptionCode;
		try
		{
			if (*(A_0 + 8L) == 0L)
			{
				long num2 = *A_0;
				<Module>.std._Tree<std::_Tmap_traits<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>,PatcherManager\u0020*,std::less<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020>,std::allocator<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>\u0020>,0>\u0020>._Insert_at<struct\u0020std::pair<class\u0020std::basic_string<wchar_t,struct\u0020std::char_traits<wchar_t>,class\…(A_0, A_1, true, num2, _Val, _Newnode);
				return A_1;
			}
			long num3 = *(*A_0);
			_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>\u0020>\u0020>\u0020> tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>_u0020const_u0020,PatcherManager_u0020*>_u0020>_u0020>_u0020>;
			<Module>.std._Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>\u0020>\u0020>,std::_Iterator_base0>.{ctor}(ref tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>_u0020const_u0020,PatcherManager_u0020*>_u0020>_u0020>_u0020>, num3, A_0);
			if (((_Where == tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>_u0020const_u0020,PatcherManager_u0020*>_u0020>_u0020>_u0020>) ? 1 : 0) != 0)
			{
				long num4 = _Where + 32L;
				if (((<Module>.std.basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>.compare(_Val, num4) < 0) ? 1 : 0) != 0)
				{
					<Module>.std._Tree<std::_Tmap_traits<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>,PatcherManager\u0020*,std::less<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020>,std::allocator<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>\u0020>,0>\u0020>._Insert_at<struct\u0020std::pair<class\u0020std::basic_string<wchar_t,struct\u0020std::char_traits<wchar_t>,class\…(A_0, A_1, true, _Where, _Val, _Newnode);
					return A_1;
				}
			}
			else
			{
				long num5 = *A_0;
				_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>\u0020>\u0020>\u0020> tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>_u0020const_u0020,PatcherManager_u0020*>_u0020>_u0020>_u0020>2;
				<Module>.std._Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>\u0020>\u0020>,std::_Iterator_base0>.{ctor}(ref tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>_u0020const_u0020,PatcherManager_u0020*>_u0020>_u0020>_u0020>2, num5, A_0);
				if (((_Where == tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>_u0020const_u0020,PatcherManager_u0020*>_u0020>_u0020>_u0020>2) ? 1 : 0) != 0)
				{
					if (((<Module>.std.basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>.compare(*(*A_0 + 16L) + 32L, _Val) < 0) ? 1 : 0) != 0)
					{
						long num6 = *(*A_0 + 16L);
						<Module>.std._Tree<std::_Tmap_traits<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>,PatcherManager\u0020*,std::less<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020>,std::allocator<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>\u0020>,0>\u0020>._Insert_at<struct\u0020std::pair<class\u0020std::basic_string<wchar_t,struct\u0020std::char_traits<wchar_t>,class\…(A_0, A_1, false, num6, _Val, _Newnode);
						return A_1;
					}
				}
				else
				{
					long num4 = _Where + 32L;
					if (((<Module>.std.basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>.compare(_Val, num4) < 0) ? 1 : 0) != 0)
					{
						tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>_u0020const_u0020,PatcherManager_u0020*>_u0020>_u0020>_u0020> = _Where;
						<Module>.std._Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>\u0020>\u0020>,std::_Iterator_base0>.--(ref tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>_u0020const_u0020,PatcherManager_u0020*>_u0020>_u0020>_u0020>);
						if (((<Module>.std.basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>.compare(tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>_u0020const_u0020,PatcherManager_u0020*>_u0020>_u0020>_u0020> + 32L, _Val) < 0) ? 1 : 0) != 0)
						{
							if (*(*(tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>_u0020const_u0020,PatcherManager_u0020*>_u0020>_u0020>_u0020> + 16L) + 25L) != 0)
							{
								<Module>.std._Tree<std::_Tmap_traits<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>,PatcherManager\u0020*,std::less<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020>,std::allocator<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>\u0020>,0>\u0020>._Insert_at<struct\u0020std::pair<class\u0020std::basic_string<wchar_t,struct\u0020std::char_traits<wchar_t>,class\…(A_0, A_1, false, tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>_u0020const_u0020,PatcherManager_u0020*>_u0020>_u0020>_u0020>, _Val, _Newnode);
								return A_1;
							}
							<Module>.std._Tree<std::_Tmap_traits<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>,PatcherManager\u0020*,std::less<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020>,std::allocator<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>\u0020>,0>\u0020>._Insert_at<struct\u0020std::pair<class\u0020std::basic_string<wchar_t,struct\u0020std::char_traits<wchar_t>,class\…(A_0, A_1, true, _Where, _Val, _Newnode);
							return A_1;
						}
					}
					if (((<Module>.std.basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>.compare(num4, _Val) < 0) ? 1 : 0) != 0)
					{
						tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>_u0020const_u0020,PatcherManager_u0020*>_u0020>_u0020>_u0020> = _Where;
						<Module>.std._Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>\u0020>\u0020>,std::_Iterator_base0>.++(ref tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>_u0020const_u0020,PatcherManager_u0020*>_u0020>_u0020>_u0020>);
						long num7 = *A_0;
						_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>\u0020>\u0020>\u0020> tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>_u0020const_u0020,PatcherManager_u0020*>_u0020>_u0020>_u0020>3;
						<Module>.std._Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>\u0020>\u0020>,std::_Iterator_base0>.{ctor}(ref tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>_u0020const_u0020,PatcherManager_u0020*>_u0020>_u0020>_u0020>3, num7, A_0);
						if (((tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>_u0020const_u0020,PatcherManager_u0020*>_u0020>_u0020>_u0020> == tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>_u0020const_u0020,PatcherManager_u0020*>_u0020>_u0020>_u0020>3) ? 1 : 0) == 0)
						{
							long num8 = tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>_u0020const_u0020,PatcherManager_u0020*>_u0020>_u0020>_u0020> + 32L;
							if (((<Module>.std.basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>.compare(_Val, num8) < 0) ? 1 : 0) == 0)
							{
								goto IL_1F4;
							}
						}
						if (*(*(_Where + 16L) + 25L) != 0)
						{
							<Module>.std._Tree<std::_Tmap_traits<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>,PatcherManager\u0020*,std::less<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020>,std::allocator<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>\u0020>,0>\u0020>._Insert_at<struct\u0020std::pair<class\u0020std::basic_string<wchar_t,struct\u0020std::char_traits<wchar_t>,class\…(A_0, A_1, false, _Where, _Val, _Newnode);
							return A_1;
						}
						<Module>.std._Tree<std::_Tmap_traits<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>,PatcherManager\u0020*,std::less<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020>,std::allocator<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>\u0020>,0>\u0020>._Insert_at<struct\u0020std::pair<class\u0020std::basic_string<wchar_t,struct\u0020std::char_traits<wchar_t>,class\…(A_0, A_1, true, tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>_u0020const_u0020,PatcherManager_u0020*>_u0020>_u0020>_u0020>, _Val, _Newnode);
						return A_1;
					}
				}
			}
			IL_1F4:;
		}
		catch when (delegate
		{
			// Failed to create a 'catch-when' expression
			exceptionCode = (uint)Marshal.GetExceptionCode();
			endfilter(<Module>.__CxxExceptionFilter(Marshal.GetExceptionPointers(), null, 0, null) != null);
		})
		{
			uint num9 = 0U;
			<Module>.__CxxRegisterExceptionObject(Marshal.GetExceptionPointers(), num);
			try
			{
				try
				{
					<Module>.std._Tree<std::_Tmap_traits<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>,PatcherManager\u0020*,std::less<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020>,std::allocator<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>\u0020>,0>\u0020>._Destroy_if_node(A_0, _Newnode);
					<Module>._CxxThrowException(null, null);
				}
				catch when (delegate
				{
					// Failed to create a 'catch-when' expression
					num9 = <Module>.__CxxDetectRethrow(Marshal.GetExceptionPointers());
					endfilter(num9 != 0U);
				})
				{
				}
				if (num9 != 0U)
				{
					throw;
				}
			}
			finally
			{
				<Module>.__CxxUnregisterExceptionObject(num, (int)num9);
			}
		}
		pair<std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>\u0020>\u0020>\u0020>,bool> pair<std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>_u0020const_u0020,PatcherManager_u0020*>_u0020>_u0020>_u0020>,bool>;
		pair<std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>\u0020>\u0020>\u0020>,bool>* ptr = <Module>.std._Tree<std::_Tmap_traits<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>,PatcherManager\u0020*,std::less<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020>,std::allocator<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>\u0020>,0>\u0020>._Insert_nohint<struct\u0020std::pair<class\u0020std::basic_string<wchar_t,struct\u0020std::char_traits<wchar_t>,cl(A_0, &pair<std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>_u0020const_u0020,PatcherManager_u0020*>_u0020>_u0020>_u0020>,bool>, flag, _Val, _Newnode);
		cpblk(A_1, ptr, 8);
		return A_1;
	}

	// Token: 0x06000042 RID: 66 RVA: 0x000B5D78 File Offset: 0x000B5178
	internal unsafe static void _Freenode0(_Tree_comp_alloc<std::_Tmap_traits<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>,PatcherManager\u0020*,std::less<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020>,std::allocator<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>\u0020>,0>\u0020>* A_0, _Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>,void\u0020*>* _Pnode)
	{
		<Module>.std._Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>,void\u0020*>._Freenode0<class\u0020std::allocator<struct\u0020std::_Tree_node<struct\u0020std::pair<class\u0020std::basic_string<wchar_t,struct\u0020std::char_traits<wchar_t>,class\u0020std::allocator<wchar_t>\u0020>\u0020const\u0020,class\u0020PatcherManager\u0020*>,void\u0020*>\u0020>\u0020>(A_0, _Pnode);
	}

	// Token: 0x06000043 RID: 67 RVA: 0x000B6568 File Offset: 0x000B5968
	internal unsafe static _Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>,void\u0020*>* _Buynode0(_Tree_comp_alloc<std::_Tmap_traits<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>,PatcherManager\u0020*,std::less<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020>,std::allocator<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>\u0020>,0>\u0020>* A_0)
	{
		long num = (long)stackalloc byte[<Module>.__CxxQueryExceptionSize()];
		_Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>,void\u0020*>* ptr = <Module>.std.allocator<std::_Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>,void\u0020*>\u0020>.allocate(A_0, 1L);
		uint exceptionCode;
		try
		{
			*(long*)ptr = *A_0;
			_Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>,void\u0020*>* ptr2 = ptr + 8L / (long)sizeof(_Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>,void\u0020*>);
			*(long*)ptr2 = *A_0;
			_Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>,void\u0020*>* ptr3 = ptr + 16L / (long)sizeof(_Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>,void\u0020*>);
			*(long*)ptr3 = *A_0;
		}
		catch when (delegate
		{
			// Failed to create a 'catch-when' expression
			exceptionCode = (uint)Marshal.GetExceptionCode();
			endfilter(<Module>.__CxxExceptionFilter(Marshal.GetExceptionPointers(), null, 0, null) != null);
		})
		{
			uint num2 = 0U;
			<Module>.__CxxRegisterExceptionObject(Marshal.GetExceptionPointers(), num);
			try
			{
				try
				{
					<Module>.std.allocator<std::_Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>,void\u0020*>\u0020>.deallocate(A_0, ptr, 1L);
					<Module>._CxxThrowException(null, null);
				}
				catch when (delegate
				{
					// Failed to create a 'catch-when' expression
					num2 = <Module>.__CxxDetectRethrow(Marshal.GetExceptionPointers());
					endfilter(num2 != 0U);
				})
				{
				}
				if (num2 != 0U)
				{
					throw;
				}
			}
			finally
			{
				<Module>.__CxxUnregisterExceptionObject(num, (int)num2);
			}
		}
		return ptr;
	}

	// Token: 0x06000044 RID: 68 RVA: 0x000B8324 File Offset: 0x000B7724
	internal unsafe static void _Destroy_if_node(_Tree<std::_Tmap_traits<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>,PatcherManager\u0020*,std::less<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020>,std::allocator<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>\u0020>,0>\u0020>* A_0, _Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>,void\u0020*>* _Newnode)
	{
		pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>* ptr = _Newnode + 32L / (long)sizeof(_Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>,void\u0020*>);
		try
		{
			<Module>.std.basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>._Tidy_deallocate(ptr);
		}
		catch
		{
			<Module>.___CxxCallUnwindDtor(ldftn(std._String_alloc<std::_String_base_types<wchar_t,std::allocator<wchar_t>\u0020>\u0020>.{dtor}), ptr);
			throw;
		}
		<Module>.std._Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>,void\u0020*>._Freenode0<class\u0020std::allocator<struct\u0020std::_Tree_node<struct\u0020std::pair<class\u0020std::basic_string<wchar_t,struct\u0020std::char_traits<wchar_t>,class\u0020std::allocator<wchar_t>\u0020>\u0020const\u0020,class\u0020PatcherManager\u0020*>,void\u0020*>\u0020>\u0020>(A_0, _Newnode);
	}

	// Token: 0x06000045 RID: 69 RVA: 0x000B5A44 File Offset: 0x000B4E44
	internal unsafe static _Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>\u0020>\u0020>,std::_Iterator_base0>* --(_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>\u0020>\u0020>,std::_Iterator_base0>* A_0)
	{
		long num = *A_0;
		if (*(num + 25L) != 0)
		{
			*A_0 = *(num + 16L);
		}
		else
		{
			long num2 = *num;
			if (*(num2 + 25L) != 0)
			{
				_Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>,void\u0020*>* ptr = *(num + 8L);
				if (*(sbyte*)(ptr + 25L / (long)sizeof(_Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>,void\u0020*>)) == 0)
				{
					while (*A_0 == *(long*)ptr)
					{
						*A_0 = ptr;
						ptr = *(long*)(ptr + 8L / (long)sizeof(_Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>,void\u0020*>));
						if (*(sbyte*)(ptr + 25L / (long)sizeof(_Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>,void\u0020*>)) != 0)
						{
							break;
						}
					}
				}
				if (*(*A_0 + 25L) == 0)
				{
					*A_0 = ptr;
				}
			}
			else
			{
				_Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>,void\u0020*>* ptr2 = num2;
				long num3 = *(long*)(ptr2 + 16L / (long)sizeof(_Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>,void\u0020*>));
				if (*(num3 + 25L) == 0)
				{
					do
					{
						ptr2 = num3;
						num3 = *(long*)(ptr2 + 16L / (long)sizeof(_Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>,void\u0020*>));
					}
					while (*(num3 + 25L) == 0);
				}
				*A_0 = ptr2;
			}
		}
		return A_0;
	}

	// Token: 0x06000046 RID: 70 RVA: 0x000B8370 File Offset: 0x000B7770
	internal unsafe static _Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>\u0020>\u0020>\u0020>* _Insert_at<struct\u0020std::pair<class\u0020std::basic_string<wchar_t,struct\u0020std::char_traits<wchar_t>,class\u0020std::allocator<wchar_t>\u0020>\u0020const\u0020,class\u0020PatcherManager\u0020*>\u0020&,struct\u0020std::_Tree_node<struct\u0020std::pair<class\u0020std::basic_string<wchar_t,struct\u0020std::char_traits<wchar_t>,class\u0020std::allocator<wchar_t>\u0020>\u0020const\u0020,class\u0020PatcherManager\u0020*>,void\u0020*>\u0020*>(_Tree<std::_Tmap_traits<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>,PatcherManager\u0020*,std::less<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020>,std::allocator<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>\u0020>,0>\u0020>* A_0, _Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>\u0020>\u0020>\u0020>* A_1, [MarshalAs(UnmanagedType.U1)] bool _Addleft, _Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>,void\u0020*>* _Wherenode, pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>* _Val, _Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>,void\u0020*>* _Node)
	{
		ulong num = (ulong)(*(A_0 + 8L));
		if (256204778801521549UL <= num)
		{
			<Module>.std._Tree<std::_Tmap_traits<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>,PatcherManager\u0020*,std::less<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020>,std::allocator<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>\u0020>,0>\u0020>._Destroy_if_node(A_0, _Node);
			<Module>.std._Xlength_error((sbyte*)(&<Module>.??_C@_0BE@JONHPENG@map?1set?$DMT?$DO?5too?5long@));
		}
		*(A_0 + 8L) = (long)(num + 1UL);
		*(long*)(_Node + 8L / (long)sizeof(_Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>,void\u0020*>)) = _Wherenode;
		ulong num2 = (ulong)(*A_0);
		if (_Wherenode == num2)
		{
			*(num2 + 8UL) = _Node;
			*(*A_0) = _Node;
			*(*A_0 + 16L) = _Node;
		}
		else if (_Addleft)
		{
			*(long*)_Wherenode = _Node;
			num2 = (ulong)(*A_0);
			if (_Wherenode == *num2)
			{
				*num2 = _Node;
			}
		}
		else
		{
			*(long*)(_Wherenode + 16L / (long)sizeof(_Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>,void\u0020*>)) = _Node;
			long num3 = *A_0 + 16L;
			if (_Wherenode == *num3)
			{
				*num3 = _Node;
			}
		}
		_Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>,void\u0020*>* ptr = _Node;
		if (*(*(long*)(_Node + 8L / (long)sizeof(_Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>,void\u0020*>)) + 24L) == 0)
		{
			do
			{
				_Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>,void\u0020*>* ptr2 = ptr + 8L / (long)sizeof(_Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>,void\u0020*>);
				long num4 = *(long*)ptr2;
				long num5 = *(num4 + 8L);
				ulong num6 = (ulong)(*num5);
				if (num4 == (long)num6)
				{
					_Wherenode = *(num5 + 16L);
					if (*(sbyte*)(_Wherenode + 24L / (long)sizeof(_Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>,void\u0020*>)) == 0)
					{
						*(num4 + 24L) = 1;
						*(byte*)(_Wherenode + 24L / (long)sizeof(_Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>,void\u0020*>)) = 1;
						*(*(*(long*)ptr2 + 8L) + 24L) = 0;
						ptr = *(*(long*)ptr2 + 8L);
					}
					else
					{
						if (ptr == *(num4 + 16L))
						{
							ptr = num4;
							<Module>.std._Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>\u0020>\u0020>._Lrotate(A_0, ptr);
						}
						*(*(long*)(ptr + 8L / (long)sizeof(_Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>,void\u0020*>)) + 24L) = 1;
						*(*(*(long*)(ptr + 8L / (long)sizeof(_Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>,void\u0020*>)) + 8L) + 24L) = 0;
						<Module>.std._Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>\u0020>\u0020>._Rrotate(A_0, *(*(long*)(ptr + 8L / (long)sizeof(_Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>,void\u0020*>)) + 8L));
					}
				}
				else
				{
					_Wherenode = num6;
					if (*(sbyte*)(_Wherenode + 24L / (long)sizeof(_Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>,void\u0020*>)) == 0)
					{
						*(num4 + 24L) = 1;
						*(byte*)(_Wherenode + 24L / (long)sizeof(_Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>,void\u0020*>)) = 1;
						*(*(*(long*)ptr2 + 8L) + 24L) = 0;
						ptr = *(*(long*)ptr2 + 8L);
					}
					else
					{
						if (ptr == *num4)
						{
							ptr = num4;
							<Module>.std._Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>\u0020>\u0020>._Rrotate(A_0, ptr);
						}
						*(*(long*)(ptr + 8L / (long)sizeof(_Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>,void\u0020*>)) + 24L) = 1;
						*(*(*(long*)(ptr + 8L / (long)sizeof(_Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>,void\u0020*>)) + 8L) + 24L) = 0;
						<Module>.std._Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>\u0020>\u0020>._Lrotate(A_0, *(*(long*)(ptr + 8L / (long)sizeof(_Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>,void\u0020*>)) + 8L));
					}
				}
			}
			while (*(*(long*)(ptr + 8L / (long)sizeof(_Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>,void\u0020*>)) + 24L) == 0);
		}
		*(*(*A_0 + 8L) + 24L) = 1;
		*(long*)A_1 = _Node;
		return A_1;
	}

	// Token: 0x06000047 RID: 71 RVA: 0x000B8528 File Offset: 0x000B7928
	internal unsafe static pair<std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>\u0020>\u0020>\u0020>,bool>* _Insert_nohint<struct\u0020std::pair<class\u0020std::basic_string<wchar_t,struct\u0020std::char_traits<wchar_t>,class\u0020std::allocator<wchar_t>\u0020>\u0020const\u0020,class\u0020PatcherManager\u0020*>\u0020&,struct\u0020std::_Tree_node<struct\u0020std::pair<class\u0020std::basic_string<wchar_t,struct\u0020std::char_traits<wchar_t>,class\u0020std::allocator<wchar_t>\u0020>\u0020const\u0020,class\u0020PatcherManager\u0020*>,void\u0020*>\u0020*>(_Tree<std::_Tmap_traits<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>,PatcherManager\u0020*,std::less<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020>,std::allocator<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>\u0020>,0>\u0020>* A_0, pair<std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>\u0020>\u0020>\u0020>,bool>* A_1, [MarshalAs(UnmanagedType.U1)] bool _Leftish, pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>* _Val, _Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>,void\u0020*>* _Newnode)
	{
		long num = (long)stackalloc byte[<Module>.__CxxQueryExceptionSize()];
		uint exceptionCode;
		try
		{
			_Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>,void\u0020*>* ptr = *A_0;
			_Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>,void\u0020*>* ptr2 = *(long*)(ptr + 8L / (long)sizeof(_Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>,void\u0020*>));
			bool flag = true;
			while (*(sbyte*)(ptr2 + 25L / (long)sizeof(_Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>,void\u0020*>)) == 0)
			{
				ptr = ptr2;
				if (_Leftish)
				{
					flag = ((((<Module>.std.basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>.compare(ptr2 + 32L / (long)sizeof(_Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>,void\u0020*>), _Val) < 0) ? 1 : 0) == 0) ? 1 : 0) != 0;
				}
				else
				{
					_Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>,void\u0020*>* ptr3 = ptr2 + 32L / (long)sizeof(_Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>,void\u0020*>);
					flag = ((<Module>.std.basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>.compare(_Val, ptr3) < 0) ? 1 : 0) != 0;
				}
				ptr2 = ((!flag) ? (*(long*)(ptr2 + 16L / (long)sizeof(_Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>,void\u0020*>))) : (*(long*)ptr2));
			}
			_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>\u0020>\u0020>\u0020> tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>_u0020const_u0020,PatcherManager_u0020*>_u0020>_u0020>_u0020> = 0L;
			<Module>.std._Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>\u0020>\u0020>,std::_Iterator_base0>.{ctor}(ref tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>_u0020const_u0020,PatcherManager_u0020*>_u0020>_u0020>_u0020>, ptr, A_0);
			if (flag)
			{
				long num2 = *(*A_0);
				_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>\u0020>\u0020>\u0020> tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>_u0020const_u0020,PatcherManager_u0020*>_u0020>_u0020>_u0020>2;
				<Module>.std._Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>\u0020>\u0020>,std::_Iterator_base0>.{ctor}(ref tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>_u0020const_u0020,PatcherManager_u0020*>_u0020>_u0020>_u0020>2, num2, A_0);
				if (((tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>_u0020const_u0020,PatcherManager_u0020*>_u0020>_u0020>_u0020> == tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>_u0020const_u0020,PatcherManager_u0020*>_u0020>_u0020>_u0020>2) ? 1 : 0) != 0)
				{
					_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>\u0020>\u0020>\u0020> tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>_u0020const_u0020,PatcherManager_u0020*>_u0020>_u0020>_u0020>3;
					_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>\u0020>\u0020>\u0020>* ptr4 = <Module>.std._Tree<std::_Tmap_traits<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>,PatcherManager\u0020*,std::less<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020>,std::allocator<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>\u0020>,0>\u0020>._Insert_at<struct\u0020std::pair<class\u0020std::basic_string<wchar_t,struct\u0020std::char_traits<wchar_t>,class\…(A_0, &tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>_u0020const_u0020,PatcherManager_u0020*>_u0020>_u0020>_u0020>3, true, ptr, _Val, _Newnode);
					cpblk(A_1, ptr4, 8);
					*(byte*)(A_1 + 8L / (long)sizeof(pair<std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>\u0020>\u0020>\u0020>,bool>)) = 1;
					return A_1;
				}
				<Module>.std._Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>\u0020>\u0020>,std::_Iterator_base0>.--(ref tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>_u0020const_u0020,PatcherManager_u0020*>_u0020>_u0020>_u0020>);
			}
			if (((<Module>.std.basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>.compare(tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>_u0020const_u0020,PatcherManager_u0020*>_u0020>_u0020>_u0020> + 32L, _Val) < 0) ? 1 : 0) != 0)
			{
				_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>\u0020>\u0020>\u0020> tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>_u0020const_u0020,PatcherManager_u0020*>_u0020>_u0020>_u0020>4;
				_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>\u0020>\u0020>\u0020>* ptr5 = <Module>.std._Tree<std::_Tmap_traits<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>,PatcherManager\u0020*,std::less<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020>,std::allocator<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>\u0020>,0>\u0020>._Insert_at<struct\u0020std::pair<class\u0020std::basic_string<wchar_t,struct\u0020std::char_traits<wchar_t>,class\…(A_0, &tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>_u0020const_u0020,PatcherManager_u0020*>_u0020>_u0020>_u0020>4, flag, ptr, _Val, _Newnode);
				cpblk(A_1, ptr5, 8);
				*(byte*)(A_1 + 8L / (long)sizeof(pair<std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>\u0020>\u0020>\u0020>,bool>)) = 1;
				return A_1;
			}
			<Module>.std._Tree<std::_Tmap_traits<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>,PatcherManager\u0020*,std::less<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020>,std::allocator<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>\u0020>,0>\u0020>._Destroy_if_node(A_0, _Newnode);
			cpblk(A_1, ref tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>_u0020const_u0020,PatcherManager_u0020*>_u0020>_u0020>_u0020>, 8);
			*(byte*)(A_1 + 8L / (long)sizeof(pair<std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>\u0020>\u0020>\u0020>,bool>)) = 0;
			return A_1;
		}
		catch when (delegate
		{
			// Failed to create a 'catch-when' expression
			exceptionCode = (uint)Marshal.GetExceptionCode();
			endfilter(<Module>.__CxxExceptionFilter(Marshal.GetExceptionPointers(), null, 0, null) != null);
		})
		{
			uint num3 = 0U;
			<Module>.__CxxRegisterExceptionObject(Marshal.GetExceptionPointers(), num);
			try
			{
				try
				{
					<Module>.std._Tree<std::_Tmap_traits<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>,PatcherManager\u0020*,std::less<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020>,std::allocator<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>\u0020>,0>\u0020>._Destroy_if_node(A_0, _Newnode);
					<Module>._CxxThrowException(null, null);
				}
				catch when (delegate
				{
					// Failed to create a 'catch-when' expression
					num3 = <Module>.__CxxDetectRethrow(Marshal.GetExceptionPointers());
					endfilter(num3 != 0U);
				})
				{
				}
				if (num3 != 0U)
				{
					throw;
				}
			}
			finally
			{
				<Module>.__CxxUnregisterExceptionObject(num, (int)num3);
			}
		}
		return 0L;
	}

	// Token: 0x06000048 RID: 72 RVA: 0x000B9544 File Offset: 0x000B8944
	internal unsafe static void* ??_E?$basic_ostringstream@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@$$F$4PPPPPPPM@A@EAAPEAXI@Z(basic_ostringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>* A_0, uint A_0)
	{
		basic_ostringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>* ptr = A_0;
		A_0 = ptr - (long)(*(ptr + -4));
		jmp(std.basic_ostringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>.__vecDelDtor());
	}

	// Token: 0x06000049 RID: 73 RVA: 0x000B6368 File Offset: 0x000B5768
	internal unsafe static basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>* _Reallocate_grow_by<class\u0020<lambda_3ca51f66a9d03df3cf21518bbff746cd>,wchar_t\u0020const\u0020*,unsigned\u0020__int64>(basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>* A_0, ulong _Size_increase, <lambda_3ca51f66a9d03df3cf21518bbff746cd> _Fn, char* <_Args_0>, ulong <_Args_1>)
	{
		ulong num = *(A_0 + 16L);
		if (<Module>.std.basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>.max_size(A_0) - num < _Size_increase)
		{
			<Module>.std.basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>._Xlen();
		}
		ulong num2 = num + _Size_increase;
		ulong num3 = *(A_0 + 24L);
		ulong num4 = <Module>.std.basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>._Calculate_growth(A_0, num2);
		char* ptr = <Module>.std.allocator<wchar_t>.allocate(A_0, num4 + 1L);
		*(A_0 + 16L) = num2;
		*(A_0 + 24L) = num4;
		if (8L <= num3)
		{
			char* ptr2 = *A_0;
			ulong num5 = num * 2L;
			cpblk(ptr, ptr2, num5);
			cpblk(num5 + ptr, <_Args_0>, <_Args_1> * 2UL);
			*((num + <_Args_1>) * 2L + ptr) = 0;
			ulong num6 = (num3 + 1L) * 2L;
			void* ptr3 = ptr2;
			if (num6 >= 4096UL)
			{
				<Module>.std._Adjust_manually_vector_aligned(ref ptr3, ref num6);
			}
			<Module>.delete(ptr3, num6);
			*A_0 = ptr;
		}
		else
		{
			ulong num5 = num * 2L;
			cpblk(ptr, A_0, num5);
			cpblk(num5 + ptr, <_Args_0>, <_Args_1> * 2UL);
			*((num + <_Args_1>) * 2L + ptr) = 0;
			*A_0 = ptr;
		}
		return A_0;
	}

	// Token: 0x0600004A RID: 74 RVA: 0x000B6784 File Offset: 0x000B5B84
	internal unsafe static basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>* append(basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>* A_0, char* _Ptr, ulong _Count)
	{
		ulong num = *(A_0 + 16L);
		ulong num2 = (ulong)(*(A_0 + 24L));
		if (_Count <= num2 - num)
		{
			ulong num3 = num + _Count;
			*(A_0 + 16L) = num3;
			char* ptr = A_0;
			if (((8UL <= num2) ? 1 : 0) != 0)
			{
				ptr = *A_0;
			}
			<Module>.memmove((void*)(num * 2L / 2 + ptr), _Ptr, _Count * 2L);
			(num3 * 2L / 2)[ptr] = '\0';
			return A_0;
		}
		<lambda_3ca51f66a9d03df3cf21518bbff746cd> <lambda_3ca51f66a9d03df3cf21518bbff746cd>;
		initblk(ref <lambda_3ca51f66a9d03df3cf21518bbff746cd>, 0, 1L);
		return <Module>.std.basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>._Reallocate_grow_by<class\u0020<lambda_3ca51f66a9d03df3cf21518bbff746cd>,wchar_t\u0020const\u0020*,unsigned\u0020__int64>(A_0, _Count, <lambda_3ca51f66a9d03df3cf21518bbff746cd>, _Ptr, _Count);
	}

	// Token: 0x0600004B RID: 75 RVA: 0x000B67F8 File Offset: 0x000B5BF8
	internal unsafe static basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>* append(basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>* A_0, basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>* _Right)
	{
		ulong num = (ulong)(*(_Right + 16L));
		char* ptr = _Right;
		if (((8L <= *(_Right + 24L)) ? 1 : 0) != 0)
		{
			ptr = *_Right;
		}
		return <Module>.std.basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>.append(A_0, ptr, num);
	}

	// Token: 0x0600004C RID: 76 RVA: 0x000B6230 File Offset: 0x000B5630
	internal unsafe static basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>* _Reallocate_grow_by<class\u0020<lambda_2b6d0663084f1b41c20caedb04b12c52>\u0020>(basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>* A_0, ulong _Size_increase, <lambda_2b6d0663084f1b41c20caedb04b12c52> _Fn)
	{
		ulong num = *(A_0 + 16L);
		if (<Module>.std.basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>.max_size(A_0) - num < _Size_increase)
		{
			<Module>.std.basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>._Xlen();
		}
		ulong num2 = num + _Size_increase;
		ulong num3 = *(A_0 + 24L);
		ulong num4 = <Module>.std.basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>._Calculate_growth(A_0, num2);
		char* ptr = <Module>.std.allocator<wchar_t>.allocate(A_0, num4 + 1L);
		*(A_0 + 16L) = num2;
		*(A_0 + 24L) = num4;
		if (8L <= num3)
		{
			char* ptr2 = *A_0;
			cpblk(ptr, ptr2, (num + 1L) * 2L);
			ulong num5 = (num3 + 1L) * 2L;
			void* ptr3 = ptr2;
			if (num5 >= 4096UL)
			{
				<Module>.std._Adjust_manually_vector_aligned(ref ptr3, ref num5);
			}
			<Module>.delete(ptr3, num5);
			*A_0 = ptr;
		}
		else
		{
			cpblk(ptr, A_0, (num + 1L) * 2L);
			*A_0 = ptr;
		}
		return A_0;
	}

	// Token: 0x0600004D RID: 77 RVA: 0x000B5E08 File Offset: 0x000B5208
	internal unsafe static void _Become_small(basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>* A_0)
	{
		char* ptr = *A_0;
		cpblk(A_0, ptr, (*(A_0 + 16L) + 1L) * 2L);
		ulong num = (ulong)((*(A_0 + 24L) + 1L) * 2L);
		void* ptr2 = ptr;
		if (num >= 4096UL)
		{
			<Module>.std._Adjust_manually_vector_aligned(ref ptr2, ref num);
		}
		<Module>.delete(ptr2, num);
		*(A_0 + 24L) = 7L;
	}

	// Token: 0x0600004E RID: 78 RVA: 0x000B6658 File Offset: 0x000B5A58
	internal unsafe static void reserve(basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>* A_0, ulong _Newcap)
	{
		ulong num = (ulong)(*(A_0 + 16L));
		if (num <= _Newcap)
		{
			ulong num2 = (ulong)(*(A_0 + 24L));
			if (num2 != _Newcap)
			{
				if (num2 < _Newcap)
				{
					ulong num3 = num;
					<lambda_2b6d0663084f1b41c20caedb04b12c52> <lambda_2b6d0663084f1b41c20caedb04b12c52>;
					initblk(ref <lambda_2b6d0663084f1b41c20caedb04b12c52>, 0, 1L);
					<Module>.std.basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>._Reallocate_grow_by<class\u0020<lambda_2b6d0663084f1b41c20caedb04b12c52>\u0020>(A_0, _Newcap - num3, <lambda_2b6d0663084f1b41c20caedb04b12c52>);
					*(A_0 + 16L) = num3;
				}
				else if (8L > _Newcap && ((8UL <= num2) ? 1 : 0) != 0)
				{
					<Module>.std.basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>._Become_small(A_0);
				}
			}
		}
	}

	// Token: 0x0600004F RID: 79 RVA: 0x000B6C10 File Offset: 0x000B6010
	internal unsafe static basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>* {ctor}(basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>* A_0, basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>* _Right)
	{
		try
		{
			*(A_0 + 16L) = 0L;
			*(A_0 + 24L) = 0L;
		}
		catch
		{
			<Module>.___CxxCallUnwindDtor(ldftn(std._String_val<std::_Simple_types<wchar_t>\u0020>._Bxty.{dtor}), A_0);
			throw;
		}
		try
		{
			cpblk(A_0, _Right, 32);
			*(_Right + 16L) = 0L;
			*(_Right + 24L) = 7L;
			*_Right = 0;
		}
		catch
		{
			<Module>.___CxxCallUnwindDtor(ldftn(std._String_alloc<std::_String_base_types<wchar_t,std::allocator<wchar_t>\u0020>\u0020>.{dtor}), A_0);
			throw;
		}
		return A_0;
	}

	// Token: 0x06000050 RID: 80 RVA: 0x000B6D20 File Offset: 0x000B6120
	internal unsafe static ctype<wchar_t>* use_facet<class\u0020std::ctype<wchar_t>\u0020>(locale* _Loc)
	{
		_Lockit lockit;
		<Module>.std._Lockit.{ctor}(ref lockit, 0);
		locale.facet* ptr2;
		try
		{
			locale.facet* ptr = <Module>.?_Psave@?$_Facetptr@V?$ctype@_W@std@@@std@@2PEBVfacet@locale@2@EB;
			ulong num = <Module>.std.locale.id.._K(<Module>.__imp_?id@?$ctype@_W@std@@2V0locale@2@A);
			ptr2 = <Module>.std.locale._Getfacet(_Loc, num);
			if (ptr2 == null)
			{
				if (ptr != null)
				{
					ptr2 = ptr;
				}
				else
				{
					if (<Module>.std.ctype<wchar_t>._Getcat(&ptr, _Loc) == -1L)
					{
						bad_cast bad_cast;
						<Module>.std.bad_cast.{ctor}(ref bad_cast);
						<Module>._CxxThrowException((void*)(&bad_cast), (_s__ThrowInfo*)(&<Module>._TI2?AVbad_cast@std@@));
					}
					locale.facet* ptr3 = (locale.facet*)ptr;
					unique_ptr<std::_Facet_base,std::default_delete<std::_Facet_base>\u0020> unique_ptr<std::_Facet_base,std::default_delete<std::_Facet_base>_u0020> = ptr;
					try
					{
						<Module>.std._Facet_Register_m((_Facet_base*)ptr3);
						locale.facet* ptr4 = ptr3;
						calli(System.Void modopt(System.Runtime.CompilerServices.CallConvCdecl)(System.IntPtr), ptr4, *(*(long*)ptr4 + 8L));
						<Module>.?_Psave@?$_Facetptr@V?$ctype@_W@std@@@std@@2PEBVfacet@locale@2@EB = ptr;
						ptr2 = ptr;
						unique_ptr<std::_Facet_base,std::default_delete<std::_Facet_base>_u0020> = 0L;
					}
					catch
					{
						<Module>.___CxxCallUnwindDtor(ldftn(std.unique_ptr<std::_Facet_base,std::default_delete<std::_Facet_base>\u0020>.{dtor}), (void*)(&unique_ptr<std::_Facet_base,std::default_delete<std::_Facet_base>_u0020>));
						throw;
					}
					<Module>.std.unique_ptr<std::_Facet_base,std::default_delete<std::_Facet_base>\u0020>.{dtor}(ref unique_ptr<std::_Facet_base,std::default_delete<std::_Facet_base>_u0020>);
				}
			}
		}
		catch
		{
			<Module>.___CxxCallUnwindDtor(ldftn(std._Lockit.{dtor}), (void*)(&lockit));
			throw;
		}
		<Module>.std._Lockit.{dtor}(ref lockit);
		return ptr2;
	}

	// Token: 0x06000051 RID: 81 RVA: 0x000B5444 File Offset: 0x000B4844
	internal unsafe static locale.facet* _Getfacet(locale* A_0, ulong _Id)
	{
		long num = *(A_0 + 8L);
		locale.facet* ptr;
		if (_Id < (ulong)(*(num + 24L)))
		{
			ptr = *(_Id * 8UL + (ulong)(*(num + 16L)));
			if (ptr != null)
			{
				return ptr;
			}
		}
		else
		{
			ptr = null;
		}
		if (*(num + 36L) != 0)
		{
			locale._Locimp* ptr2 = <Module>.std.locale._Getgloballocale();
			return (_Id >= (ulong)(*(long*)(ptr2 + 24L / (long)sizeof(locale._Locimp)))) ? 0L : (*(_Id * 8UL + (ulong)(*(long*)(ptr2 + 16L / (long)sizeof(locale._Locimp)))));
		}
		return ptr;
	}

	// Token: 0x06000052 RID: 82 RVA: 0x000B53B4 File Offset: 0x000B47B4
	internal unsafe static bad_cast* {ctor}(bad_cast* A_0)
	{
		*A_0 = ref <Module>.??_7exception@std@@6B@;
		bad_cast* ptr = A_0 + 8L;
		initblk(ptr, 0, 16L);
		*ptr = ref <Module>.??_C@_08EPJLHIJG@bad?5cast@;
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

	// Token: 0x06000053 RID: 83 RVA: 0x000B6958 File Offset: 0x000B5D58
	internal unsafe static void {dtor}(unique_ptr<std::_Facet_base,std::default_delete<std::_Facet_base>\u0020>* A_0)
	{
		long num = *A_0;
		if (num != 0L)
		{
			_Facet_base* ptr = num;
			long num2 = *(*(long*)ptr);
			void* ptr2 = calli(System.Void* modopt(System.Runtime.CompilerServices.CallConvCdecl)(System.IntPtr,System.UInt32), ptr, 1U, num2);
		}
	}

	// Token: 0x06000054 RID: 84 RVA: 0x000B5410 File Offset: 0x000B4810
	internal unsafe static void {dtor}(locale* A_0)
	{
		ulong num = (ulong)(*(A_0 + 8L));
		if (num != 0UL)
		{
			ulong num2 = num;
			_Facet_base* ptr = calli(std._Facet_base* modopt(System.Runtime.CompilerServices.CallConvCdecl)(System.IntPtr), (IntPtr)num2, *(*num2 + 16L));
			if (ptr != null)
			{
				long num3 = *(*(long*)ptr);
				void* ptr2 = calli(System.Void* modopt(System.Runtime.CompilerServices.CallConvCdecl)(System.IntPtr,System.UInt32), ptr, 1U, num3);
			}
		}
	}

	// Token: 0x06000055 RID: 85 RVA: 0x000B5B1C File Offset: 0x000B4F1C
	internal unsafe static void _Eos(basic_string<char,std::char_traits<char>,std::allocator<char>\u0020>* A_0, ulong _Newsize)
	{
		sbyte* ptr = A_0;
		if (((16L <= *(A_0 + 24L)) ? 1 : 0) != 0)
		{
			ptr = *A_0;
		}
		*(A_0 + 16L) = _Newsize;
		*(byte*)(ptr + _Newsize / sizeof(sbyte)) = 0;
	}

	// Token: 0x06000056 RID: 86 RVA: 0x000B66FC File Offset: 0x000B5AFC
	internal unsafe static void {dtor}(_String_alloc<std::_String_base_types<char,std::allocator<char>\u0020>\u0020>* A_0)
	{
	}

	// Token: 0x06000057 RID: 87 RVA: 0x000B5B4C File Offset: 0x000B4F4C
	internal unsafe static void _Assign_rv_contents(basic_string<char,std::char_traits<char>,std::allocator<char>\u0020>* A_0, basic_string<char,std::char_traits<char>,std::allocator<char>\u0020>* _Right, integral_constant<bool,1> __unnamed001)
	{
		cpblk(A_0, _Right, 32);
		*(_Right + 16L) = 0L;
		*(_Right + 24L) = 15L;
		*_Right = 0;
	}

	// Token: 0x06000058 RID: 88 RVA: 0x000B682C File Offset: 0x000B5C2C
	internal unsafe static basic_string<char,std::char_traits<char>,std::allocator<char>\u0020>* =(basic_string<char,std::char_traits<char>,std::allocator<char>\u0020>* A_0, basic_string<char,std::char_traits<char>,std::allocator<char>\u0020>* _Right)
	{
		if (A_0 != _Right)
		{
			<Module>.std.basic_string<char,std::char_traits<char>,std::allocator<char>\u0020>._Tidy_deallocate(A_0);
			integral_constant<bool,1> integral_constant<bool,1>;
			initblk(ref integral_constant<bool,1>, 0, 1L);
			<Module>.std.basic_string<char,std::char_traits<char>,std::allocator<char>\u0020>._Assign_rv_contents(A_0, _Right, integral_constant<bool,1>);
		}
		return A_0;
	}

	// Token: 0x06000059 RID: 89 RVA: 0x000B54A0 File Offset: 0x000B48A0
	internal unsafe static ios_base* boolalpha(ios_base* _Iosbase)
	{
		<Module>.std.ios_base.setf(_Iosbase, 16384);
		return _Iosbase;
	}

	// Token: 0x0600005A RID: 90 RVA: 0x000B5650 File Offset: 0x000B4A50
	internal unsafe static void _Xlen()
	{
		<Module>.std._Xlength_error((sbyte*)(&<Module>.??_C@_0BA@JFNIOLAK@string?5too?5long@));
	}

	// Token: 0x0600005B RID: 91 RVA: 0x000B5C34 File Offset: 0x000B5034
	internal unsafe static ulong _Calculate_growth(basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>* A_0, ulong _Requested)
	{
		ulong num = <Module>.std.basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>.max_size(A_0);
		ulong num2 = _Requested | 7L;
		if (num2 > num)
		{
			return num;
		}
		ulong num3 = *(A_0 + 24L);
		ulong num4 = num3 >> 1;
		if (num3 > num - num4)
		{
			return num;
		}
		ulong num5 = num4 + num3;
		ulong num6 = num5;
		return *(ref num2 < num5 ? ref num6 : ref num2);
	}

	// Token: 0x0600005C RID: 92 RVA: 0x000B62DC File Offset: 0x000B56DC
	internal unsafe static basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>* _Reallocate_for<class\u0020<lambda_d4301fda4684ac16da26da6c6383f5f5>,wchar_t\u0020const\u0020*>(basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>* A_0, ulong _New_size, <lambda_d4301fda4684ac16da26da6c6383f5f5> _Fn, char* <_Args_0>)
	{
		if (_New_size > <Module>.std.basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>.max_size(A_0))
		{
			<Module>.std.basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>._Xlen();
		}
		ulong num = *(A_0 + 24L);
		ulong num2 = <Module>.std.basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>._Calculate_growth(A_0, _New_size);
		char* ptr = <Module>.std.allocator<wchar_t>.allocate(A_0, num2 + 1L);
		*(A_0 + 16L) = _New_size;
		*(A_0 + 24L) = num2;
		ulong num3 = _New_size * 2L;
		cpblk(ptr, <_Args_0>, num3);
		*(num3 + ptr) = 0;
		if (8L <= num)
		{
			ulong num4 = (num + 1L) * 2L;
			void* ptr2 = *A_0;
			if (num4 >= 4096UL)
			{
				<Module>.std._Adjust_manually_vector_aligned(ref ptr2, ref num4);
			}
			<Module>.delete(ptr2, num4);
			*A_0 = ptr;
		}
		else
		{
			*A_0 = ptr;
		}
		return A_0;
	}

	// Token: 0x0600005D RID: 93 RVA: 0x000B6724 File Offset: 0x000B5B24
	internal unsafe static basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>* assign(basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>* A_0, char* _Ptr, ulong _Count)
	{
		ulong num = (ulong)(*(A_0 + 24L));
		if (_Count <= num)
		{
			char* ptr = A_0;
			if (((8UL <= num) ? 1 : 0) != 0)
			{
				ptr = *A_0;
			}
			*(A_0 + 16L) = _Count;
			ulong num2 = _Count * 2L;
			<Module>.memmove((void*)ptr, _Ptr, num2);
			(num2 / 2UL)[ptr] = '\0';
			return A_0;
		}
		<lambda_d4301fda4684ac16da26da6c6383f5f5> <lambda_d4301fda4684ac16da26da6c6383f5f5>;
		initblk(ref <lambda_d4301fda4684ac16da26da6c6383f5f5>, 0, 1L);
		return <Module>.std.basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>._Reallocate_for<class\u0020<lambda_d4301fda4684ac16da26da6c6383f5f5>,wchar_t\u0020const\u0020*>(A_0, _Count, <lambda_d4301fda4684ac16da26da6c6383f5f5>, _Ptr);
	}

	// Token: 0x0600005E RID: 94 RVA: 0x000B74E0 File Offset: 0x000B68E0
	internal unsafe static basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>* {ctor}(basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>* A_0, char* _Ptr)
	{
		basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>* ptr;
		basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>* ptr2;
		try
		{
			ptr = A_0 + 16L;
			*ptr = 0L;
			ptr2 = A_0 + 24L;
			*ptr2 = 0L;
		}
		catch
		{
			<Module>.___CxxCallUnwindDtor(ldftn(std._String_val<std::_Simple_types<wchar_t>\u0020>._Bxty.{dtor}), A_0);
			throw;
		}
		try
		{
			*ptr = 0L;
			*ptr2 = 7L;
			*A_0 = 0;
			char* ptr3 = _Ptr;
			if (*_Ptr != 0)
			{
				do
				{
					ptr3 += 2L;
				}
				while (*ptr3 != 0);
			}
			long num = ptr3 - _Ptr >> 1;
			<Module>.std.basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>.assign(A_0, _Ptr, num);
		}
		catch
		{
			<Module>.___CxxCallUnwindDtor(ldftn(std._String_alloc<std::_String_base_types<wchar_t,std::allocator<wchar_t>\u0020>\u0020>.{dtor}), A_0);
			throw;
		}
		return A_0;
	}

	// Token: 0x0600005F RID: 95 RVA: 0x000B54BC File Offset: 0x000B48BC
	internal unsafe static LP_PROGRESS_INFO* {ctor}(LP_PROGRESS_INFO* A_0)
	{
		*A_0 = 0;
		cpblk(A_0 + 4L, ref <Module>.??_C@_11LOCGONAA@@, 2);
		initblk(A_0 + 6L, 0, 518L);
		*(A_0 + 528L) = 0L;
		*(A_0 + 536L) = 0L;
		*(A_0 + 544L) = 0;
		*(A_0 + 548L) = 0;
		*(A_0 + 552L) = 0;
		*(A_0 + 560L) = 0L;
		*(A_0 + 568L) = 0L;
		*(A_0 + 576L) = 0L;
		*(A_0 + 584L) = 0L;
		*(A_0 + 592L) = 0;
		*(A_0 + 600L) = 0L;
		return A_0;
	}

	// Token: 0x06000060 RID: 96 RVA: 0x000B5AF0 File Offset: 0x000B4EF0
	internal unsafe static void _Assign_rv_contents(basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>* A_0, basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>* _Right, integral_constant<bool,1> __unnamed001)
	{
		cpblk(A_0, _Right, 32);
		*(_Right + 16L) = 0L;
		*(_Right + 24L) = 7L;
		*_Right = 0;
	}

	// Token: 0x06000061 RID: 97 RVA: 0x000B66BC File Offset: 0x000B5ABC
	internal unsafe static basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>* =(basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>* A_0, basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>* _Right)
	{
		if (A_0 != _Right)
		{
			<Module>.std.basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>._Tidy_deallocate(A_0);
			integral_constant<bool,1> integral_constant<bool,1>;
			initblk(ref integral_constant<bool,1>, 0, 1L);
			<Module>.std.basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>._Assign_rv_contents(A_0, _Right, integral_constant<bool,1>);
		}
		return A_0;
	}

	// Token: 0x06000062 RID: 98 RVA: 0x000B5D8C File Offset: 0x000B518C
	internal unsafe static char* c_str(basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>* A_0)
	{
		char* ptr = A_0;
		if (((8L <= *(A_0 + 24L)) ? 1 : 0) != 0)
		{
			ptr = *A_0;
		}
		return ptr;
	}

	// Token: 0x06000063 RID: 99 RVA: 0x000B61E0 File Offset: 0x000B55E0
	internal unsafe static _Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>,void\u0020*>* allocate(allocator<std::_Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>,void\u0020*>\u0020>* A_0, ulong _Count)
	{
		ulong num = _Count * 72L;
		if (256204778801521550L < _Count)
		{
			num = ulong.MaxValue;
		}
		else if (num < 4096UL)
		{
			if (num != 0UL)
			{
				return <Module>.@new(num);
			}
			return 0L;
		}
		return <Module>.std._Allocate_manually_vector_aligned<struct\u0020std::_Default_allocate_traits>(num);
	}

	// Token: 0x06000064 RID: 100 RVA: 0x000B5BE8 File Offset: 0x000B4FE8
	internal unsafe static void deallocate(allocator<std::_Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>,void\u0020*>\u0020>* A_0, _Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>,void\u0020*>* _Ptr, ulong _Count)
	{
		ulong num = _Count * 72L;
		void* ptr = _Ptr;
		if (num >= 4096UL)
		{
			<Module>.std._Adjust_manually_vector_aligned(ref ptr, ref num);
		}
		<Module>.delete(ptr, num);
	}

	// Token: 0x06000065 RID: 101 RVA: 0x000B685C File Offset: 0x000B5C5C
	internal unsafe static _Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>,void\u0020*>* _Buyheadnode(_Tree_comp_alloc<std::_Tmap_traits<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>,PatcherManager\u0020*,std::less<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020>,std::allocator<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>\u0020>,0>\u0020>* A_0)
	{
		long num = (long)stackalloc byte[<Module>.__CxxQueryExceptionSize()];
		_Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>,void\u0020*>* ptr = <Module>.std.allocator<std::_Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>,void\u0020*>\u0020>.allocate(A_0, 1L);
		uint exceptionCode;
		try
		{
			_Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>,void\u0020*>* ptr2 = ptr;
			*(long*)ptr2 = ptr2;
			_Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>,void\u0020*>** ptr3 = ptr + 8L / (long)sizeof(_Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>,void\u0020*>);
			*ptr3 = ptr;
			_Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>,void\u0020*>** ptr4 = ptr + 16L / (long)sizeof(_Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>,void\u0020*>);
			*ptr4 = ptr;
		}
		catch when (delegate
		{
			// Failed to create a 'catch-when' expression
			exceptionCode = (uint)Marshal.GetExceptionCode();
			endfilter(<Module>.__CxxExceptionFilter(Marshal.GetExceptionPointers(), null, 0, null) != null);
		})
		{
			uint num2 = 0U;
			<Module>.__CxxRegisterExceptionObject(Marshal.GetExceptionPointers(), num);
			try
			{
				try
				{
					<Module>.std.allocator<std::_Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>,void\u0020*>\u0020>.deallocate(A_0, ptr, 1L);
					<Module>._CxxThrowException(null, null);
				}
				catch when (delegate
				{
					// Failed to create a 'catch-when' expression
					num2 = <Module>.__CxxDetectRethrow(Marshal.GetExceptionPointers());
					endfilter(num2 != 0U);
				})
				{
				}
				if (num2 != 0U)
				{
					throw;
				}
			}
			finally
			{
				<Module>.__CxxUnregisterExceptionObject(num, (int)num2);
			}
		}
		*(byte*)(ptr + 24L / (long)sizeof(_Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>,void\u0020*>)) = 1;
		*(byte*)(ptr + 25L / (long)sizeof(_Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>,void\u0020*>)) = 1;
		return ptr;
	}

	// Token: 0x06000066 RID: 102 RVA: 0x000B670C File Offset: 0x000B5B0C
	internal unsafe static void {dtor}(_Tree_comp_alloc<std::_Tmap_traits<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>,PatcherManager\u0020*,std::less<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020>,std::allocator<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>\u0020>,0>\u0020>* A_0)
	{
		<Module>.std._Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>,void\u0020*>._Freenode0<class\u0020std::allocator<struct\u0020std::_Tree_node<struct\u0020std::pair<class\u0020std::basic_string<wchar_t,struct\u0020std::char_traits<wchar_t>,class\u0020std::allocator<wchar_t>\u0020>\u0020const\u0020,class\u0020PatcherManager\u0020*>,void\u0020*>\u0020>\u0020>(A_0, *A_0);
	}

	// Token: 0x06000067 RID: 103 RVA: 0x000B8770 File Offset: 0x000B7B70
	internal unsafe static void _Erase(_Tree<std::_Tmap_traits<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>,PatcherManager\u0020*,std::less<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020>,std::allocator<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>\u0020>,0>\u0020>* A_0, _Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>,void\u0020*>* _Rootnode)
	{
		_Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>,void\u0020*>* ptr = _Rootnode;
		if (*(sbyte*)(_Rootnode + 25L / (long)sizeof(_Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>,void\u0020*>)) == 0)
		{
			do
			{
				<Module>.std._Tree<std::_Tmap_traits<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>,PatcherManager\u0020*,std::less<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020>,std::allocator<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>\u0020>,0>\u0020>._Erase(A_0, *(long*)(ptr + 16L / (long)sizeof(_Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>,void\u0020*>)));
				ptr = *(long*)ptr;
				pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>* ptr2 = _Rootnode + 32L / (long)sizeof(_Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>,void\u0020*>);
				try
				{
					<Module>.std.basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>._Tidy_deallocate(ptr2);
				}
				catch
				{
					<Module>.___CxxCallUnwindDtor(ldftn(std._String_alloc<std::_String_base_types<wchar_t,std::allocator<wchar_t>\u0020>\u0020>.{dtor}), ptr2);
					throw;
				}
				<Module>.std._Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>,void\u0020*>._Freenode0<class\u0020std::allocator<struct\u0020std::_Tree_node<struct\u0020std::pair<class\u0020std::basic_string<wchar_t,struct\u0020std::char_traits<wchar_t>,class\u0020std::allocator<wchar_t>\u0020>\u0020const\u0020,class\u0020PatcherManager\u0020*>,void\u0020*>\u0020>\u0020>(A_0, _Rootnode);
				_Rootnode = ptr;
			}
			while (*(sbyte*)(ptr + 25L / (long)sizeof(_Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>,void\u0020*>)) == 0);
		}
	}

	// Token: 0x06000068 RID: 104 RVA: 0x000B8C50 File Offset: 0x000B8050
	internal unsafe static void clear(_Tree<std::_Tmap_traits<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>,PatcherManager\u0020*,std::less<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020>,std::allocator<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>\u0020>,0>\u0020>* A_0)
	{
		long num = *A_0;
		_Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>,void\u0020*>* ptr = num;
		<Module>.std._Tree<std::_Tmap_traits<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>,PatcherManager\u0020*,std::less<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020>,std::allocator<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>\u0020>,0>\u0020>._Erase(A_0, *(num + 8L));
		*(*A_0 + 8L) = ptr;
		*(*A_0) = ptr;
		*(*A_0 + 16L) = ptr;
		*(A_0 + 8L) = 0L;
	}

	// Token: 0x06000069 RID: 105 RVA: 0x000B55E8 File Offset: 0x000B49E8
	internal unsafe static void _Lrotate(_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>\u0020>\u0020>* A_0, _Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>,void\u0020*>* _Wherenode)
	{
		_Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>,void\u0020*>* ptr = *(long*)(_Wherenode + 16L / (long)sizeof(_Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>,void\u0020*>));
		*(long*)(_Wherenode + 16L / (long)sizeof(_Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>,void\u0020*>)) = *(long*)ptr;
		long num = *(long*)ptr;
		if (*(num + 25L) == 0)
		{
			*(num + 8L) = _Wherenode;
		}
		*(long*)(ptr + 8L / (long)sizeof(_Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>,void\u0020*>)) = *(long*)(_Wherenode + 8L / (long)sizeof(_Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>,void\u0020*>));
		long num2 = *A_0 + 8L;
		if (_Wherenode == *num2)
		{
			*num2 = ptr;
		}
		else
		{
			long num3 = *(long*)(_Wherenode + 8L / (long)sizeof(_Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>,void\u0020*>));
			if (_Wherenode == *num3)
			{
				*num3 = ptr;
			}
			else
			{
				*(num3 + 16L) = ptr;
			}
		}
		*(long*)ptr = _Wherenode;
		*(long*)(_Wherenode + 8L / (long)sizeof(_Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>,void\u0020*>)) = ptr;
	}

	// Token: 0x0600006A RID: 106 RVA: 0x000B5578 File Offset: 0x000B4978
	internal unsafe static void _Rrotate(_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>\u0020>\u0020>* A_0, _Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>,void\u0020*>* _Wherenode)
	{
		_Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>,void\u0020*>* ptr = *(long*)_Wherenode;
		*(long*)_Wherenode = *(long*)(ptr + 16L / (long)sizeof(_Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>,void\u0020*>));
		long num = *(long*)(ptr + 16L / (long)sizeof(_Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>,void\u0020*>));
		if (*(num + 25L) == 0)
		{
			*(num + 8L) = _Wherenode;
		}
		*(long*)(ptr + 8L / (long)sizeof(_Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>,void\u0020*>)) = *(long*)(_Wherenode + 8L / (long)sizeof(_Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>,void\u0020*>));
		long num2 = *A_0 + 8L;
		if (_Wherenode == *num2)
		{
			*num2 = ptr;
		}
		else
		{
			long num3 = *(long*)(_Wherenode + 8L / (long)sizeof(_Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>,void\u0020*>));
			if (_Wherenode == *(num3 + 16L))
			{
				*(num3 + 16L) = ptr;
			}
			else
			{
				*num3 = ptr;
			}
		}
		*(long*)(ptr + 16L / (long)sizeof(_Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>,void\u0020*>)) = _Wherenode;
		*(long*)(_Wherenode + 8L / (long)sizeof(_Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>,void\u0020*>)) = ptr;
	}

	// Token: 0x0600006B RID: 107 RVA: 0x000B5E5C File Offset: 0x000B525C
	internal unsafe static _Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>,void\u0020*>* _Extract(_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>\u0020>\u0020>* A_0, _Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>\u0020>\u0020>\u0020> _Where)
	{
		_Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>,void\u0020*>* ptr = _Where;
		<Module>.std._Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>\u0020>\u0020>,std::_Iterator_base0>.++(ref _Where);
		long num = *(long*)ptr;
		_Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>,void\u0020*>* ptr2;
		_Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>,void\u0020*>* ptr4;
		long num4;
		if (*(num + 25L) != 0)
		{
			ptr2 = *(long*)(ptr + 16L / (long)sizeof(_Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>,void\u0020*>));
		}
		else if (*(*(long*)(ptr + 16L / (long)sizeof(_Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>,void\u0020*>)) + 25L) != 0)
		{
			ptr2 = num;
		}
		else
		{
			_Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>,void\u0020*>* ptr3 = _Where;
			long num2 = _Where + 16L;
			long num3 = num2;
			ptr2 = *num2;
			if (_Where != ptr)
			{
				*(num + 8L) = _Where;
				*(long*)ptr3 = *(long*)ptr;
				if (ptr3 == *(long*)(ptr + 16L / (long)sizeof(_Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>,void\u0020*>)))
				{
					ptr4 = ptr3;
				}
				else
				{
					ptr4 = *(long*)(ptr3 + 8L / (long)sizeof(_Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>,void\u0020*>));
					if (*(sbyte*)(ptr2 + 25L / (long)sizeof(_Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>,void\u0020*>)) == 0)
					{
						*(long*)(ptr2 + 8L / (long)sizeof(_Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>,void\u0020*>)) = ptr4;
					}
					*(long*)ptr4 = ptr2;
					*num3 = *(long*)(ptr + 16L / (long)sizeof(_Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>,void\u0020*>));
					*(*(long*)(ptr + 16L / (long)sizeof(_Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>,void\u0020*>)) + 8L) = ptr3;
				}
				num4 = *A_0 + 8L;
				if (*num4 == ptr)
				{
					*num4 = ptr3;
				}
				else
				{
					long num5 = *(long*)(ptr + 8L / (long)sizeof(_Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>,void\u0020*>));
					if (*num5 == ptr)
					{
						*num5 = ptr3;
					}
					else
					{
						*(num5 + 16L) = ptr3;
					}
				}
				*(long*)(ptr3 + 8L / (long)sizeof(_Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>,void\u0020*>)) = *(long*)(ptr + 8L / (long)sizeof(_Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>,void\u0020*>));
				sbyte b = *(sbyte*)(ptr3 + 24L / (long)sizeof(_Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>,void\u0020*>));
				*(byte*)(ptr3 + 24L / (long)sizeof(_Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>,void\u0020*>)) = (byte)(*(sbyte*)(ptr + 24L / (long)sizeof(_Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>,void\u0020*>)));
				*(byte*)(ptr + 24L / (long)sizeof(_Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>,void\u0020*>)) = b;
				goto IL_1C3;
			}
		}
		ptr4 = *(long*)(ptr + 8L / (long)sizeof(_Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>,void\u0020*>));
		if (*(sbyte*)(ptr2 + 25L / (long)sizeof(_Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>,void\u0020*>)) == 0)
		{
			*(long*)(ptr2 + 8L / (long)sizeof(_Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>,void\u0020*>)) = ptr4;
		}
		num4 = *A_0 + 8L;
		if (*num4 == ptr)
		{
			*num4 = ptr2;
		}
		else if (*(long*)ptr4 == ptr)
		{
			*(long*)ptr4 = ptr2;
		}
		else
		{
			*(long*)(ptr4 + 16L / (long)sizeof(_Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>,void\u0020*>)) = ptr2;
		}
		long num6 = *A_0;
		if (*num6 == ptr)
		{
			_Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>,void\u0020*>* ptr5;
			if (*(sbyte*)(ptr2 + 25L / (long)sizeof(_Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>,void\u0020*>)) != 0)
			{
				ptr5 = ptr4;
			}
			else
			{
				_Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>,void\u0020*>* ptr6 = ptr2;
				long num7 = *(long*)ptr2;
				if (*(num7 + 25L) == 0)
				{
					long num8 = num7;
					do
					{
						ptr6 = num8;
						num8 = *(long*)ptr6;
					}
					while (*(num8 + 25L) == 0);
				}
				ptr5 = ptr6;
			}
			*num6 = ptr5;
		}
		long num9 = *A_0 + 16L;
		if (*num9 == ptr)
		{
			_Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>,void\u0020*>* ptr7;
			if (*(sbyte*)(ptr2 + 25L / (long)sizeof(_Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>,void\u0020*>)) != 0)
			{
				ptr7 = ptr4;
			}
			else
			{
				_Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>,void\u0020*>* ptr8 = ptr2;
				long num10 = *(long*)(ptr2 + 16L / (long)sizeof(_Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>,void\u0020*>));
				if (*(num10 + 25L) == 0)
				{
					long num11 = num10;
					do
					{
						ptr8 = num11;
						num11 = *(long*)(ptr8 + 16L / (long)sizeof(_Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>,void\u0020*>));
					}
					while (*(num11 + 25L) == 0);
				}
				ptr7 = ptr8;
			}
			*num9 = ptr7;
		}
		IL_1C3:
		if (*(sbyte*)(ptr + 24L / (long)sizeof(_Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>,void\u0020*>)) == 1)
		{
			if (ptr2 != *(*A_0 + 8L))
			{
				while (*(sbyte*)(ptr2 + 24L / (long)sizeof(_Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>,void\u0020*>)) == 1)
				{
					ulong num12 = (ulong)(*(long*)ptr4);
					if (ptr2 == num12)
					{
						_Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>,void\u0020*>* ptr3 = *(long*)(ptr4 + 16L / (long)sizeof(_Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>,void\u0020*>));
						if (*(sbyte*)(ptr3 + 24L / (long)sizeof(_Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>,void\u0020*>)) == 0)
						{
							*(byte*)(ptr3 + 24L / (long)sizeof(_Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>,void\u0020*>)) = 1;
							*(byte*)(ptr4 + 24L / (long)sizeof(_Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>,void\u0020*>)) = 0;
							<Module>.std._Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>\u0020>\u0020>._Lrotate(A_0, ptr4);
							ptr3 = *(long*)(ptr4 + 16L / (long)sizeof(_Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>,void\u0020*>));
						}
						if (*(sbyte*)(ptr3 + 25L / (long)sizeof(_Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>,void\u0020*>)) != 0)
						{
							ptr2 = ptr4;
						}
						else
						{
							if (*(*(long*)ptr3 + 24L) != 1 || *(*(long*)(ptr3 + 16L / (long)sizeof(_Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>,void\u0020*>)) + 24L) != 1)
							{
								if (*(*(long*)(ptr3 + 16L / (long)sizeof(_Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>,void\u0020*>)) + 24L) == 1)
								{
									*(*(long*)ptr3 + 24L) = 1;
									*(byte*)(ptr3 + 24L / (long)sizeof(_Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>,void\u0020*>)) = 0;
									<Module>.std._Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>\u0020>\u0020>._Rrotate(A_0, ptr3);
									ptr3 = *(long*)(ptr4 + 16L / (long)sizeof(_Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>,void\u0020*>));
								}
								_Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>,void\u0020*>* ptr9 = ptr4 + 24L / (long)sizeof(_Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>,void\u0020*>);
								*(byte*)(ptr3 + 24L / (long)sizeof(_Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>,void\u0020*>)) = (byte)(*(sbyte*)ptr9);
								*(byte*)ptr9 = 1;
								*(*(long*)(ptr3 + 16L / (long)sizeof(_Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>,void\u0020*>)) + 24L) = 1;
								<Module>.std._Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>\u0020>\u0020>._Lrotate(A_0, ptr4);
								break;
							}
							*(byte*)(ptr3 + 24L / (long)sizeof(_Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>,void\u0020*>)) = 0;
							ptr2 = ptr4;
						}
					}
					else
					{
						_Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>,void\u0020*>* ptr3 = num12;
						if (*(sbyte*)(ptr3 + 24L / (long)sizeof(_Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>,void\u0020*>)) == 0)
						{
							*(byte*)(ptr3 + 24L / (long)sizeof(_Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>,void\u0020*>)) = 1;
							*(byte*)(ptr4 + 24L / (long)sizeof(_Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>,void\u0020*>)) = 0;
							<Module>.std._Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>\u0020>\u0020>._Rrotate(A_0, ptr4);
							ptr3 = *(long*)ptr4;
						}
						if (*(sbyte*)(ptr3 + 25L / (long)sizeof(_Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>,void\u0020*>)) != 0)
						{
							ptr2 = ptr4;
						}
						else
						{
							if (*(*(long*)(ptr3 + 16L / (long)sizeof(_Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>,void\u0020*>)) + 24L) != 1 || *(*(long*)ptr3 + 24L) != 1)
							{
								if (*(*(long*)ptr3 + 24L) == 1)
								{
									*(*(long*)(ptr3 + 16L / (long)sizeof(_Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>,void\u0020*>)) + 24L) = 1;
									*(byte*)(ptr3 + 24L / (long)sizeof(_Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>,void\u0020*>)) = 0;
									<Module>.std._Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>\u0020>\u0020>._Lrotate(A_0, ptr3);
									ptr3 = *(long*)ptr4;
								}
								_Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>,void\u0020*>* ptr10 = ptr4 + 24L / (long)sizeof(_Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>,void\u0020*>);
								*(byte*)(ptr3 + 24L / (long)sizeof(_Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>,void\u0020*>)) = (byte)(*(sbyte*)ptr10);
								*(byte*)ptr10 = 1;
								*(*(long*)ptr3 + 24L) = 1;
								<Module>.std._Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>\u0020>\u0020>._Rrotate(A_0, ptr4);
								break;
							}
							*(byte*)(ptr3 + 24L / (long)sizeof(_Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>,void\u0020*>)) = 0;
							ptr2 = ptr4;
						}
					}
					ptr4 = *(long*)(ptr4 + 8L / (long)sizeof(_Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>,void\u0020*>));
					if (ptr2 == *(*A_0 + 8L))
					{
						break;
					}
				}
			}
			*(byte*)(ptr2 + 24L / (long)sizeof(_Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>,void\u0020*>)) = 1;
		}
		ulong num13 = (ulong)(*(A_0 + 8L));
		if (0UL < num13)
		{
			*(A_0 + 8L) = (long)(num13 - 1UL);
		}
		return ptr;
	}

	// Token: 0x0600006C RID: 108 RVA: 0x000B5C18 File Offset: 0x000B5018
	internal unsafe static void _Freenode0<class\u0020std::allocator<struct\u0020std::_Tree_node<struct\u0020std::pair<class\u0020std::basic_string<wchar_t,struct\u0020std::char_traits<wchar_t>,class\u0020std::allocator<wchar_t>\u0020>\u0020const\u0020,class\u0020PatcherManager\u0020*>,void\u0020*>\u0020>\u0020>(allocator<std::_Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>,void\u0020*>\u0020>* _Al, _Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>,void\u0020*>* _Ptr)
	{
		<Module>.delete((void*)_Ptr, 72UL);
	}

	// Token: 0x0600006D RID: 109 RVA: 0x000B870C File Offset: 0x000B7B0C
	internal unsafe static _Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>\u0020>\u0020>\u0020>* erase(_Tree<std::_Tmap_traits<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>,PatcherManager\u0020*,std::less<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020>,std::allocator<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>\u0020>,0>\u0020>* A_0, _Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>\u0020>\u0020>\u0020>* A_1, _Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>\u0020>\u0020>\u0020> _Where)
	{
		_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>\u0020>\u0020>\u0020> tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>_u0020const_u0020,PatcherManager_u0020*>_u0020>_u0020>_u0020> = _Where;
		<Module>.std._Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>\u0020>\u0020>,std::_Iterator_base0>.++(ref tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>_u0020const_u0020,PatcherManager_u0020*>_u0020>_u0020>_u0020>);
		_Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>,void\u0020*>* ptr = <Module>.std._Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>\u0020>\u0020>._Extract(A_0, _Where);
		pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>* ptr2 = ptr + 32L / (long)sizeof(_Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>,void\u0020*>);
		try
		{
			<Module>.std.basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>._Tidy_deallocate(ptr2);
		}
		catch
		{
			<Module>.___CxxCallUnwindDtor(ldftn(std._String_alloc<std::_String_base_types<wchar_t,std::allocator<wchar_t>\u0020>\u0020>.{dtor}), ptr2);
			throw;
		}
		<Module>.std._Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>,void\u0020*>._Freenode0<class\u0020std::allocator<struct\u0020std::_Tree_node<struct\u0020std::pair<class\u0020std::basic_string<wchar_t,struct\u0020std::char_traits<wchar_t>,class\u0020std::allocator<wchar_t>\u0020>\u0020const\u0020,class\u0020PatcherManager\u0020*>,void\u0020*>\u0020>\u0020>(A_0, ptr);
		*(long*)A_1 = tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>_u0020const_u0020,PatcherManager_u0020*>_u0020>_u0020>_u0020>;
		return A_1;
	}

	// Token: 0x0600006E RID: 110 RVA: 0x000B5B78 File Offset: 0x000B4F78
	internal unsafe static _Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>\u0020>\u0020>,std::_Iterator_base0>* ++(_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>\u0020>\u0020>,std::_Iterator_base0>* A_0)
	{
		long num = *A_0;
		long num2 = *(num + 16L);
		if (*(num2 + 25L) != 0)
		{
			_Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>,void\u0020*>* ptr = *(num + 8L);
			if (*(sbyte*)(ptr + 25L / (long)sizeof(_Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>,void\u0020*>)) == 0)
			{
				while (*A_0 == *(long*)(ptr + 16L / (long)sizeof(_Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>,void\u0020*>)))
				{
					*A_0 = ptr;
					ptr = *(long*)(ptr + 8L / (long)sizeof(_Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>,void\u0020*>));
					if (*(sbyte*)(ptr + 25L / (long)sizeof(_Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>,void\u0020*>)) != 0)
					{
						break;
					}
				}
			}
			*A_0 = ptr;
		}
		else
		{
			_Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>,void\u0020*>* ptr2 = num2;
			long num3 = *(long*)ptr2;
			if (*(num3 + 25L) == 0)
			{
				do
				{
					ptr2 = num3;
					num3 = *(long*)ptr2;
				}
				while (*(num3 + 25L) == 0);
			}
			*A_0 = ptr2;
		}
		return A_0;
	}

	// Token: 0x0600006F RID: 111 RVA: 0x000B8C88 File Offset: 0x000B8088
	internal unsafe static _Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>\u0020>\u0020>\u0020>* erase(_Tree<std::_Tmap_traits<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>,PatcherManager\u0020*,std::less<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020>,std::allocator<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>\u0020>,0>\u0020>* A_0, _Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>\u0020>\u0020>\u0020>* A_1, _Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>\u0020>\u0020>\u0020> _First, _Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>\u0020>\u0020>\u0020> _Last)
	{
		long num = *A_0;
		if (((_First == *num) ? 1 : 0) != 0 && ((_Last == num) ? 1 : 0) != 0)
		{
			<Module>.std._Tree<std::_Tmap_traits<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>,PatcherManager\u0020*,std::less<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020>,std::allocator<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>\u0020>,0>\u0020>.clear(A_0);
			*(long*)A_1 = *(*A_0);
			return A_1;
		}
		while (((((_First == _Last) ? 1 : 0) == 0) ? 1 : 0) != 0)
		{
			_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>\u0020>\u0020>\u0020> tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>_u0020const_u0020,PatcherManager_u0020*>_u0020>_u0020>_u0020> = _First;
			<Module>.std._Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>\u0020>\u0020>,std::_Iterator_base0>.++(ref _First);
			_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>\u0020>\u0020>\u0020> tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>_u0020const_u0020,PatcherManager_u0020*>_u0020>_u0020>_u0020>;
			<Module>.std._Tree<std::_Tmap_traits<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>,PatcherManager\u0020*,std::less<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020>,std::allocator<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>\u0020>,0>\u0020>.erase(A_0, &tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>_u0020const_u0020,PatcherManager_u0020*>_u0020>_u0020>_u0020>, tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>_u0020const_u0020,PatcherManager_u0020*>_u0020>_u0020>_u0020>);
		}
		*(long*)A_1 = _First;
		return A_1;
	}

	// Token: 0x06000070 RID: 112 RVA: 0x000B5564 File Offset: 0x000B4964
	internal unsafe static _Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>\u0020>\u0020>,std::_Iterator_base0>* {ctor}(_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>\u0020>\u0020>,std::_Iterator_base0>* A_0, _Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>,void\u0020*>* _Pnode, _Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>\u0020>\u0020>* _Plist)
	{
		*A_0 = _Pnode;
		return A_0;
	}

	// Token: 0x06000071 RID: 113 RVA: 0x001A90AC File Offset: 0x001A84AC
	internal unsafe static void ??__Fs_patcher_manager_map@?1??GetPatcherManagerMap@PatcherManager@@CAAEAV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEAVPatcherManager@@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEAVPatcherManager@@@std@@@2@@std@@XZ@YMXXZ()
	{
		try
		{
			_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>\u0020>\u0020>\u0020> tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>_u0020const_u0020,PatcherManager_u0020*>_u0020>_u0020>_u0020> = <Module>.?s_patcher_manager_map@?1??GetPatcherManagerMap@PatcherManager@@CAAEAV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEAVPatcherManager@@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEAVPatcherManager@@@std@@@2@@std@@XZ@4V34@A;
			_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>\u0020>\u0020>\u0020> tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>_u0020const_u0020,PatcherManager_u0020*>_u0020>_u0020>_u0020>2 = *<Module>.?s_patcher_manager_map@?1??GetPatcherManagerMap@PatcherManager@@CAAEAV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEAVPatcherManager@@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEAVPatcherManager@@@std@@@2@@std@@XZ@4V34@A;
			_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>\u0020>\u0020>\u0020> tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>_u0020const_u0020,PatcherManager_u0020*>_u0020>_u0020>_u0020>;
			<Module>.std._Tree<std::_Tmap_traits<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>,PatcherManager\u0020*,std::less<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020>,std::allocator<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>\u0020>,0>\u0020>.erase(ref <Module>.?s_patcher_manager_map@?1??GetPatcherManagerMap@PatcherManager@@CAAEAV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEAVPatcherManager@@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEAVPatcherManager@@@std@@@2@@std@@XZ@4V34@A, &tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>_u0020const_u0020,PatcherManager_u0020*>_u0020>_u0020>_u0020>, tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>_u0020const_u0020,PatcherManager_u0020*>_u0020>_u0020>_u0020>2, tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>_u0020const_u0020,PatcherManager_u0020*>_u0020>_u0020>_u0020>);
		}
		catch
		{
			<Module>.___CxxCallUnwindDtor(ldftn(std._Tree_comp_alloc<std::_Tmap_traits<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>,PatcherManager\u0020*,std::less<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020>,std::allocator<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>\u0020>,0>\u0020>.{dtor}), (void*)(&<Module>.?s_patcher_manager_map@?1??GetPatcherManagerMap@PatcherManager@@CAAEAV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEAVPatcherManager@@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEAVPatcherManager@@@std@@@2@@std@@XZ@4V34@A));
			throw;
		}
		<Module>.delete(<Module>.?s_patcher_manager_map@?1??GetPatcherManagerMap@PatcherManager@@CAAEAV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEAVPatcherManager@@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEAVPatcherManager@@@std@@@2@@std@@XZ@4V34@A, 72UL);
	}

	// Token: 0x06000072 RID: 114 RVA: 0x000B8D6C File Offset: 0x000B816C
	internal unsafe static map<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>,PatcherManager\u0020*,std::less<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020>,std::allocator<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>\u0020>\u0020>* GetPatcherManagerMap()
	{
		<Module>._Init_thread_header_m((int*)(&<Module>.?$TSS0@?1??GetPatcherManagerMap@PatcherManager@@CAAEAV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEAVPatcherManager@@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEAVPatcherManager@@@std@@@2@@std@@XZ@4HA));
		if (<Module>.?$TSS0@?1??GetPatcherManagerMap@PatcherManager@@CAAEAV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEAVPatcherManager@@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEAVPatcherManager@@@std@@@2@@std@@XZ@4HA == -1)
		{
			try
			{
				initblk(ref <Module>.?s_patcher_manager_map@?1??GetPatcherManagerMap@PatcherManager@@CAAEAV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEAVPatcherManager@@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEAVPatcherManager@@@std@@@2@@std@@XZ@4V34@A, 0, 16L);
				<Module>.?s_patcher_manager_map@?1??GetPatcherManagerMap@PatcherManager@@CAAEAV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEAVPatcherManager@@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEAVPatcherManager@@@std@@@2@@std@@XZ@4V34@A = 0L;
				*((ref <Module>.?s_patcher_manager_map@?1??GetPatcherManagerMap@PatcherManager@@CAAEAV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEAVPatcherManager@@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEAVPatcherManager@@@std@@@2@@std@@XZ@4V34@A) + 8) = 0L;
				_Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>,void\u0020*>* ptr = <Module>.std._Tree_comp_alloc<std::_Tmap_traits<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>,PatcherManager\u0020*,std::less<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020>,std::allocator<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>\u0020>,0>\u0020>._Buyheadnode(ref <Module>.?s_patcher_manager_map@?1??GetPatcherManagerMap@PatcherManager@@CAAEAV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEAVPatcherManager@@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEAVPatcherManager@@@std@@@2@@std@@XZ@4V34@A);
				<Module>.?s_patcher_manager_map@?1??GetPatcherManagerMap@PatcherManager@@CAAEAV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEAVPatcherManager@@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEAVPatcherManager@@@std@@@2@@std@@XZ@4V34@A = ptr;
				<Module>._atexit_m(ldftn(??__Fs_patcher_manager_map@?1??GetPatcherManagerMap@PatcherManager@@CAAEAV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEAVPatcherManager@@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEAVPatcherManager@@@std@@@2@@std@@XZ@YMXXZ));
			}
			catch
			{
				<Module>.___CxxCallUnwindDtor(ldftn(_Init_thread_abort_m), (void*)(&<Module>.?$TSS0@?1??GetPatcherManagerMap@PatcherManager@@CAAEAV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEAVPatcherManager@@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEAVPatcherManager@@@std@@@2@@std@@XZ@4HA));
				throw;
			}
			<Module>._Init_thread_footer_m((int*)(&<Module>.?$TSS0@?1??GetPatcherManagerMap@PatcherManager@@CAAEAV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEAVPatcherManager@@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEAVPatcherManager@@@std@@@2@@std@@XZ@4HA));
		}
		return ref <Module>.?s_patcher_manager_map@?1??GetPatcherManagerMap@PatcherManager@@CAAEAV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEAVPatcherManager@@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEAVPatcherManager@@@std@@@2@@std@@XZ@4V34@A;
	}

	// Token: 0x06000073 RID: 115 RVA: 0x000B5AD0 File Offset: 0x000B4ED0
	internal unsafe static void _Tidy_init(basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>* A_0)
	{
		*(A_0 + 16L) = 0L;
		*(A_0 + 24L) = 7L;
		*A_0 = 0;
	}

	// Token: 0x06000074 RID: 116 RVA: 0x000B6CA0 File Offset: 0x000B60A0
	internal unsafe static basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>* {ctor}(basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>* A_0)
	{
		basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>* ptr;
		basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>* ptr2;
		try
		{
			ptr = A_0 + 16L;
			*ptr = 0L;
			ptr2 = A_0 + 24L;
			*ptr2 = 0L;
		}
		catch
		{
			<Module>.___CxxCallUnwindDtor(ldftn(std._String_val<std::_Simple_types<wchar_t>\u0020>._Bxty.{dtor}), A_0);
			throw;
		}
		try
		{
			*ptr = 0L;
			*ptr2 = 7L;
			*A_0 = 0;
		}
		catch
		{
			<Module>.___CxxCallUnwindDtor(ldftn(std._String_alloc<std::_String_base_types<wchar_t,std::allocator<wchar_t>\u0020>\u0020>.{dtor}), A_0);
			throw;
		}
		return A_0;
	}

	// Token: 0x06000075 RID: 117 RVA: 0x000B5DB0 File Offset: 0x000B51B0
	internal unsafe static void _Tidy_deallocate(basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>* A_0)
	{
		ulong num = (ulong)(*(A_0 + 24L));
		if (((8UL <= num) ? 1 : 0) != 0)
		{
			ulong num2 = (num + 1UL) * 2UL;
			void* ptr = *A_0;
			if (num2 >= 4096UL)
			{
				<Module>.std._Adjust_manually_vector_aligned(ref ptr, ref num2);
			}
			<Module>.delete(ptr, num2);
		}
		*(A_0 + 16L) = 0L;
		*(A_0 + 24L) = 7L;
		*A_0 = 0;
	}

	// Token: 0x06000076 RID: 118 RVA: 0x000B6BD0 File Offset: 0x000B5FD0
	internal unsafe static void {dtor}(basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>* A_0)
	{
		try
		{
			<Module>.std.basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>._Tidy_deallocate(A_0);
		}
		catch
		{
			<Module>.___CxxCallUnwindDtor(ldftn(std._String_alloc<std::_String_base_types<wchar_t,std::allocator<wchar_t>\u0020>\u0020>.{dtor}), A_0);
			throw;
		}
	}

	// Token: 0x06000077 RID: 119 RVA: 0x000B66EC File Offset: 0x000B5AEC
	internal unsafe static void {dtor}(_String_alloc<std::_String_base_types<wchar_t,std::allocator<wchar_t>\u0020>\u0020>* A_0)
	{
	}

	// Token: 0x06000078 RID: 120 RVA: 0x000B9FC8 File Offset: 0x000B93C8
	internal unsafe static void {dtor}(function<System::Object\u0020^\u0020__clrcall(PatcherManager\u0020*)>* A_0)
	{
		<Module>.std._Func_class<System::Object\u0020^,PatcherManager\u0020*>._Tidy(A_0);
	}

	// Token: 0x06000079 RID: 121 RVA: 0x000BA338 File Offset: 0x000B9738
	internal unsafe static void {dtor}(URequestProgressResult* A_0)
	{
		try
		{
			basic_string<char,std::char_traits<char>,std::allocator<char>\u0020>* ptr = A_0 + 40L;
			try
			{
				<Module>.std.basic_string<char,std::char_traits<char>,std::allocator<char>\u0020>._Tidy_deallocate(ptr);
			}
			catch
			{
				<Module>.___CxxCallUnwindDtor(ldftn(std._String_alloc<std::_String_base_types<char,std::allocator<char>\u0020>\u0020>.{dtor}), ptr);
				throw;
			}
		}
		catch
		{
			<Module>.___CxxCallUnwindDtor(ldftn(std.basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>.{dtor}), A_0);
			throw;
		}
		try
		{
			<Module>.std.basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>._Tidy_deallocate(A_0);
		}
		catch
		{
			<Module>.___CxxCallUnwindDtor(ldftn(std._String_alloc<std::_String_base_types<wchar_t,std::allocator<wchar_t>\u0020>\u0020>.{dtor}), A_0);
			throw;
		}
	}

	// Token: 0x0600007A RID: 122 RVA: 0x000B9D30 File Offset: 0x000B9130
	internal unsafe static void {dtor}(_Func_class<System::Object\u0020^,PatcherManager\u0020*>* A_0)
	{
		<Module>.std._Func_class<System::Object\u0020^,PatcherManager\u0020*>._Tidy(A_0);
	}

	// Token: 0x0600007B RID: 123 RVA: 0x000BAC5C File Offset: 0x000BA05C
	internal unsafe static void {dtor}(ObjectModule<PatcherNativeObject>* A_0)
	{
		*A_0 = ref <Module>.??_7?$ObjectModule@VPatcherNativeObject@@@@6B@;
		try
		{
			try
			{
				<Module>.gcroot<LauncherView::App::AddWebBrowserCreateCallbackFn\u0020^>.{dtor}(A_0 + 96L);
			}
			catch
			{
				<Module>.___CxxCallUnwindDtor(ldftn(std.shared_ptr<IniParser>.{dtor}), (void*)(A_0 + (byte*)80L));
				throw;
			}
			ulong num = (ulong)(*(A_0 + 80L + 8L));
			if (num != 0UL)
			{
				<Module>.std._Ref_count_base._Decref(num);
			}
		}
		catch
		{
			<Module>.___CxxCallUnwindDtor(ldftn(PatcherNativeObject.{dtor}), A_0);
			throw;
		}
		try
		{
			basic_string<char,std::char_traits<char>,std::allocator<char>\u0020>* ptr = A_0 + 40L;
			try
			{
				<Module>.std.basic_string<char,std::char_traits<char>,std::allocator<char>\u0020>._Tidy_deallocate(ptr);
			}
			catch
			{
				<Module>.___CxxCallUnwindDtor(ldftn(std._String_alloc<std::_String_base_types<char,std::allocator<char>\u0020>\u0020>.{dtor}), ptr);
				throw;
			}
		}
		catch
		{
			<Module>.___CxxCallUnwindDtor(ldftn(std.basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>.{dtor}), (void*)(A_0 + (byte*)8L));
			throw;
		}
		basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>* ptr2 = A_0 + 8L;
		try
		{
			<Module>.std.basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>._Tidy_deallocate(ptr2);
		}
		catch
		{
			<Module>.___CxxCallUnwindDtor(ldftn(std._String_alloc<std::_String_base_types<wchar_t,std::allocator<wchar_t>\u0020>\u0020>.{dtor}), ptr2);
			throw;
		}
	}

	// Token: 0x0600007C RID: 124 RVA: 0x000BAF40 File Offset: 0x000BA340
	internal unsafe static ObjectModule<PatcherNativeObject>* GetInstance()
	{
		<Module>._Init_thread_header_m((int*)(&<Module>.?$TSS0@?1??GetInstance@?$ObjectModule@VPatcherNativeObject@@@@SAAEAV2@XZ@4HA));
		if (<Module>.?$TSS0@?1??GetInstance@?$ObjectModule@VPatcherNativeObject@@@@SAAEAV2@XZ@4HA == -1)
		{
			try
			{
				initblk(ref <Module>.?s_instance@?1??GetInstance@?$ObjectModule@VPatcherNativeObject@@@@SAAEAV2@XZ@4V2@A, 0, 104L);
				<Module>.ObjectModule<PatcherNativeObject>.{ctor}(ref <Module>.?s_instance@?1??GetInstance@?$ObjectModule@VPatcherNativeObject@@@@SAAEAV2@XZ@4V2@A);
				<Module>._atexit_m(ldftn(??__Fs_instance@?1??GetInstance@?$ObjectModule@VPatcherNativeObject@@@@SAAEAV1@XZ@YMXXZ));
			}
			catch
			{
				<Module>.___CxxCallUnwindDtor(ldftn(_Init_thread_abort_m), (void*)(&<Module>.?$TSS0@?1??GetInstance@?$ObjectModule@VPatcherNativeObject@@@@SAAEAV2@XZ@4HA));
				throw;
			}
			<Module>._Init_thread_footer_m((int*)(&<Module>.?$TSS0@?1??GetInstance@?$ObjectModule@VPatcherNativeObject@@@@SAAEAV2@XZ@4HA));
		}
		return ref <Module>.?s_instance@?1??GetInstance@?$ObjectModule@VPatcherNativeObject@@@@SAAEAV2@XZ@4V2@A;
	}

	// Token: 0x0600007D RID: 125 RVA: 0x001A9118 File Offset: 0x001A8518
	internal static void ??__Fs_instance@?1??GetInstance@?$ObjectModule@VPatcherNativeObject@@@@SAAEAV1@XZ@YMXXZ()
	{
		<Module>.ObjectModule<PatcherNativeObject>.{dtor}(ref <Module>.?s_instance@?1??GetInstance@?$ObjectModule@VPatcherNativeObject@@@@SAAEAV2@XZ@4V2@A);
	}

	// Token: 0x0600007E RID: 126 RVA: 0x000BBA54 File Offset: 0x000BAE54
	internal unsafe static void* __vecDelDtor(ObjectModule<PatcherNativeObject>* A_0, uint A_0)
	{
		if ((A_0 & 2U) != 0U)
		{
			ObjectModule<PatcherNativeObject>* ptr = A_0 - 8L;
			<Module>.__ehvec_dtor(A_0, 104UL, (ulong)(*ptr), ldftn(ObjectModule<PatcherNativeObject>.{dtor}));
			if ((A_0 & 1U) != 0U)
			{
				ObjectModule<PatcherNativeObject>* ptr2 = ptr;
				<Module>.delete[](ptr2, (ulong)(*ptr2 * 104L + 8L));
			}
			return ptr;
		}
		<Module>.ObjectModule<PatcherNativeObject>.{dtor}(A_0);
		if ((A_0 & 1U) != 0U)
		{
			<Module>.delete(A_0, 104UL);
		}
		return A_0;
	}

	// Token: 0x0600007F RID: 127 RVA: 0x000BA440 File Offset: 0x000B9840
	internal unsafe static void {dtor}(PatcherNativeObject* A_0)
	{
		try
		{
			basic_string<char,std::char_traits<char>,std::allocator<char>\u0020>* ptr = A_0 + 40L;
			try
			{
				<Module>.std.basic_string<char,std::char_traits<char>,std::allocator<char>\u0020>._Tidy_deallocate(ptr);
			}
			catch
			{
				<Module>.___CxxCallUnwindDtor(ldftn(std._String_alloc<std::_String_base_types<char,std::allocator<char>\u0020>\u0020>.{dtor}), ptr);
				throw;
			}
		}
		catch
		{
			<Module>.___CxxCallUnwindDtor(ldftn(std.basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>.{dtor}), (void*)(A_0 + (byte*)8L));
			throw;
		}
		basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>* ptr2 = A_0 + 8L;
		try
		{
			<Module>.std.basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>._Tidy_deallocate(ptr2);
		}
		catch
		{
			<Module>.___CxxCallUnwindDtor(ldftn(std._String_alloc<std::_String_base_types<wchar_t,std::allocator<wchar_t>\u0020>\u0020>.{dtor}), ptr2);
			throw;
		}
	}

	// Token: 0x06000080 RID: 128 RVA: 0x000B9BE0 File Offset: 0x000B8FE0
	internal unsafe static void _Tidy(_Func_class<System::Object\u0020^,PatcherManager\u0020*>* A_0)
	{
		long num = *(A_0 + 56L);
		if (((num == 0L) ? 1 : 0) == 0)
		{
			long num2 = num;
			long num3 = *(*num2 + 32L);
			byte b = ((((num == A_0) ? 1 : 0) == 0) ? 1 : 0);
			calli(System.Void modopt(System.Runtime.CompilerServices.CallConvCdecl)(System.IntPtr,System.Byte modopt(System.Runtime.CompilerServices.CompilerMarshalOverride)), (IntPtr)num2, b, num3);
			*(A_0 + 56L) = 0L;
		}
	}

	// Token: 0x06000081 RID: 129 RVA: 0x000BADCC File Offset: 0x000BA1CC
	internal unsafe static ObjectModule<PatcherNativeObject>* {ctor}(ObjectModule<PatcherNativeObject>* A_0)
	{
		<Module>.PatcherNativeObject.{ctor}(A_0);
		try
		{
			*A_0 = ref <Module>.??_7?$ObjectModule@VPatcherNativeObject@@@@6B@;
			ObjectModule<PatcherNativeObject>* ptr = A_0 + 72L;
			*ptr = 0L;
			shared_ptr<IniParser>* ptr2 = A_0 + 80L;
			*ptr2 = 0L;
			*(ptr2 + 8L) = 0L;
			try
			{
				*(A_0 + 96L) = ((IntPtr)GCHandle.Alloc(null)).ToPointer();
				try
				{
					if (<Module>.g_module_handle != null)
					{
						*ptr = <Module>.g_module_handle;
					}
				}
				catch
				{
					<Module>.___CxxCallUnwindDtor(ldftn(gcroot<LauncherView::App::AddWebBrowserCreateCallbackFn\u0020^>.{dtor}), (void*)(A_0 + (byte*)96L));
					throw;
				}
			}
			catch
			{
				<Module>.___CxxCallUnwindDtor(ldftn(std.shared_ptr<IniParser>.{dtor}), (void*)(A_0 + (byte*)80L));
				throw;
			}
		}
		catch
		{
			<Module>.___CxxCallUnwindDtor(ldftn(PatcherNativeObject.{dtor}), A_0);
			throw;
		}
		return A_0;
	}

	// Token: 0x06000082 RID: 130 RVA: 0x000B97B4 File Offset: 0x000B8BB4
	[DebuggerStepThrough]
	[SecurityCritical]
	internal unsafe static void {dtor}(gcroot<LauncherView::App::AddWebBrowserCreateCallbackFn\u0020^>* A_0)
	{
		IntPtr intPtr = new IntPtr(*A_0);
		((GCHandle)intPtr).Free();
		*A_0 = 0L;
	}

	// Token: 0x06000083 RID: 131 RVA: 0x000BA524 File Offset: 0x000B9924
	internal unsafe static PatcherNativeObject* {ctor}(PatcherNativeObject* A_0)
	{
		*A_0 = ref <Module>.??_7PatcherNativeObject@@6B@;
		<Module>.std.basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>.{ctor}(A_0 + 8L);
		try
		{
			<Module>.std.basic_string<char,std::char_traits<char>,std::allocator<char>\u0020>.{ctor}(A_0 + 40L);
		}
		catch
		{
			<Module>.___CxxCallUnwindDtor(ldftn(std.basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>.{dtor}), (void*)(A_0 + (byte*)8L));
			throw;
		}
		return A_0;
	}

	// Token: 0x06000084 RID: 132 RVA: 0x000BB974 File Offset: 0x000BAD74
	internal unsafe static void* __vecDelDtor(PatcherNativeObject* A_0, uint A_0)
	{
		if ((A_0 & 2U) != 0U)
		{
			PatcherNativeObject* ptr = A_0 - 8L;
			<Module>.__ehvec_dtor(A_0, 72UL, (ulong)(*ptr), ldftn(PatcherNativeObject.{dtor}));
			if ((A_0 & 1U) != 0U)
			{
				PatcherNativeObject* ptr2 = ptr;
				<Module>.delete[](ptr2, (ulong)(*ptr2 * 72L + 8L));
			}
			return ptr;
		}
		try
		{
			basic_string<char,std::char_traits<char>,std::allocator<char>\u0020>* ptr3 = A_0 + 40L;
			try
			{
				<Module>.std.basic_string<char,std::char_traits<char>,std::allocator<char>\u0020>._Tidy_deallocate(ptr3);
			}
			catch
			{
				<Module>.___CxxCallUnwindDtor(ldftn(std._String_alloc<std::_String_base_types<char,std::allocator<char>\u0020>\u0020>.{dtor}), ptr3);
				throw;
			}
		}
		catch
		{
			<Module>.___CxxCallUnwindDtor(ldftn(std.basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>.{dtor}), (void*)(A_0 + (byte*)8L));
			throw;
		}
		basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>* ptr4 = A_0 + 8L;
		try
		{
			<Module>.std.basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>._Tidy_deallocate(ptr4);
		}
		catch
		{
			<Module>.___CxxCallUnwindDtor(ldftn(std._String_alloc<std::_String_base_types<wchar_t,std::allocator<wchar_t>\u0020>\u0020>.{dtor}), ptr4);
			throw;
		}
		if ((A_0 & 1U) != 0U)
		{
			<Module>.delete(A_0, 72UL);
		}
		return A_0;
	}

	// Token: 0x06000085 RID: 133 RVA: 0x000B99F0 File Offset: 0x000B8DF0
	internal unsafe static void _Reset_copy(_Func_class<System::Object\u0020^,PatcherManager\u0020*>* A_0, _Func_class<System::Object\u0020^,PatcherManager\u0020*>* _Right)
	{
		long num = *(_Right + 56L);
		if (((num == 0L) ? 1 : 0) == 0)
		{
			long num2 = *(*num);
			*(A_0 + 56L) = calli(std._Func_base<System::Object ^,PatcherManager *>* modopt(System.Runtime.CompilerServices.CallConvCdecl)(System.IntPtr,System.Void*), (IntPtr)num, A_0, num2);
		}
	}

	// Token: 0x06000086 RID: 134 RVA: 0x000B9A20 File Offset: 0x000B8E20
	internal unsafe static object ()(_Func_class<System::Object\u0020^,PatcherManager\u0020*>* A_0, PatcherManager* <_Args_0>)
	{
		long num = *(A_0 + 56L);
		if (((num == 0L) ? 1 : 0) != 0)
		{
			<Module>.std._Xbad_function_call();
		}
		_Func_base<System::Object\u0020^,PatcherManager\u0020*>* ptr = num;
		long num2 = *(*ptr + 16L);
		return calli(System.Object(System.IntPtr,PatcherManager** modopt(System.Runtime.CompilerServices.IsImplicitlyDereferenced) modopt(System.Runtime.CompilerServices.IsImplicitlyDereferenced)), ptr, ref <_Args_0>, num2);
	}

	// Token: 0x06000087 RID: 135 RVA: 0x000BA100 File Offset: 0x000B9500
	internal unsafe static function<System::Object\u0020^\u0020__clrcall(PatcherManager\u0020*)>* {ctor}<class\u0020UpdateResult\u0020^\u0020(__clrcall*)(class\u0020PatcherManager\u0020*),void>(function<System::Object\u0020^\u0020__clrcall(PatcherManager\u0020*)>* A_0, method _Func)
	{
		function<System::Object\u0020^\u0020__clrcall(PatcherManager\u0020*)>* ptr = A_0 + 56L;
		*ptr = 0L;
		try
		{
			if (((_Func != 0L) ? 1 : 0) != 0)
			{
				*A_0 = (ref <Module>.??_7?$_Func_impl_no_alloc@P6MPE$AAVUpdateResult@@PEAVPatcherManager@@@ZPE$AAVObject@System@@PEAV2@@std@@6B@) + 8;
				*(A_0 + 8L) = _Func;
				*ptr = A_0;
			}
		}
		catch
		{
			<Module>.___CxxCallUnwindDtor(ldftn(std._Func_class<System::Object\u0020^,PatcherManager\u0020*>.{dtor}), A_0);
			throw;
		}
		return A_0;
	}

	// Token: 0x06000088 RID: 136 RVA: 0x000BA164 File Offset: 0x000B9564
	internal unsafe static function<System::Object\u0020^\u0020__clrcall(PatcherManager\u0020*)>* {ctor}<class\u0020SimpleCheckResult\u0020^\u0020(__clrcall*)(class\u0020PatcherManager\u0020*),void>(function<System::Object\u0020^\u0020__clrcall(PatcherManager\u0020*)>* A_0, method _Func)
	{
		function<System::Object\u0020^\u0020__clrcall(PatcherManager\u0020*)>* ptr = A_0 + 56L;
		*ptr = 0L;
		try
		{
			if (((_Func != 0L) ? 1 : 0) != 0)
			{
				*A_0 = (ref <Module>.??_7?$_Func_impl_no_alloc@P6MPE$AAVSimpleCheckResult@@PEAVPatcherManager@@@ZPE$AAVObject@System@@PEAV2@@std@@6B@) + 8;
				*(A_0 + 8L) = _Func;
				*ptr = A_0;
			}
		}
		catch
		{
			<Module>.___CxxCallUnwindDtor(ldftn(std._Func_class<System::Object\u0020^,PatcherManager\u0020*>.{dtor}), A_0);
			throw;
		}
		return A_0;
	}

	// Token: 0x06000089 RID: 137 RVA: 0x000BA1C8 File Offset: 0x000B95C8
	internal unsafe static function<System::Object\u0020^\u0020__clrcall(PatcherManager\u0020*)>* {ctor}<class\u0020FullCheckResult\u0020^\u0020(__clrcall*)(class\u0020PatcherManager\u0020*),void>(function<System::Object\u0020^\u0020__clrcall(PatcherManager\u0020*)>* A_0, method _Func)
	{
		function<System::Object\u0020^\u0020__clrcall(PatcherManager\u0020*)>* ptr = A_0 + 56L;
		*ptr = 0L;
		try
		{
			if (((_Func != 0L) ? 1 : 0) != 0)
			{
				*A_0 = (ref <Module>.??_7?$_Func_impl_no_alloc@P6MPE$AAVFullCheckResult@@PEAVPatcherManager@@@ZPE$AAVObject@System@@PEAV2@@std@@6B@) + 8;
				*(A_0 + 8L) = _Func;
				*ptr = A_0;
			}
		}
		catch
		{
			<Module>.___CxxCallUnwindDtor(ldftn(std._Func_class<System::Object\u0020^,PatcherManager\u0020*>.{dtor}), A_0);
			throw;
		}
		return A_0;
	}

	// Token: 0x0600008A RID: 138 RVA: 0x000B9D44 File Offset: 0x000B9144
	internal unsafe static void _Reset<class\u0020CheckUpdateResult\u0020^\u0020(__clrcall*)(class\u0020PatcherManager\u0020*)>(_Func_class<System::Object\u0020^,PatcherManager\u0020*>* A_0, method* _Val)
	{
		if (((*_Val != 0L) ? 1 : 0) != 0)
		{
			*A_0 = (ref <Module>.??_7?$_Func_impl_no_alloc@P6MPE$AAVCheckUpdateResult@@PEAVPatcherManager@@@ZPE$AAVObject@System@@PEAV2@@std@@6B@) + 8;
			*(A_0 + 8L) = *_Val;
			*(A_0 + 56L) = A_0;
		}
	}

	// Token: 0x0600008B RID: 139 RVA: 0x000B9D78 File Offset: 0x000B9178
	internal unsafe static void _Reset<class\u0020InstallResult\u0020^\u0020(__clrcall*)(class\u0020PatcherManager\u0020*)>(_Func_class<System::Object\u0020^,PatcherManager\u0020*>* A_0, method* _Val)
	{
		if (((*_Val != 0L) ? 1 : 0) != 0)
		{
			*A_0 = (ref <Module>.??_7?$_Func_impl_no_alloc@P6MPE$AAVInstallResult@@PEAVPatcherManager@@@ZPE$AAVObject@System@@PEAV2@@std@@6B@) + 8;
			*(A_0 + 8L) = *_Val;
			*(A_0 + 56L) = A_0;
		}
	}

	// Token: 0x0600008C RID: 140 RVA: 0x000B9C40 File Offset: 0x000B9040
	internal unsafe static void _Delete_this(_Func_impl_no_alloc<InstallResult\u0020^\u0020(__clrcall*)(PatcherManager\u0020*),System::Object\u0020^,PatcherManager\u0020*>* A_0, [MarshalAs(UnmanagedType.U1)] bool _Dealloc)
	{
		if (_Dealloc)
		{
			<Module>.delete(A_0, 16UL);
		}
	}

	// Token: 0x0600008D RID: 141 RVA: 0x000B9A9C File Offset: 0x000B8E9C
	internal unsafe static void* _Get(_Func_impl_no_alloc<InstallResult\u0020^\u0020(__clrcall*)(PatcherManager\u0020*),System::Object\u0020^,PatcherManager\u0020*>* A_0)
	{
		return A_0 + 8L;
	}

	// Token: 0x0600008E RID: 142 RVA: 0x000B9880 File Offset: 0x000B8C80
	internal unsafe static type_info* _Target_type(_Func_impl_no_alloc<InstallResult\u0020^\u0020(__clrcall*)(PatcherManager\u0020*),System::Object\u0020^,PatcherManager\u0020*>* A_0)
	{
		return ref <Module>.??_R0P6MPE$AAVInstallResult@@PEAVPatcherManager@@@Z@8;
	}

	// Token: 0x0600008F RID: 143 RVA: 0x000B9C60 File Offset: 0x000B9060
	internal unsafe static _Func_base<System::Object\u0020^,PatcherManager\u0020*>* _Move(_Func_impl_no_alloc<InstallResult\u0020^\u0020(__clrcall*)(PatcherManager\u0020*),System::Object\u0020^,PatcherManager\u0020*>* A_0, void* _Where)
	{
		*(long*)_Where = (ref <Module>.??_7?$_Func_impl_no_alloc@P6MPE$AAVInstallResult@@PEAVPatcherManager@@@ZPE$AAVObject@System@@PEAV2@@std@@6B@) + 8;
		*(long*)((byte*)_Where + 8L) = *(A_0 + 8L);
		return _Where;
	}

	// Token: 0x06000090 RID: 144 RVA: 0x000B9C60 File Offset: 0x000B9060
	internal unsafe static _Func_base<System::Object\u0020^,PatcherManager\u0020*>* _Copy(_Func_impl_no_alloc<InstallResult\u0020^\u0020(__clrcall*)(PatcherManager\u0020*),System::Object\u0020^,PatcherManager\u0020*>* A_0, void* _Where)
	{
		*(long*)_Where = (ref <Module>.??_7?$_Func_impl_no_alloc@P6MPE$AAVInstallResult@@PEAVPatcherManager@@@ZPE$AAVObject@System@@PEAV2@@std@@6B@) + 8;
		*(long*)((byte*)_Where + 8L) = *(A_0 + 8L);
		return _Where;
	}

	// Token: 0x06000091 RID: 145 RVA: 0x000B9C40 File Offset: 0x000B9040
	internal unsafe static void _Delete_this(_Func_impl_no_alloc<FullCheckResult\u0020^\u0020(__clrcall*)(PatcherManager\u0020*),System::Object\u0020^,PatcherManager\u0020*>* A_0, [MarshalAs(UnmanagedType.U1)] bool _Dealloc)
	{
		if (_Dealloc)
		{
			<Module>.delete(A_0, 16UL);
		}
	}

	// Token: 0x06000092 RID: 146 RVA: 0x000B9A9C File Offset: 0x000B8E9C
	internal unsafe static void* _Get(_Func_impl_no_alloc<FullCheckResult\u0020^\u0020(__clrcall*)(PatcherManager\u0020*),System::Object\u0020^,PatcherManager\u0020*>* A_0)
	{
		return A_0 + 8L;
	}

	// Token: 0x06000093 RID: 147 RVA: 0x000B9894 File Offset: 0x000B8C94
	internal unsafe static type_info* _Target_type(_Func_impl_no_alloc<FullCheckResult\u0020^\u0020(__clrcall*)(PatcherManager\u0020*),System::Object\u0020^,PatcherManager\u0020*>* A_0)
	{
		return ref <Module>.??_R0P6MPE$AAVFullCheckResult@@PEAVPatcherManager@@@Z@8;
	}

	// Token: 0x06000094 RID: 148 RVA: 0x000B9C84 File Offset: 0x000B9084
	internal unsafe static _Func_base<System::Object\u0020^,PatcherManager\u0020*>* _Move(_Func_impl_no_alloc<FullCheckResult\u0020^\u0020(__clrcall*)(PatcherManager\u0020*),System::Object\u0020^,PatcherManager\u0020*>* A_0, void* _Where)
	{
		*(long*)_Where = (ref <Module>.??_7?$_Func_impl_no_alloc@P6MPE$AAVFullCheckResult@@PEAVPatcherManager@@@ZPE$AAVObject@System@@PEAV2@@std@@6B@) + 8;
		*(long*)((byte*)_Where + 8L) = *(A_0 + 8L);
		return _Where;
	}

	// Token: 0x06000095 RID: 149 RVA: 0x000B9C84 File Offset: 0x000B9084
	internal unsafe static _Func_base<System::Object\u0020^,PatcherManager\u0020*>* _Copy(_Func_impl_no_alloc<FullCheckResult\u0020^\u0020(__clrcall*)(PatcherManager\u0020*),System::Object\u0020^,PatcherManager\u0020*>* A_0, void* _Where)
	{
		*(long*)_Where = (ref <Module>.??_7?$_Func_impl_no_alloc@P6MPE$AAVFullCheckResult@@PEAVPatcherManager@@@ZPE$AAVObject@System@@PEAV2@@std@@6B@) + 8;
		*(long*)((byte*)_Where + 8L) = *(A_0 + 8L);
		return _Where;
	}

	// Token: 0x06000096 RID: 150 RVA: 0x000B9C40 File Offset: 0x000B9040
	internal unsafe static void _Delete_this(_Func_impl_no_alloc<SimpleCheckResult\u0020^\u0020(__clrcall*)(PatcherManager\u0020*),System::Object\u0020^,PatcherManager\u0020*>* A_0, [MarshalAs(UnmanagedType.U1)] bool _Dealloc)
	{
		if (_Dealloc)
		{
			<Module>.delete(A_0, 16UL);
		}
	}

	// Token: 0x06000097 RID: 151 RVA: 0x000B9A9C File Offset: 0x000B8E9C
	internal unsafe static void* _Get(_Func_impl_no_alloc<SimpleCheckResult\u0020^\u0020(__clrcall*)(PatcherManager\u0020*),System::Object\u0020^,PatcherManager\u0020*>* A_0)
	{
		return A_0 + 8L;
	}

	// Token: 0x06000098 RID: 152 RVA: 0x000B98A8 File Offset: 0x000B8CA8
	internal unsafe static type_info* _Target_type(_Func_impl_no_alloc<SimpleCheckResult\u0020^\u0020(__clrcall*)(PatcherManager\u0020*),System::Object\u0020^,PatcherManager\u0020*>* A_0)
	{
		return ref <Module>.??_R0P6MPE$AAVSimpleCheckResult@@PEAVPatcherManager@@@Z@8;
	}

	// Token: 0x06000099 RID: 153 RVA: 0x000B9CA8 File Offset: 0x000B90A8
	internal unsafe static _Func_base<System::Object\u0020^,PatcherManager\u0020*>* _Move(_Func_impl_no_alloc<SimpleCheckResult\u0020^\u0020(__clrcall*)(PatcherManager\u0020*),System::Object\u0020^,PatcherManager\u0020*>* A_0, void* _Where)
	{
		*(long*)_Where = (ref <Module>.??_7?$_Func_impl_no_alloc@P6MPE$AAVSimpleCheckResult@@PEAVPatcherManager@@@ZPE$AAVObject@System@@PEAV2@@std@@6B@) + 8;
		*(long*)((byte*)_Where + 8L) = *(A_0 + 8L);
		return _Where;
	}

	// Token: 0x0600009A RID: 154 RVA: 0x000B9CA8 File Offset: 0x000B90A8
	internal unsafe static _Func_base<System::Object\u0020^,PatcherManager\u0020*>* _Copy(_Func_impl_no_alloc<SimpleCheckResult\u0020^\u0020(__clrcall*)(PatcherManager\u0020*),System::Object\u0020^,PatcherManager\u0020*>* A_0, void* _Where)
	{
		*(long*)_Where = (ref <Module>.??_7?$_Func_impl_no_alloc@P6MPE$AAVSimpleCheckResult@@PEAVPatcherManager@@@ZPE$AAVObject@System@@PEAV2@@std@@6B@) + 8;
		*(long*)((byte*)_Where + 8L) = *(A_0 + 8L);
		return _Where;
	}

	// Token: 0x0600009B RID: 155 RVA: 0x000B9C40 File Offset: 0x000B9040
	internal unsafe static void _Delete_this(_Func_impl_no_alloc<UpdateResult\u0020^\u0020(__clrcall*)(PatcherManager\u0020*),System::Object\u0020^,PatcherManager\u0020*>* A_0, [MarshalAs(UnmanagedType.U1)] bool _Dealloc)
	{
		if (_Dealloc)
		{
			<Module>.delete(A_0, 16UL);
		}
	}

	// Token: 0x0600009C RID: 156 RVA: 0x000B9A9C File Offset: 0x000B8E9C
	internal unsafe static void* _Get(_Func_impl_no_alloc<UpdateResult\u0020^\u0020(__clrcall*)(PatcherManager\u0020*),System::Object\u0020^,PatcherManager\u0020*>* A_0)
	{
		return A_0 + 8L;
	}

	// Token: 0x0600009D RID: 157 RVA: 0x000B98BC File Offset: 0x000B8CBC
	internal unsafe static type_info* _Target_type(_Func_impl_no_alloc<UpdateResult\u0020^\u0020(__clrcall*)(PatcherManager\u0020*),System::Object\u0020^,PatcherManager\u0020*>* A_0)
	{
		return ref <Module>.??_R0P6MPE$AAVUpdateResult@@PEAVPatcherManager@@@Z@8;
	}

	// Token: 0x0600009E RID: 158 RVA: 0x000B9CCC File Offset: 0x000B90CC
	internal unsafe static _Func_base<System::Object\u0020^,PatcherManager\u0020*>* _Move(_Func_impl_no_alloc<UpdateResult\u0020^\u0020(__clrcall*)(PatcherManager\u0020*),System::Object\u0020^,PatcherManager\u0020*>* A_0, void* _Where)
	{
		*(long*)_Where = (ref <Module>.??_7?$_Func_impl_no_alloc@P6MPE$AAVUpdateResult@@PEAVPatcherManager@@@ZPE$AAVObject@System@@PEAV2@@std@@6B@) + 8;
		*(long*)((byte*)_Where + 8L) = *(A_0 + 8L);
		return _Where;
	}

	// Token: 0x0600009F RID: 159 RVA: 0x000B9CCC File Offset: 0x000B90CC
	internal unsafe static _Func_base<System::Object\u0020^,PatcherManager\u0020*>* _Copy(_Func_impl_no_alloc<UpdateResult\u0020^\u0020(__clrcall*)(PatcherManager\u0020*),System::Object\u0020^,PatcherManager\u0020*>* A_0, void* _Where)
	{
		*(long*)_Where = (ref <Module>.??_7?$_Func_impl_no_alloc@P6MPE$AAVUpdateResult@@PEAVPatcherManager@@@ZPE$AAVObject@System@@PEAV2@@std@@6B@) + 8;
		*(long*)((byte*)_Where + 8L) = *(A_0 + 8L);
		return _Where;
	}

	// Token: 0x060000A0 RID: 160 RVA: 0x000B9C40 File Offset: 0x000B9040
	internal unsafe static void _Delete_this(_Func_impl_no_alloc<CheckUpdateResult\u0020^\u0020(__clrcall*)(PatcherManager\u0020*),System::Object\u0020^,PatcherManager\u0020*>* A_0, [MarshalAs(UnmanagedType.U1)] bool _Dealloc)
	{
		if (_Dealloc)
		{
			<Module>.delete(A_0, 16UL);
		}
	}

	// Token: 0x060000A1 RID: 161 RVA: 0x000B9A9C File Offset: 0x000B8E9C
	internal unsafe static void* _Get(_Func_impl_no_alloc<CheckUpdateResult\u0020^\u0020(__clrcall*)(PatcherManager\u0020*),System::Object\u0020^,PatcherManager\u0020*>* A_0)
	{
		return A_0 + 8L;
	}

	// Token: 0x060000A2 RID: 162 RVA: 0x000B98D0 File Offset: 0x000B8CD0
	internal unsafe static type_info* _Target_type(_Func_impl_no_alloc<CheckUpdateResult\u0020^\u0020(__clrcall*)(PatcherManager\u0020*),System::Object\u0020^,PatcherManager\u0020*>* A_0)
	{
		return ref <Module>.??_R0P6MPE$AAVCheckUpdateResult@@PEAVPatcherManager@@@Z@8;
	}

	// Token: 0x060000A3 RID: 163 RVA: 0x000B9CF0 File Offset: 0x000B90F0
	internal unsafe static _Func_base<System::Object\u0020^,PatcherManager\u0020*>* _Move(_Func_impl_no_alloc<CheckUpdateResult\u0020^\u0020(__clrcall*)(PatcherManager\u0020*),System::Object\u0020^,PatcherManager\u0020*>* A_0, void* _Where)
	{
		*(long*)_Where = (ref <Module>.??_7?$_Func_impl_no_alloc@P6MPE$AAVCheckUpdateResult@@PEAVPatcherManager@@@ZPE$AAVObject@System@@PEAV2@@std@@6B@) + 8;
		*(long*)((byte*)_Where + 8L) = *(A_0 + 8L);
		return _Where;
	}

	// Token: 0x060000A4 RID: 164 RVA: 0x000B9CF0 File Offset: 0x000B90F0
	internal unsafe static _Func_base<System::Object\u0020^,PatcherManager\u0020*>* _Copy(_Func_impl_no_alloc<CheckUpdateResult\u0020^\u0020(__clrcall*)(PatcherManager\u0020*),System::Object\u0020^,PatcherManager\u0020*>* A_0, void* _Where)
	{
		*(long*)_Where = (ref <Module>.??_7?$_Func_impl_no_alloc@P6MPE$AAVCheckUpdateResult@@PEAVPatcherManager@@@ZPE$AAVObject@System@@PEAV2@@std@@6B@) + 8;
		*(long*)((byte*)_Where + 8L) = *(A_0 + 8L);
		return _Where;
	}

	// Token: 0x060000A5 RID: 165 RVA: 0x000B9DAC File Offset: 0x000B91AC
	internal unsafe static object _Do_call(_Func_impl_no_alloc<CheckUpdateResult\u0020^\u0020(__clrcall*)(PatcherManager\u0020*),System::Object\u0020^,PatcherManager\u0020*>* A_0, PatcherManager** <_Args_0>)
	{
		ulong num = (ulong)(*(A_0 + 8L));
		return calli(CheckUpdateResult(PatcherManager*), *<_Args_0>, num);
	}

	// Token: 0x060000A6 RID: 166 RVA: 0x000B9DC8 File Offset: 0x000B91C8
	internal unsafe static object _Do_call(_Func_impl_no_alloc<UpdateResult\u0020^\u0020(__clrcall*)(PatcherManager\u0020*),System::Object\u0020^,PatcherManager\u0020*>* A_0, PatcherManager** <_Args_0>)
	{
		ulong num = (ulong)(*(A_0 + 8L));
		return calli(UpdateResult(PatcherManager*), *<_Args_0>, num);
	}

	// Token: 0x060000A7 RID: 167 RVA: 0x000B9DE4 File Offset: 0x000B91E4
	internal unsafe static object _Do_call(_Func_impl_no_alloc<SimpleCheckResult\u0020^\u0020(__clrcall*)(PatcherManager\u0020*),System::Object\u0020^,PatcherManager\u0020*>* A_0, PatcherManager** <_Args_0>)
	{
		ulong num = (ulong)(*(A_0 + 8L));
		return calli(SimpleCheckResult(PatcherManager*), *<_Args_0>, num);
	}

	// Token: 0x060000A8 RID: 168 RVA: 0x000B9E00 File Offset: 0x000B9200
	internal unsafe static object _Do_call(_Func_impl_no_alloc<FullCheckResult\u0020^\u0020(__clrcall*)(PatcherManager\u0020*),System::Object\u0020^,PatcherManager\u0020*>* A_0, PatcherManager** <_Args_0>)
	{
		ulong num = (ulong)(*(A_0 + 8L));
		return calli(FullCheckResult(PatcherManager*), *<_Args_0>, num);
	}

	// Token: 0x060000A9 RID: 169 RVA: 0x000B9E1C File Offset: 0x000B921C
	internal unsafe static object _Do_call(_Func_impl_no_alloc<InstallResult\u0020^\u0020(__clrcall*)(PatcherManager\u0020*),System::Object\u0020^,PatcherManager\u0020*>* A_0, PatcherManager** <_Args_0>)
	{
		ulong num = (ulong)(*(A_0 + 8L));
		return calli(InstallResult(PatcherManager*), *<_Args_0>, num);
	}

	// Token: 0x060000AA RID: 170 RVA: 0x000010EC File Offset: 0x000004EC
	internal unsafe static void ??__E??_7?$_Func_impl_no_alloc@P6MPE$AAVCheckUpdateResult@@PEAVPatcherManager@@@ZPE$AAVObject@System@@PEAV2@@std@@6B@@@YMXXZ()
	{
		<Module>.??_7?$_Func_impl_no_alloc@P6MPE$AAVCheckUpdateResult@@PEAVPatcherManager@@@ZPE$AAVObject@System@@PEAV2@@std@@6B@ = ref <Module>.??_R4?$_Func_impl_no_alloc@P6MPE$AAVCheckUpdateResult@@PEAVPatcherManager@@@ZPE$AAVObject@System@@PEAV2@@std@@6B@;
		*((ref <Module>.??_7?$_Func_impl_no_alloc@P6MPE$AAVCheckUpdateResult@@PEAVPatcherManager@@@ZPE$AAVObject@System@@PEAV2@@std@@6B@) + 8) = <Module>.__unep@?_Copy@?$_Func_impl_no_alloc@P6MPE$AAVCheckUpdateResult@@PEAVPatcherManager@@@ZPE$AAVObject@System@@PEAV2@@std@@$$FEEBAPEAV?$_Func_base@PE$AAVObject@System@@PEAVPatcherManager@@@2@PEAX@Z;
		*((ref <Module>.??_7?$_Func_impl_no_alloc@P6MPE$AAVCheckUpdateResult@@PEAVPatcherManager@@@ZPE$AAVObject@System@@PEAV2@@std@@6B@) + 16) = <Module>.__unep@?_Move@?$_Func_impl_no_alloc@P6MPE$AAVCheckUpdateResult@@PEAVPatcherManager@@@ZPE$AAVObject@System@@PEAV2@@std@@$$FEEAAPEAV?$_Func_base@PE$AAVObject@System@@PEAVPatcherManager@@@2@PEAX@Z;
		*((ref <Module>.??_7?$_Func_impl_no_alloc@P6MPE$AAVCheckUpdateResult@@PEAVPatcherManager@@@ZPE$AAVObject@System@@PEAV2@@std@@6B@) + 24) = (long)ldftn(std._Func_impl_no_alloc<CheckUpdateResult\u0020^\u0020(__clrcall*)(PatcherManager\u0020*),System::Object\u0020^,PatcherManager\u0020*>._Do_call);
		*((ref <Module>.??_7?$_Func_impl_no_alloc@P6MPE$AAVCheckUpdateResult@@PEAVPatcherManager@@@ZPE$AAVObject@System@@PEAV2@@std@@6B@) + 32) = <Module>.__unep@?_Target_type@?$_Func_impl_no_alloc@P6MPE$AAVCheckUpdateResult@@PEAVPatcherManager@@@ZPE$AAVObject@System@@PEAV2@@std@@$$FEEBAAEBVtype_info@@XZ;
		*((ref <Module>.??_7?$_Func_impl_no_alloc@P6MPE$AAVCheckUpdateResult@@PEAVPatcherManager@@@ZPE$AAVObject@System@@PEAV2@@std@@6B@) + 40) = <Module>.__unep@?_Delete_this@?$_Func_impl_no_alloc@P6MPE$AAVCheckUpdateResult@@PEAVPatcherManager@@@ZPE$AAVObject@System@@PEAV2@@std@@$$FEEAAX_N@Z;
		*((ref <Module>.??_7?$_Func_impl_no_alloc@P6MPE$AAVCheckUpdateResult@@PEAVPatcherManager@@@ZPE$AAVObject@System@@PEAV2@@std@@6B@) + 48) = <Module>.__unep@?_Get@?$_Func_impl_no_alloc@P6MPE$AAVCheckUpdateResult@@PEAVPatcherManager@@@ZPE$AAVObject@System@@PEAV2@@std@@$$FEEBAPEBXXZ;
	}

	// Token: 0x060000AB RID: 171 RVA: 0x00001158 File Offset: 0x00000558
	internal unsafe static void ??__E??_7?$_Func_impl_no_alloc@P6MPE$AAVUpdateResult@@PEAVPatcherManager@@@ZPE$AAVObject@System@@PEAV2@@std@@6B@@@YMXXZ()
	{
		<Module>.??_7?$_Func_impl_no_alloc@P6MPE$AAVUpdateResult@@PEAVPatcherManager@@@ZPE$AAVObject@System@@PEAV2@@std@@6B@ = ref <Module>.??_R4?$_Func_impl_no_alloc@P6MPE$AAVUpdateResult@@PEAVPatcherManager@@@ZPE$AAVObject@System@@PEAV2@@std@@6B@;
		*((ref <Module>.??_7?$_Func_impl_no_alloc@P6MPE$AAVUpdateResult@@PEAVPatcherManager@@@ZPE$AAVObject@System@@PEAV2@@std@@6B@) + 8) = <Module>.__unep@?_Copy@?$_Func_impl_no_alloc@P6MPE$AAVUpdateResult@@PEAVPatcherManager@@@ZPE$AAVObject@System@@PEAV2@@std@@$$FEEBAPEAV?$_Func_base@PE$AAVObject@System@@PEAVPatcherManager@@@2@PEAX@Z;
		*((ref <Module>.??_7?$_Func_impl_no_alloc@P6MPE$AAVUpdateResult@@PEAVPatcherManager@@@ZPE$AAVObject@System@@PEAV2@@std@@6B@) + 16) = <Module>.__unep@?_Move@?$_Func_impl_no_alloc@P6MPE$AAVUpdateResult@@PEAVPatcherManager@@@ZPE$AAVObject@System@@PEAV2@@std@@$$FEEAAPEAV?$_Func_base@PE$AAVObject@System@@PEAVPatcherManager@@@2@PEAX@Z;
		*((ref <Module>.??_7?$_Func_impl_no_alloc@P6MPE$AAVUpdateResult@@PEAVPatcherManager@@@ZPE$AAVObject@System@@PEAV2@@std@@6B@) + 24) = (long)ldftn(std._Func_impl_no_alloc<UpdateResult\u0020^\u0020(__clrcall*)(PatcherManager\u0020*),System::Object\u0020^,PatcherManager\u0020*>._Do_call);
		*((ref <Module>.??_7?$_Func_impl_no_alloc@P6MPE$AAVUpdateResult@@PEAVPatcherManager@@@ZPE$AAVObject@System@@PEAV2@@std@@6B@) + 32) = <Module>.__unep@?_Target_type@?$_Func_impl_no_alloc@P6MPE$AAVUpdateResult@@PEAVPatcherManager@@@ZPE$AAVObject@System@@PEAV2@@std@@$$FEEBAAEBVtype_info@@XZ;
		*((ref <Module>.??_7?$_Func_impl_no_alloc@P6MPE$AAVUpdateResult@@PEAVPatcherManager@@@ZPE$AAVObject@System@@PEAV2@@std@@6B@) + 40) = <Module>.__unep@?_Delete_this@?$_Func_impl_no_alloc@P6MPE$AAVUpdateResult@@PEAVPatcherManager@@@ZPE$AAVObject@System@@PEAV2@@std@@$$FEEAAX_N@Z;
		*((ref <Module>.??_7?$_Func_impl_no_alloc@P6MPE$AAVUpdateResult@@PEAVPatcherManager@@@ZPE$AAVObject@System@@PEAV2@@std@@6B@) + 48) = <Module>.__unep@?_Get@?$_Func_impl_no_alloc@P6MPE$AAVUpdateResult@@PEAVPatcherManager@@@ZPE$AAVObject@System@@PEAV2@@std@@$$FEEBAPEBXXZ;
	}

	// Token: 0x060000AC RID: 172 RVA: 0x000011C4 File Offset: 0x000005C4
	internal unsafe static void ??__E??_7?$_Func_impl_no_alloc@P6MPE$AAVSimpleCheckResult@@PEAVPatcherManager@@@ZPE$AAVObject@System@@PEAV2@@std@@6B@@@YMXXZ()
	{
		<Module>.??_7?$_Func_impl_no_alloc@P6MPE$AAVSimpleCheckResult@@PEAVPatcherManager@@@ZPE$AAVObject@System@@PEAV2@@std@@6B@ = ref <Module>.??_R4?$_Func_impl_no_alloc@P6MPE$AAVSimpleCheckResult@@PEAVPatcherManager@@@ZPE$AAVObject@System@@PEAV2@@std@@6B@;
		*((ref <Module>.??_7?$_Func_impl_no_alloc@P6MPE$AAVSimpleCheckResult@@PEAVPatcherManager@@@ZPE$AAVObject@System@@PEAV2@@std@@6B@) + 8) = <Module>.__unep@?_Copy@?$_Func_impl_no_alloc@P6MPE$AAVSimpleCheckResult@@PEAVPatcherManager@@@ZPE$AAVObject@System@@PEAV2@@std@@$$FEEBAPEAV?$_Func_base@PE$AAVObject@System@@PEAVPatcherManager@@@2@PEAX@Z;
		*((ref <Module>.??_7?$_Func_impl_no_alloc@P6MPE$AAVSimpleCheckResult@@PEAVPatcherManager@@@ZPE$AAVObject@System@@PEAV2@@std@@6B@) + 16) = <Module>.__unep@?_Move@?$_Func_impl_no_alloc@P6MPE$AAVSimpleCheckResult@@PEAVPatcherManager@@@ZPE$AAVObject@System@@PEAV2@@std@@$$FEEAAPEAV?$_Func_base@PE$AAVObject@System@@PEAVPatcherManager@@@2@PEAX@Z;
		*((ref <Module>.??_7?$_Func_impl_no_alloc@P6MPE$AAVSimpleCheckResult@@PEAVPatcherManager@@@ZPE$AAVObject@System@@PEAV2@@std@@6B@) + 24) = (long)ldftn(std._Func_impl_no_alloc<SimpleCheckResult\u0020^\u0020(__clrcall*)(PatcherManager\u0020*),System::Object\u0020^,PatcherManager\u0020*>._Do_call);
		*((ref <Module>.??_7?$_Func_impl_no_alloc@P6MPE$AAVSimpleCheckResult@@PEAVPatcherManager@@@ZPE$AAVObject@System@@PEAV2@@std@@6B@) + 32) = <Module>.__unep@?_Target_type@?$_Func_impl_no_alloc@P6MPE$AAVSimpleCheckResult@@PEAVPatcherManager@@@ZPE$AAVObject@System@@PEAV2@@std@@$$FEEBAAEBVtype_info@@XZ;
		*((ref <Module>.??_7?$_Func_impl_no_alloc@P6MPE$AAVSimpleCheckResult@@PEAVPatcherManager@@@ZPE$AAVObject@System@@PEAV2@@std@@6B@) + 40) = <Module>.__unep@?_Delete_this@?$_Func_impl_no_alloc@P6MPE$AAVSimpleCheckResult@@PEAVPatcherManager@@@ZPE$AAVObject@System@@PEAV2@@std@@$$FEEAAX_N@Z;
		*((ref <Module>.??_7?$_Func_impl_no_alloc@P6MPE$AAVSimpleCheckResult@@PEAVPatcherManager@@@ZPE$AAVObject@System@@PEAV2@@std@@6B@) + 48) = <Module>.__unep@?_Get@?$_Func_impl_no_alloc@P6MPE$AAVSimpleCheckResult@@PEAVPatcherManager@@@ZPE$AAVObject@System@@PEAV2@@std@@$$FEEBAPEBXXZ;
	}

	// Token: 0x060000AD RID: 173 RVA: 0x00001230 File Offset: 0x00000630
	internal unsafe static void ??__E??_7?$_Func_impl_no_alloc@P6MPE$AAVFullCheckResult@@PEAVPatcherManager@@@ZPE$AAVObject@System@@PEAV2@@std@@6B@@@YMXXZ()
	{
		<Module>.??_7?$_Func_impl_no_alloc@P6MPE$AAVFullCheckResult@@PEAVPatcherManager@@@ZPE$AAVObject@System@@PEAV2@@std@@6B@ = ref <Module>.??_R4?$_Func_impl_no_alloc@P6MPE$AAVFullCheckResult@@PEAVPatcherManager@@@ZPE$AAVObject@System@@PEAV2@@std@@6B@;
		*((ref <Module>.??_7?$_Func_impl_no_alloc@P6MPE$AAVFullCheckResult@@PEAVPatcherManager@@@ZPE$AAVObject@System@@PEAV2@@std@@6B@) + 8) = <Module>.__unep@?_Copy@?$_Func_impl_no_alloc@P6MPE$AAVFullCheckResult@@PEAVPatcherManager@@@ZPE$AAVObject@System@@PEAV2@@std@@$$FEEBAPEAV?$_Func_base@PE$AAVObject@System@@PEAVPatcherManager@@@2@PEAX@Z;
		*((ref <Module>.??_7?$_Func_impl_no_alloc@P6MPE$AAVFullCheckResult@@PEAVPatcherManager@@@ZPE$AAVObject@System@@PEAV2@@std@@6B@) + 16) = <Module>.__unep@?_Move@?$_Func_impl_no_alloc@P6MPE$AAVFullCheckResult@@PEAVPatcherManager@@@ZPE$AAVObject@System@@PEAV2@@std@@$$FEEAAPEAV?$_Func_base@PE$AAVObject@System@@PEAVPatcherManager@@@2@PEAX@Z;
		*((ref <Module>.??_7?$_Func_impl_no_alloc@P6MPE$AAVFullCheckResult@@PEAVPatcherManager@@@ZPE$AAVObject@System@@PEAV2@@std@@6B@) + 24) = (long)ldftn(std._Func_impl_no_alloc<FullCheckResult\u0020^\u0020(__clrcall*)(PatcherManager\u0020*),System::Object\u0020^,PatcherManager\u0020*>._Do_call);
		*((ref <Module>.??_7?$_Func_impl_no_alloc@P6MPE$AAVFullCheckResult@@PEAVPatcherManager@@@ZPE$AAVObject@System@@PEAV2@@std@@6B@) + 32) = <Module>.__unep@?_Target_type@?$_Func_impl_no_alloc@P6MPE$AAVFullCheckResult@@PEAVPatcherManager@@@ZPE$AAVObject@System@@PEAV2@@std@@$$FEEBAAEBVtype_info@@XZ;
		*((ref <Module>.??_7?$_Func_impl_no_alloc@P6MPE$AAVFullCheckResult@@PEAVPatcherManager@@@ZPE$AAVObject@System@@PEAV2@@std@@6B@) + 40) = <Module>.__unep@?_Delete_this@?$_Func_impl_no_alloc@P6MPE$AAVFullCheckResult@@PEAVPatcherManager@@@ZPE$AAVObject@System@@PEAV2@@std@@$$FEEAAX_N@Z;
		*((ref <Module>.??_7?$_Func_impl_no_alloc@P6MPE$AAVFullCheckResult@@PEAVPatcherManager@@@ZPE$AAVObject@System@@PEAV2@@std@@6B@) + 48) = <Module>.__unep@?_Get@?$_Func_impl_no_alloc@P6MPE$AAVFullCheckResult@@PEAVPatcherManager@@@ZPE$AAVObject@System@@PEAV2@@std@@$$FEEBAPEBXXZ;
	}

	// Token: 0x060000AE RID: 174 RVA: 0x0000129C File Offset: 0x0000069C
	internal unsafe static void ??__E??_7?$_Func_impl_no_alloc@P6MPE$AAVInstallResult@@PEAVPatcherManager@@@ZPE$AAVObject@System@@PEAV2@@std@@6B@@@YMXXZ()
	{
		<Module>.??_7?$_Func_impl_no_alloc@P6MPE$AAVInstallResult@@PEAVPatcherManager@@@ZPE$AAVObject@System@@PEAV2@@std@@6B@ = ref <Module>.??_R4?$_Func_impl_no_alloc@P6MPE$AAVInstallResult@@PEAVPatcherManager@@@ZPE$AAVObject@System@@PEAV2@@std@@6B@;
		*((ref <Module>.??_7?$_Func_impl_no_alloc@P6MPE$AAVInstallResult@@PEAVPatcherManager@@@ZPE$AAVObject@System@@PEAV2@@std@@6B@) + 8) = <Module>.__unep@?_Copy@?$_Func_impl_no_alloc@P6MPE$AAVInstallResult@@PEAVPatcherManager@@@ZPE$AAVObject@System@@PEAV2@@std@@$$FEEBAPEAV?$_Func_base@PE$AAVObject@System@@PEAVPatcherManager@@@2@PEAX@Z;
		*((ref <Module>.??_7?$_Func_impl_no_alloc@P6MPE$AAVInstallResult@@PEAVPatcherManager@@@ZPE$AAVObject@System@@PEAV2@@std@@6B@) + 16) = <Module>.__unep@?_Move@?$_Func_impl_no_alloc@P6MPE$AAVInstallResult@@PEAVPatcherManager@@@ZPE$AAVObject@System@@PEAV2@@std@@$$FEEAAPEAV?$_Func_base@PE$AAVObject@System@@PEAVPatcherManager@@@2@PEAX@Z;
		*((ref <Module>.??_7?$_Func_impl_no_alloc@P6MPE$AAVInstallResult@@PEAVPatcherManager@@@ZPE$AAVObject@System@@PEAV2@@std@@6B@) + 24) = (long)ldftn(std._Func_impl_no_alloc<InstallResult\u0020^\u0020(__clrcall*)(PatcherManager\u0020*),System::Object\u0020^,PatcherManager\u0020*>._Do_call);
		*((ref <Module>.??_7?$_Func_impl_no_alloc@P6MPE$AAVInstallResult@@PEAVPatcherManager@@@ZPE$AAVObject@System@@PEAV2@@std@@6B@) + 32) = <Module>.__unep@?_Target_type@?$_Func_impl_no_alloc@P6MPE$AAVInstallResult@@PEAVPatcherManager@@@ZPE$AAVObject@System@@PEAV2@@std@@$$FEEBAAEBVtype_info@@XZ;
		*((ref <Module>.??_7?$_Func_impl_no_alloc@P6MPE$AAVInstallResult@@PEAVPatcherManager@@@ZPE$AAVObject@System@@PEAV2@@std@@6B@) + 40) = <Module>.__unep@?_Delete_this@?$_Func_impl_no_alloc@P6MPE$AAVInstallResult@@PEAVPatcherManager@@@ZPE$AAVObject@System@@PEAV2@@std@@$$FEEAAX_N@Z;
		*((ref <Module>.??_7?$_Func_impl_no_alloc@P6MPE$AAVInstallResult@@PEAVPatcherManager@@@ZPE$AAVObject@System@@PEAV2@@std@@6B@) + 48) = <Module>.__unep@?_Get@?$_Func_impl_no_alloc@P6MPE$AAVInstallResult@@PEAVPatcherManager@@@ZPE$AAVObject@System@@PEAV2@@std@@$$FEEBAPEBXXZ;
	}

	// Token: 0x060000AF RID: 175 RVA: 0x000BA22C File Offset: 0x000B962C
	internal unsafe static basic_string<char,std::char_traits<char>,std::allocator<char>\u0020>* {ctor}(basic_string<char,std::char_traits<char>,std::allocator<char>\u0020>* A_0)
	{
		basic_string<char,std::char_traits<char>,std::allocator<char>\u0020>* ptr;
		basic_string<char,std::char_traits<char>,std::allocator<char>\u0020>* ptr2;
		try
		{
			ptr = A_0 + 16L;
			*ptr = 0L;
			ptr2 = A_0 + 24L;
			*ptr2 = 0L;
		}
		catch
		{
			<Module>.___CxxCallUnwindDtor(ldftn(std._String_val<std::_Simple_types<char>\u0020>._Bxty.{dtor}), A_0);
			throw;
		}
		try
		{
			*ptr = 0L;
			*ptr2 = 15L;
			*A_0 = 0;
		}
		catch
		{
			<Module>.___CxxCallUnwindDtor(ldftn(std._String_alloc<std::_String_base_types<char,std::allocator<char>\u0020>\u0020>.{dtor}), A_0);
			throw;
		}
		return A_0;
	}

	// Token: 0x060000B0 RID: 176 RVA: 0x000B9AB0 File Offset: 0x000B8EB0
	internal unsafe static void _Decref(_Ref_count_base* A_0)
	{
		if (Interlocked.Decrement(A_0 + 8L) == 0)
		{
			calli(System.Void modopt(System.Runtime.CompilerServices.CallConvCdecl)(System.IntPtr), A_0, *(*A_0));
			if (Interlocked.Decrement(A_0 + 12L) == 0)
			{
				calli(System.Void modopt(System.Runtime.CompilerServices.CallConvCdecl)(System.IntPtr), A_0, *(*A_0 + 8L));
			}
		}
	}

	// Token: 0x060000B1 RID: 177 RVA: 0x000B9D14 File Offset: 0x000B9114
	internal unsafe static void {dtor}(shared_ptr<IniParser>* A_0)
	{
		ulong num = (ulong)(*(A_0 + 8L));
		if (num != 0UL)
		{
			<Module>.std._Ref_count_base._Decref(num);
		}
	}

	// Token: 0x060000B2 RID: 178 RVA: 0x000B9E6C File Offset: 0x000B926C
	internal unsafe static string marshal_as<class\u0020System::String\u0020^,class\u0020std::basic_string<wchar_t,struct\u0020std::char_traits<wchar_t>,class\u0020std::allocator<wchar_t>\u0020>\u0020>(basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>* _from_obj)
	{
		ulong num = (ulong)(*(_from_obj + 16L));
		char* ptr = _from_obj;
		if (((8L <= *(_from_obj + 24L)) ? 1 : 0) != 0)
		{
			ptr = *_from_obj;
		}
		if (num > 2147483647UL)
		{
			throw new ArgumentOutOfRangeException("Size of string exceeds INT_MAX.");
		}
		return new string((char*)ptr, 0, (int)num);
	}

	// Token: 0x060000B3 RID: 179 RVA: 0x000B98E4 File Offset: 0x000B8CE4
	internal unsafe static ulong GetUnicodeStringSize(sbyte* _str, ulong _count)
	{
		if (_count > 2147483647UL)
		{
			throw new ArgumentOutOfRangeException("Size of string exceeds INT_MAX.");
		}
		ulong num = (ulong)<Module>.MultiByteToWideChar(3U, 0, _str, (int)_count, null, 0);
		if (num == 0UL && _count != 0UL)
		{
			throw new ArgumentException("Conversion from MultiByte to WideChar failed.  Please check the content of the string and/or locale settings.");
		}
		return num + 1UL;
	}

	// Token: 0x060000B4 RID: 180 RVA: 0x000B9988 File Offset: 0x000B8D88
	internal unsafe static void {dtor}(char_buffer<wchar_t>* A_0)
	{
		<Module>.delete[](*A_0);
	}

	// Token: 0x060000B5 RID: 181 RVA: 0x000B992C File Offset: 0x000B8D2C
	internal unsafe static void WriteUnicodeString(char* _dest, ulong _size, sbyte* _src, ulong _count)
	{
		if (_size > 2147483647UL || _count > 2147483647UL)
		{
			throw new ArgumentOutOfRangeException("Size of string exceeds INT_MAX.");
		}
		ulong num = (ulong)<Module>.MultiByteToWideChar(3U, 0, _src, (int)_count, _dest, (int)_size);
		if (num < _size && (num != 0UL || _size == 1UL))
		{
			(num * 2UL)[_dest / 2] = '\0';
			return;
		}
		throw new ArgumentException("Conversion from MultiByte to WideChar failed.  Please check the content of the string and/or locale settings.");
	}

	// Token: 0x060000B6 RID: 182 RVA: 0x000B9AEC File Offset: 0x000B8EEC
	internal unsafe static string InternalAnsiToStringHelper(sbyte* _src, ulong _count)
	{
		ulong num = <Module>.msclr.interop.details.GetUnicodeStringSize(_src, _count);
		if (num - 1UL <= 2147483646UL)
		{
			ulong num2;
			if (num <= 9223372036854775807UL)
			{
				num2 = num * 2UL;
			}
			else
			{
				num2 = ulong.MaxValue;
			}
			char_buffer<wchar_t> char_buffer<wchar_t> = <Module>.new[](num2);
			string text;
			try
			{
				if (char_buffer<wchar_t> == null)
				{
					throw new InsufficientMemoryException();
				}
				<Module>.msclr.interop.details.WriteUnicodeString(char_buffer<wchar_t>, num, _src, _count);
				text = new string(char_buffer<wchar_t>, 0, (int)num - 1);
			}
			catch
			{
				<Module>.___CxxCallUnwindDtor(ldftn(msclr.interop.details.char_buffer<wchar_t>.{dtor}), (void*)(&char_buffer<wchar_t>));
				throw;
			}
			<Module>.delete[](char_buffer<wchar_t>);
			return text;
		}
		throw new ArgumentOutOfRangeException("Size of string exceeds INT_MAX.");
		try
		{
		}
		catch
		{
			char_buffer<wchar_t> char_buffer<wchar_t>;
			<Module>.___CxxCallUnwindDtor(ldftn(msclr.interop.details.char_buffer<wchar_t>.{dtor}), (void*)(&char_buffer<wchar_t>));
			throw;
		}
	}

	// Token: 0x060000B7 RID: 183 RVA: 0x000B9E38 File Offset: 0x000B9238
	internal unsafe static string marshal_as<class\u0020System::String\u0020^,class\u0020std::basic_string<char,struct\u0020std::char_traits<char>,class\u0020std::allocator<char>\u0020>\u0020>(basic_string<char,std::char_traits<char>,std::allocator<char>\u0020>* _from_obj)
	{
		ulong num = (ulong)(*(_from_obj + 16L));
		sbyte* ptr = _from_obj;
		if (((16L <= *(_from_obj + 24L)) ? 1 : 0) != 0)
		{
			ptr = *_from_obj;
		}
		return <Module>.msclr.interop.details.InternalAnsiToStringHelper(ptr, num);
	}

	// Token: 0x060000B8 RID: 184 RVA: 0x000B9EB4 File Offset: 0x000B92B4
	internal unsafe static RequestProgressResult marshal_as<class\u0020RequestProgressResult\u0020^,struct\u0020URequestProgressResult>(URequestProgressResult* from)
	{
		return new RequestProgressResult
		{
			game_id = <Module>.msclr.interop.marshal_as<class\u0020System::String\u0020^,class\u0020std::basic_string<wchar_t,struct\u0020std::char_traits<wchar_t>,class\u0020std::allocator<wchar_t>\u0020>\u0020>(from),
			file_process = *(from + 32L),
			current_file = <Module>.msclr.interop.marshal_as<class\u0020System::String\u0020^,class\u0020std::basic_string<char,struct\u0020std::char_traits<char>,class\u0020std::allocator<char>\u0020>\u0020>(from + 40L),
			file_current_size = *(from + 72L),
			file_full_size = *(from + 80L),
			current_file_count = *(from + 88L),
			total_file_count = *(from + 92L),
			download_speed = (uint)(*(from + 96L)),
			downloaded_size = *(from + 104L),
			total_download_size = *(from + 112L),
			patched_size = *(from + 120L),
			total_patch_size = *(from + 128L),
			patch_list_made = (*(from + 136L) != 0),
			downloaded_install_file_size = *(from + 144L)
		};
	}

	// Token: 0x060000B9 RID: 185 RVA: 0x000BA2F4 File Offset: 0x000B96F4
	internal unsafe static _Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,std::map<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>,std::list<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020>\u0020>,IniParser::ci_comp,std::allocator<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t* _Tree<std::_Tmap_traits<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>,std::map<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>,std::list<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020>\u0020>,IniParser::ci_comp,std::allocator<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocat(_Tree<std::_Tmap_traits<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>,std::map<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>,std::list<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020>\u0020>,IniParser::ci_comp,std::allocator<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocat* A_0, basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>* _Keyval)
	{
		_Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,std::map<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>,std::list<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020>\u0020>,IniParser::ci_comp,std::allocator<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t* ptr = *A_0;
		_Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,std::map<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>,std::list<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020>\u0020>,IniParser::ci_comp,std::allocator<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t* ptr2 = *(long*)(ptr + 8L / (long)sizeof(_Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,std::map<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>,std::list<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020>\u0020>,IniParser::ci_comp,std::allocator<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t));
		if (*(sbyte*)(ptr2 + 25L / (long)sizeof(_Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,std::map<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>,std::list<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020>\u0020>,IniParser::ci_comp,std::allocator<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t)) == 0)
		{
			do
			{
				if (<Module>.IniParser.ci_comp.()(A_0, ptr2 + 32L / (long)sizeof(_Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,std::map<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>,std::list<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020>\u0020>,IniParser::ci_comp,std::allocator<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t), _Keyval) != null)
				{
					ptr2 = *(long*)(ptr2 + 16L / (long)sizeof(_Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,std::map<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>,std::list<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020>\u0020>,IniParser::ci_comp,std::allocator<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t));
				}
				else
				{
					ptr = ptr2;
					ptr2 = *(long*)ptr2;
				}
			}
			while (*(sbyte*)(ptr2 + 25L / (long)sizeof(_Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,std::map<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>,std::list<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020>\u0020>,IniParser::ci_comp,std::allocator<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t)) == 0);
		}
		return ptr;
	}

	// Token: 0x060000BA RID: 186 RVA: 0x000BAEF8 File Offset: 0x000BA2F8
	internal unsafe static _Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,std::map<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>,std::list<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020>\u0020>,IniParser::ci_comp,std::allocator<std::pair<std::ba* _Tree<std::_Tmap_traits<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>,std::map<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>,std::list<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020>\u0020>,IniParser::ci_comp,std::allocator<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocat(_Tree<std::_Tmap_traits<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>,std::map<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>,std::list<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020>\u0020>,IniParser::ci_comp,std::allocator<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocat* A_0, _Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,std::map<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>,std::list<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020>\u0020>,IniParser::ci_comp,std::allocator<std::pair<std::ba* A_1, basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>* _Keyval)
	{
		_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,std::map<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>,std::list<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020>\u0020>,IniParser::ci_comp,std::allocator<std::pair<std::ba tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>_u0020const_u0020,std::map<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>,std::list<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>_u0020>_u0020>,IniParser::ci_comp,std::allocator<std::pair<std::bas = <Module>.std._Tree<std::_Tmap_traits<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>,std::map<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>,std::list<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020>\u0020>,IniParser::ci_comp,std::allocator<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::all(A_0, _Keyval);
		_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,std::map<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>,std::list<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020>\u0020>,IniParser::ci_comp,std::allocator<std::pair<std::ba* ptr;
		if (((tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>_u0020const_u0020,std::map<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>,std::list<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>_u0020>_u0020>,IniParser::ci_comp,std::allocator<std::pair<std::bas == *A_0) ? 1 : 0) == 0 && <Module>.IniParser.ci_comp.()(A_0, _Keyval, tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>_u0020const_u0020,std::map<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>,std::list<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>_u0020>_u0020>,IniParser::ci_comp,std::allocator<std::pair<std::bas + 32L) == null)
		{
			_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,std::map<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>,std::list<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020>\u0020>,IniParser::ci_comp,std::allocator<std::pair<std::ba tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>_u0020const_u0020,std::map<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>,std::list<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>_u0020>_u0020>,IniParser::ci_comp,std::allocator<std::pair<std::bas = tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>_u0020const_u0020,std::map<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>,std::list<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>_u0020>_u0020>,IniParser::ci_comp,std::allocator<std::pair<std::bas;
			ptr = &tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>_u0020const_u0020,std::map<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>,std::list<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>_u0020>_u0020>,IniParser::ci_comp,std::allocator<std::pair<std::bas;
		}
		else
		{
			_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,std::map<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>,std::list<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020>\u0020>,IniParser::ci_comp,std::allocator<std::pair<std::ba tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>_u0020const_u0020,std::map<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>,std::list<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>_u0020>_u0020>,IniParser::ci_comp,std::allocator<std::pair<std::bas = *A_0;
			ptr = &tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>_u0020const_u0020,std::map<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>,std::list<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>_u0020>_u0020>,IniParser::ci_comp,std::allocator<std::pair<std::bas;
		}
		cpblk(A_1, ptr, 8);
		return A_1;
	}

	// Token: 0x060000BB RID: 187 RVA: 0x000B999C File Offset: 0x000B8D9C
	internal unsafe static _Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,std::map<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>,std::list<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020>\u0020>,IniParser::ci_comp,std::allocator<s* {ctor}(_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,std::map<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>,std::list<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020>\u0020>,IniParser::ci_comp,std::allocator<s* A_0, _Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,std::map<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>,std::list<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020>\u0020>,IniParser::ci_comp,std::allocator<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t* _Pnode, _Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,std::map<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>,std::list<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020>\u0020>,IniParser::ci_comp,std::allocator<std::pair<std::basic_string<wchar_t,s* _Plist)
	{
		*A_0 = _Pnode;
		return A_0;
	}

	// Token: 0x060000BC RID: 188 RVA: 0x000BA2B0 File Offset: 0x000B96B0
	internal unsafe static _Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,std::list<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020>\u0020>\u0020>,void\u0020*>* _Lbound<class\u0020std::basic_string<wchar_t,struct\u0020std::char_traits<wchar_t>,class\u0020std::allocator<wchar_t>\u0020>\u0020>(_Tree<std::_Tmap_traits<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>,std::list<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020>\u0020>,IniParser::ci_comp,std::allocator<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,std::list<std::basic_string<wchar_t,std::char_traits<wch* A_0, basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>* _Keyval)
	{
		_Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,std::list<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020>\u0020>\u0020>,void\u0020*>* ptr = *A_0;
		_Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,std::list<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020>\u0020>\u0020>,void\u0020*>* ptr2 = *(long*)(ptr + 8L / (long)sizeof(_Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,std::list<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020>\u0020>\u0020>,void\u0020*>));
		if (*(sbyte*)(ptr2 + 25L / (long)sizeof(_Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,std::list<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020>\u0020>\u0020>,void\u0020*>)) == 0)
		{
			do
			{
				if (<Module>.IniParser.ci_comp.()(A_0, ptr2 + 32L / (long)sizeof(_Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,std::list<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020>\u0020>\u0020>,void\u0020*>), _Keyval) != null)
				{
					ptr2 = *(long*)(ptr2 + 16L / (long)sizeof(_Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,std::list<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020>\u0020>\u0020>,void\u0020*>));
				}
				else
				{
					ptr = ptr2;
					ptr2 = *(long*)ptr2;
				}
			}
			while (*(sbyte*)(ptr2 + 25L / (long)sizeof(_Tree_node<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,std::list<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020>\u0020>\u0020>,void\u0020*>)) == 0);
		}
		return ptr;
	}

	// Token: 0x060000BD RID: 189 RVA: 0x000B9F80 File Offset: 0x000B9380
	[return: MarshalAs(UnmanagedType.U1)]
	internal unsafe static bool ()(IniParser.ci_comp* A_0, basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>* s1, basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>* s2)
	{
		char* ptr = s2;
		if (((8L <= *(s2 + 24L)) ? 1 : 0) != 0)
		{
			ptr = *s2;
		}
		char* ptr2 = s1;
		if (((8L <= *(s1 + 24L)) ? 1 : 0) != 0)
		{
			ptr2 = *s1;
		}
		return <Module>._wcsicmp(ptr2, ptr) < 0;
	}

	// Token: 0x060000BE RID: 190 RVA: 0x000BAEB0 File Offset: 0x000BA2B0
	internal unsafe static _Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,std::list<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020>\u0020>\u0020>\u0020>\u0020>\u0020>* find(_Tree<std::_Tmap_traits<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>,std::list<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020>\u0020>,IniParser::ci_comp,std::allocator<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,std::list<std::basic_string<wchar_t,std::char_traits<wch* A_0, _Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,std::list<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020>\u0020>\u0020>\u0020>\u0020>\u0020>* A_1, basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>* _Keyval)
	{
		_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,std::list<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020>\u0020>\u0020>\u0020>\u0020>\u0020> tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>_u0020const_u0020,std::list<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>_u0020>_u0020>_u0020>_u0020>_u0020>_u0020> = <Module>.std._Tree<std::_Tmap_traits<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>,std::list<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020>\u0020>,IniParser::ci_comp,std::allocator<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,std::list<std::basic_string<wchar_t,std::char_traits(A_0, _Keyval);
		_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,std::list<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020>\u0020>\u0020>\u0020>\u0020>\u0020>* ptr;
		if (((tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>_u0020const_u0020,std::list<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>_u0020>_u0020>_u0020>_u0020>_u0020>_u0020> == *A_0) ? 1 : 0) == 0 && <Module>.IniParser.ci_comp.()(A_0, _Keyval, tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>_u0020const_u0020,std::list<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>_u0020>_u0020>_u0020>_u0020>_u0020>_u0020> + 32L) == null)
		{
			_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,std::list<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020>\u0020>\u0020>\u0020>\u0020>\u0020> tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>_u0020const_u0020,std::list<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>_u0020>_u0020>_u0020>_u0020>_u0020>_u0020>2 = tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>_u0020const_u0020,std::list<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>_u0020>_u0020>_u0020>_u0020>_u0020>_u0020>;
			ptr = &tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>_u0020const_u0020,std::list<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>_u0020>_u0020>_u0020>_u0020>_u0020>_u0020>2;
		}
		else
		{
			_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,std::list<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020>\u0020>\u0020>\u0020>\u0020>\u0020> tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>_u0020const_u0020,std::list<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>_u0020>_u0020>_u0020>_u0020>_u0020>_u0020>3 = *A_0;
			ptr = &tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>_u0020const_u0020,std::list<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>_u0020>_u0020>_u0020>_u0020>_u0020>_u0020>3;
		}
		cpblk(A_1, ptr, 8);
		return A_1;
	}

	// Token: 0x060000BF RID: 191 RVA: 0x000BAFDC File Offset: 0x000BA3DC
	internal unsafe static basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>* GetValueStringW(IniParser* A_0, basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>* A_1, char* section_name, char* key_name, char* default_value)
	{
		uint num = 0U;
		if (((*(A_0 + 8L) == 0L) ? 1 : 0) != 0)
		{
			<Module>.std.basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>.{ctor}(A_1, default_value);
			try
			{
				num = 1U;
				return A_1;
			}
			catch
			{
				if ((num & 1U) != 0U)
				{
					num &= 4294967294U;
					<Module>.___CxxCallUnwindDtor(ldftn(std.basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>.{dtor}), (void*)A_1);
				}
				throw;
			}
		}
		_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,std::map<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>,std::list<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020>\u0020>,IniParser::ci_comp,std::allocator<std::pair<std::ba tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>_u0020const_u0020,std::map<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>,std::list<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>_u0020>_u0020>,IniParser::ci_comp,std::allocator<std::pair<std::bas = 0L;
		basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020> basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>;
		<Module>.std.basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>.{ctor}(ref basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>, section_name);
		basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>* ptr;
		try
		{
			try
			{
				<Module>.std._Tree<std::_Tmap_traits<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>,std::map<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>,std::list<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020>\u0020>,IniParser::ci_comp,std::allocator<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::all(A_0, &tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>_u0020const_u0020,std::map<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>,std::list<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>_u0020>_u0020>,IniParser::ci_comp,std::allocator<std::pair<std::bas, ref basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>);
			}
			catch
			{
				<Module>.___CxxCallUnwindDtor(ldftn(std.basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>.{dtor}), (void*)(&basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>));
				throw;
			}
			try
			{
				<Module>.std.basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>._Tidy_deallocate(ref basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>);
			}
			catch
			{
				<Module>.___CxxCallUnwindDtor(ldftn(std._String_alloc<std::_String_base_types<wchar_t,std::allocator<wchar_t>\u0020>\u0020>.{dtor}), (void*)(&basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>));
				throw;
			}
			long num2 = *A_0;
			_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,std::map<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>,std::list<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020>\u0020>,IniParser::ci_comp,std::allocator<std::pair<std::ba tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>_u0020const_u0020,std::map<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>,std::list<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>_u0020>_u0020>,IniParser::ci_comp,std::allocator<std::pair<std::bas;
			<Module>.std._Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,std::map<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>,std::list<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020>\u0020>,IniParser::ci_comp,std::allocat(ref tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>_u0020const_u0020,std::map<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>,std::list<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>_u0020>_u0020>,IniParser::ci_comp,std::allocator<std::pair<std::bas, num2, A_0);
			if (((tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>_u0020const_u0020,std::map<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>,std::list<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>_u0020>_u0020>,IniParser::ci_comp,std::allocator<std::pair<std::bas == tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>_u0020const_u0020,std::map<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>,std::list<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>_u0020>_u0020>,IniParser::ci_comp,std::allocator<std::pair<std::bas) ? 1 : 0) != 0)
			{
				<Module>.std.basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>.{ctor}(A_1, default_value);
				num = 1U;
				ptr = A_1;
			}
			else
			{
				long num3 = tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>_u0020const_u0020,std::map<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>,std::list<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>_u0020>_u0020>,IniParser::ci_comp,std::allocator<std::pair<std::bas + 32L;
				if (((*(num3 + 40L) == 0L) ? 1 : 0) != 0)
				{
					<Module>.std.basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>.{ctor}(A_1, default_value);
					num = 1U;
					ptr = A_1;
				}
				else
				{
					_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,std::list<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020>\u0020>\u0020>\u0020>\u0020>\u0020> tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>_u0020const_u0020,std::list<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>_u0020>_u0020>_u0020>_u0020>_u0020>_u0020> = 0L;
					pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,std::map<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>,std::list<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020>\u0020>,IniParser::ci_comp,std::allocator<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator* ptr2 = num3 + 32L;
					basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020> basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>2;
					<Module>.std.basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>.{ctor}(ref basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>2, key_name);
					try
					{
						<Module>.std._Tree<std::_Tmap_traits<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>,std::list<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020>\u0020>,IniParser::ci_comp,std::allocator<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,std::list<std::basic_string<wchar_t,std::char_traits(ptr2, &tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>_u0020const_u0020,std::list<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>_u0020>_u0020>_u0020>_u0020>_u0020>_u0020>, ref basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>2);
					}
					catch
					{
						<Module>.___CxxCallUnwindDtor(ldftn(std.basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>.{dtor}), (void*)(&basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>2));
						throw;
					}
					try
					{
						<Module>.std.basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>._Tidy_deallocate(ref basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>2);
					}
					catch
					{
						<Module>.___CxxCallUnwindDtor(ldftn(std._String_alloc<std::_String_base_types<wchar_t,std::allocator<wchar_t>\u0020>\u0020>.{dtor}), (void*)(&basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>2));
						throw;
					}
					long num4 = *(tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>_u0020const_u0020,std::map<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>,std::list<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>_u0020>_u0020>,IniParser::ci_comp,std::allocator<std::pair<std::bas + 32L + 32L);
					if (((tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>_u0020const_u0020,std::list<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>_u0020>_u0020>_u0020>_u0020>_u0020>_u0020> == num4) ? 1 : 0) != 0)
					{
						<Module>.std.basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>.{ctor}(A_1, default_value);
						num = 1U;
						ptr = A_1;
					}
					else
					{
						long num5 = *(*(tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>_u0020const_u0020,std::list<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>_u0020>_u0020>_u0020>_u0020>_u0020>_u0020> + 32L + 32L)) + 16L;
						<Module>.std._String_val<std::_Simple_types<wchar_t>\u0020>.{ctor}(A_1);
						try
						{
							<Module>.std.basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>._Construct_lv_contents(A_1, num5);
						}
						catch
						{
							<Module>.___CxxCallUnwindDtor(ldftn(std._String_alloc<std::_String_base_types<wchar_t,std::allocator<wchar_t>\u0020>\u0020>.{dtor}), (void*)A_1);
							throw;
						}
						num = 1U;
						ptr = A_1;
					}
				}
			}
		}
		catch
		{
			if ((num & 1U) != 0U)
			{
				num &= 4294967294U;
				<Module>.___CxxCallUnwindDtor(ldftn(std.basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>.{dtor}), (void*)A_1);
			}
			throw;
		}
		return ptr;
	}

	// Token: 0x060000C0 RID: 192 RVA: 0x000BA57C File Offset: 0x000B997C
	internal unsafe static basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>* marshal_as<class\u0020std::basic_string<wchar_t,struct\u0020std::char_traits<wchar_t>,class\u0020std::allocator<wchar_t>\u0020>,class\u0020System::String\u0020^>(basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>* A_0, string* _from_obj)
	{
		try
		{
			uint num = 0U;
			if (!(*_from_obj != null))
			{
				throw new ArgumentNullException("NULLPTR is not supported for this conversion.");
			}
			ref byte ptr = *_from_obj;
			if ((ref ptr) != null)
			{
				ptr = (ulong)RuntimeHelpers.OffsetToStringData + (ref ptr);
			}
			ref char char_u0020modopt(IsConst)& = ref ptr;
			ulong num2 = (long)_from_obj->Length;
			char* ptr2 = ref char_u0020modopt(IsConst)&;
			basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>* ptr3;
			basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>* ptr4;
			try
			{
				ptr3 = A_0 + 16L / (long)sizeof(basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>);
				*(long*)ptr3 = 0L;
				ptr4 = A_0 + 24L / (long)sizeof(basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>);
				*(long*)ptr4 = 0L;
			}
			catch
			{
				<Module>.___CxxCallUnwindDtor(ldftn(std._String_val<std::_Simple_types<wchar_t>\u0020>._Bxty.{dtor}), (void*)A_0);
				throw;
			}
			try
			{
				*(long*)ptr3 = 0L;
				*(long*)ptr4 = 7L;
				*(short*)A_0 = 0;
				<Module>.std.basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>.assign(A_0, ptr2, num2);
			}
			catch
			{
				<Module>.___CxxCallUnwindDtor(ldftn(std._String_alloc<std::_String_base_types<wchar_t,std::allocator<wchar_t>\u0020>\u0020>.{dtor}), (void*)A_0);
				throw;
			}
			num = 1U;
		}
		catch
		{
			uint num;
			if ((num & 1U) != 0U)
			{
				num &= 4294967294U;
				<Module>.___CxxCallUnwindDtor(ldftn(std.basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>.{dtor}), (void*)A_0);
			}
			throw;
		}
		return A_0;
	}

	// Token: 0x060000C1 RID: 193 RVA: 0x000BBB24 File Offset: 0x000BAF24
	internal unsafe static void {dtor}(_Ref_count_base* A_0)
	{
	}

	// Token: 0x060000C2 RID: 194 RVA: 0x000BBD68 File Offset: 0x000BB168
	internal unsafe static ResultBase marshal_as<class\u0020Patcher::ResultBase\u0020^,struct\u0020Patcher::UResultBase>(UResultBase* from)
	{
		return new ResultBase
		{
			game_id = <Module>.msclr.interop.marshal_as<class\u0020System::String\u0020^,class\u0020std::basic_string<wchar_t,struct\u0020std::char_traits<wchar_t>,class\u0020std::allocator<wchar_t>\u0020>\u0020>(from),
			result = *(from + 32L),
			error = *(from + 36L),
			current_file = <Module>.msclr.interop.marshal_as<class\u0020System::String\u0020^,class\u0020std::basic_string<char,struct\u0020std::char_traits<char>,class\u0020std::allocator<char>\u0020>\u0020>(from + 40L),
			reason = *(from + 72L),
			error_code = *(from + 76L)
		};
	}

	// Token: 0x060000C3 RID: 195 RVA: 0x000BBFD4 File Offset: 0x000BB3D4
	internal unsafe static void {dtor}(UResultBase* A_0)
	{
		try
		{
			basic_string<char,std::char_traits<char>,std::allocator<char>\u0020>* ptr = A_0 + 40L;
			try
			{
				<Module>.std.basic_string<char,std::char_traits<char>,std::allocator<char>\u0020>._Tidy_deallocate(ptr);
			}
			catch
			{
				<Module>.___CxxCallUnwindDtor(ldftn(std._String_alloc<std::_String_base_types<char,std::allocator<char>\u0020>\u0020>.{dtor}), ptr);
				throw;
			}
		}
		catch
		{
			<Module>.___CxxCallUnwindDtor(ldftn(std.basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>.{dtor}), A_0);
			throw;
		}
		try
		{
			<Module>.std.basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>._Tidy_deallocate(A_0);
		}
		catch
		{
			<Module>.___CxxCallUnwindDtor(ldftn(std._String_alloc<std::_String_base_types<wchar_t,std::allocator<wchar_t>\u0020>\u0020>.{dtor}), A_0);
			throw;
		}
	}

	// Token: 0x060000C4 RID: 196 RVA: 0x000BBDC8 File Offset: 0x000BB1C8
	internal unsafe static CheckUpdateResult marshal_as<class\u0020CheckUpdateResult\u0020^,struct\u0020UCheckUpdateResult>(UCheckUpdateResult* from)
	{
		return new CheckUpdateResult(<Module>.msclr.interop.marshal_as<class\u0020Patcher::ResultBase\u0020^,struct\u0020Patcher::UResultBase>(from))
		{
			local_version = *(from + 80L),
			latest_version = *(from + 84L)
		};
	}

	// Token: 0x060000C5 RID: 197 RVA: 0x000BBB34 File Offset: 0x000BAF34
	internal unsafe static ResourceBuffer* {ctor}(ResourceBuffer* A_0, HINSTANCE__* module, int resource_id, char* type)
	{
		*A_0 = 0L;
		*(A_0 + 8L) = 0;
		*(A_0 + 12L) = 1;
		HRSRC__* ptr = <Module>.FindResourceW(module, (ushort)resource_id, type);
		if (null != ptr)
		{
			uint num = <Module>.SizeofResource(module, ptr);
			*(A_0 + 8L) = (int)num;
			if (0U != num)
			{
				void* ptr2 = <Module>.LoadResource(module, ptr);
				if (null == ptr2)
				{
					*(A_0 + 8L) = 0;
				}
				else
				{
					void* ptr3 = <Module>.LockResource(ptr2);
					*A_0 = ptr3;
					if (null == ptr3)
					{
						*(A_0 + 8L) = 0;
					}
				}
			}
		}
		return A_0;
	}

	// Token: 0x060000C6 RID: 198 RVA: 0x000BBBA0 File Offset: 0x000BAFA0
	internal unsafe static void {dtor}(ResourceBuffer* A_0)
	{
		if (*(A_0 + 12L) == 0)
		{
			ulong num = (ulong)(*A_0);
			if (num != 0UL)
			{
				<Module>.free(num);
			}
		}
	}

	// Token: 0x060000C7 RID: 199 RVA: 0x000BBDFC File Offset: 0x000BB1FC
	internal unsafe static basic_string<char,std::char_traits<char>,std::allocator<char>\u0020>* assign(basic_string<char,std::char_traits<char>,std::allocator<char>\u0020>* A_0, sbyte* _Ptr, ulong _Count)
	{
		ulong num = (ulong)(*(A_0 + 24L));
		if (_Count <= num)
		{
			sbyte* ptr = A_0;
			if (((16UL <= num) ? 1 : 0) != 0)
			{
				ptr = *A_0;
			}
			*(A_0 + 16L) = _Count;
			<Module>.memmove((void*)ptr, _Ptr, _Count);
			*(byte*)(ptr + _Count / sizeof(sbyte)) = 0;
			return A_0;
		}
		<lambda_61f19ca81ede490286327871d07716e6> <lambda_61f19ca81ede490286327871d07716e6>;
		initblk(ref <lambda_61f19ca81ede490286327871d07716e6>, 0, 1L);
		return <Module>.std.basic_string<char,std::char_traits<char>,std::allocator<char>\u0020>._Reallocate_for<class\u0020<lambda_61f19ca81ede490286327871d07716e6>,char\u0020const\u0020*>(A_0, _Count, <lambda_61f19ca81ede490286327871d07716e6>, _Ptr);
	}

	// Token: 0x060000C8 RID: 200 RVA: 0x000BBE58 File Offset: 0x000BB258
	internal unsafe static shared_ptr<IniParser>* make_shared<class\u0020IniParser,enum\u0020std::byte\u0020const\u0020*\u0020&,unsigned\u0020int\u0020&>(shared_ptr<IniParser>* A_0, @byte** <_Args_0>, uint* <_Args_1>)
	{
		try
		{
			uint num = 0U;
			_Ref_count_obj<IniParser>* ptr = <Module>.@new(32UL);
			_Ref_count_obj<IniParser>* ptr3;
			try
			{
				if (ptr != null)
				{
					*(int*)(ptr + 8L / (long)sizeof(_Ref_count_obj<IniParser>)) = 1;
					*(int*)(ptr + 12L / (long)sizeof(_Ref_count_obj<IniParser>)) = 1;
					try
					{
						*(long*)ptr = ref <Module>.??_7?$_Ref_count_obj@VIniParser@@@std@@6B@;
						IniParser* ptr2 = ptr + 16L / (long)sizeof(_Ref_count_obj<IniParser>);
						uint num2 = (uint)(*<_Args_1>);
						long num3 = *<_Args_0>;
						<Module>.IniParser.{ctor}(ptr2, num3, num2);
					}
					catch
					{
						<Module>.___CxxCallUnwindDtor(ldftn(std._Ref_count_base.{dtor}), (void*)ptr);
						throw;
					}
					ptr3 = ptr;
				}
				else
				{
					ptr3 = null;
				}
			}
			catch
			{
				<Module>.delete((void*)ptr, 32UL);
				throw;
			}
			initblk(A_0, 0, 16L);
			*(long*)A_0 = 0L;
			shared_ptr<IniParser>* ptr4 = A_0 + 8L / (long)sizeof(shared_ptr<IniParser>);
			*(long*)ptr4 = 0L;
			num = 1U;
			*(long*)A_0 = ptr3 + 16L / (long)sizeof(_Ref_count_obj<IniParser>);
			*(long*)ptr4 = ptr3;
		}
		catch
		{
			uint num;
			if ((num & 1U) != 0U)
			{
				num &= 4294967294U;
				<Module>.___CxxCallUnwindDtor(ldftn(std.shared_ptr<IniParser>.{dtor}), (void*)A_0);
			}
			throw;
		}
		return A_0;
	}

	// Token: 0x060000C9 RID: 201 RVA: 0x000BBCC8 File Offset: 0x000BB0C8
	internal unsafe static basic_string<char,std::char_traits<char>,std::allocator<char>\u0020>* _Reallocate_for<class\u0020<lambda_61f19ca81ede490286327871d07716e6>,char\u0020const\u0020*>(basic_string<char,std::char_traits<char>,std::allocator<char>\u0020>* A_0, ulong _New_size, <lambda_61f19ca81ede490286327871d07716e6> _Fn, sbyte* <_Args_0>)
	{
		if (_New_size > <Module>.std.basic_string<char,std::char_traits<char>,std::allocator<char>\u0020>.max_size(A_0))
		{
			<Module>.std.basic_string<char,std::char_traits<char>,std::allocator<char>\u0020>._Xlen();
		}
		ulong num = *(A_0 + 24L);
		ulong num2 = <Module>.std.basic_string<char,std::char_traits<char>,std::allocator<char>\u0020>._Calculate_growth(A_0, _New_size);
		ulong num3 = num2 + 1L;
		void* ptr;
		if (num3 >= 4096L)
		{
			ptr = <Module>.std._Allocate_manually_vector_aligned<struct\u0020std::_Default_allocate_traits>(num3);
		}
		else if (num3 != null)
		{
			ptr = <Module>.@new(num3);
		}
		else
		{
			ptr = null;
		}
		*(A_0 + 16L) = _New_size;
		*(A_0 + 24L) = num2;
		cpblk(ptr, <_Args_0>, _New_size);
		((byte*)ptr)[_New_size] = 0;
		if (16L <= num)
		{
			ulong num4 = num + 1L;
			void* ptr2 = *A_0;
			if (num4 >= 4096UL)
			{
				<Module>.std._Adjust_manually_vector_aligned(ref ptr2, ref num4);
			}
			<Module>.delete(ptr2, num4);
			*A_0 = ptr;
		}
		else
		{
			*A_0 = ptr;
		}
		return A_0;
	}

	// Token: 0x060000CA RID: 202 RVA: 0x000BBBC4 File Offset: 0x000BAFC4
	internal unsafe static void _Xlen()
	{
		<Module>.std._Xlength_error((sbyte*)(&<Module>.??_C@_0BA@JFNIOLAK@string?5too?5long@));
	}

	// Token: 0x060000CB RID: 203 RVA: 0x000BBC80 File Offset: 0x000BB080
	internal unsafe static ulong _Calculate_growth(basic_string<char,std::char_traits<char>,std::allocator<char>\u0020>* A_0, ulong _Requested)
	{
		ulong num = <Module>.std.basic_string<char,std::char_traits<char>,std::allocator<char>\u0020>.max_size(A_0);
		ulong num2 = _Requested | 15L;
		if (num2 > num)
		{
			return num;
		}
		ulong num3 = *(A_0 + 24L);
		ulong num4 = num3 >> 1;
		if (num3 > num - num4)
		{
			return num;
		}
		ulong num5 = num4 + num3;
		ulong num6 = num5;
		return *(ref num2 < num5 ? ref num6 : ref num2);
	}

	// Token: 0x060000CC RID: 204 RVA: 0x000BC7F8 File Offset: 0x000BBBF8
	internal unsafe static void* __vecDelDtor(_Ref_count_obj<IniParser>* A_0, uint A_0)
	{
		if ((A_0 & 2U) != 0U)
		{
			_Ref_count_obj<IniParser>* ptr = A_0 - 8L;
			<Module>.__ehvec_dtor(A_0, 32UL, (ulong)(*ptr), ldftn(std._Ref_count_obj<IniParser>.{dtor}));
			if ((A_0 & 1U) != 0U)
			{
				_Ref_count_obj<IniParser>* ptr2 = ptr;
				<Module>.delete[](ptr2, (ulong)(*ptr2 * 32L + 8L));
			}
			return ptr;
		}
		if ((A_0 & 1U) != 0U)
		{
			<Module>.delete(A_0, 32UL);
		}
		return A_0;
	}

	// Token: 0x060000CD RID: 205 RVA: 0x000BC848 File Offset: 0x000BBC48
	internal unsafe static void {dtor}(_Ref_count_obj<IniParser>* A_0)
	{
	}

	// Token: 0x060000CE RID: 206 RVA: 0x000BBBDC File Offset: 0x000BAFDC
	internal unsafe static tuple<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020&>* {ctor}(tuple<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020&>* A_0, tuple<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020&>* A_0)
	{
		cpblk(A_0, A_0, 8);
		return A_0;
	}

	// Token: 0x060000CF RID: 207 RVA: 0x000BC79C File Offset: 0x000BBB9C
	[return: MarshalAs(UnmanagedType.U1)]
	internal unsafe static bool mfModuleInit(sbyte* ini_buffer, ulong ini_buffer_size, gcroot<LauncherView::App::AddWebBrowserCreateCallbackFn\u0020^>* addWbCreateCb, [MarshalAs(UnmanagedType.U1)] bool enable_log)
	{
		bool flag;
		try
		{
			<Module>.?use_log@LogMsg@@2_NA = enable_log;
			ObjectModule<PatcherNativeObject>* ptr = <Module>.ObjectModule<PatcherNativeObject>.GetInstance();
			App.AddWebBrowserCreateCallbackFn addWebBrowserCreateCallbackFn = <Module>.gcroot<LauncherView::App::AddWebBrowserCreateCallbackFn\u0020^>..PE$AAVAddWebBrowserCreateCallbackFn@App@LauncherView@@(addWbCreateCb);
			flag = <Module>.ObjectModule<PatcherNativeObject>.Init(ptr, ini_buffer, ini_buffer_size, addWebBrowserCreateCallbackFn);
		}
		catch
		{
			<Module>.___CxxCallUnwindDtor(ldftn(gcroot<LauncherView::App::AddWebBrowserCreateCallbackFn\u0020^>.{dtor}), (void*)addWbCreateCb);
			throw;
		}
		<Module>.gcroot<LauncherView::App::AddWebBrowserCreateCallbackFn\u0020^>.{dtor}(addWbCreateCb);
		return flag;
	}

	// Token: 0x060000D0 RID: 208 RVA: 0x000BC1FC File Offset: 0x000BB5FC
	internal static void mfModuleClear()
	{
		<Module>.ObjectModule<PatcherNativeObject>.GetInstance();
		TaskList<PatcherManager,System::Object\u0020^>.CancelAllTasks();
		<Module>.PatcherManager.ClearAll();
	}

	// Token: 0x060000D1 RID: 209 RVA: 0x000BC21C File Offset: 0x000BB61C
	[return: MarshalAs(UnmanagedType.U1)]
	internal unsafe static bool Init(PatcherNativeObject* A_0)
	{
		$ArrayType$$$BY0BAE@_W $ArrayType$$$BY0BAE@_W;
		cpblk(ref $ArrayType$$$BY0BAE@_W, ref <Module>.??_C@_11LOCGONAA@@, 2);
		initblk((ref $ArrayType$$$BY0BAE@_W) + 2, 0, 518L);
		<Module>.GetModuleFileNameW(null, (char*)(&$ArrayType$$$BY0BAE@_W), 260);
		char* ptr = <Module>.wcsrchr((char*)(&$ArrayType$$$BY0BAE@_W), '\\');
		if (ptr != null)
		{
			basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020> basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>;
			<Module>.std._String_val<std::_Simple_types<wchar_t>\u0020>.{ctor}(ref basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>);
			try
			{
				<Module>.std.basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>._Tidy_init(ref basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>);
				<Module>.std.basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>.assign(ref basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>, ref $ArrayType$$$BY0BAE@_W, ptr - (ref $ArrayType$$$BY0BAE@_W) / sizeof(char) >> 1);
			}
			catch
			{
				<Module>.___CxxCallUnwindDtor(ldftn(std._String_alloc<std::_String_base_types<wchar_t,std::allocator<wchar_t>\u0020>\u0020>.{dtor}), (void*)(&basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>));
				throw;
			}
			try
			{
				<Module>.std.basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>.=(A_0 + 8L, ref basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>);
			}
			catch
			{
				<Module>.___CxxCallUnwindDtor(ldftn(std.basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>.{dtor}), (void*)(&basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>));
				throw;
			}
			try
			{
				<Module>.std.basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>._Tidy_deallocate(ref basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>);
			}
			catch
			{
				<Module>.___CxxCallUnwindDtor(ldftn(std._String_alloc<std::_String_base_types<wchar_t,std::allocator<wchar_t>\u0020>\u0020>.{dtor}), (void*)(&basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>));
				throw;
			}
		}
		PatcherNativeObject* ptr2 = A_0 + 8L;
		basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>* ptr3 = ptr2;
		char* ptr4 = ptr3;
		if (((8L <= *(ptr3 + 24L)) ? 1 : 0) != 0)
		{
			ptr4 = *ptr3;
		}
		char* ptr5 = <Module>.wcsrchr(ptr4, '\\');
		if (ptr5 != null)
		{
			char* ptr6 = ref <Module>.??_C@_15ODFHNFBK@?$AA6?$AA4@;
			char* ptr7 = ptr5 + 2L / (long)sizeof(char);
			ushort num = *(ushort*)ptr7;
			ushort num2 = 54;
			if (num >= 54)
			{
				while (num <= num2)
				{
					if (num == 0)
					{
						basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020> basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>2;
						<Module>.std._String_val<std::_Simple_types<wchar_t>\u0020>.{ctor}(ref basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>2);
						try
						{
							<Module>.std.basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>._Tidy_init(ref basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>2);
							<Module>.std.basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>.assign(ref basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>2, ptr4, ptr5 - ptr4 >> 1);
						}
						catch
						{
							<Module>.___CxxCallUnwindDtor(ldftn(std._String_alloc<std::_String_base_types<wchar_t,std::allocator<wchar_t>\u0020>\u0020>.{dtor}), (void*)(&basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>2));
							throw;
						}
						try
						{
							<Module>.std.basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>.=(ptr2, ref basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>2);
						}
						catch
						{
							<Module>.___CxxCallUnwindDtor(ldftn(std.basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>.{dtor}), (void*)(&basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>2));
							throw;
						}
						try
						{
							<Module>.std.basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>._Tidy_deallocate(ref basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>2);
						}
						catch
						{
							<Module>.___CxxCallUnwindDtor(ldftn(std._String_alloc<std::_String_base_types<wchar_t,std::allocator<wchar_t>\u0020>\u0020>.{dtor}), (void*)(&basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>2));
							throw;
						}
						break;
					}
					ptr7 += 2L / (long)sizeof(char);
					ptr6 += 2L;
					num = *(ushort*)ptr7;
					num2 = *ptr6;
					if (num < num2)
					{
						break;
					}
				}
			}
		}
		ResourceBuffer resourceBuffer;
		initblk(ref resourceBuffer, 0, 16L);
		HINSTANCE__* ptr8 = *(<Module>.ObjectModule<PatcherNativeObject>.GetInstance() + 72L);
		<Module>.ResourceBuffer.{ctor}(ref resourceBuffer, ptr8, 200, (char*)(&<Module>.??_C@_1BG@LGFFKPND@?$AAK?$AAE?$AAY?$AA_?$AAB?$AAI?$AAN?$AAA?$AAR?$AAY@));
		bool flag;
		try
		{
			if (resourceBuffer != null && *((ref resourceBuffer) + 8) != 0)
			{
				basic_string<char,std::char_traits<char>,std::allocator<char>\u0020>* ptr9 = A_0 + 40L;
				ulong num3 = (ulong)((long)(*((ref resourceBuffer) + 8)));
				<Module>.std.basic_string<char,std::char_traits<char>,std::allocator<char>\u0020>.assign(ptr9, resourceBuffer, num3);
				App.AddWebBrowserCreateCallbackFn addWebBrowserCreateCallbackFn = <Module>.gcroot<LauncherView::App::AddWebBrowserCreateCallbackFn\u0020^>..PE$AAVAddWebBrowserCreateCallbackFn@App@LauncherView@@(<Module>.ObjectModule<PatcherNativeObject>.GetInstance() + 96L);
				if (addWebBrowserCreateCallbackFn != null)
				{
					App.WebBrowserCreateCallback webBrowserCreateCallback = new App.WebBrowserCreateCallback(<Module>.PatcherNativeObject.WebBrowserCreateCallback);
					string text = new string((char*)(&$ArrayType$$$BY0BAE@_W));
					addWebBrowserCreateCallbackFn(text, webBrowserCreateCallback);
				}
				flag = true;
			}
			else
			{
				flag = false;
			}
		}
		catch
		{
			<Module>.___CxxCallUnwindDtor(ldftn(ResourceBuffer.{dtor}), (void*)(&resourceBuffer));
			throw;
		}
		if (*((ref resourceBuffer) + 12) == 0 && resourceBuffer != null)
		{
			<Module>.free(resourceBuffer);
		}
		return flag;
	}

	// Token: 0x060000D2 RID: 210 RVA: 0x000B9A9C File Offset: 0x000B8E9C
	internal unsafe static basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>* GetBasePath(PatcherNativeObject* A_0)
	{
		return A_0 + 8L;
	}

	// Token: 0x060000D3 RID: 211 RVA: 0x000BBAA8 File Offset: 0x000BAEA8
	internal static void WebBrowserCreateCallback(ChromiumWebBrowser wb, IBrowser b)
	{
		IJavascriptObjectRepository javascriptObjectRepository = wb.JavascriptObjectRepository;
		BindingOptions defaultBinder = BindingOptions.DefaultBinder;
		PatcherObject patcherObject = new PatcherObject(wb, b);
		javascriptObjectRepository.Register("_patcher_object_", patcherObject, true, defaultBinder);
	}

	// Token: 0x060000D4 RID: 212 RVA: 0x000BC508 File Offset: 0x000BB908
	internal unsafe static CheckUpdateResult CheckUpdateTask(PatcherManager* patcher_manager)
	{
		UCheckUpdateResult ucheckUpdateResult;
		<Module>.Patcher.UResultBase.{ctor}(ref ucheckUpdateResult);
		try
		{
			*((ref ucheckUpdateResult) + 80) = 0;
			*((ref ucheckUpdateResult) + 84) = 0;
		}
		catch
		{
			<Module>.___CxxCallUnwindDtor(ldftn(Patcher.UResultBase.{dtor}), (void*)(&ucheckUpdateResult));
			throw;
		}
		CheckUpdateResult checkUpdateResult;
		try
		{
			<Module>.std.basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>.=(ref ucheckUpdateResult, patcher_manager + 8L / (long)sizeof(PatcherManager));
			<Module>.PatcherManager.CheckUpdate(patcher_manager, <Module>.ObjectModule<PatcherNativeObject>.GetInstance() + 40L, (ref ucheckUpdateResult) + 32, (ref ucheckUpdateResult) + 80, (ref ucheckUpdateResult) + 84, (ref ucheckUpdateResult) + 36, (ref ucheckUpdateResult) + 40, (ref ucheckUpdateResult) + 72, (ref ucheckUpdateResult) + 76);
			checkUpdateResult = <Module>.msclr.interop.marshal_as<class\u0020CheckUpdateResult\u0020^,struct\u0020UCheckUpdateResult>(ref ucheckUpdateResult);
		}
		catch
		{
			<Module>.___CxxCallUnwindDtor(ldftn(UCheckUpdateResult.{dtor}), (void*)(&ucheckUpdateResult));
			throw;
		}
		<Module>.Patcher.UResultBase.{dtor}(ref ucheckUpdateResult);
		return checkUpdateResult;
	}

	// Token: 0x060000D5 RID: 213 RVA: 0x000BBFD4 File Offset: 0x000BB3D4
	internal unsafe static void {dtor}(UCheckUpdateResult* A_0)
	{
		try
		{
			basic_string<char,std::char_traits<char>,std::allocator<char>\u0020>* ptr = A_0 + 40L;
			try
			{
				<Module>.std.basic_string<char,std::char_traits<char>,std::allocator<char>\u0020>._Tidy_deallocate(ptr);
			}
			catch
			{
				<Module>.___CxxCallUnwindDtor(ldftn(std._String_alloc<std::_String_base_types<char,std::allocator<char>\u0020>\u0020>.{dtor}), ptr);
				throw;
			}
		}
		catch
		{
			<Module>.___CxxCallUnwindDtor(ldftn(std.basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>.{dtor}), A_0);
			throw;
		}
		try
		{
			<Module>.std.basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>._Tidy_deallocate(A_0);
		}
		catch
		{
			<Module>.___CxxCallUnwindDtor(ldftn(std._String_alloc<std::_String_base_types<wchar_t,std::allocator<wchar_t>\u0020>\u0020>.{dtor}), A_0);
			throw;
		}
	}

	// Token: 0x060000D6 RID: 214 RVA: 0x000BC070 File Offset: 0x000BB470
	internal unsafe static UpdateResult UpdateTask(PatcherManager* patcher_manager)
	{
		UUpdateResult uupdateResult;
		<Module>.Patcher.UResultBase.{ctor}(ref uupdateResult);
		UpdateResult updateResult;
		try
		{
			<Module>.std.basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>.=(ref uupdateResult, patcher_manager + 8L / (long)sizeof(PatcherManager));
			<Module>.PatcherManager.Update(patcher_manager, (ref uupdateResult) + 32, (ref uupdateResult) + 36, (ref uupdateResult) + 40, (ref uupdateResult) + 72, (ref uupdateResult) + 76);
			updateResult = new UpdateResult(<Module>.msclr.interop.marshal_as<class\u0020Patcher::ResultBase\u0020^,struct\u0020Patcher::UResultBase>(ref uupdateResult));
		}
		catch
		{
			<Module>.___CxxCallUnwindDtor(ldftn(UUpdateResult.{dtor}), (void*)(&uupdateResult));
			throw;
		}
		<Module>.Patcher.UResultBase.{dtor}(ref uupdateResult);
		return updateResult;
	}

	// Token: 0x060000D7 RID: 215 RVA: 0x000BBFD4 File Offset: 0x000BB3D4
	internal unsafe static void {dtor}(UUpdateResult* A_0)
	{
		try
		{
			basic_string<char,std::char_traits<char>,std::allocator<char>\u0020>* ptr = A_0 + 40L;
			try
			{
				<Module>.std.basic_string<char,std::char_traits<char>,std::allocator<char>\u0020>._Tidy_deallocate(ptr);
			}
			catch
			{
				<Module>.___CxxCallUnwindDtor(ldftn(std._String_alloc<std::_String_base_types<char,std::allocator<char>\u0020>\u0020>.{dtor}), ptr);
				throw;
			}
		}
		catch
		{
			<Module>.___CxxCallUnwindDtor(ldftn(std.basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>.{dtor}), A_0);
			throw;
		}
		try
		{
			<Module>.std.basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>._Tidy_deallocate(A_0);
		}
		catch
		{
			<Module>.___CxxCallUnwindDtor(ldftn(std._String_alloc<std::_String_base_types<wchar_t,std::allocator<wchar_t>\u0020>\u0020>.{dtor}), A_0);
			throw;
		}
	}

	// Token: 0x060000D8 RID: 216 RVA: 0x000BC0F4 File Offset: 0x000BB4F4
	internal unsafe static SimpleCheckResult SimpleCheckTask(PatcherManager* patcher_manager)
	{
		USimpleCheckResult usimpleCheckResult;
		<Module>.Patcher.UResultBase.{ctor}(ref usimpleCheckResult);
		SimpleCheckResult simpleCheckResult;
		try
		{
			<Module>.std.basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>.=(ref usimpleCheckResult, patcher_manager + 8L / (long)sizeof(PatcherManager));
			<Module>.PatcherManager.SimpleCheck(patcher_manager, (ref usimpleCheckResult) + 32, (ref usimpleCheckResult) + 36, (ref usimpleCheckResult) + 40, (ref usimpleCheckResult) + 72, (ref usimpleCheckResult) + 76);
			simpleCheckResult = new SimpleCheckResult(<Module>.msclr.interop.marshal_as<class\u0020Patcher::ResultBase\u0020^,struct\u0020Patcher::UResultBase>(ref usimpleCheckResult));
		}
		catch
		{
			<Module>.___CxxCallUnwindDtor(ldftn(USimpleCheckResult.{dtor}), (void*)(&usimpleCheckResult));
			throw;
		}
		<Module>.Patcher.UResultBase.{dtor}(ref usimpleCheckResult);
		return simpleCheckResult;
	}

	// Token: 0x060000D9 RID: 217 RVA: 0x000BBFD4 File Offset: 0x000BB3D4
	internal unsafe static void {dtor}(USimpleCheckResult* A_0)
	{
		try
		{
			basic_string<char,std::char_traits<char>,std::allocator<char>\u0020>* ptr = A_0 + 40L;
			try
			{
				<Module>.std.basic_string<char,std::char_traits<char>,std::allocator<char>\u0020>._Tidy_deallocate(ptr);
			}
			catch
			{
				<Module>.___CxxCallUnwindDtor(ldftn(std._String_alloc<std::_String_base_types<char,std::allocator<char>\u0020>\u0020>.{dtor}), ptr);
				throw;
			}
		}
		catch
		{
			<Module>.___CxxCallUnwindDtor(ldftn(std.basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>.{dtor}), A_0);
			throw;
		}
		try
		{
			<Module>.std.basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>._Tidy_deallocate(A_0);
		}
		catch
		{
			<Module>.___CxxCallUnwindDtor(ldftn(std._String_alloc<std::_String_base_types<wchar_t,std::allocator<wchar_t>\u0020>\u0020>.{dtor}), A_0);
			throw;
		}
	}

	// Token: 0x060000DA RID: 218 RVA: 0x000BC178 File Offset: 0x000BB578
	internal unsafe static FullCheckResult FullCheckTask(PatcherManager* patcher_manager)
	{
		UFullCheckResult ufullCheckResult;
		<Module>.Patcher.UResultBase.{ctor}(ref ufullCheckResult);
		FullCheckResult fullCheckResult;
		try
		{
			<Module>.std.basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>.=(ref ufullCheckResult, patcher_manager + 8L / (long)sizeof(PatcherManager));
			<Module>.PatcherManager.FullCheck(patcher_manager, (ref ufullCheckResult) + 32, (ref ufullCheckResult) + 36, (ref ufullCheckResult) + 40, (ref ufullCheckResult) + 72, (ref ufullCheckResult) + 76);
			fullCheckResult = new FullCheckResult(<Module>.msclr.interop.marshal_as<class\u0020Patcher::ResultBase\u0020^,struct\u0020Patcher::UResultBase>(ref ufullCheckResult));
		}
		catch
		{
			<Module>.___CxxCallUnwindDtor(ldftn(UFullCheckResult.{dtor}), (void*)(&ufullCheckResult));
			throw;
		}
		<Module>.Patcher.UResultBase.{dtor}(ref ufullCheckResult);
		return fullCheckResult;
	}

	// Token: 0x060000DB RID: 219 RVA: 0x000BBFD4 File Offset: 0x000BB3D4
	internal unsafe static void {dtor}(UFullCheckResult* A_0)
	{
		try
		{
			basic_string<char,std::char_traits<char>,std::allocator<char>\u0020>* ptr = A_0 + 40L;
			try
			{
				<Module>.std.basic_string<char,std::char_traits<char>,std::allocator<char>\u0020>._Tidy_deallocate(ptr);
			}
			catch
			{
				<Module>.___CxxCallUnwindDtor(ldftn(std._String_alloc<std::_String_base_types<char,std::allocator<char>\u0020>\u0020>.{dtor}), ptr);
				throw;
			}
		}
		catch
		{
			<Module>.___CxxCallUnwindDtor(ldftn(std.basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>.{dtor}), A_0);
			throw;
		}
		try
		{
			<Module>.std.basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>._Tidy_deallocate(A_0);
		}
		catch
		{
			<Module>.___CxxCallUnwindDtor(ldftn(std._String_alloc<std::_String_base_types<wchar_t,std::allocator<wchar_t>\u0020>\u0020>.{dtor}), A_0);
			throw;
		}
	}

	// Token: 0x060000DC RID: 220 RVA: 0x000BC5D0 File Offset: 0x000BB9D0
	internal unsafe static InstallResult InstallTask(PatcherManager* patcher_manager)
	{
		UInstallResult uinstallResult;
		<Module>.Patcher.UResultBase.{ctor}(ref uinstallResult);
		InstallResult installResult3;
		try
		{
			<Module>.std.basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>.=(ref uinstallResult, patcher_manager + 8L / (long)sizeof(PatcherManager));
			int num = 0;
			int num2 = 0;
			<Module>.PatcherManager.CheckUpdate(patcher_manager, <Module>.ObjectModule<PatcherNativeObject>.GetInstance() + 40L, (ref uinstallResult) + 32, ref num, ref num2, (ref uinstallResult) + 36, (ref uinstallResult) + 40, (ref uinstallResult) + 72, (ref uinstallResult) + 76);
			InstallResult installResult;
			InstallResult installResult2;
			if (2 == *((ref uinstallResult) + 32))
			{
				*((ref uinstallResult) + 32) = 0;
				installResult = new InstallResult(<Module>.msclr.interop.marshal_as<class\u0020Patcher::ResultBase\u0020^,struct\u0020Patcher::UResultBase>(ref uinstallResult));
			}
			else if (3 == *((ref uinstallResult) + 32))
			{
				<Module>.PatcherManager.Update(patcher_manager, (ref uinstallResult) + 32, (ref uinstallResult) + 36, (ref uinstallResult) + 40, (ref uinstallResult) + 72, (ref uinstallResult) + 76);
				installResult = new InstallResult(<Module>.msclr.interop.marshal_as<class\u0020Patcher::ResultBase\u0020^,struct\u0020Patcher::UResultBase>(ref uinstallResult));
			}
			else
			{
				if (4 == *((ref uinstallResult) + 32))
				{
					<Module>.PatcherManager.FullCheck(patcher_manager, (ref uinstallResult) + 32, (ref uinstallResult) + 36, (ref uinstallResult) + 40, (ref uinstallResult) + 72, (ref uinstallResult) + 76);
					installResult2 = new InstallResult(<Module>.msclr.interop.marshal_as<class\u0020Patcher::ResultBase\u0020^,struct\u0020Patcher::UResultBase>(ref uinstallResult));
					goto IL_D2;
				}
				installResult3 = new InstallResult(<Module>.msclr.interop.marshal_as<class\u0020Patcher::ResultBase\u0020^,struct\u0020Patcher::UResultBase>(ref uinstallResult));
				goto IL_E3;
			}
			installResult2 = installResult;
			IL_D2:
			installResult3 = installResult2;
			IL_E3:;
		}
		catch
		{
			<Module>.___CxxCallUnwindDtor(ldftn(UInstallResult.{dtor}), (void*)(&uinstallResult));
			throw;
		}
		<Module>.Patcher.UResultBase.{dtor}(ref uinstallResult);
		return installResult3;
	}

	// Token: 0x060000DD RID: 221 RVA: 0x000BBFD4 File Offset: 0x000BB3D4
	internal unsafe static void {dtor}(UInstallResult* A_0)
	{
		try
		{
			basic_string<char,std::char_traits<char>,std::allocator<char>\u0020>* ptr = A_0 + 40L;
			try
			{
				<Module>.std.basic_string<char,std::char_traits<char>,std::allocator<char>\u0020>._Tidy_deallocate(ptr);
			}
			catch
			{
				<Module>.___CxxCallUnwindDtor(ldftn(std._String_alloc<std::_String_base_types<char,std::allocator<char>\u0020>\u0020>.{dtor}), ptr);
				throw;
			}
		}
		catch
		{
			<Module>.___CxxCallUnwindDtor(ldftn(std.basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>.{dtor}), A_0);
			throw;
		}
		try
		{
			<Module>.std.basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>._Tidy_deallocate(A_0);
		}
		catch
		{
			<Module>.___CxxCallUnwindDtor(ldftn(std._String_alloc<std::_String_base_types<wchar_t,std::allocator<wchar_t>\u0020>\u0020>.{dtor}), A_0);
			throw;
		}
	}

	// Token: 0x060000DE RID: 222 RVA: 0x000BC6F4 File Offset: 0x000BBAF4
	[return: MarshalAs(UnmanagedType.U1)]
	internal unsafe static bool Init(ObjectModule<PatcherNativeObject>* A_0, sbyte* ini_buffer, ulong ini_buffer_size, App.AddWebBrowserCreateCallbackFn addWbCreateCb)
	{
		uint num = 0U;
		uint num2 = (uint)ini_buffer_size;
		@byte* ptr = (@byte*)ini_buffer;
		shared_ptr<IniParser> shared_ptr<IniParser>;
		ObjectModule<PatcherNativeObject>* ptr3;
		try
		{
			shared_ptr<IniParser>* ptr2 = <Module>.std.make_shared<class\u0020IniParser,enum\u0020std::byte\u0020const\u0020*\u0020&,unsigned\u0020int\u0020&>(&shared_ptr<IniParser>, ref ptr, ref num2);
			num = 1U;
			ptr3 = A_0 + 80L;
			<Module>.std.shared_ptr<IniParser>.=(ptr3, ptr2);
			num = 1U & 4294967294U;
		}
		catch
		{
			if ((num & 1U) != 0U)
			{
				num &= 4294967294U;
				<Module>.___CxxCallUnwindDtor(ldftn(std.shared_ptr<IniParser>.{dtor}), (void*)(&shared_ptr<IniParser>));
			}
			throw;
		}
		if (*((ref shared_ptr<IniParser>) + 8) != 0L)
		{
			<Module>.std._Ref_count_base._Decref(*((ref shared_ptr<IniParser>) + 8));
		}
		if (*ptr3 == 0L)
		{
			return false;
		}
		if (addWbCreateCb != null)
		{
			<Module>.gcroot<LauncherView::App::AddWebBrowserCreateCallbackFn\u0020^>.=(A_0 + 96L, addWbCreateCb);
		}
		return 0 != <Module>.PatcherNativeObject.Init(A_0);
	}

	// Token: 0x060000DF RID: 223 RVA: 0x000BBAD8 File Offset: 0x000BAED8
	[SecuritySafeCritical]
	internal unsafe static App.AddWebBrowserCreateCallbackFn PE$AAVAddWebBrowserCreateCallbackFn@App@LauncherView@@(gcroot<LauncherView::App::AddWebBrowserCreateCallbackFn\u0020^>* A_0)
	{
		IntPtr intPtr = new IntPtr(*A_0);
		return ((GCHandle)intPtr).Target;
	}

	// Token: 0x060000E0 RID: 224 RVA: 0x000BBAFC File Offset: 0x000BAEFC
	[DebuggerStepThrough]
	[SecurityCritical]
	internal unsafe static gcroot<LauncherView::App::AddWebBrowserCreateCallbackFn\u0020^>* =(gcroot<LauncherView::App::AddWebBrowserCreateCallbackFn\u0020^>* A_0, App.AddWebBrowserCreateCallbackFn t)
	{
		IntPtr intPtr = new IntPtr(*A_0);
		((GCHandle)intPtr).Target = t;
		return A_0;
	}

	// Token: 0x060000E1 RID: 225 RVA: 0x000BBF4C File Offset: 0x000BB34C
	internal unsafe static shared_ptr<IniParser>* =(shared_ptr<IniParser>* A_0, shared_ptr<IniParser>* _Right)
	{
		shared_ptr<IniParser> shared_ptr<IniParser> = *_Right;
		*((ref shared_ptr<IniParser>) + 8) = *(_Right + 8L);
		*_Right = 0L;
		*(_Right + 8L) = 0L;
		try
		{
			IniParser* ptr = shared_ptr<IniParser>;
			shared_ptr<IniParser> = *A_0;
			*A_0 = ptr;
			_Ref_count_base* ptr2 = *((ref shared_ptr<IniParser>) + 8);
			*((ref shared_ptr<IniParser>) + 8) = *(A_0 + 8L);
			*(A_0 + 8L) = ptr2;
		}
		catch
		{
			<Module>.___CxxCallUnwindDtor(ldftn(std.shared_ptr<IniParser>.{dtor}), (void*)(&shared_ptr<IniParser>));
			throw;
		}
		if (*((ref shared_ptr<IniParser>) + 8) != 0L)
		{
			<Module>.std._Ref_count_base._Decref(*((ref shared_ptr<IniParser>) + 8));
		}
		return A_0;
	}

	// Token: 0x060000E2 RID: 226 RVA: 0x000BC8CC File Offset: 0x000BBCCC
	internal unsafe static URequestProgressResult* {ctor}(URequestProgressResult* A_0)
	{
		<Module>.std.basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>.{ctor}(A_0);
		try
		{
			*(A_0 + 32L) = 0;
			<Module>.std.basic_string<char,std::char_traits<char>,std::allocator<char>\u0020>.{ctor}(A_0 + 40L);
			try
			{
				*(A_0 + 72L) = 0L;
				*(A_0 + 80L) = 0L;
				*(A_0 + 88L) = 0;
				*(A_0 + 92L) = 0;
				*(A_0 + 96L) = 0;
				*(A_0 + 112L) = 0L;
				*(A_0 + 120L) = 0L;
				*(A_0 + 128L) = 0L;
				*(A_0 + 136L) = 0;
			}
			catch
			{
				<Module>.___CxxCallUnwindDtor(ldftn(std.basic_string<char,std::char_traits<char>,std::allocator<char>\u0020>.{dtor}), (void*)(A_0 + (byte*)40L));
				throw;
			}
		}
		catch
		{
			<Module>.___CxxCallUnwindDtor(ldftn(std.basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>.{dtor}), A_0);
			throw;
		}
		return A_0;
	}

	// Token: 0x060000E3 RID: 227 RVA: 0x000BCA34 File Offset: 0x000BBE34
	internal unsafe static UResultBase* {ctor}(UResultBase* A_0)
	{
		<Module>.std.basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>.{ctor}(A_0);
		try
		{
			*(A_0 + 32L) = 0;
			*(A_0 + 36L) = 0;
			<Module>.std.basic_string<char,std::char_traits<char>,std::allocator<char>\u0020>.{ctor}(A_0 + 40L);
			try
			{
				*(A_0 + 72L) = 0;
				*(A_0 + 76L) = 0;
			}
			catch
			{
				<Module>.___CxxCallUnwindDtor(ldftn(std.basic_string<char,std::char_traits<char>,std::allocator<char>\u0020>.{dtor}), (void*)(A_0 + (byte*)40L));
				throw;
			}
		}
		catch
		{
			<Module>.___CxxCallUnwindDtor(ldftn(std.basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>.{dtor}), A_0);
			throw;
		}
		return A_0;
	}

	// Token: 0x060000E4 RID: 228 RVA: 0x000BDC70 File Offset: 0x000BD070
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

	// Token: 0x060000E5 RID: 229 RVA: 0x000BDD2C File Offset: 0x000BD12C
	[SecurityCritical]
	[HandleProcessCorruptedStateExceptions]
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

	// Token: 0x060000E6 RID: 230 RVA: 0x000BDCB4 File Offset: 0x000BD0B4
	[SecurityCritical]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
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

	// Token: 0x060000E7 RID: 231 RVA: 0x000BDCD4 File Offset: 0x000BD0D4
	[HandleProcessCorruptedStateExceptions]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	[SecurityCritical]
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

	// Token: 0x060000E8 RID: 232 RVA: 0x000BE4D4 File Offset: 0x000BD8D4
	internal static void <CrtImplementationDetails>.ThrowNestedModuleLoadException(Exception innerException, Exception nestedException)
	{
		throw new ModuleLoadExceptionHandlerException("A nested exception occurred after the primary exception that caused the C++ module to fail to load.\n", innerException, nestedException);
	}

	// Token: 0x060000E9 RID: 233 RVA: 0x000BDF00 File Offset: 0x000BD300
	internal static void <CrtImplementationDetails>.ThrowModuleLoadException(string errorMessage)
	{
		throw new ModuleLoadException(errorMessage);
	}

	// Token: 0x060000EA RID: 234 RVA: 0x000BDF14 File Offset: 0x000BD314
	internal static void <CrtImplementationDetails>.ThrowModuleLoadException(string errorMessage, Exception innerException)
	{
		throw new ModuleLoadException(errorMessage, innerException);
	}

	// Token: 0x060000EB RID: 235 RVA: 0x000BE030 File Offset: 0x000BD430
	internal static void <CrtImplementationDetails>.RegisterModuleUninitializer(EventHandler handler)
	{
		ModuleUninitializer._ModuleUninitializer.AddHandler(handler);
	}

	// Token: 0x060000EC RID: 236 RVA: 0x000BE048 File Offset: 0x000BD448
	[SecuritySafeCritical]
	internal unsafe static Guid <CrtImplementationDetails>.FromGUID(_GUID* guid)
	{
		Guid guid2 = new Guid((uint)(*guid), *(guid + 4L), *(guid + 6L), *(guid + 8L), *(guid + 9L), *(guid + 10L), *(guid + 11L), *(guid + 12L), *(guid + 13L), *(guid + 14L), *(guid + 15L));
		return guid2;
	}

	// Token: 0x060000ED RID: 237 RVA: 0x000BE098 File Offset: 0x000BD498
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

	// Token: 0x060000EE RID: 238 RVA: 0x000BE118 File Offset: 0x000BD518
	internal unsafe static void __release_appdomain(IUnknown* ppUnk)
	{
		uint num = calli(System.UInt32 modopt(System.Runtime.CompilerServices.IsLong) modopt(System.Runtime.CompilerServices.CallConvCdecl)(System.IntPtr), ppUnk, *(*(long*)ppUnk + 16L));
	}

	// Token: 0x060000EF RID: 239 RVA: 0x000BE134 File Offset: 0x000BD534
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

	// Token: 0x060000F0 RID: 240 RVA: 0x000BE194 File Offset: 0x000BD594
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

	// Token: 0x060000F1 RID: 241 RVA: 0x000BE220 File Offset: 0x000BD620
	[return: MarshalAs(UnmanagedType.U1)]
	internal static bool __scrt_is_safe_for_managed_code()
	{
		return (<Module>.__scrt_native_dllmain_reason <= 1U) ? 0 : 1;
	}

	// Token: 0x060000F2 RID: 242 RVA: 0x000BE250 File Offset: 0x000BD650
	[SecuritySafeCritical]
	internal unsafe static int <CrtImplementationDetails>.DefaultDomain.DoNothing(void* cookie)
	{
		GC.KeepAlive(int.MaxValue);
		return 0;
	}

	// Token: 0x060000F3 RID: 243 RVA: 0x000BE270 File Offset: 0x000BD670
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

	// Token: 0x060000F4 RID: 244 RVA: 0x000BE2C4 File Offset: 0x000BD6C4
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

	// Token: 0x060000F5 RID: 245 RVA: 0x000BE344 File Offset: 0x000BD744
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

	// Token: 0x060000F6 RID: 246 RVA: 0x000BE37C File Offset: 0x000BD77C
	[return: MarshalAs(UnmanagedType.U1)]
	internal static bool <CrtImplementationDetails>.DefaultDomain.NeedsUninitialization()
	{
		return <Module>.?Entered@DefaultDomain@<CrtImplementationDetails>@@2_NA;
	}

	// Token: 0x060000F7 RID: 247 RVA: 0x000BE390 File Offset: 0x000BD790
	[SecurityCritical]
	internal static void <CrtImplementationDetails>.DefaultDomain.Initialize()
	{
		<Module>.<CrtImplementationDetails>.DoCallBackInDefaultDomain(<Module>.__unep@?DoNothing@DefaultDomain@<CrtImplementationDetails>@@$$FCAJPEAX@Z, null);
	}

	// Token: 0x060000F8 RID: 248 RVA: 0x00001314 File Offset: 0x00000714
	internal static void ??__E?Initialized@CurrentDomain@<CrtImplementationDetails>@@$$Q2HA@@YMXXZ()
	{
		<Module>.?Initialized@CurrentDomain@<CrtImplementationDetails>@@$$Q2HA = 0;
	}

	// Token: 0x060000F9 RID: 249 RVA: 0x00001328 File Offset: 0x00000728
	internal static void ??__E?Uninitialized@CurrentDomain@<CrtImplementationDetails>@@$$Q2HA@@YMXXZ()
	{
		<Module>.?Uninitialized@CurrentDomain@<CrtImplementationDetails>@@$$Q2HA = 0;
	}

	// Token: 0x060000FA RID: 250 RVA: 0x0000133C File Offset: 0x0000073C
	internal static void ??__E?IsDefaultDomain@CurrentDomain@<CrtImplementationDetails>@@$$Q2_NA@@YMXXZ()
	{
		<Module>.?IsDefaultDomain@CurrentDomain@<CrtImplementationDetails>@@$$Q2_NA = false;
	}

	// Token: 0x060000FB RID: 251 RVA: 0x00001350 File Offset: 0x00000750
	internal static void ??__E?InitializedVtables@CurrentDomain@<CrtImplementationDetails>@@$$Q2W4Progress@2@A@@YMXXZ()
	{
		<Module>.?InitializedVtables@CurrentDomain@<CrtImplementationDetails>@@$$Q2W4Progress@2@A = (Progress)0;
	}

	// Token: 0x060000FC RID: 252 RVA: 0x00001364 File Offset: 0x00000764
	internal static void ??__E?InitializedNative@CurrentDomain@<CrtImplementationDetails>@@$$Q2W4Progress@2@A@@YMXXZ()
	{
		<Module>.?InitializedNative@CurrentDomain@<CrtImplementationDetails>@@$$Q2W4Progress@2@A = (Progress)0;
	}

	// Token: 0x060000FD RID: 253 RVA: 0x00001378 File Offset: 0x00000778
	internal static void ??__E?InitializedPerProcess@CurrentDomain@<CrtImplementationDetails>@@$$Q2W4Progress@2@A@@YMXXZ()
	{
		<Module>.?InitializedPerProcess@CurrentDomain@<CrtImplementationDetails>@@$$Q2W4Progress@2@A = (Progress)0;
	}

	// Token: 0x060000FE RID: 254 RVA: 0x0000138C File Offset: 0x0000078C
	internal static void ??__E?InitializedPerAppDomain@CurrentDomain@<CrtImplementationDetails>@@$$Q2W4Progress@2@A@@YMXXZ()
	{
		<Module>.?InitializedPerAppDomain@CurrentDomain@<CrtImplementationDetails>@@$$Q2W4Progress@2@A = (Progress)0;
	}

	// Token: 0x060000FF RID: 255 RVA: 0x000BE528 File Offset: 0x000BD928
	[DebuggerStepThrough]
	[SecuritySafeCritical]
	internal unsafe static void <CrtImplementationDetails>.LanguageSupport.InitializeVtables(LanguageSupport* A_0)
	{
		<Module>.gcroot<System::String\u0020^>.=(A_0, "The C++ module failed to load during vtable initialization.\n");
		<Module>.?InitializedVtables@CurrentDomain@<CrtImplementationDetails>@@$$Q2W4Progress@2@A = (Progress)1;
		<Module>._initterm_m((method*)(&<Module>.__xi_vt_a), (method*)(&<Module>.__xi_vt_z));
		<Module>.?InitializedVtables@CurrentDomain@<CrtImplementationDetails>@@$$Q2W4Progress@2@A = (Progress)2;
	}

	// Token: 0x06000100 RID: 256 RVA: 0x000BE55C File Offset: 0x000BD95C
	[SecuritySafeCritical]
	internal unsafe static void <CrtImplementationDetails>.LanguageSupport.InitializeDefaultAppDomain(LanguageSupport* A_0)
	{
		<Module>.gcroot<System::String\u0020^>.=(A_0, "The C++ module failed to load while attempting to initialize the default appdomain.\n");
		<Module>.<CrtImplementationDetails>.DefaultDomain.Initialize();
	}

	// Token: 0x06000101 RID: 257 RVA: 0x000BE57C File Offset: 0x000BD97C
	[DebuggerStepThrough]
	[SecuritySafeCritical]
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

	// Token: 0x06000102 RID: 258 RVA: 0x000BE60C File Offset: 0x000BDA0C
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

	// Token: 0x06000103 RID: 259 RVA: 0x000BE64C File Offset: 0x000BDA4C
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

	// Token: 0x06000104 RID: 260 RVA: 0x000BE688 File Offset: 0x000BDA88
	[DebuggerStepThrough]
	[SecurityCritical]
	internal unsafe static void <CrtImplementationDetails>.LanguageSupport.InitializeUninitializer(LanguageSupport* A_0)
	{
		<Module>.gcroot<System::String\u0020^>.=(A_0, "The C++ module failed to load during registration for the unload events.\n");
		<Module>.<CrtImplementationDetails>.RegisterModuleUninitializer(new EventHandler(<Module>.<CrtImplementationDetails>.LanguageSupport.DomainUnload));
	}

	// Token: 0x06000105 RID: 261 RVA: 0x000BE6B4 File Offset: 0x000BDAB4
	[DebuggerStepThrough]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	[SecurityCritical]
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

	// Token: 0x06000106 RID: 262 RVA: 0x000BE3AC File Offset: 0x000BD7AC
	[SecurityCritical]
	internal static void <CrtImplementationDetails>.LanguageSupport.UninitializeAppDomain()
	{
		<Module>._app_exit_callback();
	}

	// Token: 0x06000107 RID: 263 RVA: 0x000BE3C0 File Offset: 0x000BD7C0
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

	// Token: 0x06000108 RID: 264 RVA: 0x000BE3F8 File Offset: 0x000BD7F8
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

	// Token: 0x06000109 RID: 265 RVA: 0x000BE430 File Offset: 0x000BD830
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

	// Token: 0x0600010A RID: 266 RVA: 0x000BE7B8 File Offset: 0x000BDBB8
	[SecurityCritical]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	[DebuggerStepThrough]
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

	// Token: 0x0600010B RID: 267 RVA: 0x000BE82C File Offset: 0x000BDC2C
	[SecurityCritical]
	internal unsafe static LanguageSupport* <CrtImplementationDetails>.LanguageSupport.{ctor}(LanguageSupport* A_0)
	{
		<Module>.gcroot<System::String\u0020^>.{ctor}(A_0);
		return A_0;
	}

	// Token: 0x0600010C RID: 268 RVA: 0x000BE844 File Offset: 0x000BDC44
	[SecurityCritical]
	internal unsafe static void <CrtImplementationDetails>.LanguageSupport.{dtor}(LanguageSupport* A_0)
	{
		<Module>.gcroot<System::String\u0020^>.{dtor}(A_0);
	}

	// Token: 0x0600010D RID: 269 RVA: 0x000BE858 File Offset: 0x000BDC58
	[SecurityCritical]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	[DebuggerStepThrough]
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

	// Token: 0x0600010E RID: 270 RVA: 0x000BE914 File Offset: 0x000BDD14
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

	// Token: 0x0600010F RID: 271 RVA: 0x000BBAD8 File Offset: 0x000BAED8
	[SecuritySafeCritical]
	internal unsafe static string PE$AAVString@System@@(gcroot<System::String\u0020^>* A_0)
	{
		IntPtr intPtr = new IntPtr(*A_0);
		return ((GCHandle)intPtr).Target;
	}

	// Token: 0x06000110 RID: 272 RVA: 0x000BBAFC File Offset: 0x000BAEFC
	[SecurityCritical]
	[DebuggerStepThrough]
	internal unsafe static gcroot<System::String\u0020^>* =(gcroot<System::String\u0020^>* A_0, string t)
	{
		IntPtr intPtr = new IntPtr(*A_0);
		((GCHandle)intPtr).Target = t;
		return A_0;
	}

	// Token: 0x06000111 RID: 273 RVA: 0x000BE46C File Offset: 0x000BD86C
	[SecurityCritical]
	[DebuggerStepThrough]
	internal unsafe static void {dtor}(gcroot<System::String\u0020^>* A_0)
	{
		IntPtr intPtr = new IntPtr(*A_0);
		((GCHandle)intPtr).Free();
		*A_0 = 0L;
	}

	// Token: 0x06000112 RID: 274 RVA: 0x000BE494 File Offset: 0x000BD894
	[DebuggerStepThrough]
	[SecuritySafeCritical]
	internal unsafe static gcroot<System::String\u0020^>* {ctor}(gcroot<System::String\u0020^>* A_0)
	{
		*A_0 = ((IntPtr)GCHandle.Alloc(null)).ToPointer();
		return A_0;
	}

	// Token: 0x06000113 RID: 275 RVA: 0x000013A0 File Offset: 0x000007A0
	internal static void ??__E?A0x8579fbf1@_Fac_tidy_reg@std@@YMXXZ()
	{
		<Module>._atexit_m(ldftn(?A0x8579fbf1.??__F?A0x8579fbf1@_Fac_tidy_reg@std@@YMXXZ));
	}

	// Token: 0x06000114 RID: 276 RVA: 0x001A913C File Offset: 0x001A853C
	internal unsafe static void ??__F?A0x8579fbf1@_Fac_tidy_reg@std@@YMXXZ()
	{
		if (<Module>.std.?A0x8579fbf1._Fac_head != null)
		{
			do
			{
				_Fac_node* ptr = <Module>.std.?A0x8579fbf1._Fac_head;
				<Module>.std.?A0x8579fbf1._Fac_head = *(long*)<Module>.std.?A0x8579fbf1._Fac_head;
				long num = *(long*)(ptr + 8L / (long)sizeof(_Fac_node));
				_Facet_base* ptr2 = calli(std._Facet_base* modopt(System.Runtime.CompilerServices.CallConvCdecl)(System.IntPtr), (IntPtr)num, *(*num + 16L));
				if (ptr2 != null)
				{
					long num2 = *(*(long*)ptr2);
					void* ptr3 = calli(System.Void* modopt(System.Runtime.CompilerServices.CallConvCdecl)(System.IntPtr,System.UInt32), ptr2, 1U, num2);
				}
				<Module>.delete((void*)ptr, 16UL);
			}
			while (<Module>.std.?A0x8579fbf1._Fac_head != null);
		}
	}

	// Token: 0x06000115 RID: 277 RVA: 0x000BE988 File Offset: 0x000BDD88
	internal unsafe static void _Facet_Register_m(_Facet_base* _This)
	{
		_Fac_node* ptr = <Module>.@new(16UL);
		_Fac_node* ptr2;
		try
		{
			if (ptr != null)
			{
				*(long*)ptr = <Module>.std.?A0x8579fbf1._Fac_head;
				*(long*)(ptr + 8L / (long)sizeof(_Fac_node)) = _This;
				ptr2 = ptr;
			}
			else
			{
				ptr2 = null;
			}
		}
		catch
		{
			<Module>.delete((void*)ptr, 16UL);
			throw;
		}
		<Module>.std.?A0x8579fbf1._Fac_head = ptr2;
	}

	// Token: 0x06000116 RID: 278 RVA: 0x000BE9E4 File Offset: 0x000BDDE4
	[SecurityCritical]
	[DebuggerStepThrough]
	internal unsafe static void _Init_thread_header_m(int* pOnce)
	{
		if (*(int*)pOnce >= -1)
		{
			<Module>._Init_thread_lock();
			if (*(int*)pOnce == 0)
			{
				*(int*)pOnce = -1;
			}
			else if (*(int*)pOnce == -1)
			{
				do
				{
					<Module>._Init_thread_wait(100);
					if (*(int*)pOnce == 0)
					{
						goto IL_36;
					}
				}
				while (*(int*)pOnce == -1);
				goto IL_42;
				IL_36:
				*(int*)pOnce = -1;
				<Module>._Init_thread_unlock();
				return;
			}
			IL_42:
			<Module>._Init_thread_unlock();
		}
	}

	// Token: 0x06000117 RID: 279 RVA: 0x000BEA38 File Offset: 0x000BDE38
	[SecurityCritical]
	[DebuggerStepThrough]
	internal unsafe static void _Init_thread_abort_m(int* pOnce)
	{
		<Module>._Init_thread_lock();
		*(int*)pOnce = 0;
		<Module>._Init_thread_notify();
		<Module>._Init_thread_unlock();
	}

	// Token: 0x06000118 RID: 280 RVA: 0x000BEA5C File Offset: 0x000BDE5C
	[DebuggerStepThrough]
	[SecurityCritical]
	internal unsafe static void _Init_thread_footer_m(int* pOnce)
	{
		<Module>._Init_thread_lock();
		<Module>._Init_global_epoch++;
		*(int*)pOnce = <Module>._Init_global_epoch;
		<Module>._Init_thread_notify();
		<Module>._Init_thread_unlock();
	}

	// Token: 0x06000119 RID: 281 RVA: 0x000BEA90 File Offset: 0x000BDE90
	[DebuggerStepThrough]
	[SecurityCritical]
	internal static ValueType <CrtImplementationDetails>.AtExitLock._handle()
	{
		if (<Module>.?_lock@AtExitLock@<CrtImplementationDetails>@@$$Q0PEAXEA != null)
		{
			IntPtr intPtr = new IntPtr(<Module>.?_lock@AtExitLock@<CrtImplementationDetails>@@$$Q0PEAXEA);
			return GCHandle.FromIntPtr(intPtr);
		}
		return null;
	}

	// Token: 0x0600011A RID: 282 RVA: 0x000BEF60 File Offset: 0x000BE360
	[SecurityCritical]
	[DebuggerStepThrough]
	internal static void <CrtImplementationDetails>.AtExitLock._lock_Construct(object value)
	{
		<Module>.?_lock@AtExitLock@<CrtImplementationDetails>@@$$Q0PEAXEA = null;
		<Module>.<CrtImplementationDetails>.AtExitLock._lock_Set(value);
	}

	// Token: 0x0600011B RID: 283 RVA: 0x000BEAC0 File Offset: 0x000BDEC0
	[DebuggerStepThrough]
	[SecurityCritical]
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

	// Token: 0x0600011C RID: 284 RVA: 0x000BEB10 File Offset: 0x000BDF10
	[SecurityCritical]
	[DebuggerStepThrough]
	internal static object <CrtImplementationDetails>.AtExitLock._lock_Get()
	{
		ValueType valueType = <Module>.<CrtImplementationDetails>.AtExitLock._handle();
		if (valueType != null)
		{
			return ((GCHandle)valueType).Target;
		}
		return null;
	}

	// Token: 0x0600011D RID: 285 RVA: 0x000BEB34 File Offset: 0x000BDF34
	[SecurityCritical]
	[DebuggerStepThrough]
	internal static void <CrtImplementationDetails>.AtExitLock._lock_Destruct()
	{
		ValueType valueType = <Module>.<CrtImplementationDetails>.AtExitLock._handle();
		if (valueType != null)
		{
			((GCHandle)valueType).Free();
			<Module>.?_lock@AtExitLock@<CrtImplementationDetails>@@$$Q0PEAXEA = null;
		}
	}

	// Token: 0x0600011E RID: 286 RVA: 0x000BEB5C File Offset: 0x000BDF5C
	[DebuggerStepThrough]
	[SecurityCritical]
	[return: MarshalAs(UnmanagedType.U1)]
	internal static bool <CrtImplementationDetails>.AtExitLock.IsInitialized()
	{
		return (<Module>.<CrtImplementationDetails>.AtExitLock._lock_Get() != null) ? 1 : 0;
	}

	// Token: 0x0600011F RID: 287 RVA: 0x000BEF7C File Offset: 0x000BE37C
	[DebuggerStepThrough]
	[SecurityCritical]
	internal static void <CrtImplementationDetails>.AtExitLock.AddRef()
	{
		if (<Module>.<CrtImplementationDetails>.AtExitLock.IsInitialized() == null)
		{
			<Module>.<CrtImplementationDetails>.AtExitLock._lock_Construct(new object());
			<Module>.?_ref_count@AtExitLock@<CrtImplementationDetails>@@$$Q0HA = 0;
		}
		<Module>.?_ref_count@AtExitLock@<CrtImplementationDetails>@@$$Q0HA++;
	}

	// Token: 0x06000120 RID: 288 RVA: 0x000BEB78 File Offset: 0x000BDF78
	[SecurityCritical]
	[DebuggerStepThrough]
	internal static void <CrtImplementationDetails>.AtExitLock.RemoveRef()
	{
		<Module>.?_ref_count@AtExitLock@<CrtImplementationDetails>@@$$Q0HA += -1;
		if (<Module>.?_ref_count@AtExitLock@<CrtImplementationDetails>@@$$Q0HA == 0)
		{
			<Module>.<CrtImplementationDetails>.AtExitLock._lock_Destruct();
		}
	}

	// Token: 0x06000121 RID: 289 RVA: 0x000BEBA0 File Offset: 0x000BDFA0
	[DebuggerStepThrough]
	[SecurityCritical]
	internal static void <CrtImplementationDetails>.AtExitLock.Enter()
	{
		Monitor.Enter(<Module>.<CrtImplementationDetails>.AtExitLock._lock_Get());
	}

	// Token: 0x06000122 RID: 290 RVA: 0x000BEBB8 File Offset: 0x000BDFB8
	[DebuggerStepThrough]
	[SecurityCritical]
	internal static void <CrtImplementationDetails>.AtExitLock.Exit()
	{
		Monitor.Exit(<Module>.<CrtImplementationDetails>.AtExitLock._lock_Get());
	}

	// Token: 0x06000123 RID: 291 RVA: 0x000BEBD0 File Offset: 0x000BDFD0
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

	// Token: 0x06000124 RID: 292 RVA: 0x000BEBF0 File Offset: 0x000BDFF0
	[DebuggerStepThrough]
	[SecurityCritical]
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

	// Token: 0x06000125 RID: 293 RVA: 0x000BEFAC File Offset: 0x000BE3AC
	[SecurityCritical]
	[DebuggerStepThrough]
	[return: MarshalAs(UnmanagedType.U1)]
	internal static bool __alloc_global_lock()
	{
		<Module>.<CrtImplementationDetails>.AtExitLock.AddRef();
		return <Module>.<CrtImplementationDetails>.AtExitLock.IsInitialized();
	}

	// Token: 0x06000126 RID: 294 RVA: 0x000BEC10 File Offset: 0x000BE010
	[SecurityCritical]
	[DebuggerStepThrough]
	internal static void __dealloc_global_lock()
	{
		<Module>.<CrtImplementationDetails>.AtExitLock.RemoveRef();
	}

	// Token: 0x06000127 RID: 295 RVA: 0x000BEC24 File Offset: 0x000BE024
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

	// Token: 0x06000128 RID: 296 RVA: 0x000BED9C File Offset: 0x000BE19C
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

	// Token: 0x06000129 RID: 297 RVA: 0x000BEFC4 File Offset: 0x000BE3C4
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

	// Token: 0x0600012A RID: 298 RVA: 0x000BEE4C File Offset: 0x000BE24C
	[SecurityCritical]
	internal unsafe static int _atexit_m(method func)
	{
		return <Module>._atexit_helper(<Module>.EncodePointer(func), &<Module>.?A0x5f1aee9f.__exit_list_size, &<Module>.?A0x5f1aee9f.__onexitend_m, &<Module>.?A0x5f1aee9f.__onexitbegin_m);
	}

	// Token: 0x0600012B RID: 299 RVA: 0x000BF00C File Offset: 0x000BE40C
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

	// Token: 0x0600012C RID: 300 RVA: 0x000BEE74 File Offset: 0x000BE274
	[SecurityCritical]
	[HandleProcessCorruptedStateExceptions]
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

	// Token: 0x0600012D RID: 301
	[SuppressUnmanagedCodeSecurity]
	[SecurityCritical]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	[DllImport("KERNEL32.dll")]
	public unsafe static extern void* DecodePointer(void* _Ptr);

	// Token: 0x0600012E RID: 302
	[SecurityCritical]
	[SuppressUnmanagedCodeSecurity]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	[DllImport("KERNEL32.dll")]
	public unsafe static extern void* EncodePointer(void* _Ptr);

	// Token: 0x0600012F RID: 303 RVA: 0x000BF050 File Offset: 0x000BE450
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

	// Token: 0x06000130 RID: 304 RVA: 0x000BF080 File Offset: 0x000BE480
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

	// Token: 0x06000131 RID: 305 RVA: 0x000BF0A8 File Offset: 0x000BE4A8
	[DebuggerStepThrough]
	internal static ModuleHandle <CrtImplementationDetails>.ThisModule.Handle()
	{
		return typeof(ThisModule).Module.ModuleHandle;
	}

	// Token: 0x06000132 RID: 306 RVA: 0x000BF0F8 File Offset: 0x000BE4F8
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

	// Token: 0x06000133 RID: 307 RVA: 0x000BF0CC File Offset: 0x000BE4CC
	[DebuggerStepThrough]
	[SecurityCritical]
	internal static method <CrtImplementationDetails>.ThisModule.ResolveMethod<void\u0020const\u0020*\u0020__clrcall(void)>(method methodToken)
	{
		return <Module>.<CrtImplementationDetails>.ThisModule.Handle().ResolveMethodHandle(methodToken).GetFunctionPointer()
			.ToPointer();
	}

	// Token: 0x06000134 RID: 308 RVA: 0x001A7B39 File Offset: 0x001A6F39
	[SuppressUnmanagedCodeSecurity]
	[DllImport("", CallingConvention = CallingConvention.Cdecl, SetLastError = true)]
	[MethodImpl(MethodImplOptions.Unmanaged, MethodCodeType = MethodCodeType.Native)]
	internal static extern void _invalid_parameter_noinfo_noreturn();

	// Token: 0x06000135 RID: 309 RVA: 0x001A7CA1 File Offset: 0x001A70A1
	[SuppressUnmanagedCodeSecurity]
	[DllImport("", CallingConvention = CallingConvention.Cdecl, SetLastError = true)]
	[MethodImpl(MethodImplOptions.Unmanaged, MethodCodeType = MethodCodeType.Native)]
	internal unsafe static extern int WideCharToMultiByte(uint, uint, char*, int, sbyte*, int, sbyte*, int*);

	// Token: 0x06000136 RID: 310 RVA: 0x001A7AD3 File Offset: 0x001A6ED3
	[SuppressUnmanagedCodeSecurity]
	[DllImport("", CallingConvention = CallingConvention.Cdecl, SetLastError = true)]
	[MethodImpl(MethodImplOptions.Unmanaged, MethodCodeType = MethodCodeType.Native)]
	internal static extern void __std_terminate();

	// Token: 0x06000137 RID: 311 RVA: 0x000BD040 File Offset: 0x000BC440
	[SuppressUnmanagedCodeSecurity]
	[MethodImpl(MethodImplOptions.Unmanaged | MethodImplOptions.PreserveSig, MethodCodeType = MethodCodeType.Native)]
	internal unsafe static extern void* new[](ulong);

	// Token: 0x06000138 RID: 312 RVA: 0x000BCFF4 File Offset: 0x000BC3F4
	[SuppressUnmanagedCodeSecurity]
	[MethodImpl(MethodImplOptions.Unmanaged | MethodImplOptions.PreserveSig, MethodCodeType = MethodCodeType.Native)]
	internal unsafe static extern void delete(void*, ulong);

	// Token: 0x06000139 RID: 313 RVA: 0x001A7AE5 File Offset: 0x001A6EE5
	[SuppressUnmanagedCodeSecurity]
	[DllImport("", CallingConvention = CallingConvention.Cdecl, SetLastError = true)]
	[MethodImpl(MethodImplOptions.Unmanaged, MethodCodeType = MethodCodeType.Native)]
	internal unsafe static extern void __std_exception_copy(__std_exception_data*, __std_exception_data*);

	// Token: 0x0600013A RID: 314 RVA: 0x000BCFFC File Offset: 0x000BC3FC
	[SuppressUnmanagedCodeSecurity]
	[MethodImpl(MethodImplOptions.Unmanaged | MethodImplOptions.PreserveSig, MethodCodeType = MethodCodeType.Native)]
	internal unsafe static extern void* @new(ulong);

	// Token: 0x0600013B RID: 315 RVA: 0x001A824C File Offset: 0x001A764C
	[SuppressUnmanagedCodeSecurity]
	[MethodImpl(MethodImplOptions.Unmanaged | MethodImplOptions.PreserveSig, MethodCodeType = MethodCodeType.Native)]
	internal unsafe static extern void delete[](void*, ulong);

	// Token: 0x0600013C RID: 316 RVA: 0x000BD038 File Offset: 0x000BC438
	[SuppressUnmanagedCodeSecurity]
	[MethodImpl(MethodImplOptions.Unmanaged | MethodImplOptions.PreserveSig, MethodCodeType = MethodCodeType.Native)]
	internal unsafe static extern void delete[](void*);

	// Token: 0x0600013D RID: 317 RVA: 0x001A7ADF File Offset: 0x001A6EDF
	[SuppressUnmanagedCodeSecurity]
	[DllImport("", CallingConvention = CallingConvention.Cdecl, SetLastError = true)]
	[MethodImpl(MethodImplOptions.Unmanaged, MethodCodeType = MethodCodeType.Native)]
	internal unsafe static extern void __std_exception_destroy(__std_exception_data*);

	// Token: 0x0600013E RID: 318 RVA: 0x001A821B File Offset: 0x001A761B
	[SuppressUnmanagedCodeSecurity]
	[DllImport("", CallingConvention = CallingConvention.Cdecl, SetLastError = true)]
	[MethodImpl(MethodImplOptions.Unmanaged, MethodCodeType = MethodCodeType.Native)]
	internal unsafe static extern basic_ostream<wchar_t,std::char_traits<wchar_t>\u0020>* <<(basic_ostream<wchar_t,std::char_traits<wchar_t>\u0020>*, long);

	// Token: 0x0600013F RID: 319 RVA: 0x001A8221 File Offset: 0x001A7621
	[SuppressUnmanagedCodeSecurity]
	[DllImport("", CallingConvention = CallingConvention.Cdecl, SetLastError = true)]
	[MethodImpl(MethodImplOptions.Unmanaged, MethodCodeType = MethodCodeType.Native)]
	internal unsafe static extern basic_ostream<wchar_t,std::char_traits<wchar_t>\u0020>* <<(basic_ostream<wchar_t,std::char_traits<wchar_t>\u0020>*, uint);

	// Token: 0x06000140 RID: 320 RVA: 0x001A8215 File Offset: 0x001A7615
	[SuppressUnmanagedCodeSecurity]
	[DllImport("", CallingConvention = CallingConvention.Cdecl, SetLastError = true)]
	[MethodImpl(MethodImplOptions.Unmanaged, MethodCodeType = MethodCodeType.Native)]
	internal unsafe static extern basic_ostream<wchar_t,std::char_traits<wchar_t>\u0020>* <<(basic_ostream<wchar_t,std::char_traits<wchar_t>\u0020>*, int);

	// Token: 0x06000141 RID: 321 RVA: 0x001A822D File Offset: 0x001A762D
	[SuppressUnmanagedCodeSecurity]
	[DllImport("", CallingConvention = CallingConvention.Cdecl, SetLastError = true)]
	[MethodImpl(MethodImplOptions.Unmanaged, MethodCodeType = MethodCodeType.Native)]
	internal unsafe static extern basic_ostream<wchar_t,std::char_traits<wchar_t>\u0020>* <<(basic_ostream<wchar_t,std::char_traits<wchar_t>\u0020>*, [MarshalAs(UnmanagedType.U1)] bool);

	// Token: 0x06000142 RID: 322 RVA: 0x001A8227 File Offset: 0x001A7627
	[SuppressUnmanagedCodeSecurity]
	[DllImport("", CallingConvention = CallingConvention.Cdecl, SetLastError = true)]
	[MethodImpl(MethodImplOptions.Unmanaged, MethodCodeType = MethodCodeType.Native)]
	internal unsafe static extern basic_ostream<wchar_t,std::char_traits<wchar_t>\u0020>* <<(basic_ostream<wchar_t,std::char_traits<wchar_t>\u0020>*, method);

	// Token: 0x06000143 RID: 323 RVA: 0x001A81F7 File Offset: 0x001A75F7
	[SuppressUnmanagedCodeSecurity]
	[DllImport("", CallingConvention = CallingConvention.Cdecl, SetLastError = true)]
	[MethodImpl(MethodImplOptions.Unmanaged, MethodCodeType = MethodCodeType.Native)]
	internal unsafe static extern basic_ostream<wchar_t,std::char_traits<wchar_t>\u0020>* {ctor}(basic_ostream<wchar_t,std::char_traits<wchar_t>\u0020>*, basic_streambuf<wchar_t,std::char_traits<wchar_t>\u0020>*, [MarshalAs(UnmanagedType.U1)] bool, int);

	// Token: 0x06000144 RID: 324 RVA: 0x001A8239 File Offset: 0x001A7639
	[SuppressUnmanagedCodeSecurity]
	[DllImport("", CallingConvention = CallingConvention.Cdecl, SetLastError = true)]
	[MethodImpl(MethodImplOptions.Unmanaged, MethodCodeType = MethodCodeType.Native)]
	internal unsafe static extern void setp(basic_streambuf<wchar_t,std::char_traits<wchar_t>\u0020>*, char*, char*, char*);

	// Token: 0x06000145 RID: 325 RVA: 0x001A81C7 File Offset: 0x001A75C7
	[SuppressUnmanagedCodeSecurity]
	[DllImport("", CallingConvention = CallingConvention.Cdecl, SetLastError = true)]
	[MethodImpl(MethodImplOptions.Unmanaged, MethodCodeType = MethodCodeType.Native)]
	internal unsafe static extern char* epptr(basic_streambuf<wchar_t,std::char_traits<wchar_t>\u0020>*);

	// Token: 0x06000146 RID: 326 RVA: 0x001A81D9 File Offset: 0x001A75D9
	[SuppressUnmanagedCodeSecurity]
	[DllImport("", CallingConvention = CallingConvention.Cdecl, SetLastError = true)]
	[MethodImpl(MethodImplOptions.Unmanaged, MethodCodeType = MethodCodeType.Native)]
	internal unsafe static extern void setg(basic_streambuf<wchar_t,std::char_traits<wchar_t>\u0020>*, char*, char*, char*);

	// Token: 0x06000147 RID: 327 RVA: 0x001A81CD File Offset: 0x001A75CD
	[SuppressUnmanagedCodeSecurity]
	[DllImport("", CallingConvention = CallingConvention.Cdecl, SetLastError = true)]
	[MethodImpl(MethodImplOptions.Unmanaged, MethodCodeType = MethodCodeType.Native)]
	internal unsafe static extern char* egptr(basic_streambuf<wchar_t,std::char_traits<wchar_t>\u0020>*);

	// Token: 0x06000148 RID: 328 RVA: 0x001A81D3 File Offset: 0x001A75D3
	[SuppressUnmanagedCodeSecurity]
	[DllImport("", CallingConvention = CallingConvention.Cdecl, SetLastError = true)]
	[MethodImpl(MethodImplOptions.Unmanaged, MethodCodeType = MethodCodeType.Native)]
	internal unsafe static extern char* eback(basic_streambuf<wchar_t,std::char_traits<wchar_t>\u0020>*);

	// Token: 0x06000149 RID: 329 RVA: 0x001A81EB File Offset: 0x001A75EB
	[SuppressUnmanagedCodeSecurity]
	[DllImport("", CallingConvention = CallingConvention.Cdecl, SetLastError = true)]
	[MethodImpl(MethodImplOptions.Unmanaged, MethodCodeType = MethodCodeType.Native)]
	internal unsafe static extern basic_ios<wchar_t,std::char_traits<wchar_t>\u0020>* {ctor}(basic_ios<wchar_t,std::char_traits<wchar_t>\u0020>*);

	// Token: 0x0600014A RID: 330 RVA: 0x001A81A9 File Offset: 0x001A75A9
	[SuppressUnmanagedCodeSecurity]
	[DllImport("", CallingConvention = CallingConvention.Cdecl, SetLastError = true)]
	[MethodImpl(MethodImplOptions.Unmanaged, MethodCodeType = MethodCodeType.Native)]
	[return: MarshalAs(UnmanagedType.U2)]
	internal unsafe static extern char fill(basic_ios<wchar_t,std::char_traits<wchar_t>\u0020>*);

	// Token: 0x0600014B RID: 331 RVA: 0x001A817F File Offset: 0x001A757F
	[SuppressUnmanagedCodeSecurity]
	[DllImport("", CallingConvention = CallingConvention.Cdecl, SetLastError = true)]
	[MethodImpl(MethodImplOptions.Unmanaged, MethodCodeType = MethodCodeType.Native)]
	internal unsafe static extern basic_streambuf<wchar_t,std::char_traits<wchar_t>\u0020>* rdbuf(basic_ios<wchar_t,std::char_traits<wchar_t>\u0020>*);

	// Token: 0x0600014C RID: 332 RVA: 0x001A81BB File Offset: 0x001A75BB
	[SuppressUnmanagedCodeSecurity]
	[DllImport("", CallingConvention = CallingConvention.Cdecl, SetLastError = true)]
	[MethodImpl(MethodImplOptions.Unmanaged, MethodCodeType = MethodCodeType.Native)]
	internal unsafe static extern void setstate(basic_ios<wchar_t,std::char_traits<wchar_t>\u0020>*, int, [MarshalAs(UnmanagedType.U1)] bool);

	// Token: 0x0600014D RID: 333 RVA: 0x001A8197 File Offset: 0x001A7597
	[SuppressUnmanagedCodeSecurity]
	[DllImport("", CallingConvention = CallingConvention.Cdecl, SetLastError = true)]
	[MethodImpl(MethodImplOptions.Unmanaged, MethodCodeType = MethodCodeType.Native)]
	internal unsafe static extern basic_ostream<wchar_t,std::char_traits<wchar_t>\u0020>* flush(basic_ostream<wchar_t,std::char_traits<wchar_t>\u0020>*);

	// Token: 0x0600014E RID: 334 RVA: 0x001A818B File Offset: 0x001A758B
	[SuppressUnmanagedCodeSecurity]
	[DllImport("", CallingConvention = CallingConvention.Cdecl, SetLastError = true)]
	[MethodImpl(MethodImplOptions.Unmanaged, MethodCodeType = MethodCodeType.Native)]
	internal unsafe static extern void _Osfx(basic_ostream<wchar_t,std::char_traits<wchar_t>\u0020>*);

	// Token: 0x0600014F RID: 335 RVA: 0x001A81DF File Offset: 0x001A75DF
	[SuppressUnmanagedCodeSecurity]
	[DllImport("", CallingConvention = CallingConvention.Cdecl, SetLastError = true)]
	[MethodImpl(MethodImplOptions.Unmanaged, MethodCodeType = MethodCodeType.Native)]
	internal unsafe static extern void setp(basic_streambuf<wchar_t,std::char_traits<wchar_t>\u0020>*, char*, char*);

	// Token: 0x06000150 RID: 336 RVA: 0x001A8203 File Offset: 0x001A7603
	[SuppressUnmanagedCodeSecurity]
	[DllImport("", CallingConvention = CallingConvention.Cdecl, SetLastError = true)]
	[MethodImpl(MethodImplOptions.Unmanaged, MethodCodeType = MethodCodeType.Native)]
	internal unsafe static extern char* pbase(basic_streambuf<wchar_t,std::char_traits<wchar_t>\u0020>*);

	// Token: 0x06000151 RID: 337 RVA: 0x001A819D File Offset: 0x001A759D
	[SuppressUnmanagedCodeSecurity]
	[DllImport("", CallingConvention = CallingConvention.Cdecl, SetLastError = true)]
	[MethodImpl(MethodImplOptions.Unmanaged, MethodCodeType = MethodCodeType.Native)]
	internal unsafe static extern basic_streambuf<wchar_t,std::char_traits<wchar_t>\u0020>* {ctor}(basic_streambuf<wchar_t,std::char_traits<wchar_t>\u0020>*);

	// Token: 0x06000152 RID: 338 RVA: 0x001A8191 File Offset: 0x001A7591
	[SuppressUnmanagedCodeSecurity]
	[DllImport("", CallingConvention = CallingConvention.Cdecl, SetLastError = true)]
	[MethodImpl(MethodImplOptions.Unmanaged, MethodCodeType = MethodCodeType.Native)]
	internal unsafe static extern basic_ostream<wchar_t,std::char_traits<wchar_t>\u0020>* tie(basic_ios<wchar_t,std::char_traits<wchar_t>\u0020>*);

	// Token: 0x06000153 RID: 339 RVA: 0x001A81B5 File Offset: 0x001A75B5
	[SuppressUnmanagedCodeSecurity]
	[DllImport("", CallingConvention = CallingConvention.Cdecl, SetLastError = true)]
	[MethodImpl(MethodImplOptions.Unmanaged, MethodCodeType = MethodCodeType.Native)]
	internal unsafe static extern long sputn(basic_streambuf<wchar_t,std::char_traits<wchar_t>\u0020>*, char*, long);

	// Token: 0x06000154 RID: 340 RVA: 0x000025E0 File Offset: 0x000019E0
	[SuppressUnmanagedCodeSecurity]
	[MethodImpl(MethodImplOptions.Unmanaged | MethodImplOptions.PreserveSig, MethodCodeType = MethodCodeType.Native)]
	internal unsafe static extern void Write(char*, __arglist);

	// Token: 0x06000155 RID: 341 RVA: 0x001A820F File Offset: 0x001A760F
	[SuppressUnmanagedCodeSecurity]
	[DllImport("", CallingConvention = CallingConvention.Cdecl, SetLastError = true)]
	[MethodImpl(MethodImplOptions.Unmanaged, MethodCodeType = MethodCodeType.Native)]
	[return: MarshalAs(UnmanagedType.U2)]
	internal unsafe static extern char widen(ctype<wchar_t>*, sbyte);

	// Token: 0x06000156 RID: 342 RVA: 0x001A81FD File Offset: 0x001A75FD
	[SuppressUnmanagedCodeSecurity]
	[DllImport("", CallingConvention = CallingConvention.Cdecl, SetLastError = true)]
	[MethodImpl(MethodImplOptions.Unmanaged, MethodCodeType = MethodCodeType.Native)]
	internal unsafe static extern ulong _Getcat(locale.facet**, locale*);

	// Token: 0x06000157 RID: 343 RVA: 0x000BCBAA File Offset: 0x000BBFAA
	[SuppressUnmanagedCodeSecurity]
	[DllImport("", CallingConvention = CallingConvention.Cdecl, SetLastError = true)]
	[MethodImpl(MethodImplOptions.Unmanaged, MethodCodeType = MethodCodeType.Native)]
	internal unsafe static extern _Lockit* {ctor}(_Lockit*, int);

	// Token: 0x06000158 RID: 344 RVA: 0x000BCBA4 File Offset: 0x000BBFA4
	[SuppressUnmanagedCodeSecurity]
	[DllImport("", CallingConvention = CallingConvention.Cdecl, SetLastError = true)]
	[MethodImpl(MethodImplOptions.Unmanaged, MethodCodeType = MethodCodeType.Native)]
	internal unsafe static extern void {dtor}(_Lockit*);

	// Token: 0x06000159 RID: 345 RVA: 0x000BCBB6 File Offset: 0x000BBFB6
	[SuppressUnmanagedCodeSecurity]
	[DllImport("", CallingConvention = CallingConvention.Cdecl, SetLastError = true)]
	[MethodImpl(MethodImplOptions.Unmanaged, MethodCodeType = MethodCodeType.Native)]
	internal unsafe static extern ulong _K(locale.id*);

	// Token: 0x0600015A RID: 346 RVA: 0x000BCBB0 File Offset: 0x000BBFB0
	[SuppressUnmanagedCodeSecurity]
	[DllImport("", CallingConvention = CallingConvention.Cdecl, SetLastError = true)]
	[MethodImpl(MethodImplOptions.Unmanaged, MethodCodeType = MethodCodeType.Native)]
	internal unsafe static extern locale._Locimp* _Getgloballocale();

	// Token: 0x0600015B RID: 347 RVA: 0x000BCBE0 File Offset: 0x000BBFE0
	[SuppressUnmanagedCodeSecurity]
	[DllImport("", CallingConvention = CallingConvention.Cdecl, SetLastError = true)]
	[MethodImpl(MethodImplOptions.Unmanaged, MethodCodeType = MethodCodeType.Native)]
	internal unsafe static extern long width(ios_base*);

	// Token: 0x0600015C RID: 348 RVA: 0x000BCBE6 File Offset: 0x000BBFE6
	[SuppressUnmanagedCodeSecurity]
	[DllImport("", CallingConvention = CallingConvention.Cdecl, SetLastError = true)]
	[MethodImpl(MethodImplOptions.Unmanaged, MethodCodeType = MethodCodeType.Native)]
	internal unsafe static extern long width(ios_base*, long);

	// Token: 0x0600015D RID: 349 RVA: 0x001A81AF File Offset: 0x001A75AF
	[SuppressUnmanagedCodeSecurity]
	[DllImport("", CallingConvention = CallingConvention.Cdecl, SetLastError = true)]
	[MethodImpl(MethodImplOptions.Unmanaged, MethodCodeType = MethodCodeType.Native)]
	internal unsafe static extern ushort sputc(basic_streambuf<wchar_t,std::char_traits<wchar_t>\u0020>*, [MarshalAs(UnmanagedType.U2)] char);

	// Token: 0x0600015E RID: 350 RVA: 0x000BCBF2 File Offset: 0x000BBFF2
	[SuppressUnmanagedCodeSecurity]
	[DllImport("", CallingConvention = CallingConvention.Cdecl, SetLastError = true)]
	[MethodImpl(MethodImplOptions.Unmanaged, MethodCodeType = MethodCodeType.Native)]
	[return: MarshalAs(UnmanagedType.U1)]
	internal unsafe static extern bool good(ios_base*);

	// Token: 0x0600015F RID: 351 RVA: 0x000BCBEC File Offset: 0x000BBFEC
	[SuppressUnmanagedCodeSecurity]
	[DllImport("", CallingConvention = CallingConvention.Cdecl, SetLastError = true)]
	[MethodImpl(MethodImplOptions.Unmanaged, MethodCodeType = MethodCodeType.Native)]
	[return: MarshalAs(UnmanagedType.U1)]
	internal static extern bool uncaught_exception();

	// Token: 0x06000160 RID: 352 RVA: 0x000BCBDA File Offset: 0x000BBFDA
	[SuppressUnmanagedCodeSecurity]
	[DllImport("", CallingConvention = CallingConvention.Cdecl, SetLastError = true)]
	[MethodImpl(MethodImplOptions.Unmanaged, MethodCodeType = MethodCodeType.Native)]
	internal unsafe static extern int flags(ios_base*);

	// Token: 0x06000161 RID: 353 RVA: 0x000BCBBC File Offset: 0x000BBFBC
	[SuppressUnmanagedCodeSecurity]
	[DllImport("", CallingConvention = CallingConvention.Cdecl, SetLastError = true)]
	[MethodImpl(MethodImplOptions.Unmanaged, MethodCodeType = MethodCodeType.Native)]
	internal unsafe static extern locale* getloc(ios_base*, locale*);

	// Token: 0x06000162 RID: 354 RVA: 0x001A81A3 File Offset: 0x001A75A3
	[SuppressUnmanagedCodeSecurity]
	[DllImport("", CallingConvention = CallingConvention.Cdecl, SetLastError = true)]
	[MethodImpl(MethodImplOptions.Unmanaged, MethodCodeType = MethodCodeType.Native)]
	internal unsafe static extern void {dtor}(basic_streambuf<wchar_t,std::char_traits<wchar_t>\u0020>*);

	// Token: 0x06000163 RID: 355 RVA: 0x001A8233 File Offset: 0x001A7633
	[SuppressUnmanagedCodeSecurity]
	[DllImport("", CallingConvention = CallingConvention.Cdecl, SetLastError = true)]
	[MethodImpl(MethodImplOptions.Unmanaged, MethodCodeType = MethodCodeType.Native)]
	internal unsafe static extern char* _Pninc(basic_streambuf<wchar_t,std::char_traits<wchar_t>\u0020>*);

	// Token: 0x06000164 RID: 356 RVA: 0x001A823F File Offset: 0x001A763F
	[SuppressUnmanagedCodeSecurity]
	[DllImport("", CallingConvention = CallingConvention.Cdecl, SetLastError = true)]
	[MethodImpl(MethodImplOptions.Unmanaged, MethodCodeType = MethodCodeType.Native)]
	internal unsafe static extern void gbump(basic_streambuf<wchar_t,std::char_traits<wchar_t>\u0020>*, int);

	// Token: 0x06000165 RID: 357 RVA: 0x001A81C1 File Offset: 0x001A75C1
	[SuppressUnmanagedCodeSecurity]
	[DllImport("", CallingConvention = CallingConvention.Cdecl, SetLastError = true)]
	[MethodImpl(MethodImplOptions.Unmanaged, MethodCodeType = MethodCodeType.Native)]
	internal unsafe static extern char* pptr(basic_streambuf<wchar_t,std::char_traits<wchar_t>\u0020>*);

	// Token: 0x06000166 RID: 358 RVA: 0x001A8209 File Offset: 0x001A7609
	[SuppressUnmanagedCodeSecurity]
	[DllImport("", CallingConvention = CallingConvention.Cdecl, SetLastError = true)]
	[MethodImpl(MethodImplOptions.Unmanaged, MethodCodeType = MethodCodeType.Native)]
	internal unsafe static extern char* gptr(basic_streambuf<wchar_t,std::char_traits<wchar_t>\u0020>*);

	// Token: 0x06000167 RID: 359 RVA: 0x001A81E5 File Offset: 0x001A75E5
	[SuppressUnmanagedCodeSecurity]
	[DllImport("", CallingConvention = CallingConvention.Cdecl, SetLastError = true)]
	[MethodImpl(MethodImplOptions.Unmanaged, MethodCodeType = MethodCodeType.Native)]
	internal unsafe static extern void {dtor}(basic_ostream<wchar_t,std::char_traits<wchar_t>\u0020>*);

	// Token: 0x06000168 RID: 360 RVA: 0x000018E0 File Offset: 0x00000CE0
	[SuppressUnmanagedCodeSecurity]
	[MethodImpl(MethodImplOptions.Unmanaged | MethodImplOptions.PreserveSig, MethodCodeType = MethodCodeType.Native)]
	internal unsafe static extern void ConvertPathToUrl(basic_string<char,std::char_traits<char>,std::allocator<char>\u0020>*);

	// Token: 0x06000169 RID: 361 RVA: 0x000B4280 File Offset: 0x000B3680
	[SuppressUnmanagedCodeSecurity]
	[MethodImpl(MethodImplOptions.Unmanaged | MethodImplOptions.PreserveSig, MethodCodeType = MethodCodeType.Native)]
	internal unsafe static extern int LP_GetError(void*, int*, char*, int*, int*);

	// Token: 0x0600016A RID: 362 RVA: 0x000B4200 File Offset: 0x000B3600
	[SuppressUnmanagedCodeSecurity]
	[MethodImpl(MethodImplOptions.Unmanaged | MethodImplOptions.PreserveSig, MethodCodeType = MethodCodeType.Native)]
	internal unsafe static extern int LP_Abort(void*);

	// Token: 0x0600016B RID: 363 RVA: 0x001A81F1 File Offset: 0x001A75F1
	[SuppressUnmanagedCodeSecurity]
	[DllImport("", CallingConvention = CallingConvention.Cdecl, SetLastError = true)]
	[MethodImpl(MethodImplOptions.Unmanaged, MethodCodeType = MethodCodeType.Native)]
	internal unsafe static extern void {dtor}(basic_ios<wchar_t,std::char_traits<wchar_t>\u0020>*);

	// Token: 0x0600016C RID: 364 RVA: 0x00001510 File Offset: 0x00000910
	[SuppressUnmanagedCodeSecurity]
	[MethodImpl(MethodImplOptions.Unmanaged | MethodImplOptions.PreserveSig, MethodCodeType = MethodCodeType.Native)]
	internal unsafe static extern basic_string<char,std::char_traits<char>,std::allocator<char>\u0020>* Utf16ToUtf8(basic_string<char,std::char_traits<char>,std::allocator<char>\u0020>*, basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>*);

	// Token: 0x0600016D RID: 365 RVA: 0x001A8185 File Offset: 0x001A7585
	[SuppressUnmanagedCodeSecurity]
	[DllImport("", CallingConvention = CallingConvention.Cdecl, SetLastError = true)]
	[MethodImpl(MethodImplOptions.Unmanaged, MethodCodeType = MethodCodeType.Native)]
	internal unsafe static extern int setf(ios_base*, int);

	// Token: 0x0600016E RID: 366 RVA: 0x000018F0 File Offset: 0x00000CF0
	[SuppressUnmanagedCodeSecurity]
	[MethodImpl(MethodImplOptions.Unmanaged | MethodImplOptions.PreserveSig, MethodCodeType = MethodCodeType.Native)]
	internal unsafe static extern void ConvertPathToUrl(basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>*);

	// Token: 0x0600016F RID: 367 RVA: 0x001A7B15 File Offset: 0x001A6F15
	[SuppressUnmanagedCodeSecurity]
	[DllImport("", CallingConvention = CallingConvention.Cdecl, SetLastError = true)]
	[MethodImpl(MethodImplOptions.Unmanaged, MethodCodeType = MethodCodeType.Native)]
	internal unsafe static extern void* memmove(void*, void*, ulong);

	// Token: 0x06000170 RID: 368 RVA: 0x000BCAFE File Offset: 0x000BBEFE
	[SuppressUnmanagedCodeSecurity]
	[DllImport("", CallingConvention = CallingConvention.Cdecl, SetLastError = true)]
	[MethodImpl(MethodImplOptions.Unmanaged, MethodCodeType = MethodCodeType.Native)]
	internal unsafe static extern void _Xlength_error(sbyte*);

	// Token: 0x06000171 RID: 369 RVA: 0x000B4260 File Offset: 0x000B3660
	[SuppressUnmanagedCodeSecurity]
	[MethodImpl(MethodImplOptions.Unmanaged | MethodImplOptions.PreserveSig, MethodCodeType = MethodCodeType.Native)]
	internal unsafe static extern int LP_GetProgress(void*, LP_PROGRESS_INFO*);

	// Token: 0x06000172 RID: 370 RVA: 0x000B41B0 File Offset: 0x000B35B0
	[SuppressUnmanagedCodeSecurity]
	[MethodImpl(MethodImplOptions.Unmanaged | MethodImplOptions.PreserveSig, MethodCodeType = MethodCodeType.Native)]
	internal unsafe static extern int LP_CheckFile(void*);

	// Token: 0x06000173 RID: 371 RVA: 0x000B41E0 File Offset: 0x000B35E0
	[SuppressUnmanagedCodeSecurity]
	[MethodImpl(MethodImplOptions.Unmanaged | MethodImplOptions.PreserveSig, MethodCodeType = MethodCodeType.Native)]
	internal unsafe static extern int LP_CheckHash(void*);

	// Token: 0x06000174 RID: 372 RVA: 0x000B41D0 File Offset: 0x000B35D0
	[SuppressUnmanagedCodeSecurity]
	[MethodImpl(MethodImplOptions.Unmanaged | MethodImplOptions.PreserveSig, MethodCodeType = MethodCodeType.Native)]
	internal unsafe static extern int LP_CheckSize(void*);

	// Token: 0x06000175 RID: 373 RVA: 0x000B41F0 File Offset: 0x000B35F0
	[SuppressUnmanagedCodeSecurity]
	[MethodImpl(MethodImplOptions.Unmanaged | MethodImplOptions.PreserveSig, MethodCodeType = MethodCodeType.Native)]
	internal unsafe static extern void LP_ClearPatchFiles(void*);

	// Token: 0x06000176 RID: 374 RVA: 0x000B41C0 File Offset: 0x000B35C0
	[SuppressUnmanagedCodeSecurity]
	[MethodImpl(MethodImplOptions.Unmanaged | MethodImplOptions.PreserveSig, MethodCodeType = MethodCodeType.Native)]
	internal unsafe static extern int LP_Patch(void*, int*);

	// Token: 0x06000177 RID: 375 RVA: 0x000B4600 File Offset: 0x000B3A00
	[SuppressUnmanagedCodeSecurity]
	[MethodImpl(MethodImplOptions.Unmanaged | MethodImplOptions.PreserveSig, MethodCodeType = MethodCodeType.Native)]
	internal unsafe static extern int LP_GetLatestVersion(void*, int*);

	// Token: 0x06000178 RID: 376 RVA: 0x000B45F0 File Offset: 0x000B39F0
	[SuppressUnmanagedCodeSecurity]
	[MethodImpl(MethodImplOptions.Unmanaged | MethodImplOptions.PreserveSig, MethodCodeType = MethodCodeType.Native)]
	internal unsafe static extern int LP_GetLocalVersion(void*, int*);

	// Token: 0x06000179 RID: 377 RVA: 0x000B41A0 File Offset: 0x000B35A0
	[SuppressUnmanagedCodeSecurity]
	[MethodImpl(MethodImplOptions.Unmanaged | MethodImplOptions.PreserveSig, MethodCodeType = MethodCodeType.Native)]
	internal unsafe static extern int LP_CheckUpdate(void*, byte*, int, void*, int*);

	// Token: 0x0600017A RID: 378 RVA: 0x000B4230 File Offset: 0x000B3630
	[SuppressUnmanagedCodeSecurity]
	[MethodImpl(MethodImplOptions.Unmanaged | MethodImplOptions.PreserveSig, MethodCodeType = MethodCodeType.Native)]
	internal unsafe static extern int LP_ResetAbort(void*);

	// Token: 0x0600017B RID: 379 RVA: 0x000B4050 File Offset: 0x000B3450
	[SuppressUnmanagedCodeSecurity]
	[MethodImpl(MethodImplOptions.Unmanaged | MethodImplOptions.PreserveSig, MethodCodeType = MethodCodeType.Native)]
	internal unsafe static extern int LP_Init(void*, char*, char*);

	// Token: 0x0600017C RID: 380 RVA: 0x001A8269 File Offset: 0x001A7669
	[SuppressUnmanagedCodeSecurity]
	[DllImport("", CallingConvention = CallingConvention.Cdecl, SetLastError = true)]
	[MethodImpl(MethodImplOptions.Unmanaged, MethodCodeType = MethodCodeType.Native)]
	internal unsafe static extern void __CxxUnregisterExceptionObject(void*, int);

	// Token: 0x0600017D RID: 381 RVA: 0x001A8251 File Offset: 0x001A7651
	[SuppressUnmanagedCodeSecurity]
	[DllImport("", CallingConvention = CallingConvention.Cdecl, SetLastError = true)]
	[MethodImpl(MethodImplOptions.Unmanaged, MethodCodeType = MethodCodeType.Native)]
	internal static extern int __CxxQueryExceptionSize();

	// Token: 0x0600017E RID: 382 RVA: 0x001A8263 File Offset: 0x001A7663
	[SuppressUnmanagedCodeSecurity]
	[DllImport("", CallingConvention = CallingConvention.Cdecl, SetLastError = true)]
	[MethodImpl(MethodImplOptions.Unmanaged, MethodCodeType = MethodCodeType.Native)]
	internal unsafe static extern int __CxxDetectRethrow(void*);

	// Token: 0x0600017F RID: 383 RVA: 0x001A825D File Offset: 0x001A765D
	[SuppressUnmanagedCodeSecurity]
	[DllImport("", CallingConvention = CallingConvention.Cdecl, SetLastError = true)]
	[MethodImpl(MethodImplOptions.Unmanaged, MethodCodeType = MethodCodeType.Native)]
	internal unsafe static extern int __CxxRegisterExceptionObject(void*, void*);

	// Token: 0x06000180 RID: 384 RVA: 0x001A8257 File Offset: 0x001A7657
	[SuppressUnmanagedCodeSecurity]
	[DllImport("", CallingConvention = CallingConvention.Cdecl, SetLastError = true)]
	[MethodImpl(MethodImplOptions.Unmanaged, MethodCodeType = MethodCodeType.Native)]
	internal unsafe static extern int __CxxExceptionFilter(void*, void*, int, void*);

	// Token: 0x06000181 RID: 385 RVA: 0x001A7B03 File Offset: 0x001A6F03
	[SuppressUnmanagedCodeSecurity]
	[DllImport("", CallingConvention = CallingConvention.Cdecl, SetLastError = true)]
	[MethodImpl(MethodImplOptions.Unmanaged, MethodCodeType = MethodCodeType.Native)]
	internal unsafe static extern void _CxxThrowException(void*, _s__ThrowInfo*);

	// Token: 0x06000182 RID: 386 RVA: 0x000B4030 File Offset: 0x000B3430
	[SuppressUnmanagedCodeSecurity]
	[MethodImpl(MethodImplOptions.Unmanaged | MethodImplOptions.PreserveSig, MethodCodeType = MethodCodeType.Native)]
	internal unsafe static extern void LP_Delete(void*);

	// Token: 0x06000183 RID: 387 RVA: 0x000B3FF0 File Offset: 0x000B33F0
	[SuppressUnmanagedCodeSecurity]
	[MethodImpl(MethodImplOptions.Unmanaged | MethodImplOptions.PreserveSig, MethodCodeType = MethodCodeType.Native)]
	internal unsafe static extern void* LP_Create([MarshalAs(UnmanagedType.U1)] bool);

	// Token: 0x06000184 RID: 388 RVA: 0x001A7ACD File Offset: 0x001A6ECD
	[SuppressUnmanagedCodeSecurity]
	[DllImport("", CallingConvention = CallingConvention.Cdecl, SetLastError = true)]
	[MethodImpl(MethodImplOptions.Unmanaged, MethodCodeType = MethodCodeType.Native)]
	internal static extern int _purecall();

	// Token: 0x06000185 RID: 389 RVA: 0x001A8245 File Offset: 0x001A7645
	[SuppressUnmanagedCodeSecurity]
	[DllImport("", CallingConvention = CallingConvention.Cdecl, SetLastError = true)]
	[MethodImpl(MethodImplOptions.Unmanaged, MethodCodeType = MethodCodeType.Native)]
	internal static extern void _Xbad_function_call();

	// Token: 0x06000186 RID: 390 RVA: 0x001A7C9B File Offset: 0x001A709B
	[SuppressUnmanagedCodeSecurity]
	[DllImport("", CallingConvention = CallingConvention.Cdecl, SetLastError = true)]
	[MethodImpl(MethodImplOptions.Unmanaged, MethodCodeType = MethodCodeType.Native)]
	internal unsafe static extern int MultiByteToWideChar(uint, uint, sbyte*, int, char*, int);

	// Token: 0x06000187 RID: 391 RVA: 0x000018D0 File Offset: 0x00000CD0
	[SuppressUnmanagedCodeSecurity]
	[MethodImpl(MethodImplOptions.Unmanaged | MethodImplOptions.PreserveSig, MethodCodeType = MethodCodeType.Native)]
	internal unsafe static extern void ConvertUrlToPath(basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>*);

	// Token: 0x06000188 RID: 392 RVA: 0x001A7B75 File Offset: 0x001A6F75
	[SuppressUnmanagedCodeSecurity]
	[DllImport("", CallingConvention = CallingConvention.Cdecl, SetLastError = true)]
	[MethodImpl(MethodImplOptions.Unmanaged, MethodCodeType = MethodCodeType.Native)]
	internal unsafe static extern int _wcsicmp(char*, char*);

	// Token: 0x06000189 RID: 393 RVA: 0x001A7AEB File Offset: 0x001A6EEB
	[SuppressUnmanagedCodeSecurity]
	[DllImport("", CallingConvention = CallingConvention.Cdecl, SetLastError = true)]
	[MethodImpl(MethodImplOptions.Unmanaged, MethodCodeType = MethodCodeType.Native)]
	internal unsafe static extern char* wcsrchr(char*, [MarshalAs(UnmanagedType.U2)] char);

	// Token: 0x0600018A RID: 394 RVA: 0x000AEA90 File Offset: 0x000ADE90
	[SuppressUnmanagedCodeSecurity]
	[MethodImpl(MethodImplOptions.Unmanaged | MethodImplOptions.PreserveSig, MethodCodeType = MethodCodeType.Native)]
	internal unsafe static extern IniParser* {ctor}(IniParser*, @byte*, uint);

	// Token: 0x0600018B RID: 395 RVA: 0x001A7B93 File Offset: 0x001A6F93
	[SuppressUnmanagedCodeSecurity]
	[DllImport("", CallingConvention = CallingConvention.Cdecl, SetLastError = true)]
	[MethodImpl(MethodImplOptions.Unmanaged, MethodCodeType = MethodCodeType.Native)]
	internal unsafe static extern void free(void*);

	// Token: 0x0600018C RID: 396 RVA: 0x001A8167 File Offset: 0x001A7567
	[SuppressUnmanagedCodeSecurity]
	[DllImport("", CallingConvention = CallingConvention.Cdecl, SetLastError = true)]
	[MethodImpl(MethodImplOptions.Unmanaged, MethodCodeType = MethodCodeType.Native)]
	internal unsafe static extern HRSRC__* FindResourceW(HINSTANCE__*, char*, char*);

	// Token: 0x0600018D RID: 397 RVA: 0x001A8173 File Offset: 0x001A7573
	[SuppressUnmanagedCodeSecurity]
	[DllImport("", CallingConvention = CallingConvention.Cdecl, SetLastError = true)]
	[MethodImpl(MethodImplOptions.Unmanaged, MethodCodeType = MethodCodeType.Native)]
	internal unsafe static extern void* LoadResource(HINSTANCE__*, HRSRC__*);

	// Token: 0x0600018E RID: 398 RVA: 0x001A8179 File Offset: 0x001A7579
	[SuppressUnmanagedCodeSecurity]
	[DllImport("", CallingConvention = CallingConvention.Cdecl, SetLastError = true)]
	[MethodImpl(MethodImplOptions.Unmanaged, MethodCodeType = MethodCodeType.Native)]
	internal unsafe static extern void* LockResource(void*);

	// Token: 0x0600018F RID: 399 RVA: 0x001A7CB9 File Offset: 0x001A70B9
	[SuppressUnmanagedCodeSecurity]
	[DllImport("", CallingConvention = CallingConvention.Cdecl, SetLastError = true)]
	[MethodImpl(MethodImplOptions.Unmanaged, MethodCodeType = MethodCodeType.Native)]
	internal unsafe static extern uint GetModuleFileNameW(HINSTANCE__*, char*, uint);

	// Token: 0x06000190 RID: 400 RVA: 0x001A816D File Offset: 0x001A756D
	[SuppressUnmanagedCodeSecurity]
	[DllImport("", CallingConvention = CallingConvention.Cdecl, SetLastError = true)]
	[MethodImpl(MethodImplOptions.Unmanaged, MethodCodeType = MethodCodeType.Native)]
	internal unsafe static extern uint SizeofResource(HINSTANCE__*, HRSRC__*);

	// Token: 0x06000191 RID: 401 RVA: 0x001A826F File Offset: 0x001A766F
	[SuppressUnmanagedCodeSecurity]
	[DllImport("", CallingConvention = CallingConvention.Cdecl, SetLastError = true)]
	[MethodImpl(MethodImplOptions.Unmanaged, MethodCodeType = MethodCodeType.Native)]
	internal unsafe static extern int __FrameUnwindFilter(_EXCEPTION_POINTERS*);

	// Token: 0x06000192 RID: 402 RVA: 0x001A7B87 File Offset: 0x001A6F87
	[SuppressUnmanagedCodeSecurity]
	[DllImport("", CallingConvention = CallingConvention.Cdecl, SetLastError = true)]
	[MethodImpl(MethodImplOptions.Unmanaged, MethodCodeType = MethodCodeType.Native)]
	internal static extern void terminate();

	// Token: 0x06000193 RID: 403 RVA: 0x000BE240 File Offset: 0x000BD640
	[SuppressUnmanagedCodeSecurity]
	[MethodImpl(MethodImplOptions.Unmanaged | MethodImplOptions.PreserveSig, MethodCodeType = MethodCodeType.Native)]
	internal unsafe static extern void* _getFiberPtrId();

	// Token: 0x06000194 RID: 404 RVA: 0x001A7BDB File Offset: 0x001A6FDB
	[SuppressUnmanagedCodeSecurity]
	[DllImport("", CallingConvention = CallingConvention.Cdecl, SetLastError = true)]
	[MethodImpl(MethodImplOptions.Unmanaged, MethodCodeType = MethodCodeType.Native)]
	internal static extern void _cexit();

	// Token: 0x06000195 RID: 405 RVA: 0x001A7CFB File Offset: 0x001A70FB
	[SuppressUnmanagedCodeSecurity]
	[DllImport("", CallingConvention = CallingConvention.Cdecl, SetLastError = true)]
	[MethodImpl(MethodImplOptions.Unmanaged, MethodCodeType = MethodCodeType.Native)]
	internal static extern void Sleep(uint);

	// Token: 0x06000196 RID: 406 RVA: 0x001A8275 File Offset: 0x001A7675
	[SuppressUnmanagedCodeSecurity]
	[DllImport("", CallingConvention = CallingConvention.Cdecl, SetLastError = true)]
	[MethodImpl(MethodImplOptions.Unmanaged, MethodCodeType = MethodCodeType.Native)]
	internal static extern void abort();

	// Token: 0x06000197 RID: 407 RVA: 0x000BD42C File Offset: 0x000BC82C
	[SuppressUnmanagedCodeSecurity]
	[MethodImpl(MethodImplOptions.Unmanaged | MethodImplOptions.PreserveSig, MethodCodeType = MethodCodeType.Native)]
	internal static extern void __security_init_cookie();

	// Token: 0x06000198 RID: 408 RVA: 0x001A7F78 File Offset: 0x001A7378
	[SuppressUnmanagedCodeSecurity]
	[MethodImpl(MethodImplOptions.Unmanaged | MethodImplOptions.PreserveSig, MethodCodeType = MethodCodeType.Native)]
	internal static extern void _Init_thread_wait(uint);

	// Token: 0x06000199 RID: 409 RVA: 0x001A7F18 File Offset: 0x001A7318
	[SuppressUnmanagedCodeSecurity]
	[MethodImpl(MethodImplOptions.Unmanaged | MethodImplOptions.PreserveSig, MethodCodeType = MethodCodeType.Native)]
	internal static extern void _Init_thread_notify();

	// Token: 0x0600019A RID: 410 RVA: 0x001A7F68 File Offset: 0x001A7368
	[SuppressUnmanagedCodeSecurity]
	[MethodImpl(MethodImplOptions.Unmanaged | MethodImplOptions.PreserveSig, MethodCodeType = MethodCodeType.Native)]
	internal static extern void _Init_thread_unlock();

	// Token: 0x0600019B RID: 411 RVA: 0x001A7F08 File Offset: 0x001A7308
	[SuppressUnmanagedCodeSecurity]
	[MethodImpl(MethodImplOptions.Unmanaged | MethodImplOptions.PreserveSig, MethodCodeType = MethodCodeType.Native)]
	internal static extern void _Init_thread_lock();

	// Token: 0x04000001 RID: 1 RVA: 0x00205580 File Offset: 0x00202F80
	internal static $ArrayType$$$BY0BC@$$CBD ??_C@_0BC@EOODALEL@Unknown?5exception@;

	// Token: 0x04000002 RID: 2 RVA: 0x002339C0 File Offset: 0x002313C0
	internal static _s__RTTICompleteObjectLocator2 ??_R4exception@std@@6B@;

	// Token: 0x04000003 RID: 3 RVA: 0x002338F0 File Offset: 0x002312F0
	internal static _s__RTTIBaseClassDescriptor ??_R1A@?0A@EA@bad_cast@std@@8;

	// Token: 0x04000004 RID: 4 RVA: 0x00233970 File Offset: 0x00231370
	internal static _s__RTTIBaseClassDescriptor ??_R1A@?0A@EA@exception@std@@8;

	// Token: 0x04000005 RID: 5 RVA: 0x00233918 File Offset: 0x00231318
	internal static $_s__RTTIBaseClassArray$_extraBytes_16 ??_R2bad_cast@std@@8;

	// Token: 0x04000006 RID: 6 RVA: 0x00233998 File Offset: 0x00231398
	internal static $_s__RTTIBaseClassArray$_extraBytes_8 ??_R2exception@std@@8;

	// Token: 0x04000007 RID: 7 RVA: 0x00251020 File Offset: 0x0024E020
	internal static $ArrayType$$$BY02Q6AXXZ ??_7bad_cast@std@@6B@;

	// Token: 0x04000008 RID: 8 RVA: 0x0025C9C0 File Offset: 0x002599C0
	internal unsafe static HINSTANCE__* g_module_handle;

	// Token: 0x04000009 RID: 9 RVA: 0x0025C488 File Offset: 0x00259488
	internal static $_TypeDescriptor$_extraBytes_19 ??_R0?AVbad_cast@std@@@8;

	// Token: 0x0400000A RID: 10 RVA: 0x00251008 File Offset: 0x0024E008
	internal static $ArrayType$$$BY02Q6AXXZ ??_7exception@std@@6B@;

	// Token: 0x0400000B RID: 11 RVA: 0x002339A8 File Offset: 0x002313A8
	internal static _s__RTTIClassHierarchyDescriptor ??_R3exception@std@@8;

	// Token: 0x0400000C RID: 12 RVA: 0x00233930 File Offset: 0x00231330
	internal static _s__RTTIClassHierarchyDescriptor ??_R3bad_cast@std@@8;

	// Token: 0x0400000D RID: 13 RVA: 0x00233948 File Offset: 0x00231348
	internal static _s__RTTICompleteObjectLocator2 ??_R4bad_cast@std@@6B@;

	// Token: 0x0400000E RID: 14 RVA: 0x0025C4B0 File Offset: 0x002594B0
	internal static $_TypeDescriptor$_extraBytes_20 ??_R0?AVexception@std@@@8;

	// Token: 0x0400000F RID: 15 RVA: 0x00251030 File Offset: 0x0024E030
	public static method __m2mep@??_Eexception@std@@$$FUEAAPEAXI@Z;

	// Token: 0x04000010 RID: 16 RVA: 0x00251040 File Offset: 0x0024E040
	public static method __m2mep@??_Ebad_cast@std@@$$FUEAAPEAXI@Z;

	// Token: 0x04000011 RID: 17 RVA: 0x00205570 File Offset: 0x00202F70
	internal static $ArrayType$$$BY08$$CBD ??_C@_08EPJLHIJG@bad?5cast@;

	// Token: 0x04000012 RID: 18 RVA: 0x00205374 File Offset: 0x00202D74
	internal static $ArrayType$$$BY00$$CB_W ??_C@_11LOCGONAA@@;

	// Token: 0x04000013 RID: 19 RVA: 0x002053B0 File Offset: 0x00202DB0
	internal static $ArrayType$$$BY0BA@$$CBD ??_C@_0BA@JFNIOLAK@string?5too?5long@;

	// Token: 0x04000014 RID: 20 RVA: 0x002114C8 File Offset: 0x0020EEC8
	internal static $ArrayType$$$BY0BE@$$CBD ??_C@_0BE@JONHPENG@map?1set?$DMT?$DO?5too?5long@;

	// Token: 0x04000015 RID: 21 RVA: 0x001AC064 File Offset: 0x001A9A64
	internal static $ArrayType$$$BY01$$CB_W ??_C@_13FPGAJAPJ@?$AA?2@;

	// Token: 0x04000016 RID: 22 RVA: 0x001AC070 File Offset: 0x001A9A70
	internal static $ArrayType$$$BY0DN@$$CB_W ??_C@_1HK@GAGLAEAP@?$AAP?$AAa?$AAt?$AAc?$AAh?$AAe?$AAr?$AA?5?$AAI?$AAn?$AAi?$AAt?$AA?5?$AA?9?$AA?5@;

	// Token: 0x04000017 RID: 23 RVA: 0x001AC0F0 File Offset: 0x001A9AF0
	internal static $ArrayType$$$BY0DA@$$CB_W ??_C@_1GA@KKFNACNB@?$AAP?$AAa?$AAt?$AAc?$AAh?$AAe?$AAr?$AA?5?$AAI?$AAn?$AAi?$AAt?$AA?5?$AAr?$AAe@;

	// Token: 0x04000018 RID: 24 RVA: 0x001AC150 File Offset: 0x001A9B50
	internal static $ArrayType$$$BY0BL@$$CB_W ??_C@_1DG@IMPPNGAB@?$AAC?$AAh?$AAe?$AAc?$AAk?$AAU?$AAp?$AAd?$AAa?$AAt?$AAe?$AA?5?$AA?9?$AA?5?$AAg@;

	// Token: 0x04000019 RID: 25 RVA: 0x001AC190 File Offset: 0x001A9B90
	internal static $ArrayType$$$BY0CP@$$CB_W ??_C@_1FO@GIIPJINP@?$AAC?$AAh?$AAe?$AAc?$AAk?$AAU?$AAp?$AAd?$AAa?$AAt?$AAe?$AA?5?$AAr?$AAe?$AAs@;

	// Token: 0x0400001A RID: 26 RVA: 0x001AC1F0 File Offset: 0x001A9BF0
	internal static $ArrayType$$$BY0BG@$$CB_W ??_C@_1CM@KBJILKCK@?$AAU?$AAp?$AAd?$AAa?$AAt?$AAe?$AA?5?$AA?9?$AA?5?$AAg?$AAa?$AAm?$AAe?$AA?5?$AAi@;

	// Token: 0x0400001B RID: 27 RVA: 0x001AC220 File Offset: 0x001A9C20
	internal static $ArrayType$$$BY0CK@$$CB_W ??_C@_1FE@LAKPLKGL@?$AAU?$AAp?$AAd?$AAa?$AAt?$AAe?$AA?5?$AAr?$AAe?$AAs?$AAu?$AAl?$AAt?$AA?5?$AA?9@;

	// Token: 0x0400001C RID: 28 RVA: 0x001AC280 File Offset: 0x001A9C80
	internal static $ArrayType$$$BY0CG@$$CB_W ??_C@_1EM@MKCHHEEM@?$AAS?$AAi?$AAm?$AAp?$AAl?$AAe?$AAC?$AAh?$AAe?$AAc?$AAk?$AA?$CI?$AAC?$AAh?$AAe@;

	// Token: 0x0400001D RID: 29 RVA: 0x001AC2D0 File Offset: 0x001A9CD0
	internal static $ArrayType$$$BY0DK@$$CB_W ??_C@_1HE@EHPFLABL@?$AAS?$AAi?$AAm?$AAp?$AAl?$AAe?$AAC?$AAh?$AAe?$AAc?$AAk?$AA?$CI?$AAC?$AAh?$AAe@;

	// Token: 0x0400001E RID: 30 RVA: 0x001AC350 File Offset: 0x001A9D50
	internal static $ArrayType$$$BY0CG@$$CB_W ??_C@_1EM@HFKLBJEB@?$AAS?$AAi?$AAm?$AAp?$AAl?$AAe?$AAC?$AAh?$AAe?$AAc?$AAk?$AA?$CI?$AAC?$AAh?$AAe@;

	// Token: 0x0400001F RID: 31 RVA: 0x001AC3A0 File Offset: 0x001A9DA0
	internal static $ArrayType$$$BY0DK@$$CB_W ??_C@_1HE@PFDCDBLB@?$AAS?$AAi?$AAm?$AAp?$AAl?$AAe?$AAC?$AAh?$AAe?$AAc?$AAk?$AA?$CI?$AAC?$AAh?$AAe@;

	// Token: 0x04000020 RID: 32 RVA: 0x001AC420 File Offset: 0x001A9E20
	internal static $ArrayType$$$BY0CE@$$CB_W ??_C@_1EI@DIIGGBCD@?$AAF?$AAu?$AAl?$AAl?$AAC?$AAh?$AAe?$AAc?$AAk?$AA?$CI?$AAC?$AAh?$AAe?$AAc?$AAk@;

	// Token: 0x04000021 RID: 33 RVA: 0x001AC470 File Offset: 0x001A9E70
	internal static $ArrayType$$$BY0DI@$$CB_W ??_C@_1HA@BEBJIJJP@?$AAF?$AAu?$AAl?$AAl?$AAC?$AAh?$AAe?$AAc?$AAk?$AA?$CI?$AAC?$AAh?$AAe?$AAc?$AAk@;

	// Token: 0x04000022 RID: 34 RVA: 0x001AC4E0 File Offset: 0x001A9EE0
	internal static $ArrayType$$$BY0CB@$$CB_W ??_C@_1EC@OKPLJGNE@?$AAF?$AAu?$AAl?$AAl?$AAC?$AAh?$AAe?$AAc?$AAk?$AA?$CI?$AAU?$AAp?$AAd?$AAa?$AAt@;

	// Token: 0x04000023 RID: 35 RVA: 0x001AC530 File Offset: 0x001A9F30
	internal static $ArrayType$$$BY0DF@$$CB_W ??_C@_1GK@PKHPLNCL@?$AAF?$AAu?$AAl?$AAl?$AAC?$AAh?$AAe?$AAc?$AAk?$AA?$CI?$AAU?$AAp?$AAd?$AAa?$AAt@;

	// Token: 0x04000024 RID: 36 RVA: 0x001AC680 File Offset: 0x001AA080
	internal static $ArrayType$$$BY0BO@$$CBD ??_C@_0BO@JJPIJFAH@downloaded_install_file_size?3@;

	// Token: 0x04000025 RID: 37 RVA: 0x002055F8 File Offset: 0x00202FF8
	internal static $ArrayType$$$BY02$$CBD ??_C@_02KEGNLNML@?0?5@;

	// Token: 0x04000026 RID: 38 RVA: 0x001AC660 File Offset: 0x001AA060
	internal static $ArrayType$$$BY0BC@$$CBD ??_C@_0BC@ELFMBGPL@patch?5list?5made?3?5@;

	// Token: 0x04000027 RID: 39 RVA: 0x001AC650 File Offset: 0x001AA050
	internal static $ArrayType$$$BY08$$CBD ??_C@_08GMABHIHC@?5bytes?0?5@;

	// Token: 0x04000028 RID: 40 RVA: 0x001AC5F0 File Offset: 0x001A9FF0
	internal static $ArrayType$$$BY03$$CBD ??_C@_03NIBMKKKC@?5?1?5@;

	// Token: 0x04000029 RID: 41 RVA: 0x001AC640 File Offset: 0x001AA040
	internal static $ArrayType$$$BY0P@$$CBD ??_C@_0P@MOJKMFCJ@patched?5size?3?5@;

	// Token: 0x0400002A RID: 42 RVA: 0x001AC638 File Offset: 0x001AA038
	internal static $ArrayType$$$BY07$$CBD ??_C@_07PFKJKOEF@kB?1s?$CJ?0?5@;

	// Token: 0x0400002B RID: 43 RVA: 0x00210B24 File Offset: 0x0020E524
	internal static $ArrayType$$$BY01$$CBD ??_C@_01ODHLEDKK@?$CI@;

	// Token: 0x0400002C RID: 44 RVA: 0x001AC630 File Offset: 0x001AA030
	internal static $ArrayType$$$BY07$$CBD ??_C@_07JADGPAJA@?5bytes?5@;

	// Token: 0x0400002D RID: 45 RVA: 0x001AC618 File Offset: 0x001AA018
	internal static $ArrayType$$$BY0BC@$$CBD ??_C@_0BC@KOMNNLCC@downloaded?5size?3?5@;

	// Token: 0x0400002E RID: 46 RVA: 0x001AC600 File Offset: 0x001AA000
	internal static $ArrayType$$$BY0BC@$$CBD ??_C@_0BC@PPHPKACJ@files?5processed?3?5@;

	// Token: 0x0400002F RID: 47 RVA: 0x001AC5F8 File Offset: 0x001A9FF8
	internal static $ArrayType$$$BY07$$CBD ??_C@_07GNNLDBBG@bytes?0?5@;

	// Token: 0x04000030 RID: 48 RVA: 0x001AC5D8 File Offset: 0x001A9FD8
	internal static $ArrayType$$$BY0BI@$$CBD ??_C@_0BI@FFKOEDGE@current_file_progress?3?5@;

	// Token: 0x04000031 RID: 49 RVA: 0x001AC5C8 File Offset: 0x001A9FC8
	internal static $ArrayType$$$BY0N@$$CBD ??_C@_0N@OGFOBDBI@?0?5process?5?3?5@;

	// Token: 0x04000032 RID: 50 RVA: 0x001AC5B8 File Offset: 0x001A9FB8
	internal static $ArrayType$$$BY09$$CBD ??_C@_09GNIEPPPF@game?5id?3?5@;

	// Token: 0x04000033 RID: 51 RVA: 0x001AC5A0 File Offset: 0x001A9FA0
	internal static $ArrayType$$$BY0BE@$$CBD ??_C@_0BE@HLJGKDAC@Patcher?5Progress?5?9?5@;

	// Token: 0x04000034 RID: 52 RVA: 0x001ABF60 File Offset: 0x001A9960
	internal static $ArrayType$$$BY0BN@$$CB_W ??_C@_1DK@PIINFAJB@?$AAP?$AAa?$AAt?$AAc?$AAh?$AAe?$AAr?$AA?5?$AAA?$AAb?$AAo?$AAr?$AAt?$AA?5?$AA?9@;

	// Token: 0x04000035 RID: 53 RVA: 0x001ABFB0 File Offset: 0x001A99B0
	internal static $ArrayType$$$BY0FK@$$CB_W ??_C@_1LE@PGOKOMN@?$AAP?$AAa?$AAt?$AAc?$AAh?$AAe?$AAr?$AA?5?$AAE?$AAr?$AAr?$AAo?$AAr?$AA?5?$AA?9@;

	// Token: 0x04000036 RID: 54 RVA: 0x00232C88 File Offset: 0x00230688
	internal static $_s__RTTIBaseClassArray$_extraBytes_40 ??_R2?$basic_ostringstream@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@8;

	// Token: 0x04000037 RID: 55 RVA: 0x00232C20 File Offset: 0x00230620
	internal static $_s__RTTIBaseClassArray$_extraBytes_32 ??_R2?$basic_ostream@_WU?$char_traits@_W@std@@@std@@8;

	// Token: 0x04000038 RID: 56 RVA: 0x00232BC0 File Offset: 0x002305C0
	internal static $_s__RTTIBaseClassArray$_extraBytes_24 ??_R2?$basic_ios@_WU?$char_traits@_W@std@@@std@@8;

	// Token: 0x04000039 RID: 57 RVA: 0x002333C0 File Offset: 0x00230DC0
	internal static $_s__RTTIBaseClassArray$_extraBytes_16 ??_R2ios_base@std@@8;

	// Token: 0x0400003A RID: 58 RVA: 0x002333D8 File Offset: 0x00230DD8
	internal static $_s__RTTIBaseClassArray$_extraBytes_8 ??_R2?$_Iosb@H@std@@8;

	// Token: 0x0400003B RID: 59 RVA: 0x00232B18 File Offset: 0x00230518
	internal static $_s__RTTIBaseClassArray$_extraBytes_16 ??_R2?$basic_stringbuf@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@8;

	// Token: 0x0400003C RID: 60 RVA: 0x00232AC8 File Offset: 0x002304C8
	internal static $_s__RTTIBaseClassArray$_extraBytes_8 ??_R2?$basic_streambuf@_WU?$char_traits@_W@std@@@std@@8;

	// Token: 0x0400003D RID: 61 RVA: 0x00232B70 File Offset: 0x00230570
	internal static _s__RTTIBaseClassDescriptor ??_R1A@?0A@EA@?$basic_ostringstream@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@8;

	// Token: 0x0400003E RID: 62 RVA: 0x00233578 File Offset: 0x00230F78
	internal static _s__RTTIBaseClassDescriptor ??_R17A@3EA@?$_Iosb@H@std@@8;

	// Token: 0x0400003F RID: 63 RVA: 0x002335A0 File Offset: 0x00230FA0
	internal static _s__RTTIBaseClassDescriptor ??_R1A@A@3EA@ios_base@std@@8;

	// Token: 0x04000040 RID: 64 RVA: 0x00232BF8 File Offset: 0x002305F8
	internal static _s__RTTIBaseClassDescriptor ??_R1A@A@3FA@?$basic_ios@_WU?$char_traits@_W@std@@@std@@8;

	// Token: 0x04000041 RID: 65 RVA: 0x00232C60 File Offset: 0x00230660
	internal static _s__RTTIBaseClassDescriptor ??_R1A@?0A@EA@?$basic_ostream@_WU?$char_traits@_W@std@@@std@@8;

	// Token: 0x04000042 RID: 66 RVA: 0x00232B98 File Offset: 0x00230598
	internal static _s__RTTIBaseClassDescriptor ??_R1A@?0A@EA@?$basic_ios@_WU?$char_traits@_W@std@@@std@@8;

	// Token: 0x04000043 RID: 67 RVA: 0x00233640 File Offset: 0x00231040
	internal static _s__RTTIBaseClassDescriptor ??_R17?0A@EA@?$_Iosb@H@std@@8;

	// Token: 0x04000044 RID: 68 RVA: 0x00233668 File Offset: 0x00231068
	internal static _s__RTTIBaseClassDescriptor ??_R1A@?0A@EA@ios_base@std@@8;

	// Token: 0x04000045 RID: 69 RVA: 0x00233690 File Offset: 0x00231090
	internal static _s__RTTIBaseClassDescriptor ??_R1A@?0A@EA@?$_Iosb@H@std@@8;

	// Token: 0x04000046 RID: 70 RVA: 0x00232AA0 File Offset: 0x002304A0
	internal static _s__RTTIBaseClassDescriptor ??_R1A@?0A@EA@?$basic_stringbuf@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@8;

	// Token: 0x04000047 RID: 71 RVA: 0x00232AF0 File Offset: 0x002304F0
	internal static _s__RTTIBaseClassDescriptor ??_R1A@?0A@EA@?$basic_streambuf@_WU?$char_traits@_W@std@@@std@@8;

	// Token: 0x04000048 RID: 72 RVA: 0x00232C48 File Offset: 0x00230648
	internal static _s__RTTIClassHierarchyDescriptor ??_R3?$basic_ostream@_WU?$char_traits@_W@std@@@std@@8;

	// Token: 0x04000049 RID: 73 RVA: 0x0025BB20 File Offset: 0x00258B20
	internal static $_TypeDescriptor$_extraBytes_52 ??_R0?AV?$basic_ostream@_WU?$char_traits@_W@std@@@std@@@8;

	// Token: 0x0400004A RID: 74 RVA: 0x00233798 File Offset: 0x00231198
	internal static _s__RTTIClassHierarchyDescriptor ??_R3ios_base@std@@8;

	// Token: 0x0400004B RID: 75 RVA: 0x0025C2E8 File Offset: 0x002592E8
	internal static $_TypeDescriptor$_extraBytes_19 ??_R0?AVios_base@std@@@8;

	// Token: 0x0400004C RID: 76 RVA: 0x002337B0 File Offset: 0x002311B0
	internal static _s__RTTIClassHierarchyDescriptor ??_R3?$_Iosb@H@std@@8;

	// Token: 0x0400004D RID: 77 RVA: 0x0025C310 File Offset: 0x00259310
	internal static $_TypeDescriptor$_extraBytes_20 ??_R0?AV?$_Iosb@H@std@@@8;

	// Token: 0x0400004E RID: 78 RVA: 0x00232BE0 File Offset: 0x002305E0
	internal static _s__RTTIClassHierarchyDescriptor ??_R3?$basic_ios@_WU?$char_traits@_W@std@@@std@@8;

	// Token: 0x0400004F RID: 79 RVA: 0x0025BB70 File Offset: 0x00258B70
	internal static $_TypeDescriptor$_extraBytes_48 ??_R0?AV?$basic_ios@_WU?$char_traits@_W@std@@@std@@@8;

	// Token: 0x04000050 RID: 80 RVA: 0x00232CB8 File Offset: 0x002306B8
	internal static _s__RTTIClassHierarchyDescriptor ??_R3?$basic_ostringstream@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@8;

	// Token: 0x04000051 RID: 81 RVA: 0x0025BAC0 File Offset: 0x00258AC0
	internal static $_TypeDescriptor$_extraBytes_76 ??_R0?AV?$basic_ostringstream@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@8;

	// Token: 0x04000052 RID: 82 RVA: 0x00232AD8 File Offset: 0x002304D8
	internal static _s__RTTIClassHierarchyDescriptor ??_R3?$basic_streambuf@_WU?$char_traits@_W@std@@@std@@8;

	// Token: 0x04000053 RID: 83 RVA: 0x0025BA70 File Offset: 0x00258A70
	internal static $_TypeDescriptor$_extraBytes_54 ??_R0?AV?$basic_streambuf@_WU?$char_traits@_W@std@@@std@@@8;

	// Token: 0x04000054 RID: 84 RVA: 0x00232B30 File Offset: 0x00230530
	internal static _s__RTTIClassHierarchyDescriptor ??_R3?$basic_stringbuf@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@8;

	// Token: 0x04000055 RID: 85 RVA: 0x0025BA10 File Offset: 0x00258A10
	internal static $_TypeDescriptor$_extraBytes_72 ??_R0?AV?$basic_stringbuf@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@8;

	// Token: 0x04000056 RID: 86 RVA: 0x00232CD0 File Offset: 0x002306D0
	internal static _s__RTTICompleteObjectLocator2 ??_R4?$basic_ostringstream@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@6B@;

	// Token: 0x04000057 RID: 87 RVA: 0x00232B48 File Offset: 0x00230548
	internal static _s__RTTICompleteObjectLocator2 ??_R4?$basic_stringbuf@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@6B@;

	// Token: 0x04000058 RID: 88 RVA: 0x00205410 File Offset: 0x00202E10
	internal static piecewise_construct_t piecewise_construct;

	// Token: 0x04000059 RID: 89 RVA: 0x0025CBBC File Offset: 0x00000000
	internal static bool ?use_log@LogMsg@@2_NA;

	// Token: 0x0400005A RID: 90 RVA: 0x0025CBC0 File Offset: 0x00000000
	internal unsafe static locale.facet* ?_Psave@?$_Facetptr@V?$ctype@_W@std@@@std@@2PEBVfacet@locale@2@EB;

	// Token: 0x0400005B RID: 91 RVA: 0x0024C468 File Offset: 0x00249E68
	internal static $_s__CatchableTypeArray$_extraBytes_16 _CTA2?AVbad_cast@std@@;

	// Token: 0x0400005C RID: 92 RVA: 0x0024C480 File Offset: 0x00249E80
	internal static _s__ThrowInfo _TI2?AVbad_cast@std@@;

	// Token: 0x0400005D RID: 93 RVA: 0x00251058 File Offset: 0x0024E058
	internal static $ArrayType$$$BY0BA@Q6AXXZ ??_7?$basic_stringbuf@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@6B@;

	// Token: 0x0400005E RID: 94 RVA: 0x001ABFA0 File Offset: 0x001A99A0
	internal static $ArrayType$$$BY01$$CBH ??_8?$basic_ostringstream@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@7B@;

	// Token: 0x0400005F RID: 95 RVA: 0x002510D8 File Offset: 0x0024E0D8
	internal static $ArrayType$$$BY01Q6AXXZ ??_7?$basic_ostringstream@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@6B@;

	// Token: 0x04000060 RID: 96 RVA: 0x0025CBC8 File Offset: 0x00000000
	internal static int ?$TSS0@?1??GetPatcherManagerMap@PatcherManager@@CAAEAV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEAVPatcherManager@@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEAVPatcherManager@@@std@@@2@@std@@XZ@4HA;

	// Token: 0x04000061 RID: 97 RVA: 0x0025CBD0 File Offset: 0x00000000
	internal static map<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>,PatcherManager\u0020*,std::less<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020>,std::allocator<std::pair<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020,PatcherManager\u0020*>\u0020>\u0020> ?s_patcher_manager_map@?1??GetPatcherManagerMap@PatcherManager@@CAAEAV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEAVPatcherManager@@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEAVPatcherManager@@@std@@@2@@std@@XZ@4V34@A;

	// Token: 0x04000062 RID: 98 RVA: 0x00251140 File Offset: 0x0024E140
	public static method __m2mep@?seekpos@?$basic_stringbuf@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@$$FMEAA?AV?$fpos@U_Mbstatet@@@2@V32@H@Z;

	// Token: 0x04000063 RID: 99 RVA: 0x00251130 File Offset: 0x0024E130
	public static method __m2mep@?seekoff@?$basic_stringbuf@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@$$FMEAA?AV?$fpos@U_Mbstatet@@@2@_JHH@Z;

	// Token: 0x04000064 RID: 100 RVA: 0x00251120 File Offset: 0x0024E120
	public static method __m2mep@?underflow@?$basic_stringbuf@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@$$FMEAAGXZ;

	// Token: 0x04000065 RID: 101 RVA: 0x00251110 File Offset: 0x0024E110
	public static method __m2mep@?pbackfail@?$basic_stringbuf@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@$$FMEAAGG@Z;

	// Token: 0x04000066 RID: 102 RVA: 0x00251100 File Offset: 0x0024E100
	public static method __m2mep@?overflow@?$basic_stringbuf@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@$$FMEAAGG@Z;

	// Token: 0x04000067 RID: 103 RVA: 0x002510F0 File Offset: 0x0024E0F0
	public static method __m2mep@??_E?$basic_stringbuf@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@$$FUEAAPEAXI@Z;

	// Token: 0x04000068 RID: 104 RVA: 0x00251150 File Offset: 0x0024E150
	public static method __m2mep@??_E?$basic_ostringstream@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@$$F$4PPPPPPPM@A@EAAPEAXI@Z;

	// Token: 0x04000069 RID: 105 RVA: 0x002510E0 File Offset: 0x0024E0E0
	public static method __m2mep@?boolalpha@std@@$$FYAAEAVios_base@1@AEAV21@@Z;

	// Token: 0x0400006A RID: 106 RVA: 0x001AC678 File Offset: 0x001AA078
	public unsafe static int** __unep@?boolalpha@std@@$$FYAAEAVios_base@1@AEAV21@@Z;

	// Token: 0x0400006B RID: 107 RVA: 0x001AC6A0 File Offset: 0x001AA0A0
	unsafe static int** __unep@?toupper@@$$J0YAHH@Z;

	// Token: 0x0400006C RID: 108 RVA: 0x001AC768 File Offset: 0x001AA168
	internal static $ArrayType$$$BY0BE@$$CB_W ??_C@_1CI@FEDNFPGD@?$AAc?$AAh?$AAe?$AAc?$AAk?$AA_?$AAu?$AAp?$AAd?$AAa?$AAt?$AAe?$AA?5?$AAc?$AAa@;

	// Token: 0x0400006D RID: 109 RVA: 0x001AC790 File Offset: 0x001AA190
	internal static $ArrayType$$$BY09$$CB_W ??_C@_1BE@MEEABCCM@?$AAg?$AAa?$AAm?$AAe?$AA_?$AAp?$AAa?$AAt?$AAh@;

	// Token: 0x0400006E RID: 110 RVA: 0x001AC6A8 File Offset: 0x001AA0A8
	internal static $ArrayType$$$BY0O@$$CB_W ??_C@_1BM@HNONJDNI@?$AAU?$AAp?$AAd?$AAa?$AAt?$AAe?$AA?5?$AAc?$AAa?$AAl?$AAl?$AAe?$AAd@;

	// Token: 0x0400006F RID: 111 RVA: 0x001AC6C8 File Offset: 0x001AA0C8
	internal static $ArrayType$$$BY0BD@$$CB_W ??_C@_1CG@BKKJOIPG@?$AAS?$AAi?$AAm?$AAp?$AAl?$AAe?$AAC?$AAh?$AAe?$AAc?$AAk?$AA?5?$AAc?$AAa?$AAl@;

	// Token: 0x04000070 RID: 112 RVA: 0x001AC6F0 File Offset: 0x001AA0F0
	internal static $ArrayType$$$BY0BB@$$CB_W ??_C@_1CC@BKCEEMDK@?$AAF?$AAu?$AAl?$AAl?$AAC?$AAh?$AAe?$AAc?$AAk?$AA?5?$AAc?$AAa?$AAl?$AAl?$AAe@;

	// Token: 0x04000071 RID: 113 RVA: 0x001AC718 File Offset: 0x001AA118
	internal static $ArrayType$$$BY0BI@$$CB_W ??_C@_1DA@ELBBPNK@?$AAr?$AAe?$AAq?$AAu?$AAe?$AAs?$AAt?$AA_?$AAp?$AAr?$AAo?$AAg?$AAr?$AAe?$AAs@;

	// Token: 0x04000072 RID: 114 RVA: 0x001AC748 File Offset: 0x001AA148
	internal static $ArrayType$$$BY0N@$$CB_W ??_C@_1BK@FACBGBOJ@?$AAa?$AAb?$AAo?$AAr?$AAt?$AA?5?$AAc?$AAa?$AAl?$AAl?$AAe?$AAd@;

	// Token: 0x04000073 RID: 115 RVA: 0x001AC7C0 File Offset: 0x001AA1C0
	internal static $ArrayType$$$BY0P@$$CB_W ??_C@_1BO@MLPNLLME@?$AAI?$AAn?$AAs?$AAt?$AAa?$AAl?$AAl?$AA?5?$AAc?$AAa?$AAl?$AAl?$AAe?$AAd@;

	// Token: 0x04000074 RID: 116 RVA: 0x00233068 File Offset: 0x00230A68
	internal static $_s__RTTIBaseClassArray$_extraBytes_16 ??_R2?$_Func_impl_no_alloc@P6MPE$AAVInstallResult@@PEAVPatcherManager@@@ZPE$AAVObject@System@@PEAV2@@std@@8;

	// Token: 0x04000075 RID: 117 RVA: 0x00232FE8 File Offset: 0x002309E8
	internal static $_s__RTTIBaseClassArray$_extraBytes_16 ??_R2?$_Func_impl_no_alloc@P6MPE$AAVFullCheckResult@@PEAVPatcherManager@@@ZPE$AAVObject@System@@PEAV2@@std@@8;

	// Token: 0x04000076 RID: 118 RVA: 0x00232F68 File Offset: 0x00230968
	internal static $_s__RTTIBaseClassArray$_extraBytes_16 ??_R2?$_Func_impl_no_alloc@P6MPE$AAVSimpleCheckResult@@PEAVPatcherManager@@@ZPE$AAVObject@System@@PEAV2@@std@@8;

	// Token: 0x04000077 RID: 119 RVA: 0x00232EE8 File Offset: 0x002308E8
	internal static $_s__RTTIBaseClassArray$_extraBytes_16 ??_R2?$_Func_impl_no_alloc@P6MPE$AAVUpdateResult@@PEAVPatcherManager@@@ZPE$AAVObject@System@@PEAV2@@std@@8;

	// Token: 0x04000078 RID: 120 RVA: 0x00232E68 File Offset: 0x00230868
	internal static $_s__RTTIBaseClassArray$_extraBytes_16 ??_R2?$_Func_impl_no_alloc@P6MPE$AAVCheckUpdateResult@@PEAVPatcherManager@@@ZPE$AAVObject@System@@PEAV2@@std@@8;

	// Token: 0x04000079 RID: 121 RVA: 0x00232E18 File Offset: 0x00230818
	internal static $_s__RTTIBaseClassArray$_extraBytes_8 ??_R2?$_Func_base@PE$AAVObject@System@@PEAVPatcherManager@@@std@@8;

	// Token: 0x0400007A RID: 122 RVA: 0x00232D98 File Offset: 0x00230798
	internal static $_s__RTTIBaseClassArray$_extraBytes_16 ??_R2?$ObjectModule@VPatcherNativeObject@@@@8;

	// Token: 0x0400007B RID: 123 RVA: 0x00232D20 File Offset: 0x00230720
	internal static $_s__RTTIBaseClassArray$_extraBytes_8 ??_R2PatcherNativeObject@@8;

	// Token: 0x0400007C RID: 124 RVA: 0x00233040 File Offset: 0x00230A40
	internal static _s__RTTIBaseClassDescriptor ??_R1A@?0A@EA@?$_Func_impl_no_alloc@P6MPE$AAVInstallResult@@PEAVPatcherManager@@@ZPE$AAVObject@System@@PEAV2@@std@@8;

	// Token: 0x0400007D RID: 125 RVA: 0x00232FC0 File Offset: 0x002309C0
	internal static _s__RTTIBaseClassDescriptor ??_R1A@?0A@EA@?$_Func_impl_no_alloc@P6MPE$AAVFullCheckResult@@PEAVPatcherManager@@@ZPE$AAVObject@System@@PEAV2@@std@@8;

	// Token: 0x0400007E RID: 126 RVA: 0x00232F40 File Offset: 0x00230940
	internal static _s__RTTIBaseClassDescriptor ??_R1A@?0A@EA@?$_Func_impl_no_alloc@P6MPE$AAVSimpleCheckResult@@PEAVPatcherManager@@@ZPE$AAVObject@System@@PEAV2@@std@@8;

	// Token: 0x0400007F RID: 127 RVA: 0x00232EC0 File Offset: 0x002308C0
	internal static _s__RTTIBaseClassDescriptor ??_R1A@?0A@EA@?$_Func_impl_no_alloc@P6MPE$AAVUpdateResult@@PEAVPatcherManager@@@ZPE$AAVObject@System@@PEAV2@@std@@8;

	// Token: 0x04000080 RID: 128 RVA: 0x00232E40 File Offset: 0x00230840
	internal static _s__RTTIBaseClassDescriptor ??_R1A@?0A@EA@?$_Func_impl_no_alloc@P6MPE$AAVCheckUpdateResult@@PEAVPatcherManager@@@ZPE$AAVObject@System@@PEAV2@@std@@8;

	// Token: 0x04000081 RID: 129 RVA: 0x00232DF0 File Offset: 0x002307F0
	internal static _s__RTTIBaseClassDescriptor ??_R1A@?0A@EA@?$_Func_base@PE$AAVObject@System@@PEAVPatcherManager@@@std@@8;

	// Token: 0x04000082 RID: 130 RVA: 0x00232D70 File Offset: 0x00230770
	internal static _s__RTTIBaseClassDescriptor ??_R1A@?0A@EA@?$ObjectModule@VPatcherNativeObject@@@@8;

	// Token: 0x04000083 RID: 131 RVA: 0x00232CF8 File Offset: 0x002306F8
	internal static _s__RTTIBaseClassDescriptor ??_R1A@?0A@EA@PatcherNativeObject@@8;

	// Token: 0x04000084 RID: 132 RVA: 0x00233080 File Offset: 0x00230A80
	internal static _s__RTTIClassHierarchyDescriptor ??_R3?$_Func_impl_no_alloc@P6MPE$AAVInstallResult@@PEAVPatcherManager@@@ZPE$AAVObject@System@@PEAV2@@std@@8;

	// Token: 0x04000085 RID: 133 RVA: 0x0025BFF0 File Offset: 0x00258FF0
	internal static $_TypeDescriptor$_extraBytes_106 ??_R0?AV?$_Func_impl_no_alloc@P6MPE$AAVInstallResult@@PEAVPatcherManager@@@ZPE$AAVObject@System@@PEAV2@@std@@@8;

	// Token: 0x04000086 RID: 134 RVA: 0x00233000 File Offset: 0x00230A00
	internal static _s__RTTIClassHierarchyDescriptor ??_R3?$_Func_impl_no_alloc@P6MPE$AAVFullCheckResult@@PEAVPatcherManager@@@ZPE$AAVObject@System@@PEAV2@@std@@8;

	// Token: 0x04000087 RID: 135 RVA: 0x0025BF70 File Offset: 0x00258F70
	internal static $_TypeDescriptor$_extraBytes_108 ??_R0?AV?$_Func_impl_no_alloc@P6MPE$AAVFullCheckResult@@PEAVPatcherManager@@@ZPE$AAVObject@System@@PEAV2@@std@@@8;

	// Token: 0x04000088 RID: 136 RVA: 0x00232F80 File Offset: 0x00230980
	internal static _s__RTTIClassHierarchyDescriptor ??_R3?$_Func_impl_no_alloc@P6MPE$AAVSimpleCheckResult@@PEAVPatcherManager@@@ZPE$AAVObject@System@@PEAV2@@std@@8;

	// Token: 0x04000089 RID: 137 RVA: 0x0025BEF0 File Offset: 0x00258EF0
	internal static $_TypeDescriptor$_extraBytes_110 ??_R0?AV?$_Func_impl_no_alloc@P6MPE$AAVSimpleCheckResult@@PEAVPatcherManager@@@ZPE$AAVObject@System@@PEAV2@@std@@@8;

	// Token: 0x0400008A RID: 138 RVA: 0x00232F00 File Offset: 0x00230900
	internal static _s__RTTIClassHierarchyDescriptor ??_R3?$_Func_impl_no_alloc@P6MPE$AAVUpdateResult@@PEAVPatcherManager@@@ZPE$AAVObject@System@@PEAV2@@std@@8;

	// Token: 0x0400008B RID: 139 RVA: 0x0025BE70 File Offset: 0x00258E70
	internal static $_TypeDescriptor$_extraBytes_105 ??_R0?AV?$_Func_impl_no_alloc@P6MPE$AAVUpdateResult@@PEAVPatcherManager@@@ZPE$AAVObject@System@@PEAV2@@std@@@8;

	// Token: 0x0400008C RID: 140 RVA: 0x00232E80 File Offset: 0x00230880
	internal static _s__RTTIClassHierarchyDescriptor ??_R3?$_Func_impl_no_alloc@P6MPE$AAVCheckUpdateResult@@PEAVPatcherManager@@@ZPE$AAVObject@System@@PEAV2@@std@@8;

	// Token: 0x0400008D RID: 141 RVA: 0x0025BDF0 File Offset: 0x00258DF0
	internal static $_TypeDescriptor$_extraBytes_110 ??_R0?AV?$_Func_impl_no_alloc@P6MPE$AAVCheckUpdateResult@@PEAVPatcherManager@@@ZPE$AAVObject@System@@PEAV2@@std@@@8;

	// Token: 0x0400008E RID: 142 RVA: 0x00232E28 File Offset: 0x00230828
	internal static _s__RTTIClassHierarchyDescriptor ??_R3?$_Func_base@PE$AAVObject@System@@PEAVPatcherManager@@@std@@8;

	// Token: 0x0400008F RID: 143 RVA: 0x0025BD90 File Offset: 0x00258D90
	internal static $_TypeDescriptor$_extraBytes_65 ??_R0?AV?$_Func_base@PE$AAVObject@System@@PEAVPatcherManager@@@std@@@8;

	// Token: 0x04000090 RID: 144 RVA: 0x00232DB0 File Offset: 0x002307B0
	internal static _s__RTTIClassHierarchyDescriptor ??_R3?$ObjectModule@VPatcherNativeObject@@@@8;

	// Token: 0x04000091 RID: 145 RVA: 0x0025BD48 File Offset: 0x00258D48
	internal static $_TypeDescriptor$_extraBytes_44 ??_R0?AV?$ObjectModule@VPatcherNativeObject@@@@@8;

	// Token: 0x04000092 RID: 146 RVA: 0x00232D30 File Offset: 0x00230730
	internal static _s__RTTIClassHierarchyDescriptor ??_R3PatcherNativeObject@@8;

	// Token: 0x04000093 RID: 147 RVA: 0x0025BD18 File Offset: 0x00258D18
	internal static $_TypeDescriptor$_extraBytes_26 ??_R0?AVPatcherNativeObject@@@8;

	// Token: 0x04000094 RID: 148
	[FixedAddressValueType]
	internal static $ArrayType$$$BY06Q6AXXZ ??_7?$_Func_impl_no_alloc@P6MPE$AAVInstallResult@@PEAVPatcherManager@@@ZPE$AAVObject@System@@PEAV2@@std@@6B@;

	// Token: 0x04000095 RID: 149 RVA: 0x001ABF48 File Offset: 0x001A9948
	internal static method ??_7?$_Func_impl_no_alloc@P6MPE$AAVInstallResult@@PEAVPatcherManager@@@ZPE$AAVObject@System@@PEAV2@@std@@6B@$initializer$;

	// Token: 0x04000096 RID: 150 RVA: 0x00233098 File Offset: 0x00230A98
	internal static _s__RTTICompleteObjectLocator2 ??_R4?$_Func_impl_no_alloc@P6MPE$AAVInstallResult@@PEAVPatcherManager@@@ZPE$AAVObject@System@@PEAV2@@std@@6B@;

	// Token: 0x04000097 RID: 151
	[FixedAddressValueType]
	internal static $ArrayType$$$BY06Q6AXXZ ??_7?$_Func_impl_no_alloc@P6MPE$AAVFullCheckResult@@PEAVPatcherManager@@@ZPE$AAVObject@System@@PEAV2@@std@@6B@;

	// Token: 0x04000098 RID: 152 RVA: 0x001ABF40 File Offset: 0x001A9940
	internal static method ??_7?$_Func_impl_no_alloc@P6MPE$AAVFullCheckResult@@PEAVPatcherManager@@@ZPE$AAVObject@System@@PEAV2@@std@@6B@$initializer$;

	// Token: 0x04000099 RID: 153 RVA: 0x00233018 File Offset: 0x00230A18
	internal static _s__RTTICompleteObjectLocator2 ??_R4?$_Func_impl_no_alloc@P6MPE$AAVFullCheckResult@@PEAVPatcherManager@@@ZPE$AAVObject@System@@PEAV2@@std@@6B@;

	// Token: 0x0400009A RID: 154
	[FixedAddressValueType]
	internal static $ArrayType$$$BY06Q6AXXZ ??_7?$_Func_impl_no_alloc@P6MPE$AAVSimpleCheckResult@@PEAVPatcherManager@@@ZPE$AAVObject@System@@PEAV2@@std@@6B@;

	// Token: 0x0400009B RID: 155 RVA: 0x001ABF38 File Offset: 0x001A9938
	internal static method ??_7?$_Func_impl_no_alloc@P6MPE$AAVSimpleCheckResult@@PEAVPatcherManager@@@ZPE$AAVObject@System@@PEAV2@@std@@6B@$initializer$;

	// Token: 0x0400009C RID: 156 RVA: 0x00232F98 File Offset: 0x00230998
	internal static _s__RTTICompleteObjectLocator2 ??_R4?$_Func_impl_no_alloc@P6MPE$AAVSimpleCheckResult@@PEAVPatcherManager@@@ZPE$AAVObject@System@@PEAV2@@std@@6B@;

	// Token: 0x0400009D RID: 157
	[FixedAddressValueType]
	internal static $ArrayType$$$BY06Q6AXXZ ??_7?$_Func_impl_no_alloc@P6MPE$AAVUpdateResult@@PEAVPatcherManager@@@ZPE$AAVObject@System@@PEAV2@@std@@6B@;

	// Token: 0x0400009E RID: 158 RVA: 0x001ABF30 File Offset: 0x001A9930
	internal static method ??_7?$_Func_impl_no_alloc@P6MPE$AAVUpdateResult@@PEAVPatcherManager@@@ZPE$AAVObject@System@@PEAV2@@std@@6B@$initializer$;

	// Token: 0x0400009F RID: 159 RVA: 0x00232F18 File Offset: 0x00230918
	internal static _s__RTTICompleteObjectLocator2 ??_R4?$_Func_impl_no_alloc@P6MPE$AAVUpdateResult@@PEAVPatcherManager@@@ZPE$AAVObject@System@@PEAV2@@std@@6B@;

	// Token: 0x040000A0 RID: 160
	[FixedAddressValueType]
	internal static $ArrayType$$$BY06Q6AXXZ ??_7?$_Func_impl_no_alloc@P6MPE$AAVCheckUpdateResult@@PEAVPatcherManager@@@ZPE$AAVObject@System@@PEAV2@@std@@6B@;

	// Token: 0x040000A1 RID: 161 RVA: 0x001ABF28 File Offset: 0x001A9928
	internal static method ??_7?$_Func_impl_no_alloc@P6MPE$AAVCheckUpdateResult@@PEAVPatcherManager@@@ZPE$AAVObject@System@@PEAV2@@std@@6B@$initializer$;

	// Token: 0x040000A2 RID: 162 RVA: 0x00232E98 File Offset: 0x00230898
	internal static _s__RTTICompleteObjectLocator2 ??_R4?$_Func_impl_no_alloc@P6MPE$AAVCheckUpdateResult@@PEAVPatcherManager@@@ZPE$AAVObject@System@@PEAV2@@std@@6B@;

	// Token: 0x040000A3 RID: 163 RVA: 0x00232DC8 File Offset: 0x002307C8
	internal static _s__RTTICompleteObjectLocator2 ??_R4?$ObjectModule@VPatcherNativeObject@@@@6B@;

	// Token: 0x040000A4 RID: 164 RVA: 0x00232D48 File Offset: 0x00230748
	internal static _s__RTTICompleteObjectLocator2 ??_R4PatcherNativeObject@@6B@;

	// Token: 0x040000A5 RID: 165 RVA: 0x0025BCD0 File Offset: 0x00258CD0
	internal static $_TypeDescriptor$_extraBytes_52 ??_R0P6MPE$AAVCheckUpdateResult@@PEAVPatcherManager@@@Z@8;

	// Token: 0x040000A6 RID: 166 RVA: 0x0025BC88 File Offset: 0x00258C88
	internal static $_TypeDescriptor$_extraBytes_47 ??_R0P6MPE$AAVUpdateResult@@PEAVPatcherManager@@@Z@8;

	// Token: 0x040000A7 RID: 167 RVA: 0x0025BC40 File Offset: 0x00258C40
	internal static $_TypeDescriptor$_extraBytes_52 ??_R0P6MPE$AAVSimpleCheckResult@@PEAVPatcherManager@@@Z@8;

	// Token: 0x040000A8 RID: 168 RVA: 0x0025BBF0 File Offset: 0x00258BF0
	internal static $_TypeDescriptor$_extraBytes_50 ??_R0P6MPE$AAVFullCheckResult@@PEAVPatcherManager@@@Z@8;

	// Token: 0x040000A9 RID: 169 RVA: 0x0025BBB0 File Offset: 0x00258BB0
	internal static $_TypeDescriptor$_extraBytes_48 ??_R0P6MPE$AAVInstallResult@@PEAVPatcherManager@@@Z@8;

	// Token: 0x040000AA RID: 170 RVA: 0x00251168 File Offset: 0x0024E168
	internal static $ArrayType$$$BY01Q6AXXZ ??_7PatcherNativeObject@@6B@;

	// Token: 0x040000AB RID: 171 RVA: 0x0025CBF0 File Offset: 0x00000000
	internal static ObjectModule<PatcherNativeObject> ?s_instance@?1??GetInstance@?$ObjectModule@VPatcherNativeObject@@@@SAAEAV2@XZ@4V2@A;

	// Token: 0x040000AC RID: 172 RVA: 0x0025CBE0 File Offset: 0x00000000
	internal static int ?$TSS0@?1??GetInstance@?$ObjectModule@VPatcherNativeObject@@@@SAAEAV2@XZ@4HA;

	// Token: 0x040000AD RID: 173 RVA: 0x00251178 File Offset: 0x0024E178
	internal static $ArrayType$$$BY01Q6AXXZ ??_7?$ObjectModule@VPatcherNativeObject@@@@6B@;

	// Token: 0x040000AE RID: 174 RVA: 0x001AC7A8 File Offset: 0x001AA1A8
	internal static $ArrayType$$$BY0L@$$CB_W ??_C@_1BG@JLHGJLOE@?$AAu?$AAp?$AAd?$AAa?$AAt?$AAe?$AA_?$AAu?$AAr?$AAl@;

	// Token: 0x040000AF RID: 175 RVA: 0x00251320 File Offset: 0x0024E320
	public static method __m2mep@??_E?$ObjectModule@VPatcherNativeObject@@@@$$FEEAAPEAXI@Z;

	// Token: 0x040000B0 RID: 176 RVA: 0x00251310 File Offset: 0x0024E310
	public static method __m2mep@??_EPatcherNativeObject@@$$FMEAAPEAXI@Z;

	// Token: 0x040000B1 RID: 177 RVA: 0x00251220 File Offset: 0x0024E220
	public static method __m2mep@?_Delete_this@?$_Func_impl_no_alloc@P6MPE$AAVInstallResult@@PEAVPatcherManager@@@ZPE$AAVObject@System@@PEAV2@@std@@$$FEEAAX_N@Z;

	// Token: 0x040000B2 RID: 178 RVA: 0x002511D0 File Offset: 0x0024E1D0
	public static method __m2mep@?_Get@?$_Func_impl_no_alloc@P6MPE$AAVInstallResult@@PEAVPatcherManager@@@ZPE$AAVObject@System@@PEAV2@@std@@$$FEEBAPEBXXZ;

	// Token: 0x040000B3 RID: 179 RVA: 0x00251180 File Offset: 0x0024E180
	public static method __m2mep@?_Target_type@?$_Func_impl_no_alloc@P6MPE$AAVInstallResult@@PEAVPatcherManager@@@ZPE$AAVObject@System@@PEAV2@@std@@$$FEEBAAEBVtype_info@@XZ;

	// Token: 0x040000B4 RID: 180 RVA: 0x00251230 File Offset: 0x0024E230
	public static method __m2mep@?_Move@?$_Func_impl_no_alloc@P6MPE$AAVInstallResult@@PEAVPatcherManager@@@ZPE$AAVObject@System@@PEAV2@@std@@$$FEEAAPEAV?$_Func_base@PE$AAVObject@System@@PEAVPatcherManager@@@2@PEAX@Z;

	// Token: 0x040000B5 RID: 181 RVA: 0x002512C0 File Offset: 0x0024E2C0
	public static method __m2mep@?_Copy@?$_Func_impl_no_alloc@P6MPE$AAVInstallResult@@PEAVPatcherManager@@@ZPE$AAVObject@System@@PEAV2@@std@@$$FEEBAPEAV?$_Func_base@PE$AAVObject@System@@PEAVPatcherManager@@@2@PEAX@Z;

	// Token: 0x040000B6 RID: 182 RVA: 0x00251240 File Offset: 0x0024E240
	public static method __m2mep@?_Delete_this@?$_Func_impl_no_alloc@P6MPE$AAVFullCheckResult@@PEAVPatcherManager@@@ZPE$AAVObject@System@@PEAV2@@std@@$$FEEAAX_N@Z;

	// Token: 0x040000B7 RID: 183 RVA: 0x002511E0 File Offset: 0x0024E1E0
	public static method __m2mep@?_Get@?$_Func_impl_no_alloc@P6MPE$AAVFullCheckResult@@PEAVPatcherManager@@@ZPE$AAVObject@System@@PEAV2@@std@@$$FEEBAPEBXXZ;

	// Token: 0x040000B8 RID: 184 RVA: 0x00251190 File Offset: 0x0024E190
	public static method __m2mep@?_Target_type@?$_Func_impl_no_alloc@P6MPE$AAVFullCheckResult@@PEAVPatcherManager@@@ZPE$AAVObject@System@@PEAV2@@std@@$$FEEBAAEBVtype_info@@XZ;

	// Token: 0x040000B9 RID: 185 RVA: 0x00251250 File Offset: 0x0024E250
	public static method __m2mep@?_Move@?$_Func_impl_no_alloc@P6MPE$AAVFullCheckResult@@PEAVPatcherManager@@@ZPE$AAVObject@System@@PEAV2@@std@@$$FEEAAPEAV?$_Func_base@PE$AAVObject@System@@PEAVPatcherManager@@@2@PEAX@Z;

	// Token: 0x040000BA RID: 186 RVA: 0x002512D0 File Offset: 0x0024E2D0
	public static method __m2mep@?_Copy@?$_Func_impl_no_alloc@P6MPE$AAVFullCheckResult@@PEAVPatcherManager@@@ZPE$AAVObject@System@@PEAV2@@std@@$$FEEBAPEAV?$_Func_base@PE$AAVObject@System@@PEAVPatcherManager@@@2@PEAX@Z;

	// Token: 0x040000BB RID: 187 RVA: 0x00251260 File Offset: 0x0024E260
	public static method __m2mep@?_Delete_this@?$_Func_impl_no_alloc@P6MPE$AAVSimpleCheckResult@@PEAVPatcherManager@@@ZPE$AAVObject@System@@PEAV2@@std@@$$FEEAAX_N@Z;

	// Token: 0x040000BC RID: 188 RVA: 0x002511F0 File Offset: 0x0024E1F0
	public static method __m2mep@?_Get@?$_Func_impl_no_alloc@P6MPE$AAVSimpleCheckResult@@PEAVPatcherManager@@@ZPE$AAVObject@System@@PEAV2@@std@@$$FEEBAPEBXXZ;

	// Token: 0x040000BD RID: 189 RVA: 0x002511A0 File Offset: 0x0024E1A0
	public static method __m2mep@?_Target_type@?$_Func_impl_no_alloc@P6MPE$AAVSimpleCheckResult@@PEAVPatcherManager@@@ZPE$AAVObject@System@@PEAV2@@std@@$$FEEBAAEBVtype_info@@XZ;

	// Token: 0x040000BE RID: 190 RVA: 0x00251270 File Offset: 0x0024E270
	public static method __m2mep@?_Move@?$_Func_impl_no_alloc@P6MPE$AAVSimpleCheckResult@@PEAVPatcherManager@@@ZPE$AAVObject@System@@PEAV2@@std@@$$FEEAAPEAV?$_Func_base@PE$AAVObject@System@@PEAVPatcherManager@@@2@PEAX@Z;

	// Token: 0x040000BF RID: 191 RVA: 0x002512E0 File Offset: 0x0024E2E0
	public static method __m2mep@?_Copy@?$_Func_impl_no_alloc@P6MPE$AAVSimpleCheckResult@@PEAVPatcherManager@@@ZPE$AAVObject@System@@PEAV2@@std@@$$FEEBAPEAV?$_Func_base@PE$AAVObject@System@@PEAVPatcherManager@@@2@PEAX@Z;

	// Token: 0x040000C0 RID: 192 RVA: 0x00251280 File Offset: 0x0024E280
	public static method __m2mep@?_Delete_this@?$_Func_impl_no_alloc@P6MPE$AAVUpdateResult@@PEAVPatcherManager@@@ZPE$AAVObject@System@@PEAV2@@std@@$$FEEAAX_N@Z;

	// Token: 0x040000C1 RID: 193 RVA: 0x00251200 File Offset: 0x0024E200
	public static method __m2mep@?_Get@?$_Func_impl_no_alloc@P6MPE$AAVUpdateResult@@PEAVPatcherManager@@@ZPE$AAVObject@System@@PEAV2@@std@@$$FEEBAPEBXXZ;

	// Token: 0x040000C2 RID: 194 RVA: 0x002511B0 File Offset: 0x0024E1B0
	public static method __m2mep@?_Target_type@?$_Func_impl_no_alloc@P6MPE$AAVUpdateResult@@PEAVPatcherManager@@@ZPE$AAVObject@System@@PEAV2@@std@@$$FEEBAAEBVtype_info@@XZ;

	// Token: 0x040000C3 RID: 195 RVA: 0x00251290 File Offset: 0x0024E290
	public static method __m2mep@?_Move@?$_Func_impl_no_alloc@P6MPE$AAVUpdateResult@@PEAVPatcherManager@@@ZPE$AAVObject@System@@PEAV2@@std@@$$FEEAAPEAV?$_Func_base@PE$AAVObject@System@@PEAVPatcherManager@@@2@PEAX@Z;

	// Token: 0x040000C4 RID: 196 RVA: 0x002512F0 File Offset: 0x0024E2F0
	public static method __m2mep@?_Copy@?$_Func_impl_no_alloc@P6MPE$AAVUpdateResult@@PEAVPatcherManager@@@ZPE$AAVObject@System@@PEAV2@@std@@$$FEEBAPEAV?$_Func_base@PE$AAVObject@System@@PEAVPatcherManager@@@2@PEAX@Z;

	// Token: 0x040000C5 RID: 197 RVA: 0x002512A0 File Offset: 0x0024E2A0
	public static method __m2mep@?_Delete_this@?$_Func_impl_no_alloc@P6MPE$AAVCheckUpdateResult@@PEAVPatcherManager@@@ZPE$AAVObject@System@@PEAV2@@std@@$$FEEAAX_N@Z;

	// Token: 0x040000C6 RID: 198 RVA: 0x00251210 File Offset: 0x0024E210
	public static method __m2mep@?_Get@?$_Func_impl_no_alloc@P6MPE$AAVCheckUpdateResult@@PEAVPatcherManager@@@ZPE$AAVObject@System@@PEAV2@@std@@$$FEEBAPEBXXZ;

	// Token: 0x040000C7 RID: 199 RVA: 0x002511C0 File Offset: 0x0024E1C0
	public static method __m2mep@?_Target_type@?$_Func_impl_no_alloc@P6MPE$AAVCheckUpdateResult@@PEAVPatcherManager@@@ZPE$AAVObject@System@@PEAV2@@std@@$$FEEBAAEBVtype_info@@XZ;

	// Token: 0x040000C8 RID: 200 RVA: 0x002512B0 File Offset: 0x0024E2B0
	public static method __m2mep@?_Move@?$_Func_impl_no_alloc@P6MPE$AAVCheckUpdateResult@@PEAVPatcherManager@@@ZPE$AAVObject@System@@PEAV2@@std@@$$FEEAAPEAV?$_Func_base@PE$AAVObject@System@@PEAVPatcherManager@@@2@PEAX@Z;

	// Token: 0x040000C9 RID: 201 RVA: 0x00251300 File Offset: 0x0024E300
	public static method __m2mep@?_Copy@?$_Func_impl_no_alloc@P6MPE$AAVCheckUpdateResult@@PEAVPatcherManager@@@ZPE$AAVObject@System@@PEAV2@@std@@$$FEEBAPEAV?$_Func_base@PE$AAVObject@System@@PEAVPatcherManager@@@2@PEAX@Z;

	// Token: 0x040000CA RID: 202 RVA: 0x001AC890 File Offset: 0x001AA290
	public unsafe static int** __unep@?_Target_type@?$_Func_impl_no_alloc@P6MPE$AAVInstallResult@@PEAVPatcherManager@@@ZPE$AAVObject@System@@PEAV2@@std@@$$FEEBAAEBVtype_info@@XZ;

	// Token: 0x040000CB RID: 203 RVA: 0x001AC868 File Offset: 0x001AA268
	public unsafe static int** __unep@?_Target_type@?$_Func_impl_no_alloc@P6MPE$AAVFullCheckResult@@PEAVPatcherManager@@@ZPE$AAVObject@System@@PEAV2@@std@@$$FEEBAAEBVtype_info@@XZ;

	// Token: 0x040000CC RID: 204 RVA: 0x001AC840 File Offset: 0x001AA240
	public unsafe static int** __unep@?_Target_type@?$_Func_impl_no_alloc@P6MPE$AAVSimpleCheckResult@@PEAVPatcherManager@@@ZPE$AAVObject@System@@PEAV2@@std@@$$FEEBAAEBVtype_info@@XZ;

	// Token: 0x040000CD RID: 205 RVA: 0x001AC818 File Offset: 0x001AA218
	public unsafe static int** __unep@?_Target_type@?$_Func_impl_no_alloc@P6MPE$AAVUpdateResult@@PEAVPatcherManager@@@ZPE$AAVObject@System@@PEAV2@@std@@$$FEEBAAEBVtype_info@@XZ;

	// Token: 0x040000CE RID: 206 RVA: 0x001AC7F0 File Offset: 0x001AA1F0
	public unsafe static int** __unep@?_Target_type@?$_Func_impl_no_alloc@P6MPE$AAVCheckUpdateResult@@PEAVPatcherManager@@@ZPE$AAVObject@System@@PEAV2@@std@@$$FEEBAAEBVtype_info@@XZ;

	// Token: 0x040000CF RID: 207 RVA: 0x001AC8A0 File Offset: 0x001AA2A0
	public unsafe static int** __unep@?_Get@?$_Func_impl_no_alloc@P6MPE$AAVInstallResult@@PEAVPatcherManager@@@ZPE$AAVObject@System@@PEAV2@@std@@$$FEEBAPEBXXZ;

	// Token: 0x040000D0 RID: 208 RVA: 0x001AC878 File Offset: 0x001AA278
	public unsafe static int** __unep@?_Get@?$_Func_impl_no_alloc@P6MPE$AAVFullCheckResult@@PEAVPatcherManager@@@ZPE$AAVObject@System@@PEAV2@@std@@$$FEEBAPEBXXZ;

	// Token: 0x040000D1 RID: 209 RVA: 0x001AC850 File Offset: 0x001AA250
	public unsafe static int** __unep@?_Get@?$_Func_impl_no_alloc@P6MPE$AAVSimpleCheckResult@@PEAVPatcherManager@@@ZPE$AAVObject@System@@PEAV2@@std@@$$FEEBAPEBXXZ;

	// Token: 0x040000D2 RID: 210 RVA: 0x001AC828 File Offset: 0x001AA228
	public unsafe static int** __unep@?_Get@?$_Func_impl_no_alloc@P6MPE$AAVUpdateResult@@PEAVPatcherManager@@@ZPE$AAVObject@System@@PEAV2@@std@@$$FEEBAPEBXXZ;

	// Token: 0x040000D3 RID: 211 RVA: 0x001AC800 File Offset: 0x001AA200
	public unsafe static int** __unep@?_Get@?$_Func_impl_no_alloc@P6MPE$AAVCheckUpdateResult@@PEAVPatcherManager@@@ZPE$AAVObject@System@@PEAV2@@std@@$$FEEBAPEBXXZ;

	// Token: 0x040000D4 RID: 212 RVA: 0x001AC898 File Offset: 0x001AA298
	public unsafe static int** __unep@?_Delete_this@?$_Func_impl_no_alloc@P6MPE$AAVInstallResult@@PEAVPatcherManager@@@ZPE$AAVObject@System@@PEAV2@@std@@$$FEEAAX_N@Z;

	// Token: 0x040000D5 RID: 213 RVA: 0x001AC888 File Offset: 0x001AA288
	public unsafe static int** __unep@?_Move@?$_Func_impl_no_alloc@P6MPE$AAVInstallResult@@PEAVPatcherManager@@@ZPE$AAVObject@System@@PEAV2@@std@@$$FEEAAPEAV?$_Func_base@PE$AAVObject@System@@PEAVPatcherManager@@@2@PEAX@Z;

	// Token: 0x040000D6 RID: 214 RVA: 0x001AC870 File Offset: 0x001AA270
	public unsafe static int** __unep@?_Delete_this@?$_Func_impl_no_alloc@P6MPE$AAVFullCheckResult@@PEAVPatcherManager@@@ZPE$AAVObject@System@@PEAV2@@std@@$$FEEAAX_N@Z;

	// Token: 0x040000D7 RID: 215 RVA: 0x001AC860 File Offset: 0x001AA260
	public unsafe static int** __unep@?_Move@?$_Func_impl_no_alloc@P6MPE$AAVFullCheckResult@@PEAVPatcherManager@@@ZPE$AAVObject@System@@PEAV2@@std@@$$FEEAAPEAV?$_Func_base@PE$AAVObject@System@@PEAVPatcherManager@@@2@PEAX@Z;

	// Token: 0x040000D8 RID: 216 RVA: 0x001AC848 File Offset: 0x001AA248
	public unsafe static int** __unep@?_Delete_this@?$_Func_impl_no_alloc@P6MPE$AAVSimpleCheckResult@@PEAVPatcherManager@@@ZPE$AAVObject@System@@PEAV2@@std@@$$FEEAAX_N@Z;

	// Token: 0x040000D9 RID: 217 RVA: 0x001AC838 File Offset: 0x001AA238
	public unsafe static int** __unep@?_Move@?$_Func_impl_no_alloc@P6MPE$AAVSimpleCheckResult@@PEAVPatcherManager@@@ZPE$AAVObject@System@@PEAV2@@std@@$$FEEAAPEAV?$_Func_base@PE$AAVObject@System@@PEAVPatcherManager@@@2@PEAX@Z;

	// Token: 0x040000DA RID: 218 RVA: 0x001AC820 File Offset: 0x001AA220
	public unsafe static int** __unep@?_Delete_this@?$_Func_impl_no_alloc@P6MPE$AAVUpdateResult@@PEAVPatcherManager@@@ZPE$AAVObject@System@@PEAV2@@std@@$$FEEAAX_N@Z;

	// Token: 0x040000DB RID: 219 RVA: 0x001AC810 File Offset: 0x001AA210
	public unsafe static int** __unep@?_Move@?$_Func_impl_no_alloc@P6MPE$AAVUpdateResult@@PEAVPatcherManager@@@ZPE$AAVObject@System@@PEAV2@@std@@$$FEEAAPEAV?$_Func_base@PE$AAVObject@System@@PEAVPatcherManager@@@2@PEAX@Z;

	// Token: 0x040000DC RID: 220 RVA: 0x001AC7F8 File Offset: 0x001AA1F8
	public unsafe static int** __unep@?_Delete_this@?$_Func_impl_no_alloc@P6MPE$AAVCheckUpdateResult@@PEAVPatcherManager@@@ZPE$AAVObject@System@@PEAV2@@std@@$$FEEAAX_N@Z;

	// Token: 0x040000DD RID: 221 RVA: 0x001AC7E8 File Offset: 0x001AA1E8
	public unsafe static int** __unep@?_Move@?$_Func_impl_no_alloc@P6MPE$AAVCheckUpdateResult@@PEAVPatcherManager@@@ZPE$AAVObject@System@@PEAV2@@std@@$$FEEAAPEAV?$_Func_base@PE$AAVObject@System@@PEAVPatcherManager@@@2@PEAX@Z;

	// Token: 0x040000DE RID: 222 RVA: 0x001AC880 File Offset: 0x001AA280
	public unsafe static int** __unep@?_Copy@?$_Func_impl_no_alloc@P6MPE$AAVInstallResult@@PEAVPatcherManager@@@ZPE$AAVObject@System@@PEAV2@@std@@$$FEEBAPEAV?$_Func_base@PE$AAVObject@System@@PEAVPatcherManager@@@2@PEAX@Z;

	// Token: 0x040000DF RID: 223 RVA: 0x001AC858 File Offset: 0x001AA258
	public unsafe static int** __unep@?_Copy@?$_Func_impl_no_alloc@P6MPE$AAVFullCheckResult@@PEAVPatcherManager@@@ZPE$AAVObject@System@@PEAV2@@std@@$$FEEBAPEAV?$_Func_base@PE$AAVObject@System@@PEAVPatcherManager@@@2@PEAX@Z;

	// Token: 0x040000E0 RID: 224 RVA: 0x001AC830 File Offset: 0x001AA230
	public unsafe static int** __unep@?_Copy@?$_Func_impl_no_alloc@P6MPE$AAVSimpleCheckResult@@PEAVPatcherManager@@@ZPE$AAVObject@System@@PEAV2@@std@@$$FEEBAPEAV?$_Func_base@PE$AAVObject@System@@PEAVPatcherManager@@@2@PEAX@Z;

	// Token: 0x040000E1 RID: 225 RVA: 0x001AC808 File Offset: 0x001AA208
	public unsafe static int** __unep@?_Copy@?$_Func_impl_no_alloc@P6MPE$AAVUpdateResult@@PEAVPatcherManager@@@ZPE$AAVObject@System@@PEAV2@@std@@$$FEEBAPEAV?$_Func_base@PE$AAVObject@System@@PEAVPatcherManager@@@2@PEAX@Z;

	// Token: 0x040000E2 RID: 226 RVA: 0x001AC7E0 File Offset: 0x001AA1E0
	public unsafe static int** __unep@?_Copy@?$_Func_impl_no_alloc@P6MPE$AAVCheckUpdateResult@@PEAVPatcherManager@@@ZPE$AAVObject@System@@PEAV2@@std@@$$FEEBAPEAV?$_Func_base@PE$AAVObject@System@@PEAVPatcherManager@@@2@PEAX@Z;

	// Token: 0x040000E3 RID: 227 RVA: 0x001AC8A8 File Offset: 0x001AA2A8
	internal static $ArrayType$$$BY02$$CB_W ??_C@_15ODFHNFBK@?$AA6?$AA4@;

	// Token: 0x040000E4 RID: 228 RVA: 0x001AC8B0 File Offset: 0x001AA2B0
	internal static $ArrayType$$$BY0L@$$CB_W ??_C@_1BG@LGFFKPND@?$AAK?$AAE?$AAY?$AA_?$AAB?$AAI?$AAN?$AAA?$AAR?$AAY@;

	// Token: 0x040000E5 RID: 229 RVA: 0x00233BE8 File Offset: 0x002315E8
	internal static _s__RTTICompleteObjectLocator2 ??_R4?$_Ref_count_obj@VIniParser@@@std@@6B@;

	// Token: 0x040000E6 RID: 230 RVA: 0x00233438 File Offset: 0x00230E38
	internal static _s__RTTIBaseClassDescriptor ??_R1A@?0A@EA@_Ref_count_base@std@@8;

	// Token: 0x040000E7 RID: 231 RVA: 0x00251338 File Offset: 0x0024E338
	internal static $ArrayType$$$BY04Q6AXXZ ??_7?$_Ref_count_obj@VIniParser@@@std@@6B@;

	// Token: 0x040000E8 RID: 232 RVA: 0x0025C5A0 File Offset: 0x002595A0
	internal static $_TypeDescriptor$_extraBytes_40 ??_R0?AV?$_Ref_count_obj@VIniParser@@@std@@@8;

	// Token: 0x040000E9 RID: 233 RVA: 0x00234028 File Offset: 0x00231A28
	internal static $_s__RTTIBaseClassArray$_extraBytes_16 ??_R2?$_Ref_count_obj@VIniParser@@@std@@8;

	// Token: 0x040000EA RID: 234 RVA: 0x00234040 File Offset: 0x00231A40
	internal static _s__RTTIClassHierarchyDescriptor ??_R3?$_Ref_count_obj@VIniParser@@@std@@8;

	// Token: 0x040000EB RID: 235 RVA: 0x0025C0E8 File Offset: 0x002590E8
	internal static $_TypeDescriptor$_extraBytes_26 ??_R0?AV_Ref_count_base@std@@@8;

	// Token: 0x040000EC RID: 236 RVA: 0x00233420 File Offset: 0x00230E20
	internal static _s__RTTIClassHierarchyDescriptor ??_R3_Ref_count_base@std@@8;

	// Token: 0x040000ED RID: 237 RVA: 0x002341F8 File Offset: 0x00231BF8
	internal static _s__RTTIBaseClassDescriptor ??_R1A@?0A@EA@?$_Ref_count_obj@VIniParser@@@std@@8;

	// Token: 0x040000EE RID: 238 RVA: 0x00233410 File Offset: 0x00230E10
	internal static $_s__RTTIBaseClassArray$_extraBytes_8 ??_R2_Ref_count_base@std@@8;

	// Token: 0x040000EF RID: 239 RVA: 0x00251378 File Offset: 0x0024E378
	public static method __m2mep@??_E?$_Ref_count_obj@VIniParser@@@std@@$$FUEAAPEAXI@Z;

	// Token: 0x040000F0 RID: 240 RVA: 0x00251368 File Offset: 0x0024E368
	public static method __m2mep@?mfModuleInit@@$$J0YA_NPEBD_KU?$gcroot@PE$AAVAddWebBrowserCreateCallbackFn@App@LauncherView@@@@_N@Z;

	// Token: 0x040000F1 RID: 241 RVA: 0x00251358 File Offset: 0x0024E358
	public static method __m2mep@?mfModuleClear@@$$J0YAXXZ;

	// Token: 0x040000F2 RID: 242 RVA: 0x0025CC58 File Offset: 0x00000000
	internal static int __@@_PchSym_@00@UxPdliphkzxvUxorvmgRozfmxsviUozfmxsviUlyqvxgnlwfovhUkzgxsvilyqvxgCUcGEUivovzhvUhgwzucOlyq@4B2008FD98C1DD4;

	// Token: 0x040000F3 RID: 243 RVA: 0x001AC980 File Offset: 0x001AA380
	internal static __s_GUID _GUID_cb2f6723_ab3a_11d2_9c40_00c04fa30a3e;

	// Token: 0x040000F4 RID: 244 RVA: 0x001AC970 File Offset: 0x001AA370
	internal static __s_GUID _GUID_cb2f6722_ab3a_11d2_9c40_00c04fa30a3e;

	// Token: 0x040000F5 RID: 245
	[FixedAddressValueType]
	internal static int ?Uninitialized@CurrentDomain@<CrtImplementationDetails>@@$$Q2HA;

	// Token: 0x040000F6 RID: 246 RVA: 0x001ABED0 File Offset: 0x001A98D0
	internal static method ?Uninitialized$initializer$@CurrentDomain@<CrtImplementationDetails>@@$$Q2P6MXXZEA;

	// Token: 0x040000F7 RID: 247
	[FixedAddressValueType]
	internal static Progress ?InitializedNative@CurrentDomain@<CrtImplementationDetails>@@$$Q2W4Progress@2@A;

	// Token: 0x040000F8 RID: 248 RVA: 0x001ABEE8 File Offset: 0x001A98E8
	internal static method ?InitializedNative$initializer$@CurrentDomain@<CrtImplementationDetails>@@$$Q2P6MXXZEA;

	// Token: 0x040000F9 RID: 249 RVA: 0x001AC990 File Offset: 0x001AA390
	internal static __s_GUID _GUID_90f1a06c_7712_4762_86b5_7a5eba6bdb02;

	// Token: 0x040000FA RID: 250 RVA: 0x001AC9A0 File Offset: 0x001AA3A0
	internal static __s_GUID _GUID_90f1a06e_7712_4762_86b5_7a5eba6bdb02;

	// Token: 0x040000FB RID: 251
	[FixedAddressValueType]
	internal static Progress ?InitializedPerAppDomain@CurrentDomain@<CrtImplementationDetails>@@$$Q2W4Progress@2@A;

	// Token: 0x040000FC RID: 252 RVA: 0x0025D258 File Offset: 0x00000000
	internal static bool ?Entered@DefaultDomain@<CrtImplementationDetails>@@2_NA;

	// Token: 0x040000FD RID: 253 RVA: 0x002513C4 File Offset: 0x0024E3C4
	internal static TriBool ?hasNative@DefaultDomain@<CrtImplementationDetails>@@0W4TriBool@2@A;

	// Token: 0x040000FE RID: 254 RVA: 0x0025D25B File Offset: 0x00000000
	internal static bool ?InitializedPerProcess@DefaultDomain@<CrtImplementationDetails>@@2_NA;

	// Token: 0x040000FF RID: 255 RVA: 0x0025D25C File Offset: 0x00000000
	internal static int ?Count@AllDomains@<CrtImplementationDetails>@@2HA;

	// Token: 0x04000100 RID: 256
	[FixedAddressValueType]
	internal static int ?Initialized@CurrentDomain@<CrtImplementationDetails>@@$$Q2HA;

	// Token: 0x04000101 RID: 257 RVA: 0x0025D25A File Offset: 0x00000000
	internal static bool ?InitializedNativeFromCCTOR@DefaultDomain@<CrtImplementationDetails>@@2_NA;

	// Token: 0x04000102 RID: 258
	[FixedAddressValueType]
	internal static bool ?IsDefaultDomain@CurrentDomain@<CrtImplementationDetails>@@$$Q2_NA;

	// Token: 0x04000103 RID: 259
	[FixedAddressValueType]
	internal static Progress ?InitializedVtables@CurrentDomain@<CrtImplementationDetails>@@$$Q2W4Progress@2@A;

	// Token: 0x04000104 RID: 260 RVA: 0x0025D259 File Offset: 0x00000000
	internal static bool ?InitializedNative@DefaultDomain@<CrtImplementationDetails>@@2_NA;

	// Token: 0x04000105 RID: 261
	[FixedAddressValueType]
	internal static Progress ?InitializedPerProcess@CurrentDomain@<CrtImplementationDetails>@@$$Q2W4Progress@2@A;

	// Token: 0x04000106 RID: 262 RVA: 0x002513C0 File Offset: 0x0024E3C0
	internal static TriBool ?hasPerProcess@DefaultDomain@<CrtImplementationDetails>@@0W4TriBool@2@A;

	// Token: 0x04000107 RID: 263 RVA: 0x001ABF18 File Offset: 0x001A9918
	internal static $ArrayType$$$BY00Q6MPEBXXZ __xc_mp_z;

	// Token: 0x04000108 RID: 264 RVA: 0x001ABF50 File Offset: 0x001A9950
	internal static $ArrayType$$$BY00Q6MPEBXXZ __xi_vt_z;

	// Token: 0x04000109 RID: 265 RVA: 0x001ABEF0 File Offset: 0x001A98F0
	internal static method ?InitializedPerProcess$initializer$@CurrentDomain@<CrtImplementationDetails>@@$$Q2P6MXXZEA;

	// Token: 0x0400010A RID: 266 RVA: 0x001ABEC0 File Offset: 0x001A98C0
	internal static $ArrayType$$$BY00Q6MPEBXXZ __xc_ma_a;

	// Token: 0x0400010B RID: 267 RVA: 0x001ABF00 File Offset: 0x001A9900
	internal static $ArrayType$$$BY00Q6MPEBXXZ __xc_ma_z;

	// Token: 0x0400010C RID: 268 RVA: 0x001ABEF8 File Offset: 0x001A98F8
	internal static method ?InitializedPerAppDomain$initializer$@CurrentDomain@<CrtImplementationDetails>@@$$Q2P6MXXZEA;

	// Token: 0x0400010D RID: 269 RVA: 0x001ABF20 File Offset: 0x001A9920
	internal static $ArrayType$$$BY00Q6MPEBXXZ __xi_vt_a;

	// Token: 0x0400010E RID: 270 RVA: 0x001ABEC8 File Offset: 0x001A98C8
	internal static method ?Initialized$initializer$@CurrentDomain@<CrtImplementationDetails>@@$$Q2P6MXXZEA;

	// Token: 0x0400010F RID: 271 RVA: 0x001ABF08 File Offset: 0x001A9908
	internal static $ArrayType$$$BY00Q6MPEBXXZ __xc_mp_a;

	// Token: 0x04000110 RID: 272 RVA: 0x001ABEE0 File Offset: 0x001A98E0
	internal static method ?InitializedVtables$initializer$@CurrentDomain@<CrtImplementationDetails>@@$$Q2P6MXXZEA;

	// Token: 0x04000111 RID: 273 RVA: 0x001ABED8 File Offset: 0x001A98D8
	internal static method ?IsDefaultDomain$initializer$@CurrentDomain@<CrtImplementationDetails>@@$$Q2P6MXXZEA;

	// Token: 0x04000112 RID: 274 RVA: 0x002513C8 File Offset: 0x0024E3C8
	public static method __m2mep@?DoNothing@DefaultDomain@<CrtImplementationDetails>@@$$FCAJPEAX@Z;

	// Token: 0x04000113 RID: 275 RVA: 0x002513D8 File Offset: 0x0024E3D8
	public static method __m2mep@?_UninitializeDefaultDomain@LanguageSupport@<CrtImplementationDetails>@@$$FCAJPEAX@Z;

	// Token: 0x04000114 RID: 276 RVA: 0x001AC9B0 File Offset: 0x001AA3B0
	public unsafe static int** __unep@?DoNothing@DefaultDomain@<CrtImplementationDetails>@@$$FCAJPEAX@Z;

	// Token: 0x04000115 RID: 277 RVA: 0x001AC9B8 File Offset: 0x001AA3B8
	public unsafe static int** __unep@?_UninitializeDefaultDomain@LanguageSupport@<CrtImplementationDetails>@@$$FCAJPEAX@Z;

	// Token: 0x04000116 RID: 278 RVA: 0x0025D394 File Offset: 0x00000000
	internal static _Fac_tidy_reg_t _Fac_tidy_reg;

	// Token: 0x04000117 RID: 279 RVA: 0x001ABF10 File Offset: 0x001A9910
	internal static method _Fac_tidy_reg$initializer$;

	// Token: 0x04000118 RID: 280 RVA: 0x0025D388 File Offset: 0x00000000
	internal unsafe static _Fac_node* _Fac_head;

	// Token: 0x04000119 RID: 281 RVA: 0x0025D3F0 File Offset: 0x00000000
	internal unsafe static method* __onexitbegin_m;

	// Token: 0x0400011A RID: 282 RVA: 0x0025D3E8 File Offset: 0x00000000
	internal static ulong __exit_list_size;

	// Token: 0x0400011B RID: 283
	[FixedAddressValueType]
	internal unsafe static method* __onexitend_app_domain;

	// Token: 0x0400011C RID: 284
	[FixedAddressValueType]
	internal unsafe static void* ?_lock@AtExitLock@<CrtImplementationDetails>@@$$Q0PEAXEA;

	// Token: 0x0400011D RID: 285
	[FixedAddressValueType]
	internal static int ?_ref_count@AtExitLock@<CrtImplementationDetails>@@$$Q0HA;

	// Token: 0x0400011E RID: 286 RVA: 0x0025D3F8 File Offset: 0x00000000
	internal unsafe static method* __onexitend_m;

	// Token: 0x0400011F RID: 287
	[FixedAddressValueType]
	internal static ulong __exit_list_size_app_domain;

	// Token: 0x04000120 RID: 288
	[FixedAddressValueType]
	internal unsafe static method* __onexitbegin_app_domain;

	// Token: 0x04000121 RID: 289 RVA: 0x001AC8F8 File Offset: 0x001AA2F8
	internal static $ArrayType$$$BY01Q6AXXZ ??_7type_info@@6B@;

	// Token: 0x04000122 RID: 290 RVA: 0x001AB7A0 File Offset: 0x001A91A0
	internal unsafe static locale.id* __imp_?id@?$ctype@_W@std@@2V0locale@2@A;

	// Token: 0x04000123 RID: 291 RVA: 0x001ABE88 File Offset: 0x001A9888
	internal static $ArrayType$$$BY0A@P6AHXZ __xi_z;

	// Token: 0x04000124 RID: 292 RVA: 0x0025CC78 File Offset: 0x00000000
	internal static __scrt_native_startup_state __scrt_current_native_startup_state;

	// Token: 0x04000125 RID: 293 RVA: 0x0025CC80 File Offset: 0x00000000
	internal unsafe static void* __scrt_native_startup_lock;

	// Token: 0x04000126 RID: 294 RVA: 0x001ABE48 File Offset: 0x001A9848
	internal static $ArrayType$$$BY0A@P6AXXZ __xc_a;

	// Token: 0x04000127 RID: 295 RVA: 0x001ABE78 File Offset: 0x001A9878
	internal static $ArrayType$$$BY0A@P6AHXZ __xi_a;

	// Token: 0x04000128 RID: 296 RVA: 0x00251390 File Offset: 0x0024E390
	internal static uint __scrt_native_dllmain_reason;

	// Token: 0x04000129 RID: 297 RVA: 0x001ABE70 File Offset: 0x001A9870
	internal static $ArrayType$$$BY0A@P6AXXZ __xc_z;

	// Token: 0x0400012A RID: 298 RVA: 0x00259B90 File Offset: 0x00256B90
	internal static int _Init_global_epoch;
}

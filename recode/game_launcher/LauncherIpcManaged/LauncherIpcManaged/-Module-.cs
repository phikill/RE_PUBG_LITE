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
using ipc;
using ipc.mutex;
using msclr.interop.details;
using std;
using std.?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@$$FQEAAAEAV12@_KD@Z.__l2;

// Token: 0x02000001 RID: 1
internal class <Module>
{
	// Token: 0x06000001 RID: 1 RVA: 0x00001110 File Offset: 0x00000510
	internal unsafe static void* __delDtor(locker* A_0, uint A_0)
	{
		<Module>.ipc.mutex.locker.{dtor}(A_0);
		if ((A_0 & 1U) != 0U)
		{
			<Module>.delete(A_0, 40UL);
		}
		return A_0;
	}

	// Token: 0x06000002 RID: 2 RVA: 0x00001458 File Offset: 0x00000858
	internal unsafe static allocator<char>* {ctor}(allocator<char>* A_0)
	{
		return A_0;
	}

	// Token: 0x06000003 RID: 3 RVA: 0x000018D8 File Offset: 0x00000CD8
	internal unsafe static _Compressed_pair<std::allocator<char>,std::_String_val<std::_Simple_types<char>\u0020>,1>* {ctor}<>(_Compressed_pair<std::allocator<char>,std::_String_val<std::_Simple_types<char>\u0020>,1>* A_0, _Zero_then_variadic_args_t A_0)
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

	// Token: 0x06000004 RID: 4 RVA: 0x00001A70 File Offset: 0x00000E70
	internal unsafe static _String_alloc<std::_String_base_types<char,std::allocator<char>\u0020>\u0020>* {ctor}(_String_alloc<std::_String_base_types<char,std::allocator<char>\u0020>\u0020>* A_0)
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

	// Token: 0x06000005 RID: 5 RVA: 0x00001C40 File Offset: 0x00001040
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

	// Token: 0x06000006 RID: 6 RVA: 0x00001214 File Offset: 0x00000614
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

	// Token: 0x06000007 RID: 7 RVA: 0x0000162C File Offset: 0x00000A2C
	internal unsafe static ulong size(basic_string<char,std::char_traits<char>,std::allocator<char>\u0020>* A_0)
	{
		return *(A_0 + 16L);
	}

	// Token: 0x06000008 RID: 8 RVA: 0x000015E4 File Offset: 0x000009E4
	internal unsafe static void _Eos(basic_string<char,std::char_traits<char>,std::allocator<char>\u0020>* A_0, ulong _Newsize)
	{
		*(A_0 + 16L) = _Newsize;
		sbyte* ptr = A_0;
		if (((16L <= *(A_0 + 24L)) ? 1 : 0) != 0)
		{
			ptr = *A_0;
		}
		*(byte*)(ptr + _Newsize / sizeof(sbyte)) = 0;
	}

	// Token: 0x06000009 RID: 9 RVA: 0x00001440 File Offset: 0x00000840
	internal unsafe static void _Xlen()
	{
		<Module>.std._Xlength_error((sbyte*)(&<Module>.??_C@_0BA@JFNIOLAK@string?5too?5long@));
	}

	// Token: 0x0600000A RID: 10 RVA: 0x00001388 File Offset: 0x00000788
	internal unsafe static ulong max_size(allocator<char>* A_0)
	{
		return -1L;
	}

	// Token: 0x0600000B RID: 11 RVA: 0x00001368 File Offset: 0x00000768
	internal unsafe static allocator<char>* _Get_first(_Compressed_pair<std::allocator<char>,std::_String_val<std::_Simple_types<char>\u0020>,1>* A_0)
	{
		return A_0;
	}

	// Token: 0x0600000C RID: 12 RVA: 0x00001590 File Offset: 0x00000990
	internal unsafe static allocator<char>* _Getal(_String_alloc<std::_String_base_types<char,std::allocator<char>\u0020>\u0020>* A_0)
	{
		return A_0;
	}

	// Token: 0x0600000D RID: 13 RVA: 0x000013A0 File Offset: 0x000007A0
	internal unsafe static ulong* _Min_value<unsigned\u0020__int64>(ulong* _Left, ulong* _Right)
	{
		return (*_Right < *_Left) ? _Right : _Left;
	}

	// Token: 0x0600000E RID: 14 RVA: 0x00001134 File Offset: 0x00000534
	internal static long max()
	{
		return long.MaxValue;
	}

	// Token: 0x0600000F RID: 15 RVA: 0x00001614 File Offset: 0x00000A14
	internal unsafe static ulong max_size(basic_string<char,std::char_traits<char>,std::allocator<char>\u0020>* A_0)
	{
		return long.MaxValue;
	}

	// Token: 0x06000010 RID: 16 RVA: 0x00001348 File Offset: 0x00000748
	internal unsafe static _String_val<std::_Simple_types<char>\u0020>* _Get_second(_Compressed_pair<std::allocator<char>,std::_String_val<std::_Simple_types<char>\u0020>,1>* A_0)
	{
		return A_0;
	}

	// Token: 0x06000011 RID: 17 RVA: 0x00001570 File Offset: 0x00000970
	internal unsafe static _String_val<std::_Simple_types<char>\u0020>* _Get_data(_String_alloc<std::_String_base_types<char,std::allocator<char>\u0020>\u0020>* A_0)
	{
		return A_0;
	}

	// Token: 0x06000012 RID: 18 RVA: 0x00001304 File Offset: 0x00000704
	internal unsafe static ulong* _Max_value<unsigned\u0020__int64>(ulong* _Left, ulong* _Right)
	{
		return (*_Left < *_Right) ? _Right : _Left;
	}

	// Token: 0x06000013 RID: 19 RVA: 0x00001724 File Offset: 0x00000B24
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

	// Token: 0x06000014 RID: 20 RVA: 0x00001498 File Offset: 0x00000898
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

	// Token: 0x06000015 RID: 21 RVA: 0x000011B0 File Offset: 0x000005B0
	internal unsafe static void* _Allocate(ulong _Bytes)
	{
		return <Module>.@new(_Bytes);
	}

	// Token: 0x06000016 RID: 22 RVA: 0x000016AC File Offset: 0x00000AAC
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

	// Token: 0x06000017 RID: 23 RVA: 0x000011A0 File Offset: 0x000005A0
	internal static ulong _Get_size_of_n<1>(ulong _Count)
	{
		return _Count;
	}

	// Token: 0x06000018 RID: 24 RVA: 0x0000185C File Offset: 0x00000C5C
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

	// Token: 0x06000019 RID: 25 RVA: 0x0000114C File Offset: 0x0000054C
	internal unsafe static sbyte* copy(sbyte* _First1, sbyte* _First2, ulong _Count)
	{
		cpblk(_First1, _First2, _Count);
		return _First1;
	}

	// Token: 0x0600001A RID: 26 RVA: 0x00001164 File Offset: 0x00000564
	internal unsafe static sbyte* assign(sbyte* _First, ulong _Count, sbyte _Ch)
	{
		initblk(_First, _Ch, _Count);
		return _First;
	}

	// Token: 0x0600001B RID: 27 RVA: 0x0000131C File Offset: 0x0000071C
	internal unsafe static void ()(<lambda_59d344839e59d86dc9255728ed6d9dcb>* A_0, sbyte* _New_ptr, sbyte* _Old_ptr, ulong _Old_size, ulong _Count, sbyte _Ch)
	{
		cpblk(_New_ptr, _Old_ptr, _Old_size);
		long num = _New_ptr + _Old_size;
		initblk(num, _Ch, _Count);
		*(num + _Count) = 0;
	}

	// Token: 0x0600001C RID: 28 RVA: 0x00001090 File Offset: 0x00000490
	internal unsafe static void* @new(ulong _Size, void* _Where)
	{
		return _Where;
	}

	// Token: 0x0600001D RID: 29 RVA: 0x00001488 File Offset: 0x00000888
	internal unsafe static sbyte** forward<char\u0020*\u0020const\u0020&>(sbyte** _Arg)
	{
		return _Arg;
	}

	// Token: 0x0600001E RID: 30 RVA: 0x00001698 File Offset: 0x00000A98
	internal unsafe static void construct<char\u0020*,char\u0020*\u0020const\u0020&>(allocator<char>* __unnamed000, sbyte** _Ptr, sbyte** <_Args_0>)
	{
		*_Ptr = *<_Args_0>;
	}

	// Token: 0x0600001F RID: 31 RVA: 0x00001924 File Offset: 0x00000D24
	internal unsafe static basic_string<char,std::char_traits<char>,std::allocator<char>\u0020>* _Reallocate_grow_by<class\u0020<lambda_59d344839e59d86dc9255728ed6d9dcb>,unsigned\u0020__int64,char>(basic_string<char,std::char_traits<char>,std::allocator<char>\u0020>* A_0, ulong _Size_increase, <lambda_59d344839e59d86dc9255728ed6d9dcb> _Fn, ulong <_Args_0>, sbyte <_Args_1>)
	{
		ulong num = *(A_0 + 16L);
		if (<Module>.std.basic_string<char,std::char_traits<char>,std::allocator<char>\u0020>.max_size(A_0) - num < _Size_increase)
		{
			<Module>.std.basic_string<char,std::char_traits<char>,std::allocator<char>\u0020>._Xlen();
		}
		ulong num2 = num + _Size_increase;
		ulong num3 = *(A_0 + 24L);
		ulong num4 = <Module>.std.basic_string<char,std::char_traits<char>,std::allocator<char>\u0020>._Calculate_growth(A_0, num2);
		ulong num5 = num4 + 1L;
		void* ptr;
		if (num5 >= 4096L)
		{
			ptr = <Module>.std._Allocate_manually_vector_aligned<struct\u0020std::_Default_allocate_traits>(num5);
		}
		else if (num5 != null)
		{
			ptr = <Module>.@new(num5);
		}
		else
		{
			ptr = null;
		}
		*(A_0 + 16L) = num2;
		*(A_0 + 24L) = num4;
		if (16L <= num3)
		{
			sbyte* ptr2 = *A_0;
			cpblk(ptr, ptr2, num);
			long num6 = (byte*)ptr + num;
			initblk(num6, <_Args_1>, <_Args_0>);
			*(num6 + (long)<_Args_0>) = 0;
			ulong num7 = num3 + 1L;
			void* ptr3 = ptr2;
			if (num7 >= 4096UL)
			{
				<Module>.std._Adjust_manually_vector_aligned(ref ptr3, ref num7);
			}
			<Module>.delete(ptr3, num7);
			*A_0 = ptr;
		}
		else
		{
			cpblk(ptr, A_0, num);
			long num6 = (byte*)ptr + num;
			initblk(num6, <_Args_1>, <_Args_0>);
			*(num6 + (long)<_Args_0>) = 0;
			*A_0 = ptr;
		}
		return A_0;
	}

	// Token: 0x06000020 RID: 32 RVA: 0x00001ABC File Offset: 0x00000EBC
	internal unsafe static basic_string<char,std::char_traits<char>,std::allocator<char>\u0020>* append(basic_string<char,std::char_traits<char>,std::allocator<char>\u0020>* A_0, ulong _Count, sbyte _Ch)
	{
		ulong num = *(A_0 + 16L);
		ulong num2 = (ulong)(*(A_0 + 24L));
		if (_Count <= num2 - num)
		{
			*(A_0 + 16L) = num + _Count;
			sbyte* ptr = A_0;
			if (((16UL <= num2) ? 1 : 0) != 0)
			{
				ptr = *A_0;
			}
			long num3 = ptr + num / sizeof(sbyte);
			initblk(num3, _Ch, _Count);
			*(num3 + _Count) = 0;
			return A_0;
		}
		<lambda_59d344839e59d86dc9255728ed6d9dcb> <lambda_59d344839e59d86dc9255728ed6d9dcb>;
		initblk(ref <lambda_59d344839e59d86dc9255728ed6d9dcb>, 0, 1L);
		return <Module>.std.basic_string<char,std::char_traits<char>,std::allocator<char>\u0020>._Reallocate_grow_by<class\u0020<lambda_59d344839e59d86dc9255728ed6d9dcb>,unsigned\u0020__int64,char>(A_0, _Count, <lambda_59d344839e59d86dc9255728ed6d9dcb>, _Count, _Ch);
	}

	// Token: 0x06000021 RID: 33 RVA: 0x00001B44 File Offset: 0x00000F44
	internal unsafe static void resize(basic_string<char,std::char_traits<char>,std::allocator<char>\u0020>* A_0, ulong _Newsize, sbyte _Ch)
	{
		ulong num = *(A_0 + 16L);
		if (_Newsize <= num)
		{
			<Module>.std.basic_string<char,std::char_traits<char>,std::allocator<char>\u0020>._Eos(A_0, _Newsize);
		}
		else
		{
			<Module>.std.basic_string<char,std::char_traits<char>,std::allocator<char>\u0020>.append(A_0, _Newsize - num, _Ch);
		}
	}

	// Token: 0x06000022 RID: 34 RVA: 0x000013B8 File Offset: 0x000007B8
	internal unsafe static sbyte* _Unfancy<char>(sbyte* _Ptr)
	{
		return _Ptr;
	}

	// Token: 0x06000023 RID: 35 RVA: 0x00001548 File Offset: 0x00000948
	internal unsafe static sbyte* _Myptr(_String_val<std::_Simple_types<char>\u0020>* A_0)
	{
		sbyte* ptr = A_0;
		if (((16L <= *(A_0 + 24L)) ? 1 : 0) != 0)
		{
			ptr = *A_0;
		}
		return ptr;
	}

	// Token: 0x06000024 RID: 36 RVA: 0x000017CC File Offset: 0x00000BCC
	internal unsafe static sbyte* [](basic_string<char,std::char_traits<char>,std::allocator<char>\u0020>* A_0, ulong _Off)
	{
		sbyte* ptr = A_0;
		if (((16L <= *(A_0 + 24L)) ? 1 : 0) != 0)
		{
			ptr = *A_0;
		}
		return ptr + _Off / sizeof(sbyte);
	}

	// Token: 0x06000025 RID: 37 RVA: 0x000011F8 File Offset: 0x000005F8
	internal static ref char PtrToStringChars(string s)
	{
		ref byte ptr = s;
		if ((ref ptr) != null)
		{
			ptr = (ulong)RuntimeHelpers.OffsetToStringData + (ref ptr);
		}
		return ref ptr;
	}

	// Token: 0x06000026 RID: 38 RVA: 0x00001268 File Offset: 0x00000668
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

	// Token: 0x06000027 RID: 39 RVA: 0x00001468 File Offset: 0x00000868
	internal unsafe static _String_val<std::_Simple_types<char>\u0020>._Bxty* {ctor}(_String_val<std::_Simple_types<char>\u0020>._Bxty* A_0)
	{
		return A_0;
	}

	// Token: 0x06000028 RID: 40 RVA: 0x000016D8 File Offset: 0x00000AD8
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

	// Token: 0x06000029 RID: 41 RVA: 0x0000176C File Offset: 0x00000B6C
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

	// Token: 0x0600002A RID: 42 RVA: 0x00001478 File Offset: 0x00000878
	internal unsafe static allocator<char>* forward<class\u0020std::allocator<char>\u0020>(allocator<char>* _Arg)
	{
		return _Arg;
	}

	// Token: 0x0600002B RID: 43 RVA: 0x0000188C File Offset: 0x00000C8C
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

	// Token: 0x0600002C RID: 44 RVA: 0x000013C8 File Offset: 0x000007C8
	internal unsafe static allocator<char>* move<class\u0020std::allocator<char>\u0020&>(allocator<char>* _Arg)
	{
		return _Arg;
	}

	// Token: 0x0600002D RID: 45 RVA: 0x00001408 File Offset: 0x00000808
	internal unsafe static _String_val<std::_Simple_types<char>\u0020>* addressof<class\u0020std::_String_val<struct\u0020std::_Simple_types<char>\u0020>\u0020>(_String_val<std::_Simple_types<char>\u0020>* _Val)
	{
		return _Val;
	}

	// Token: 0x0600002E RID: 46 RVA: 0x000015C0 File Offset: 0x000009C0
	internal unsafe static void _Tidy_init(basic_string<char,std::char_traits<char>,std::allocator<char>\u0020>* A_0)
	{
		*(A_0 + 16L) = 0L;
		*(A_0 + 24L) = 15L;
		*A_0 = 0;
	}

	// Token: 0x0600002F RID: 47 RVA: 0x00001640 File Offset: 0x00000A40
	internal unsafe static void _Assign_rv_contents_with_alloc_always_equal(basic_string<char,std::char_traits<char>,std::allocator<char>\u0020>* A_0, basic_string<char,std::char_traits<char>,std::allocator<char>\u0020>* _Right, integral_constant<bool,1> __unnamed001)
	{
		cpblk(A_0, _Right, 32);
		*(_Right + 16L) = 0L;
		*(_Right + 24L) = 15L;
		*_Right = 0;
	}

	// Token: 0x06000030 RID: 48 RVA: 0x000013D8 File Offset: 0x000007D8
	internal unsafe static basic_string<char,std::char_traits<char>,std::allocator<char>\u0020>* move<class\u0020std::basic_string<char,struct\u0020std::char_traits<char>,class\u0020std::allocator<char>\u0020>\u0020&>(basic_string<char,std::char_traits<char>,std::allocator<char>\u0020>* _Arg)
	{
		return _Arg;
	}

	// Token: 0x06000031 RID: 49 RVA: 0x00001BB0 File Offset: 0x00000FB0
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
			cpblk(A_0, _Right, 32);
			*(_Right + 16L) = 0L;
			*(_Right + 24L) = 15L;
			*_Right = 0;
		}
		catch
		{
			<Module>.___CxxCallUnwindDtor(ldftn(std._String_alloc<std::_String_base_types<char,std::allocator<char>\u0020>\u0020>.{dtor}), A_0);
			throw;
		}
		return A_0;
	}

	// Token: 0x06000032 RID: 50 RVA: 0x000012D4 File Offset: 0x000006D4
	internal unsafe static void {dtor}(_String_val<std::_Simple_types<char>\u0020>._Bxty* A_0)
	{
	}

	// Token: 0x06000033 RID: 51 RVA: 0x00001538 File Offset: 0x00000938
	internal unsafe static void {dtor}(_String_val<std::_Simple_types<char>\u0020>* A_0)
	{
	}

	// Token: 0x06000034 RID: 52 RVA: 0x000017F4 File Offset: 0x00000BF4
	internal unsafe static void {dtor}(_Compressed_pair<std::allocator<char>,std::_String_val<std::_Simple_types<char>\u0020>,1>* A_0)
	{
	}

	// Token: 0x06000035 RID: 53 RVA: 0x00001A60 File Offset: 0x00000E60
	internal unsafe static void {dtor}(_String_alloc<std::_String_base_types<char,std::allocator<char>\u0020>\u0020>* A_0)
	{
	}

	// Token: 0x06000036 RID: 54 RVA: 0x00001190 File Offset: 0x00000590
	internal unsafe static void _Orphan_all(_Container_base0* A_0)
	{
	}

	// Token: 0x06000037 RID: 55 RVA: 0x000015B0 File Offset: 0x000009B0
	internal unsafe static void _Orphan_all(_String_alloc<std::_String_base_types<char,std::allocator<char>\u0020>\u0020>* A_0)
	{
	}

	// Token: 0x06000038 RID: 56 RVA: 0x00001358 File Offset: 0x00000758
	internal unsafe static _String_val<std::_Simple_types<char>\u0020>* _Get_second(_Compressed_pair<std::allocator<char>,std::_String_val<std::_Simple_types<char>\u0020>,1>* A_0)
	{
		return A_0;
	}

	// Token: 0x06000039 RID: 57 RVA: 0x00001580 File Offset: 0x00000980
	internal unsafe static _String_val<std::_Simple_types<char>\u0020>* _Get_data(_String_alloc<std::_String_base_types<char,std::allocator<char>\u0020>\u0020>* A_0)
	{
		return A_0;
	}

	// Token: 0x0600003A RID: 58 RVA: 0x000012E4 File Offset: 0x000006E4
	[return: MarshalAs(UnmanagedType.U1)]
	internal unsafe static bool _Large_string_engaged(_String_val<std::_Simple_types<char>\u0020>* A_0)
	{
		return (16L <= *(A_0 + 24L)) ? 1 : 0;
	}

	// Token: 0x0600003B RID: 59 RVA: 0x00001378 File Offset: 0x00000778
	internal unsafe static allocator<char>* _Get_first(_Compressed_pair<std::allocator<char>,std::_String_val<std::_Simple_types<char>\u0020>,1>* A_0)
	{
		return A_0;
	}

	// Token: 0x0600003C RID: 60 RVA: 0x000015A0 File Offset: 0x000009A0
	internal unsafe static allocator<char>* _Getal(_String_alloc<std::_String_base_types<char,std::allocator<char>\u0020>\u0020>* A_0)
	{
		return A_0;
	}

	// Token: 0x0600003D RID: 61 RVA: 0x000013F8 File Offset: 0x000007F8
	internal unsafe static void destroy<char\u0020*>(allocator<char>* __unnamed000, sbyte** _Ptr)
	{
	}

	// Token: 0x0600003E RID: 62 RVA: 0x000013E8 File Offset: 0x000007E8
	internal unsafe static sbyte** addressof<char\u0020*>(sbyte** _Val)
	{
		return _Val;
	}

	// Token: 0x0600003F RID: 63 RVA: 0x000011C4 File Offset: 0x000005C4
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

	// Token: 0x06000040 RID: 64 RVA: 0x00001418 File Offset: 0x00000818
	internal unsafe static void _Deallocate<16,0>(void* _Ptr, ulong _Bytes)
	{
		if (_Bytes >= 4096UL)
		{
			<Module>.std._Adjust_manually_vector_aligned(ref _Ptr, ref _Bytes);
		}
		<Module>.delete(_Ptr, _Bytes);
	}

	// Token: 0x06000041 RID: 65 RVA: 0x0000166C File Offset: 0x00000A6C
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

	// Token: 0x06000042 RID: 66 RVA: 0x0000117C File Offset: 0x0000057C
	internal unsafe static void assign(sbyte* _Left, sbyte* _Right)
	{
		*_Left = (byte)(*_Right);
	}

	// Token: 0x06000043 RID: 67 RVA: 0x00001804 File Offset: 0x00000C04
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

	// Token: 0x06000044 RID: 68 RVA: 0x00001B70 File Offset: 0x00000F70
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

	// Token: 0x06000045 RID: 69 RVA: 0x00001CC4 File Offset: 0x000010C4
	internal unsafe static basic_string<char,std::char_traits<char>,std::allocator<char>\u0020>* marshal_as<class\u0020std::basic_string<char,struct\u0020std::char_traits<char>,class\u0020std::allocator<char>\u0020>,class\u0020System::String\u0020^>(basic_string<char,std::char_traits<char>,std::allocator<char>\u0020>* A_0, string* _from_obj)
	{
		try
		{
			uint num = 0U;
			if (*_from_obj == null)
			{
				throw new ArgumentNullException("NULLPTR is not supported for this conversion.");
			}
			<Module>.std.basic_string<char,std::char_traits<char>,std::allocator<char>\u0020>.{ctor}(A_0);
			num = 1U;
			ulong num2 = <Module>.msclr.interop.details.GetAnsiStringSize(*_from_obj);
			if (num2 > 1UL)
			{
				ulong num3 = num2 - 1UL;
				ulong num4 = *(long*)(A_0 + 16L / (long)sizeof(basic_string<char,std::char_traits<char>,std::allocator<char>\u0020>));
				if (num3 <= num4)
				{
					<Module>.std.basic_string<char,std::char_traits<char>,std::allocator<char>\u0020>._Eos(A_0, num3);
				}
				else
				{
					<Module>.std.basic_string<char,std::char_traits<char>,std::allocator<char>\u0020>.append(A_0, num3 - num4, 0);
				}
				sbyte* ptr = (sbyte*)A_0;
				if (((16L <= *(long*)(A_0 + 24L / (long)sizeof(basic_string<char,std::char_traits<char>,std::allocator<char>\u0020>))) ? 1 : 0) != 0)
				{
					ptr = *(long*)A_0;
				}
				<Module>.msclr.interop.details.WriteAnsiString(ptr, num2, *_from_obj);
			}
		}
		catch
		{
			uint num;
			if ((num & 1U) != 0U)
			{
				num &= 4294967294U;
				<Module>.___CxxCallUnwindDtor(ldftn(std.basic_string<char,std::char_traits<char>,std::allocator<char>\u0020>.{dtor}), (void*)A_0);
			}
			throw;
		}
		return A_0;
	}

	// Token: 0x06000046 RID: 70 RVA: 0x00001ED4 File Offset: 0x000012D4
	internal unsafe static void* __delDtor(scoped_shm_writer* A_0, uint A_0)
	{
		<Module>.ipc.scoped_shm_writer.{dtor}(A_0);
		if ((A_0 & 1U) != 0U)
		{
			<Module>.delete(A_0, 8UL);
		}
		return A_0;
	}

	// Token: 0x06000047 RID: 71 RVA: 0x00002084 File Offset: 0x00001484
	internal unsafe static exception* {ctor}(exception* A_0, exception* _Other)
	{
		*A_0 = ref <Module>.??_7exception@std@@6B@;
		exception* ptr = A_0 + 8L;
		initblk(ptr, 0, 16L);
		<Module>.__std_exception_copy(_Other / sizeof(__std_exception_data) + 8L, ptr);
		return A_0;
	}

	// Token: 0x06000048 RID: 72 RVA: 0x000020B0 File Offset: 0x000014B0
	internal unsafe static void {dtor}(exception* A_0)
	{
		*A_0 = ref <Module>.??_7exception@std@@6B@;
		<Module>.__std_exception_destroy(A_0 / sizeof(__std_exception_data) + 8L);
	}

	// Token: 0x06000049 RID: 73 RVA: 0x00002A3C File Offset: 0x00001E3C
	internal unsafe static sbyte* what(exception* A_0)
	{
		ulong num = (ulong)(*(A_0 + 8L));
		return num != 0UL ? num : ref <Module>.??_C@_0BC@EOODALEL@Unknown?5exception@;
	}

	// Token: 0x0600004A RID: 74 RVA: 0x000029DC File Offset: 0x00001DDC
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

	// Token: 0x0600004B RID: 75 RVA: 0x000020D0 File Offset: 0x000014D0
	internal unsafe static void {dtor}(exception_ptr* A_0)
	{
		<Module>.__ExceptionPtrDestroy(A_0);
	}

	// Token: 0x0600004C RID: 76 RVA: 0x000020E4 File Offset: 0x000014E4
	internal unsafe static exception_ptr* {ctor}(exception_ptr* A_0, exception_ptr* _Rhs)
	{
		<Module>.__ExceptionPtrCopy(A_0, _Rhs);
		return A_0;
	}

	// Token: 0x0600004D RID: 77 RVA: 0x00002124 File Offset: 0x00001524
	internal unsafe static _Container_base12* {ctor}(_Container_base12* A_0, _Container_base12* A_0)
	{
		*A_0 = 0L;
		return A_0;
	}

	// Token: 0x0600004E RID: 78 RVA: 0x0000271C File Offset: 0x00001B1C
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

	// Token: 0x0600004F RID: 79 RVA: 0x000024C8 File Offset: 0x000018C8
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

	// Token: 0x06000050 RID: 80 RVA: 0x00002138 File Offset: 0x00001538
	internal unsafe static void _Adopt(_Iterator_base12* A_0, _Container_base12* _Parent)
	{
		if (_Parent != null)
		{
			*A_0 = *(long*)_Parent;
		}
	}

	// Token: 0x06000051 RID: 81 RVA: 0x00002A5C File Offset: 0x00001E5C
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

	// Token: 0x06000052 RID: 82 RVA: 0x0000214C File Offset: 0x0000154C
	internal unsafe static void {dtor}(runtime_error* A_0)
	{
		*A_0 = ref <Module>.??_7exception@std@@6B@;
		<Module>.__std_exception_destroy(A_0 / sizeof(__std_exception_data) + 8L);
	}

	// Token: 0x06000053 RID: 83 RVA: 0x00002B1C File Offset: 0x00001F1C
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

	// Token: 0x06000054 RID: 84 RVA: 0x00002B7C File Offset: 0x00001F7C
	internal unsafe static void {dtor}(bad_cast* A_0)
	{
		*A_0 = ref <Module>.??_7exception@std@@6B@;
		<Module>.__std_exception_destroy(A_0 / sizeof(__std_exception_data) + 8L);
	}

	// Token: 0x06000055 RID: 85 RVA: 0x0000216C File Offset: 0x0000156C
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

	// Token: 0x06000056 RID: 86 RVA: 0x000021CC File Offset: 0x000015CC
	internal unsafe static locale* {ctor}(locale* A_0, locale* _Right)
	{
		long num = *(_Right + 8L);
		*(A_0 + 8L) = num;
		long num2 = num;
		calli(System.Void modopt(System.Runtime.CompilerServices.CallConvCdecl)(System.IntPtr), (IntPtr)num2, *(*num2 + 8L));
		return A_0;
	}

	// Token: 0x06000057 RID: 87 RVA: 0x00002ABC File Offset: 0x00001EBC
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

	// Token: 0x06000058 RID: 88 RVA: 0x000021F4 File Offset: 0x000015F4
	internal unsafe static void {dtor}(_System_error* A_0)
	{
		*A_0 = ref <Module>.??_7exception@std@@6B@;
		<Module>.__std_exception_destroy(A_0 / sizeof(__std_exception_data) + 8L);
	}

	// Token: 0x06000059 RID: 89 RVA: 0x00002B9C File Offset: 0x00001F9C
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

	// Token: 0x0600005A RID: 90 RVA: 0x00002214 File Offset: 0x00001614
	internal unsafe static void {dtor}(system_error* A_0)
	{
		*A_0 = ref <Module>.??_7exception@std@@6B@;
		<Module>.__std_exception_destroy(A_0 / sizeof(__std_exception_data) + 8L);
	}

	// Token: 0x0600005B RID: 91 RVA: 0x00002BFC File Offset: 0x00001FFC
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

	// Token: 0x0600005C RID: 92 RVA: 0x00002C5C File Offset: 0x0000205C
	internal unsafe static void {dtor}(ios_base.failure* A_0)
	{
		*A_0 = ref <Module>.??_7exception@std@@6B@;
		<Module>.__std_exception_destroy(A_0 / sizeof(__std_exception_data) + 8L);
	}

	// Token: 0x0600005D RID: 93 RVA: 0x00002748 File Offset: 0x00001B48
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

	// Token: 0x0600005E RID: 94 RVA: 0x000024EC File Offset: 0x000018EC
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

	// Token: 0x0600005F RID: 95 RVA: 0x00002234 File Offset: 0x00001634
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

	// Token: 0x06000060 RID: 96 RVA: 0x000022D0 File Offset: 0x000016D0
	internal unsafe static tuple<>* {ctor}(tuple<>* A_0, tuple<>* A_0)
	{
		return A_0;
	}

	// Token: 0x06000061 RID: 97 RVA: 0x00002408 File Offset: 0x00001808
	internal unsafe static sbyte* release(char_buffer<char>* A_0)
	{
		sbyte* ptr = *A_0;
		*A_0 = 0L;
		return ptr;
	}

	// Token: 0x06000062 RID: 98 RVA: 0x0000241C File Offset: 0x0000181C
	internal unsafe static sbyte* get(char_buffer<char>* A_0)
	{
		return *A_0;
	}

	// Token: 0x06000063 RID: 99 RVA: 0x0000242C File Offset: 0x0000182C
	internal unsafe static void {dtor}(char_buffer<char>* A_0)
	{
		<Module>.delete[](*A_0);
	}

	// Token: 0x06000064 RID: 100 RVA: 0x00002440 File Offset: 0x00001840
	internal unsafe static char_buffer<char>* {ctor}(char_buffer<char>* A_0, ulong _size)
	{
		*A_0 = <Module>.new[](_size);
		return A_0;
	}

	// Token: 0x06000065 RID: 101 RVA: 0x000028AC File Offset: 0x00001CAC
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

	// Token: 0x06000066 RID: 102 RVA: 0x000026F4 File Offset: 0x00001AF4
	internal unsafe static sbyte* _Myptr(_String_val<std::_Simple_types<char>\u0020>* A_0)
	{
		sbyte* ptr = A_0;
		if (((16L <= *(A_0 + 24L)) ? 1 : 0) != 0)
		{
			ptr = *A_0;
		}
		return ptr;
	}

	// Token: 0x06000067 RID: 103 RVA: 0x00002458 File Offset: 0x00001858
	internal unsafe static allocator<char>* select_on_container_copy_construction(allocator<char>* A_0, allocator<char>* _Al)
	{
		return A_0;
	}

	// Token: 0x06000068 RID: 104 RVA: 0x000027F8 File Offset: 0x00001BF8
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

	// Token: 0x06000069 RID: 105 RVA: 0x00002468 File Offset: 0x00001868
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

	// Token: 0x0600006A RID: 106 RVA: 0x00002C7C File Offset: 0x0000207C
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

	// Token: 0x0600006B RID: 107 RVA: 0x00002D44 File Offset: 0x00002144
	internal unsafe static char_buffer<wchar_t>* {ctor}(char_buffer<wchar_t>* A_0, ulong _size)
	{
		ulong num;
		if (_size <= 9223372036854775807UL)
		{
			num = _size * 2UL;
		}
		else
		{
			num = ulong.MaxValue;
		}
		*A_0 = <Module>.new[](num);
		return A_0;
	}

	// Token: 0x0600006C RID: 108 RVA: 0x00002D30 File Offset: 0x00002130
	internal unsafe static void {dtor}(char_buffer<wchar_t>* A_0)
	{
		<Module>.delete[](*A_0);
	}

	// Token: 0x0600006D RID: 109 RVA: 0x00002CC4 File Offset: 0x000020C4
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

	// Token: 0x0600006E RID: 110 RVA: 0x00002D20 File Offset: 0x00002120
	internal unsafe static char* get(char_buffer<wchar_t>* A_0)
	{
		return *A_0;
	}

	// Token: 0x0600006F RID: 111 RVA: 0x00002D78 File Offset: 0x00002178
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

	// Token: 0x06000070 RID: 112 RVA: 0x00002E50 File Offset: 0x00002250
	internal unsafe static ulong length(basic_string<char,std::char_traits<char>,std::allocator<char>\u0020>* A_0)
	{
		return *(A_0 + 16L);
	}

	// Token: 0x06000071 RID: 113 RVA: 0x00002E64 File Offset: 0x00002264
	internal unsafe static sbyte* c_str(basic_string<char,std::char_traits<char>,std::allocator<char>\u0020>* A_0)
	{
		sbyte* ptr = A_0;
		if (((16L <= *(A_0 + 24L)) ? 1 : 0) != 0)
		{
			ptr = *A_0;
		}
		return ptr;
	}

	// Token: 0x06000072 RID: 114 RVA: 0x00002E8C File Offset: 0x0000228C
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

	// Token: 0x06000073 RID: 115 RVA: 0x000049A0 File Offset: 0x00003DA0
	internal static void <CrtImplementationDetails>.ThrowNestedModuleLoadException(Exception innerException, Exception nestedException)
	{
		throw new ModuleLoadExceptionHandlerException("A nested exception occurred after the primary exception that caused the C++ module to fail to load.\n", innerException, nestedException);
	}

	// Token: 0x06000074 RID: 116 RVA: 0x0000434C File Offset: 0x0000374C
	internal static void <CrtImplementationDetails>.ThrowModuleLoadException(string errorMessage)
	{
		throw new ModuleLoadException(errorMessage);
	}

	// Token: 0x06000075 RID: 117 RVA: 0x00004360 File Offset: 0x00003760
	internal static void <CrtImplementationDetails>.ThrowModuleLoadException(string errorMessage, Exception innerException)
	{
		throw new ModuleLoadException(errorMessage, innerException);
	}

	// Token: 0x06000076 RID: 118 RVA: 0x0000447C File Offset: 0x0000387C
	internal static void <CrtImplementationDetails>.RegisterModuleUninitializer(EventHandler handler)
	{
		ModuleUninitializer._ModuleUninitializer.AddHandler(handler);
	}

	// Token: 0x06000077 RID: 119 RVA: 0x00004494 File Offset: 0x00003894
	[SecuritySafeCritical]
	internal unsafe static Guid <CrtImplementationDetails>.FromGUID(_GUID* guid)
	{
		Guid guid2 = new Guid((uint)(*guid), *(guid + 4L), *(guid + 6L), *(guid + 8L), *(guid + 9L), *(guid + 10L), *(guid + 11L), *(guid + 12L), *(guid + 13L), *(guid + 14L), *(guid + 15L));
		return guid2;
	}

	// Token: 0x06000078 RID: 120 RVA: 0x000044E4 File Offset: 0x000038E4
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

	// Token: 0x06000079 RID: 121 RVA: 0x00004564 File Offset: 0x00003964
	internal unsafe static void __release_appdomain(IUnknown* ppUnk)
	{
		uint num = calli(System.UInt32 modopt(System.Runtime.CompilerServices.IsLong) modopt(System.Runtime.CompilerServices.CallConvCdecl)(System.IntPtr), ppUnk, *(*(long*)ppUnk + 16L));
	}

	// Token: 0x0600007A RID: 122 RVA: 0x00004580 File Offset: 0x00003980
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

	// Token: 0x0600007B RID: 123 RVA: 0x000045E0 File Offset: 0x000039E0
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

	// Token: 0x0600007C RID: 124 RVA: 0x00004698 File Offset: 0x00003A98
	[return: MarshalAs(UnmanagedType.U1)]
	internal static bool __scrt_is_safe_for_managed_code()
	{
		return (<Module>.__scrt_native_dllmain_reason <= 1U) ? 0 : 1;
	}

	// Token: 0x0600007D RID: 125 RVA: 0x000046D0 File Offset: 0x00003AD0
	[SecuritySafeCritical]
	internal unsafe static int <CrtImplementationDetails>.DefaultDomain.DoNothing(void* cookie)
	{
		GC.KeepAlive(int.MaxValue);
		return 0;
	}

	// Token: 0x0600007E RID: 126 RVA: 0x000046F0 File Offset: 0x00003AF0
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

	// Token: 0x0600007F RID: 127 RVA: 0x00004744 File Offset: 0x00003B44
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

	// Token: 0x06000080 RID: 128 RVA: 0x000047C4 File Offset: 0x00003BC4
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

	// Token: 0x06000081 RID: 129 RVA: 0x000047FC File Offset: 0x00003BFC
	[return: MarshalAs(UnmanagedType.U1)]
	internal static bool <CrtImplementationDetails>.DefaultDomain.NeedsUninitialization()
	{
		return <Module>.?Entered@DefaultDomain@<CrtImplementationDetails>@@2_NA;
	}

	// Token: 0x06000082 RID: 130 RVA: 0x00004810 File Offset: 0x00003C10
	[SecurityCritical]
	internal static void <CrtImplementationDetails>.DefaultDomain.Initialize()
	{
		<Module>.<CrtImplementationDetails>.DoCallBackInDefaultDomain(<Module>.__unep@?DoNothing@DefaultDomain@<CrtImplementationDetails>@@$$FCAJPEAX@Z, null);
	}

	// Token: 0x06000083 RID: 131 RVA: 0x00001000 File Offset: 0x00000400
	internal static void ??__E?Initialized@CurrentDomain@<CrtImplementationDetails>@@$$Q2HA@@YMXXZ()
	{
		<Module>.?Initialized@CurrentDomain@<CrtImplementationDetails>@@$$Q2HA = 0;
	}

	// Token: 0x06000084 RID: 132 RVA: 0x00001014 File Offset: 0x00000414
	internal static void ??__E?Uninitialized@CurrentDomain@<CrtImplementationDetails>@@$$Q2HA@@YMXXZ()
	{
		<Module>.?Uninitialized@CurrentDomain@<CrtImplementationDetails>@@$$Q2HA = 0;
	}

	// Token: 0x06000085 RID: 133 RVA: 0x00001028 File Offset: 0x00000428
	internal static void ??__E?IsDefaultDomain@CurrentDomain@<CrtImplementationDetails>@@$$Q2_NA@@YMXXZ()
	{
		<Module>.?IsDefaultDomain@CurrentDomain@<CrtImplementationDetails>@@$$Q2_NA = false;
	}

	// Token: 0x06000086 RID: 134 RVA: 0x0000103C File Offset: 0x0000043C
	internal static void ??__E?InitializedVtables@CurrentDomain@<CrtImplementationDetails>@@$$Q2W4Progress@2@A@@YMXXZ()
	{
		<Module>.?InitializedVtables@CurrentDomain@<CrtImplementationDetails>@@$$Q2W4Progress@2@A = (Progress)0;
	}

	// Token: 0x06000087 RID: 135 RVA: 0x00001050 File Offset: 0x00000450
	internal static void ??__E?InitializedNative@CurrentDomain@<CrtImplementationDetails>@@$$Q2W4Progress@2@A@@YMXXZ()
	{
		<Module>.?InitializedNative@CurrentDomain@<CrtImplementationDetails>@@$$Q2W4Progress@2@A = (Progress)0;
	}

	// Token: 0x06000088 RID: 136 RVA: 0x00001064 File Offset: 0x00000464
	internal static void ??__E?InitializedPerProcess@CurrentDomain@<CrtImplementationDetails>@@$$Q2W4Progress@2@A@@YMXXZ()
	{
		<Module>.?InitializedPerProcess@CurrentDomain@<CrtImplementationDetails>@@$$Q2W4Progress@2@A = (Progress)0;
	}

	// Token: 0x06000089 RID: 137 RVA: 0x00001078 File Offset: 0x00000478
	internal static void ??__E?InitializedPerAppDomain@CurrentDomain@<CrtImplementationDetails>@@$$Q2W4Progress@2@A@@YMXXZ()
	{
		<Module>.?InitializedPerAppDomain@CurrentDomain@<CrtImplementationDetails>@@$$Q2W4Progress@2@A = (Progress)0;
	}

	// Token: 0x0600008A RID: 138 RVA: 0x000049F4 File Offset: 0x00003DF4
	[SecuritySafeCritical]
	[DebuggerStepThrough]
	internal unsafe static void <CrtImplementationDetails>.LanguageSupport.InitializeVtables(LanguageSupport* A_0)
	{
		<Module>.gcroot<System::String\u0020^>.=(A_0, "The C++ module failed to load during vtable initialization.\n");
		<Module>.?InitializedVtables@CurrentDomain@<CrtImplementationDetails>@@$$Q2W4Progress@2@A = (Progress)1;
		<Module>._initterm_m((method*)(&<Module>.__xi_vt_a), (method*)(&<Module>.__xi_vt_z));
		<Module>.?InitializedVtables@CurrentDomain@<CrtImplementationDetails>@@$$Q2W4Progress@2@A = (Progress)2;
	}

	// Token: 0x0600008B RID: 139 RVA: 0x00004A28 File Offset: 0x00003E28
	[SecuritySafeCritical]
	internal unsafe static void <CrtImplementationDetails>.LanguageSupport.InitializeDefaultAppDomain(LanguageSupport* A_0)
	{
		<Module>.gcroot<System::String\u0020^>.=(A_0, "The C++ module failed to load while attempting to initialize the default appdomain.\n");
		<Module>.<CrtImplementationDetails>.DefaultDomain.Initialize();
	}

	// Token: 0x0600008C RID: 140 RVA: 0x00004A48 File Offset: 0x00003E48
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

	// Token: 0x0600008D RID: 141 RVA: 0x00004AD8 File Offset: 0x00003ED8
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

	// Token: 0x0600008E RID: 142 RVA: 0x00004B18 File Offset: 0x00003F18
	[DebuggerStepThrough]
	[SecurityCritical]
	internal unsafe static void <CrtImplementationDetails>.LanguageSupport.InitializePerAppDomain(LanguageSupport* A_0)
	{
		<Module>.gcroot<System::String\u0020^>.=(A_0, "The C++ module failed to load during appdomain initialization.\n");
		<Module>.?InitializedPerAppDomain@CurrentDomain@<CrtImplementationDetails>@@$$Q2W4Progress@2@A = (Progress)1;
		<Module>._initatexit_app_domain();
		<Module>._initterm_m((method*)(&<Module>.__xc_ma_a), (method*)(&<Module>.__xc_ma_z));
		<Module>.?InitializedPerAppDomain@CurrentDomain@<CrtImplementationDetails>@@$$Q2W4Progress@2@A = (Progress)2;
	}

	// Token: 0x0600008F RID: 143 RVA: 0x00004B54 File Offset: 0x00003F54
	[SecurityCritical]
	[DebuggerStepThrough]
	internal unsafe static void <CrtImplementationDetails>.LanguageSupport.InitializeUninitializer(LanguageSupport* A_0)
	{
		<Module>.gcroot<System::String\u0020^>.=(A_0, "The C++ module failed to load during registration for the unload events.\n");
		<Module>.<CrtImplementationDetails>.RegisterModuleUninitializer(new EventHandler(<Module>.<CrtImplementationDetails>.LanguageSupport.DomainUnload));
	}

	// Token: 0x06000090 RID: 144 RVA: 0x00004B80 File Offset: 0x00003F80
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

	// Token: 0x06000091 RID: 145 RVA: 0x0000482C File Offset: 0x00003C2C
	[SecurityCritical]
	internal static void <CrtImplementationDetails>.LanguageSupport.UninitializeAppDomain()
	{
		<Module>._app_exit_callback();
	}

	// Token: 0x06000092 RID: 146 RVA: 0x00004840 File Offset: 0x00003C40
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

	// Token: 0x06000093 RID: 147 RVA: 0x00004878 File Offset: 0x00003C78
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

	// Token: 0x06000094 RID: 148 RVA: 0x000048B0 File Offset: 0x00003CB0
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

	// Token: 0x06000095 RID: 149 RVA: 0x00004C84 File Offset: 0x00004084
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	[DebuggerStepThrough]
	[SecurityCritical]
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

	// Token: 0x06000096 RID: 150 RVA: 0x00004CF8 File Offset: 0x000040F8
	[SecurityCritical]
	internal unsafe static LanguageSupport* <CrtImplementationDetails>.LanguageSupport.{ctor}(LanguageSupport* A_0)
	{
		<Module>.gcroot<System::String\u0020^>.{ctor}(A_0);
		return A_0;
	}

	// Token: 0x06000097 RID: 151 RVA: 0x00004D10 File Offset: 0x00004110
	[SecurityCritical]
	internal unsafe static void <CrtImplementationDetails>.LanguageSupport.{dtor}(LanguageSupport* A_0)
	{
		<Module>.gcroot<System::String\u0020^>.{dtor}(A_0);
	}

	// Token: 0x06000098 RID: 152 RVA: 0x00004D24 File Offset: 0x00004124
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

	// Token: 0x06000099 RID: 153 RVA: 0x00004DE0 File Offset: 0x000041E0
	[DebuggerStepThrough]
	[SecurityCritical]
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

	// Token: 0x0600009A RID: 154 RVA: 0x000048EC File Offset: 0x00003CEC
	[SecuritySafeCritical]
	internal unsafe static string PE$AAVString@System@@(gcroot<System::String\u0020^>* A_0)
	{
		IntPtr intPtr = new IntPtr(*A_0);
		return ((GCHandle)intPtr).Target;
	}

	// Token: 0x0600009B RID: 155 RVA: 0x00004910 File Offset: 0x00003D10
	[DebuggerStepThrough]
	[SecurityCritical]
	internal unsafe static gcroot<System::String\u0020^>* =(gcroot<System::String\u0020^>* A_0, string t)
	{
		IntPtr intPtr = new IntPtr(*A_0);
		((GCHandle)intPtr).Target = t;
		return A_0;
	}

	// Token: 0x0600009C RID: 156 RVA: 0x00004938 File Offset: 0x00003D38
	[SecurityCritical]
	[DebuggerStepThrough]
	internal unsafe static void {dtor}(gcroot<System::String\u0020^>* A_0)
	{
		IntPtr intPtr = new IntPtr(*A_0);
		((GCHandle)intPtr).Free();
		*A_0 = 0L;
	}

	// Token: 0x0600009D RID: 157 RVA: 0x00004960 File Offset: 0x00003D60
	[DebuggerStepThrough]
	[SecuritySafeCritical]
	internal unsafe static gcroot<System::String\u0020^>* {ctor}(gcroot<System::String\u0020^>* A_0)
	{
		*A_0 = ((IntPtr)GCHandle.Alloc(null)).ToPointer();
		return A_0;
	}

	// Token: 0x0600009E RID: 158 RVA: 0x00004E54 File Offset: 0x00004254
	[SecurityCritical]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	[HandleProcessCorruptedStateExceptions]
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

	// Token: 0x0600009F RID: 159 RVA: 0x00004E98 File Offset: 0x00004298
	[SecurityCritical]
	[HandleProcessCorruptedStateExceptions]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
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

	// Token: 0x060000A0 RID: 160 RVA: 0x00004EDC File Offset: 0x000042DC
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	[HandleProcessCorruptedStateExceptions]
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

	// Token: 0x060000A1 RID: 161 RVA: 0x00004F9C File Offset: 0x0000439C
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	[SecurityCritical]
	[HandleProcessCorruptedStateExceptions]
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

	// Token: 0x060000A2 RID: 162 RVA: 0x00004F24 File Offset: 0x00004324
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

	// Token: 0x060000A3 RID: 163 RVA: 0x00004F44 File Offset: 0x00004344
	[HandleProcessCorruptedStateExceptions]
	[SecurityCritical]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
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

	// Token: 0x060000A4 RID: 164 RVA: 0x00004FF8 File Offset: 0x000043F8
	[SecurityCritical]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	internal unsafe static void __ehvec_dtor(void* ptr, ulong size, int count, method destructor)
	{
		<Module>.__ehvec_dtor(ptr, size, (ulong)((long)count), destructor);
	}

	// Token: 0x060000A5 RID: 165 RVA: 0x00005010 File Offset: 0x00004410
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

	// Token: 0x060000A6 RID: 166 RVA: 0x00005508 File Offset: 0x00004908
	[SecurityCritical]
	[DebuggerStepThrough]
	internal static void <CrtImplementationDetails>.AtExitLock._lock_Construct(object value)
	{
		<Module>.?_lock@AtExitLock@<CrtImplementationDetails>@@$$Q0PEAXEA = null;
		<Module>.<CrtImplementationDetails>.AtExitLock._lock_Set(value);
	}

	// Token: 0x060000A7 RID: 167 RVA: 0x00005040 File Offset: 0x00004440
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

	// Token: 0x060000A8 RID: 168 RVA: 0x00005090 File Offset: 0x00004490
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

	// Token: 0x060000A9 RID: 169 RVA: 0x000050B4 File Offset: 0x000044B4
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

	// Token: 0x060000AA RID: 170 RVA: 0x000050DC File Offset: 0x000044DC
	[SecurityCritical]
	[DebuggerStepThrough]
	[return: MarshalAs(UnmanagedType.U1)]
	internal static bool <CrtImplementationDetails>.AtExitLock.IsInitialized()
	{
		return (<Module>.<CrtImplementationDetails>.AtExitLock._lock_Get() != null) ? 1 : 0;
	}

	// Token: 0x060000AB RID: 171 RVA: 0x00005524 File Offset: 0x00004924
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

	// Token: 0x060000AC RID: 172 RVA: 0x000050F8 File Offset: 0x000044F8
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

	// Token: 0x060000AD RID: 173 RVA: 0x00005120 File Offset: 0x00004520
	[DebuggerStepThrough]
	[SecurityCritical]
	internal static void <CrtImplementationDetails>.AtExitLock.Enter()
	{
		Monitor.Enter(<Module>.<CrtImplementationDetails>.AtExitLock._lock_Get());
	}

	// Token: 0x060000AE RID: 174 RVA: 0x00005138 File Offset: 0x00004538
	[SecurityCritical]
	[DebuggerStepThrough]
	internal static void <CrtImplementationDetails>.AtExitLock.Exit()
	{
		Monitor.Exit(<Module>.<CrtImplementationDetails>.AtExitLock._lock_Get());
	}

	// Token: 0x060000AF RID: 175 RVA: 0x00005150 File Offset: 0x00004550
	[DebuggerStepThrough]
	[SecurityCritical]
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

	// Token: 0x060000B0 RID: 176 RVA: 0x00005170 File Offset: 0x00004570
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

	// Token: 0x060000B1 RID: 177 RVA: 0x00005554 File Offset: 0x00004954
	[SecurityCritical]
	[DebuggerStepThrough]
	[return: MarshalAs(UnmanagedType.U1)]
	internal static bool __alloc_global_lock()
	{
		<Module>.<CrtImplementationDetails>.AtExitLock.AddRef();
		return <Module>.<CrtImplementationDetails>.AtExitLock.IsInitialized();
	}

	// Token: 0x060000B2 RID: 178 RVA: 0x00005190 File Offset: 0x00004590
	[DebuggerStepThrough]
	[SecurityCritical]
	internal static void __dealloc_global_lock()
	{
		<Module>.<CrtImplementationDetails>.AtExitLock.RemoveRef();
	}

	// Token: 0x060000B3 RID: 179 RVA: 0x000051A4 File Offset: 0x000045A4
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

	// Token: 0x060000B4 RID: 180 RVA: 0x0000531C File Offset: 0x0000471C
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

	// Token: 0x060000B5 RID: 181 RVA: 0x0000556C File Offset: 0x0000496C
	[SecurityCritical]
	[DebuggerStepThrough]
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

	// Token: 0x060000B6 RID: 182 RVA: 0x000055B4 File Offset: 0x000049B4
	internal static method _onexit_m(method _Function)
	{
		return (<Module>._atexit_m(_Function) == -1) ? 0L : _Function;
	}

	// Token: 0x060000B7 RID: 183 RVA: 0x000053CC File Offset: 0x000047CC
	[SecurityCritical]
	internal unsafe static int _atexit_m(method func)
	{
		return <Module>._atexit_helper(<Module>.EncodePointer(func), &<Module>.?A0x5f1aee9f.__exit_list_size, &<Module>.?A0x5f1aee9f.__onexitend_m, &<Module>.?A0x5f1aee9f.__onexitbegin_m);
	}

	// Token: 0x060000B8 RID: 184 RVA: 0x000055D0 File Offset: 0x000049D0
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

	// Token: 0x060000B9 RID: 185 RVA: 0x000053F4 File Offset: 0x000047F4
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

	// Token: 0x060000BA RID: 186 RVA: 0x00005614 File Offset: 0x00004A14
	[SecurityCritical]
	internal static method _onexit_m_appdomain(method _Function)
	{
		return (<Module>._atexit_m_appdomain(_Function) == -1) ? 0L : _Function;
	}

	// Token: 0x060000BB RID: 187 RVA: 0x000054E0 File Offset: 0x000048E0
	[SecurityCritical]
	[DebuggerStepThrough]
	internal unsafe static int _atexit_m_appdomain(method func)
	{
		return <Module>._atexit_helper(<Module>.EncodePointer(func), &<Module>.__exit_list_size_app_domain, &<Module>.__onexitend_app_domain, &<Module>.__onexitbegin_app_domain);
	}

	// Token: 0x060000BC RID: 188
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	[SuppressUnmanagedCodeSecurity]
	[SecurityCritical]
	[DllImport("KERNEL32.dll")]
	public unsafe static extern void* DecodePointer(void* _Ptr);

	// Token: 0x060000BD RID: 189
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	[SuppressUnmanagedCodeSecurity]
	[SecurityCritical]
	[DllImport("KERNEL32.dll")]
	public unsafe static extern void* EncodePointer(void* _Ptr);

	// Token: 0x060000BE RID: 190 RVA: 0x00005630 File Offset: 0x00004A30
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

	// Token: 0x060000BF RID: 191 RVA: 0x00005660 File Offset: 0x00004A60
	[DebuggerStepThrough]
	[SecurityCritical]
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

	// Token: 0x060000C0 RID: 192 RVA: 0x00005688 File Offset: 0x00004A88
	[DebuggerStepThrough]
	internal static ModuleHandle <CrtImplementationDetails>.ThisModule.Handle()
	{
		return typeof(ThisModule).Module.ModuleHandle;
	}

	// Token: 0x060000C1 RID: 193 RVA: 0x000056D8 File Offset: 0x00004AD8
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

	// Token: 0x060000C2 RID: 194 RVA: 0x000056AC File Offset: 0x00004AAC
	[SecurityCritical]
	[DebuggerStepThrough]
	internal static method <CrtImplementationDetails>.ThisModule.ResolveMethod<void\u0020const\u0020*\u0020__clrcall(void)>(method methodToken)
	{
		return <Module>.<CrtImplementationDetails>.ThisModule.Handle().ResolveMethodHandle(methodToken).GetFunctionPointer()
			.ToPointer();
	}

	// Token: 0x060000C3 RID: 195 RVA: 0x000057EB File Offset: 0x00004BEB
	[SuppressUnmanagedCodeSecurity]
	[DllImport("", CallingConvention = CallingConvention.Cdecl, SetLastError = true)]
	[MethodImpl(MethodImplOptions.Unmanaged, MethodCodeType = MethodCodeType.Native)]
	internal unsafe static extern void {dtor}(locker*);

	// Token: 0x060000C4 RID: 196 RVA: 0x00005821 File Offset: 0x00004C21
	[SuppressUnmanagedCodeSecurity]
	[DllImport("", CallingConvention = CallingConvention.Cdecl, SetLastError = true)]
	[MethodImpl(MethodImplOptions.Unmanaged, MethodCodeType = MethodCodeType.Native)]
	internal unsafe static extern void _Xlength_error(sbyte*);

	// Token: 0x060000C5 RID: 197 RVA: 0x00005885 File Offset: 0x00004C85
	[SuppressUnmanagedCodeSecurity]
	[DllImport("", CallingConvention = CallingConvention.Cdecl, SetLastError = true)]
	[MethodImpl(MethodImplOptions.Unmanaged, MethodCodeType = MethodCodeType.Native)]
	internal unsafe static extern int WideCharToMultiByte(uint, uint, char*, int, sbyte*, int, sbyte*, int*);

	// Token: 0x060000C6 RID: 198 RVA: 0x0000589D File Offset: 0x00004C9D
	[SuppressUnmanagedCodeSecurity]
	[DllImport("", CallingConvention = CallingConvention.Cdecl, SetLastError = true)]
	[MethodImpl(MethodImplOptions.Unmanaged, MethodCodeType = MethodCodeType.Native)]
	internal static extern void _invalid_parameter_noinfo_noreturn();

	// Token: 0x060000C7 RID: 199 RVA: 0x000057F1 File Offset: 0x00004BF1
	[SuppressUnmanagedCodeSecurity]
	[DllImport("", CallingConvention = CallingConvention.Cdecl, SetLastError = true)]
	[MethodImpl(MethodImplOptions.Unmanaged, MethodCodeType = MethodCodeType.Native)]
	internal unsafe static extern locker* {ctor}(locker*, basic_string<char,std::char_traits<char>,std::allocator<char>\u0020>*, [MarshalAs(UnmanagedType.U1)] bool);

	// Token: 0x060000C8 RID: 200 RVA: 0x00003684 File Offset: 0x00002A84
	[SuppressUnmanagedCodeSecurity]
	[MethodImpl(MethodImplOptions.Unmanaged | MethodImplOptions.PreserveSig, MethodCodeType = MethodCodeType.Native)]
	internal unsafe static extern void delete(void*, ulong);

	// Token: 0x060000C9 RID: 201 RVA: 0x00005834 File Offset: 0x00004C34
	[SuppressUnmanagedCodeSecurity]
	[MethodImpl(MethodImplOptions.Unmanaged | MethodImplOptions.PreserveSig, MethodCodeType = MethodCodeType.Native)]
	internal unsafe static extern void* @new(ulong);

	// Token: 0x060000CA RID: 202 RVA: 0x00005803 File Offset: 0x00004C03
	[SuppressUnmanagedCodeSecurity]
	[DllImport("", CallingConvention = CallingConvention.Cdecl, SetLastError = true)]
	[MethodImpl(MethodImplOptions.Unmanaged, MethodCodeType = MethodCodeType.Native)]
	internal unsafe static extern void write_api_server_port(scoped_shm_writer*, int);

	// Token: 0x060000CB RID: 203 RVA: 0x000057FD File Offset: 0x00004BFD
	[SuppressUnmanagedCodeSecurity]
	[DllImport("", CallingConvention = CallingConvention.Cdecl, SetLastError = true)]
	[MethodImpl(MethodImplOptions.Unmanaged, MethodCodeType = MethodCodeType.Native)]
	internal unsafe static extern void write_window_handle(scoped_shm_writer*, HWND__**);

	// Token: 0x060000CC RID: 204 RVA: 0x000057F7 File Offset: 0x00004BF7
	[SuppressUnmanagedCodeSecurity]
	[DllImport("", CallingConvention = CallingConvention.Cdecl, SetLastError = true)]
	[MethodImpl(MethodImplOptions.Unmanaged, MethodCodeType = MethodCodeType.Native)]
	internal unsafe static extern void {dtor}(scoped_shm_writer*);

	// Token: 0x060000CD RID: 205 RVA: 0x00005809 File Offset: 0x00004C09
	[SuppressUnmanagedCodeSecurity]
	[DllImport("", CallingConvention = CallingConvention.Cdecl, SetLastError = true)]
	[MethodImpl(MethodImplOptions.Unmanaged, MethodCodeType = MethodCodeType.Native)]
	internal unsafe static extern scoped_shm_writer* {ctor}(scoped_shm_writer*, basic_string<char,std::char_traits<char>,std::allocator<char>\u0020>*);

	// Token: 0x060000CE RID: 206 RVA: 0x00005878 File Offset: 0x00004C78
	[SuppressUnmanagedCodeSecurity]
	[MethodImpl(MethodImplOptions.Unmanaged | MethodImplOptions.PreserveSig, MethodCodeType = MethodCodeType.Native)]
	internal unsafe static extern void* new[](ulong);

	// Token: 0x060000CF RID: 207 RVA: 0x00005827 File Offset: 0x00004C27
	[SuppressUnmanagedCodeSecurity]
	[DllImport("", CallingConvention = CallingConvention.Cdecl, SetLastError = true)]
	[MethodImpl(MethodImplOptions.Unmanaged, MethodCodeType = MethodCodeType.Native)]
	internal unsafe static extern void __ExceptionPtrDestroy(void*);

	// Token: 0x060000D0 RID: 208 RVA: 0x0000575F File Offset: 0x00004B5F
	[SuppressUnmanagedCodeSecurity]
	[DllImport("", CallingConvention = CallingConvention.Cdecl, SetLastError = true)]
	[MethodImpl(MethodImplOptions.Unmanaged, MethodCodeType = MethodCodeType.Native)]
	internal unsafe static extern void __std_exception_copy(__std_exception_data*, __std_exception_data*);

	// Token: 0x060000D1 RID: 209 RVA: 0x0000582D File Offset: 0x00004C2D
	[SuppressUnmanagedCodeSecurity]
	[DllImport("", CallingConvention = CallingConvention.Cdecl, SetLastError = true)]
	[MethodImpl(MethodImplOptions.Unmanaged, MethodCodeType = MethodCodeType.Native)]
	internal unsafe static extern void __ExceptionPtrCopy(void*, void*);

	// Token: 0x060000D2 RID: 210 RVA: 0x00005880 File Offset: 0x00004C80
	[SuppressUnmanagedCodeSecurity]
	[MethodImpl(MethodImplOptions.Unmanaged | MethodImplOptions.PreserveSig, MethodCodeType = MethodCodeType.Native)]
	internal unsafe static extern void delete[](void*, ulong);

	// Token: 0x060000D3 RID: 211 RVA: 0x00005870 File Offset: 0x00004C70
	[SuppressUnmanagedCodeSecurity]
	[MethodImpl(MethodImplOptions.Unmanaged | MethodImplOptions.PreserveSig, MethodCodeType = MethodCodeType.Native)]
	internal unsafe static extern void delete[](void*);

	// Token: 0x060000D4 RID: 212 RVA: 0x00005765 File Offset: 0x00004B65
	[SuppressUnmanagedCodeSecurity]
	[DllImport("", CallingConvention = CallingConvention.Cdecl, SetLastError = true)]
	[MethodImpl(MethodImplOptions.Unmanaged, MethodCodeType = MethodCodeType.Native)]
	internal unsafe static extern void __std_exception_destroy(__std_exception_data*);

	// Token: 0x060000D5 RID: 213 RVA: 0x0000581B File Offset: 0x00004C1B
	[SuppressUnmanagedCodeSecurity]
	[DllImport("", CallingConvention = CallingConvention.Cdecl, SetLastError = true)]
	[MethodImpl(MethodImplOptions.Unmanaged, MethodCodeType = MethodCodeType.Native)]
	internal unsafe static extern basic_string<char,std::char_traits<char>,std::allocator<char>\u0020>* shm(basic_string<char,std::char_traits<char>,std::allocator<char>\u0020>*);

	// Token: 0x060000D6 RID: 214 RVA: 0x00005815 File Offset: 0x00004C15
	[SuppressUnmanagedCodeSecurity]
	[DllImport("", CallingConvention = CallingConvention.Cdecl, SetLastError = true)]
	[MethodImpl(MethodImplOptions.Unmanaged, MethodCodeType = MethodCodeType.Native)]
	internal unsafe static extern basic_string<char,std::char_traits<char>,std::allocator<char>\u0020>* lc_client(basic_string<char,std::char_traits<char>,std::allocator<char>\u0020>*);

	// Token: 0x060000D7 RID: 215 RVA: 0x0000580F File Offset: 0x00004C0F
	[SuppressUnmanagedCodeSecurity]
	[DllImport("", CallingConvention = CallingConvention.Cdecl, SetLastError = true)]
	[MethodImpl(MethodImplOptions.Unmanaged, MethodCodeType = MethodCodeType.Native)]
	internal unsafe static extern basic_string<char,std::char_traits<char>,std::allocator<char>\u0020>* lc_lc(basic_string<char,std::char_traits<char>,std::allocator<char>\u0020>*);

	// Token: 0x060000D8 RID: 216 RVA: 0x0000588B File Offset: 0x00004C8B
	[SuppressUnmanagedCodeSecurity]
	[DllImport("", CallingConvention = CallingConvention.Cdecl, SetLastError = true)]
	[MethodImpl(MethodImplOptions.Unmanaged, MethodCodeType = MethodCodeType.Native)]
	internal unsafe static extern int MultiByteToWideChar(uint, uint, sbyte*, int, char*, int);

	// Token: 0x060000D9 RID: 217 RVA: 0x000046C0 File Offset: 0x00003AC0
	[SuppressUnmanagedCodeSecurity]
	[MethodImpl(MethodImplOptions.Unmanaged | MethodImplOptions.PreserveSig, MethodCodeType = MethodCodeType.Native)]
	internal unsafe static extern void* _getFiberPtrId();

	// Token: 0x060000DA RID: 218 RVA: 0x000057BF File Offset: 0x00004BBF
	[SuppressUnmanagedCodeSecurity]
	[DllImport("", CallingConvention = CallingConvention.Cdecl, SetLastError = true)]
	[MethodImpl(MethodImplOptions.Unmanaged, MethodCodeType = MethodCodeType.Native)]
	internal static extern void _cexit();

	// Token: 0x060000DB RID: 219 RVA: 0x00005891 File Offset: 0x00004C91
	[SuppressUnmanagedCodeSecurity]
	[DllImport("", CallingConvention = CallingConvention.Cdecl, SetLastError = true)]
	[MethodImpl(MethodImplOptions.Unmanaged, MethodCodeType = MethodCodeType.Native)]
	internal static extern void Sleep(uint);

	// Token: 0x060000DC RID: 220 RVA: 0x000058A3 File Offset: 0x00004CA3
	[SuppressUnmanagedCodeSecurity]
	[DllImport("", CallingConvention = CallingConvention.Cdecl, SetLastError = true)]
	[MethodImpl(MethodImplOptions.Unmanaged, MethodCodeType = MethodCodeType.Native)]
	internal static extern void abort();

	// Token: 0x060000DD RID: 221 RVA: 0x000036F8 File Offset: 0x00002AF8
	[SuppressUnmanagedCodeSecurity]
	[MethodImpl(MethodImplOptions.Unmanaged | MethodImplOptions.PreserveSig, MethodCodeType = MethodCodeType.Native)]
	internal static extern void __security_init_cookie();

	// Token: 0x060000DE RID: 222 RVA: 0x00005897 File Offset: 0x00004C97
	[SuppressUnmanagedCodeSecurity]
	[DllImport("", CallingConvention = CallingConvention.Cdecl, SetLastError = true)]
	[MethodImpl(MethodImplOptions.Unmanaged, MethodCodeType = MethodCodeType.Native)]
	internal unsafe static extern int __FrameUnwindFilter(_EXCEPTION_POINTERS*);

	// Token: 0x060000DF RID: 223 RVA: 0x000057C5 File Offset: 0x00004BC5
	[SuppressUnmanagedCodeSecurity]
	[DllImport("", CallingConvention = CallingConvention.Cdecl, SetLastError = true)]
	[MethodImpl(MethodImplOptions.Unmanaged, MethodCodeType = MethodCodeType.Native)]
	internal static extern void terminate();

	// Token: 0x04000001 RID: 1 RVA: 0x000072F8 File Offset: 0x00005EF8
	internal static $ArrayType$$$BY0BA@$$CBD ??_C@_0BA@JFNIOLAK@string?5too?5long@;

	// Token: 0x04000002 RID: 2 RVA: 0x00020010 File Offset: 0x0001E210
	public static method __m2mep@??_Glocker@mutex@ipc@@$$FQEAAPEAXI@Z;

	// Token: 0x04000003 RID: 3 RVA: 0x000201F0 File Offset: 0x0001E3F0
	public static method __m2mep@??0?$allocator@D@std@@$$FQEAA@XZ;

	// Token: 0x04000004 RID: 4 RVA: 0x000203B0 File Offset: 0x0001E5B0
	public static method __m2mep@??$?0$$V@?$_Compressed_pair@V?$allocator@D@std@@V?$_String_val@U?$_Simple_types@D@std@@@2@$00@std@@$$FQEAA@U_Zero_then_variadic_args_t@1@@Z;

	// Token: 0x04000005 RID: 5 RVA: 0x000203E0 File Offset: 0x0001E5E0
	public static method __m2mep@??0?$_String_alloc@U?$_String_base_types@DV?$allocator@D@std@@@std@@@std@@$$FQEAA@XZ;

	// Token: 0x04000006 RID: 6 RVA: 0x00020430 File Offset: 0x0001E630
	public static method __m2mep@??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@$$FQEAA@XZ;

	// Token: 0x04000007 RID: 7 RVA: 0x000200B0 File Offset: 0x0001E2B0
	public static method __m2mep@?GetAnsiStringSize@details@interop@msclr@@$$FYM_KPE$AAVString@System@@@Z;

	// Token: 0x04000008 RID: 8 RVA: 0x000202E0 File Offset: 0x0001E4E0
	public static method __m2mep@?size@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@$$FQEBA_KXZ;

	// Token: 0x04000009 RID: 9 RVA: 0x000202C0 File Offset: 0x0001E4C0
	public static method __m2mep@?_Eos@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@$$FQEAAX_K@Z;

	// Token: 0x0400000A RID: 10 RVA: 0x000201E0 File Offset: 0x0001E3E0
	public static method __m2mep@?_Xlen@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@$$FSAXXZ;

	// Token: 0x0400000B RID: 11 RVA: 0x00020150 File Offset: 0x0001E350
	public static method __m2mep@?max_size@?$_Default_allocator_traits@V?$allocator@D@std@@@std@@$$FSA_KAEBV?$allocator@D@2@@Z;

	// Token: 0x0400000C RID: 12 RVA: 0x00020130 File Offset: 0x0001E330
	public static method __m2mep@?_Get_first@?$_Compressed_pair@V?$allocator@D@std@@V?$_String_val@U?$_Simple_types@D@std@@@2@$00@std@@$$FQEBAAEBV?$allocator@D@2@XZ;

	// Token: 0x0400000D RID: 13 RVA: 0x00020280 File Offset: 0x0001E480
	public static method __m2mep@?_Getal@?$_String_alloc@U?$_String_base_types@DV?$allocator@D@std@@@std@@@std@@$$FQEBAAEBV?$allocator@D@2@XZ;

	// Token: 0x0400000E RID: 14 RVA: 0x00020160 File Offset: 0x0001E360
	public static method __m2mep@??$_Min_value@_K@std@@$$FYAAEB_KAEB_K0@Z;

	// Token: 0x0400000F RID: 15 RVA: 0x00020020 File Offset: 0x0001E220
	public static method __m2mep@?max@?$numeric_limits@_J@std@@$$FSA_JXZ;

	// Token: 0x04000010 RID: 16 RVA: 0x000202D0 File Offset: 0x0001E4D0
	public static method __m2mep@?max_size@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@$$FQEBA_KXZ;

	// Token: 0x04000011 RID: 17 RVA: 0x00020110 File Offset: 0x0001E310
	public static method __m2mep@?_Get_second@?$_Compressed_pair@V?$allocator@D@std@@V?$_String_val@U?$_Simple_types@D@std@@@2@$00@std@@$$FQEBAAEBV?$_String_val@U?$_Simple_types@D@std@@@2@XZ;

	// Token: 0x04000012 RID: 18 RVA: 0x00020260 File Offset: 0x0001E460
	public static method __m2mep@?_Get_data@?$_String_alloc@U?$_String_base_types@DV?$allocator@D@std@@@std@@@std@@$$FQEBAAEBV?$_String_val@U?$_Simple_types@D@std@@@2@XZ;

	// Token: 0x04000013 RID: 19 RVA: 0x000200F0 File Offset: 0x0001E2F0
	public static method __m2mep@??$_Max_value@_K@std@@$$FYAAEB_KAEB_K0@Z;

	// Token: 0x04000014 RID: 20 RVA: 0x00020340 File Offset: 0x0001E540
	public static method __m2mep@?_Calculate_growth@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@$$FQEBA_K_K@Z;

	// Token: 0x04000015 RID: 21 RVA: 0x00020230 File Offset: 0x0001E430
	public static method __m2mep@??$_Allocate_manually_vector_aligned@U_Default_allocate_traits@std@@@std@@$$FYAPEAX_K@Z;

	// Token: 0x04000016 RID: 22 RVA: 0x00020080 File Offset: 0x0001E280
	public static method __m2mep@?_Allocate@_Default_allocate_traits@std@@$$FSAPEAX_K@Z;

	// Token: 0x04000017 RID: 23 RVA: 0x00020320 File Offset: 0x0001E520
	public static method __m2mep@??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@$$FYAPEAX_K@Z;

	// Token: 0x04000018 RID: 24 RVA: 0x00020070 File Offset: 0x0001E270
	public static method __m2mep@??$_Get_size_of_n@$00@std@@$$FYA_K_K@Z;

	// Token: 0x04000019 RID: 25 RVA: 0x00020390 File Offset: 0x0001E590
	public static method __m2mep@?allocate@?$allocator@D@std@@$$FQEAAPEAD_K@Z;

	// Token: 0x0400001A RID: 26 RVA: 0x00020030 File Offset: 0x0001E230
	public static method __m2mep@?copy@?$char_traits@D@std@@$$FSAPEADQEADQEBD_K@Z;

	// Token: 0x0400001B RID: 27 RVA: 0x00020040 File Offset: 0x0001E240
	public static method __m2mep@?assign@?$char_traits@D@std@@$$FSAPEADQEAD_KD@Z;

	// Token: 0x0400001C RID: 28 RVA: 0x00020100 File Offset: 0x0001E300
	public static method __m2mep@??R<lambda_59d344839e59d86dc9255728ed6d9dcb>@@$$FQEBAXQEADQEBD_K2D@Z;

	// Token: 0x0400001D RID: 29 RVA: 0x00020000 File Offset: 0x0001E200
	public static method __m2mep@??2@$$FYAPEAX_KPEAX@Z;

	// Token: 0x0400001E RID: 30 RVA: 0x00020220 File Offset: 0x0001E420
	public static method __m2mep@??$forward@AEBQEAD@std@@$$FYAAEBQEADAEBQEAD@Z;

	// Token: 0x0400001F RID: 31 RVA: 0x00020310 File Offset: 0x0001E510
	public static method __m2mep@??$construct@PEADAEBQEAD@?$_Default_allocator_traits@V?$allocator@D@std@@@std@@$$FSAXAEAV?$allocator@D@1@QEAPEADAEBQEAD@Z;

	// Token: 0x04000020 RID: 32 RVA: 0x000203C0 File Offset: 0x0001E5C0
	public static method __m2mep@??$_Reallocate_grow_by@V<lambda_59d344839e59d86dc9255728ed6d9dcb>@@_KD@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@$$FQEAAAEAV01@_KV<lambda_59d344839e59d86dc9255728ed6d9dcb>@@_KD@Z;

	// Token: 0x04000021 RID: 33 RVA: 0x000203F0 File Offset: 0x0001E5F0
	public static method __m2mep@?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@$$FQEAAAEAV12@_KD@Z;

	// Token: 0x04000022 RID: 34 RVA: 0x00020400 File Offset: 0x0001E600
	public static method __m2mep@?resize@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@$$FQEAAX_KD@Z;

	// Token: 0x04000023 RID: 35 RVA: 0x00020170 File Offset: 0x0001E370
	public static method __m2mep@??$_Unfancy@D@std@@$$FYAPEADPEAD@Z;

	// Token: 0x04000024 RID: 36 RVA: 0x00020250 File Offset: 0x0001E450
	public static method __m2mep@?_Myptr@?$_String_val@U?$_Simple_types@D@std@@@std@@$$FQEAAPEADXZ;

	// Token: 0x04000025 RID: 37 RVA: 0x00020360 File Offset: 0x0001E560
	public static method __m2mep@??A?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@$$FQEAAAEAD_K@Z;

	// Token: 0x04000026 RID: 38 RVA: 0x000200A0 File Offset: 0x0001E2A0
	public static method __m2mep@?PtrToStringChars@@$$FYMPE$CB_WPE$ABVString@System@@@Z;

	// Token: 0x04000027 RID: 39 RVA: 0x000200C0 File Offset: 0x0001E2C0
	public static method __m2mep@?WriteAnsiString@details@interop@msclr@@$$FYMXPEAD_KPE$AAVString@System@@@Z;

	// Token: 0x04000028 RID: 40 RVA: 0x00020200 File Offset: 0x0001E400
	public static method __m2mep@??0_Bxty@?$_String_val@U?$_Simple_types@D@std@@@std@@$$FQEAA@XZ;

	// Token: 0x04000029 RID: 41 RVA: 0x00020330 File Offset: 0x0001E530
	public static method __m2mep@??0?$_String_val@U?$_Simple_types@D@std@@@std@@$$FQEAA@XZ;

	// Token: 0x0400002A RID: 42 RVA: 0x00020350 File Offset: 0x0001E550
	public static method __m2mep@??$?0V?$allocator@D@std@@$$V@?$_Compressed_pair@V?$allocator@D@std@@V?$_String_val@U?$_Simple_types@D@std@@@2@$00@std@@$$FQEAA@U_One_then_variadic_args_t@1@$$QEAV?$allocator@D@1@@Z;

	// Token: 0x0400002B RID: 43 RVA: 0x00020210 File Offset: 0x0001E410
	public static method __m2mep@??$forward@V?$allocator@D@std@@@std@@$$FYA$$QEAV?$allocator@D@0@AEAV10@@Z;

	// Token: 0x0400002C RID: 44 RVA: 0x000203A0 File Offset: 0x0001E5A0
	public static method __m2mep@??$?0V?$allocator@D@std@@X@?$_String_alloc@U?$_String_base_types@DV?$allocator@D@std@@@std@@@std@@$$FQEAA@$$QEAV?$allocator@D@1@@Z;

	// Token: 0x0400002D RID: 45 RVA: 0x00020180 File Offset: 0x0001E380
	public static method __m2mep@??$move@AEAV?$allocator@D@std@@@std@@$$FYA$$QEAV?$allocator@D@0@AEAV10@@Z;

	// Token: 0x0400002E RID: 46 RVA: 0x000201C0 File Offset: 0x0001E3C0
	public static method __m2mep@??$addressof@V?$_String_val@U?$_Simple_types@D@std@@@std@@@std@@$$FYAPEAV?$_String_val@U?$_Simple_types@D@std@@@0@AEAV10@@Z;

	// Token: 0x0400002F RID: 47 RVA: 0x000202B0 File Offset: 0x0001E4B0
	public static method __m2mep@?_Tidy_init@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@$$FQEAAXXZ;

	// Token: 0x04000030 RID: 48 RVA: 0x000202F0 File Offset: 0x0001E4F0
	public static method __m2mep@?_Assign_rv_contents_with_alloc_always_equal@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@$$FQEAAX$$QEAV12@U?$integral_constant@_N$00@2@@Z;

	// Token: 0x04000031 RID: 49 RVA: 0x00020190 File Offset: 0x0001E390
	public static method __m2mep@??$move@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@$$FYA$$QEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@AEAV10@@Z;

	// Token: 0x04000032 RID: 50 RVA: 0x00020420 File Offset: 0x0001E620
	public static method __m2mep@??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@$$FQEAA@$$QEAV01@@Z;

	// Token: 0x04000033 RID: 51 RVA: 0x000200D0 File Offset: 0x0001E2D0
	public static method __m2mep@??1_Bxty@?$_String_val@U?$_Simple_types@D@std@@@std@@$$FQEAA@XZ;

	// Token: 0x04000034 RID: 52 RVA: 0x00020240 File Offset: 0x0001E440
	public static method __m2mep@??1?$_String_val@U?$_Simple_types@D@std@@@std@@$$FQEAA@XZ;

	// Token: 0x04000035 RID: 53 RVA: 0x00020370 File Offset: 0x0001E570
	public static method __m2mep@??1?$_Compressed_pair@V?$allocator@D@std@@V?$_String_val@U?$_Simple_types@D@std@@@2@$00@std@@$$FQEAA@XZ;

	// Token: 0x04000036 RID: 54 RVA: 0x000203D0 File Offset: 0x0001E5D0
	public static method __m2mep@??1?$_String_alloc@U?$_String_base_types@DV?$allocator@D@std@@@std@@@std@@$$FQEAA@XZ;

	// Token: 0x04000037 RID: 55 RVA: 0x00020060 File Offset: 0x0001E260
	public static method __m2mep@?_Orphan_all@_Container_base0@std@@$$FQEAAXXZ;

	// Token: 0x04000038 RID: 56 RVA: 0x000202A0 File Offset: 0x0001E4A0
	public static method __m2mep@?_Orphan_all@?$_String_alloc@U?$_String_base_types@DV?$allocator@D@std@@@std@@@std@@$$FQEAAXXZ;

	// Token: 0x04000039 RID: 57 RVA: 0x00020120 File Offset: 0x0001E320
	public static method __m2mep@?_Get_second@?$_Compressed_pair@V?$allocator@D@std@@V?$_String_val@U?$_Simple_types@D@std@@@2@$00@std@@$$FQEAAAEAV?$_String_val@U?$_Simple_types@D@std@@@2@XZ;

	// Token: 0x0400003A RID: 58 RVA: 0x00020270 File Offset: 0x0001E470
	public static method __m2mep@?_Get_data@?$_String_alloc@U?$_String_base_types@DV?$allocator@D@std@@@std@@@std@@$$FQEAAAEAV?$_String_val@U?$_Simple_types@D@std@@@2@XZ;

	// Token: 0x0400003B RID: 59 RVA: 0x000200E0 File Offset: 0x0001E2E0
	public static method __m2mep@?_Large_string_engaged@?$_String_val@U?$_Simple_types@D@std@@@std@@$$FQEBA_NXZ;

	// Token: 0x0400003C RID: 60 RVA: 0x00020140 File Offset: 0x0001E340
	public static method __m2mep@?_Get_first@?$_Compressed_pair@V?$allocator@D@std@@V?$_String_val@U?$_Simple_types@D@std@@@2@$00@std@@$$FQEAAAEAV?$allocator@D@2@XZ;

	// Token: 0x0400003D RID: 61 RVA: 0x00020290 File Offset: 0x0001E490
	public static method __m2mep@?_Getal@?$_String_alloc@U?$_String_base_types@DV?$allocator@D@std@@@std@@@std@@$$FQEAAAEAV?$allocator@D@2@XZ;

	// Token: 0x0400003E RID: 62 RVA: 0x000201B0 File Offset: 0x0001E3B0
	public static method __m2mep@??$destroy@PEAD@?$_Default_allocator_traits@V?$allocator@D@std@@@std@@$$FSAXAEAV?$allocator@D@1@QEAPEAD@Z;

	// Token: 0x0400003F RID: 63 RVA: 0x000201A0 File Offset: 0x0001E3A0
	public static method __m2mep@??$addressof@PEAD@std@@$$FYAPEAPEADAEAPEAD@Z;

	// Token: 0x04000040 RID: 64 RVA: 0x00020090 File Offset: 0x0001E290
	public static method __m2mep@?_Adjust_manually_vector_aligned@std@@$$FYAXAEAPEAXAEA_K@Z;

	// Token: 0x04000041 RID: 65 RVA: 0x000201D0 File Offset: 0x0001E3D0
	public static method __m2mep@??$_Deallocate@$0BA@$0A@@std@@$$FYAXPEAX_K@Z;

	// Token: 0x04000042 RID: 66 RVA: 0x00020300 File Offset: 0x0001E500
	public static method __m2mep@?deallocate@?$allocator@D@std@@$$FQEAAXQEAD_K@Z;

	// Token: 0x04000043 RID: 67 RVA: 0x00020050 File Offset: 0x0001E250
	public static method __m2mep@?assign@?$char_traits@D@std@@$$FSAXAEADAEBD@Z;

	// Token: 0x04000044 RID: 68 RVA: 0x00020380 File Offset: 0x0001E580
	public static method __m2mep@?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@$$FQEAAXXZ;

	// Token: 0x04000045 RID: 69 RVA: 0x00020410 File Offset: 0x0001E610
	public static method __m2mep@??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@$$FQEAA@XZ;

	// Token: 0x04000046 RID: 70 RVA: 0x00020440 File Offset: 0x0001E640
	public static method __m2mep@??$marshal_as@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PE$AAVString@System@@@interop@msclr@@$$FYM?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBQE$AAVString@System@@@Z;

	// Token: 0x04000047 RID: 71 RVA: 0x00020450 File Offset: 0x0001E650
	public static method __m2mep@??_Gscoped_shm_writer@ipc@@$$FQEAAPEAXI@Z;

	// Token: 0x04000048 RID: 72 RVA: 0x00007308 File Offset: 0x00005F08
	internal static $ArrayType$$$BY0BC@$$CBD ??_C@_0BC@EOODALEL@Unknown?5exception@;

	// Token: 0x04000049 RID: 73 RVA: 0x00020DA0 File Offset: 0x0001EFA0
	internal static $_TypeDescriptor$_extraBytes_27 ??_R0?AVfailure@ios_base@std@@@8;

	// Token: 0x0400004A RID: 74 RVA: 0x00020D00 File Offset: 0x0001EF00
	internal static $_TypeDescriptor$_extraBytes_24 ??_R0?AVruntime_error@std@@@8;

	// Token: 0x0400004B RID: 75 RVA: 0x0001DF88 File Offset: 0x0001CB88
	internal static _s__RTTICompleteObjectLocator2 ??_R4exception@std@@6B@;

	// Token: 0x0400004C RID: 76 RVA: 0x0001E160 File Offset: 0x0001CD60
	internal static $_s__RTTIBaseClassArray$_extraBytes_32 ??_R2system_error@std@@8;

	// Token: 0x0400004D RID: 77 RVA: 0x0001E138 File Offset: 0x0001CD38
	internal static _s__RTTIBaseClassDescriptor ??_R1A@?0A@EA@system_error@std@@8;

	// Token: 0x0400004E RID: 78 RVA: 0x0001E008 File Offset: 0x0001CC08
	internal static _s__RTTICompleteObjectLocator2 ??_R4runtime_error@std@@6B@;

	// Token: 0x0400004F RID: 79 RVA: 0x0001E090 File Offset: 0x0001CC90
	internal static _s__RTTICompleteObjectLocator2 ??_R4_System_error@std@@6B@;

	// Token: 0x04000050 RID: 80 RVA: 0x0001E0B8 File Offset: 0x0001CCB8
	internal static _s__RTTIBaseClassDescriptor ??_R1A@?0A@EA@bad_cast@std@@8;

	// Token: 0x04000051 RID: 81 RVA: 0x0001DFB0 File Offset: 0x0001CBB0
	internal static _s__RTTIBaseClassDescriptor ??_R1A@?0A@EA@runtime_error@std@@8;

	// Token: 0x04000052 RID: 82 RVA: 0x0001E058 File Offset: 0x0001CC58
	internal static $_s__RTTIBaseClassArray$_extraBytes_24 ??_R2_System_error@std@@8;

	// Token: 0x04000053 RID: 83 RVA: 0x00020D78 File Offset: 0x0001EF78
	internal static $_TypeDescriptor$_extraBytes_23 ??_R0?AVsystem_error@std@@@8;

	// Token: 0x04000054 RID: 84 RVA: 0x0001DF38 File Offset: 0x0001CB38
	internal static _s__RTTIBaseClassDescriptor ??_R1A@?0A@EA@exception@std@@8;

	// Token: 0x04000055 RID: 85 RVA: 0x0001E1A0 File Offset: 0x0001CDA0
	internal static _s__RTTICompleteObjectLocator2 ??_R4system_error@std@@6B@;

	// Token: 0x04000056 RID: 86 RVA: 0x0001E078 File Offset: 0x0001CC78
	internal static _s__RTTIClassHierarchyDescriptor ??_R3_System_error@std@@8;

	// Token: 0x04000057 RID: 87 RVA: 0x0001E0E0 File Offset: 0x0001CCE0
	internal static $_s__RTTIBaseClassArray$_extraBytes_16 ??_R2bad_cast@std@@8;

	// Token: 0x04000058 RID: 88 RVA: 0x0001DF60 File Offset: 0x0001CB60
	internal static $_s__RTTIBaseClassArray$_extraBytes_8 ??_R2exception@std@@8;

	// Token: 0x04000059 RID: 89 RVA: 0x0001E238 File Offset: 0x0001CE38
	internal static _s__RTTICompleteObjectLocator2 ??_R4failure@ios_base@std@@6B@;

	// Token: 0x0400005A RID: 90 RVA: 0x00020540 File Offset: 0x0001E740
	internal static $ArrayType$$$BY02Q6AXXZ ??_7bad_cast@std@@6B@;

	// Token: 0x0400005B RID: 91 RVA: 0x00020D50 File Offset: 0x0001EF50
	internal static $_TypeDescriptor$_extraBytes_19 ??_R0?AVbad_cast@std@@@8;

	// Token: 0x0400005C RID: 92 RVA: 0x0001E1F0 File Offset: 0x0001CDF0
	internal static $_s__RTTIBaseClassArray$_extraBytes_40 ??_R2failure@ios_base@std@@8;

	// Token: 0x0400005D RID: 93 RVA: 0x0001E220 File Offset: 0x0001CE20
	internal static _s__RTTIClassHierarchyDescriptor ??_R3failure@ios_base@std@@8;

	// Token: 0x0400005E RID: 94 RVA: 0x00020468 File Offset: 0x0001E668
	internal static $ArrayType$$$BY02Q6AXXZ ??_7exception@std@@6B@;

	// Token: 0x0400005F RID: 95 RVA: 0x0001DF70 File Offset: 0x0001CB70
	internal static _s__RTTIClassHierarchyDescriptor ??_R3exception@std@@8;

	// Token: 0x04000060 RID: 96 RVA: 0x000204D0 File Offset: 0x0001E6D0
	internal static $ArrayType$$$BY02Q6AXXZ ??_7runtime_error@std@@6B@;

	// Token: 0x04000061 RID: 97 RVA: 0x00020508 File Offset: 0x0001E708
	internal static $ArrayType$$$BY02Q6AXXZ ??_7_System_error@std@@6B@;

	// Token: 0x04000062 RID: 98 RVA: 0x0001E1C8 File Offset: 0x0001CDC8
	internal static _s__RTTIBaseClassDescriptor ??_R1A@?0A@EA@failure@ios_base@std@@8;

	// Token: 0x04000063 RID: 99 RVA: 0x0001E030 File Offset: 0x0001CC30
	internal static _s__RTTIBaseClassDescriptor ??_R1A@?0A@EA@_System_error@std@@8;

	// Token: 0x04000064 RID: 100 RVA: 0x0001E0F8 File Offset: 0x0001CCF8
	internal static _s__RTTIClassHierarchyDescriptor ??_R3bad_cast@std@@8;

	// Token: 0x04000065 RID: 101 RVA: 0x0001E110 File Offset: 0x0001CD10
	internal static _s__RTTICompleteObjectLocator2 ??_R4bad_cast@std@@6B@;

	// Token: 0x04000066 RID: 102 RVA: 0x00020E50 File Offset: 0x0001F050
	internal static int __@@_PchSym_@00@UxPdliphkzxvUxorvmgRozfmxsviUozfmxsviUozfmxsvirkxnzmztvwUcGEUivovzhvUhgwzucOlyq@4B2008FD98C1DD4;

	// Token: 0x04000067 RID: 103 RVA: 0x0001DFD8 File Offset: 0x0001CBD8
	internal static $_s__RTTIBaseClassArray$_extraBytes_16 ??_R2runtime_error@std@@8;

	// Token: 0x04000068 RID: 104 RVA: 0x00020D28 File Offset: 0x0001EF28
	internal static $_TypeDescriptor$_extraBytes_24 ??_R0?AV_System_error@std@@@8;

	// Token: 0x04000069 RID: 105 RVA: 0x0001E188 File Offset: 0x0001CD88
	internal static _s__RTTIClassHierarchyDescriptor ??_R3system_error@std@@8;

	// Token: 0x0400006A RID: 106 RVA: 0x00020CD8 File Offset: 0x0001EED8
	internal static $_TypeDescriptor$_extraBytes_20 ??_R0?AVexception@std@@@8;

	// Token: 0x0400006B RID: 107 RVA: 0x00020568 File Offset: 0x0001E768
	internal static $ArrayType$$$BY02Q6AXXZ ??_7system_error@std@@6B@;

	// Token: 0x0400006C RID: 108 RVA: 0x0001DFF0 File Offset: 0x0001CBF0
	internal static _s__RTTIClassHierarchyDescriptor ??_R3runtime_error@std@@8;

	// Token: 0x0400006D RID: 109 RVA: 0x000205A0 File Offset: 0x0001E7A0
	internal static $ArrayType$$$BY02Q6AXXZ ??_7failure@ios_base@std@@6B@;

	// Token: 0x0400006E RID: 110 RVA: 0x00020478 File Offset: 0x0001E678
	public static method __m2mep@??0exception@std@@$$FQEAA@AEBV01@@Z;

	// Token: 0x0400006F RID: 111 RVA: 0x00020610 File Offset: 0x0001E810
	public static method __m2mep@??1exception@std@@$$FUEAA@XZ;

	// Token: 0x04000070 RID: 112 RVA: 0x00020600 File Offset: 0x0001E800
	public static method __m2mep@?what@exception@std@@$$FUEBAPEBDXZ;

	// Token: 0x04000071 RID: 113 RVA: 0x000205F0 File Offset: 0x0001E7F0
	public static method __m2mep@??_Eexception@std@@$$FUEAAPEAXI@Z;

	// Token: 0x04000072 RID: 114 RVA: 0x00020620 File Offset: 0x0001E820
	public static method __m2mep@??1exception_ptr@std@@$$FQEAA@XZ;

	// Token: 0x04000073 RID: 115 RVA: 0x00020488 File Offset: 0x0001E688
	public static method __m2mep@??0exception_ptr@std@@$$FQEAA@AEBV01@@Z;

	// Token: 0x04000074 RID: 116 RVA: 0x00020498 File Offset: 0x0001E698
	public static method __m2mep@?<MarshalCopy>@exception_ptr@std@@$$FSMXPEAV12@0@Z;

	// Token: 0x04000075 RID: 117 RVA: 0x000204A8 File Offset: 0x0001E6A8
	public static method __m2mep@?<MarshalDestroy>@exception_ptr@std@@$$FSMXPEAV12@@Z;

	// Token: 0x04000076 RID: 118 RVA: 0x000204B8 File Offset: 0x0001E6B8
	public static method __m2mep@??0_Container_base12@std@@$$FQEAA@AEBU01@@Z;

	// Token: 0x04000077 RID: 119 RVA: 0x00020588 File Offset: 0x0001E788
	public static method __m2mep@??0_Iterator_base12@std@@$$FQEAA@AEBU01@@Z;

	// Token: 0x04000078 RID: 120 RVA: 0x000206F0 File Offset: 0x0001E8F0
	public static method __m2mep@??4_Iterator_base12@std@@$$FQEAAAEAU01@AEBU01@@Z;

	// Token: 0x04000079 RID: 121 RVA: 0x00020630 File Offset: 0x0001E830
	public static method __m2mep@?_Adopt@_Iterator_base12@std@@$$FQEAAXPEBU_Container_base12@2@@Z;

	// Token: 0x0400007A RID: 122 RVA: 0x00020650 File Offset: 0x0001E850
	public static method __m2mep@??_Eruntime_error@std@@$$FUEAAPEAXI@Z;

	// Token: 0x0400007B RID: 123 RVA: 0x00020640 File Offset: 0x0001E840
	public static method __m2mep@??1runtime_error@std@@$$FUEAA@XZ;

	// Token: 0x0400007C RID: 124 RVA: 0x000206E0 File Offset: 0x0001E8E0
	public static method __m2mep@??_Ebad_cast@std@@$$FUEAAPEAXI@Z;

	// Token: 0x0400007D RID: 125 RVA: 0x00020740 File Offset: 0x0001E940
	public static method __m2mep@??1bad_cast@std@@$$FUEAA@XZ;

	// Token: 0x0400007E RID: 126 RVA: 0x000204E0 File Offset: 0x0001E6E0
	public static method __m2mep@??0runtime_error@std@@$$FQEAA@AEBV01@@Z;

	// Token: 0x0400007F RID: 127 RVA: 0x000204F0 File Offset: 0x0001E6F0
	public static method __m2mep@??0locale@std@@$$FQEAA@AEBV01@@Z;

	// Token: 0x04000080 RID: 128 RVA: 0x000205D0 File Offset: 0x0001E7D0
	public static method __m2mep@?<MarshalCopy>@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@$$FSMXPEAV12@0@Z;

	// Token: 0x04000081 RID: 129 RVA: 0x000205E0 File Offset: 0x0001E7E0
	public static method __m2mep@?<MarshalDestroy>@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@$$FSMXPEAV12@@Z;

	// Token: 0x04000082 RID: 130 RVA: 0x00020680 File Offset: 0x0001E880
	public static method __m2mep@??_E_System_error@std@@$$FUEAAPEAXI@Z;

	// Token: 0x04000083 RID: 131 RVA: 0x00020660 File Offset: 0x0001E860
	public static method __m2mep@??1_System_error@std@@$$FUEAA@XZ;

	// Token: 0x04000084 RID: 132 RVA: 0x00020700 File Offset: 0x0001E900
	public static method __m2mep@??_Esystem_error@std@@$$FUEAAPEAXI@Z;

	// Token: 0x04000085 RID: 133 RVA: 0x00020670 File Offset: 0x0001E870
	public static method __m2mep@??1system_error@std@@$$FUEAA@XZ;

	// Token: 0x04000086 RID: 134 RVA: 0x00020720 File Offset: 0x0001E920
	public static method __m2mep@??_Efailure@ios_base@std@@$$FUEAAPEAXI@Z;

	// Token: 0x04000087 RID: 135 RVA: 0x00020750 File Offset: 0x0001E950
	public static method __m2mep@??1failure@ios_base@std@@$$FUEAA@XZ;

	// Token: 0x04000088 RID: 136 RVA: 0x000205B0 File Offset: 0x0001E7B0
	public static method __m2mep@??0failure@ios_base@std@@$$FQEAA@AEBV012@@Z;

	// Token: 0x04000089 RID: 137 RVA: 0x00020578 File Offset: 0x0001E778
	public static method __m2mep@??0system_error@std@@$$FQEAA@AEBV01@@Z;

	// Token: 0x0400008A RID: 138 RVA: 0x00020518 File Offset: 0x0001E718
	public static method __m2mep@??0_System_error@std@@$$FQEAA@AEBV01@@Z;

	// Token: 0x0400008B RID: 139 RVA: 0x00020528 File Offset: 0x0001E728
	public static method __m2mep@??0?$tuple@$$V@std@@$$FQEAA@AEBV01@@Z;

	// Token: 0x0400008C RID: 140 RVA: 0x00020690 File Offset: 0x0001E890
	public static method __m2mep@?release@?$char_buffer@D@details@interop@msclr@@$$FQEAAPEADXZ;

	// Token: 0x0400008D RID: 141 RVA: 0x000206A0 File Offset: 0x0001E8A0
	public static method __m2mep@?get@?$char_buffer@D@details@interop@msclr@@$$FQEBAPEADXZ;

	// Token: 0x0400008E RID: 142 RVA: 0x000206B0 File Offset: 0x0001E8B0
	public static method __m2mep@??1?$char_buffer@D@details@interop@msclr@@$$FQEAA@XZ;

	// Token: 0x0400008F RID: 143 RVA: 0x000206C0 File Offset: 0x0001E8C0
	public static method __m2mep@??0?$char_buffer@D@details@interop@msclr@@$$FQEAA@_K@Z;

	// Token: 0x04000090 RID: 144 RVA: 0x000205C0 File Offset: 0x0001E7C0
	public static method __m2mep@??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@$$FQEAA@AEBV01@@Z;

	// Token: 0x04000091 RID: 145 RVA: 0x00020710 File Offset: 0x0001E910
	public static method __m2mep@?_Myptr@?$_String_val@U?$_Simple_types@D@std@@@std@@$$FQEBAPEBDXZ;

	// Token: 0x04000092 RID: 146 RVA: 0x000206D0 File Offset: 0x0001E8D0
	public static method __m2mep@?select_on_container_copy_construction@?$_Default_allocator_traits@V?$allocator@D@std@@@std@@$$FSA?AV?$allocator@D@2@AEBV32@@Z;

	// Token: 0x04000093 RID: 147 RVA: 0x00020730 File Offset: 0x0001E930
	public static method __m2mep@?_Construct_lv_contents@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@$$FQEAAXAEBV12@@Z;

	// Token: 0x04000094 RID: 148 RVA: 0x00020550 File Offset: 0x0001E750
	public static method __m2mep@??0bad_cast@std@@$$FQEAA@AEBV01@@Z;

	// Token: 0x04000095 RID: 149 RVA: 0x00020760 File Offset: 0x0001E960
	public static method __m2mep@?GetUnicodeStringSize@details@interop@msclr@@$$FYA_KPEBD_K@Z;

	// Token: 0x04000096 RID: 150 RVA: 0x000207A0 File Offset: 0x0001E9A0
	public static method __m2mep@??0?$char_buffer@_W@details@interop@msclr@@$$FQEAA@_K@Z;

	// Token: 0x04000097 RID: 151 RVA: 0x00020790 File Offset: 0x0001E990
	public static method __m2mep@??1?$char_buffer@_W@details@interop@msclr@@$$FQEAA@XZ;

	// Token: 0x04000098 RID: 152 RVA: 0x00020770 File Offset: 0x0001E970
	public static method __m2mep@?WriteUnicodeString@details@interop@msclr@@$$FYAXPEA_W_KPEBD1@Z;

	// Token: 0x04000099 RID: 153 RVA: 0x00020780 File Offset: 0x0001E980
	public static method __m2mep@?get@?$char_buffer@_W@details@interop@msclr@@$$FQEBAPEA_WXZ;

	// Token: 0x0400009A RID: 154 RVA: 0x000207B0 File Offset: 0x0001E9B0
	public static method __m2mep@?InternalAnsiToStringHelper@details@interop@msclr@@$$FYMPE$AAVString@System@@PEBD_K@Z;

	// Token: 0x0400009B RID: 155 RVA: 0x000207C0 File Offset: 0x0001E9C0
	public static method __m2mep@?length@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@$$FQEBA_KXZ;

	// Token: 0x0400009C RID: 156 RVA: 0x000207D0 File Offset: 0x0001E9D0
	public static method __m2mep@?c_str@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@$$FQEBAPEBDXZ;

	// Token: 0x0400009D RID: 157 RVA: 0x000207E0 File Offset: 0x0001E9E0
	public static method __m2mep@??$marshal_as@PE$AAVString@System@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@interop@msclr@@$$FYMPE$AAVString@System@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z;

	// Token: 0x0400009E RID: 158 RVA: 0x000073A0 File Offset: 0x00005FA0
	internal static __s_GUID _GUID_cb2f6723_ab3a_11d2_9c40_00c04fa30a3e;

	// Token: 0x0400009F RID: 159 RVA: 0x00007390 File Offset: 0x00005F90
	internal static __s_GUID _GUID_cb2f6722_ab3a_11d2_9c40_00c04fa30a3e;

	// Token: 0x040000A0 RID: 160
	[FixedAddressValueType]
	internal static int ?Uninitialized@CurrentDomain@<CrtImplementationDetails>@@$$Q2HA;

	// Token: 0x040000A1 RID: 161 RVA: 0x00007250 File Offset: 0x00005E50
	internal static method ?Uninitialized$initializer$@CurrentDomain@<CrtImplementationDetails>@@$$Q2P6MXXZEA;

	// Token: 0x040000A2 RID: 162
	[FixedAddressValueType]
	internal static Progress ?InitializedNative@CurrentDomain@<CrtImplementationDetails>@@$$Q2W4Progress@2@A;

	// Token: 0x040000A3 RID: 163 RVA: 0x00007268 File Offset: 0x00005E68
	internal static method ?InitializedNative$initializer$@CurrentDomain@<CrtImplementationDetails>@@$$Q2P6MXXZEA;

	// Token: 0x040000A4 RID: 164 RVA: 0x000073B0 File Offset: 0x00005FB0
	internal static __s_GUID _GUID_90f1a06c_7712_4762_86b5_7a5eba6bdb02;

	// Token: 0x040000A5 RID: 165 RVA: 0x000073C0 File Offset: 0x00005FC0
	internal static __s_GUID _GUID_90f1a06e_7712_4762_86b5_7a5eba6bdb02;

	// Token: 0x040000A6 RID: 166
	[FixedAddressValueType]
	internal static Progress ?InitializedPerAppDomain@CurrentDomain@<CrtImplementationDetails>@@$$Q2W4Progress@2@A;

	// Token: 0x040000A7 RID: 167 RVA: 0x00020ED0 File Offset: 0x0001F0D0
	internal static bool ?Entered@DefaultDomain@<CrtImplementationDetails>@@2_NA;

	// Token: 0x040000A8 RID: 168 RVA: 0x00020824 File Offset: 0x0001EA24
	internal static TriBool ?hasNative@DefaultDomain@<CrtImplementationDetails>@@0W4TriBool@2@A;

	// Token: 0x040000A9 RID: 169 RVA: 0x00020ED3 File Offset: 0x0001F0D3
	internal static bool ?InitializedPerProcess@DefaultDomain@<CrtImplementationDetails>@@2_NA;

	// Token: 0x040000AA RID: 170 RVA: 0x00020ED4 File Offset: 0x0001F0D4
	internal static int ?Count@AllDomains@<CrtImplementationDetails>@@2HA;

	// Token: 0x040000AB RID: 171
	[FixedAddressValueType]
	internal static int ?Initialized@CurrentDomain@<CrtImplementationDetails>@@$$Q2HA;

	// Token: 0x040000AC RID: 172 RVA: 0x00020ED2 File Offset: 0x0001F0D2
	internal static bool ?InitializedNativeFromCCTOR@DefaultDomain@<CrtImplementationDetails>@@2_NA;

	// Token: 0x040000AD RID: 173
	[FixedAddressValueType]
	internal static bool ?IsDefaultDomain@CurrentDomain@<CrtImplementationDetails>@@$$Q2_NA;

	// Token: 0x040000AE RID: 174
	[FixedAddressValueType]
	internal static Progress ?InitializedVtables@CurrentDomain@<CrtImplementationDetails>@@$$Q2W4Progress@2@A;

	// Token: 0x040000AF RID: 175 RVA: 0x00020ED1 File Offset: 0x0001F0D1
	internal static bool ?InitializedNative@DefaultDomain@<CrtImplementationDetails>@@2_NA;

	// Token: 0x040000B0 RID: 176
	[FixedAddressValueType]
	internal static Progress ?InitializedPerProcess@CurrentDomain@<CrtImplementationDetails>@@$$Q2W4Progress@2@A;

	// Token: 0x040000B1 RID: 177 RVA: 0x00020820 File Offset: 0x0001EA20
	internal static TriBool ?hasPerProcess@DefaultDomain@<CrtImplementationDetails>@@0W4TriBool@2@A;

	// Token: 0x040000B2 RID: 178 RVA: 0x00007290 File Offset: 0x00005E90
	internal static $ArrayType$$$BY00Q6MPEBXXZ __xc_mp_z;

	// Token: 0x040000B3 RID: 179 RVA: 0x000072A0 File Offset: 0x00005EA0
	internal static $ArrayType$$$BY00Q6MPEBXXZ __xi_vt_z;

	// Token: 0x040000B4 RID: 180 RVA: 0x00007270 File Offset: 0x00005E70
	internal static method ?InitializedPerProcess$initializer$@CurrentDomain@<CrtImplementationDetails>@@$$Q2P6MXXZEA;

	// Token: 0x040000B5 RID: 181 RVA: 0x00007240 File Offset: 0x00005E40
	internal static $ArrayType$$$BY00Q6MPEBXXZ __xc_ma_a;

	// Token: 0x040000B6 RID: 182 RVA: 0x00007280 File Offset: 0x00005E80
	internal static $ArrayType$$$BY00Q6MPEBXXZ __xc_ma_z;

	// Token: 0x040000B7 RID: 183 RVA: 0x00007278 File Offset: 0x00005E78
	internal static method ?InitializedPerAppDomain$initializer$@CurrentDomain@<CrtImplementationDetails>@@$$Q2P6MXXZEA;

	// Token: 0x040000B8 RID: 184 RVA: 0x00007298 File Offset: 0x00005E98
	internal static $ArrayType$$$BY00Q6MPEBXXZ __xi_vt_a;

	// Token: 0x040000B9 RID: 185 RVA: 0x00007248 File Offset: 0x00005E48
	internal static method ?Initialized$initializer$@CurrentDomain@<CrtImplementationDetails>@@$$Q2P6MXXZEA;

	// Token: 0x040000BA RID: 186 RVA: 0x00007288 File Offset: 0x00005E88
	internal static $ArrayType$$$BY00Q6MPEBXXZ __xc_mp_a;

	// Token: 0x040000BB RID: 187 RVA: 0x00007260 File Offset: 0x00005E60
	internal static method ?InitializedVtables$initializer$@CurrentDomain@<CrtImplementationDetails>@@$$Q2P6MXXZEA;

	// Token: 0x040000BC RID: 188 RVA: 0x00007258 File Offset: 0x00005E58
	internal static method ?IsDefaultDomain$initializer$@CurrentDomain@<CrtImplementationDetails>@@$$Q2P6MXXZEA;

	// Token: 0x040000BD RID: 189 RVA: 0x000209A8 File Offset: 0x0001EBA8
	public static method __m2mep@?ThrowNestedModuleLoadException@<CrtImplementationDetails>@@$$FYMXPE$AAVException@System@@0@Z;

	// Token: 0x040000BE RID: 190 RVA: 0x00020838 File Offset: 0x0001EA38
	public static method __m2mep@?ThrowModuleLoadException@<CrtImplementationDetails>@@$$FYMXPE$AAVString@System@@@Z;

	// Token: 0x040000BF RID: 191 RVA: 0x00020848 File Offset: 0x0001EA48
	public static method __m2mep@?ThrowModuleLoadException@<CrtImplementationDetails>@@$$FYMXPE$AAVString@System@@PE$AAVException@3@@Z;

	// Token: 0x040000C0 RID: 192 RVA: 0x00020858 File Offset: 0x0001EA58
	public static method __m2mep@?RegisterModuleUninitializer@<CrtImplementationDetails>@@$$FYMXPE$AAVEventHandler@System@@@Z;

	// Token: 0x040000C1 RID: 193 RVA: 0x00020868 File Offset: 0x0001EA68
	public static method __m2mep@?FromGUID@<CrtImplementationDetails>@@$$FYM?AVGuid@System@@AEBU_GUID@@@Z;

	// Token: 0x040000C2 RID: 194 RVA: 0x00020878 File Offset: 0x0001EA78
	public static method __m2mep@?__get_default_appdomain@@$$FYAJPEAPEAUIUnknown@@@Z;

	// Token: 0x040000C3 RID: 195 RVA: 0x00020888 File Offset: 0x0001EA88
	public static method __m2mep@?__release_appdomain@@$$FYAXPEAUIUnknown@@@Z;

	// Token: 0x040000C4 RID: 196 RVA: 0x00020898 File Offset: 0x0001EA98
	public static method __m2mep@?GetDefaultDomain@<CrtImplementationDetails>@@$$FYMPE$AAVAppDomain@System@@XZ;

	// Token: 0x040000C5 RID: 197 RVA: 0x000208A8 File Offset: 0x0001EAA8
	public static method __m2mep@?DoCallBackInDefaultDomain@<CrtImplementationDetails>@@$$FYAXP6AJPEAX@Z0@Z;

	// Token: 0x040000C6 RID: 198 RVA: 0x000208B8 File Offset: 0x0001EAB8
	public static method __m2mep@?__scrt_is_safe_for_managed_code@@$$FYA_NXZ;

	// Token: 0x040000C7 RID: 199 RVA: 0x000208C8 File Offset: 0x0001EAC8
	public static method __m2mep@?DoNothing@DefaultDomain@<CrtImplementationDetails>@@$$FCAJPEAX@Z;

	// Token: 0x040000C8 RID: 200 RVA: 0x000208D8 File Offset: 0x0001EAD8
	public static method __m2mep@?HasPerProcess@DefaultDomain@<CrtImplementationDetails>@@$$FSA_NXZ;

	// Token: 0x040000C9 RID: 201 RVA: 0x000208E8 File Offset: 0x0001EAE8
	public static method __m2mep@?HasNative@DefaultDomain@<CrtImplementationDetails>@@$$FSA_NXZ;

	// Token: 0x040000CA RID: 202 RVA: 0x000208F8 File Offset: 0x0001EAF8
	public static method __m2mep@?NeedsInitialization@DefaultDomain@<CrtImplementationDetails>@@$$FSA_NXZ;

	// Token: 0x040000CB RID: 203 RVA: 0x00020908 File Offset: 0x0001EB08
	public static method __m2mep@?NeedsUninitialization@DefaultDomain@<CrtImplementationDetails>@@$$FSA_NXZ;

	// Token: 0x040000CC RID: 204 RVA: 0x00020918 File Offset: 0x0001EB18
	public static method __m2mep@?Initialize@DefaultDomain@<CrtImplementationDetails>@@$$FSAXXZ;

	// Token: 0x040000CD RID: 205 RVA: 0x000209B8 File Offset: 0x0001EBB8
	public static method __m2mep@?InitializeVtables@LanguageSupport@<CrtImplementationDetails>@@$$FAEAAXXZ;

	// Token: 0x040000CE RID: 206 RVA: 0x000209C8 File Offset: 0x0001EBC8
	public static method __m2mep@?InitializeDefaultAppDomain@LanguageSupport@<CrtImplementationDetails>@@$$FAEAAXXZ;

	// Token: 0x040000CF RID: 207 RVA: 0x000209D8 File Offset: 0x0001EBD8
	public static method __m2mep@?InitializeNative@LanguageSupport@<CrtImplementationDetails>@@$$FAEAAXXZ;

	// Token: 0x040000D0 RID: 208 RVA: 0x000209E8 File Offset: 0x0001EBE8
	public static method __m2mep@?InitializePerProcess@LanguageSupport@<CrtImplementationDetails>@@$$FAEAAXXZ;

	// Token: 0x040000D1 RID: 209 RVA: 0x000209F8 File Offset: 0x0001EBF8
	public static method __m2mep@?InitializePerAppDomain@LanguageSupport@<CrtImplementationDetails>@@$$FAEAAXXZ;

	// Token: 0x040000D2 RID: 210 RVA: 0x00020A08 File Offset: 0x0001EC08
	public static method __m2mep@?InitializeUninitializer@LanguageSupport@<CrtImplementationDetails>@@$$FAEAAXXZ;

	// Token: 0x040000D3 RID: 211 RVA: 0x00020A18 File Offset: 0x0001EC18
	public static method __m2mep@?_Initialize@LanguageSupport@<CrtImplementationDetails>@@$$FAEAAXXZ;

	// Token: 0x040000D4 RID: 212 RVA: 0x00020928 File Offset: 0x0001EB28
	public static method __m2mep@?UninitializeAppDomain@LanguageSupport@<CrtImplementationDetails>@@$$FCAXXZ;

	// Token: 0x040000D5 RID: 213 RVA: 0x00020938 File Offset: 0x0001EB38
	public static method __m2mep@?_UninitializeDefaultDomain@LanguageSupport@<CrtImplementationDetails>@@$$FCAJPEAX@Z;

	// Token: 0x040000D6 RID: 214 RVA: 0x00020948 File Offset: 0x0001EB48
	public static method __m2mep@?UninitializeDefaultDomain@LanguageSupport@<CrtImplementationDetails>@@$$FCAXXZ;

	// Token: 0x040000D7 RID: 215 RVA: 0x00020958 File Offset: 0x0001EB58
	public static method __m2mep@?DomainUnload@LanguageSupport@<CrtImplementationDetails>@@$$FCMXPE$AAVObject@System@@PE$AAVEventArgs@4@@Z;

	// Token: 0x040000D8 RID: 216 RVA: 0x00020A28 File Offset: 0x0001EC28
	public static method __m2mep@?Cleanup@LanguageSupport@<CrtImplementationDetails>@@$$FAEAMXPE$AAVException@System@@@Z;

	// Token: 0x040000D9 RID: 217 RVA: 0x00020A38 File Offset: 0x0001EC38
	public static method __m2mep@??0LanguageSupport@<CrtImplementationDetails>@@$$FQEAA@XZ;

	// Token: 0x040000DA RID: 218 RVA: 0x00020A48 File Offset: 0x0001EC48
	public static method __m2mep@??1LanguageSupport@<CrtImplementationDetails>@@$$FQEAA@XZ;

	// Token: 0x040000DB RID: 219 RVA: 0x00020A58 File Offset: 0x0001EC58
	public static method __m2mep@?Initialize@LanguageSupport@<CrtImplementationDetails>@@$$FQEAAXXZ;

	// Token: 0x040000DC RID: 220 RVA: 0x00020828 File Offset: 0x0001EA28
	public static method cctor@@$$FYMXXZ;

	// Token: 0x040000DD RID: 221 RVA: 0x00020968 File Offset: 0x0001EB68
	public static method __m2mep@??B?$gcroot@PE$AAVString@System@@@@$$FQEBMPE$AAVString@System@@XZ;

	// Token: 0x040000DE RID: 222 RVA: 0x00020978 File Offset: 0x0001EB78
	public static method __m2mep@??4?$gcroot@PE$AAVString@System@@@@$$FQEAMAEAU0@PE$AAVString@System@@@Z;

	// Token: 0x040000DF RID: 223 RVA: 0x00020988 File Offset: 0x0001EB88
	public static method __m2mep@??1?$gcroot@PE$AAVString@System@@@@$$FQEAA@XZ;

	// Token: 0x040000E0 RID: 224 RVA: 0x00020998 File Offset: 0x0001EB98
	public static method __m2mep@??0?$gcroot@PE$AAVString@System@@@@$$FQEAA@XZ;

	// Token: 0x040000E1 RID: 225 RVA: 0x000073D0 File Offset: 0x00005FD0
	public unsafe static int** __unep@?DoNothing@DefaultDomain@<CrtImplementationDetails>@@$$FCAJPEAX@Z;

	// Token: 0x040000E2 RID: 226 RVA: 0x000073D8 File Offset: 0x00005FD8
	public unsafe static int** __unep@?_UninitializeDefaultDomain@LanguageSupport@<CrtImplementationDetails>@@$$FCAJPEAX@Z;

	// Token: 0x040000E3 RID: 227 RVA: 0x00020AA0 File Offset: 0x0001ECA0
	public static method __m2mep@?___CxxCallUnwindDtor@@$$J0YMXP6MXPEAX@Z0@Z;

	// Token: 0x040000E4 RID: 228 RVA: 0x00020AB0 File Offset: 0x0001ECB0
	public static method __m2mep@?___CxxCallUnwindDelDtor@@$$J0YMXP6MXPEAX@Z0@Z;

	// Token: 0x040000E5 RID: 229 RVA: 0x00020AC0 File Offset: 0x0001ECC0
	public static method __m2mep@?___CxxCallUnwindVecDtor@@$$J0YMXP6MXPEAX_KHP6MX0@Z@Z01H2@Z;

	// Token: 0x040000E6 RID: 230 RVA: 0x00020AE0 File Offset: 0x0001ECE0
	public static method __m2mep@??_M@$$FYMXPEAX_K1P6MX0@Z@Z;

	// Token: 0x040000E7 RID: 231 RVA: 0x00020B00 File Offset: 0x0001ED00
	public static method __m2mep@?ArrayUnwindFilter@?A0x94e83ccb@@$$FYAHPEAU_EXCEPTION_POINTERS@@@Z;

	// Token: 0x040000E8 RID: 232 RVA: 0x00020AD0 File Offset: 0x0001ECD0
	public static method __m2mep@?__ArrayUnwind@@$$FYMXPEAX_K1P6MX0@Z@Z;

	// Token: 0x040000E9 RID: 233 RVA: 0x00020AF0 File Offset: 0x0001ECF0
	public static method __m2mep@??_M@$$FYMXPEAX_KHP6MX0@Z@Z;

	// Token: 0x040000EA RID: 234 RVA: 0x00021040 File Offset: 0x00000000
	internal unsafe static method* __onexitbegin_m;

	// Token: 0x040000EB RID: 235 RVA: 0x00021038 File Offset: 0x00000000
	internal static ulong __exit_list_size;

	// Token: 0x040000EC RID: 236
	[FixedAddressValueType]
	internal unsafe static method* __onexitend_app_domain;

	// Token: 0x040000ED RID: 237
	[FixedAddressValueType]
	internal unsafe static void* ?_lock@AtExitLock@<CrtImplementationDetails>@@$$Q0PEAXEA;

	// Token: 0x040000EE RID: 238
	[FixedAddressValueType]
	internal static int ?_ref_count@AtExitLock@<CrtImplementationDetails>@@$$Q0HA;

	// Token: 0x040000EF RID: 239 RVA: 0x00021048 File Offset: 0x00000000
	internal unsafe static method* __onexitend_m;

	// Token: 0x040000F0 RID: 240
	[FixedAddressValueType]
	internal static ulong __exit_list_size_app_domain;

	// Token: 0x040000F1 RID: 241
	[FixedAddressValueType]
	internal unsafe static method* __onexitbegin_app_domain;

	// Token: 0x040000F2 RID: 242 RVA: 0x00020BA0 File Offset: 0x0001EDA0
	public static method __m2mep@?_handle@AtExitLock@<CrtImplementationDetails>@@$$FCMPE$AA__ZVGCHandle@InteropServices@Runtime@System@@XZ;

	// Token: 0x040000F3 RID: 243 RVA: 0x00020C50 File Offset: 0x0001EE50
	public static method __m2mep@?_lock_Construct@AtExitLock@<CrtImplementationDetails>@@$$FCMXPE$AAVObject@System@@@Z;

	// Token: 0x040000F4 RID: 244 RVA: 0x00020BB0 File Offset: 0x0001EDB0
	public static method __m2mep@?_lock_Set@AtExitLock@<CrtImplementationDetails>@@$$FCMXPE$AAVObject@System@@@Z;

	// Token: 0x040000F5 RID: 245 RVA: 0x00020BC0 File Offset: 0x0001EDC0
	public static method __m2mep@?_lock_Get@AtExitLock@<CrtImplementationDetails>@@$$FCMPE$AAVObject@System@@XZ;

	// Token: 0x040000F6 RID: 246 RVA: 0x00020BD0 File Offset: 0x0001EDD0
	public static method __m2mep@?_lock_Destruct@AtExitLock@<CrtImplementationDetails>@@$$FCAXXZ;

	// Token: 0x040000F7 RID: 247 RVA: 0x00020BE0 File Offset: 0x0001EDE0
	public static method __m2mep@?IsInitialized@AtExitLock@<CrtImplementationDetails>@@$$FSA_NXZ;

	// Token: 0x040000F8 RID: 248 RVA: 0x00020C60 File Offset: 0x0001EE60
	public static method __m2mep@?AddRef@AtExitLock@<CrtImplementationDetails>@@$$FSAXXZ;

	// Token: 0x040000F9 RID: 249 RVA: 0x00020BF0 File Offset: 0x0001EDF0
	public static method __m2mep@?RemoveRef@AtExitLock@<CrtImplementationDetails>@@$$FSAXXZ;

	// Token: 0x040000FA RID: 250 RVA: 0x00020C00 File Offset: 0x0001EE00
	public static method __m2mep@?Enter@AtExitLock@<CrtImplementationDetails>@@$$FSAXXZ;

	// Token: 0x040000FB RID: 251 RVA: 0x00020C10 File Offset: 0x0001EE10
	public static method __m2mep@?Exit@AtExitLock@<CrtImplementationDetails>@@$$FSAXXZ;

	// Token: 0x040000FC RID: 252 RVA: 0x00020C20 File Offset: 0x0001EE20
	public static method __m2mep@?__global_lock@?A0x5f1aee9f@@$$FYA_NXZ;

	// Token: 0x040000FD RID: 253 RVA: 0x00020C30 File Offset: 0x0001EE30
	public static method __m2mep@?__global_unlock@?A0x5f1aee9f@@$$FYA_NXZ;

	// Token: 0x040000FE RID: 254 RVA: 0x00020C70 File Offset: 0x0001EE70
	public static method __m2mep@?__alloc_global_lock@?A0x5f1aee9f@@$$FYA_NXZ;

	// Token: 0x040000FF RID: 255 RVA: 0x00020C40 File Offset: 0x0001EE40
	public static method __m2mep@?__dealloc_global_lock@?A0x5f1aee9f@@$$FYAXXZ;

	// Token: 0x04000100 RID: 256 RVA: 0x00020B10 File Offset: 0x0001ED10
	public static method __m2mep@?_atexit_helper@@$$J0YMHP6MXXZPEA_KPEAPEAP6MXXZ2@Z;

	// Token: 0x04000101 RID: 257 RVA: 0x00020B20 File Offset: 0x0001ED20
	public static method __m2mep@?_exit_callback@@$$J0YMXXZ;

	// Token: 0x04000102 RID: 258 RVA: 0x00020B60 File Offset: 0x0001ED60
	public static method __m2mep@?_initatexit_m@@$$J0YMHXZ;

	// Token: 0x04000103 RID: 259 RVA: 0x00020B70 File Offset: 0x0001ED70
	public static method __m2mep@?_onexit_m@@$$J0YMP6MHXZP6MHXZ@Z;

	// Token: 0x04000104 RID: 260 RVA: 0x00020B30 File Offset: 0x0001ED30
	public static method __m2mep@?_atexit_m@@$$J0YMHP6MXXZ@Z;

	// Token: 0x04000105 RID: 261 RVA: 0x00020B80 File Offset: 0x0001ED80
	public static method __m2mep@?_initatexit_app_domain@@$$J0YMHXZ;

	// Token: 0x04000106 RID: 262 RVA: 0x00020B40 File Offset: 0x0001ED40
	public static method __m2mep@?_app_exit_callback@@$$J0YMXXZ;

	// Token: 0x04000107 RID: 263 RVA: 0x00020B90 File Offset: 0x0001ED90
	public static method __m2mep@?_onexit_m_appdomain@@$$J0YMP6MHXZP6MHXZ@Z;

	// Token: 0x04000108 RID: 264 RVA: 0x00020B50 File Offset: 0x0001ED50
	public static method __m2mep@?_atexit_m_appdomain@@$$J0YMHP6MXXZ@Z;

	// Token: 0x04000109 RID: 265 RVA: 0x00020C80 File Offset: 0x0001EE80
	public static method __m2mep@?_initterm_e@@$$FYMHPEAP6AHXZ0@Z;

	// Token: 0x0400010A RID: 266 RVA: 0x00020C90 File Offset: 0x0001EE90
	public static method __m2mep@?_initterm@@$$FYMXPEAP6AXXZ0@Z;

	// Token: 0x0400010B RID: 267 RVA: 0x00020CB0 File Offset: 0x0001EEB0
	public static method __m2mep@?Handle@ThisModule@<CrtImplementationDetails>@@$$FCM?AVModuleHandle@System@@XZ;

	// Token: 0x0400010C RID: 268 RVA: 0x00020CA0 File Offset: 0x0001EEA0
	public static method __m2mep@?_initterm_m@@$$FYMXPEBQ6MPEBXXZ0@Z;

	// Token: 0x0400010D RID: 269 RVA: 0x00020CC0 File Offset: 0x0001EEC0
	public static method __m2mep@??$ResolveMethod@$$A6MPEBXXZ@ThisModule@<CrtImplementationDetails>@@$$FSMP6MPEBXXZP6MPEBXXZ@Z;

	// Token: 0x0400010E RID: 270 RVA: 0x00007328 File Offset: 0x00005F28
	internal static $ArrayType$$$BY01Q6AXXZ ??_7type_info@@6B@;

	// Token: 0x0400010F RID: 271 RVA: 0x00007218 File Offset: 0x00005E18
	internal static $ArrayType$$$BY0A@P6AHXZ __xi_z;

	// Token: 0x04000110 RID: 272 RVA: 0x00020E80 File Offset: 0x0001F080
	internal static __scrt_native_startup_state __scrt_current_native_startup_state;

	// Token: 0x04000111 RID: 273 RVA: 0x00020E88 File Offset: 0x0001F088
	internal unsafe static void* __scrt_native_startup_lock;

	// Token: 0x04000112 RID: 274 RVA: 0x00007200 File Offset: 0x00005E00
	internal static $ArrayType$$$BY0A@P6AXXZ __xc_a;

	// Token: 0x04000113 RID: 275 RVA: 0x00007210 File Offset: 0x00005E10
	internal static $ArrayType$$$BY0A@P6AHXZ __xi_a;

	// Token: 0x04000114 RID: 276 RVA: 0x000207F0 File Offset: 0x0001E9F0
	internal static uint __scrt_native_dllmain_reason;

	// Token: 0x04000115 RID: 277 RVA: 0x00007208 File Offset: 0x00005E08
	internal static $ArrayType$$$BY0A@P6AXXZ __xc_z;
}

using System;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;

// Token: 0x02000056 RID: 86
[UnsafeValueType]
[NativeCppClass]
[StructLayout(LayoutKind.Sequential, Size = 40)]
internal struct LastErrorType
{
	// Token: 0x06000296 RID: 662 RVA: 0x00013510 File Offset: 0x00012910
	public unsafe static void <MarshalCopy>(LastErrorType* A_0, LastErrorType* A_1)
	{
		try
		{
			*(long*)(A_0 + 16L / (long)sizeof(LastErrorType)) = 0L;
			*(long*)(A_0 + 24L / (long)sizeof(LastErrorType)) = 0L;
		}
		catch
		{
			<Module>.___CxxCallUnwindDtor(ldftn(std._String_val<std::_Simple_types<wchar_t>\u0020>._Bxty.{dtor}), (void*)A_0);
			throw;
		}
		try
		{
			<Module>.std.basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>._Construct_lv_contents(A_0, A_1);
		}
		catch
		{
			<Module>.___CxxCallUnwindDtor(ldftn(std._String_alloc<std::_String_base_types<wchar_t,std::allocator<wchar_t>\u0020>\u0020>.{dtor}), (void*)A_0);
			throw;
		}
		try
		{
			*(int*)(A_0 + 32L / (long)sizeof(LastErrorType)) = *(int*)(A_1 + 32L / (long)sizeof(LastErrorType));
			*(int*)(A_0 + 36L / (long)sizeof(LastErrorType)) = *(int*)(A_1 + 36L / (long)sizeof(LastErrorType));
		}
		catch
		{
			<Module>.___CxxCallUnwindDtor(ldftn(std.basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>.{dtor}), (void*)A_0);
			throw;
		}
	}

	// Token: 0x06000297 RID: 663 RVA: 0x0000FB58 File Offset: 0x0000EF58
	public unsafe static void <MarshalDestroy>(LastErrorType* A_0)
	{
		try
		{
			<Module>.std.basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>._Tidy_deallocate(A_0);
		}
		catch
		{
			<Module>.___CxxCallUnwindDtor(ldftn(std._String_alloc<std::_String_base_types<wchar_t,std::allocator<wchar_t>\u0020>\u0020>.{dtor}), (void*)A_0);
			throw;
		}
	}

	// Token: 0x0400015E RID: 350
	private long <alignment\u0020member>;
}

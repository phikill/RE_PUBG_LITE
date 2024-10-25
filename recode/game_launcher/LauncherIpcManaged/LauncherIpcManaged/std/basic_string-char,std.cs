using System;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;

namespace std
{
	// Token: 0x020000B7 RID: 183
	[UnsafeValueType]
	[NativeCppClass]
	[StructLayout(LayoutKind.Sequential, Size = 32)]
	internal struct basic_string<char,std::char_traits<char>,std::allocator<char>\u0020>
	{
		// Token: 0x06000107 RID: 263 RVA: 0x00002924 File Offset: 0x00001D24
		public unsafe static void <MarshalCopy>(basic_string<char,std::char_traits<char>,std::allocator<char>\u0020>* A_0, basic_string<char,std::char_traits<char>,std::allocator<char>\u0020>* A_1)
		{
			try
			{
				*(long*)(A_0 + 16L / (long)sizeof(basic_string<char,std::char_traits<char>,std::allocator<char>\u0020>)) = 0L;
				*(long*)(A_0 + 24L / (long)sizeof(basic_string<char,std::char_traits<char>,std::allocator<char>\u0020>)) = 0L;
			}
			catch
			{
				<Module>.___CxxCallUnwindDtor(ldftn(std._String_val<std::_Simple_types<char>\u0020>._Bxty.{dtor}), (void*)A_0);
				throw;
			}
			try
			{
				<Module>.std.basic_string<char,std::char_traits<char>,std::allocator<char>\u0020>._Construct_lv_contents(A_0, A_1);
			}
			catch
			{
				<Module>.___CxxCallUnwindDtor(ldftn(std._String_alloc<std::_String_base_types<char,std::allocator<char>\u0020>\u0020>.{dtor}), (void*)A_0);
				throw;
			}
		}

		// Token: 0x06000108 RID: 264 RVA: 0x0000299C File Offset: 0x00001D9C
		public unsafe static void <MarshalDestroy>(basic_string<char,std::char_traits<char>,std::allocator<char>\u0020>* A_0)
		{
			try
			{
				<Module>.std.basic_string<char,std::char_traits<char>,std::allocator<char>\u0020>._Tidy_deallocate(A_0);
			}
			catch
			{
				<Module>.___CxxCallUnwindDtor(ldftn(std._String_alloc<std::_String_base_types<char,std::allocator<char>\u0020>\u0020>.{dtor}), (void*)A_0);
				throw;
			}
		}

		// Token: 0x04000198 RID: 408
		private long <alignment\u0020member>;
	}
}

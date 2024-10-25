using System;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;

namespace std
{
	// Token: 0x02000193 RID: 403
	[NativeCppClass]
	[UnsafeValueType]
	[StructLayout(LayoutKind.Sequential, Size = 32)]
	internal struct basic_string<char,std::char_traits<char>,std::allocator<char>\u0020>
	{
		// Token: 0x060002F8 RID: 760 RVA: 0x0001A4DC File Offset: 0x000198DC
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

		// Token: 0x060002F9 RID: 761 RVA: 0x0001A554 File Offset: 0x00019954
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

		// Token: 0x040004A9 RID: 1193
		private long <alignment\u0020member>;
	}
}

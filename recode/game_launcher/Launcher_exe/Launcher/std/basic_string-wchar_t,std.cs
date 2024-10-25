using System;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;

namespace std
{
	// Token: 0x0200005C RID: 92
	[NativeCppClass]
	[UnsafeValueType]
	[StructLayout(LayoutKind.Sequential, Size = 32)]
	internal struct basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>
	{
		// Token: 0x06000298 RID: 664 RVA: 0x0001243C File Offset: 0x0001183C
		public unsafe static void <MarshalCopy>(basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>* A_0, basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>* A_1)
		{
			try
			{
				*(long*)(A_0 + 16L / (long)sizeof(basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>)) = 0L;
				*(long*)(A_0 + 24L / (long)sizeof(basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>)) = 0L;
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
		}

		// Token: 0x06000299 RID: 665 RVA: 0x0000FB58 File Offset: 0x0000EF58
		public unsafe static void <MarshalDestroy>(basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>* A_0)
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

		// Token: 0x04000164 RID: 356
		private long <alignment\u0020member>;
	}
}

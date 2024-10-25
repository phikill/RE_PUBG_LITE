using System;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;

namespace std
{
	// Token: 0x020001ED RID: 493
	[NativeCppClass]
	[StructLayout(LayoutKind.Sequential, Size = 8)]
	internal struct tuple<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020&>
	{
		// Token: 0x060002FC RID: 764 RVA: 0x00012AB0 File Offset: 0x00011EB0
		public unsafe static void <MarshalCopy>(tuple<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020&>* A_0, tuple<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020&>* A_1)
		{
			cpblk(A_0, A_1, 8);
		}

		// Token: 0x040004EB RID: 1259
		private long <alignment\u0020member>;
	}
}

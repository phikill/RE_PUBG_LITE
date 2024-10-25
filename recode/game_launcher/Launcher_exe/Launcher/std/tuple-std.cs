using System;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;

namespace std
{
	// Token: 0x020000B2 RID: 178
	[NativeCppClass]
	[StructLayout(LayoutKind.Sequential, Size = 8)]
	internal struct tuple<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020&>
	{
		// Token: 0x0600029A RID: 666 RVA: 0x0000CE9C File Offset: 0x0000C29C
		public unsafe static void <MarshalCopy>(tuple<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020&>* A_0, tuple<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>\u0020const\u0020&>* A_1)
		{
			cpblk(A_0, A_1, 8);
		}

		// Token: 0x040001AB RID: 427
		private long <alignment\u0020member>;
	}
}

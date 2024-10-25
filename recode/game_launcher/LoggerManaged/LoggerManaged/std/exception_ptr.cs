using System;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;

namespace std
{
	// Token: 0x02000169 RID: 361
	[NativeCppClass]
	[StructLayout(LayoutKind.Sequential, Size = 16)]
	internal struct exception_ptr
	{
		// Token: 0x060000CB RID: 203 RVA: 0x0000AB10 File Offset: 0x00009F10
		public unsafe static void <MarshalCopy>(exception_ptr* A_0, exception_ptr* A_1)
		{
			<Module>.__ExceptionPtrCopy((void*)A_0, (void*)A_1);
		}

		// Token: 0x060000CC RID: 204 RVA: 0x0000AB24 File Offset: 0x00009F24
		public unsafe static void <MarshalDestroy>(exception_ptr* A_0)
		{
			<Module>.__ExceptionPtrDestroy((void*)A_0);
		}

		// Token: 0x04000229 RID: 553
		private long <alignment\u0020member>;
	}
}

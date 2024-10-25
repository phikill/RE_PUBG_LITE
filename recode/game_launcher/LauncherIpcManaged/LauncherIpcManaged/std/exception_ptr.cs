using System;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;

namespace std
{
	// Token: 0x020000C6 RID: 198
	[NativeCppClass]
	[StructLayout(LayoutKind.Sequential, Size = 16)]
	internal struct exception_ptr
	{
		// Token: 0x06000109 RID: 265 RVA: 0x000020FC File Offset: 0x000014FC
		public unsafe static void <MarshalCopy>(exception_ptr* A_0, exception_ptr* A_1)
		{
			<Module>.__ExceptionPtrCopy((void*)A_0, (void*)A_1);
		}

		// Token: 0x0600010A RID: 266 RVA: 0x00002110 File Offset: 0x00001510
		public unsafe static void <MarshalDestroy>(exception_ptr* A_0)
		{
			<Module>.__ExceptionPtrDestroy((void*)A_0);
		}

		// Token: 0x040001A2 RID: 418
		private long <alignment\u0020member>;
	}
}

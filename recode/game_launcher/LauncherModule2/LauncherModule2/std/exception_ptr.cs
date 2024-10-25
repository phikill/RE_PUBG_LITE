using System;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;

namespace std
{
	// Token: 0x02000241 RID: 577
	[NativeCppClass]
	[StructLayout(LayoutKind.Sequential, Size = 16)]
	internal struct exception_ptr
	{
		// Token: 0x060002FF RID: 767 RVA: 0x00019B68 File Offset: 0x00018F68
		public unsafe static void <MarshalCopy>(exception_ptr* A_0, exception_ptr* A_1)
		{
			<Module>.__ExceptionPtrCopy((void*)A_0, (void*)A_1);
		}

		// Token: 0x06000300 RID: 768 RVA: 0x00019B7C File Offset: 0x00018F7C
		public unsafe static void <MarshalDestroy>(exception_ptr* A_0)
		{
			<Module>.__ExceptionPtrDestroy((void*)A_0);
		}

		// Token: 0x0400050D RID: 1293
		private long <alignment\u0020member>;
	}
}

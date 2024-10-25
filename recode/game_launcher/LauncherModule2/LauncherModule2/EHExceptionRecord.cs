using System;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;

// Token: 0x0200034A RID: 842
[NativeCppClass]
[StructLayout(LayoutKind.Sequential, Size = 64)]
internal struct EHExceptionRecord
{
	// Token: 0x040005DE RID: 1502
	private long <alignment\u0020member>;

	// Token: 0x0200034B RID: 843
	[CLSCompliant(false)]
	[NativeCppClass]
	[StructLayout(LayoutKind.Sequential, Size = 32)]
	public struct EHParameters
	{
		// Token: 0x040005DF RID: 1503
		private long <alignment\u0020member>;
	}
}

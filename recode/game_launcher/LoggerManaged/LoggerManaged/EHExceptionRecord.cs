using System;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;

// Token: 0x020002AA RID: 682
[NativeCppClass]
[StructLayout(LayoutKind.Sequential, Size = 64)]
internal struct EHExceptionRecord
{
	// Token: 0x04000312 RID: 786
	private long <alignment\u0020member>;

	// Token: 0x020002AB RID: 683
	[CLSCompliant(false)]
	[NativeCppClass]
	[StructLayout(LayoutKind.Sequential, Size = 32)]
	public struct EHParameters
	{
		// Token: 0x04000313 RID: 787
		private long <alignment\u0020member>;
	}
}

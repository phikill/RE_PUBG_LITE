using System;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;

// Token: 0x0200005A RID: 90
[NativeCppClass]
[UnsafeValueType]
[StructLayout(LayoutKind.Sequential, Size = 128)]
internal struct FileInfoList
{
	// Token: 0x04000162 RID: 354
	private long <alignment\u0020member>;

	// Token: 0x0200005B RID: 91
	[UnsafeValueType]
	[NativeCppClass]
	[CLSCompliant(false)]
	[StructLayout(LayoutKind.Sequential, Size = 104)]
	public struct FILE_INFO
	{
		// Token: 0x04000163 RID: 355
		private long <alignment\u0020member>;
	}
}

using System;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;

// Token: 0x0200004F RID: 79
[NativeCppClass]
[StructLayout(LayoutKind.Sequential, Size = 64)]
internal struct DownloadSpeed
{
	// Token: 0x04000157 RID: 343
	private long <alignment member>;

	// Token: 0x02000050 RID: 80
	[StructLayout(LayoutKind.Sequential, Size = 8)]
	[NativeCppClass]
	internal struct DOWNLOAD_INFO
	{
		// Token: 0x04000158 RID: 344
		private int <alignment member>;
	}
}

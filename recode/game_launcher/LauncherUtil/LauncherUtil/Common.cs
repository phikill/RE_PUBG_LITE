using System;
using System.Diagnostics;
using System.Reflection;

namespace LauncherUtil
{
	// Token: 0x02000005 RID: 5
	public static class Common
	{
		// Token: 0x17000005 RID: 5
		// (get) Token: 0x06000010 RID: 16 RVA: 0x0000232A File Offset: 0x0000052A
		public static bool Is64BitLauncher
		{
			get
			{
				return Environment.Is64BitProcess;
			}
		}

		// Token: 0x17000006 RID: 6
		// (get) Token: 0x06000011 RID: 17 RVA: 0x00002331 File Offset: 0x00000531
		public static bool Is64BitOS
		{
			get
			{
				return Environment.Is64BitOperatingSystem;
			}
		}

		// Token: 0x17000007 RID: 7
		// (get) Token: 0x06000012 RID: 18 RVA: 0x00002338 File Offset: 0x00000538
		public static FileVersionInfo VersionInfo
		{
			get
			{
				return FileVersionInfo.GetVersionInfo(Assembly.GetEntryAssembly().Location);
			}
		}

		// Token: 0x06000013 RID: 19 RVA: 0x00002349 File Offset: 0x00000549
		public static int ToWin32ErrorCode(int hresult)
		{
			return hresult & 65535;
		}
	}
}

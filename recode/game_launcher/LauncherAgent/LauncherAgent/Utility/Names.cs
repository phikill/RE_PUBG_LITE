using System;
using System.Diagnostics;

namespace LauncherAgent.Utility
{
	// Token: 0x02000007 RID: 7
	public static class Names
	{
		// Token: 0x0200000F RID: 15
		public static class Helper
		{
			// Token: 0x17000003 RID: 3
			// (get) Token: 0x0600002B RID: 43 RVA: 0x0000250A File Offset: 0x0000070A
			// (set) Token: 0x0600002C RID: 44 RVA: 0x00002511 File Offset: 0x00000711
			public static FileVersionInfo LauncherVersion { get; private set; } = FileVersionInfo.GetVersionInfo(".\\" + Names.Helper.LauncherProcessExecutableName);

			// Token: 0x17000004 RID: 4
			// (get) Token: 0x0600002D RID: 45 RVA: 0x00002519 File Offset: 0x00000719
			// (set) Token: 0x0600002E RID: 46 RVA: 0x00002520 File Offset: 0x00000720
			public static string LauncherProcessName { get; private set; } = "Launcher";

			// Token: 0x17000005 RID: 5
			// (get) Token: 0x0600002F RID: 47 RVA: 0x00002528 File Offset: 0x00000728
			// (set) Token: 0x06000030 RID: 48 RVA: 0x0000252F File Offset: 0x0000072F
			public static string LauncherProcessExecutableName { get; private set; } = "Launcher.exe";

			// Token: 0x17000006 RID: 6
			// (get) Token: 0x06000031 RID: 49 RVA: 0x00002537 File Offset: 0x00000737
			// (set) Token: 0x06000032 RID: 50 RVA: 0x0000253E File Offset: 0x0000073E
			public static string ClientProcessName { get; private set; } = "PUBGLite";
		}
	}
}

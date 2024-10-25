using System;
using System.Text.RegularExpressions;

namespace LauncherModel
{
	// Token: 0x02000006 RID: 6
	public class SharedDataContainer : IDisposable
	{
		// Token: 0x1700000E RID: 14
		// (get) Token: 0x06000025 RID: 37 RVA: 0x0000265A File Offset: 0x0000085A
		// (set) Token: 0x06000026 RID: 38 RVA: 0x00002662 File Offset: 0x00000862
		public SessionData Session { get; set; } = new SessionData();

		// Token: 0x1700000F RID: 15
		// (get) Token: 0x06000027 RID: 39 RVA: 0x0000266B File Offset: 0x0000086B
		public GameClientProcessManager ClientProcessMgr { get; }

		// Token: 0x17000010 RID: 16
		// (get) Token: 0x06000028 RID: 40 RVA: 0x00002673 File Offset: 0x00000873
		// (set) Token: 0x06000029 RID: 41 RVA: 0x0000267B File Offset: 0x0000087B
		public string GameStarterExecutableName { get; set; }

		// Token: 0x17000011 RID: 17
		// (get) Token: 0x0600002A RID: 42 RVA: 0x00002684 File Offset: 0x00000884
		// (set) Token: 0x0600002B RID: 43 RVA: 0x0000268C File Offset: 0x0000088C
		public string GameExecutableName { get; set; }

		// Token: 0x17000012 RID: 18
		// (get) Token: 0x0600002C RID: 44 RVA: 0x00002695 File Offset: 0x00000895
		// (set) Token: 0x0600002D RID: 45 RVA: 0x0000269D File Offset: 0x0000089D
		public string GameExecuteArguments { get; set; }

		// Token: 0x17000013 RID: 19
		// (get) Token: 0x0600002E RID: 46 RVA: 0x000026A6 File Offset: 0x000008A6
		// (set) Token: 0x0600002F RID: 47 RVA: 0x000026AE File Offset: 0x000008AE
		public string LauncherAgentName { get; set; }

		// Token: 0x17000014 RID: 20
		// (get) Token: 0x06000030 RID: 48 RVA: 0x000026B7 File Offset: 0x000008B7
		// (set) Token: 0x06000031 RID: 49 RVA: 0x000026BF File Offset: 0x000008BF
		public string InstallPathOverride { get; set; }

		// Token: 0x17000015 RID: 21
		// (get) Token: 0x06000032 RID: 50 RVA: 0x000026C8 File Offset: 0x000008C8
		// (set) Token: 0x06000033 RID: 51 RVA: 0x000026D0 File Offset: 0x000008D0
		public bool DisableGameClientValidation { get; set; }

		// Token: 0x17000016 RID: 22
		// (get) Token: 0x06000034 RID: 52 RVA: 0x000026D9 File Offset: 0x000008D9
		public string GameProcessName
		{
			get
			{
				if (this.GameExecutableName == null)
				{
					return null;
				}
				return Regex.Replace(this.GameExecutableName, ".exe", string.Empty, RegexOptions.IgnoreCase);
			}
		}

		// Token: 0x17000017 RID: 23
		// (get) Token: 0x06000035 RID: 53 RVA: 0x000026FB File Offset: 0x000008FB
		// (set) Token: 0x06000036 RID: 54 RVA: 0x00002703 File Offset: 0x00000903
		public string UrlMain { get; set; }

		// Token: 0x17000018 RID: 24
		// (get) Token: 0x06000037 RID: 55 RVA: 0x0000270C File Offset: 0x0000090C
		// (set) Token: 0x06000038 RID: 56 RVA: 0x00002714 File Offset: 0x00000914
		public string UrlLogin { get; set; }

		// Token: 0x17000019 RID: 25
		// (get) Token: 0x06000039 RID: 57 RVA: 0x0000271D File Offset: 0x0000091D
		// (set) Token: 0x0600003A RID: 58 RVA: 0x00002725 File Offset: 0x00000925
		public string UrlLogout { get; set; }

		// Token: 0x1700001A RID: 26
		// (get) Token: 0x0600003B RID: 59 RVA: 0x0000272E File Offset: 0x0000092E
		// (set) Token: 0x0600003C RID: 60 RVA: 0x00002736 File Offset: 0x00000936
		public string UrlSessionValidator { get; set; }

		// Token: 0x1700001B RID: 27
		// (get) Token: 0x0600003D RID: 61 RVA: 0x0000273F File Offset: 0x0000093F
		// (set) Token: 0x0600003E RID: 62 RVA: 0x00002747 File Offset: 0x00000947
		public string UrlPatchSource { get; set; }

		// Token: 0x1700001C RID: 28
		// (get) Token: 0x0600003F RID: 63 RVA: 0x00002750 File Offset: 0x00000950
		// (set) Token: 0x06000040 RID: 64 RVA: 0x00002758 File Offset: 0x00000958
		public string QA_ID { get; set; }

		// Token: 0x1700001D RID: 29
		// (get) Token: 0x06000041 RID: 65 RVA: 0x00002761 File Offset: 0x00000961
		// (set) Token: 0x06000042 RID: 66 RVA: 0x00002769 File Offset: 0x00000969
		public string QA_PW { get; set; }

		// Token: 0x06000043 RID: 67 RVA: 0x00002772 File Offset: 0x00000972
		public SharedDataContainer()
		{
			this.ClientProcessMgr = new GameClientProcessManager(this);
		}

		// Token: 0x06000044 RID: 68 RVA: 0x00002791 File Offset: 0x00000991
		public void Dispose()
		{
			this.Dispose(true);
			GC.SuppressFinalize(this);
		}

		// Token: 0x06000045 RID: 69 RVA: 0x000027A0 File Offset: 0x000009A0
		protected virtual void Dispose(bool disposing)
		{
			if (this._disposed)
			{
				return;
			}
			if (disposing)
			{
				GameClientProcessManager clientProcessMgr = this.ClientProcessMgr;
				if (clientProcessMgr != null)
				{
					clientProcessMgr.Dispose();
				}
			}
			this._disposed = true;
		}

		// Token: 0x04000035 RID: 53
		private bool _disposed;
	}
}

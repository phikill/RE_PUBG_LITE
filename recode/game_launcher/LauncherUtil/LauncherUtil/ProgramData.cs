using System;
using System.IO;

namespace LauncherUtil
{
	// Token: 0x02000002 RID: 2
	public static class ProgramData
	{
		// Token: 0x17000001 RID: 1
		// (get) Token: 0x06000001 RID: 1 RVA: 0x00002048 File Offset: 0x00000248
		public static string PathForProduct
		{
			get
			{
				return ProgramData.PathForGame(Common.VersionInfo.ProductName);
			}
		}

		// Token: 0x06000002 RID: 2 RVA: 0x00002059 File Offset: 0x00000259
		public static string PathForGame(string gameName)
		{
			if (gameName == null)
			{
				throw new ArgumentNullException("gameName");
			}
			if (string.IsNullOrWhiteSpace(gameName))
			{
				throw new InvalidOperationException("argument gameName is empty");
			}
			return Path.Combine(Environment.GetFolderPath(Environment.SpecialFolder.CommonApplicationData), Common.VersionInfo.CompanyName, gameName);
		}
	}
}

using System;

namespace LauncherApiServer
{
	// Token: 0x02000005 RID: 5
	internal class SessionDto
	{
		// Token: 0x17000004 RID: 4
		// (get) Token: 0x06000012 RID: 18 RVA: 0x000023A1 File Offset: 0x000005A1
		// (set) Token: 0x06000013 RID: 19 RVA: 0x000023A9 File Offset: 0x000005A9
		public string SessionId { get; set; }

		// Token: 0x17000005 RID: 5
		// (get) Token: 0x06000014 RID: 20 RVA: 0x000023B2 File Offset: 0x000005B2
		// (set) Token: 0x06000015 RID: 21 RVA: 0x000023BA File Offset: 0x000005BA
		public string AccountGuid { get; set; }

		// Token: 0x17000006 RID: 6
		// (get) Token: 0x06000016 RID: 22 RVA: 0x000023C3 File Offset: 0x000005C3
		// (set) Token: 0x06000017 RID: 23 RVA: 0x000023CB File Offset: 0x000005CB
		public string Email { get; set; }

		// Token: 0x17000007 RID: 7
		// (get) Token: 0x06000018 RID: 24 RVA: 0x000023D4 File Offset: 0x000005D4
		// (set) Token: 0x06000019 RID: 25 RVA: 0x000023DC File Offset: 0x000005DC
		public string Provider { get; set; }
	}
}

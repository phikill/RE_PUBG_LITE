using System;
using System.Text;
using Microsoft.IdentityModel.Tokens;

namespace LauncherModel
{
	// Token: 0x02000005 RID: 5
	public class SessionData
	{
		// Token: 0x17000006 RID: 6
		// (get) Token: 0x06000016 RID: 22 RVA: 0x000025C6 File Offset: 0x000007C6
		// (set) Token: 0x06000017 RID: 23 RVA: 0x000025CE File Offset: 0x000007CE
		public string SessionId { get; set; }

		// Token: 0x17000007 RID: 7
		// (get) Token: 0x06000018 RID: 24 RVA: 0x000025D7 File Offset: 0x000007D7
		// (set) Token: 0x06000019 RID: 25 RVA: 0x000025DF File Offset: 0x000007DF
		public string AccountGuid { get; set; }

		// Token: 0x17000008 RID: 8
		// (get) Token: 0x0600001A RID: 26 RVA: 0x000025E8 File Offset: 0x000007E8
		// (set) Token: 0x0600001B RID: 27 RVA: 0x000025F0 File Offset: 0x000007F0
		public string Email { get; set; }

		// Token: 0x17000009 RID: 9
		// (get) Token: 0x0600001C RID: 28 RVA: 0x000025F9 File Offset: 0x000007F9
		// (set) Token: 0x0600001D RID: 29 RVA: 0x00002601 File Offset: 0x00000801
		public double LoginTimeStamp { get; set; }

		// Token: 0x1700000A RID: 10
		// (get) Token: 0x0600001E RID: 30 RVA: 0x0000260A File Offset: 0x0000080A
		// (set) Token: 0x0600001F RID: 31 RVA: 0x00002612 File Offset: 0x00000812
		public string CountryCode { get; set; }

		// Token: 0x1700000B RID: 11
		// (get) Token: 0x06000020 RID: 32 RVA: 0x0000261B File Offset: 0x0000081B
		// (set) Token: 0x06000021 RID: 33 RVA: 0x00002623 File Offset: 0x00000823
		public string CreatedAt { get; set; }

		// Token: 0x1700000C RID: 12
		// (get) Token: 0x06000022 RID: 34 RVA: 0x0000262C File Offset: 0x0000082C
		public string EncodedSessionId
		{
			get
			{
				return Base64UrlEncoder.Encode(Encoding.UTF8.GetBytes(this.SessionId));
			}
		}

		// Token: 0x1700000D RID: 13
		// (get) Token: 0x06000023 RID: 35 RVA: 0x00002643 File Offset: 0x00000843
		public string EncodedEmailId
		{
			get
			{
				return Convert.ToBase64String(Encoding.UTF8.GetBytes(this.Email));
			}
		}
	}
}

using System;
using Patcher;

// Token: 0x02000016 RID: 22
internal sealed class InstallResult : ResultBase
{
	// Token: 0x060001B9 RID: 441 RVA: 0x000B499C File Offset: 0x000B3D9C
	public InstallResult(ResultBase @base)
		: base(@base)
	{
	}

	// Token: 0x060001BA RID: 442 RVA: 0x000B4988 File Offset: 0x000B3D88
	public InstallResult()
	{
	}

	// Token: 0x04000148 RID: 328
	public const string NotificationEventName = "InstallComplete";
}

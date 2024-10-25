using System;
using Patcher;

// Token: 0x0200000A RID: 10
internal sealed class FullCheckResult : ResultBase
{
	// Token: 0x060001B6 RID: 438 RVA: 0x000B4974 File Offset: 0x000B3D74
	public FullCheckResult(ResultBase @base)
		: base(@base)
	{
	}

	// Token: 0x060001B7 RID: 439 RVA: 0x000B4960 File Offset: 0x000B3D60
	public FullCheckResult()
	{
	}

	// Token: 0x04000139 RID: 313
	public const string NotificationEventName = "FullCheckComplete";
}

using System;
using Patcher;

// Token: 0x02000009 RID: 9
internal sealed class SimpleCheckResult : ResultBase
{
	// Token: 0x060001B4 RID: 436 RVA: 0x000B494C File Offset: 0x000B3D4C
	public SimpleCheckResult(ResultBase @base)
		: base(@base)
	{
	}

	// Token: 0x060001B5 RID: 437 RVA: 0x000B4938 File Offset: 0x000B3D38
	public SimpleCheckResult()
	{
	}

	// Token: 0x04000138 RID: 312
	public const string NotificationEventName = "SimpleCheckComplete";
}

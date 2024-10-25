using System;
using Patcher;

// Token: 0x02000008 RID: 8
internal sealed class UpdateResult : ResultBase
{
	// Token: 0x060001B2 RID: 434 RVA: 0x000B4924 File Offset: 0x000B3D24
	public UpdateResult(ResultBase @base)
		: base(@base)
	{
	}

	// Token: 0x060001B3 RID: 435 RVA: 0x000B4910 File Offset: 0x000B3D10
	public UpdateResult()
	{
	}

	// Token: 0x04000137 RID: 311
	public const string NotificationEventName = "UpdateComplete";
}

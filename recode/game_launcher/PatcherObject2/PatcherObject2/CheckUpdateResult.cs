using System;
using Patcher;

// Token: 0x02000007 RID: 7
internal sealed class CheckUpdateResult : ResultBase
{
	// Token: 0x060001B0 RID: 432 RVA: 0x000B48EC File Offset: 0x000B3CEC
	public CheckUpdateResult(ResultBase @base)
		: base(@base)
	{
	}

	// Token: 0x060001B1 RID: 433 RVA: 0x000B48C8 File Offset: 0x000B3CC8
	public CheckUpdateResult()
	{
	}

	// Token: 0x04000135 RID: 309
	public int local_version = 0;

	// Token: 0x04000136 RID: 310
	public int latest_version = 0;
}

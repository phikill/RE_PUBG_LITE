using System;

namespace Patcher
{
	// Token: 0x02000006 RID: 6
	internal class ResultBase
	{
		// Token: 0x060001AE RID: 430 RVA: 0x000BC9DC File Offset: 0x000BBDDC
		public ResultBase(ResultBase other)
		{
			this.game_id = other.game_id;
			int num = other.result;
			this.result = num;
			this.error = num;
			this.current_file = other.current_file;
			this.reason = other.reason;
			this.error_code = other.error_code;
			base..ctor();
		}

		// Token: 0x060001AF RID: 431 RVA: 0x000BC994 File Offset: 0x000BBD94
		public ResultBase()
		{
			this.game_id = string.Empty;
			this.result = 0;
			this.error = 0;
			this.current_file = string.Empty;
			this.reason = 0;
			this.error_code = 0;
			base..ctor();
		}

		// Token: 0x0400012F RID: 303
		public string game_id;

		// Token: 0x04000130 RID: 304
		public int result;

		// Token: 0x04000131 RID: 305
		public int error;

		// Token: 0x04000132 RID: 306
		public string current_file;

		// Token: 0x04000133 RID: 307
		public int reason;

		// Token: 0x04000134 RID: 308
		public int error_code;
	}
}

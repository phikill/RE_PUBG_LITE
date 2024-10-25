using System;
using System.Runtime.Serialization;

namespace <CrtImplementationDetails>
{
	// Token: 0x0200025B RID: 603
	[Serializable]
	internal class Exception : Exception
	{
		// Token: 0x060000CF RID: 207 RVA: 0x0000D41C File Offset: 0x0000C81C
		protected Exception(SerializationInfo info, StreamingContext context)
			: base(info, context)
		{
		}

		// Token: 0x060000D0 RID: 208 RVA: 0x0000D404 File Offset: 0x0000C804
		public Exception(string message, Exception innerException)
			: base(message, innerException)
		{
		}

		// Token: 0x060000D1 RID: 209 RVA: 0x0000D3F0 File Offset: 0x0000C7F0
		public Exception(string message)
			: base(message)
		{
		}
	}
}

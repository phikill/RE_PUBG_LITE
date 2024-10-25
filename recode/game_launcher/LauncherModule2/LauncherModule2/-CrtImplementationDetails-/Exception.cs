using System;
using System.Runtime.Serialization;

namespace <CrtImplementationDetails>
{
	// Token: 0x020002FF RID: 767
	[Serializable]
	internal class Exception : Exception
	{
		// Token: 0x06000301 RID: 769 RVA: 0x0001C06C File Offset: 0x0001B46C
		protected Exception(SerializationInfo info, StreamingContext context)
			: base(info, context)
		{
		}

		// Token: 0x06000302 RID: 770 RVA: 0x0001C054 File Offset: 0x0001B454
		public Exception(string message, Exception innerException)
			: base(message, innerException)
		{
		}

		// Token: 0x06000303 RID: 771 RVA: 0x0001C040 File Offset: 0x0001B440
		public Exception(string message)
			: base(message)
		{
		}
	}
}

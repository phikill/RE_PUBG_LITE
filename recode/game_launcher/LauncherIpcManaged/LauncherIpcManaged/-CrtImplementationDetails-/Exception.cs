using System;
using System.Runtime.Serialization;

namespace <CrtImplementationDetails>
{
	// Token: 0x020001A1 RID: 417
	[Serializable]
	internal class Exception : Exception
	{
		// Token: 0x0600010B RID: 267 RVA: 0x000041BC File Offset: 0x000035BC
		protected Exception(SerializationInfo info, StreamingContext context)
			: base(info, context)
		{
		}

		// Token: 0x0600010C RID: 268 RVA: 0x000041A4 File Offset: 0x000035A4
		public Exception(string message, Exception innerException)
			: base(message, innerException)
		{
		}

		// Token: 0x0600010D RID: 269 RVA: 0x00004190 File Offset: 0x00003590
		public Exception(string message)
			: base(message)
		{
		}
	}
}

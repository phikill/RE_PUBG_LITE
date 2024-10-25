using System;
using System.Runtime.Serialization;

namespace <CrtImplementationDetails>
{
	// Token: 0x020001A5 RID: 421
	[Serializable]
	internal class OpenMPWithMultipleAppdomainsException : Exception
	{
		// Token: 0x0600011B RID: 283 RVA: 0x00004680 File Offset: 0x00003A80
		protected OpenMPWithMultipleAppdomainsException(SerializationInfo info, StreamingContext context)
			: base(info, context)
		{
		}

		// Token: 0x0600011C RID: 284 RVA: 0x0000466C File Offset: 0x00003A6C
		public OpenMPWithMultipleAppdomainsException()
		{
		}
	}
}

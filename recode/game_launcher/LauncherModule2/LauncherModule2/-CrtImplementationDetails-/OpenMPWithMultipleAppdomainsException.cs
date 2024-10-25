using System;
using System.Runtime.Serialization;

namespace <CrtImplementationDetails>
{
	// Token: 0x02000303 RID: 771
	[Serializable]
	internal class OpenMPWithMultipleAppdomainsException : Exception
	{
		// Token: 0x06000311 RID: 785 RVA: 0x0001C530 File Offset: 0x0001B930
		protected OpenMPWithMultipleAppdomainsException(SerializationInfo info, StreamingContext context)
			: base(info, context)
		{
		}

		// Token: 0x06000312 RID: 786 RVA: 0x0001C51C File Offset: 0x0001B91C
		public OpenMPWithMultipleAppdomainsException()
		{
		}
	}
}

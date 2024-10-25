using System;
using System.Runtime.Serialization;

namespace <CrtImplementationDetails>
{
	// Token: 0x0200025F RID: 607
	[Serializable]
	internal class OpenMPWithMultipleAppdomainsException : Exception
	{
		// Token: 0x060000DF RID: 223 RVA: 0x0000D8E0 File Offset: 0x0000CCE0
		protected OpenMPWithMultipleAppdomainsException(SerializationInfo info, StreamingContext context)
			: base(info, context)
		{
		}

		// Token: 0x060000E0 RID: 224 RVA: 0x0000D8CC File Offset: 0x0000CCCC
		public OpenMPWithMultipleAppdomainsException()
		{
		}
	}
}

using System;
using System.Runtime.Serialization;

namespace <CrtImplementationDetails>
{
	// Token: 0x020000EB RID: 235
	[Serializable]
	internal class ModuleLoadException : Exception
	{
		// Token: 0x0600029B RID: 667 RVA: 0x0001EB70 File Offset: 0x0001DF70
		protected ModuleLoadException(SerializationInfo info, StreamingContext context)
			: base(info, context)
		{
		}

		// Token: 0x0600029C RID: 668 RVA: 0x0001EB58 File Offset: 0x0001DF58
		public ModuleLoadException(string message, Exception innerException)
			: base(message, innerException)
		{
		}

		// Token: 0x0600029D RID: 669 RVA: 0x0001EB44 File Offset: 0x0001DF44
		public ModuleLoadException(string message)
			: base(message)
		{
		}

		// Token: 0x040001D9 RID: 473
		public const string Nested = "A nested exception occurred after the primary exception that caused the C++ module to fail to load.\n";
	}
}

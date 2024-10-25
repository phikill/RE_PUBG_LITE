using System;
using System.Runtime.Serialization;

namespace <CrtImplementationDetails>
{
	// Token: 0x0200025C RID: 604
	[Serializable]
	internal class ModuleLoadException : Exception
	{
		// Token: 0x060000D2 RID: 210 RVA: 0x0000D460 File Offset: 0x0000C860
		protected ModuleLoadException(SerializationInfo info, StreamingContext context)
			: base(info, context)
		{
		}

		// Token: 0x060000D3 RID: 211 RVA: 0x0000D448 File Offset: 0x0000C848
		public ModuleLoadException(string message, Exception innerException)
			: base(message, innerException)
		{
		}

		// Token: 0x060000D4 RID: 212 RVA: 0x0000D434 File Offset: 0x0000C834
		public ModuleLoadException(string message)
			: base(message)
		{
		}

		// Token: 0x040002CE RID: 718
		public const string Nested = "A nested exception occurred after the primary exception that caused the C++ module to fail to load.\n";
	}
}

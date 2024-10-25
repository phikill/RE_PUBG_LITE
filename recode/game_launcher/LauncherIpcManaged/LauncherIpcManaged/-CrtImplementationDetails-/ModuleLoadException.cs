using System;
using System.Runtime.Serialization;

namespace <CrtImplementationDetails>
{
	// Token: 0x020001A2 RID: 418
	[Serializable]
	internal class ModuleLoadException : Exception
	{
		// Token: 0x0600010E RID: 270 RVA: 0x00004200 File Offset: 0x00003600
		protected ModuleLoadException(SerializationInfo info, StreamingContext context)
			: base(info, context)
		{
		}

		// Token: 0x0600010F RID: 271 RVA: 0x000041E8 File Offset: 0x000035E8
		public ModuleLoadException(string message, Exception innerException)
			: base(message, innerException)
		{
		}

		// Token: 0x06000110 RID: 272 RVA: 0x000041D4 File Offset: 0x000035D4
		public ModuleLoadException(string message)
			: base(message)
		{
		}

		// Token: 0x04000235 RID: 565
		public const string Nested = "A nested exception occurred after the primary exception that caused the C++ module to fail to load.\n";
	}
}

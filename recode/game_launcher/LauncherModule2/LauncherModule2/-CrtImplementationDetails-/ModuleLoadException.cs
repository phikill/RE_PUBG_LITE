using System;
using System.Runtime.Serialization;

namespace <CrtImplementationDetails>
{
	// Token: 0x02000300 RID: 768
	[Serializable]
	internal class ModuleLoadException : Exception
	{
		// Token: 0x06000304 RID: 772 RVA: 0x0001C0B0 File Offset: 0x0001B4B0
		protected ModuleLoadException(SerializationInfo info, StreamingContext context)
			: base(info, context)
		{
		}

		// Token: 0x06000305 RID: 773 RVA: 0x0001C098 File Offset: 0x0001B498
		public ModuleLoadException(string message, Exception innerException)
			: base(message, innerException)
		{
		}

		// Token: 0x06000306 RID: 774 RVA: 0x0001C084 File Offset: 0x0001B484
		public ModuleLoadException(string message)
			: base(message)
		{
		}

		// Token: 0x0400059C RID: 1436
		public const string Nested = "A nested exception occurred after the primary exception that caused the C++ module to fail to load.\n";
	}
}

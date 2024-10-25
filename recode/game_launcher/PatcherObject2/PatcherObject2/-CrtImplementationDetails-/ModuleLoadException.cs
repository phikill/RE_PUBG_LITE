using System;
using System.Runtime.Serialization;

namespace <CrtImplementationDetails>
{
	// Token: 0x020000BC RID: 188
	[Serializable]
	internal class ModuleLoadException : Exception
	{
		// Token: 0x060001E7 RID: 487 RVA: 0x000BDDB4 File Offset: 0x000BD1B4
		protected ModuleLoadException(SerializationInfo info, StreamingContext context)
			: base(info, context)
		{
		}

		// Token: 0x060001E8 RID: 488 RVA: 0x000BDD9C File Offset: 0x000BD19C
		public ModuleLoadException(string message, Exception innerException)
			: base(message, innerException)
		{
		}

		// Token: 0x060001E9 RID: 489 RVA: 0x000BDD88 File Offset: 0x000BD188
		public ModuleLoadException(string message)
			: base(message)
		{
		}

		// Token: 0x040001C2 RID: 450
		public const string Nested = "A nested exception occurred after the primary exception that caused the C++ module to fail to load.\n";
	}
}

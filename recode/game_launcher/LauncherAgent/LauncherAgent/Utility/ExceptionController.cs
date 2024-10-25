using System;

namespace LauncherAgent.Utility
{
	// Token: 0x02000008 RID: 8
	public static class ExceptionController
	{
		// Token: 0x06000016 RID: 22 RVA: 0x0000244A File Offset: 0x0000064A
		public static void UnhnaldedExceptionHandler(object sender, UnhandledExceptionEventArgs args)
		{
			if (args.IsTerminating)
			{
				Environment.Exit(-1);
			}
		}

		// Token: 0x04000006 RID: 6
		private static readonly string _exceptionDirectory = ".\\exception";
	}
}

using System;
using System.Runtime.InteropServices;
using System.Threading;
using LauncherAgent.Utility;
using LauncherAgent.Watch;
using LauncherView;

namespace LauncherAgent
{
	// Token: 0x02000002 RID: 2
	internal class Program
	{
		// Token: 0x06000001 RID: 1
		[DllImport("Kernel32")]
		private static extern bool SetConsoleCtrlHandler(Program.EventHandler handler, bool add);

		// Token: 0x06000002 RID: 2 RVA: 0x00002048 File Offset: 0x00000248
		private static bool Handler(Program.CtrlType sig)
		{
			TrayRefresher.RefreshTrayArea();
			Environment.Exit(-1);
			return true;
		}

		// Token: 0x06000003 RID: 3 RVA: 0x00002058 File Offset: 0x00000258
		private static void Main(string[] args)
		{
			AppDomain.CurrentDomain.UnhandledException += ExceptionController.UnhnaldedExceptionHandler;
			Program._handler = (Program.EventHandler)Delegate.Combine(Program._handler, new Program.EventHandler(Program.Handler));
			Program.SetConsoleCtrlHandler(Program._handler, true);
			TrayRefresher.RefreshTrayArea();
			MessageTextHelper.Load();
			new Watcher(new WatchScope[]
			{
				new LauncherWatcher()
			}).Start();
			Thread.Sleep(-1);
		}

		// Token: 0x04000001 RID: 1
		private static Program.EventHandler _handler;

		// Token: 0x02000009 RID: 9
		// (Invoke) Token: 0x06000019 RID: 25
		private delegate bool EventHandler(Program.CtrlType sig);

		// Token: 0x0200000A RID: 10
		private enum CtrlType
		{
			// Token: 0x04000008 RID: 8
			CTRL_C_EVENT,
			// Token: 0x04000009 RID: 9
			CTRL_BREAK_EVENT,
			// Token: 0x0400000A RID: 10
			CTRL_CLOSE_EVENT,
			// Token: 0x0400000B RID: 11
			CTRL_LOGOFF_EVENT = 5,
			// Token: 0x0400000C RID: 12
			CTRL_SHUTDOWN_EVENT
		}
	}
}

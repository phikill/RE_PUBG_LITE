using System;
using System.Runtime.CompilerServices;
using System.Windows;
using CefSharp;
using CefSharp.Wpf;
using LauncherModel;
using logger.managed;

namespace LauncherView
{
	// Token: 0x0200000C RID: 12
	internal static class Static
	{
		// Token: 0x17000007 RID: 7
		// (get) Token: 0x0600001C RID: 28 RVA: 0x00002586 File Offset: 0x00000786
		public static SharedDataContainer SharedData
		{
			get
			{
				App app = Application.Current as App;
				if (app == null)
				{
					return null;
				}
				return app.SharedData;
			}
		}

		// Token: 0x0600001D RID: 29 RVA: 0x000025A0 File Offset: 0x000007A0
		public static void ExecuteScriptSync(this ChromiumWebBrowser wb, in string expr, [CallerFilePath] string filePath = "", [CallerLineNumber] int line = 0)
		{
			if (wb == null || wb.IsDisposed)
			{
				return;
			}
			IFrame mainFrame = wb.GetMainFrame();
			if (mainFrame == null || mainFrame.IsDisposed)
			{
				return;
			}
			mainFrame.EvaluateScriptAsync(expr, filePath, line, null).Wait();
		}

		// Token: 0x0600001E RID: 30 RVA: 0x000025E4 File Offset: 0x000007E4
		public static void ExecuteScriptSync(this ChromiumWebBrowser wb, in JsExpressionBuilder exprBuilder, [CallerFilePath] string filePath = "", [CallerLineNumber] int line = 0)
		{
			if (wb == null || wb.IsDisposed)
			{
				return;
			}
			Log.Write(exprBuilder.Build());
			string text = exprBuilder.Build();
			wb.ExecuteScriptSync(text, filePath, line);
		}

		// Token: 0x0600001F RID: 31 RVA: 0x0000261C File Offset: 0x0000081C
		public static void ExecuteScriptSync(this IBrowser b, in string expr, [CallerFilePath] string filePath = "", [CallerLineNumber] int line = 0)
		{
			if (b == null || b.IsDisposed)
			{
				return;
			}
			IFrame mainFrame = b.MainFrame;
			if (mainFrame == null || mainFrame.IsDisposed)
			{
				return;
			}
			mainFrame.EvaluateScriptAsync(expr, filePath, line, null).Wait();
		}

		// Token: 0x06000020 RID: 32 RVA: 0x00002660 File Offset: 0x00000860
		public static void ExecuteScriptSync(this IBrowser b, in JsExpressionBuilder exprBuilder, [CallerFilePath] string filePath = "", [CallerLineNumber] int line = 0)
		{
			Log.Write(exprBuilder.Build());
			string text = exprBuilder.Build();
			b.ExecuteScriptSync(text, filePath, line);
		}
	}
}

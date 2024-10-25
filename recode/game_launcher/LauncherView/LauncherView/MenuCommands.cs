using System;
using CefSharp;

namespace LauncherView
{
	// Token: 0x02000013 RID: 19
	internal static class MenuCommands
	{
		// Token: 0x0600007E RID: 126 RVA: 0x00003B28 File Offset: 0x00001D28
		public static bool OpenDeveloperTools(IWebBrowser browserControl, IBrowser browser, IContextMenuParams parameters, CefEventFlags eventFlags)
		{
			browser.GetHost().ShowDevTools(null, 0, 0);
			return true;
		}

		// Token: 0x0600007F RID: 127 RVA: 0x00003B39 File Offset: 0x00001D39
		public static bool ViewSource(IWebBrowser browserControl, IBrowser browser, IContextMenuParams parameters, CefEventFlags eventFlags)
		{
			browser.FocusedFrame.ViewSource();
			return true;
		}

		// Token: 0x06000080 RID: 128 RVA: 0x00003B47 File Offset: 0x00001D47
		public static bool Reload(IWebBrowser browserControl, IBrowser browser, IContextMenuParams parameters, CefEventFlags eventFlags)
		{
			browser.Reload(true);
			return true;
		}
	}
}

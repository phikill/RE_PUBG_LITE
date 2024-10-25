using System;
using System.Windows;
using CefSharp;
using CefSharp.Handler;
using LauncherModel;

namespace LauncherView
{
	// Token: 0x0200000A RID: 10
	internal class RequestHandler : DefaultRequestHandler
	{
		// Token: 0x06000015 RID: 21 RVA: 0x00002499 File Offset: 0x00000699
		public override bool OnBeforeBrowse(IWebBrowser browserControl, IBrowser browser, IFrame frame, IRequest request, bool userGesture, bool isRedirect)
		{
			return request.TransitionType.HasFlag(TransitionType.ForwardBack) || base.OnBeforeBrowse(browserControl, browser, frame, request, userGesture, isRedirect);
		}

		// Token: 0x06000016 RID: 22 RVA: 0x000024CC File Offset: 0x000006CC
		public override bool GetAuthCredentials(IWebBrowser browserControl, IBrowser browser, IFrame frame, bool isProxy, string host, int port, string realm, string scheme, IAuthCallback callback)
		{
			SharedDataContainer sharedData = Static.SharedData;
			if (string.IsNullOrWhiteSpace(sharedData.QA_ID) || string.IsNullOrWhiteSpace(sharedData.QA_PW))
			{
				MessageBox.Show("No credentials provided", "Error loading page");
				return base.GetAuthCredentials(browserControl, browser, frame, isProxy, host, port, realm, scheme, callback);
			}
			callback.Continue(sharedData.QA_ID, sharedData.QA_PW);
			if (!callback.IsDisposed)
			{
				callback.Dispose();
			}
			return true;
		}
	}
}

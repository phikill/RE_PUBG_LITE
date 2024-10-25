using System;
using System.Windows;
using System.Windows.Shapes;
using CefSharp;
using CefSharp.Wpf;
using LauncherView.JsInterop;

namespace LauncherView
{
	// Token: 0x02000011 RID: 17
	internal class LifeSpanHandler : ILifeSpanHandler
	{
		// Token: 0x06000070 RID: 112 RVA: 0x0000381D File Offset: 0x00001A1D
		public LifeSpanHandler(MainWindow mainWindow, Rectangle mainWindowDragger)
		{
			this._mainWindow = mainWindow;
			this._mainWindowDragger = mainWindowDragger;
		}

		// Token: 0x06000071 RID: 113 RVA: 0x00003833 File Offset: 0x00001A33
		public bool DoClose(IWebBrowser browserControl, IBrowser browser)
		{
			return false;
		}

		// Token: 0x06000072 RID: 114 RVA: 0x00003838 File Offset: 0x00001A38
		public void OnAfterCreated(IWebBrowser browserControl, IBrowser browser)
		{
			if (browser.IsDisposed)
			{
				return;
			}
			if (browser.IsPopup)
			{
				ChromiumWebBrowser chromiumWebBrowser;
				if ((chromiumWebBrowser = browserControl as ChromiumWebBrowser) == null)
				{
					return;
				}
				chromiumWebBrowser.Dispatcher.Invoke<bool>(() => this._mainWindow.PopupBrowsers.Add(browser));
				return;
			}
			else
			{
				ChromiumWebBrowser wb;
				if ((wb = browserControl as ChromiumWebBrowser) == null)
				{
					return;
				}
				wb.JavascriptObjectRepository.Register("_launcher_object_", new LauncherObject(wb, browser, this._mainWindow, this._mainWindowDragger), true, BindingOptions.DefaultBinder);
				App app;
				if ((app = Application.Current as App) != null)
				{
					foreach (App.WebBrowserCreateCallback webBrowserCreateCallback in app.WebBrowserCreateCallbacks.Values)
					{
						if (webBrowserCreateCallback != null)
						{
							webBrowserCreateCallback(wb, browser);
						}
					}
				}
				wb.Dispatcher.Invoke(delegate
				{
					if (string.IsNullOrWhiteSpace(wb.Title))
					{
						return;
					}
					this._mainWindow.Title = wb.Title;
				});
				return;
			}
		}

		// Token: 0x06000073 RID: 115 RVA: 0x00003980 File Offset: 0x00001B80
		public void OnBeforeClose(IWebBrowser browserControl, IBrowser browser)
		{
			ChromiumWebBrowser chromiumWebBrowser;
			if ((chromiumWebBrowser = browserControl as ChromiumWebBrowser) == null)
			{
				return;
			}
			if (browser.IsPopup)
			{
				chromiumWebBrowser.Dispatcher.Invoke<bool>(() => this._mainWindow.PopupBrowsers.Remove(browser));
			}
		}

		// Token: 0x06000074 RID: 116 RVA: 0x000039D1 File Offset: 0x00001BD1
		public bool OnBeforePopup(IWebBrowser browserControl, IBrowser browser, IFrame frame, string targetUrl, string targetFrameName, WindowOpenDisposition targetDisposition, bool userGesture, IPopupFeatures popupFeatures, IWindowInfo windowInfo, IBrowserSettings browserSettings, ref bool noJavascriptAccess, out IWebBrowser newBrowser)
		{
			newBrowser = null;
			return false;
		}

		// Token: 0x0400002B RID: 43
		private readonly MainWindow _mainWindow;

		// Token: 0x0400002C RID: 44
		private readonly Rectangle _mainWindowDragger;
	}
}

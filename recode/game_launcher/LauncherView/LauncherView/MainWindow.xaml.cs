using System;
using System.CodeDom.Compiler;
using System.Collections.Generic;
using System.ComponentModel;
using System.Diagnostics;
using System.Drawing;
using System.Globalization;
using System.IO;
using System.Linq;
using System.Reflection;
using System.Runtime.Serialization.Formatters.Binary;
using System.Text;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Forms;
using System.Windows.Input;
using System.Windows.Interop;
using System.Windows.Markup;
using System.Windows.Shapes;
using System.Windows.Threading;
using CefSharp;
using CefSharp.Wpf;
using LauncherModel;
using LauncherView.Properties;
using logger.managed;
using Microsoft.Win32;

namespace LauncherView
{
	// Token: 0x0200000F RID: 15
	public partial class MainWindow : Window
	{
		// Token: 0x06000040 RID: 64 RVA: 0x00002CCC File Offset: 0x00000ECC
		private static void OnMainBrowserMouseDown(object sender, MouseButtonEventArgs e)
		{
			ChromiumWebBrowser chromiumWebBrowser = (ChromiumWebBrowser)sender;
			if (e.LeftButton == MouseButtonState.Pressed)
			{
				MenuHandler menuHandler = chromiumWebBrowser.MenuHandler as MenuHandler;
				if (menuHandler == null)
				{
					return;
				}
				menuHandler.CloseContextMenu(chromiumWebBrowser);
			}
		}

		// Token: 0x06000041 RID: 65 RVA: 0x00002D04 File Offset: 0x00000F04
		private void OnMainBrowserTitleChanged(object sender, DependencyPropertyChangedEventArgs e)
		{
			((ChromiumWebBrowser)sender).Dispatcher.Invoke<string>(() => this.Title = (string)e.NewValue);
		}

		// Token: 0x06000042 RID: 66 RVA: 0x00002D44 File Offset: 0x00000F44
		public void OnMainBrowserLoadingStateChanged(object sender, LoadingStateChangedEventArgs e)
		{
			DispatcherObject dispatcherObject = (ChromiumWebBrowser)sender;
			Log.Write(e.IsLoading ? "LOADING" : "LOADING... COMPLETE");
			dispatcherObject.Dispatcher.InvokeAsync(delegate
			{
				this.LoadingImage.Visibility = (e.IsLoading ? Visibility.Visible : Visibility.Collapsed);
			});
		}

		// Token: 0x06000043 RID: 67 RVA: 0x00002DA0 File Offset: 0x00000FA0
		private static void OnMainBrowserLoadError(object sender, LoadErrorEventArgs e)
		{
			ChromiumWebBrowser chromiumWebBrowser = (ChromiumWebBrowser)sender;
			if (e.ErrorCode == CefErrorCode.Aborted)
			{
				Log.Write("ABORTED - " + e.FailedUrl);
				return;
			}
			string empty = string.Empty;
			string text = string.Format(LauncherView.Properties.Resources.launcher_error, empty);
			e.Frame.LoadStringForUrl(text, e.FailedUrl);
		}

		// Token: 0x06000044 RID: 68 RVA: 0x00002DF8 File Offset: 0x00000FF8
		private static void OnMainBrowserDragEnter(object sender, System.Windows.DragEventArgs e)
		{
			Log.Write("cancel drag event");
			e.Handled = true;
		}

		// Token: 0x06000045 RID: 69 RVA: 0x00002E0B File Offset: 0x0000100B
		private void OnMainWindowDraggerMouseMove(object sender, System.Windows.Input.MouseEventArgs e)
		{
			if (e.LeftButton == MouseButtonState.Pressed)
			{
				base.DragMove();
			}
		}

		// Token: 0x1700000C RID: 12
		// (get) Token: 0x06000046 RID: 70 RVA: 0x00002E1C File Offset: 0x0000101C
		public bool IsTitleFixed { get; }

		// Token: 0x1700000D RID: 13
		// (get) Token: 0x06000047 RID: 71 RVA: 0x00002E24 File Offset: 0x00001024
		// (set) Token: 0x06000048 RID: 72 RVA: 0x00002E2C File Offset: 0x0000102C
		private NotifyIcon NotifyIcon { get; set; }

		// Token: 0x1700000E RID: 14
		// (get) Token: 0x06000049 RID: 73 RVA: 0x00002E35 File Offset: 0x00001035
		public HashSet<IBrowser> PopupBrowsers { get; } = new HashSet<IBrowser>();

		// Token: 0x1700000F RID: 15
		// (get) Token: 0x0600004A RID: 74 RVA: 0x00002E3D File Offset: 0x0000103D
		// (set) Token: 0x0600004B RID: 75 RVA: 0x00002E45 File Offset: 0x00001045
		public bool IsTerminating { get; private set; }

		// Token: 0x17000010 RID: 16
		// (get) Token: 0x0600004C RID: 76 RVA: 0x00002E4E File Offset: 0x0000104E
		// (set) Token: 0x0600004D RID: 77 RVA: 0x00002E56 File Offset: 0x00001056
		public new string Title
		{
			get
			{
				return base.Title;
			}
			set
			{
				if (this.IsTitleFixed)
				{
					return;
				}
				base.Title = value;
			}
		}

		// Token: 0x0600004E RID: 78 RVA: 0x00002E68 File Offset: 0x00001068
		public MainWindow(string startUrl = null, string windowTitle = null, WindowStyle? style = null)
		{
			this.InitializeComponent();
			this.MainBrowser.BrowserSettings.ApplicationCache = CefState.Disabled;
			this.MainBrowser.LoadingStateChanged += this.OnMainBrowserLoadingStateChanged;
			this.MainBrowser.TitleChanged += this.OnMainBrowserTitleChanged;
			this.MainBrowser.RequestHandler = new RequestHandler();
			this.MainBrowser.LifeSpanHandler = new LifeSpanHandler(this, this.MainWindowDragger);
			this.MainBrowser.MenuHandler = new MenuHandler();
			this.MainBrowser.DragHandler = new DragHandler();
			this.MainBrowser.PreviewMouseDown += MainWindow.OnMainBrowserMouseDown;
			this.MainBrowser.LoadError += MainWindow.OnMainBrowserLoadError;
			base.Width = (double)MainWindow.LoginWindowWidth;
			base.Height = (double)MainWindow.LoginWindowHeight;
			this.MainWindowDragger.MouseMove += this.OnMainWindowDraggerMouseMove;
			base.Activated += this.OnActivated;
			base.Closing += MainWindow.OnClosing;
			SystemEvents.DisplaySettingsChanging += this.OnDisplaySettingChanging;
			SystemEvents.DisplaySettingsChanged += this.OnDisplaySettingChanged;
			if (!string.IsNullOrWhiteSpace(startUrl))
			{
				string text = this.GetLang();
				if (string.IsNullOrEmpty(text))
				{
					text = CultureInfo.CurrentCulture.TwoLetterISOLanguageName;
					if (text == "zh" || text == "pt")
					{
						text = CultureInfo.CurrentCulture.ToString().Replace('-', '_');
					}
				}
				this.MainBrowser.Address = startUrl + text;
				this.mStartAddress = startUrl;
			}
			if (!string.IsNullOrWhiteSpace(windowTitle))
			{
				this.Title = windowTitle;
				this.IsTitleFixed = true;
			}
			if (style != null)
			{
				base.WindowStyle = style.Value;
			}
			base.ResizeMode = ResizeMode.CanMinimize;
			base.WindowStartupLocation = WindowStartupLocation.CenterScreen;
			MessageTextHelper.Load();
			this.PrepareNotifyIcon();
			this.MainBrowser.Focus();
			this.InitializeCommandTable();
			TrayRefresher.RefreshTrayArea();
		}

		// Token: 0x0600004F RID: 79 RVA: 0x0000309C File Offset: 0x0000129C
		public MainWindow.MainWindowPage GetCurrentPage()
		{
			MainWindow.MainWindowPage mainWindowPage;
			try
			{
				mainWindowPage = (MainWindow.MainWindowPage)Enum.Parse(typeof(MainWindow.MainWindowPage), Path.ChangeExtension(new Uri(this.MainBrowser.Address).Segments.Last<string>().Replace("/", string.Empty), null), true);
			}
			catch
			{
				mainWindowPage = MainWindow.MainWindowPage.Login;
			}
			return mainWindowPage;
		}

		// Token: 0x06000050 RID: 80 RVA: 0x00003108 File Offset: 0x00001308
		public void ResizeToOrigin(MainWindow.MainWindowPage currentPage)
		{
			if (currentPage == MainWindow.MainWindowPage.Login)
			{
				this.Resize((double)MainWindow.LoginWindowWidth, (double)MainWindow.LoginWindowHeight);
				return;
			}
			if (currentPage != MainWindow.MainWindowPage.Launcher)
			{
				throw new ApplicationException("invalid launcher page");
			}
			this.Resize((double)MainWindow.MainWindowWidth, (double)MainWindow.MainWindowHeight);
		}

		// Token: 0x06000051 RID: 81 RVA: 0x00003143 File Offset: 0x00001343
		public void Resize(double width, double height)
		{
			base.Width = width;
			base.Height = height;
		}

		// Token: 0x06000052 RID: 82 RVA: 0x00003154 File Offset: 0x00001354
		public void PositionToCenter()
		{
			Rect workArea = SystemParameters.WorkArea;
			base.Left = (workArea.Width - base.Width) / 2.0 + workArea.Left;
			base.Top = (workArea.Height - base.Height) / 2.0 + workArea.Top;
		}

		// Token: 0x06000053 RID: 83 RVA: 0x000031B3 File Offset: 0x000013B3
		public void ResizeOriginSizePosition()
		{
			this.ResizeToOrigin(this.GetCurrentPage());
			this.PositionToCenter();
		}

		// Token: 0x06000054 RID: 84 RVA: 0x000031C7 File Offset: 0x000013C7
		private void OnActivated(object sender, EventArgs e)
		{
			if (!this.IsTerminating)
			{
				base.Visibility = Visibility.Visible;
				base.Focus();
				this.MainBrowser.Focus();
			}
		}

		// Token: 0x06000055 RID: 85 RVA: 0x000031EC File Offset: 0x000013EC
		private static void OnClosing(object sender, CancelEventArgs e)
		{
			e.Cancel = true;
			MainWindow mainWindow = (MainWindow)sender;
			MainWindow.MainWindowPage currentPage = mainWindow.GetCurrentPage();
			if (currentPage == MainWindow.MainWindowPage.Launcher)
			{
				IntPtr handle = new WindowInteropHelper(mainWindow).Handle;
				LauncherInterop.ShowWindow(handle, 1);
				LauncherInterop.SetForegroundWindow(handle);
				mainWindow.ShowCloseModal();
				return;
			}
			if (!mainWindow.IsTerminating)
			{
				mainWindow.IsTerminating = true;
				mainWindow.TerminateApp();
			}
		}

		// Token: 0x06000056 RID: 86 RVA: 0x0000221D File Offset: 0x0000041D
		private void OnDisplaySettingChanging(object sender, EventArgs e)
		{
		}

		// Token: 0x06000057 RID: 87 RVA: 0x00003246 File Offset: 0x00001446
		private void OnDisplaySettingChanged(object sender, EventArgs e)
		{
			this.ResizeOriginSizePosition();
		}

		// Token: 0x06000058 RID: 88 RVA: 0x0000324E File Offset: 0x0000144E
		public void TerminateApp()
		{
			this.NotifyIcon.Visible = false;
			this.NotifyIcon.Dispose();
			App.OnExit(18);
			System.Windows.Application.Current.Shutdown();
		}

		// Token: 0x06000059 RID: 89 RVA: 0x00003278 File Offset: 0x00001478
		public UserLocalConfig LoadUserLocalConfig()
		{
			UserLocalConfig userLocalConfig;
			try
			{
				using (MemoryStream memoryStream = new MemoryStream(Convert.FromBase64String(File.ReadAllText("./launcher.custom.config", Encoding.ASCII))))
				{
					BinaryFormatter binaryFormatter = new BinaryFormatter();
					memoryStream.Seek(0L, SeekOrigin.Begin);
					userLocalConfig = (UserLocalConfig)binaryFormatter.Deserialize(memoryStream);
				}
			}
			catch
			{
				userLocalConfig = new UserLocalConfig();
			}
			return userLocalConfig;
		}

		// Token: 0x0600005A RID: 90 RVA: 0x000032EC File Offset: 0x000014EC
		public string GetLang()
		{
			string text;
			try
			{
				UserLocalConfig userLocalConfig = this.LoadUserLocalConfig();
				if (userLocalConfig != null)
				{
					text = userLocalConfig.DefaultLanguage;
				}
				else
				{
					text = string.Empty;
				}
			}
			catch
			{
				text = string.Empty;
			}
			return text;
		}

		// Token: 0x0600005B RID: 91 RVA: 0x00003330 File Offset: 0x00001530
		public void ShowCloseModal()
		{
			JsExpressionBuilder jsExpressionBuilder = new JsExpressionBuilder("document", "dispatchEvent", new string[] { "new Event('ShowCloseModal')" });
			if (!this.MainBrowser.IsDisposed)
			{
				this.MainBrowser.ExecuteScriptSync(jsExpressionBuilder, "C:\\C_Workspace\\client-launcher\\launcher\\LauncherView\\MainWindow.xaml.cs", 261);
			}
		}

		// Token: 0x0600005C RID: 92 RVA: 0x00003380 File Offset: 0x00001580
		public void NotifyIconMouseClick(object sender, System.Windows.Forms.MouseEventArgs e)
		{
			MouseButtons button = e.Button;
			if (button == MouseButtons.Left)
			{
				base.Visibility = Visibility.Visible;
				base.Focus();
				this.MainBrowser.Focus();
			}
		}

		// Token: 0x0600005D RID: 93 RVA: 0x000033B8 File Offset: 0x000015B8
		private void PrepareNotifyIcon()
		{
			this.NotifyIcon = new NotifyIcon();
			this.NotifyIcon.Icon = System.Drawing.Icon.ExtractAssociatedIcon(System.Windows.Forms.Application.ExecutablePath);
			this.NotifyIcon.Visible = true;
			this.NotifyIcon.ContextMenu = new System.Windows.Forms.ContextMenu();
			this.NotifyIcon.Text = FileVersionInfo.GetVersionInfo(Assembly.GetEntryAssembly().Location).ProductName;
			this.NotifyIcon.ContextMenu.MenuItems.AddRange(new System.Windows.Forms.MenuItem[]
			{
				new System.Windows.Forms.MenuItem(MessageTextHelper.GetStringValue("ContextMenuTextClose"), new EventHandler(this.OnNotifyIconContextMenu))
			});
			this.NotifyIcon.MouseClick += this.NotifyIconMouseClick;
			this.mContextMenuStringMatchList.Add(new KeyValuePair<ContextMenuItems, string>(ContextMenuItems.Close, MessageTextHelper.GetStringValue("ContextMenuTextClose")));
		}

		// Token: 0x0600005E RID: 94 RVA: 0x0000348C File Offset: 0x0000168C
		private void OnNotifyIconContextMenu(object sender, EventArgs e)
		{
			System.Windows.Forms.MenuItem executedMenu = (System.Windows.Forms.MenuItem)sender;
			ContextMenuItems key = this.mContextMenuStringMatchList.Find((KeyValuePair<ContextMenuItems, string> k) => k.Value == executedMenu.Text).Key;
			this.ExecuteCommand(key);
		}

		// Token: 0x0600005F RID: 95 RVA: 0x000034D2 File Offset: 0x000016D2
		private void InitializeCommandTable()
		{
			this.mCommandDictionary.Add(ContextMenuItems.Close, new Action(this.OnCloseCommand));
		}

		// Token: 0x06000060 RID: 96 RVA: 0x000034EC File Offset: 0x000016EC
		private void ExecuteCommand(ContextMenuItems item)
		{
			try
			{
				this.mCommandDictionary[item]();
			}
			catch (IndexOutOfRangeException ex)
			{
				throw ex;
			}
			catch
			{
				throw new ApplicationException("error occurred while context menu exectuion.");
			}
		}

		// Token: 0x06000061 RID: 97 RVA: 0x0000221D File Offset: 0x0000041D
		public void OnLogin()
		{
		}

		// Token: 0x06000062 RID: 98 RVA: 0x00003538 File Offset: 0x00001738
		public void OnLogout()
		{
			this.Resize((double)MainWindow.LoginWindowWidth, (double)MainWindow.LoginWindowHeight);
			this.PositionToCenter();
			this.MainWindowDragger.Width = 346.0;
			this.MainWindowDragger.Height = 30.0;
			this.MainWindowDragger.HorizontalAlignment = System.Windows.HorizontalAlignment.Left;
			this.MainBrowser.Load(this.mStartAddress + this.GetLang());
			this.MainBrowser.Focus();
		}

		// Token: 0x06000063 RID: 99 RVA: 0x000035B9 File Offset: 0x000017B9
		public void OnRestartLoginFlow()
		{
			this.MainBrowser.Load(this.mStartAddress + this.GetLang());
		}

		// Token: 0x06000064 RID: 100 RVA: 0x000035D7 File Offset: 0x000017D7
		private void OnCloseCommand()
		{
			if (this.GetCurrentPage() == MainWindow.MainWindowPage.Login)
			{
				this.IsTerminating = true;
				this.TerminateApp();
				return;
			}
			base.Visibility = Visibility.Visible;
			base.Focus();
			this.MainBrowser.Focus();
			this.ShowCloseModal();
		}

		// Token: 0x06000065 RID: 101 RVA: 0x00003610 File Offset: 0x00001810
		public System.Windows.Forms.MenuItem GetMenu(string name)
		{
			foreach (object obj in this.NotifyIcon.ContextMenu.MenuItems)
			{
				System.Windows.Forms.MenuItem menuItem = (System.Windows.Forms.MenuItem)obj;
				if (menuItem.Text == name)
				{
					return menuItem;
				}
			}
			return null;
		}

		// Token: 0x06000066 RID: 102 RVA: 0x00003684 File Offset: 0x00001884
		public void CollapseToTrayIcon()
		{
			if (!this.IsTerminating)
			{
				base.Hide();
				this.NotifyIcon.Visible = true;
			}
		}

		// Token: 0x04000019 RID: 25
		internal static readonly int LoginWindowWidth = 400;

		// Token: 0x0400001A RID: 26
		internal static readonly int LoginWindowHeight = 630;

		// Token: 0x0400001B RID: 27
		internal static readonly int MainWindowWidth = 1280;

		// Token: 0x0400001C RID: 28
		internal static readonly int MainWindowHeight = 760;

		// Token: 0x04000021 RID: 33
		private string mStartAddress = string.Empty;

		// Token: 0x04000022 RID: 34
		private Dictionary<ContextMenuItems, Action> mCommandDictionary = new Dictionary<ContextMenuItems, Action>();

		// Token: 0x04000023 RID: 35
		private List<KeyValuePair<ContextMenuItems, string>> mContextMenuStringMatchList = new List<KeyValuePair<ContextMenuItems, string>>();

		// Token: 0x02000022 RID: 34
		public enum WindowsMessage
		{
			// Token: 0x0400004E RID: 78
			WM_CLOSE = 16,
			// Token: 0x0400004F RID: 79
			WM_QUIT = 18
		}

		// Token: 0x02000023 RID: 35
		public enum MainWindowPage
		{
			// Token: 0x04000051 RID: 81
			Login,
			// Token: 0x04000052 RID: 82
			Launcher
		}
	}
}

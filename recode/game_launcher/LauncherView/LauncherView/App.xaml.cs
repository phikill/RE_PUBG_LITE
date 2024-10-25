using System;
using System.CodeDom.Compiler;
using System.Collections.Generic;
using System.ComponentModel;
using System.Diagnostics;
using System.IO;
using System.Linq;
using System.Net;
using System.Net.Sockets;
using System.Threading;
using System.Windows;
using System.Windows.Interop;
using System.Windows.Markup;
using CefSharp;
using CefSharp.Wpf;
using ipc.managed;
using ipc.managed.mutex;
using LauncherApiServer;
using LauncherModel;
using LauncherUtil;
using logger.managed;

namespace LauncherView
{
	// Token: 0x0200000E RID: 14
	public partial class App : Application
	{
		// Token: 0x17000008 RID: 8
		// (get) Token: 0x06000028 RID: 40 RVA: 0x0000268B File Offset: 0x0000088B
		// (set) Token: 0x06000029 RID: 41 RVA: 0x00002693 File Offset: 0x00000893
		internal SharedDataContainer SharedData { get; private set; }

		// Token: 0x17000009 RID: 9
		// (get) Token: 0x0600002A RID: 42 RVA: 0x0000269C File Offset: 0x0000089C
		// (set) Token: 0x0600002B RID: 43 RVA: 0x000026A4 File Offset: 0x000008A4
		internal scoped_shm_writer LcWriter { get; private set; }

		// Token: 0x1700000A RID: 10
		// (get) Token: 0x0600002C RID: 44 RVA: 0x000026AD File Offset: 0x000008AD
		// (set) Token: 0x0600002D RID: 45 RVA: 0x000026B5 File Offset: 0x000008B5
		internal locker ClientLocker { get; private set; }

		// Token: 0x1700000B RID: 11
		// (get) Token: 0x0600002E RID: 46 RVA: 0x000026BE File Offset: 0x000008BE
		// (set) Token: 0x0600002F RID: 47 RVA: 0x000026C6 File Offset: 0x000008C6
		internal ApiServer ApiServer { get; private set; }

		// Token: 0x06000031 RID: 49 RVA: 0x000026E4 File Offset: 0x000008E4
		public void Init(App.StartArgs args)
		{
			if (args == null)
			{
				throw new ArgumentNullException("args");
			}
			if (args.IniModuleSectionData == null)
			{
				throw new ArgumentNullException("args.IniModuleSectionData");
			}
			if (args.SharedData == null)
			{
				throw new ArgumentNullException("args.SharedData");
			}
			this._startArgs = args;
			this.SharedData = this._startArgs.SharedData;
			this.InitializeComponent();
			this._initialized = true;
		}

		// Token: 0x06000032 RID: 50 RVA: 0x0000274C File Offset: 0x0000094C
		protected override void OnStartup(StartupEventArgs e)
		{
			if (!this._initialized)
			{
				return;
			}
			IniModuleSection iniModuleSectionData = this._startArgs.IniModuleSectionData;
			CefSettings cefSettings = new CefSettings
			{
				LogSeverity = LogSeverity.Disable
			};
			if (!string.IsNullOrWhiteSpace(iniModuleSectionData.CefLocale))
			{
				cefSettings.Locale = iniModuleSectionData.CefLocale;
			}
			if (!string.IsNullOrWhiteSpace(iniModuleSectionData.CefAcceptLanguage))
			{
				cefSettings.AcceptLanguageList = iniModuleSectionData.CefAcceptLanguage;
			}
			if (iniModuleSectionData.CefUseCache && !string.IsNullOrWhiteSpace(iniModuleSectionData.CefCacheDir))
			{
				cefSettings.CachePath = Path.Combine(ProgramData.PathForProduct, iniModuleSectionData.CefCacheDir);
			}
			if (e.Args.Where((string elem) => elem.IndexOf("ClearCefCache", StringComparison.OrdinalIgnoreCase) >= 0).FirstOrDefault<string>() != null)
			{
				DirectoryInfo directoryInfo = new DirectoryInfo(cefSettings.CachePath);
				FileInfo[] files = directoryInfo.GetFiles();
				for (int i = 0; i < files.Length; i++)
				{
					files[i].Delete();
				}
				foreach (DirectoryInfo directoryInfo2 in directoryInfo.EnumerateDirectories())
				{
					directoryInfo2.Delete(true);
				}
			}
			Cef.EnableHighDPISupport();
			CefSharpSettings.SubprocessExitIfParentProcessClosed = true;
			Cef.Initialize(cefSettings);
			MainWindow mainWindow = new MainWindow(iniModuleSectionData.UrlLogin, iniModuleSectionData.WindowTitle, iniModuleSectionData.ForceDisplayWindowTitle ? new WindowStyle?(WindowStyle.SingleBorderWindow) : null);
			AppDomain.CurrentDomain.UnhandledException += App.OnUnhandledException;
			mainWindow.Show();
			if (iniModuleSectionData.LauncherAgentName != null && iniModuleSectionData.LauncherAgentName != string.Empty)
			{
				this.StartLauncherAgent();
			}
			this.LcWriter = shm.new_writer();
			this.LcWriter.write_window_handle(new WindowInteropHelper(mainWindow).Handle);
			this.ClientLocker = locker.new_lc_client(true);
			IPAddress loopback = IPAddress.Loopback;
			string text;
			using (Socket socket = new Socket(loopback.AddressFamily, SocketType.Stream, ProtocolType.Tcp))
			{
				socket.Bind(new IPEndPoint(loopback, 0));
				IPEndPoint ipendPoint = (IPEndPoint)socket.LocalEndPoint;
				text = string.Format("http://{0}", ipendPoint);
			}
			this.ApiServer = new ApiServer();
			this.ApiServer.Initialize(text, new PUBGClientService(this.SharedData));
			if (!this.ApiServer.Start(true))
			{
				this._startArgs = null;
				mainWindow.Close();
				return;
			}
			Log.Write(string.Format("API Server listening on port {0}", this.ApiServer.Port));
			this.LcWriter.write_api_server_port(this.ApiServer.Port);
			mainWindow.Focus();
			this._startArgs = null;
		}

		// Token: 0x06000033 RID: 51 RVA: 0x00002A04 File Offset: 0x00000C04
		private static void OnUnhandledException(object sender, UnhandledExceptionEventArgs e)
		{
			App.OnExit(18);
		}

		// Token: 0x06000034 RID: 52 RVA: 0x00002A0D File Offset: 0x00000C0D
		protected override void OnExit(ExitEventArgs e)
		{
			App.OnExit(e.ApplicationExitCode);
		}

		// Token: 0x06000035 RID: 53 RVA: 0x00002A1C File Offset: 0x00000C1C
		internal static void OnExit(int exitCode)
		{
			if (Interlocked.CompareExchange(ref App._exitCalled, 1, 0) == 1)
			{
				return;
			}
			App app;
			if ((app = Application.Current as App) == null)
			{
				return;
			}
			Log.Write(string.Format(string.Format("exiting launcher with code : {0}", exitCode), new object[0]));
			ApiServer apiServer = app.ApiServer;
			if (apiServer != null)
			{
				apiServer.Stop();
			}
			scoped_shm_writer lcWriter = app.LcWriter;
			if (lcWriter != null)
			{
				lcWriter.Dispose();
			}
			locker clientLocker = app.ClientLocker;
			if (clientLocker != null)
			{
				clientLocker.Dispose();
			}
			App.Logout();
		}

		// Token: 0x06000036 RID: 54 RVA: 0x00002AA8 File Offset: 0x00000CA8
		public static void Logout()
		{
			if (Interlocked.CompareExchange(ref App._logoutting, 0, 1) != 0)
			{
				return;
			}
			Log.Write("Logout started.");
			App app;
			if ((app = Application.Current as App) == null)
			{
				return;
			}
			SharedDataContainer sharedData = app.SharedData;
			bool flag;
			if (sharedData == null)
			{
				flag = null != null;
			}
			else
			{
				SessionData session = sharedData.Session;
				flag = ((session != null) ? session.SessionId : null) != null;
			}
			if (!flag)
			{
				Log.Write("Not logged in, skipping logout");
				return;
			}
			if (string.IsNullOrWhiteSpace((sharedData != null) ? sharedData.UrlLogout : null))
			{
				return;
			}
			Interlocked.Exchange(ref App._logoutting, 0);
			app.SharedData.Session = new SessionData();
		}

		// Token: 0x06000037 RID: 55 RVA: 0x00002B3C File Offset: 0x00000D3C
		public static bool IsUserLoggedIn()
		{
			App app;
			if ((app = Application.Current as App) == null)
			{
				return false;
			}
			SharedDataContainer sharedData = app.SharedData;
			return sharedData != null && sharedData.Session != null && !string.IsNullOrEmpty(sharedData.Session.SessionId);
		}

		// Token: 0x06000038 RID: 56 RVA: 0x00002B84 File Offset: 0x00000D84
		public void AddWebBrowserCreateCallback(string objectModuleName, App.WebBrowserCreateCallback cb)
		{
			this.WebBrowserCreateCallbacks[objectModuleName] = cb;
		}

		// Token: 0x06000039 RID: 57 RVA: 0x00002B93 File Offset: 0x00000D93
		public new int Run()
		{
			return base.Run();
		}

		// Token: 0x0600003A RID: 58 RVA: 0x00002B9C File Offset: 0x00000D9C
		private void StartLauncherAgent()
		{
			Process process = Process.Start(new ProcessStartInfo
			{
				FileName = this.SharedData.LauncherAgentName,
				WindowStyle = ProcessWindowStyle.Hidden,
				CreateNoWindow = true,
				UseShellExecute = true,
				WorkingDirectory = AppDomain.CurrentDomain.BaseDirectory,
				Verb = "runas"
			});
			if (process != null && !process.HasExited)
			{
				process.EnableRaisingEvents = true;
				process.Exited += delegate(object sender, EventArgs args)
				{
					if (App._exitCalled == 0)
					{
						this.StartLauncherAgent();
					}
				};
			}
		}

		// Token: 0x0600003B RID: 59 RVA: 0x00002C1C File Offset: 0x00000E1C
		private void TerminateLauncherAgent()
		{
			Process.Start(new ProcessStartInfo("taskkill", "/F /T /IM " + this.SharedData.LauncherAgentName)
			{
				WindowStyle = ProcessWindowStyle.Hidden,
				CreateNoWindow = true,
				UseShellExecute = false,
				WorkingDirectory = AppDomain.CurrentDomain.BaseDirectory,
				RedirectStandardOutput = true,
				RedirectStandardError = true
			});
		}

		// Token: 0x0400000F RID: 15
		private App.StartArgs _startArgs;

		// Token: 0x04000014 RID: 20
		internal readonly Dictionary<string, App.WebBrowserCreateCallback> WebBrowserCreateCallbacks = new Dictionary<string, App.WebBrowserCreateCallback>();

		// Token: 0x04000015 RID: 21
		private bool _initialized;

		// Token: 0x04000016 RID: 22
		private static int _exitCalled;

		// Token: 0x04000017 RID: 23
		private static int _logoutting;

		// Token: 0x0200001E RID: 30
		public class StartArgs
		{
			// Token: 0x04000049 RID: 73
			public IniModuleSection IniModuleSectionData;

			// Token: 0x0400004A RID: 74
			public SharedDataContainer SharedData;
		}

		// Token: 0x0200001F RID: 31
		// (Invoke) Token: 0x060000DE RID: 222
		public delegate void WebBrowserCreateCallback(ChromiumWebBrowser wb, IBrowser b);

		// Token: 0x02000020 RID: 32
		// (Invoke) Token: 0x060000E2 RID: 226
		public delegate void AddWebBrowserCreateCallbackFn(string objectModuleName, App.WebBrowserCreateCallback cb);
	}
}

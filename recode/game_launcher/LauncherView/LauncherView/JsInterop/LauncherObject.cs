using System;
using System.ComponentModel;
using System.Diagnostics;
using System.IO;
using System.Management;
using System.Runtime.Serialization.Formatters.Binary;
using System.Text;
using System.Text.RegularExpressions;
using System.Threading.Tasks;
using System.Windows;
using System.Windows.Forms;
using System.Windows.Shapes;
using CefSharp;
using CefSharp.Wpf;
using LauncherModel;
using LauncherUtil;
using logger.managed;

namespace LauncherView.JsInterop
{
	// Token: 0x02000018 RID: 24
	internal class LauncherObject
	{
		// Token: 0x0600009B RID: 155 RVA: 0x00004010 File Offset: 0x00002210
		public LauncherObject(ChromiumWebBrowser wb, IBrowser b, MainWindow mainWindow, Rectangle mainWindowDragger)
		{
			this._wb = wb;
			this._b = b;
			this._mainWindow = mainWindow;
			this._mainWindowDragger = mainWindowDragger;
		}

		// Token: 0x0600009C RID: 156 RVA: 0x00004040 File Offset: 0x00002240
		public bool Resize(double width, double height)
		{
			Log.Write(string.Format("{0} ({1}, {2})", "Resize", width, height));
			this._wb.Dispatcher.Invoke(delegate
			{
				this._mainWindow.Width = width;
				this._mainWindow.Height = height;
				this._wb.Width = width;
				this._wb.Height = height;
			});
			return true;
		}

		// Token: 0x0600009D RID: 157 RVA: 0x000040B0 File Offset: 0x000022B0
		public bool ResizeDragger(double width, double height, System.Windows.HorizontalAlignment align = System.Windows.HorizontalAlignment.Left)
		{
			Log.Write(string.Format("{0} ({1}, {2})", "ResizeDragger", width, height));
			this._wb.Dispatcher.Invoke(delegate
			{
				this._mainWindowDragger.Width = width;
				this._mainWindowDragger.Height = height;
				this._mainWindowDragger.HorizontalAlignment = align;
			});
			return true;
		}

		// Token: 0x0600009E RID: 158 RVA: 0x00004126 File Offset: 0x00002326
		public void ResizeOriginSizePosition()
		{
			this._wb.Dispatcher.Invoke(delegate
			{
				this._mainWindow.ResizeOriginSizePosition();
			});
		}

		// Token: 0x0600009F RID: 159 RVA: 0x00004144 File Offset: 0x00002344
		public bool ResizeAndMove(double width, double height, double positionX, double positionY)
		{
			Log.Write(string.Format("{0} ({1}, {2}, {3}, {4})", new object[] { "ResizeAndMove", width, height, positionX, positionY }));
			this._wb.Dispatcher.Invoke(delegate
			{
				this._mainWindow.Width = width;
				this._mainWindow.Height = height;
				this._mainWindow.Left = positionX;
				this._mainWindow.Top = positionY;
			});
			return true;
		}

		// Token: 0x060000A0 RID: 160 RVA: 0x000041F0 File Offset: 0x000023F0
		public LauncherObject.WindowSize GetSize()
		{
			Log.Write("GetSize");
			LauncherObject.WindowSize size = new LauncherObject.WindowSize();
			this._wb.Dispatcher.Invoke(delegate
			{
				size.Width = this._mainWindow.Width;
				size.Height = this._mainWindow.Height;
			});
			return size;
		}

		// Token: 0x060000A1 RID: 161 RVA: 0x00004241 File Offset: 0x00002441
		public bool Minimize()
		{
			return this.Hide();
		}

		// Token: 0x060000A2 RID: 162 RVA: 0x00004249 File Offset: 0x00002449
		public bool Close()
		{
			this.ClearCookie();
			Log.Write("Close");
			this._wb.Dispatcher.Invoke(delegate
			{
				this._mainWindow.TerminateApp();
			});
			return true;
		}

		// Token: 0x060000A3 RID: 163 RVA: 0x00004279 File Offset: 0x00002479
		public bool Show()
		{
			Log.Write("Show");
			this._wb.Dispatcher.Invoke(delegate
			{
				this._mainWindow.Visibility = Visibility.Visible;
			});
			return true;
		}

		// Token: 0x060000A4 RID: 164 RVA: 0x000042A2 File Offset: 0x000024A2
		public bool Hide()
		{
			Log.Write("Hide");
			this._wb.Dispatcher.Invoke(delegate
			{
				this._mainWindow.Visibility = Visibility.Collapsed;
			});
			return true;
		}

		// Token: 0x060000A5 RID: 165 RVA: 0x000042CB File Offset: 0x000024CB
		public bool Reload()
		{
			Log.Write("Reload");
			this._b.Reload(true);
			return true;
		}

		// Token: 0x060000A6 RID: 166 RVA: 0x000042E4 File Offset: 0x000024E4
		public bool ClearCookie()
		{
			Log.Write("ClearCookie");
			IRequestContext globalRequestContext = Cef.GetGlobalRequestContext();
			if (globalRequestContext == null)
			{
				Log.Write("null context");
				return true;
			}
			ICookieManager defaultCookieManager = globalRequestContext.GetDefaultCookieManager(null);
			if (defaultCookieManager == null)
			{
				Log.Write("null manager");
				return true;
			}
			defaultCookieManager.DeleteCookies(string.Empty, string.Empty, null);
			return true;
		}

		// Token: 0x060000A7 RID: 167 RVA: 0x0000433A File Offset: 0x0000253A
		public bool OpenDefaultBrowser(in string url)
		{
			Log.Write("OpenDefaultBrowser : " + url);
			return Process.Start(new ProcessStartInfo
			{
				FileName = url,
				UseShellExecute = true
			}) != null;
		}

		// Token: 0x060000A8 RID: 168 RVA: 0x00004369 File Offset: 0x00002569
		public bool Is64BitLauncher()
		{
			return Common.Is64BitLauncher;
		}

		// Token: 0x060000A9 RID: 169 RVA: 0x00004370 File Offset: 0x00002570
		public bool Is64BitOS()
		{
			return Common.Is64BitOS;
		}

		// Token: 0x060000AA RID: 170 RVA: 0x00004377 File Offset: 0x00002577
		public string GetLauncherVersion()
		{
			Log.Write("GetLauncherVersion");
			return Common.VersionInfo.FileVersion;
		}

		// Token: 0x060000AB RID: 171 RVA: 0x00004390 File Offset: 0x00002590
		public LauncherObject.InstallInfo GetInstallInfo(in string path = null)
		{
			Log.Write("GetInstallInfo");
			string text = path ?? Static.SharedData.InstallPathOverride;
			return new LauncherObject.InstallInfo(text);
		}

		// Token: 0x060000AC RID: 172 RVA: 0x000043BF File Offset: 0x000025BF
		public bool Alert(in string content, in string title = null)
		{
			return System.Windows.MessageBox.Show(content, title, MessageBoxButton.OK, MessageBoxImage.None, MessageBoxResult.OK, System.Windows.MessageBoxOptions.DefaultDesktopOnly) == MessageBoxResult.OK;
		}

		// Token: 0x060000AD RID: 173 RVA: 0x000043D8 File Offset: 0x000025D8
		public void OnLogin(in string sessionId, in string accountGuid, in string email = "test@email.net", in bool checkSavedId = false, in string countryCode = "Unknown", in string createdAt = "")
		{
			SharedDataContainer sharedData = Static.SharedData;
			SessionData session = sharedData.Session;
			session.SessionId = sessionId;
			session.AccountGuid = accountGuid;
			session.LoginTimeStamp = (DateTime.UtcNow - new DateTime(1970, 1, 1)).TotalMilliseconds;
			session.Email = email;
			session.CountryCode = countryCode;
			session.CreatedAt = createdAt;
			this.ResizeAndMove((double)MainWindow.MainWindowWidth, (double)MainWindow.MainWindowHeight, (double)((Screen.PrimaryScreen.WorkingArea.Width - MainWindow.MainWindowWidth) / 2), (double)((Screen.PrimaryScreen.WorkingArea.Height - MainWindow.MainWindowHeight) / 2));
			this.ResizeDragger(1152.0, 30.0, System.Windows.HorizontalAlignment.Center);
			this._isLoggedIn = true;
			this._wb.Load(sharedData.UrlMain);
			this._mainWindow.OnLogin();
			Task.Run(delegate
			{
				this.HeartBeat();
			}).ConfigureAwait(false);
		}

		// Token: 0x060000AE RID: 174 RVA: 0x000044DC File Offset: 0x000026DC
		public void SaveEmail(in string email)
		{
			Static.SharedData.Session.Email = email;
			this.SetSavedId(!string.IsNullOrEmpty(email));
		}

		// Token: 0x060000AF RID: 175 RVA: 0x00004500 File Offset: 0x00002700
		public string GetLoginInfo()
		{
			return string.Concat(new string[]
			{
				"{ \"sessionId\" : \"",
				Static.SharedData.Session.SessionId,
				"\", ",
				string.Format("\"loginTimeStamp\": \"{0}\", ", Static.SharedData.Session.LoginTimeStamp),
				"\"email\": \"",
				Static.SharedData.Session.Email,
				"\", \"accountGuid\": \"",
				Static.SharedData.Session.AccountGuid,
				"\" } "
			});
		}

		// Token: 0x060000B0 RID: 176 RVA: 0x00004598 File Offset: 0x00002798
		public int ExecuteGame(string arguments = null)
		{
			Log.Write("ExecuteGame");
			SharedDataContainer sharedData = Static.SharedData;
			if (sharedData.ClientProcessMgr.IsClientRunning)
			{
				return 1056;
			}
			string installPathOverride = sharedData.InstallPathOverride;
			LauncherObject.InstallInfo installInfo = new LauncherObject.InstallInfo(installPathOverride);
			string installPath = installInfo.InstallPath;
			StringBuilder stringBuilder = new StringBuilder();
			stringBuilder.Append(" ");
			string text;
			if (!string.IsNullOrWhiteSpace(sharedData.GameStarterExecutableName))
			{
				text = Path.Combine(installPath, sharedData.GameStarterExecutableName);
				stringBuilder.Append(sharedData.GameExecutableName ?? "");
				stringBuilder.Append(" ");
			}
			else
			{
				text = Path.Combine(installPath, sharedData.GameExecutableName);
			}
			if (!string.IsNullOrWhiteSpace(sharedData.GameExecuteArguments))
			{
				stringBuilder.Append(sharedData.GameExecuteArguments + " ");
			}
			if (!string.IsNullOrWhiteSpace(arguments))
			{
				stringBuilder.Append(arguments + " ");
			}
			string text2 = LauncherObject.Whitespaces.Replace(stringBuilder.ToString().TrimEnd(new char[0]), " ");
			if (!installInfo.IsInstallDirExist || !File.Exists(Path.Combine(installPath, sharedData.GameExecutableName)))
			{
				return 1614;
			}
			try
			{
				Process process = Process.Start(new ProcessStartInfo
				{
					FileName = text,
					Arguments = text2,
					CreateNoWindow = false,
					UseShellExecute = false,
					WorkingDirectory = installPath
				});
				if (!string.IsNullOrWhiteSpace(sharedData.GameStarterExecutableName))
				{
					this.SetExitEventOnGameStarter(process);
				}
				if (Static.SharedData.ClientProcessMgr.CheckLinkToClient())
				{
					this._wb.Dispatcher.Invoke(delegate
					{
						this._mainWindow.CollapseToTrayIcon();
					});
					this.SetExitEventOnGameClient(Static.SharedData.ClientProcessMgr.Client);
				}
			}
			catch (FileNotFoundException ex)
			{
				Log.Write(ex.ToString());
				return Common.ToWin32ErrorCode(ex.HResult);
			}
			catch (Win32Exception ex2)
			{
				Log.Write(ex2.ToString());
				return ex2.NativeErrorCode;
			}
			catch (Exception ex3)
			{
				Log.Write(ex3.ToString());
				return 65535;
			}
			return 0;
		}

		// Token: 0x060000B1 RID: 177 RVA: 0x000047BC File Offset: 0x000029BC
		public string GetSessionValidatorUrl()
		{
			return Static.SharedData.UrlSessionValidator;
		}

		// Token: 0x060000B2 RID: 178 RVA: 0x000047C8 File Offset: 0x000029C8
		public string GetPatchSourceUrl()
		{
			return Static.SharedData.UrlPatchSource;
		}

		// Token: 0x060000B3 RID: 179 RVA: 0x000047D4 File Offset: 0x000029D4
		public long GetDriveFreeSpace(string installPath)
		{
			string pathRoot = Path.GetPathRoot(installPath);
			if (pathRoot == null)
			{
				return 0L;
			}
			DriveInfo driveInfo = new DriveInfo(pathRoot);
			if (!driveInfo.IsReady)
			{
				return 0L;
			}
			return driveInfo.AvailableFreeSpace;
		}

		// Token: 0x060000B4 RID: 180 RVA: 0x00004806 File Offset: 0x00002A06
		public void Logout()
		{
			this.ClearCookie();
			App.Logout();
			this._wb.Dispatcher.Invoke(delegate
			{
				this._mainWindow.OnLogout();
			});
			this._isLoggedIn = false;
		}

		// Token: 0x060000B5 RID: 181 RVA: 0x00004837 File Offset: 0x00002A37
		public void RestartLoginFlow()
		{
			this._mainWindow.OnRestartLoginFlow();
		}

		// Token: 0x060000B6 RID: 182 RVA: 0x00004844 File Offset: 0x00002A44
		private void SetExitEventOnGameClient(Process proc)
		{
			if (proc != null && !proc.HasExited)
			{
				proc.EnableRaisingEvents = true;
				proc.Exited += delegate(object sender, EventArgs args)
				{
					JsExpressionBuilder jsExpressionBuilder = new JsExpressionBuilder("document", "dispatchEvent", new string[] { "new Event('gameClose')" });
					if (!this._wb.IsDisposed)
					{
						this._wb.ExecuteScriptSync(jsExpressionBuilder, "C:\\C_Workspace\\client-launcher\\launcher\\LauncherView\\JsInterop\\LauncherObject.cs", 366);
					}
				};
			}
		}

		// Token: 0x060000B7 RID: 183 RVA: 0x0000486C File Offset: 0x00002A6C
		private void SetExitEventOnGameStarter(Process proc)
		{
			if (proc != null)
			{
				proc.EnableRaisingEvents = true;
				proc.Exited += delegate(object sender, EventArgs args)
				{
					if (proc.ExitCode == -1)
					{
						JsExpressionBuilder jsExpressionBuilder = new JsExpressionBuilder("document", "dispatchEvent", new string[] { "new Event('gameClose')" });
						if (!this._wb.IsDisposed)
						{
							this._wb.ExecuteScriptSync(jsExpressionBuilder, "C:\\C_Workspace\\client-launcher\\launcher\\LauncherView\\JsInterop\\LauncherObject.cs", 384);
						}
					}
				};
			}
		}

		// Token: 0x060000B8 RID: 184 RVA: 0x000048B8 File Offset: 0x00002AB8
		private bool SaveUserLocalConfig(UserLocalConfig config)
		{
			bool flag;
			try
			{
				using (MemoryStream memoryStream = new MemoryStream())
				{
					new BinaryFormatter().Serialize(memoryStream, config);
					memoryStream.Flush();
					memoryStream.Position = 0L;
					File.WriteAllText("./launcher.custom.config", Convert.ToBase64String(memoryStream.ToArray()));
				}
				flag = true;
			}
			catch
			{
				flag = false;
			}
			return flag;
		}

		// Token: 0x060000B9 RID: 185 RVA: 0x0000492C File Offset: 0x00002B2C
		private bool SaveUserLocalConfig(string type, string content, bool replace = false)
		{
			UserLocalConfig userLocalConfig = null;
			try
			{
				userLocalConfig = this._mainWindow.LoadUserLocalConfig();
				if (userLocalConfig == null)
				{
					userLocalConfig = new UserLocalConfig();
				}
				if (replace)
				{
					userLocalConfig[type] = content;
				}
				else
				{
					userLocalConfig[type] = "";
				}
			}
			catch (Exception ex)
			{
				if (ex is FileNotFoundException && replace)
				{
					userLocalConfig[type] = content;
				}
			}
			bool flag;
			try
			{
				flag = this.SaveUserLocalConfig(userLocalConfig);
			}
			catch (Exception ex2)
			{
				Log.Write("File write Error");
				Log.Write(ex2.Message);
				flag = false;
			}
			return flag;
		}

		// Token: 0x060000BA RID: 186 RVA: 0x000049C4 File Offset: 0x00002BC4
		public bool SetSavedId(bool checkedSaved)
		{
			bool flag;
			try
			{
				string text = "Email";
				SharedDataContainer sharedData = Static.SharedData;
				string text2;
				if (sharedData == null)
				{
					text2 = null;
				}
				else
				{
					SessionData session = sharedData.Session;
					text2 = ((session != null) ? session.Email : null);
				}
				flag = this.SaveUserLocalConfig(text, text2, checkedSaved);
			}
			catch (Exception ex)
			{
				if (ex is FileNotFoundException)
				{
					flag = this.SaveUserLocalConfig(new UserLocalConfig());
				}
				else
				{
					flag = false;
				}
			}
			return flag;
		}

		// Token: 0x060000BB RID: 187 RVA: 0x00004A28 File Offset: 0x00002C28
		private async void HeartBeat()
		{
			if (this._isLoggedIn)
			{
				if (Static.SharedData.ClientProcessMgr.CheckLinkToClient())
				{
					this._wb.Dispatcher.Invoke(delegate
					{
						this._mainWindow.CollapseToTrayIcon();
					});
					this.SetExitEventOnGameClient(Static.SharedData.ClientProcessMgr.Client);
				}
				await Task.Delay(this.HeartBeatTick).ConfigureAwait(false);
				await Task.Run(delegate
				{
					this.HeartBeat();
				}).ConfigureAwait(false);
			}
		}

		// Token: 0x060000BC RID: 188 RVA: 0x00004A64 File Offset: 0x00002C64
		public string GetSavedId()
		{
			string text;
			try
			{
				UserLocalConfig userLocalConfig = this._mainWindow.LoadUserLocalConfig();
				if (userLocalConfig != null)
				{
					text = userLocalConfig.Email;
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

		// Token: 0x060000BD RID: 189 RVA: 0x00004AAC File Offset: 0x00002CAC
		public string GetLang()
		{
			string text;
			try
			{
				text = this._mainWindow.GetLang();
			}
			catch
			{
				text = string.Empty;
			}
			return text;
		}

		// Token: 0x060000BE RID: 190 RVA: 0x00004AE4 File Offset: 0x00002CE4
		public void SetLang(string lang)
		{
			try
			{
				this.SaveUserLocalConfig("DefaultLanguage", lang, true);
			}
			catch (Exception ex)
			{
				if (ex is FileNotFoundException)
				{
					this.SaveUserLocalConfig(new UserLocalConfig
					{
						DefaultLanguage = lang
					});
				}
			}
		}

		// Token: 0x060000BF RID: 191 RVA: 0x0000221D File Offset: 0x0000041D
		public void ClearCache()
		{
		}

		// Token: 0x060000C0 RID: 192 RVA: 0x00004B30 File Offset: 0x00002D30
		public void PopFocus()
		{
			this._wb.Dispatcher.Invoke(delegate
			{
				this._mainWindow.Visibility = Visibility.Visible;
				this._mainWindow.Focus();
			});
		}

		// Token: 0x060000C1 RID: 193 RVA: 0x00004B50 File Offset: 0x00002D50
		public bool PrepareInstall(in string path)
		{
			bool flag;
			try
			{
				using (Process process = Process.Start(new ProcessStartInfo("PrepareInstall.exe")
				{
					Arguments = "\"" + path + "\"",
					CreateNoWindow = true,
					RedirectStandardError = false,
					RedirectStandardOutput = false
				}))
				{
					if (process == null)
					{
						flag = false;
					}
					else
					{
						process.WaitForExit();
						int exitCode = process.ExitCode;
						Log.Write(string.Format("{0} exited with code {1}", "PrepareInstall", exitCode));
						flag = process.ExitCode == 0;
					}
				}
			}
			catch (Exception ex)
			{
				Log.Write(ex.Message);
				flag = false;
			}
			return flag;
		}

		// Token: 0x060000C2 RID: 194 RVA: 0x00004C08 File Offset: 0x00002E08
		public string GetMachineUid()
		{
			ManagementObjectSearcher managementObjectSearcher = new ManagementObjectSearcher("SELECT * FROM Win32_BaseBoard");
			StringBuilder stringBuilder = new StringBuilder();
			foreach (ManagementBaseObject managementBaseObject in managementObjectSearcher.Get())
			{
				stringBuilder.Append(managementBaseObject["SerialNumber"]);
			}
			return stringBuilder.ToString();
		}

		// Token: 0x060000C3 RID: 195 RVA: 0x00004C78 File Offset: 0x00002E78
		public bool IsClientValidationDisabled()
		{
			return Static.SharedData.DisableGameClientValidation;
		}

		// Token: 0x060000C4 RID: 196 RVA: 0x00004C84 File Offset: 0x00002E84
		public bool IsClientInstallPathOverridden()
		{
			return Static.SharedData.InstallPathOverride != null;
		}

		// Token: 0x060000C5 RID: 197 RVA: 0x00004C93 File Offset: 0x00002E93
		public bool IsRunning()
		{
			return Static.SharedData.ClientProcessMgr.IsClientRunning;
		}

		// Token: 0x04000037 RID: 55
		public const string Name = "_launcher_object_";

		// Token: 0x04000038 RID: 56
		private static readonly Regex Whitespaces = new Regex("\\s+", RegexOptions.Compiled);

		// Token: 0x04000039 RID: 57
		private bool _isLoggedIn;

		// Token: 0x0400003A RID: 58
		private readonly MainWindow _mainWindow;

		// Token: 0x0400003B RID: 59
		private readonly Rectangle _mainWindowDragger;

		// Token: 0x0400003C RID: 60
		private readonly ChromiumWebBrowser _wb;

		// Token: 0x0400003D RID: 61
		private readonly IBrowser _b;

		// Token: 0x0400003E RID: 62
		private readonly int HeartBeatTick = 3000;

		// Token: 0x02000034 RID: 52
		internal class InstallInfo
		{
			// Token: 0x1700001C RID: 28
			// (get) Token: 0x0600011D RID: 285 RVA: 0x000055AD File Offset: 0x000037AD
			// (set) Token: 0x0600011E RID: 286 RVA: 0x000055B5 File Offset: 0x000037B5
			public string InstallPath { get; internal set; }

			// Token: 0x1700001D RID: 29
			// (get) Token: 0x0600011F RID: 287 RVA: 0x000055BE File Offset: 0x000037BE
			// (set) Token: 0x06000120 RID: 288 RVA: 0x000055C6 File Offset: 0x000037C6
			public bool IsInstallDirExist { get; internal set; }

			// Token: 0x1700001E RID: 30
			// (get) Token: 0x06000121 RID: 289 RVA: 0x000055CF File Offset: 0x000037CF
			// (set) Token: 0x06000122 RID: 290 RVA: 0x000055D7 File Offset: 0x000037D7
			public bool IsSameNamedFileWithInstallDirExist { get; internal set; }

			// Token: 0x06000123 RID: 291 RVA: 0x0000221F File Offset: 0x0000041F
			private InstallInfo()
			{
			}

			// Token: 0x06000124 RID: 292 RVA: 0x000055E0 File Offset: 0x000037E0
			public InstallInfo(in string path = null)
			{
				this.Init(path);
			}

			// Token: 0x06000125 RID: 293 RVA: 0x000055F0 File Offset: 0x000037F0
			[JavascriptIgnore]
			internal void Init(in string path = null)
			{
				if (string.IsNullOrWhiteSpace(path))
				{
					this.InstallPath = InstallDir.Locate();
				}
				else
				{
					this.InstallPath = (Path.IsPathRooted(path) ? path : Path.Combine(Directory.GetCurrentDirectory(), path));
				}
				this.IsSameNamedFileWithInstallDirExist = File.Exists(this.InstallPath);
				this.IsInstallDirExist = Directory.Exists(this.InstallPath);
			}
		}

		// Token: 0x02000035 RID: 53
		internal class WindowSize
		{
			// Token: 0x1700001F RID: 31
			// (get) Token: 0x06000126 RID: 294 RVA: 0x00005654 File Offset: 0x00003854
			// (set) Token: 0x06000127 RID: 295 RVA: 0x0000565C File Offset: 0x0000385C
			public double Width { get; internal set; }

			// Token: 0x17000020 RID: 32
			// (get) Token: 0x06000128 RID: 296 RVA: 0x00005665 File Offset: 0x00003865
			// (set) Token: 0x06000129 RID: 297 RVA: 0x0000566D File Offset: 0x0000386D
			public double Height { get; internal set; }
		}
	}
}

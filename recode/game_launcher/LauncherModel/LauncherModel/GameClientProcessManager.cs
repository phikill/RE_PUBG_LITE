using System;
using System.Diagnostics;
using System.Linq;

namespace LauncherModel
{
	// Token: 0x02000002 RID: 2
	public class GameClientProcessManager : IDisposable
	{
		// Token: 0x06000001 RID: 1 RVA: 0x00002048 File Offset: 0x00000248
		public GameClientProcessManager(SharedDataContainer parent)
		{
			this._parent = parent;
		}

		// Token: 0x17000001 RID: 1
		// (get) Token: 0x06000002 RID: 2 RVA: 0x00002064 File Offset: 0x00000264
		// (set) Token: 0x06000003 RID: 3 RVA: 0x000020A8 File Offset: 0x000002A8
		public Process Client
		{
			get
			{
				object @lock = this._lock;
				Process client;
				lock (@lock)
				{
					client = this._client;
				}
				return client;
			}
			set
			{
				object @lock = this._lock;
				lock (@lock)
				{
					if (value == null)
					{
						if (this._client == null)
						{
							throw new ArgumentNullException("Client");
						}
						this._client.Dispose();
						this._client = null;
					}
					else
					{
						if (this._client != null && !this._client.HasExited)
						{
							throw new InvalidOperationException("Game client is already running");
						}
						if (value.ProcessName != this._parent.GameProcessName)
						{
							throw new ArgumentException("Invalid game client!", "Client");
						}
						this._client = value;
						this._client.Exited += delegate(object sender, EventArgs args)
						{
							this.Client = null;
						};
					}
				}
			}
		}

		// Token: 0x06000004 RID: 4 RVA: 0x00002174 File Offset: 0x00000374
		public bool CheckLinkToClient()
		{
			object @lock = this._lock;
			lock (@lock)
			{
				if (this._client == null || this._client.HasExited)
				{
					Process process = Process.GetProcessesByName(this._parent.GameProcessName).FirstOrDefault((Process proc) => proc != null && !proc.HasExited);
					if (process != null)
					{
						this._client = process;
						return true;
					}
				}
			}
			return false;
		}

		// Token: 0x17000002 RID: 2
		// (get) Token: 0x06000005 RID: 5 RVA: 0x0000220C File Offset: 0x0000040C
		public bool IsClientRunning
		{
			get
			{
				object @lock = this._lock;
				bool flag2;
				lock (@lock)
				{
					if (this._client != null && !this._client.HasExited)
					{
						flag2 = true;
					}
					else
					{
						flag2 = Process.GetProcessesByName(this._parent.GameProcessName).FirstOrDefault((Process proc) => proc != null && !proc.HasExited) != null;
					}
				}
				return flag2;
			}
		}

		// Token: 0x06000006 RID: 6 RVA: 0x00002298 File Offset: 0x00000498
		public void Dispose()
		{
			this.Dispose(true);
			GC.SuppressFinalize(this);
		}

		// Token: 0x06000007 RID: 7 RVA: 0x000022A7 File Offset: 0x000004A7
		protected virtual void Dispose(bool disposing)
		{
			if (this._disposed)
			{
				return;
			}
			if (disposing)
			{
				Process client = this._client;
				if (client != null)
				{
					client.Dispose();
				}
			}
			this._disposed = true;
		}

		// Token: 0x04000001 RID: 1
		private readonly SharedDataContainer _parent;

		// Token: 0x04000002 RID: 2
		private object _lock = new object();

		// Token: 0x04000003 RID: 3
		private bool _disposed;

		// Token: 0x04000004 RID: 4
		private Process _client;
	}
}

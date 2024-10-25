using System;
using System.Linq;
using System.Net;
using System.Runtime.CompilerServices;
using System.Threading;
using System.Threading.Tasks;
using logger.managed;

namespace LauncherApiServer
{
	// Token: 0x02000004 RID: 4
	public class ApiServer
	{
		// Token: 0x17000003 RID: 3
		// (get) Token: 0x0600000A RID: 10 RVA: 0x000021E9 File Offset: 0x000003E9
		public int Port
		{
			get
			{
				return this._port;
			}
		}

		// Token: 0x0600000B RID: 11 RVA: 0x000021F4 File Offset: 0x000003F4
		public void Initialize(string fullAddress, RouteService service)
		{
			if (!HttpListener.IsSupported)
			{
				Log.Write("httplistener is not supported.");
				throw new WebException();
			}
			this._service = service;
			this._fullAddress = fullAddress;
			if (Uri.TryCreate(fullAddress, UriKind.Absolute, out this._url))
			{
				this._service.BaseUrl = this._url;
				int.TryParse(fullAddress.Split(new char[] { ':' }).Last<string>(), out this._port);
				this._listener = new HttpListener();
				this._listener.Prefixes.Add(fullAddress + "/");
				return;
			}
			throw new FormatException();
		}

		// Token: 0x0600000C RID: 12 RVA: 0x00002296 File Offset: 0x00000496
		public bool Stop()
		{
			return Interlocked.CompareExchange(ref this._isRunning, 0L, 1L) == 1L;
		}

		// Token: 0x0600000D RID: 13 RVA: 0x000022AC File Offset: 0x000004AC
		public bool Start(bool init = false)
		{
			bool flag;
			try
			{
				if (init)
				{
					this._listener.Start();
				}
				if (Interlocked.CompareExchange(ref this._isRunning, 1L, 0L) == 0L)
				{
					Task.Factory.StartNew(delegate
					{
						this.Run();
					}).ConfigureAwait(false);
					flag = true;
				}
				else
				{
					flag = false;
				}
			}
			catch
			{
				throw;
			}
			return flag;
		}

		// Token: 0x0600000E RID: 14 RVA: 0x00002314 File Offset: 0x00000514
		private async void Run()
		{
			while (this._isRunning == 1L)
			{
				HttpListenerContext httpListenerContext = await this._listener.GetContextAsync().ConfigureAwait(false);
				this.HandleRequest(httpListenerContext);
			}
		}

		// Token: 0x0600000F RID: 15 RVA: 0x00002350 File Offset: 0x00000550
		private async void HandleRequest(HttpListenerContext ctx)
		{
			if (!(await _service.ProcessRequest(ctx.Request.HttpMethod, ctx.Request.RawUrl, ctx).ConfigureAwait(continueOnCapturedContext: false)))
			{
				Log.Write($"http request process failed. {ctx.Request}, {ctx.Request.RawUrl}");
			}
		}
	

		// Token: 0x04000004 RID: 4
		private HttpListener _listener;

		// Token: 0x04000005 RID: 5
		private string _fullAddress;

		// Token: 0x04000006 RID: 6
		private Uri _url;

		// Token: 0x04000007 RID: 7
		private int _port;

		// Token: 0x04000008 RID: 8
		private long _isRunning;

		// Token: 0x04000009 RID: 9
		private RouteService _service;
	}
}

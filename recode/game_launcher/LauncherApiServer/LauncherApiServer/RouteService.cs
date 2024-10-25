using System;
using System.Collections.Generic;
using System.Net;
using System.Threading.Tasks;

namespace LauncherApiServer
{
	// Token: 0x02000003 RID: 3
	public class RouteService
	{
		// Token: 0x17000002 RID: 2
		// (get) Token: 0x06000006 RID: 6 RVA: 0x0000211A File Offset: 0x0000031A
		// (set) Token: 0x06000007 RID: 7 RVA: 0x00002122 File Offset: 0x00000322
		public Uri BaseUrl { get; set; }

		// Token: 0x06000008 RID: 8 RVA: 0x0000212C File Offset: 0x0000032C
		public RouteService()
		{
			this.RequestHandlerTable = new Dictionary<string, RouteService.HttpMethodInvoker>
			{
				{
					"GET",
					new RouteService.HttpMethodInvoker()
				},
				{
					"POST",
					new RouteService.HttpMethodInvoker()
				},
				{
					"PUT",
					new RouteService.HttpMethodInvoker()
				},
				{
					"DELETE",
					new RouteService.HttpMethodInvoker()
				}
			};
		}

		// Token: 0x06000009 RID: 9 RVA: 0x0000218C File Offset: 0x0000038C
		public async Task<bool> ProcessRequest(string method, string route, HttpListenerContext ctx)
		{
			return await this.RequestHandlerTable[method].Invoke(route, ctx);
		}

		// Token: 0x04000003 RID: 3
		protected Dictionary<string, RouteService.HttpMethodInvoker> RequestHandlerTable;

		// Token: 0x02000008 RID: 8
		public class HttpMethodInvoker
		{
			// Token: 0x0600001F RID: 31 RVA: 0x000026FA File Offset: 0x000008FA
			public bool AddRoute(string postfix, Func<HttpListenerContext, Task<bool>> handler)
			{
				if (this._routeTable.ContainsKey(postfix))
				{
					return false;
				}
				this._routeTable[postfix] = handler;
				return true;
			}

			// Token: 0x06000020 RID: 32 RVA: 0x0000271C File Offset: 0x0000091C
			public virtual async Task<bool> Invoke(string route, HttpListenerContext ctx)
			{
				bool flag;
				try
				{
					flag = await this._routeTable[route](ctx);
				}
				catch
				{
					throw new HttpListenerException(404, "invalid route");
				}
				return flag;
			}

			// Token: 0x04000015 RID: 21
			private Dictionary<string, Func<HttpListenerContext, Task<bool>>> _routeTable = new Dictionary<string, Func<HttpListenerContext, Task<bool>>>();
		}
	}
}

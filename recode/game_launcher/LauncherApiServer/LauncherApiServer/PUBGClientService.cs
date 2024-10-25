using System;
using System.IO;
using System.Net;
using System.Text;
using System.Threading.Tasks;
using LauncherModel;
using logger.managed;
using Newtonsoft.Json;

namespace LauncherApiServer
{
	// Token: 0x02000002 RID: 2
	public class PUBGClientService : RouteService
	{
		// Token: 0x17000001 RID: 1
		// (get) Token: 0x06000001 RID: 1 RVA: 0x00002048 File Offset: 0x00000248
		// (set) Token: 0x06000002 RID: 2 RVA: 0x00002050 File Offset: 0x00000250
		public SharedDataContainer _sharedData { get; private set; }

		// Token: 0x06000003 RID: 3 RVA: 0x00002059 File Offset: 0x00000259
		public PUBGClientService(SharedDataContainer sharedData)
		{
			this._sharedData = sharedData;
			this.RequestHandlerTable["GET"].AddRoute("/api/session", new Func<HttpListenerContext, Task<bool>>(this.GetSessionInfo));
		}

		// Token: 0x06000004 RID: 4 RVA: 0x00002090 File Offset: 0x00000290
		private async Task<bool> GetSessionInfo(HttpListenerContext ctx)
	{
		return await Task.Factory.StartNew(delegate
		{
			try
			{
				if (base.BaseUrl == null)
				{
					Log.Write("ApiServerService - base url is null");
					return false;
				}
				if (Uri.Compare(new Uri("http://localhost"), ctx.Request.Url, UriComponents.Host, UriFormat.SafeUnescaped, StringComparison.InvariantCultureIgnoreCase) != 0)
				{
					Log.Write("ApiServerService - remote authentication is not allowed. url : " + ctx.Request.Url.OriginalString);
					return false;
				}
				using (HttpListenerResponse httpListenerResponse = ctx.Response)
				{
					httpListenerResponse.ContentType = "application/json";
					httpListenerResponse.ContentEncoding = Encoding.UTF8;
					httpListenerResponse.KeepAlive = false;
					using (Stream stream = httpListenerResponse.OutputStream)
					{
						string s = JsonConvert.SerializeObject(new SessionDto
						{
							SessionId = _sharedData?.Session?.EncodedSessionId,
							AccountGuid = _sharedData?.Session?.AccountGuid,
							Email = _sharedData?.Session.EncodedEmailId,
							Provider = EvaluateProvider(_sharedData?.Session.CountryCode)
						});
						byte[] bytes = Encoding.UTF8.GetBytes(s);
						httpListenerResponse.ContentLength64 = bytes.Length;
						stream.Write(bytes, 0, bytes.Length);
					}
				}
				return true;
			}
			catch (Exception ex)
			{
				Log.Write("ApiServerService - exception raised. message : " + ex.Message + "\n stacktrace :\n" + ex.StackTrace);
				return false;
			}
		});
	}

		// Token: 0x06000005 RID: 5 RVA: 0x000020E0 File Offset: 0x000002E0
		private string EvaluateProvider(string countryCode)
		{
			if (string.IsNullOrEmpty(countryCode))
			{
				return "gacct";
			}
			string text = countryCode.ToLower();
			if (text == "jp")
			{
				return "gacctjp";
			}
			return "gacct";
		}
	}
}

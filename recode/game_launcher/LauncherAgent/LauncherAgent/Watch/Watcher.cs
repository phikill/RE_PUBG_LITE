using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Linq;

namespace LauncherAgent.Watch
{
	// Token: 0x02000003 RID: 3
	public class Watcher
	{
		// Token: 0x06000005 RID: 5 RVA: 0x000020D7 File Offset: 0x000002D7
		private Watcher()
		{
		}

		// Token: 0x06000006 RID: 6 RVA: 0x000020DF File Offset: 0x000002DF
		public Watcher(params WatchScope[] scopes)
		{
			if (scopes.Length == 0)
			{
				throw new ApplicationException("nothing to watch");
			}
			this._scopes = scopes.ToList<WatchScope>();
		}

		// Token: 0x06000007 RID: 7 RVA: 0x00002102 File Offset: 0x00000302
		public void Start()
		{
			this._scopes.ForEach(delegate(WatchScope s)
			{
				s.Start();
			});
		}

		// Token: 0x06000008 RID: 8 RVA: 0x0000212E File Offset: 0x0000032E
		public void Stop()
		{
			this._scopes.ForEach(delegate(WatchScope s)
			{
				s.Stop();
			});
		}

		// Token: 0x06000009 RID: 9 RVA: 0x0000215A File Offset: 0x0000035A
		public static bool IsRunning(string processName)
		{
			return (from elem in Process.GetProcessesByName(processName)
				select (elem)).FirstOrDefault<Process>() != null;
		}

		// Token: 0x04000002 RID: 2
		private List<WatchScope> _scopes;
	}
}

using System;
using System.Collections.Generic;
using System.Linq;
using System.Management;

namespace LauncherAgent.Watch
{
	// Token: 0x02000005 RID: 5
	public class WatchScope : IWatcherScope
	{
		// Token: 0x17000001 RID: 1
		// (get) Token: 0x0600000C RID: 12 RVA: 0x0000218E File Offset: 0x0000038E
		// (set) Token: 0x0600000D RID: 13 RVA: 0x00002196 File Offset: 0x00000396
		public string Name { get; private set; }

		// Token: 0x0600000E RID: 14 RVA: 0x0000219F File Offset: 0x0000039F
		public WatchScope(string scopeName)
		{
			this.Name = scopeName;
		}

		// Token: 0x0600000F RID: 15 RVA: 0x000021CC File Offset: 0x000003CC
		protected void SetHandlers(params WatchScope.WatcherHandlerObject[] handlers)
		{
			if ((from e in handlers
				group e by e.Type).Any((IGrouping<WatchScope.WatcherType, WatchScope.WatcherHandlerObject> g) => g.Count<WatchScope.WatcherHandlerObject>() > 1))
			{
				throw new ApplicationException("cannot sets same watch type");
			}
			foreach (WatchScope.WatcherHandlerObject watcherHandlerObject in handlers)
			{
				this._watchers[(int)watcherHandlerObject.Type] = new ManagementEventWatcher(WatchScope.WatcherQueryTable[watcherHandlerObject.Type](this.Name));
				this._watchers[(int)watcherHandlerObject.Type].EventArrived += watcherHandlerObject.Handler;
			}
		}

		// Token: 0x17000002 RID: 2
		public ManagementEventWatcher this[int i]
		{
			get
			{
				return this._watchers[i];
			}
		}

		// Token: 0x06000011 RID: 17 RVA: 0x00002298 File Offset: 0x00000498
		public void Start()
		{
			this._watchers.Where((ManagementEventWatcher e) => e != null).ToList<ManagementEventWatcher>().ForEach(delegate(ManagementEventWatcher w)
			{
				w.Start();
			});
		}

		// Token: 0x06000012 RID: 18 RVA: 0x000022F8 File Offset: 0x000004F8
		public void Stop()
		{
			this._watchers.Where((ManagementEventWatcher e) => e != null).ToList<ManagementEventWatcher>().ForEach(delegate(ManagementEventWatcher w)
			{
				w.Stop();
			});
		}

		// Token: 0x04000003 RID: 3
		public static Dictionary<WatchScope.WatcherType, Func<string, string>> WatcherQueryTable = new Dictionary<WatchScope.WatcherType, Func<string, string>>
		{
			{
				WatchScope.WatcherType.Start,
				(string processName) => string.Format("SELECT TargetInstance FROM __InstanceCreationEvent WITHIN 1 WHERE TargetInstance ISA 'Win32_Process' AND TargetInstance.Name LIKE '" + processName + "'", new object[0])
			},
			{
				WatchScope.WatcherType.Stop,
				(string processName) => string.Format("SELECT TargetInstance FROM __InstanceDeletionEvent WITHIN 1 WHERE TargetInstance ISA 'Win32_Process' AND TargetInstance.Name LIKE '" + processName + "'", new object[0])
			}
		};

		// Token: 0x04000005 RID: 5
		private ManagementEventWatcher[] _watchers = new ManagementEventWatcher[Enum.GetNames(typeof(WatchScope.WatcherType)).Length];

		// Token: 0x0200000C RID: 12
		public enum WatcherType
		{
			// Token: 0x04000012 RID: 18
			Start,
			// Token: 0x04000013 RID: 19
			Stop
		}

		// Token: 0x0200000D RID: 13
		public struct WatcherHandlerObject
		{
			// Token: 0x04000014 RID: 20
			public WatchScope.WatcherType Type;

			// Token: 0x04000015 RID: 21
			public EventArrivedEventHandler Handler;
		}
	}
}

using System;
using System.Management;
using System.Windows.Forms;
using LauncherAgent.Utility;
using LauncherView;

namespace LauncherAgent.Watch
{
	// Token: 0x02000006 RID: 6
	public sealed class LauncherWatcher : WatchScope
	{
		// Token: 0x06000014 RID: 20 RVA: 0x00002394 File Offset: 0x00000594
		public LauncherWatcher()
			: base(Names.Helper.LauncherProcessExecutableName)
		{
			base.SetHandlers(new WatchScope.WatcherHandlerObject[]
			{
				new WatchScope.WatcherHandlerObject
				{
					Type = WatchScope.WatcherType.Stop,
					Handler = new EventArrivedEventHandler(this.OnStop)
				}
			});
		}

		// Token: 0x06000015 RID: 21 RVA: 0x000023E4 File Offset: 0x000005E4
		public void OnStop(object sender, EventArrivedEventArgs args)
		{
			if (!Watcher.IsRunning(Names.Helper.LauncherProcessName) && Watcher.IsRunning(Names.Helper.ClientProcessName))
			{
				Form form = new Form();
				form.TopMost = true;
				MessageBox.Show(form, MessageTextHelper.GetStringValue("AlertAppTerminateOnTaskManagerContent"), MessageTextHelper.GetStringValue("AlertAppTerminateOnTaskManagerCaption"), MessageBoxButtons.OK, MessageBoxIcon.Exclamation, MessageBoxDefaultButton.Button1, (MessageBoxOptions)(262144 | MessageTextHelper.AlignOption));
				form.Dispose();
			}
			Environment.Exit(1);
		}
	}
}

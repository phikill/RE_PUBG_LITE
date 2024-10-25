using System;
using System.Windows.Input;
using CefSharp;

namespace LauncherView
{
	// Token: 0x02000010 RID: 16
	internal class MenuItemCommand : ICommand
	{
		// Token: 0x0600006A RID: 106 RVA: 0x0000374B File Offset: 0x0000194B
		public MenuItemCommand(CefMenuCommand commandId, Action action)
		{
			this.CommandId = commandId;
			this._action = action;
			this.CanExecuteChanged += delegate(object sender, EventArgs args)
			{
			};
		}

		// Token: 0x0600006B RID: 107 RVA: 0x00003786 File Offset: 0x00001986
		public bool CanExecute(object parameter)
		{
			return true;
		}

		// Token: 0x0600006C RID: 108 RVA: 0x00003789 File Offset: 0x00001989
		public void Execute(object parameter)
		{
			this._action();
		}

		// Token: 0x14000001 RID: 1
		// (add) Token: 0x0600006D RID: 109 RVA: 0x00003798 File Offset: 0x00001998
		// (remove) Token: 0x0600006E RID: 110 RVA: 0x000037D0 File Offset: 0x000019D0
		public event EventHandler CanExecuteChanged;

		// Token: 0x0600006F RID: 111 RVA: 0x00003805 File Offset: 0x00001A05
		protected virtual void OnCanExecuteChanged()
		{
			EventHandler canExecuteChanged = this.CanExecuteChanged;
			if (canExecuteChanged == null)
			{
				return;
			}
			canExecuteChanged(this, EventArgs.Empty);
		}

		// Token: 0x04000028 RID: 40
		private readonly Action _action;

		// Token: 0x04000029 RID: 41
		public readonly CefMenuCommand CommandId;
	}
}

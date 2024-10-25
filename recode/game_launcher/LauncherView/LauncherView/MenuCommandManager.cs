using System;
using System.Collections.Generic;
using CefSharp;

namespace LauncherView
{
	// Token: 0x02000012 RID: 18
	internal class MenuCommandManager
	{
		// Token: 0x06000075 RID: 117 RVA: 0x000039D8 File Offset: 0x00001BD8
		public CefMenuCommand GetOrCreateCommandId(MenuHandler.MenuCommand command)
		{
			CefMenuCommand cefMenuCommand;
			if (!this._cmdToIdDict.TryGetValue(command, out cefMenuCommand))
			{
				cefMenuCommand = CefMenuCommand.UserFirst + this._cmdToIdDict.Count + 1;
			}
			this.RegisterCommand(command, cefMenuCommand);
			return cefMenuCommand;
		}

		// Token: 0x06000076 RID: 118 RVA: 0x00003A14 File Offset: 0x00001C14
		public int Ref(CefMenuCommand commandId)
		{
			int num;
			this._commandRefCountDict.TryGetValue(commandId, out num);
			num++;
			this._commandRefCountDict[commandId] = num;
			return num;
		}

		// Token: 0x06000077 RID: 119 RVA: 0x00003A42 File Offset: 0x00001C42
		public int Ref(MenuHandler.MenuCommand command)
		{
			return this.Ref(this._cmdToIdDict[command]);
		}

		// Token: 0x06000078 RID: 120 RVA: 0x00003A58 File Offset: 0x00001C58
		public int DeRef(CefMenuCommand commandId)
		{
			int num;
			if (!this._commandRefCountDict.TryGetValue(commandId, out num))
			{
				return 0;
			}
			num--;
			if (num > 0)
			{
				return num;
			}
			MenuHandler.MenuCommand menuCommand = this._idToCmdDict[commandId];
			this._commandRefCountDict.Remove(commandId);
			this.UnregisterCommand(menuCommand, commandId);
			return 0;
		}

		// Token: 0x06000079 RID: 121 RVA: 0x00003AA4 File Offset: 0x00001CA4
		public int DeRef(MenuHandler.MenuCommand command)
		{
			return this.DeRef(this._cmdToIdDict[command]);
		}

		// Token: 0x0600007A RID: 122 RVA: 0x00003AB8 File Offset: 0x00001CB8
		public bool GetCommand(CefMenuCommand commandId, out MenuHandler.MenuCommand command)
		{
			return this._idToCmdDict.TryGetValue(commandId, out command);
		}

		// Token: 0x0600007B RID: 123 RVA: 0x00003AC7 File Offset: 0x00001CC7
		private void RegisterCommand(MenuHandler.MenuCommand command, CefMenuCommand commandId)
		{
			this._cmdToIdDict[command] = commandId;
			this._idToCmdDict[commandId] = command;
		}

		// Token: 0x0600007C RID: 124 RVA: 0x00003AE3 File Offset: 0x00001CE3
		private void UnregisterCommand(MenuHandler.MenuCommand command, CefMenuCommand commandId)
		{
			this._cmdToIdDict.Remove(command);
			this._idToCmdDict.Remove(commandId);
		}

		// Token: 0x0400002D RID: 45
		private readonly Dictionary<CefMenuCommand, MenuHandler.MenuCommand> _idToCmdDict = new Dictionary<CefMenuCommand, MenuHandler.MenuCommand>();

		// Token: 0x0400002E RID: 46
		private readonly Dictionary<MenuHandler.MenuCommand, CefMenuCommand> _cmdToIdDict = new Dictionary<MenuHandler.MenuCommand, CefMenuCommand>();

		// Token: 0x0400002F RID: 47
		private readonly Dictionary<CefMenuCommand, int> _commandRefCountDict = new Dictionary<CefMenuCommand, int>();
	}
}

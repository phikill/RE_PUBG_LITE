using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
//System.Runtime.CompilerServices.TupleElementNamesAttribute;
using System.Windows.Controls;
using CefSharp;

namespace LauncherView
{
	// Token: 0x02000014 RID: 20
	internal static class MenuExt
	{
		// Token: 0x06000081 RID: 129 RVA: 0x00003B54 File Offset: 0x00001D54
		public static bool AddItem(this IMenuModel model, string label, MenuHandler.MenuCommand command)
		{
			CefMenuCommand orCreateCommandId = MenuExt.CmdMgr.GetOrCreateCommandId(command);
			if (!model.AddItem(orCreateCommandId, label))
			{
				return false;
			}
			MenuExt.CmdMgr.Ref(orCreateCommandId);
			return true;
		}

		// Token: 0x06000082 RID: 130 RVA: 0x00003B88 File Offset: 0x00001D88
		public static void DeRefCommands(IEnumerable<CefMenuCommand> commandIds)
		{
			foreach (CefMenuCommand cefMenuCommand in commandIds)
			{
				MenuExt.DeRefCommand(cefMenuCommand);
			}
		}

		// Token: 0x06000083 RID: 131 RVA: 0x00003BD0 File Offset: 0x00001DD0
		public static void DeRefCommand(CefMenuCommand commandId)
		{
			MenuExt.CmdMgr.DeRef(commandId);
		}

		// Token: 0x06000084 RID: 132 RVA: 0x00003BDE File Offset: 0x00001DDE
		public static IEnumerable<CefMenuCommand> GetCommandIds(this IMenuModel model)
		{
			int num;
			for (int i = 0; i < model.Count; i = num + 1)
			{
				yield return model.GetCommandIdAt(i);
				num = i;
			}
			yield break;
		}

		// Token: 0x06000085 RID: 133 RVA: 0x00003BEE File Offset: 0x00001DEE
		//[return: TupleElementNames(new string[] { "label", "commandId", "isEnabled" })]
		public static IEnumerable<ValueTuple<string, CefMenuCommand, bool>> GetCommandInfos(this IMenuModel model)
		{
			int num;
			for (int i = 0; i < model.Count; i = num + 1)
			{
				yield return new ValueTuple<string, CefMenuCommand, bool>(model.GetLabelAt(i), model.GetCommandIdAt(i), model.IsEnabledAt(i));
				num = i;
			}
			yield break;
		}

		// Token: 0x06000086 RID: 134 RVA: 0x00003BFE File Offset: 0x00001DFE
		public static IEnumerable<object> ToMenuItemObjects(this IEnumerable<(string 			 label, 
																			  CefMenuCommand     commandId, 
																			  bool 				 isEnabled)>   commandInfos, 
																			  IWebBrowser 		               browserControl, 
																			  IBrowser 			 			   browser, 
																			  IFrame 			 			   frame, 
																			  IContextMenuParams 			   parameters, 
																			  CefEventFlags 	 			   eventFlags)
		{
			foreach (var commandInfo in commandInfos)
			{
				string label = commandInfo.label;
				CefMenuCommand commandId = commandInfo.commandId;
				bool isEnabled = commandInfo.isEnabled;
				if (commandId == CefMenuCommand.NotFound && string.IsNullOrWhiteSpace(label))
				{
					yield return new Separator();
				}
				string menuItemHeader = ((label == null) ? string.Empty : label.Replace("&", "_"));
				if (!GetCommand(commandId, out var command))
				{
					yield return new MenuItem
					{
						Header = menuItemHeader,
						IsEnabled = false
					};
				}
				yield return new MenuItem
				{
					Header = menuItemHeader,
					IsEnabled = isEnabled,
					Command = new MenuItemCommand(commandId, delegate
					{
						command(browserControl, browser, parameters, eventFlags);
					})
				};
			}
		}

		// Token: 0x06000087 RID: 135 RVA: 0x00003C2C File Offset: 0x00001E2C
		public static bool GetCommand(CefMenuCommand commandId, out MenuHandler.MenuCommand command)
		{
			return MenuExt.CmdMgr.GetCommand(commandId, out command);
		}

		// Token: 0x04000030 RID: 48
		private static readonly MenuCommandManager CmdMgr = new MenuCommandManager();
	}
}

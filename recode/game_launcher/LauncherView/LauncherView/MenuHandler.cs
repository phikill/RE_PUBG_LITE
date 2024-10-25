using System;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using System.Windows.Controls;
using System.Windows.Input;
using CefSharp;
using CefSharp.Wpf;

namespace LauncherView
{
	// Token: 0x02000015 RID: 21
	internal class MenuHandler : IContextMenuHandler
	{
		// Token: 0x06000089 RID: 137 RVA: 0x00003C48 File Offset: 0x00001E48
		static MenuHandler()
		{
			for (Key key = Key.NumPad0; key <= Key.Divide; key++)
			{
				MenuHandler.NumpadKeys.Add(key);
			}
		}

		// Token: 0x0600008A RID: 138 RVA: 0x00003CD4 File Offset: 0x00001ED4
		public void OnBeforeContextMenu(IWebBrowser browserControl, IBrowser browser, IFrame frame, IContextMenuParams parameters, IMenuModel model)
		{
			model.Clear();
		}

		// Token: 0x0600008B RID: 139 RVA: 0x00003CE0 File Offset: 0x00001EE0
		public bool OnContextMenuCommand(IWebBrowser browserControl, IBrowser browser, IFrame frame, IContextMenuParams parameters, CefMenuCommand commandId, CefEventFlags eventFlags)
		{
			MenuHandler.MenuCommand menuCommand;
			return MenuExt.GetCommand(commandId, out menuCommand) && menuCommand(browserControl, browser, parameters, eventFlags);
		}

		// Token: 0x0600008C RID: 140 RVA: 0x00003D06 File Offset: 0x00001F06
		public void OnContextMenuDismissed(IWebBrowser browserControl, IBrowser browser, IFrame frame)
		{
			this.CloseContextMenu(browserControl);
		}

		// Token: 0x0600008D RID: 141 RVA: 0x00003D10 File Offset: 0x00001F10
		public void CloseContextMenu(IWebBrowser browserControl)
		{
			ChromiumWebBrowser wb = (ChromiumWebBrowser)browserControl;
			wb.Dispatcher.Invoke(delegate
			{
				ContextMenu contextMenu = wb.ContextMenu;
				if (contextMenu == null)
				{
					return;
				}
				foreach (object obj in ((IEnumerable)contextMenu.Items))
				{
					MenuExt.DeRefCommand(((MenuItemCommand)((MenuItem)obj).Command).CommandId);
				}
				wb.ContextMenu = null;
			});
		}

		// Token: 0x0600008E RID: 142 RVA: 0x00003D4C File Offset: 0x00001F4C
		public bool RunContextMenu(IWebBrowser browserControl, IBrowser browser, IFrame frame, IContextMenuParams parameters, IMenuModel model, IRunContextMenuCallback callback)
		{
			return true;
		}

		// Token: 0x0600008F RID: 143 RVA: 0x00003D88 File Offset: 0x00001F88
		private static ContextMenu CreateCustomContextMenu(IWebBrowser browserControl, IBrowser browser, IFrame frame, IContextMenuParams parameters, IEnumerable<(string label, CefMenuCommand commandId, bool isEnabled)> commandInfos, IRunContextMenuCallback callback)
	{
		CefEventFlags keyEventFlags = GetKeyEventFlags();
		ContextMenu menu = new ContextMenu
		{
			IsOpen = true
		};
		menu.Closed += CloseHandler;
		foreach (object item in commandInfos.ToMenuItemObjects(browserControl, browser, frame, parameters, keyEventFlags))
		{
			menu.Items.Add(item);
		}
		return menu;
		void CloseHandler(object sender, RoutedEventArgs args)
		{
			menu.Closed -= CloseHandler;
			if (!callback.IsDisposed)
			{
				callback.Cancel();
			}
		}
	}

		// Token: 0x06000090 RID: 144 RVA: 0x00003E2C File Offset: 0x0000202C
		private static CefEventFlags GetKeyEventFlags()
		{
			CefEventFlags cefEventFlags = CefEventFlags.None;
			if (Keyboard.IsKeyToggled(Key.NumLock))
			{
				cefEventFlags |= CefEventFlags.NumLockOn;
			}
			if (Keyboard.IsKeyToggled(Key.Capital))
			{
				cefEventFlags |= CefEventFlags.CapsLockOn;
			}
			if ((Keyboard.Modifiers & ModifierKeys.Control) != ModifierKeys.None)
			{
				cefEventFlags |= CefEventFlags.ControlDown;
			}
			if ((Keyboard.Modifiers & ModifierKeys.Alt) != ModifierKeys.None)
			{
				cefEventFlags |= CefEventFlags.AltDown;
			}
			if ((Keyboard.Modifiers & ModifierKeys.Shift) != ModifierKeys.None)
			{
				cefEventFlags |= CefEventFlags.ShiftDown;
			}
			using (HashSet<Key>.Enumerator enumerator = MenuHandler.NumpadKeys.GetEnumerator())
			{
				while (enumerator.MoveNext())
				{
					if (Keyboard.IsKeyDown(enumerator.Current))
					{
						cefEventFlags |= CefEventFlags.IsKeyPad;
					}
				}
			}
			using (HashSet<Key>.Enumerator enumerator = MenuHandler.LeftModifierKeys.GetEnumerator())
			{
				while (enumerator.MoveNext())
				{
					if (Keyboard.IsKeyDown(enumerator.Current))
					{
						cefEventFlags |= CefEventFlags.IsLeft;
					}
				}
			}
			using (HashSet<Key>.Enumerator enumerator = MenuHandler.RightModifierKeys.GetEnumerator())
			{
				while (enumerator.MoveNext())
				{
					if (Keyboard.IsKeyDown(enumerator.Current))
					{
						cefEventFlags |= CefEventFlags.IsRight;
					}
				}
			}
			if (Mouse.LeftButton == MouseButtonState.Pressed)
			{
				cefEventFlags |= CefEventFlags.LeftMouseButton;
			}
			if (Mouse.MiddleButton == MouseButtonState.Pressed)
			{
				cefEventFlags |= CefEventFlags.MiddleMouseButton;
			}
			if (Mouse.RightButton == MouseButtonState.Pressed)
			{
				cefEventFlags |= CefEventFlags.RightMouseButton;
			}
			return cefEventFlags;
		}

		// Token: 0x04000031 RID: 49
		private static readonly HashSet<Key> NumpadKeys = new HashSet<Key>
		{
			Key.Return,
			Key.NumLock
		};

		// Token: 0x04000032 RID: 50
		private static readonly HashSet<Key> LeftModifierKeys = new HashSet<Key>
		{
			Key.LeftShift,
			Key.LeftCtrl,
			Key.LeftAlt
		};

		// Token: 0x04000033 RID: 51
		private static readonly HashSet<Key> RightModifierKeys = new HashSet<Key>
		{
			Key.RightShift,
			Key.RightCtrl,
			Key.RightAlt
		};

		// Token: 0x02000030 RID: 48
		// (Invoke) Token: 0x06000114 RID: 276
		public delegate bool MenuCommand(IWebBrowser browserControl, IBrowser browser, IContextMenuParams parameters, CefEventFlags eventFlags);
	}
}

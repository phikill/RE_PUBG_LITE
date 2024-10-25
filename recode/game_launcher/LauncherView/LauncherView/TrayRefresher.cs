using System;

namespace LauncherView
{
	// Token: 0x02000004 RID: 4
	public static class TrayRefresher
	{
		// Token: 0x06000003 RID: 3 RVA: 0x00002050 File Offset: 0x00000250
		private static void RefreshTrayArea(IntPtr windowHandle)
		{
			LauncherInterop.RECT rect;
			LauncherInterop.GetClientRect(windowHandle, out rect);
			for (int i = 0; i < rect.right; i += 5)
			{
				for (int j = 0; j < rect.bottom; j += 5)
				{
					LauncherInterop.SendMessage(windowHandle, 512U, 0, (j << 16) + i);
				}
			}
		}

		// Token: 0x06000004 RID: 4 RVA: 0x0000209C File Offset: 0x0000029C
		public static void RefreshTrayArea()
		{
			IntPtr intPtr = LauncherInterop.FindWindowEx(LauncherInterop.FindWindowEx(LauncherInterop.FindWindow("Shell_TrayWnd", null), IntPtr.Zero, "TrayNotifyWnd", null), IntPtr.Zero, "SysPager", null);
			IntPtr intPtr2 = LauncherInterop.FindWindowEx(intPtr, IntPtr.Zero, "ToolbarWindow32", "Notification Area");
			if (intPtr2 == IntPtr.Zero)
			{
				intPtr2 = LauncherInterop.FindWindowEx(intPtr, IntPtr.Zero, "ToolbarWindow32", "User Promoted Notification Area");
				TrayRefresher.RefreshTrayArea(LauncherInterop.FindWindowEx(LauncherInterop.FindWindow("NotifyIconOverflowWindow", null), IntPtr.Zero, "ToolbarWindow32", null));
			}
			TrayRefresher.RefreshTrayArea(intPtr2);
		}
	}
}

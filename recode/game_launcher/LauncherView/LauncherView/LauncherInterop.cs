using System;
using System.Runtime.InteropServices;

namespace LauncherView
{
	// Token: 0x0200000D RID: 13
	public static class LauncherInterop
	{
		// Token: 0x06000021 RID: 33
		[DllImport("user32.dll")]
		public static extern IntPtr FindWindow(string lpClassName, string lpWindowName);

		// Token: 0x06000022 RID: 34
		[DllImport("user32.dll")]
		public static extern IntPtr FindWindowEx(IntPtr hwndParent, IntPtr hwndChildAfter, string lpszClass, string lpszWindow);

		// Token: 0x06000023 RID: 35
		[DllImport("user32.dll")]
		public static extern bool GetClientRect(IntPtr hWnd, out LauncherInterop.RECT lpRect);

		// Token: 0x06000024 RID: 36
		[DllImport("user32.dll")]
		public static extern IntPtr SendMessage(IntPtr hWnd, uint msg, int wParam, int lParam);

		// Token: 0x06000025 RID: 37
		[DllImport("user32.dll", SetLastError = true)]
		public static extern void ShowWindow(IntPtr hWnd, int show);

		// Token: 0x06000026 RID: 38
		[DllImport("user32.dll", SetLastError = true)]
		public static extern void SwitchToThisWindow(IntPtr hWnd, bool fAltTab);

		// Token: 0x06000027 RID: 39
		[DllImport("User32.dll")]
		public static extern bool SetForegroundWindow(IntPtr hWnd);

		// Token: 0x0200001D RID: 29
		public struct RECT
		{
			// Token: 0x04000045 RID: 69
			public int left;

			// Token: 0x04000046 RID: 70
			public int top;

			// Token: 0x04000047 RID: 71
			public int right;

			// Token: 0x04000048 RID: 72
			public int bottom;
		}
	}
}

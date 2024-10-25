using System;
using System.Collections.Generic;
using CefSharp;
using CefSharp.Enums;
using logger.managed;

namespace LauncherView
{
	// Token: 0x02000008 RID: 8
	public class DragHandler : IDragHandler
	{
		// Token: 0x0600000C RID: 12 RVA: 0x00002210 File Offset: 0x00000410
		public bool OnDragEnter(IWebBrowser browserControl, IBrowser browser, IDragData dragData, DragOperationsMask mask)
		{
			Log.Write("cancel drag event");
			return true;
		}

		// Token: 0x0600000D RID: 13 RVA: 0x0000221D File Offset: 0x0000041D
		public void OnDraggableRegionsChanged(IWebBrowser browserControl, IBrowser browser, IList<DraggableRegion> regions)
		{
		}
	}
}

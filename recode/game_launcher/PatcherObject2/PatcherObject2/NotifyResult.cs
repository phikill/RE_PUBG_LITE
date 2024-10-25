using System;
using System.Diagnostics;
using System.Text;
using System.Web.Script.Serialization;
using CefSharp;
using CefSharp.Wpf;

// Token: 0x02000089 RID: 137
internal static class NotifyResult
{
	// Token: 0x060001DA RID: 474 RVA: 0x000B5124 File Offset: 0x000B4524
	private static void Dispatch(IFrame frame, string eventName, object data, string target)
	{
		byte b = ((frame != null) ? 1 : 0);
		Debug.Assert(b != 0);
		Debug.Assert(eventName != null);
		if (target == null)
		{
			target = "document";
		}
		StringBuilder stringBuilder = new StringBuilder();
		stringBuilder.Append(target);
		stringBuilder.Append(".dispatchEvent");
		stringBuilder.Append("(");
		stringBuilder.Append("new CustomEvent");
		stringBuilder.Append("(");
		stringBuilder.Append("'");
		stringBuilder.Append(eventName);
		stringBuilder.Append("'");
		if (data != null)
		{
			stringBuilder.Append(",");
			stringBuilder.Append("{");
			stringBuilder.Append("detail:");
			string text = new JavaScriptSerializer().Serialize(data);
			stringBuilder.Append(text);
			stringBuilder.Append("}");
		}
		stringBuilder.Append(")");
		stringBuilder.Append(")");
		string text2 = stringBuilder.ToString();
		frame.EvaluateScriptAsync(text2, "c:\\c_workspace\\client-launcher\\launcher\\objectmodules\\patcherobject2\\notifyresult.cpp", 93, null);
	}

	// Token: 0x060001DB RID: 475 RVA: 0x000B5284 File Offset: 0x000B4684
	public static void Dispatch(IBrowser b, string eventName, object data, string target)
	{
		if (eventName == null)
		{
			throw new ArgumentNullException("eventName");
		}
		if (b != null && !b.IsDisposed)
		{
			IFrame mainFrame = b.MainFrame;
			if (mainFrame != null && !mainFrame.IsDisposed)
			{
				NotifyResult.Dispatch(mainFrame, eventName, data, target);
			}
		}
	}

	// Token: 0x060001DC RID: 476 RVA: 0x000B523C File Offset: 0x000B463C
	public static void Dispatch(ChromiumWebBrowser wb, string eventName, object data, string target)
	{
		if (eventName == null)
		{
			throw new ArgumentNullException("eventName");
		}
		if (wb != null && !wb.IsDisposed)
		{
			IFrame mainFrame = wb.GetMainFrame();
			if (mainFrame != null && !mainFrame.IsDisposed)
			{
				NotifyResult.Dispatch(mainFrame, eventName, data, target);
			}
		}
	}

	// Token: 0x060001DD RID: 477 RVA: 0x000B52E4 File Offset: 0x000B46E4
	public static void Dispatch(ChromiumWebBrowser wb, string eventName, object data)
	{
		NotifyResult.Dispatch(wb, eventName, data, null);
	}

	// Token: 0x060001DE RID: 478 RVA: 0x000B52CC File Offset: 0x000B46CC
	public static void Dispatch(ChromiumWebBrowser wb, string eventName)
	{
		NotifyResult.Dispatch(wb, eventName, null, null);
	}

	// Token: 0x040001A0 RID: 416
	private const string DefaultTarget = "document";
}

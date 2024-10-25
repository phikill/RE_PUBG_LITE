using System;
using System.Runtime.InteropServices;
using msclr.interop;

namespace logger.managed
{
	// Token: 0x02000161 RID: 353
	public static class Log
	{
		// Token: 0x060000C7 RID: 199 RVA: 0x0000AA1C File Offset: 0x00009E1C
		public unsafe static void Write(string msg, [MarshalAs(UnmanagedType.U1)] bool use_log)
		{
			string text = null;
			marshal_context marshal_context = null;
			try
			{
				marshal_context = new marshal_context();
				text = msg;
				char* ptr = marshal_context.internal_marshaler<wchar_t\u0020const\u0020*,System::String\u0020^,1>.marshal_as(ref text, marshal_context._clean_up_list);
				if (use_log)
				{
					<Module>.LogMsg.WriteFormatted(ptr);
				}
			}
			finally
			{
				if (marshal_context != null)
				{
					((IDisposable)marshal_context).Dispose();
				}
			}
		}

		// Token: 0x060000C8 RID: 200 RVA: 0x0000AA74 File Offset: 0x00009E74
		public static void Write(string msg)
		{
			Log.Write(msg, true);
		}
	}
}

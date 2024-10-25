using System;
using System.Collections.Generic;
using System.Runtime.InteropServices;

namespace msclr.interop
{
	// Token: 0x02000003 RID: 3
	internal class marshal_context : IDisposable
	{
		// Token: 0x060000B7 RID: 183 RVA: 0x0000AE80 File Offset: 0x0000A280
		private void ~marshal_context()
		{
			LinkedList<object>.Enumerator enumerator = this._clean_up_list.GetEnumerator();
			if (enumerator.MoveNext())
			{
				do
				{
					IDisposable disposable = enumerator.Current as IDisposable;
					if (disposable != null)
					{
						disposable.Dispose();
					}
				}
				while (enumerator.MoveNext());
			}
		}

		// Token: 0x060000B8 RID: 184 RVA: 0x0000AEC4 File Offset: 0x0000A2C4
		protected virtual void Dispose([MarshalAs(UnmanagedType.U1)] bool A_0)
		{
			if (A_0)
			{
				this.~marshal_context();
			}
			else
			{
				base.Finalize();
			}
		}

		// Token: 0x060000B9 RID: 185 RVA: 0x0000B1F0 File Offset: 0x0000A5F0
		public sealed void Dispose()
		{
			this.Dispose(true);
			GC.SuppressFinalize(this);
		}

		// Token: 0x060000BA RID: 186 RVA: 0x0000AA00 File Offset: 0x00009E00
		public unsafe char* marshal_as<wchar_t\u0020const\u0020*,System::String>(string _from)
		{
			return marshal_context.internal_marshaler<wchar_t\u0020const\u0020*,System::String\u0020^,1>.marshal_as(ref _from, this._clean_up_list);
		}

		// Token: 0x040000F4 RID: 244
		internal readonly LinkedList<object> _clean_up_list = new LinkedList<object>();

		// Token: 0x02000162 RID: 354
		public class internal_marshaler<wchar_t\u0020const\u0020*,System::String\u0020^,1>
		{
			// Token: 0x060000C9 RID: 201 RVA: 0x0000A9E0 File Offset: 0x00009DE0
			public unsafe static char* marshal_as(string* _from, LinkedList<object> _clean_up_list)
			{
				char* ptr;
				context_node<wchar_t\u0020const\u0020*,System::String\u0020^> context_node<wchar_t_u0020const_u0020*,System::String_u0020^> = new context_node<wchar_t\u0020const\u0020*,System::String\u0020^>(ref ptr, *_from);
				_clean_up_list.AddLast(context_node<wchar_t_u0020const_u0020*,System::String_u0020^>);
				return ptr;
			}
		}
	}
}

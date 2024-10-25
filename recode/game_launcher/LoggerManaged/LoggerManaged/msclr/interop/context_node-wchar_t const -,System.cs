using System;
using System.Runtime.ExceptionServices;
using System.Runtime.InteropServices;

namespace msclr.interop
{
	// Token: 0x02000005 RID: 5
	internal class context_node<wchar_t\u0020const\u0020*,System::String\u0020^> : context_node_base, IDisposable
	{
		// Token: 0x060000C1 RID: 193 RVA: 0x0000A9B0 File Offset: 0x00009DB0
		public unsafe context_node<wchar_t\u0020const\u0020*,System::String\u0020^>(char** _to_object, string _from_object)
		{
			IntPtr intPtr = Marshal.StringToHGlobalUni(_from_object);
			this._ip = intPtr;
			*_to_object = this._ip.ToPointer();
		}

		// Token: 0x060000C2 RID: 194 RVA: 0x0000B344 File Offset: 0x0000A744
		private void ~context_node<wchar_t\u0020const\u0020*,System::String\u0020^>()
		{
			this.!context_node<wchar_t\u0020const\u0020*,System::String\u0020^>();
		}

		// Token: 0x060000C3 RID: 195 RVA: 0x0000AEFC File Offset: 0x0000A2FC
		private void !context_node<wchar_t\u0020const\u0020*,System::String\u0020^>()
		{
			if (this._ip != IntPtr.Zero)
			{
				Marshal.FreeHGlobal(this._ip);
			}
		}

		// Token: 0x060000C4 RID: 196 RVA: 0x0000B358 File Offset: 0x0000A758
		[HandleProcessCorruptedStateExceptions]
		protected virtual void Dispose([MarshalAs(UnmanagedType.U1)] bool A_0)
		{
			if (A_0)
			{
				this.!context_node<wchar_t\u0020const\u0020*,System::String\u0020^>();
			}
			else
			{
				try
				{
					this.!context_node<wchar_t\u0020const\u0020*,System::String\u0020^>();
				}
				finally
				{
					base.Finalize();
				}
			}
		}

		// Token: 0x060000C5 RID: 197 RVA: 0x0000B614 File Offset: 0x0000AA14
		public sealed void Dispose()
		{
			this.Dispose(true);
			GC.SuppressFinalize(this);
		}

		// Token: 0x060000C6 RID: 198 RVA: 0x0000B39C File Offset: 0x0000A79C
		protected override void Finalize()
		{
			this.Dispose(false);
		}

		// Token: 0x040000F6 RID: 246
		private IntPtr _ip;
	}
}

using System;
using System.Runtime.ExceptionServices;
using System.Runtime.InteropServices;

namespace msclr.interop
{
	// Token: 0x02000005 RID: 5
	internal class context_node<wchar_t\u0020const\u0020*,System::String\u0020^> : context_node_base, IDisposable
	{
		// Token: 0x060000EC RID: 236 RVA: 0x000023A4 File Offset: 0x000017A4
		public unsafe context_node<wchar_t\u0020const\u0020*,System::String\u0020^>(char** _to_object, string _from_object)
		{
			IntPtr intPtr = Marshal.StringToHGlobalUni(_from_object);
			this._ip = intPtr;
			*_to_object = this._ip.ToPointer();
		}

		// Token: 0x060000ED RID: 237 RVA: 0x00002688 File Offset: 0x00001A88
		private void ~context_node<wchar_t\u0020const\u0020*,System::String\u0020^>()
		{
			this.!context_node<wchar_t\u0020const\u0020*,System::String\u0020^>();
		}

		// Token: 0x060000EE RID: 238 RVA: 0x000023D4 File Offset: 0x000017D4
		private void !context_node<wchar_t\u0020const\u0020*,System::String\u0020^>()
		{
			if (this._ip != IntPtr.Zero)
			{
				Marshal.FreeHGlobal(this._ip);
			}
		}

		// Token: 0x060000EF RID: 239 RVA: 0x0000269C File Offset: 0x00001A9C
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

		// Token: 0x060000F0 RID: 240 RVA: 0x000027DC File Offset: 0x00001BDC
		public sealed void Dispose()
		{
			this.Dispose(true);
			GC.SuppressFinalize(this);
		}

		// Token: 0x060000F1 RID: 241 RVA: 0x000026E0 File Offset: 0x00001AE0
		protected override void Finalize()
		{
			this.Dispose(false);
		}

		// Token: 0x04000119 RID: 281
		private IntPtr _ip;
	}
}

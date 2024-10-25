using System;
using System.Runtime.ExceptionServices;
using System.Runtime.InteropServices;

namespace msclr.interop
{
	// Token: 0x02000005 RID: 5
	internal class context_node<wchar_t\u0020const\u0020*,System::String\u0020^> : context_node_base, IDisposable
	{
		// Token: 0x060002F2 RID: 754 RVA: 0x00019EDC File Offset: 0x000192DC
		public unsafe context_node<wchar_t\u0020const\u0020*,System::String\u0020^>(char** _to_object, string _from_object)
		{
			IntPtr intPtr = Marshal.StringToHGlobalUni(_from_object);
			this._ip = intPtr;
			*_to_object = this._ip.ToPointer();
		}

		// Token: 0x060002F3 RID: 755 RVA: 0x0001A1D0 File Offset: 0x000195D0
		private void ~context_node<wchar_t\u0020const\u0020*,System::String\u0020^>()
		{
			this.!context_node<wchar_t\u0020const\u0020*,System::String\u0020^>();
		}

		// Token: 0x060002F4 RID: 756 RVA: 0x00019F0C File Offset: 0x0001930C
		private void !context_node<wchar_t\u0020const\u0020*,System::String\u0020^>()
		{
			if (this._ip != IntPtr.Zero)
			{
				Marshal.FreeHGlobal(this._ip);
			}
		}

		// Token: 0x060002F5 RID: 757 RVA: 0x0001A1E4 File Offset: 0x000195E4
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

		// Token: 0x060002F6 RID: 758 RVA: 0x0001A348 File Offset: 0x00019748
		public sealed void Dispose()
		{
			this.Dispose(true);
			GC.SuppressFinalize(this);
		}

		// Token: 0x060002F7 RID: 759 RVA: 0x0001A228 File Offset: 0x00019628
		protected override void Finalize()
		{
			this.Dispose(false);
		}

		// Token: 0x0400036B RID: 875
		private IntPtr _ip;
	}
}

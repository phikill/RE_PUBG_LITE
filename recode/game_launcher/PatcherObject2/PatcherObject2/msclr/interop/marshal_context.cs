using System;
using System.Collections.Generic;
using System.Runtime.InteropServices;

namespace msclr.interop
{
	// Token: 0x02000003 RID: 3
	internal class marshal_context : IDisposable
	{
		// Token: 0x0600019F RID: 415 RVA: 0x000B47E8 File Offset: 0x000B3BE8
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

		// Token: 0x060001A0 RID: 416 RVA: 0x000B482C File Offset: 0x000B3C2C
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

		// Token: 0x060001A1 RID: 417 RVA: 0x000B4A98 File Offset: 0x000B3E98
		public sealed void Dispose()
		{
			this.Dispose(true);
			GC.SuppressFinalize(this);
		}

		// Token: 0x0400012C RID: 300
		internal readonly LinkedList<object> _clean_up_list = new LinkedList<object>();
	}
}

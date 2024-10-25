using System;
using System.Collections.Generic;
using System.Runtime.InteropServices;

namespace msclr.interop
{
	// Token: 0x02000003 RID: 3
	internal class marshal_context : IDisposable
	{
		// Token: 0x060000E3 RID: 227 RVA: 0x00002328 File Offset: 0x00001728
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

		// Token: 0x060000E4 RID: 228 RVA: 0x0000236C File Offset: 0x0000176C
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

		// Token: 0x060000E5 RID: 229 RVA: 0x00002534 File Offset: 0x00001934
		public sealed void Dispose()
		{
			this.Dispose(true);
			GC.SuppressFinalize(this);
		}

		// Token: 0x04000117 RID: 279
		internal readonly LinkedList<object> _clean_up_list = new LinkedList<object>();
	}
}

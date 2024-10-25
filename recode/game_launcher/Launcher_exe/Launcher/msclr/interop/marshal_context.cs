using System;
using System.Collections.Generic;
using System.Runtime.InteropServices;

namespace msclr.interop
{
	// Token: 0x0200000C RID: 12
	internal class marshal_context : IDisposable
	{
		// Token: 0x06000280 RID: 640 RVA: 0x0000AB60 File Offset: 0x00009F60
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

		// Token: 0x06000281 RID: 641 RVA: 0x0000ABA4 File Offset: 0x00009FA4
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

		// Token: 0x06000282 RID: 642 RVA: 0x0000C1EC File Offset: 0x0000B5EC
		public sealed void Dispose()
		{
			this.Dispose(true);
			GC.SuppressFinalize(this);
		}

		// Token: 0x0400013A RID: 314
		internal readonly LinkedList<object> _clean_up_list = new LinkedList<object>();
	}
}

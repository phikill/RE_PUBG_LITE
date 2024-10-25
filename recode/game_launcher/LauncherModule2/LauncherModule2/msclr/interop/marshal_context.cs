using System;
using System.Collections.Generic;
using System.Runtime.InteropServices;

namespace msclr.interop
{
	// Token: 0x02000003 RID: 3
	internal class marshal_context : IDisposable
	{
		// Token: 0x060002E9 RID: 745 RVA: 0x00019E60 File Offset: 0x00019260
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

		// Token: 0x060002EA RID: 746 RVA: 0x00019EA4 File Offset: 0x000192A4
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

		// Token: 0x060002EB RID: 747 RVA: 0x0001A07C File Offset: 0x0001947C
		public sealed void Dispose()
		{
			this.Dispose(true);
			GC.SuppressFinalize(this);
		}

		// Token: 0x04000369 RID: 873
		internal readonly LinkedList<object> _clean_up_list = new LinkedList<object>();
	}
}

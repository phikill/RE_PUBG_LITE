using System;
using System.Runtime.InteropServices;
using System.Threading;
using System.Threading.Tasks;

// Token: 0x02000088 RID: 136
internal sealed class TaskRecord<System::Threading::Tasks::Task<System::Object\u0020^>\u0020> : IDisposable
{
	// Token: 0x17000003 RID: 3
	// (get) Token: 0x060001D3 RID: 467 RVA: 0x000B96EC File Offset: 0x000B8AEC
	public Task<object> Task
	{
		get
		{
			return this._task;
		}
	}

	// Token: 0x17000002 RID: 2
	// (get) Token: 0x060001D4 RID: 468 RVA: 0x000B96D8 File Offset: 0x000B8AD8
	public CancellationTokenSource Cts
	{
		get
		{
			return this._cts;
		}
	}

	// Token: 0x17000001 RID: 1
	// (get) Token: 0x060001D5 RID: 469 RVA: 0x000B96C4 File Offset: 0x000B8AC4
	public Action OnCancel
	{
		get
		{
			return this._onCancel;
		}
	}

	// Token: 0x060001D6 RID: 470 RVA: 0x000B99B0 File Offset: 0x000B8DB0
	protected void Dispose([MarshalAs(UnmanagedType.U1)] bool A_0)
	{
		if (A_0)
		{
			this.~TaskRecord<System::Threading::Tasks::Task<System::Object\u0020^>\u0020>();
		}
		else
		{
			base.Finalize();
		}
	}

	// Token: 0x060001D7 RID: 471 RVA: 0x000B9BC4 File Offset: 0x000B8FC4
	public sealed void Dispose()
	{
		this.Dispose(true);
		GC.SuppressFinalize(this);
	}

	// Token: 0x060001D8 RID: 472 RVA: 0x000B9720 File Offset: 0x000B8B20
	public TaskRecord<System::Threading::Tasks::Task<System::Object\u0020^>\u0020>(Task<object> task, CancellationTokenSource cts, Action onCancel)
	{
	}

	// Token: 0x060001D9 RID: 473 RVA: 0x000B9700 File Offset: 0x000B8B00
	private void ~TaskRecord<System::Threading::Tasks::Task<System::Object\u0020^>\u0020>()
	{
		IDisposable cts = this._cts;
		if (cts != null)
		{
			cts.Dispose();
		}
	}

	// Token: 0x0400019D RID: 413
	private Task<object> _task = task;

	// Token: 0x0400019E RID: 414
	private CancellationTokenSource _cts = cts;

	// Token: 0x0400019F RID: 415
	private Action _onCancel = onCancel;
}

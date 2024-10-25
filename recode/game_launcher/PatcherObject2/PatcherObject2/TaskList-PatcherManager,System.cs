using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.InteropServices;
using System.Threading;
using System.Threading.Tasks;
using logger.managed;
using std;

// Token: 0x02000017 RID: 23
internal static class TaskList<PatcherManager,System::Object\u0020^>
{
	// Token: 0x060001BC RID: 444 RVA: 0x000BA3D4 File Offset: 0x000B97D4
	public unsafe static TaskRecord<System::Threading::Tasks::Task<System::Object\u0020^>\u0020> CreateTask(function<System::Object\u0020^\u0020__clrcall(PatcherManager\u0020*)>* unmanagedFunc, PatcherManager* pArg)
	{
		CancellationTokenSource cancellationTokenSource = new CancellationTokenSource();
		FnWrap<PatcherManager\u0020*,System::Object\u0020^> fnWrap<PatcherManager_u0020*,System::Object_u0020^> = new FnWrap<PatcherManager\u0020*,System::Object\u0020^>(unmanagedFunc, ref pArg);
		Func<object> func = new Func<object>(fnWrap<PatcherManager_u0020*,System::Object_u0020^>.Invoke);
		Action action = new Action(fnWrap<PatcherManager_u0020*,System::Object_u0020^>.OnAbort);
		CancellationToken token = cancellationTokenSource.Token;
		TaskRecord<System::Threading::Tasks::Task<System::Object\u0020^>\u0020> taskRecord<System::Threading::Tasks::Task<System::Object_u0020^>_u0020> = new TaskRecord<System::Threading::Tasks::Task<System::Object\u0020^>\u0020>(Task.Run<object>(func, token), cancellationTokenSource, action);
		if (!TaskList<PatcherManager,System::Object\u0020^>.TrackTask(taskRecord<System::Threading::Tasks::Task<System::Object_u0020^>_u0020>))
		{
			taskRecord<System::Threading::Tasks::Task<System::Object_u0020^>_u0020>.Cts.Cancel();
			if (taskRecord<System::Threading::Tasks::Task<System::Object_u0020^>_u0020> != null)
			{
				((IDisposable)taskRecord<System::Threading::Tasks::Task<System::Object_u0020^>_u0020>).Dispose();
			}
			return null;
		}
		return taskRecord<System::Threading::Tasks::Task<System::Object_u0020^>_u0020>;
	}

	// Token: 0x060001BD RID: 445 RVA: 0x000B9C20 File Offset: 0x000B9020
	public static CheckUpdateResult Wait<CheckUpdateResult\u0020^>(TaskRecord<System::Threading::Tasks::Task<System::Object\u0020^>\u0020> tRec)
	{
		object obj = TaskList<PatcherManager,System::Object\u0020^>.Wait(tRec);
		TaskList<PatcherManager,System::Object\u0020^>.OnTaskComplete(tRec);
		return (CheckUpdateResult)obj;
	}

	// Token: 0x060001BE RID: 446 RVA: 0x000B9A54 File Offset: 0x000B8E54
	public static object Wait(TaskRecord<System::Threading::Tasks::Task<System::Object\u0020^>\u0020> tRec)
	{
		byte b = ((tRec != null) ? 1 : 0);
		Debug.Assert(b != 0);
		CancellationToken token = tRec.Cts.Token;
		Action onCancel = tRec.OnCancel;
		TaskList<PatcherManager,System::Object\u0020^>.CancellableWait(tRec.Task, ref token, onCancel);
		return tRec.Task.Result;
	}

	// Token: 0x060001BF RID: 447 RVA: 0x000B97DC File Offset: 0x000B8BDC
	public static void OnTaskComplete(TaskRecord<System::Threading::Tasks::Task<System::Object\u0020^>\u0020> tRec)
	{
		lock (TaskList<PatcherManager,System::Object\u0020^>.lock_obj)
		{
			TaskList<PatcherManager,System::Object\u0020^>.taskRecords.Remove(tRec);
		}
	}

	// Token: 0x060001C0 RID: 448 RVA: 0x000B9828 File Offset: 0x000B8C28
	private static void CancellableWait(Task<object> task, ref CancellationToken ct, Action onCancel)
	{
		try
		{
			task.Wait(-1, ct);
		}
		catch (OperationCanceledException ex)
		{
			bool ?use_log@LogMsg@@2_NA = <Module>.?use_log@LogMsg@@2_NA;
			Log.Write(ex.Message, ?use_log@LogMsg@@2_NA);
			if (onCancel != null)
			{
				onCancel();
			}
		}
	}

	// Token: 0x060001C1 RID: 449 RVA: 0x000B9748 File Offset: 0x000B8B48
	[return: MarshalAs(UnmanagedType.U1)]
	private static bool TrackTask(TaskRecord<System::Threading::Tasks::Task<System::Object\u0020^>\u0020> tRec)
	{
		if (tRec == null)
		{
			return false;
		}
		if (tRec.Task == null)
		{
			return false;
		}
		if (tRec.Cts == null)
		{
			return false;
		}
		byte b;
		try
		{
			Monitor.Enter(TaskList<PatcherManager,System::Object\u0020^>.lock_obj);
			TaskList<PatcherManager,System::Object\u0020^>.taskRecords.Add(tRec);
			b = 1;
		}
		finally
		{
			Monitor.Exit(TaskList<PatcherManager,System::Object\u0020^>.lock_obj);
		}
		return b != 0;
	}

	// Token: 0x060001C2 RID: 450 RVA: 0x000BBBF0 File Offset: 0x000BAFF0
	public static void CancelAllTasks()
	{
		lock (TaskList<PatcherManager,System::Object\u0020^>.lock_obj)
		{
			foreach (TaskRecord<System::Threading::Tasks::Task<System::Object\u0020^>\u0020> taskRecord<System::Threading::Tasks::Task<System::Object_u0020^>_u0020> in TaskList<PatcherManager,System::Object\u0020^>.taskRecords)
			{
				if (!taskRecord<System::Threading::Tasks::Task<System::Object_u0020^>_u0020>.Task.IsCompleted)
				{
					taskRecord<System::Threading::Tasks::Task<System::Object_u0020^>_u0020>.Cts.Cancel();
				}
				if (taskRecord<System::Threading::Tasks::Task<System::Object_u0020^>_u0020> != null)
				{
					((IDisposable)taskRecord<System::Threading::Tasks::Task<System::Object_u0020^>_u0020>).Dispose();
				}
			}
			TaskList<PatcherManager,System::Object\u0020^>.taskRecords.Clear();
		}
	}

	// Token: 0x04000149 RID: 329
	private static HashSet<TaskRecord<System::Threading::Tasks::Task<System::Object\u0020^>\u0020>> taskRecords = new HashSet<TaskRecord<System::Threading::Tasks::Task<System::Object\u0020^>\u0020>>();

	// Token: 0x0400014A RID: 330
	private static object lock_obj = new object();
}

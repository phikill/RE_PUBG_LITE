using System;
using System.Runtime.ExceptionServices;
using System.Runtime.InteropServices;
using std;

// Token: 0x020000A4 RID: 164
internal sealed class FnWrap<PatcherManager\u0020*,System::Object\u0020^> : IDisposable
{
	// Token: 0x060001DF RID: 479 RVA: 0x000BA06C File Offset: 0x000B946C
	public unsafe FnWrap<PatcherManager\u0020*,System::Object\u0020^>(function<System::Object\u0020^\u0020__clrcall(PatcherManager\u0020*)>* func, PatcherManager** arg)
	{
		function<System::Object\u0020^\u0020__clrcall(PatcherManager\u0020*)>* ptr = <Module>.@new(64UL);
		function<System::Object\u0020^\u0020__clrcall(PatcherManager\u0020*)>* ptr2;
		try
		{
			if (ptr != null)
			{
				*(long*)(ptr + 56L / (long)sizeof(function<System::Object\u0020^\u0020__clrcall(PatcherManager\u0020*)>)) = 0L;
				try
				{
					<Module>.std._Func_class<System::Object\u0020^,PatcherManager\u0020*>._Reset_copy(ptr, func);
				}
				catch
				{
					<Module>.___CxxCallUnwindDtor(ldftn(std._Func_class<System::Object\u0020^,PatcherManager\u0020*>.{dtor}), (void*)ptr);
					throw;
				}
				ptr2 = ptr;
			}
			else
			{
				ptr2 = null;
			}
		}
		catch
		{
			<Module>.delete((void*)ptr, 64UL);
			throw;
		}
		this.pFunc = ptr2;
		this.arg = *arg;
		base..ctor();
	}

	// Token: 0x060001E0 RID: 480 RVA: 0x000BA510 File Offset: 0x000B9910
	private void ~FnWrap<PatcherManager\u0020*,System::Object\u0020^>()
	{
		this.!FnWrap<PatcherManager\u0020*,System::Object\u0020^>();
	}

	// Token: 0x060001E1 RID: 481 RVA: 0x000BA4E0 File Offset: 0x000B98E0
	private unsafe void !FnWrap<PatcherManager\u0020*,System::Object\u0020^>()
	{
		function<System::Object\u0020^\u0020__clrcall(PatcherManager\u0020*)>* ptr = this.pFunc;
		if (ptr != null)
		{
			function<System::Object\u0020^\u0020__clrcall(PatcherManager\u0020*)>* ptr2 = ptr;
			<Module>.std._Func_class<System::Object\u0020^,PatcherManager\u0020*>._Tidy(ptr2);
			<Module>.delete((void*)ptr2, 64UL);
			this.pFunc = null;
		}
	}

	// Token: 0x060001E2 RID: 482 RVA: 0x000B9FDC File Offset: 0x000B93DC
	public unsafe object Invoke()
	{
		function<System::Object\u0020^\u0020__clrcall(PatcherManager\u0020*)>* ptr = this.pFunc;
		function<System::Object\u0020^\u0020__clrcall(PatcherManager\u0020*)> function<System::Object_u0020^_u0020__clrcall(PatcherManager_u0020*)>;
		*((ref function<System::Object_u0020^_u0020__clrcall(PatcherManager_u0020*)>) + 56) = 0L;
		try
		{
			<Module>.std._Func_class<System::Object\u0020^,PatcherManager\u0020*>._Reset_copy(ref function<System::Object_u0020^_u0020__clrcall(PatcherManager_u0020*)>, ptr);
		}
		catch
		{
			<Module>.___CxxCallUnwindDtor(ldftn(std._Func_class<System::Object\u0020^,PatcherManager\u0020*>.{dtor}), (void*)(&function<System::Object_u0020^_u0020__clrcall(PatcherManager_u0020*)>));
			throw;
		}
		object obj;
		try
		{
			obj = <Module>.std._Func_class<System::Object\u0020^,PatcherManager\u0020*>.()(ref function<System::Object_u0020^_u0020__clrcall(PatcherManager_u0020*)>, this.arg);
		}
		catch
		{
			<Module>.___CxxCallUnwindDtor(ldftn(std.function<System::Object\u0020^\u0020__clrcall(PatcherManager\u0020*)>.{dtor}), (void*)(&function<System::Object_u0020^_u0020__clrcall(PatcherManager_u0020*)>));
			throw;
		}
		<Module>.std._Func_class<System::Object\u0020^,PatcherManager\u0020*>._Tidy(ref function<System::Object_u0020^_u0020__clrcall(PatcherManager_u0020*)>);
		return obj;
	}

	// Token: 0x060001E3 RID: 483 RVA: 0x000B99D0 File Offset: 0x000B8DD0
	public unsafe void OnAbort()
	{
		PatcherManager* ptr = this.arg;
		if (ptr != null)
		{
			<Module>.PatcherManager.Abort(ptr);
		}
	}

	// Token: 0x060001E4 RID: 484 RVA: 0x000BAD74 File Offset: 0x000BA174
	[HandleProcessCorruptedStateExceptions]
	protected void Dispose([MarshalAs(UnmanagedType.U1)] bool A_0)
	{
		if (A_0)
		{
			this.!FnWrap<PatcherManager\u0020*,System::Object\u0020^>();
		}
		else
		{
			try
			{
				this.!FnWrap<PatcherManager\u0020*,System::Object\u0020^>();
			}
			finally
			{
				base.Finalize();
			}
		}
	}

	// Token: 0x060001E5 RID: 485 RVA: 0x000BAFC0 File Offset: 0x000BA3C0
	public sealed void Dispose()
	{
		this.Dispose(true);
		GC.SuppressFinalize(this);
	}

	// Token: 0x060001E6 RID: 486 RVA: 0x000BADB8 File Offset: 0x000BA1B8
	protected sealed override void Finalize()
	{
		this.Dispose(false);
	}

	// Token: 0x040001AC RID: 428
	private unsafe function<System::Object\u0020^\u0020__clrcall(PatcherManager\u0020*)>* pFunc;

	// Token: 0x040001AD RID: 429
	private unsafe PatcherManager* arg;
}

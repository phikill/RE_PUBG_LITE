using System;
using System.Runtime.ExceptionServices;
using System.Runtime.InteropServices;
using ipc.mutex;
using std;

namespace ipc.managed.mutex
{
	// Token: 0x020000AE RID: 174
	public sealed class locker : IDisposable
	{
		// Token: 0x060000F3 RID: 243 RVA: 0x00001D84 File Offset: 0x00001184
		public unsafe locker(string mutex_name, [MarshalAs(UnmanagedType.U1)] bool force_lock)
	{
		//Discarded unreachable code: IL_0025
		//IL_0042: Expected I, but got I8
		uint num = 0u;
		ipc.mutex.locker* ptr = (ipc.mutex.locker*)global::<Module>.@new(40uL);
		System.Runtime.CompilerServices.Unsafe.SkipInit(out basic_string<char,std::char_traits<char>,std::allocator<char> > obj);
		ipc.mutex.locker* ptr3;
		try
		{
			if (ptr != null)
			{
				basic_string<char,std::char_traits<char>,std::allocator<char> >* ptr2 = global::<Module>.msclr.interop.marshal_as<class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,class System::String ^>(&obj, &mutex_name);
				try
				{
					num = 1u;
					ptr3 = global::<Module>.ipc.mutex.locker.{ctor}(ptr, ptr2, force_lock);
				}
				catch
				{
					//try-fault
					if ((num & (true ? 1u : 0u)) != 0)
					{
						num &= 0xFFFFFFFEu;
						global::<Module>.___CxxCallUnwindDtor((UIntPtr/*delegate*<void*, void>*/)(void*)(ulong)(UIntPtr/*delegate*<basic_string<char,std::char_traits<char>,std::allocator<char> >*, void>*/)(&global::<Module>.std.basic_string<char,std::char_traits<char>,std::allocator<char> >.{dtor}), &obj);
					}
					throw;
				}
			}
			else
			{
				ptr3 = null;
			}
		}
		catch
		{
			//try-fault
			global::<Module>.delete(ptr, 40uL);
			throw;
		}
		try
		{
			p_locker_ = ptr3;
		}
		catch
		{
			//try-fault
			if ((num & (true ? 1u : 0u)) != 0)
			{
				num &= 0xFFFFFFFEu;
				global::<Module>.___CxxCallUnwindDtor((UIntPtr/*delegate*<void*, void>*/)(void*)(ulong)(UIntPtr/*delegate*<basic_string<char,std::char_traits<char>,std::allocator<char> >*, void>*/)(&global::<Module>.std.basic_string<char,std::char_traits<char>,std::allocator<char> >.{dtor}), &obj);
			}
			throw;
		}
		if ((num & (true ? 1u : 0u)) != 0)
		{
			num &= 0xFFFFFFFEu;
			try
			{
				global::<Module>.std.basic_string<char,std::char_traits<char>,std::allocator<char> >._Tidy_deallocate(&obj);
			}
			catch
			{
				//try-fault
				global::<Module>.___CxxCallUnwindDtor((UIntPtr/*delegate*<void*, void>*/)(void*)(ulong)(UIntPtr/*delegate*<_String_alloc<std::_String_base_types<char,std::allocator<char> > >*, void>*/)(&global::<Module>.std._String_alloc<std::_String_base_types<char,std::allocator<char> > >.{dtor}), &obj);
				throw;
			}
		}
		base..ctor();
	}

		// Token: 0x060000F4 RID: 244 RVA: 0x00001EA4 File Offset: 0x000012A4
		public locker(string mutex_name)
			: this(mutex_name, false)
		{
		}

		// Token: 0x060000F5 RID: 245 RVA: 0x000017B8 File Offset: 0x00000BB8
		private void ~locker()
		{
			this.!locker();
		}

		// Token: 0x060000F6 RID: 246 RVA: 0x00001E8C File Offset: 0x0000128C
		public static locker new_lc_client([MarshalAs(UnmanagedType.U1)] bool is_launcher)
		{
			return new locker(uuid.mutex.lc_client(), is_launcher);
		}

		// Token: 0x060000F7 RID: 247 RVA: 0x00001EBC File Offset: 0x000012BC
		public static locker new_lc_client()
		{
			return new locker(uuid.mutex.lc_client(), false);
		}

		// Token: 0x060000F8 RID: 248 RVA: 0x00001508 File Offset: 0x00000908
		private unsafe void !locker()
		{
			locker* ptr = this.p_locker_;
			if (ptr != null)
			{
				locker* ptr2 = ptr;
				<Module>.ipc.mutex.locker.{dtor}(ptr2);
				<Module>.delete((void*)ptr2, 40UL);
				this.p_locker_ = null;
			}
		}

		// Token: 0x060000F9 RID: 249 RVA: 0x00001A08 File Offset: 0x00000E08
		[HandleProcessCorruptedStateExceptions]
		protected void Dispose([MarshalAs(UnmanagedType.U1)] bool A_0)
		{
			if (A_0)
			{
				this.!locker();
			}
			else
			{
				try
				{
					this.!locker();
				}
				finally
				{
					base.Finalize();
				}
			}
		}

		// Token: 0x060000FA RID: 250 RVA: 0x00001B28 File Offset: 0x00000F28
		public sealed void Dispose()
		{
			this.Dispose(true);
			GC.SuppressFinalize(this);
		}

		// Token: 0x060000FB RID: 251 RVA: 0x00001A4C File Offset: 0x00000E4C
		protected sealed override void Finalize()
		{
			this.Dispose(false);
		}

		// Token: 0x04000192 RID: 402
		private unsafe locker* p_locker_;
	}
}

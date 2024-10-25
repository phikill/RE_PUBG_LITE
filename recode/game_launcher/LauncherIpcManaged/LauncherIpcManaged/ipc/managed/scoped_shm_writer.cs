using System;
using System.Runtime.ExceptionServices;
using System.Runtime.InteropServices;
using std;

namespace ipc.managed
{
	// Token: 0x020000AF RID: 175
	public sealed class scoped_shm_writer : IDisposable
	{
		// Token: 0x060000FC RID: 252 RVA: 0x00001F7C File Offset: 0x0000137C
		public unsafe scoped_shm_writer(string object_name)
		{
			uint num = 0U;
			scoped_shm_writer* ptr = <Module>.@new(8UL);
			basic_string<char,std::char_traits<char>,std::allocator<char>\u0020> basic_string<char,std::char_traits<char>,std::allocator<char>_u0020>;
			scoped_shm_writer* ptr3;
			try
			{
				if (ptr != null)
				{
					basic_string<char,std::char_traits<char>,std::allocator<char>\u0020>* ptr2 = <Module>.msclr.interop.marshal_as<class\u0020std::basic_string<char,struct\u0020std::char_traits<char>,class\u0020std::allocator<char>\u0020>,class\u0020System::String\u0020^>(&basic_string<char,std::char_traits<char>,std::allocator<char>_u0020>, ref object_name);
					try
					{
						num = 1U;
						ptr3 = <Module>.ipc.scoped_shm_writer.{ctor}(ptr, ptr2);
						goto IL_40;
					}
					catch
					{
						if ((num & 1U) != 0U)
						{
							num &= 4294967294U;
							<Module>.___CxxCallUnwindDtor(ldftn(std.basic_string<char,std::char_traits<char>,std::allocator<char>\u0020>.{dtor}), (void*)(&basic_string<char,std::char_traits<char>,std::allocator<char>_u0020>));
						}
						throw;
					}
				}
				ptr3 = null;
				IL_40:;
			}
			catch
			{
				<Module>.delete((void*)ptr, 8UL);
				throw;
			}
			try
			{
				this.p_writer_ = ptr3;
			}
			catch
			{
				if ((num & 1U) != 0U)
				{
					num &= 4294967294U;
					<Module>.___CxxCallUnwindDtor(ldftn(std.basic_string<char,std::char_traits<char>,std::allocator<char>\u0020>.{dtor}), (void*)(&basic_string<char,std::char_traits<char>,std::allocator<char>_u0020>));
				}
				throw;
			}
			if ((num & 1U) != 0U)
			{
				num &= 4294967294U;
				try
				{
					<Module>.std.basic_string<char,std::char_traits<char>,std::allocator<char>\u0020>._Tidy_deallocate(ref basic_string<char,std::char_traits<char>,std::allocator<char>_u0020>);
				}
				catch
				{
					<Module>.___CxxCallUnwindDtor(ldftn(std._String_alloc<std::_String_base_types<char,std::allocator<char>\u0020>\u0020>.{dtor}), (void*)(&basic_string<char,std::char_traits<char>,std::allocator<char>_u0020>));
					throw;
				}
			}
			base..ctor();
		}

		// Token: 0x060000FD RID: 253 RVA: 0x00001F68 File Offset: 0x00001368
		private void ~scoped_shm_writer()
		{
			this.!scoped_shm_writer();
		}

		// Token: 0x060000FE RID: 254 RVA: 0x00001EF8 File Offset: 0x000012F8
		public unsafe void write_window_handle(IntPtr handle)
		{
			HWND__* ptr = handle.ToPointer();
			<Module>.ipc.scoped_shm_writer.write_window_handle(this.p_writer_, ref ptr);
		}

		// Token: 0x060000FF RID: 255 RVA: 0x00001F1C File Offset: 0x0000131C
		public void write_api_server_port(int port)
		{
			<Module>.ipc.scoped_shm_writer.write_api_server_port(this.p_writer_, port);
		}

		// Token: 0x06000100 RID: 256 RVA: 0x00001F38 File Offset: 0x00001338
		private unsafe void !scoped_shm_writer()
		{
			scoped_shm_writer* ptr = this.p_writer_;
			if (ptr != null)
			{
				scoped_shm_writer* ptr2 = ptr;
				<Module>.ipc.scoped_shm_writer.{dtor}(ptr2);
				<Module>.delete((void*)ptr2, 8UL);
				this.p_writer_ = null;
			}
		}

		// Token: 0x06000101 RID: 257 RVA: 0x000010A0 File Offset: 0x000004A0
		[HandleProcessCorruptedStateExceptions]
		protected void Dispose([MarshalAs(UnmanagedType.U1)] bool A_0)
		{
			if (A_0)
			{
				this.~scoped_shm_writer();
			}
			else
			{
				try
				{
					this.!scoped_shm_writer();
				}
				finally
				{
					base.Finalize();
				}
			}
		}

		// Token: 0x06000102 RID: 258 RVA: 0x000014EC File Offset: 0x000008EC
		public sealed void Dispose()
		{
			this.Dispose(true);
			GC.SuppressFinalize(this);
		}

		// Token: 0x06000103 RID: 259 RVA: 0x000010E4 File Offset: 0x000004E4
		protected sealed override void Finalize()
		{
			this.Dispose(false);
		}

		// Token: 0x04000193 RID: 403
		private unsafe scoped_shm_writer* p_writer_;
	}
}

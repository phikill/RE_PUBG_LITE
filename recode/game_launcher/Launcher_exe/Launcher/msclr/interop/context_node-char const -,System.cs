using System;
using System.Runtime.ExceptionServices;
using System.Runtime.InteropServices;
using msclr.interop.details;

namespace msclr.interop
{
	// Token: 0x0200000D RID: 13
	internal class context_node<char\u0020const\u0020*,System::String\u0020^> : context_node_base, IDisposable
	{
		// Token: 0x06000283 RID: 643 RVA: 0x0000C208 File Offset: 0x0000B608
		public unsafe context_node<char\u0020const\u0020*,System::String\u0020^>(sbyte** _to_object, string _from_object)
		{
			this._ptr = null;
			char_buffer<char> char_buffer<char>;
			if (_from_object == null)
			{
				*_to_object = 0L;
			}
			else
			{
				ulong num = <Module>.msclr.interop.details.GetAnsiStringSize(_from_object);
				char_buffer<char> = <Module>.new[](num);
				try
				{
					if (char_buffer<char> == null)
					{
						throw new InsufficientMemoryException();
					}
					<Module>.msclr.interop.details.WriteAnsiString(char_buffer<char>, num, _from_object);
					sbyte* ptr = char_buffer<char>;
					char_buffer<char> = 0L;
					this._ptr = ptr;
					*_to_object = ptr;
				}
				catch
				{
					<Module>.___CxxCallUnwindDtor(ldftn(msclr.interop.details.char_buffer<char>.{dtor}), (void*)(&char_buffer<char>));
					throw;
				}
				<Module>.delete[](null);
			}
			try
			{
			}
			catch
			{
				<Module>.___CxxCallUnwindDtor(ldftn(msclr.interop.details.char_buffer<char>.{dtor}), (void*)(&char_buffer<char>));
				throw;
			}
		}

		// Token: 0x06000284 RID: 644 RVA: 0x0000ABC4 File Offset: 0x00009FC4
		private unsafe void ~context_node<char\u0020const\u0020*,System::String\u0020^>()
		{
			<Module>.delete[]((void*)this._ptr);
		}

		// Token: 0x06000285 RID: 645 RVA: 0x0000ABC4 File Offset: 0x00009FC4
		private unsafe void !context_node<char\u0020const\u0020*,System::String\u0020^>()
		{
			<Module>.delete[]((void*)this._ptr);
		}

		// Token: 0x06000286 RID: 646 RVA: 0x0000C2C8 File Offset: 0x0000B6C8
		[HandleProcessCorruptedStateExceptions]
		protected unsafe virtual void Dispose([MarshalAs(UnmanagedType.U1)] bool A_0)
		{
			if (A_0)
			{
				<Module>.delete[]((void*)this._ptr);
			}
			else
			{
				try
				{
					this.!context_node<char\u0020const\u0020*,System::String\u0020^>();
				}
				finally
				{
					base.Finalize();
				}
			}
		}

		// Token: 0x06000287 RID: 647 RVA: 0x0000CFE8 File Offset: 0x0000C3E8
		public sealed void Dispose()
		{
			this.Dispose(true);
			GC.SuppressFinalize(this);
		}

		// Token: 0x06000288 RID: 648 RVA: 0x0000C314 File Offset: 0x0000B714
		protected override void Finalize()
		{
			this.Dispose(false);
		}

		// Token: 0x0400013B RID: 315
		private unsafe sbyte* _ptr;
	}
}

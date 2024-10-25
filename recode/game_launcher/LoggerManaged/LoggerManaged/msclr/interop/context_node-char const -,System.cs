using System;
using System.Runtime.ExceptionServices;
using System.Runtime.InteropServices;
using msclr.interop.details;

namespace msclr.interop
{
	// Token: 0x02000004 RID: 4
	internal class context_node<char\u0020const\u0020*,System::String\u0020^> : context_node_base, IDisposable
	{
		// Token: 0x060000BB RID: 187 RVA: 0x0000B20C File Offset: 0x0000A60C
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

		// Token: 0x060000BC RID: 188 RVA: 0x0000B2CC File Offset: 0x0000A6CC
		private unsafe void ~context_node<char\u0020const\u0020*,System::String\u0020^>()
		{
			<Module>.delete[]((void*)this._ptr);
		}

		// Token: 0x060000BD RID: 189 RVA: 0x0000AEE4 File Offset: 0x0000A2E4
		private unsafe void !context_node<char\u0020const\u0020*,System::String\u0020^>()
		{
			<Module>.delete[]((void*)this._ptr);
		}

		// Token: 0x060000BE RID: 190 RVA: 0x0000B2E4 File Offset: 0x0000A6E4
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

		// Token: 0x060000BF RID: 191 RVA: 0x0000B5F8 File Offset: 0x0000A9F8
		public sealed void Dispose()
		{
			this.Dispose(true);
			GC.SuppressFinalize(this);
		}

		// Token: 0x060000C0 RID: 192 RVA: 0x0000B330 File Offset: 0x0000A730
		protected override void Finalize()
		{
			this.Dispose(false);
		}

		// Token: 0x040000F5 RID: 245
		private unsafe sbyte* _ptr;
	}
}

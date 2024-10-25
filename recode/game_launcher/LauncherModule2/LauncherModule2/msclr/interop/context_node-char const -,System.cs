using System;
using System.Runtime.ExceptionServices;
using System.Runtime.InteropServices;
using msclr.interop.details;

namespace msclr.interop
{
	// Token: 0x02000004 RID: 4
	internal class context_node<char\u0020const\u0020*,System::String\u0020^> : context_node_base, IDisposable
	{
		// Token: 0x060002EC RID: 748 RVA: 0x0001A098 File Offset: 0x00019498
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

		// Token: 0x060002ED RID: 749 RVA: 0x0001A158 File Offset: 0x00019558
		private unsafe void ~context_node<char\u0020const\u0020*,System::String\u0020^>()
		{
			<Module>.delete[]((void*)this._ptr);
		}

		// Token: 0x060002EE RID: 750 RVA: 0x00019EC4 File Offset: 0x000192C4
		private unsafe void !context_node<char\u0020const\u0020*,System::String\u0020^>()
		{
			<Module>.delete[]((void*)this._ptr);
		}

		// Token: 0x060002EF RID: 751 RVA: 0x0001A170 File Offset: 0x00019570
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

		// Token: 0x060002F0 RID: 752 RVA: 0x0001A32C File Offset: 0x0001972C
		public sealed void Dispose()
		{
			this.Dispose(true);
			GC.SuppressFinalize(this);
		}

		// Token: 0x060002F1 RID: 753 RVA: 0x0001A1BC File Offset: 0x000195BC
		protected override void Finalize()
		{
			this.Dispose(false);
		}

		// Token: 0x0400036A RID: 874
		private unsafe sbyte* _ptr;
	}
}

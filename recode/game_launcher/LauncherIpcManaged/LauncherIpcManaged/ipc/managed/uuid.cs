using System;
using std;

namespace ipc.managed
{
	// Token: 0x020000B0 RID: 176
	public static class uuid
	{
		// Token: 0x06000104 RID: 260 RVA: 0x00002FB8 File Offset: 0x000023B8
		public unsafe static string shm()
		{
			basic_string<char,std::char_traits<char>,std::allocator<char>\u0020> basic_string<char,std::char_traits<char>,std::allocator<char>_u0020>;
			basic_string<char,std::char_traits<char>,std::allocator<char>\u0020>* ptr = <Module>.ipc.uuid.shm(&basic_string<char,std::char_traits<char>,std::allocator<char>_u0020>);
			string text;
			try
			{
				text = <Module>.msclr.interop.marshal_as<class\u0020System::String\u0020^,class\u0020std::basic_string<char,struct\u0020std::char_traits<char>,class\u0020std::allocator<char>\u0020>\u0020>(ptr);
			}
			catch
			{
				<Module>.___CxxCallUnwindDtor(ldftn(std.basic_string<char,std::char_traits<char>,std::allocator<char>\u0020>.{dtor}), (void*)(&basic_string<char,std::char_traits<char>,std::allocator<char>_u0020>));
				throw;
			}
			try
			{
				<Module>.std.basic_string<char,std::char_traits<char>,std::allocator<char>\u0020>._Tidy_deallocate(ref basic_string<char,std::char_traits<char>,std::allocator<char>_u0020>);
			}
			catch
			{
				<Module>.___CxxCallUnwindDtor(ldftn(std._String_alloc<std::_String_base_types<char,std::allocator<char>\u0020>\u0020>.{dtor}), (void*)(&basic_string<char,std::char_traits<char>,std::allocator<char>_u0020>));
				throw;
			}
			return text;
		}

		// Token: 0x020000B1 RID: 177
		public static class mutex
		{
			// Token: 0x06000105 RID: 261 RVA: 0x00002EC0 File Offset: 0x000022C0
			public unsafe static string lc_lc()
			{
				basic_string<char,std::char_traits<char>,std::allocator<char>\u0020> basic_string<char,std::char_traits<char>,std::allocator<char>_u0020>;
				basic_string<char,std::char_traits<char>,std::allocator<char>\u0020>* ptr = <Module>.ipc.uuid.mutex.lc_lc(&basic_string<char,std::char_traits<char>,std::allocator<char>_u0020>);
				string text;
				try
				{
					text = <Module>.msclr.interop.marshal_as<class\u0020System::String\u0020^,class\u0020std::basic_string<char,struct\u0020std::char_traits<char>,class\u0020std::allocator<char>\u0020>\u0020>(ptr);
				}
				catch
				{
					<Module>.___CxxCallUnwindDtor(ldftn(std.basic_string<char,std::char_traits<char>,std::allocator<char>\u0020>.{dtor}), (void*)(&basic_string<char,std::char_traits<char>,std::allocator<char>_u0020>));
					throw;
				}
				try
				{
					<Module>.std.basic_string<char,std::char_traits<char>,std::allocator<char>\u0020>._Tidy_deallocate(ref basic_string<char,std::char_traits<char>,std::allocator<char>_u0020>);
				}
				catch
				{
					<Module>.___CxxCallUnwindDtor(ldftn(std._String_alloc<std::_String_base_types<char,std::allocator<char>\u0020>\u0020>.{dtor}), (void*)(&basic_string<char,std::char_traits<char>,std::allocator<char>_u0020>));
					throw;
				}
				return text;
			}

			// Token: 0x06000106 RID: 262 RVA: 0x00002F3C File Offset: 0x0000233C
			public unsafe static string lc_client()
			{
				basic_string<char,std::char_traits<char>,std::allocator<char>\u0020> basic_string<char,std::char_traits<char>,std::allocator<char>_u0020>;
				basic_string<char,std::char_traits<char>,std::allocator<char>\u0020>* ptr = <Module>.ipc.uuid.mutex.lc_client(&basic_string<char,std::char_traits<char>,std::allocator<char>_u0020>);
				string text;
				try
				{
					text = <Module>.msclr.interop.marshal_as<class\u0020System::String\u0020^,class\u0020std::basic_string<char,struct\u0020std::char_traits<char>,class\u0020std::allocator<char>\u0020>\u0020>(ptr);
				}
				catch
				{
					<Module>.___CxxCallUnwindDtor(ldftn(std.basic_string<char,std::char_traits<char>,std::allocator<char>\u0020>.{dtor}), (void*)(&basic_string<char,std::char_traits<char>,std::allocator<char>_u0020>));
					throw;
				}
				try
				{
					<Module>.std.basic_string<char,std::char_traits<char>,std::allocator<char>\u0020>._Tidy_deallocate(ref basic_string<char,std::char_traits<char>,std::allocator<char>_u0020>);
				}
				catch
				{
					<Module>.___CxxCallUnwindDtor(ldftn(std._String_alloc<std::_String_base_types<char,std::allocator<char>\u0020>\u0020>.{dtor}), (void*)(&basic_string<char,std::char_traits<char>,std::allocator<char>_u0020>));
					throw;
				}
				return text;
			}
		}
	}
}

using System;
using System.Threading.Tasks;
using CefSharp;
using CefSharp.Wpf;
using std;

// Token: 0x02000018 RID: 24
internal sealed class PatcherObject
{
	// Token: 0x060001C3 RID: 451 RVA: 0x000B95E0 File Offset: 0x000B89E0
	public PatcherObject(ChromiumWebBrowser wb, IBrowser b)
	{
	}

	// Token: 0x060001C4 RID: 452 RVA: 0x000BB220 File Offset: 0x000BA620
	public unsafe CheckUpdateResult CheckUpdate(string gameId, string gamePath, string updateUrl)
	{
		if (<Module>.?use_log@LogMsg@@2_NA)
		{
			<Module>.LogMsg.Write((char*)(&<Module>.??_C@_1CI@FEDNFPGD@?$AAc?$AAh?$AAe?$AAc?$AAk?$AA_?$AAu?$AAp?$AAd?$AAa?$AAt?$AAe?$AA?5?$AAc?$AAa@), __arglist());
		}
		IniParser* ptr = *(<Module>.ObjectModule<PatcherNativeObject>.GetInstance() + 80L);
		string text = ((!(gameId == null)) ? gameId : string.Empty);
		basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020> basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>;
		<Module>.msclr.interop.marshal_as<class\u0020std::basic_string<wchar_t,struct\u0020std::char_traits<wchar_t>,class\u0020std::allocator<wchar_t>\u0020>,class\u0020System::String\u0020^>(&basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>, ref text);
		CheckUpdateResult checkUpdateResult2;
		try
		{
			string text2 = ((!(gamePath == null)) ? gamePath : string.Empty);
			basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020> basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>2;
			<Module>.msclr.interop.marshal_as<class\u0020std::basic_string<wchar_t,struct\u0020std::char_traits<wchar_t>,class\u0020std::allocator<wchar_t>\u0020>,class\u0020System::String\u0020^>(&basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>2, ref text2);
			try
			{
				string text3 = ((!(updateUrl == null)) ? updateUrl : string.Empty);
				basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020> basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>3;
				<Module>.msclr.interop.marshal_as<class\u0020std::basic_string<wchar_t,struct\u0020std::char_traits<wchar_t>,class\u0020std::allocator<wchar_t>\u0020>,class\u0020System::String\u0020^>(&basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>3, ref text3);
				try
				{
					char* ptr2 = <Module>.std.basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>.c_str(ref basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>2);
					char* ptr3 = <Module>.std.basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>.c_str(ref basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>);
					basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020> basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>4;
					basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>* ptr4 = <Module>.IniParser.GetValueStringW(ptr, &basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>4, ptr3, (char*)(&<Module>.??_C@_1BE@MEEABCCM@?$AAg?$AAa?$AAm?$AAe?$AA_?$AAp?$AAa?$AAt?$AAh@), ptr2);
					try
					{
						<Module>.std.basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>.=(ref basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>2, ptr4);
					}
					catch
					{
						<Module>.___CxxCallUnwindDtor(ldftn(std.basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>.{dtor}), (void*)(&basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>4));
						throw;
					}
					try
					{
						<Module>.std.basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>._Tidy_deallocate(ref basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>4);
					}
					catch
					{
						<Module>.___CxxCallUnwindDtor(ldftn(std._String_alloc<std::_String_base_types<wchar_t,std::allocator<wchar_t>\u0020>\u0020>.{dtor}), (void*)(&basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>4));
						throw;
					}
					char* ptr5 = <Module>.std.basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>.c_str(ref basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>3);
					char* ptr6 = <Module>.std.basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>.c_str(ref basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>);
					basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020> basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>5;
					basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>* ptr7 = <Module>.IniParser.GetValueStringW(ptr, &basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>5, ptr6, (char*)(&<Module>.??_C@_1BG@JLHGJLOE@?$AAu?$AAp?$AAd?$AAa?$AAt?$AAe?$AA_?$AAu?$AAr?$AAl@), ptr5);
					try
					{
						<Module>.std.basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>.=(ref basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>3, ptr7);
					}
					catch
					{
						<Module>.___CxxCallUnwindDtor(ldftn(std.basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>.{dtor}), (void*)(&basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>5));
						throw;
					}
					try
					{
						<Module>.std.basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>._Tidy_deallocate(ref basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>5);
					}
					catch
					{
						<Module>.___CxxCallUnwindDtor(ldftn(std._String_alloc<std::_String_base_types<wchar_t,std::allocator<wchar_t>\u0020>\u0020>.{dtor}), (void*)(&basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>5));
						throw;
					}
					<Module>.ConvertUrlToPath(ref basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>2);
					PatcherManager* ptr8 = <Module>.PatcherManager.GetPatcherManager(ref basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>);
					CheckUpdateResult checkUpdateResult;
					if (null == ptr8)
					{
						checkUpdateResult = new CheckUpdateResult
						{
							game_id = gameId,
							result = -2
						};
					}
					else
					{
						<Module>.PatcherManager.SetInitInfo(ptr8, <Module>.PatcherNativeObject.GetBasePath(<Module>.ObjectModule<PatcherNativeObject>.GetInstance()), ref basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>2, ref basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>3);
						method checkUpdateResult_u0020(PatcherManager*) = ldftn(PatcherNativeObject.CheckUpdateTask);
						function<System::Object\u0020^\u0020__clrcall(PatcherManager\u0020*)> function<System::Object_u0020^_u0020__clrcall(PatcherManager_u0020*)>;
						*((ref function<System::Object_u0020^_u0020__clrcall(PatcherManager_u0020*)>) + 56) = 0L;
						try
						{
							<Module>.std._Func_class<System::Object\u0020^,PatcherManager\u0020*>._Reset<class\u0020CheckUpdateResult\u0020^\u0020(__clrcall*)(class\u0020PatcherManager\u0020*)>(ref function<System::Object_u0020^_u0020__clrcall(PatcherManager_u0020*)>, ref checkUpdateResult_u0020(PatcherManager*));
						}
						catch
						{
							<Module>.___CxxCallUnwindDtor(ldftn(std._Func_class<System::Object\u0020^,PatcherManager\u0020*>.{dtor}), (void*)(&function<System::Object_u0020^_u0020__clrcall(PatcherManager_u0020*)>));
							throw;
						}
						TaskRecord<System::Threading::Tasks::Task<System::Object\u0020^>\u0020> taskRecord<System::Threading::Tasks::Task<System::Object_u0020^>_u0020>;
						try
						{
							taskRecord<System::Threading::Tasks::Task<System::Object_u0020^>_u0020> = TaskList<PatcherManager,System::Object\u0020^>.CreateTask(ref function<System::Object_u0020^_u0020__clrcall(PatcherManager_u0020*)>, ptr8);
						}
						catch
						{
							<Module>.___CxxCallUnwindDtor(ldftn(std.function<System::Object\u0020^\u0020__clrcall(PatcherManager\u0020*)>.{dtor}), (void*)(&function<System::Object_u0020^_u0020__clrcall(PatcherManager_u0020*)>));
							throw;
						}
						<Module>.std._Func_class<System::Object\u0020^,PatcherManager\u0020*>._Tidy(ref function<System::Object_u0020^_u0020__clrcall(PatcherManager_u0020*)>);
						if (taskRecord<System::Threading::Tasks::Task<System::Object_u0020^>_u0020> != null)
						{
							checkUpdateResult2 = TaskList<PatcherManager,System::Object\u0020^>.Wait<CheckUpdateResult\u0020^>(taskRecord<System::Threading::Tasks::Task<System::Object_u0020^>_u0020>);
							goto IL_1E9;
						}
						checkUpdateResult = new CheckUpdateResult
						{
							game_id = gameId,
							result = -1,
							error = 15
						};
					}
					checkUpdateResult2 = checkUpdateResult;
					IL_1E9:;
				}
				catch
				{
					<Module>.___CxxCallUnwindDtor(ldftn(std.basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>.{dtor}), (void*)(&basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>3));
					throw;
				}
				try
				{
					<Module>.std.basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>._Tidy_deallocate(ref basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>3);
				}
				catch
				{
					<Module>.___CxxCallUnwindDtor(ldftn(std._String_alloc<std::_String_base_types<wchar_t,std::allocator<wchar_t>\u0020>\u0020>.{dtor}), (void*)(&basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>3));
					throw;
				}
			}
			catch
			{
				<Module>.___CxxCallUnwindDtor(ldftn(std.basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>.{dtor}), (void*)(&basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>2));
				throw;
			}
			try
			{
				<Module>.std.basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>._Tidy_deallocate(ref basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>2);
			}
			catch
			{
				<Module>.___CxxCallUnwindDtor(ldftn(std._String_alloc<std::_String_base_types<wchar_t,std::allocator<wchar_t>\u0020>\u0020>.{dtor}), (void*)(&basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>2));
				throw;
			}
		}
		catch
		{
			<Module>.___CxxCallUnwindDtor(ldftn(std.basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>.{dtor}), (void*)(&basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>));
			throw;
		}
		try
		{
			<Module>.std.basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>._Tidy_deallocate(ref basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>);
		}
		catch
		{
			<Module>.___CxxCallUnwindDtor(ldftn(std._String_alloc<std::_String_base_types<wchar_t,std::allocator<wchar_t>\u0020>\u0020>.{dtor}), (void*)(&basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>));
			throw;
		}
		return checkUpdateResult2;
	}

	// Token: 0x060001C5 RID: 453 RVA: 0x000BA684 File Offset: 0x000B9A84
	public unsafe void Update(string gameId)
	{
		if (<Module>.?use_log@LogMsg@@2_NA)
		{
			<Module>.LogMsg.Write((char*)(&<Module>.??_C@_1BM@HNONJDNI@?$AAU?$AAp?$AAd?$AAa?$AAt?$AAe?$AA?5?$AAc?$AAa?$AAl?$AAl?$AAe?$AAd@), __arglist());
		}
		string text = ((!(gameId == null)) ? gameId : string.Empty);
		basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020> basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>;
		<Module>.msclr.interop.marshal_as<class\u0020std::basic_string<wchar_t,struct\u0020std::char_traits<wchar_t>,class\u0020std::allocator<wchar_t>\u0020>,class\u0020System::String\u0020^>((basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>*)(&basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>), ref text);
		try
		{
			PatcherManager* ptr = <Module>.PatcherManager.GetPatcherManager(ref basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>);
			if (null == ptr)
			{
				UpdateResult updateResult = new UpdateResult();
				updateResult.game_id = gameId;
				updateResult.result = -2;
				NotifyResult.Dispatch(this.wb_, "UpdateComplete", updateResult, null);
			}
			function<System::Object\u0020^\u0020__clrcall(PatcherManager\u0020*)> function<System::Object_u0020^_u0020__clrcall(PatcherManager_u0020*)>;
			<Module>.std.function<System::Object\u0020^\u0020__clrcall(PatcherManager\u0020*)>.{ctor}<class\u0020UpdateResult\u0020^\u0020(__clrcall*)(class\u0020PatcherManager\u0020*),void>(ref function<System::Object_u0020^_u0020__clrcall(PatcherManager_u0020*)>, ldftn(PatcherNativeObject.UpdateTask));
			TaskRecord<System::Threading::Tasks::Task<System::Object\u0020^>\u0020> taskRecord<System::Threading::Tasks::Task<System::Object_u0020^>_u0020>;
			try
			{
				taskRecord<System::Threading::Tasks::Task<System::Object_u0020^>_u0020> = TaskList<PatcherManager,System::Object\u0020^>.CreateTask(ref function<System::Object_u0020^_u0020__clrcall(PatcherManager_u0020*)>, ptr);
			}
			catch
			{
				<Module>.___CxxCallUnwindDtor(ldftn(std.function<System::Object\u0020^\u0020__clrcall(PatcherManager\u0020*)>.{dtor}), (void*)(&function<System::Object_u0020^_u0020__clrcall(PatcherManager_u0020*)>));
				throw;
			}
			<Module>.std._Func_class<System::Object\u0020^,PatcherManager\u0020*>._Tidy(ref function<System::Object_u0020^_u0020__clrcall(PatcherManager_u0020*)>);
			if (taskRecord<System::Threading::Tasks::Task<System::Object_u0020^>_u0020> == null)
			{
				UpdateResult updateResult2 = new UpdateResult();
				updateResult2.game_id = gameId;
				updateResult2.result = -1;
				updateResult2.error = 15;
				NotifyResult.Dispatch(this.wb_, "UpdateComplete", updateResult2, null);
			}
			Task<object> task = taskRecord<System::Threading::Tasks::Task<System::Object_u0020^>_u0020>.Task;
			Action<Task<object>> action = new Action<Task<object>>(this.OnUpdateComplete);
			task.ContinueWith(action);
		}
		catch
		{
			<Module>.___CxxCallUnwindDtor(ldftn(std.basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>.{dtor}), (void*)(&basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>));
			throw;
		}
		try
		{
			<Module>.std.basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>._Tidy_deallocate(ref basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>);
		}
		catch
		{
			<Module>.___CxxCallUnwindDtor(ldftn(std._String_alloc<std::_String_base_types<wchar_t,std::allocator<wchar_t>\u0020>\u0020>.{dtor}), (void*)(&basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>));
			throw;
		}
	}

	// Token: 0x060001C6 RID: 454 RVA: 0x000BA7E8 File Offset: 0x000B9BE8
	public unsafe void SimpleCheck(string gameId)
	{
		if (<Module>.?use_log@LogMsg@@2_NA)
		{
			<Module>.LogMsg.Write((char*)(&<Module>.??_C@_1CG@BKKJOIPG@?$AAS?$AAi?$AAm?$AAp?$AAl?$AAe?$AAC?$AAh?$AAe?$AAc?$AAk?$AA?5?$AAc?$AAa?$AAl@), __arglist());
		}
		string text = ((!(gameId == null)) ? gameId : string.Empty);
		basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020> basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>;
		<Module>.msclr.interop.marshal_as<class\u0020std::basic_string<wchar_t,struct\u0020std::char_traits<wchar_t>,class\u0020std::allocator<wchar_t>\u0020>,class\u0020System::String\u0020^>((basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>*)(&basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>), ref text);
		try
		{
			PatcherManager* ptr = <Module>.PatcherManager.GetPatcherManager(ref basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>);
			if (null == ptr)
			{
				SimpleCheckResult simpleCheckResult = new SimpleCheckResult();
				simpleCheckResult.game_id = gameId;
				simpleCheckResult.result = -2;
				NotifyResult.Dispatch(this.wb_, "SimpleCheckComplete", simpleCheckResult, null);
			}
			function<System::Object\u0020^\u0020__clrcall(PatcherManager\u0020*)> function<System::Object_u0020^_u0020__clrcall(PatcherManager_u0020*)>;
			<Module>.std.function<System::Object\u0020^\u0020__clrcall(PatcherManager\u0020*)>.{ctor}<class\u0020SimpleCheckResult\u0020^\u0020(__clrcall*)(class\u0020PatcherManager\u0020*),void>(ref function<System::Object_u0020^_u0020__clrcall(PatcherManager_u0020*)>, ldftn(PatcherNativeObject.SimpleCheckTask));
			TaskRecord<System::Threading::Tasks::Task<System::Object\u0020^>\u0020> taskRecord<System::Threading::Tasks::Task<System::Object_u0020^>_u0020>;
			try
			{
				taskRecord<System::Threading::Tasks::Task<System::Object_u0020^>_u0020> = TaskList<PatcherManager,System::Object\u0020^>.CreateTask(ref function<System::Object_u0020^_u0020__clrcall(PatcherManager_u0020*)>, ptr);
			}
			catch
			{
				<Module>.___CxxCallUnwindDtor(ldftn(std.function<System::Object\u0020^\u0020__clrcall(PatcherManager\u0020*)>.{dtor}), (void*)(&function<System::Object_u0020^_u0020__clrcall(PatcherManager_u0020*)>));
				throw;
			}
			<Module>.std._Func_class<System::Object\u0020^,PatcherManager\u0020*>._Tidy(ref function<System::Object_u0020^_u0020__clrcall(PatcherManager_u0020*)>);
			if (taskRecord<System::Threading::Tasks::Task<System::Object_u0020^>_u0020> == null)
			{
				SimpleCheckResult simpleCheckResult2 = new SimpleCheckResult();
				simpleCheckResult2.game_id = gameId;
				simpleCheckResult2.result = -1;
				simpleCheckResult2.error = 15;
				NotifyResult.Dispatch(this.wb_, "SimpleCheckComplete", simpleCheckResult2, null);
			}
			Task<object> task = taskRecord<System::Threading::Tasks::Task<System::Object_u0020^>_u0020>.Task;
			Action<Task<object>> action = new Action<Task<object>>(this.OnSimpleCheckComplete);
			task.ContinueWith(action);
		}
		catch
		{
			<Module>.___CxxCallUnwindDtor(ldftn(std.basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>.{dtor}), (void*)(&basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>));
			throw;
		}
		try
		{
			<Module>.std.basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>._Tidy_deallocate(ref basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>);
		}
		catch
		{
			<Module>.___CxxCallUnwindDtor(ldftn(std._String_alloc<std::_String_base_types<wchar_t,std::allocator<wchar_t>\u0020>\u0020>.{dtor}), (void*)(&basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>));
			throw;
		}
	}

	// Token: 0x060001C7 RID: 455 RVA: 0x000BA94C File Offset: 0x000B9D4C
	public unsafe void FullCheck(string gameId)
	{
		if (<Module>.?use_log@LogMsg@@2_NA)
		{
			<Module>.LogMsg.Write((char*)(&<Module>.??_C@_1CC@BKCEEMDK@?$AAF?$AAu?$AAl?$AAl?$AAC?$AAh?$AAe?$AAc?$AAk?$AA?5?$AAc?$AAa?$AAl?$AAl?$AAe@), __arglist());
		}
		string text = ((!(gameId == null)) ? gameId : string.Empty);
		basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020> basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>;
		<Module>.msclr.interop.marshal_as<class\u0020std::basic_string<wchar_t,struct\u0020std::char_traits<wchar_t>,class\u0020std::allocator<wchar_t>\u0020>,class\u0020System::String\u0020^>((basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>*)(&basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>), ref text);
		try
		{
			PatcherManager* ptr = <Module>.PatcherManager.GetPatcherManager(ref basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>);
			if (null == ptr)
			{
				FullCheckResult fullCheckResult = new FullCheckResult();
				fullCheckResult.game_id = gameId;
				fullCheckResult.result = -2;
				NotifyResult.Dispatch(this.wb_, "FullCheckComplete", fullCheckResult, null);
			}
			function<System::Object\u0020^\u0020__clrcall(PatcherManager\u0020*)> function<System::Object_u0020^_u0020__clrcall(PatcherManager_u0020*)>;
			<Module>.std.function<System::Object\u0020^\u0020__clrcall(PatcherManager\u0020*)>.{ctor}<class\u0020FullCheckResult\u0020^\u0020(__clrcall*)(class\u0020PatcherManager\u0020*),void>(ref function<System::Object_u0020^_u0020__clrcall(PatcherManager_u0020*)>, ldftn(PatcherNativeObject.FullCheckTask));
			TaskRecord<System::Threading::Tasks::Task<System::Object\u0020^>\u0020> taskRecord<System::Threading::Tasks::Task<System::Object_u0020^>_u0020>;
			try
			{
				taskRecord<System::Threading::Tasks::Task<System::Object_u0020^>_u0020> = TaskList<PatcherManager,System::Object\u0020^>.CreateTask(ref function<System::Object_u0020^_u0020__clrcall(PatcherManager_u0020*)>, ptr);
			}
			catch
			{
				<Module>.___CxxCallUnwindDtor(ldftn(std.function<System::Object\u0020^\u0020__clrcall(PatcherManager\u0020*)>.{dtor}), (void*)(&function<System::Object_u0020^_u0020__clrcall(PatcherManager_u0020*)>));
				throw;
			}
			<Module>.std._Func_class<System::Object\u0020^,PatcherManager\u0020*>._Tidy(ref function<System::Object_u0020^_u0020__clrcall(PatcherManager_u0020*)>);
			if (taskRecord<System::Threading::Tasks::Task<System::Object_u0020^>_u0020> == null)
			{
				FullCheckResult fullCheckResult2 = new FullCheckResult();
				fullCheckResult2.game_id = gameId;
				fullCheckResult2.result = -1;
				fullCheckResult2.error = 15;
				NotifyResult.Dispatch(this.wb_, "FullCheckComplete", fullCheckResult2, null);
			}
			Task<object> task = taskRecord<System::Threading::Tasks::Task<System::Object_u0020^>_u0020>.Task;
			Action<Task<object>> action = new Action<Task<object>>(this.OnFullCheckComplete);
			task.ContinueWith(action);
		}
		catch
		{
			<Module>.___CxxCallUnwindDtor(ldftn(std.basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>.{dtor}), (void*)(&basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>));
			throw;
		}
		try
		{
			<Module>.std.basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>._Tidy_deallocate(ref basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>);
		}
		catch
		{
			<Module>.___CxxCallUnwindDtor(ldftn(std._String_alloc<std::_String_base_types<wchar_t,std::allocator<wchar_t>\u0020>\u0020>.{dtor}), (void*)(&basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>));
			throw;
		}
	}

	// Token: 0x060001C8 RID: 456 RVA: 0x000BAAB0 File Offset: 0x000B9EB0
	public unsafe RequestProgressResult RequestProgress(string gameId)
	{
		if (<Module>.?use_log@LogMsg@@2_NA)
		{
			<Module>.LogMsg.Write((char*)(&<Module>.??_C@_1DA@ELBBPNK@?$AAr?$AAe?$AAq?$AAu?$AAe?$AAs?$AAt?$AA_?$AAp?$AAr?$AAo?$AAg?$AAr?$AAe?$AAs@), __arglist());
		}
		string text = ((!(gameId == null)) ? gameId : string.Empty);
		basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020> basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>;
		<Module>.msclr.interop.marshal_as<class\u0020std::basic_string<wchar_t,struct\u0020std::char_traits<wchar_t>,class\u0020std::allocator<wchar_t>\u0020>,class\u0020System::String\u0020^>((basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>*)(&basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>), ref text);
		RequestProgressResult requestProgressResult2;
		try
		{
			PatcherManager* ptr = <Module>.PatcherManager.GetPatcherManager(ref basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>);
			RequestProgressResult requestProgressResult = new RequestProgressResult();
			requestProgressResult.game_id = gameId;
			if (null == ptr)
			{
				requestProgressResult2 = requestProgressResult;
			}
			else
			{
				URequestProgressResult urequestProgressResult;
				<Module>.URequestProgressResult.{ctor}(ref urequestProgressResult);
				try
				{
					<Module>.PatcherManager.GetProgress(ptr, ref urequestProgressResult);
					requestProgressResult2 = <Module>.msclr.interop.marshal_as<class\u0020RequestProgressResult\u0020^,struct\u0020URequestProgressResult>(ref urequestProgressResult);
				}
				catch
				{
					<Module>.___CxxCallUnwindDtor(ldftn(URequestProgressResult.{dtor}), (void*)(&urequestProgressResult));
					throw;
				}
				<Module>.URequestProgressResult.{dtor}(ref urequestProgressResult);
			}
		}
		catch
		{
			<Module>.___CxxCallUnwindDtor(ldftn(std.basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>.{dtor}), (void*)(&basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>));
			throw;
		}
		try
		{
			<Module>.std.basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>._Tidy_deallocate(ref basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>);
		}
		catch
		{
			<Module>.___CxxCallUnwindDtor(ldftn(std._String_alloc<std::_String_base_types<wchar_t,std::allocator<wchar_t>\u0020>\u0020>.{dtor}), (void*)(&basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>));
			throw;
		}
		return requestProgressResult2;
	}

	// Token: 0x060001C9 RID: 457 RVA: 0x000BABB0 File Offset: 0x000B9FB0
	public unsafe void Abort(string gameId)
	{
		if (<Module>.?use_log@LogMsg@@2_NA)
		{
			<Module>.LogMsg.Write((char*)(&<Module>.??_C@_1BK@FACBGBOJ@?$AAa?$AAb?$AAo?$AAr?$AAt?$AA?5?$AAc?$AAa?$AAl?$AAl?$AAe?$AAd@), __arglist());
		}
		string text = ((!(gameId == null)) ? gameId : string.Empty);
		basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020> basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>;
		<Module>.msclr.interop.marshal_as<class\u0020std::basic_string<wchar_t,struct\u0020std::char_traits<wchar_t>,class\u0020std::allocator<wchar_t>\u0020>,class\u0020System::String\u0020^>((basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>*)(&basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>), ref text);
		try
		{
			PatcherManager* ptr = <Module>.PatcherManager.GetPatcherManager(ref basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>);
			if (ptr != null)
			{
				<Module>.PatcherManager.Abort(ptr);
			}
		}
		catch
		{
			<Module>.___CxxCallUnwindDtor(ldftn(std.basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>.{dtor}), (void*)(&basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>));
			throw;
		}
		try
		{
			<Module>.std.basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>._Tidy_deallocate(ref basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>);
		}
		catch
		{
			<Module>.___CxxCallUnwindDtor(ldftn(std._String_alloc<std::_String_base_types<wchar_t,std::allocator<wchar_t>\u0020>\u0020>.{dtor}), (void*)(&basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>));
			throw;
		}
	}

	// Token: 0x060001CA RID: 458 RVA: 0x000BB5B4 File Offset: 0x000BA9B4
	public unsafe void Install(string gameId, string gamePath, string updateUrl)
	{
		if (<Module>.?use_log@LogMsg@@2_NA)
		{
			<Module>.LogMsg.Write((char*)(&<Module>.??_C@_1BO@MLPNLLME@?$AAI?$AAn?$AAs?$AAt?$AAa?$AAl?$AAl?$AA?5?$AAc?$AAa?$AAl?$AAl?$AAe?$AAd@), __arglist());
		}
		string text = ((!(gameId == null)) ? gameId : string.Empty);
		basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020> basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>;
		<Module>.msclr.interop.marshal_as<class\u0020std::basic_string<wchar_t,struct\u0020std::char_traits<wchar_t>,class\u0020std::allocator<wchar_t>\u0020>,class\u0020System::String\u0020^>(&basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>, ref text);
		try
		{
			string text2 = ((!(gamePath == null)) ? gamePath : string.Empty);
			basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020> basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>2;
			<Module>.msclr.interop.marshal_as<class\u0020std::basic_string<wchar_t,struct\u0020std::char_traits<wchar_t>,class\u0020std::allocator<wchar_t>\u0020>,class\u0020System::String\u0020^>(&basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>2, ref text2);
			try
			{
				string text3 = ((!(updateUrl == null)) ? updateUrl : string.Empty);
				basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020> basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>3;
				<Module>.msclr.interop.marshal_as<class\u0020std::basic_string<wchar_t,struct\u0020std::char_traits<wchar_t>,class\u0020std::allocator<wchar_t>\u0020>,class\u0020System::String\u0020^>(&basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>3, ref text3);
				try
				{
					IniParser* ptr = *(<Module>.ObjectModule<PatcherNativeObject>.GetInstance() + 80L);
					char* ptr2 = <Module>.std.basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>.c_str(ref basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>2);
					char* ptr3 = <Module>.std.basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>.c_str(ref basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>);
					basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020> basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>4;
					basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>* ptr4 = <Module>.IniParser.GetValueStringW(ptr, &basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>4, ptr3, (char*)(&<Module>.??_C@_1BE@MEEABCCM@?$AAg?$AAa?$AAm?$AAe?$AA_?$AAp?$AAa?$AAt?$AAh@), ptr2);
					try
					{
						<Module>.std.basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>.=(ref basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>2, ptr4);
					}
					catch
					{
						<Module>.___CxxCallUnwindDtor(ldftn(std.basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>.{dtor}), (void*)(&basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>4));
						throw;
					}
					try
					{
						<Module>.std.basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>._Tidy_deallocate(ref basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>4);
					}
					catch
					{
						<Module>.___CxxCallUnwindDtor(ldftn(std._String_alloc<std::_String_base_types<wchar_t,std::allocator<wchar_t>\u0020>\u0020>.{dtor}), (void*)(&basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>4));
						throw;
					}
					char* ptr5 = <Module>.std.basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>.c_str(ref basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>3);
					char* ptr6 = <Module>.std.basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>.c_str(ref basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>);
					basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020> basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>5;
					basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>* ptr7 = <Module>.IniParser.GetValueStringW(ptr, &basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>5, ptr6, (char*)(&<Module>.??_C@_1BG@JLHGJLOE@?$AAu?$AAp?$AAd?$AAa?$AAt?$AAe?$AA_?$AAu?$AAr?$AAl@), ptr5);
					try
					{
						<Module>.std.basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>.=(ref basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>3, ptr7);
					}
					catch
					{
						<Module>.___CxxCallUnwindDtor(ldftn(std.basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>.{dtor}), (void*)(&basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>5));
						throw;
					}
					try
					{
						<Module>.std.basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>._Tidy_deallocate(ref basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>5);
					}
					catch
					{
						<Module>.___CxxCallUnwindDtor(ldftn(std._String_alloc<std::_String_base_types<wchar_t,std::allocator<wchar_t>\u0020>\u0020>.{dtor}), (void*)(&basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>5));
						throw;
					}
					<Module>.ConvertUrlToPath(ref basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>2);
					PatcherManager* ptr8 = <Module>.PatcherManager.GetPatcherManager(ref basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>);
					if (null == ptr8)
					{
						InstallResult installResult = new InstallResult();
						installResult.game_id = gameId;
						installResult.result = -2;
						NotifyResult.Dispatch(this.wb_, "InstallComplete", installResult, null);
					}
					else
					{
						<Module>.PatcherManager.SetInitInfo(ptr8, <Module>.PatcherNativeObject.GetBasePath(<Module>.ObjectModule<PatcherNativeObject>.GetInstance()), ref basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>2, ref basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>3);
						method installResult_u0020(PatcherManager*) = ldftn(PatcherNativeObject.InstallTask);
						function<System::Object\u0020^\u0020__clrcall(PatcherManager\u0020*)> function<System::Object_u0020^_u0020__clrcall(PatcherManager_u0020*)>;
						*((ref function<System::Object_u0020^_u0020__clrcall(PatcherManager_u0020*)>) + 56) = 0L;
						try
						{
							<Module>.std._Func_class<System::Object\u0020^,PatcherManager\u0020*>._Reset<class\u0020InstallResult\u0020^\u0020(__clrcall*)(class\u0020PatcherManager\u0020*)>(ref function<System::Object_u0020^_u0020__clrcall(PatcherManager_u0020*)>, ref installResult_u0020(PatcherManager*));
						}
						catch
						{
							<Module>.___CxxCallUnwindDtor(ldftn(std._Func_class<System::Object\u0020^,PatcherManager\u0020*>.{dtor}), (void*)(&function<System::Object_u0020^_u0020__clrcall(PatcherManager_u0020*)>));
							throw;
						}
						TaskRecord<System::Threading::Tasks::Task<System::Object\u0020^>\u0020> taskRecord<System::Threading::Tasks::Task<System::Object_u0020^>_u0020>;
						try
						{
							taskRecord<System::Threading::Tasks::Task<System::Object_u0020^>_u0020> = TaskList<PatcherManager,System::Object\u0020^>.CreateTask(ref function<System::Object_u0020^_u0020__clrcall(PatcherManager_u0020*)>, ptr8);
						}
						catch
						{
							<Module>.___CxxCallUnwindDtor(ldftn(std.function<System::Object\u0020^\u0020__clrcall(PatcherManager\u0020*)>.{dtor}), (void*)(&function<System::Object_u0020^_u0020__clrcall(PatcherManager_u0020*)>));
							throw;
						}
						<Module>.std._Func_class<System::Object\u0020^,PatcherManager\u0020*>._Tidy(ref function<System::Object_u0020^_u0020__clrcall(PatcherManager_u0020*)>);
						if (taskRecord<System::Threading::Tasks::Task<System::Object_u0020^>_u0020> == null)
						{
							InstallResult installResult2 = new InstallResult();
							installResult2.game_id = gameId;
							installResult2.result = -1;
							installResult2.error = 15;
							NotifyResult.Dispatch(this.wb_, "InstallComplete", installResult2, null);
						}
						else
						{
							Task<object> task = taskRecord<System::Threading::Tasks::Task<System::Object_u0020^>_u0020>.Task;
							Action<Task<object>> action = new Action<Task<object>>(this.OnInstallComplete);
							task.ContinueWith(action);
						}
					}
				}
				catch
				{
					<Module>.___CxxCallUnwindDtor(ldftn(std.basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>.{dtor}), (void*)(&basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>3));
					throw;
				}
				try
				{
					<Module>.std.basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>._Tidy_deallocate(ref basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>3);
				}
				catch
				{
					<Module>.___CxxCallUnwindDtor(ldftn(std._String_alloc<std::_String_base_types<wchar_t,std::allocator<wchar_t>\u0020>\u0020>.{dtor}), (void*)(&basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>3));
					throw;
				}
			}
			catch
			{
				<Module>.___CxxCallUnwindDtor(ldftn(std.basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>.{dtor}), (void*)(&basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>2));
				throw;
			}
			try
			{
				<Module>.std.basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>._Tidy_deallocate(ref basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>2);
			}
			catch
			{
				<Module>.___CxxCallUnwindDtor(ldftn(std._String_alloc<std::_String_base_types<wchar_t,std::allocator<wchar_t>\u0020>\u0020>.{dtor}), (void*)(&basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>2));
				throw;
			}
		}
		catch
		{
			<Module>.___CxxCallUnwindDtor(ldftn(std.basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>.{dtor}), (void*)(&basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>));
			throw;
		}
		try
		{
			<Module>.std.basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>\u0020>._Tidy_deallocate(ref basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>);
		}
		catch
		{
			<Module>.___CxxCallUnwindDtor(ldftn(std._String_alloc<std::_String_base_types<wchar_t,std::allocator<wchar_t>\u0020>\u0020>.{dtor}), (void*)(&basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_u0020>));
			throw;
		}
	}

	// Token: 0x060001CB RID: 459 RVA: 0x000B9604 File Offset: 0x000B8A04
	private void OnUpdateComplete(Task<object> task)
	{
		if (task != null)
		{
			UpdateResult updateResult = (UpdateResult)task.Result;
			NotifyResult.Dispatch(this.wb_, "UpdateComplete", updateResult, null);
		}
	}

	// Token: 0x060001CC RID: 460 RVA: 0x000B9634 File Offset: 0x000B8A34
	private void OnSimpleCheckComplete(Task<object> task)
	{
		if (task != null)
		{
			SimpleCheckResult simpleCheckResult = (SimpleCheckResult)task.Result;
			NotifyResult.Dispatch(this.wb_, "SimpleCheckComplete", simpleCheckResult, null);
		}
	}

	// Token: 0x060001CD RID: 461 RVA: 0x000B9664 File Offset: 0x000B8A64
	private void OnFullCheckComplete(Task<object> task)
	{
		if (task != null)
		{
			FullCheckResult fullCheckResult = (FullCheckResult)task.Result;
			NotifyResult.Dispatch(this.wb_, "FullCheckComplete", fullCheckResult, null);
		}
	}

	// Token: 0x060001CE RID: 462 RVA: 0x000B9694 File Offset: 0x000B8A94
	private void OnInstallComplete(Task<object> task)
	{
		if (task != null)
		{
			InstallResult installResult = (InstallResult)task.Result;
			NotifyResult.Dispatch(this.wb_, "InstallComplete", installResult, null);
		}
	}

	// Token: 0x0400014B RID: 331
	public const string Name = "_patcher_object_";

	// Token: 0x0400014C RID: 332
	private ChromiumWebBrowser wb_ = wb;

	// Token: 0x0400014D RID: 333
	private IBrowser b_ = b;
}

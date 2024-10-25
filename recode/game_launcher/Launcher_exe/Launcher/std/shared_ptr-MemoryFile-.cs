using System;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Threading;

namespace std
{
	// Token: 0x02000053 RID: 83
	[NativeCppClass]
	[StructLayout(LayoutKind.Sequential, Size = 16)]
	internal struct shared_ptr<MemoryFile>
	{
		// Token: 0x06000294 RID: 660 RVA: 0x0000CFAC File Offset: 0x0000C3AC
		public unsafe static void <MarshalCopy>(shared_ptr<MemoryFile>* A_0, shared_ptr<MemoryFile>* A_1)
		{
			*(long*)A_0 = 0L;
			*(long*)(A_0 + 8L / (long)sizeof(shared_ptr<MemoryFile>)) = 0L;
			ulong num = (ulong)(*(long*)(A_1 + 8L / (long)sizeof(shared_ptr<MemoryFile>)));
			if (num != 0UL)
			{
				Interlocked.Increment(num + 8UL);
			}
			*(long*)A_0 = *(long*)A_1;
			*(long*)(A_0 + 8L / (long)sizeof(shared_ptr<MemoryFile>)) = *(long*)(A_1 + 8L / (long)sizeof(shared_ptr<MemoryFile>));
		}

		// Token: 0x06000295 RID: 661 RVA: 0x0000D020 File Offset: 0x0000C420
		public unsafe static void <MarshalDestroy>(shared_ptr<MemoryFile>* A_0)
		{
			ulong num = (ulong)(*(long*)(A_0 + 8L / (long)sizeof(shared_ptr<MemoryFile>)));
			if (num != 0UL)
			{
				<Module>.std._Ref_count_base._Decref(num);
			}
		}

		// Token: 0x0400015B RID: 347
		private long <alignment\u0020member>;
	}
}

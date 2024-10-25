using System;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Threading;

namespace std
{
	// Token: 0x02000052 RID: 82
	[NativeCppClass]
	[StructLayout(LayoutKind.Sequential, Size = 16)]
	internal struct shared_ptr<LocalFile>
	{
		// Token: 0x06000292 RID: 658 RVA: 0x0000CFAC File Offset: 0x0000C3AC
		public unsafe static void <MarshalCopy>(shared_ptr<LocalFile>* A_0, shared_ptr<LocalFile>* A_1)
		{
			*(long*)A_0 = 0L;
			*(long*)(A_0 + 8L / (long)sizeof(shared_ptr<LocalFile>)) = 0L;
			ulong num = (ulong)(*(long*)(A_1 + 8L / (long)sizeof(shared_ptr<LocalFile>)));
			if (num != 0UL)
			{
				Interlocked.Increment(num + 8UL);
			}
			*(long*)A_0 = *(long*)A_1;
			*(long*)(A_0 + 8L / (long)sizeof(shared_ptr<LocalFile>)) = *(long*)(A_1 + 8L / (long)sizeof(shared_ptr<LocalFile>));
		}

		// Token: 0x06000293 RID: 659 RVA: 0x0000D020 File Offset: 0x0000C420
		public unsafe static void <MarshalDestroy>(shared_ptr<LocalFile>* A_0)
		{
			ulong num = (ulong)(*(long*)(A_0 + 8L / (long)sizeof(shared_ptr<LocalFile>)));
			if (num != 0UL)
			{
				<Module>.std._Ref_count_base._Decref(num);
			}
		}

		// Token: 0x0400015A RID: 346
		private long <alignment\u0020member>;
	}
}

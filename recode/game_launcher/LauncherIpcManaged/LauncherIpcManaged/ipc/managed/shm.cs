using System;

namespace ipc.managed
{
	// Token: 0x020000AD RID: 173
	public static class shm
	{
		// Token: 0x060000F2 RID: 242 RVA: 0x000010F8 File Offset: 0x000004F8
		public static scoped_shm_writer new_writer()
		{
			return new scoped_shm_writer(uuid.shm());
		}
	}
}

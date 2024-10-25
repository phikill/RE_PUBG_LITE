using System;

// Token: 0x0200000B RID: 11
internal sealed class RequestProgressResult
{
	// Token: 0x0400013A RID: 314
	public string game_id = string.Empty;

	// Token: 0x0400013B RID: 315
	public int file_process = 0;

	// Token: 0x0400013C RID: 316
	public string current_file = string.Empty;

	// Token: 0x0400013D RID: 317
	public long file_current_size = 0L;

	// Token: 0x0400013E RID: 318
	public long file_full_size = 0L;

	// Token: 0x0400013F RID: 319
	public int current_file_count = 0;

	// Token: 0x04000140 RID: 320
	public int total_file_count = 0;

	// Token: 0x04000141 RID: 321
	public uint download_speed = 0U;

	// Token: 0x04000142 RID: 322
	public long downloaded_size;

	// Token: 0x04000143 RID: 323
	public long total_download_size = 0L;

	// Token: 0x04000144 RID: 324
	public long patched_size = 0L;

	// Token: 0x04000145 RID: 325
	public long total_patch_size = 0L;

	// Token: 0x04000146 RID: 326
	public bool patch_list_made = false;

	// Token: 0x04000147 RID: 327
	public long downloaded_install_file_size;
}

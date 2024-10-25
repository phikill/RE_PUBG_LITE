using System;

namespace WpfAnimatedGif.Decoding
{
	// Token: 0x02000017 RID: 23
	internal class GifTrailer : GifBlock
	{
		// Token: 0x060000F1 RID: 241 RVA: 0x00003936 File Offset: 0x00001B36
		private GifTrailer()
		{
		}

		// Token: 0x17000046 RID: 70
		// (get) Token: 0x060000F2 RID: 242 RVA: 0x00003CAF File Offset: 0x00001EAF
		internal override GifBlockKind Kind
		{
			get
			{
				return GifBlockKind.Other;
			}
		}

		// Token: 0x060000F3 RID: 243 RVA: 0x00004384 File Offset: 0x00002584
		internal static GifTrailer ReadTrailer()
		{
			return new GifTrailer();
		}

		// Token: 0x04000057 RID: 87
		internal const int TrailerByte = 59;
	}
}

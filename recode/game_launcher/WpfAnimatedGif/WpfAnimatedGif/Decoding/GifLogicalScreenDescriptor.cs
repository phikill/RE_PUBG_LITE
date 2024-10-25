using System;
using System.IO;

namespace WpfAnimatedGif.Decoding
{
	// Token: 0x02000015 RID: 21
	internal class GifLogicalScreenDescriptor
	{
		// Token: 0x17000032 RID: 50
		// (get) Token: 0x060000C4 RID: 196 RVA: 0x000040AE File Offset: 0x000022AE
		// (set) Token: 0x060000C5 RID: 197 RVA: 0x000040B6 File Offset: 0x000022B6
		public int Width { get; private set; }

		// Token: 0x17000033 RID: 51
		// (get) Token: 0x060000C6 RID: 198 RVA: 0x000040BF File Offset: 0x000022BF
		// (set) Token: 0x060000C7 RID: 199 RVA: 0x000040C7 File Offset: 0x000022C7
		public int Height { get; private set; }

		// Token: 0x17000034 RID: 52
		// (get) Token: 0x060000C8 RID: 200 RVA: 0x000040D0 File Offset: 0x000022D0
		// (set) Token: 0x060000C9 RID: 201 RVA: 0x000040D8 File Offset: 0x000022D8
		public bool HasGlobalColorTable { get; private set; }

		// Token: 0x17000035 RID: 53
		// (get) Token: 0x060000CA RID: 202 RVA: 0x000040E1 File Offset: 0x000022E1
		// (set) Token: 0x060000CB RID: 203 RVA: 0x000040E9 File Offset: 0x000022E9
		public int ColorResolution { get; private set; }

		// Token: 0x17000036 RID: 54
		// (get) Token: 0x060000CC RID: 204 RVA: 0x000040F2 File Offset: 0x000022F2
		// (set) Token: 0x060000CD RID: 205 RVA: 0x000040FA File Offset: 0x000022FA
		public bool IsGlobalColorTableSorted { get; private set; }

		// Token: 0x17000037 RID: 55
		// (get) Token: 0x060000CE RID: 206 RVA: 0x00004103 File Offset: 0x00002303
		// (set) Token: 0x060000CF RID: 207 RVA: 0x0000410B File Offset: 0x0000230B
		public int GlobalColorTableSize { get; private set; }

		// Token: 0x17000038 RID: 56
		// (get) Token: 0x060000D0 RID: 208 RVA: 0x00004114 File Offset: 0x00002314
		// (set) Token: 0x060000D1 RID: 209 RVA: 0x0000411C File Offset: 0x0000231C
		public int BackgroundColorIndex { get; private set; }

		// Token: 0x17000039 RID: 57
		// (get) Token: 0x060000D2 RID: 210 RVA: 0x00004125 File Offset: 0x00002325
		// (set) Token: 0x060000D3 RID: 211 RVA: 0x0000412D File Offset: 0x0000232D
		public double PixelAspectRatio { get; private set; }

		// Token: 0x060000D4 RID: 212 RVA: 0x00004136 File Offset: 0x00002336
		internal static GifLogicalScreenDescriptor ReadLogicalScreenDescriptor(Stream stream)
		{
			GifLogicalScreenDescriptor gifLogicalScreenDescriptor = new GifLogicalScreenDescriptor();
			gifLogicalScreenDescriptor.Read(stream);
			return gifLogicalScreenDescriptor;
		}

		// Token: 0x060000D5 RID: 213 RVA: 0x00004144 File Offset: 0x00002344
		private void Read(Stream stream)
		{
			byte[] array = new byte[7];
			stream.ReadAll(array, 0, array.Length);
			this.Width = (int)BitConverter.ToUInt16(array, 0);
			this.Height = (int)BitConverter.ToUInt16(array, 2);
			byte b = array[4];
			this.HasGlobalColorTable = (b & 128) > 0;
			this.ColorResolution = ((b & 112) >> 4) + 1;
			this.IsGlobalColorTableSorted = (b & 8) > 0;
			this.GlobalColorTableSize = 1 << (int)((b & 7) + 1);
			this.BackgroundColorIndex = (int)array[5];
			this.PixelAspectRatio = ((array[5] == 0) ? 0.0 : ((double)(15 + array[5]) / 64.0));
		}
	}
}

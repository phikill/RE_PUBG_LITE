using System;
using System.IO;

namespace WpfAnimatedGif.Decoding
{
	// Token: 0x02000014 RID: 20
	internal class GifImageDescriptor
	{
		// Token: 0x1700002A RID: 42
		// (get) Token: 0x060000B1 RID: 177 RVA: 0x00003F86 File Offset: 0x00002186
		// (set) Token: 0x060000B2 RID: 178 RVA: 0x00003F8E File Offset: 0x0000218E
		public int Left { get; private set; }

		// Token: 0x1700002B RID: 43
		// (get) Token: 0x060000B3 RID: 179 RVA: 0x00003F97 File Offset: 0x00002197
		// (set) Token: 0x060000B4 RID: 180 RVA: 0x00003F9F File Offset: 0x0000219F
		public int Top { get; private set; }

		// Token: 0x1700002C RID: 44
		// (get) Token: 0x060000B5 RID: 181 RVA: 0x00003FA8 File Offset: 0x000021A8
		// (set) Token: 0x060000B6 RID: 182 RVA: 0x00003FB0 File Offset: 0x000021B0
		public int Width { get; private set; }

		// Token: 0x1700002D RID: 45
		// (get) Token: 0x060000B7 RID: 183 RVA: 0x00003FB9 File Offset: 0x000021B9
		// (set) Token: 0x060000B8 RID: 184 RVA: 0x00003FC1 File Offset: 0x000021C1
		public int Height { get; private set; }

		// Token: 0x1700002E RID: 46
		// (get) Token: 0x060000B9 RID: 185 RVA: 0x00003FCA File Offset: 0x000021CA
		// (set) Token: 0x060000BA RID: 186 RVA: 0x00003FD2 File Offset: 0x000021D2
		public bool HasLocalColorTable { get; private set; }

		// Token: 0x1700002F RID: 47
		// (get) Token: 0x060000BB RID: 187 RVA: 0x00003FDB File Offset: 0x000021DB
		// (set) Token: 0x060000BC RID: 188 RVA: 0x00003FE3 File Offset: 0x000021E3
		public bool Interlace { get; private set; }

		// Token: 0x17000030 RID: 48
		// (get) Token: 0x060000BD RID: 189 RVA: 0x00003FEC File Offset: 0x000021EC
		// (set) Token: 0x060000BE RID: 190 RVA: 0x00003FF4 File Offset: 0x000021F4
		public bool IsLocalColorTableSorted { get; private set; }

		// Token: 0x17000031 RID: 49
		// (get) Token: 0x060000BF RID: 191 RVA: 0x00003FFD File Offset: 0x000021FD
		// (set) Token: 0x060000C0 RID: 192 RVA: 0x00004005 File Offset: 0x00002205
		public int LocalColorTableSize { get; private set; }

		// Token: 0x060000C1 RID: 193 RVA: 0x000036CC File Offset: 0x000018CC
		private GifImageDescriptor()
		{
		}

		// Token: 0x060000C2 RID: 194 RVA: 0x0000400E File Offset: 0x0000220E
		internal static GifImageDescriptor ReadImageDescriptor(Stream stream)
		{
			GifImageDescriptor gifImageDescriptor = new GifImageDescriptor();
			gifImageDescriptor.Read(stream);
			return gifImageDescriptor;
		}

		// Token: 0x060000C3 RID: 195 RVA: 0x0000401C File Offset: 0x0000221C
		private void Read(Stream stream)
		{
			byte[] array = new byte[9];
			stream.ReadAll(array, 0, array.Length);
			this.Left = (int)BitConverter.ToUInt16(array, 0);
			this.Top = (int)BitConverter.ToUInt16(array, 2);
			this.Width = (int)BitConverter.ToUInt16(array, 4);
			this.Height = (int)BitConverter.ToUInt16(array, 6);
			byte b = array[8];
			this.HasLocalColorTable = (b & 128) > 0;
			this.Interlace = (b & 64) > 0;
			this.IsLocalColorTableSorted = (b & 32) > 0;
			this.LocalColorTableSize = 1 << (int)((b & 7) + 1);
		}
	}
}

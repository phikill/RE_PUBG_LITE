using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text;

namespace WpfAnimatedGif.Decoding
{
	// Token: 0x02000016 RID: 22
	internal class GifPlainTextExtension : GifExtension
	{
		// Token: 0x1700003A RID: 58
		// (get) Token: 0x060000D7 RID: 215 RVA: 0x000041EB File Offset: 0x000023EB
		// (set) Token: 0x060000D8 RID: 216 RVA: 0x000041F3 File Offset: 0x000023F3
		public int BlockSize { get; private set; }

		// Token: 0x1700003B RID: 59
		// (get) Token: 0x060000D9 RID: 217 RVA: 0x000041FC File Offset: 0x000023FC
		// (set) Token: 0x060000DA RID: 218 RVA: 0x00004204 File Offset: 0x00002404
		public int Left { get; private set; }

		// Token: 0x1700003C RID: 60
		// (get) Token: 0x060000DB RID: 219 RVA: 0x0000420D File Offset: 0x0000240D
		// (set) Token: 0x060000DC RID: 220 RVA: 0x00004215 File Offset: 0x00002415
		public int Top { get; private set; }

		// Token: 0x1700003D RID: 61
		// (get) Token: 0x060000DD RID: 221 RVA: 0x0000421E File Offset: 0x0000241E
		// (set) Token: 0x060000DE RID: 222 RVA: 0x00004226 File Offset: 0x00002426
		public int Width { get; private set; }

		// Token: 0x1700003E RID: 62
		// (get) Token: 0x060000DF RID: 223 RVA: 0x0000422F File Offset: 0x0000242F
		// (set) Token: 0x060000E0 RID: 224 RVA: 0x00004237 File Offset: 0x00002437
		public int Height { get; private set; }

		// Token: 0x1700003F RID: 63
		// (get) Token: 0x060000E1 RID: 225 RVA: 0x00004240 File Offset: 0x00002440
		// (set) Token: 0x060000E2 RID: 226 RVA: 0x00004248 File Offset: 0x00002448
		public int CellWidth { get; private set; }

		// Token: 0x17000040 RID: 64
		// (get) Token: 0x060000E3 RID: 227 RVA: 0x00004251 File Offset: 0x00002451
		// (set) Token: 0x060000E4 RID: 228 RVA: 0x00004259 File Offset: 0x00002459
		public int CellHeight { get; private set; }

		// Token: 0x17000041 RID: 65
		// (get) Token: 0x060000E5 RID: 229 RVA: 0x00004262 File Offset: 0x00002462
		// (set) Token: 0x060000E6 RID: 230 RVA: 0x0000426A File Offset: 0x0000246A
		public int ForegroundColorIndex { get; private set; }

		// Token: 0x17000042 RID: 66
		// (get) Token: 0x060000E7 RID: 231 RVA: 0x00004273 File Offset: 0x00002473
		// (set) Token: 0x060000E8 RID: 232 RVA: 0x0000427B File Offset: 0x0000247B
		public int BackgroundColorIndex { get; private set; }

		// Token: 0x17000043 RID: 67
		// (get) Token: 0x060000E9 RID: 233 RVA: 0x00004284 File Offset: 0x00002484
		// (set) Token: 0x060000EA RID: 234 RVA: 0x0000428C File Offset: 0x0000248C
		public string Text { get; private set; }

		// Token: 0x17000044 RID: 68
		// (get) Token: 0x060000EB RID: 235 RVA: 0x00004295 File Offset: 0x00002495
		// (set) Token: 0x060000EC RID: 236 RVA: 0x0000429D File Offset: 0x0000249D
		public IList<GifExtension> Extensions { get; private set; }

		// Token: 0x060000ED RID: 237 RVA: 0x00003718 File Offset: 0x00001918
		private GifPlainTextExtension()
		{
		}

		// Token: 0x17000045 RID: 69
		// (get) Token: 0x060000EE RID: 238 RVA: 0x00003B11 File Offset: 0x00001D11
		internal override GifBlockKind Kind
		{
			get
			{
				return GifBlockKind.GraphicRendering;
			}
		}

		// Token: 0x060000EF RID: 239 RVA: 0x000042A6 File Offset: 0x000024A6
		internal static GifPlainTextExtension ReadPlainText(Stream stream, IEnumerable<GifExtension> controlExtensions, bool metadataOnly)
		{
			GifPlainTextExtension gifPlainTextExtension = new GifPlainTextExtension();
			gifPlainTextExtension.Read(stream, controlExtensions, metadataOnly);
			return gifPlainTextExtension;
		}

		// Token: 0x060000F0 RID: 240 RVA: 0x000042B8 File Offset: 0x000024B8
		private void Read(Stream stream, IEnumerable<GifExtension> controlExtensions, bool metadataOnly)
		{
			byte[] array = new byte[13];
			stream.ReadAll(array, 0, array.Length);
			this.BlockSize = (int)array[0];
			if (this.BlockSize != 12)
			{
				throw GifHelpers.InvalidBlockSizeException("Plain Text Extension", 12, this.BlockSize);
			}
			this.Left = (int)BitConverter.ToUInt16(array, 1);
			this.Top = (int)BitConverter.ToUInt16(array, 3);
			this.Width = (int)BitConverter.ToUInt16(array, 5);
			this.Height = (int)BitConverter.ToUInt16(array, 7);
			this.CellWidth = (int)array[9];
			this.CellHeight = (int)array[10];
			this.ForegroundColorIndex = (int)array[11];
			this.BackgroundColorIndex = (int)array[12];
			byte[] array2 = GifHelpers.ReadDataBlocks(stream, metadataOnly);
			this.Text = Encoding.ASCII.GetString(array2);
			this.Extensions = controlExtensions.ToList<GifExtension>().AsReadOnly();
		}

		// Token: 0x0400004B RID: 75
		internal const int ExtensionLabel = 1;
	}
}

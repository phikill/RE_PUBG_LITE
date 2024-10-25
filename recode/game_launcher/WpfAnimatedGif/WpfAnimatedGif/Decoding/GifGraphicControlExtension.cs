using System;
using System.IO;

namespace WpfAnimatedGif.Decoding
{
	// Token: 0x02000010 RID: 16
	internal class GifGraphicControlExtension : GifExtension
	{
		// Token: 0x1700001D RID: 29
		// (get) Token: 0x06000084 RID: 132 RVA: 0x00003B7F File Offset: 0x00001D7F
		// (set) Token: 0x06000085 RID: 133 RVA: 0x00003B87 File Offset: 0x00001D87
		public int BlockSize { get; private set; }

		// Token: 0x1700001E RID: 30
		// (get) Token: 0x06000086 RID: 134 RVA: 0x00003B90 File Offset: 0x00001D90
		// (set) Token: 0x06000087 RID: 135 RVA: 0x00003B98 File Offset: 0x00001D98
		public int DisposalMethod { get; private set; }

		// Token: 0x1700001F RID: 31
		// (get) Token: 0x06000088 RID: 136 RVA: 0x00003BA1 File Offset: 0x00001DA1
		// (set) Token: 0x06000089 RID: 137 RVA: 0x00003BA9 File Offset: 0x00001DA9
		public bool UserInput { get; private set; }

		// Token: 0x17000020 RID: 32
		// (get) Token: 0x0600008A RID: 138 RVA: 0x00003BB2 File Offset: 0x00001DB2
		// (set) Token: 0x0600008B RID: 139 RVA: 0x00003BBA File Offset: 0x00001DBA
		public bool HasTransparency { get; private set; }

		// Token: 0x17000021 RID: 33
		// (get) Token: 0x0600008C RID: 140 RVA: 0x00003BC3 File Offset: 0x00001DC3
		// (set) Token: 0x0600008D RID: 141 RVA: 0x00003BCB File Offset: 0x00001DCB
		public int Delay { get; private set; }

		// Token: 0x17000022 RID: 34
		// (get) Token: 0x0600008E RID: 142 RVA: 0x00003BD4 File Offset: 0x00001DD4
		// (set) Token: 0x0600008F RID: 143 RVA: 0x00003BDC File Offset: 0x00001DDC
		public int TransparencyIndex { get; private set; }

		// Token: 0x06000090 RID: 144 RVA: 0x00003718 File Offset: 0x00001918
		private GifGraphicControlExtension()
		{
		}

		// Token: 0x17000023 RID: 35
		// (get) Token: 0x06000091 RID: 145 RVA: 0x00003BE5 File Offset: 0x00001DE5
		internal override GifBlockKind Kind
		{
			get
			{
				return GifBlockKind.Control;
			}
		}

		// Token: 0x06000092 RID: 146 RVA: 0x00003BE8 File Offset: 0x00001DE8
		internal static GifGraphicControlExtension ReadGraphicsControl(Stream stream)
		{
			GifGraphicControlExtension gifGraphicControlExtension = new GifGraphicControlExtension();
			gifGraphicControlExtension.Read(stream);
			return gifGraphicControlExtension;
		}

		// Token: 0x06000093 RID: 147 RVA: 0x00003BF8 File Offset: 0x00001DF8
		private void Read(Stream stream)
		{
			byte[] array = new byte[6];
			stream.ReadAll(array, 0, array.Length);
			this.BlockSize = (int)array[0];
			if (this.BlockSize != 4)
			{
				throw GifHelpers.InvalidBlockSizeException("Graphic Control Extension", 4, this.BlockSize);
			}
			byte b = array[1];
			this.DisposalMethod = (b & 28) >> 2;
			this.UserInput = (b & 2) > 0;
			this.HasTransparency = (b & 1) > 0;
			this.Delay = (int)(BitConverter.ToUInt16(array, 2) * 10);
			this.TransparencyIndex = (int)array[4];
		}

		// Token: 0x0400002F RID: 47
		internal const int ExtensionLabel = 249;
	}
}

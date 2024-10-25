using System;
using System.IO;

namespace WpfAnimatedGif.Decoding
{
	// Token: 0x02000013 RID: 19
	internal class GifImageData
	{
		// Token: 0x17000028 RID: 40
		// (get) Token: 0x060000AA RID: 170 RVA: 0x00003F39 File Offset: 0x00002139
		// (set) Token: 0x060000AB RID: 171 RVA: 0x00003F41 File Offset: 0x00002141
		public byte LzwMinimumCodeSize { get; set; }

		// Token: 0x17000029 RID: 41
		// (get) Token: 0x060000AC RID: 172 RVA: 0x00003F4A File Offset: 0x0000214A
		// (set) Token: 0x060000AD RID: 173 RVA: 0x00003F52 File Offset: 0x00002152
		public byte[] CompressedData { get; set; }

		// Token: 0x060000AE RID: 174 RVA: 0x000036CC File Offset: 0x000018CC
		private GifImageData()
		{
		}

		// Token: 0x060000AF RID: 175 RVA: 0x00003F5B File Offset: 0x0000215B
		internal static GifImageData ReadImageData(Stream stream, bool metadataOnly)
		{
			GifImageData gifImageData = new GifImageData();
			gifImageData.Read(stream, metadataOnly);
			return gifImageData;
		}

		// Token: 0x060000B0 RID: 176 RVA: 0x00003F6A File Offset: 0x0000216A
		private void Read(Stream stream, bool metadataOnly)
		{
			this.LzwMinimumCodeSize = (byte)stream.ReadByte();
			this.CompressedData = GifHelpers.ReadDataBlocks(stream, metadataOnly);
		}
	}
}

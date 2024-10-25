using System;
using System.IO;
using System.Text;

namespace WpfAnimatedGif.Decoding
{
	// Token: 0x02000007 RID: 7
	internal class GifApplicationExtension : GifExtension
	{
		// Token: 0x17000008 RID: 8
		// (get) Token: 0x0600004A RID: 74 RVA: 0x000036D4 File Offset: 0x000018D4
		// (set) Token: 0x0600004B RID: 75 RVA: 0x000036DC File Offset: 0x000018DC
		public int BlockSize { get; private set; }

		// Token: 0x17000009 RID: 9
		// (get) Token: 0x0600004C RID: 76 RVA: 0x000036E5 File Offset: 0x000018E5
		// (set) Token: 0x0600004D RID: 77 RVA: 0x000036ED File Offset: 0x000018ED
		public string ApplicationIdentifier { get; private set; }

		// Token: 0x1700000A RID: 10
		// (get) Token: 0x0600004E RID: 78 RVA: 0x000036F6 File Offset: 0x000018F6
		// (set) Token: 0x0600004F RID: 79 RVA: 0x000036FE File Offset: 0x000018FE
		public byte[] AuthenticationCode { get; private set; }

		// Token: 0x1700000B RID: 11
		// (get) Token: 0x06000050 RID: 80 RVA: 0x00003707 File Offset: 0x00001907
		// (set) Token: 0x06000051 RID: 81 RVA: 0x0000370F File Offset: 0x0000190F
		public byte[] Data { get; private set; }

		// Token: 0x06000052 RID: 82 RVA: 0x00003718 File Offset: 0x00001918
		private GifApplicationExtension()
		{
		}

		// Token: 0x1700000C RID: 12
		// (get) Token: 0x06000053 RID: 83 RVA: 0x00003720 File Offset: 0x00001920
		internal override GifBlockKind Kind
		{
			get
			{
				return GifBlockKind.SpecialPurpose;
			}
		}

		// Token: 0x06000054 RID: 84 RVA: 0x00003723 File Offset: 0x00001923
		internal static GifApplicationExtension ReadApplication(Stream stream)
		{
			GifApplicationExtension gifApplicationExtension = new GifApplicationExtension();
			gifApplicationExtension.Read(stream);
			return gifApplicationExtension;
		}

		// Token: 0x06000055 RID: 85 RVA: 0x00003734 File Offset: 0x00001934
		private void Read(Stream stream)
		{
			byte[] array = new byte[12];
			stream.ReadAll(array, 0, array.Length);
			this.BlockSize = (int)array[0];
			if (this.BlockSize != 11)
			{
				throw GifHelpers.InvalidBlockSizeException("Application Extension", 11, this.BlockSize);
			}
			this.ApplicationIdentifier = Encoding.ASCII.GetString(array, 1, 8);
			byte[] array2 = new byte[3];
			Array.Copy(array, 9, array2, 0, 3);
			this.AuthenticationCode = array2;
			this.Data = GifHelpers.ReadDataBlocks(stream, false);
		}

		// Token: 0x04000015 RID: 21
		internal const int ExtensionLabel = 255;
	}
}

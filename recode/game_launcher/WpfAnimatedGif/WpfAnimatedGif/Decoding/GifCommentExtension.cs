using System;
using System.IO;
using System.Text;

namespace WpfAnimatedGif.Decoding
{
	// Token: 0x0200000B RID: 11
	internal class GifCommentExtension : GifExtension
	{
		// Token: 0x17000011 RID: 17
		// (get) Token: 0x0600005E RID: 94 RVA: 0x0000385D File Offset: 0x00001A5D
		// (set) Token: 0x0600005F RID: 95 RVA: 0x00003865 File Offset: 0x00001A65
		public string Text { get; private set; }

		// Token: 0x06000060 RID: 96 RVA: 0x00003718 File Offset: 0x00001918
		private GifCommentExtension()
		{
		}

		// Token: 0x17000012 RID: 18
		// (get) Token: 0x06000061 RID: 97 RVA: 0x00003720 File Offset: 0x00001920
		internal override GifBlockKind Kind
		{
			get
			{
				return GifBlockKind.SpecialPurpose;
			}
		}

		// Token: 0x06000062 RID: 98 RVA: 0x0000386E File Offset: 0x00001A6E
		internal static GifCommentExtension ReadComment(Stream stream)
		{
			GifCommentExtension gifCommentExtension = new GifCommentExtension();
			gifCommentExtension.Read(stream);
			return gifCommentExtension;
		}

		// Token: 0x06000063 RID: 99 RVA: 0x0000387C File Offset: 0x00001A7C
		private void Read(Stream stream)
		{
			byte[] array = GifHelpers.ReadDataBlocks(stream, false);
			if (array != null)
			{
				this.Text = Encoding.ASCII.GetString(array);
			}
		}

		// Token: 0x04000022 RID: 34
		internal const int ExtensionLabel = 254;
	}
}

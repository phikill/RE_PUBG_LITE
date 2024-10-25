using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;

namespace WpfAnimatedGif.Decoding
{
	// Token: 0x0200000F RID: 15
	internal class GifFrame : GifBlock
	{
		// Token: 0x17000018 RID: 24
		// (get) Token: 0x06000078 RID: 120 RVA: 0x00003ACD File Offset: 0x00001CCD
		// (set) Token: 0x06000079 RID: 121 RVA: 0x00003AD5 File Offset: 0x00001CD5
		public GifImageDescriptor Descriptor { get; private set; }

		// Token: 0x17000019 RID: 25
		// (get) Token: 0x0600007A RID: 122 RVA: 0x00003ADE File Offset: 0x00001CDE
		// (set) Token: 0x0600007B RID: 123 RVA: 0x00003AE6 File Offset: 0x00001CE6
		public GifColor[] LocalColorTable { get; private set; }

		// Token: 0x1700001A RID: 26
		// (get) Token: 0x0600007C RID: 124 RVA: 0x00003AEF File Offset: 0x00001CEF
		// (set) Token: 0x0600007D RID: 125 RVA: 0x00003AF7 File Offset: 0x00001CF7
		public IList<GifExtension> Extensions { get; private set; }

		// Token: 0x1700001B RID: 27
		// (get) Token: 0x0600007E RID: 126 RVA: 0x00003B00 File Offset: 0x00001D00
		// (set) Token: 0x0600007F RID: 127 RVA: 0x00003B08 File Offset: 0x00001D08
		public GifImageData ImageData { get; private set; }

		// Token: 0x06000080 RID: 128 RVA: 0x00003936 File Offset: 0x00001B36
		private GifFrame()
		{
		}

		// Token: 0x1700001C RID: 28
		// (get) Token: 0x06000081 RID: 129 RVA: 0x00003B11 File Offset: 0x00001D11
		internal override GifBlockKind Kind
		{
			get
			{
				return GifBlockKind.GraphicRendering;
			}
		}

		// Token: 0x06000082 RID: 130 RVA: 0x00003B14 File Offset: 0x00001D14
		internal static GifFrame ReadFrame(Stream stream, IEnumerable<GifExtension> controlExtensions, bool metadataOnly)
		{
			GifFrame gifFrame = new GifFrame();
			gifFrame.Read(stream, controlExtensions, metadataOnly);
			return gifFrame;
		}

		// Token: 0x06000083 RID: 131 RVA: 0x00003B24 File Offset: 0x00001D24
		private void Read(Stream stream, IEnumerable<GifExtension> controlExtensions, bool metadataOnly)
		{
			this.Descriptor = GifImageDescriptor.ReadImageDescriptor(stream);
			if (this.Descriptor.HasLocalColorTable)
			{
				this.LocalColorTable = GifHelpers.ReadColorTable(stream, this.Descriptor.LocalColorTableSize);
			}
			this.ImageData = GifImageData.ReadImageData(stream, metadataOnly);
			this.Extensions = controlExtensions.ToList<GifExtension>().AsReadOnly();
		}

		// Token: 0x0400002A RID: 42
		internal const int ImageSeparator = 44;
	}
}

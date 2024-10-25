using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;

namespace WpfAnimatedGif.Decoding
{
	// Token: 0x0200000E RID: 14
	internal class GifFile
	{
		// Token: 0x17000013 RID: 19
		// (get) Token: 0x0600006A RID: 106 RVA: 0x0000393E File Offset: 0x00001B3E
		// (set) Token: 0x0600006B RID: 107 RVA: 0x00003946 File Offset: 0x00001B46
		public GifHeader Header { get; private set; }

		// Token: 0x17000014 RID: 20
		// (get) Token: 0x0600006C RID: 108 RVA: 0x0000394F File Offset: 0x00001B4F
		// (set) Token: 0x0600006D RID: 109 RVA: 0x00003957 File Offset: 0x00001B57
		public GifColor[] GlobalColorTable { get; set; }

		// Token: 0x17000015 RID: 21
		// (get) Token: 0x0600006E RID: 110 RVA: 0x00003960 File Offset: 0x00001B60
		// (set) Token: 0x0600006F RID: 111 RVA: 0x00003968 File Offset: 0x00001B68
		public IList<GifFrame> Frames { get; set; }

		// Token: 0x17000016 RID: 22
		// (get) Token: 0x06000070 RID: 112 RVA: 0x00003971 File Offset: 0x00001B71
		// (set) Token: 0x06000071 RID: 113 RVA: 0x00003979 File Offset: 0x00001B79
		public IList<GifExtension> Extensions { get; set; }

		// Token: 0x17000017 RID: 23
		// (get) Token: 0x06000072 RID: 114 RVA: 0x00003982 File Offset: 0x00001B82
		// (set) Token: 0x06000073 RID: 115 RVA: 0x0000398A File Offset: 0x00001B8A
		public ushort RepeatCount { get; set; }

		// Token: 0x06000074 RID: 116 RVA: 0x000036CC File Offset: 0x000018CC
		private GifFile()
		{
		}

		// Token: 0x06000075 RID: 117 RVA: 0x00003993 File Offset: 0x00001B93
		internal static GifFile ReadGifFile(Stream stream, bool metadataOnly)
		{
			GifFile gifFile = new GifFile();
			gifFile.Read(stream, metadataOnly);
			return gifFile;
		}

		// Token: 0x06000076 RID: 118 RVA: 0x000039A4 File Offset: 0x00001BA4
		private void Read(Stream stream, bool metadataOnly)
		{
			this.Header = GifHeader.ReadHeader(stream);
			if (this.Header.LogicalScreenDescriptor.HasGlobalColorTable)
			{
				this.GlobalColorTable = GifHelpers.ReadColorTable(stream, this.Header.LogicalScreenDescriptor.GlobalColorTableSize);
			}
			this.ReadFrames(stream, metadataOnly);
			GifApplicationExtension gifApplicationExtension = this.Extensions.OfType<GifApplicationExtension>().FirstOrDefault(new Func<GifApplicationExtension, bool>(GifHelpers.IsNetscapeExtension));
			if (gifApplicationExtension != null)
			{
				this.RepeatCount = GifHelpers.GetRepeatCount(gifApplicationExtension);
				return;
			}
			this.RepeatCount = 1;
		}

		// Token: 0x06000077 RID: 119 RVA: 0x00003A28 File Offset: 0x00001C28
		private void ReadFrames(Stream stream, bool metadataOnly)
		{
			List<GifFrame> list = new List<GifFrame>();
			List<GifExtension> list2 = new List<GifExtension>();
			List<GifExtension> list3 = new List<GifExtension>();
			for (;;)
			{
				GifBlock gifBlock = GifBlock.ReadBlock(stream, list2, metadataOnly);
				if (gifBlock.Kind == GifBlockKind.GraphicRendering)
				{
					list2 = new List<GifExtension>();
				}
				if (gifBlock is GifFrame)
				{
					list.Add((GifFrame)gifBlock);
				}
				else if (gifBlock is GifExtension)
				{
					GifExtension gifExtension = (GifExtension)gifBlock;
					GifBlockKind kind = gifExtension.Kind;
					if (kind != GifBlockKind.Control)
					{
						if (kind == GifBlockKind.SpecialPurpose)
						{
							list3.Add(gifExtension);
						}
					}
					else
					{
						list2.Add(gifExtension);
					}
				}
				else if (gifBlock is GifTrailer)
				{
					break;
				}
			}
			this.Frames = list.AsReadOnly();
			this.Extensions = list3.AsReadOnly();
		}
	}
}

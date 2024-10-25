using System;
using System.IO;

namespace WpfAnimatedGif.Decoding
{
	// Token: 0x02000011 RID: 17
	internal class GifHeader : GifBlock
	{
		// Token: 0x17000024 RID: 36
		// (get) Token: 0x06000094 RID: 148 RVA: 0x00003C7C File Offset: 0x00001E7C
		// (set) Token: 0x06000095 RID: 149 RVA: 0x00003C84 File Offset: 0x00001E84
		public string Signature { get; private set; }

		// Token: 0x17000025 RID: 37
		// (get) Token: 0x06000096 RID: 150 RVA: 0x00003C8D File Offset: 0x00001E8D
		// (set) Token: 0x06000097 RID: 151 RVA: 0x00003C95 File Offset: 0x00001E95
		public string Version { get; private set; }

		// Token: 0x17000026 RID: 38
		// (get) Token: 0x06000098 RID: 152 RVA: 0x00003C9E File Offset: 0x00001E9E
		// (set) Token: 0x06000099 RID: 153 RVA: 0x00003CA6 File Offset: 0x00001EA6
		public GifLogicalScreenDescriptor LogicalScreenDescriptor { get; private set; }

		// Token: 0x0600009A RID: 154 RVA: 0x00003936 File Offset: 0x00001B36
		private GifHeader()
		{
		}

		// Token: 0x17000027 RID: 39
		// (get) Token: 0x0600009B RID: 155 RVA: 0x00003CAF File Offset: 0x00001EAF
		internal override GifBlockKind Kind
		{
			get
			{
				return GifBlockKind.Other;
			}
		}

		// Token: 0x0600009C RID: 156 RVA: 0x00003CB2 File Offset: 0x00001EB2
		internal static GifHeader ReadHeader(Stream stream)
		{
			GifHeader gifHeader = new GifHeader();
			gifHeader.Read(stream);
			return gifHeader;
		}

		// Token: 0x0600009D RID: 157 RVA: 0x00003CC0 File Offset: 0x00001EC0
		private void Read(Stream stream)
		{
			this.Signature = GifHelpers.ReadString(stream, 3);
			if (this.Signature != "GIF")
			{
				throw GifHelpers.InvalidSignatureException(this.Signature);
			}
			this.Version = GifHelpers.ReadString(stream, 3);
			if (this.Version != "87a" && this.Version != "89a")
			{
				throw GifHelpers.UnsupportedVersionException(this.Version);
			}
			this.LogicalScreenDescriptor = GifLogicalScreenDescriptor.ReadLogicalScreenDescriptor(stream);
		}
	}
}

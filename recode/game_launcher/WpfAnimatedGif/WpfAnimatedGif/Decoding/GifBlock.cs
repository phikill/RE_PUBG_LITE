using System;
using System.Collections.Generic;
using System.IO;

namespace WpfAnimatedGif.Decoding
{
	// Token: 0x02000008 RID: 8
	internal abstract class GifBlock
	{
		// Token: 0x06000056 RID: 86 RVA: 0x000037B4 File Offset: 0x000019B4
		internal static GifBlock ReadBlock(Stream stream, IEnumerable<GifExtension> controlExtensions, bool metadataOnly)
		{
			int num = stream.ReadByte();
			if (num < 0)
			{
				throw GifHelpers.UnexpectedEndOfStreamException();
			}
			if (num == 33)
			{
				return GifExtension.ReadExtension(stream, controlExtensions, metadataOnly);
			}
			if (num == 44)
			{
				return GifFrame.ReadFrame(stream, controlExtensions, metadataOnly);
			}
			if (num != 59)
			{
				throw GifHelpers.UnknownBlockTypeException(num);
			}
			return GifTrailer.ReadTrailer();
		}

		// Token: 0x1700000D RID: 13
		// (get) Token: 0x06000057 RID: 87
		internal abstract GifBlockKind Kind { get; }
	}
}

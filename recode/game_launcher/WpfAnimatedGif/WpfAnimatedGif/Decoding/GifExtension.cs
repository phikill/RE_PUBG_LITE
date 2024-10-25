using System;
using System.Collections.Generic;
using System.IO;

namespace WpfAnimatedGif.Decoding
{
	// Token: 0x0200000D RID: 13
	internal abstract class GifExtension : GifBlock
	{
		// Token: 0x06000068 RID: 104 RVA: 0x000038CC File Offset: 0x00001ACC
		internal static GifExtension ReadExtension(Stream stream, IEnumerable<GifExtension> controlExtensions, bool metadataOnly)
		{
			int num = stream.ReadByte();
			if (num < 0)
			{
				throw GifHelpers.UnexpectedEndOfStreamException();
			}
			if (num <= 249)
			{
				if (num == 1)
				{
					return GifPlainTextExtension.ReadPlainText(stream, controlExtensions, metadataOnly);
				}
				if (num == 249)
				{
					return GifGraphicControlExtension.ReadGraphicsControl(stream);
				}
			}
			else
			{
				if (num == 254)
				{
					return GifCommentExtension.ReadComment(stream);
				}
				if (num == 255)
				{
					return GifApplicationExtension.ReadApplication(stream);
				}
			}
			throw GifHelpers.UnknownExtensionTypeException(num);
		}

		// Token: 0x04000024 RID: 36
		internal const int ExtensionIntroducer = 33;
	}
}

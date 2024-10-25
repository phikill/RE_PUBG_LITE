using System;
using System.Runtime.Serialization;

namespace WpfAnimatedGif.Decoding
{
	// Token: 0x0200000C RID: 12
	[Serializable]
	internal class GifDecoderException : Exception
	{
		// Token: 0x06000064 RID: 100 RVA: 0x000038A5 File Offset: 0x00001AA5
		internal GifDecoderException()
		{
		}

		// Token: 0x06000065 RID: 101 RVA: 0x000038AD File Offset: 0x00001AAD
		internal GifDecoderException(string message)
			: base(message)
		{
		}

		// Token: 0x06000066 RID: 102 RVA: 0x000038B6 File Offset: 0x00001AB6
		internal GifDecoderException(string message, Exception inner)
			: base(message, inner)
		{
		}

		// Token: 0x06000067 RID: 103 RVA: 0x000038C0 File Offset: 0x00001AC0
		protected GifDecoderException(SerializationInfo info, StreamingContext context)
			: base(info, context)
		{
		}
	}
}

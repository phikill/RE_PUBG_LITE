using System;
using System.IO;
using System.Text;

namespace WpfAnimatedGif.Decoding
{
	// Token: 0x02000012 RID: 18
	internal static class GifHelpers
	{
		// Token: 0x0600009E RID: 158 RVA: 0x00003D44 File Offset: 0x00001F44
		public static string ReadString(Stream stream, int length)
		{
			byte[] array = new byte[length];
			stream.ReadAll(array, 0, length);
			return Encoding.ASCII.GetString(array);
		}

		// Token: 0x0600009F RID: 159 RVA: 0x00003D6C File Offset: 0x00001F6C
		public static byte[] ReadDataBlocks(Stream stream, bool discard)
		{
			MemoryStream memoryStream = (discard ? null : new MemoryStream());
			byte[] array2;
			using (memoryStream)
			{
				int num;
				while ((num = stream.ReadByte()) > 0)
				{
					byte[] array = new byte[num];
					stream.ReadAll(array, 0, num);
					if (memoryStream != null)
					{
						memoryStream.Write(array, 0, num);
					}
				}
				if (memoryStream != null)
				{
					array2 = memoryStream.ToArray();
				}
				else
				{
					array2 = null;
				}
			}
			return array2;
		}

		// Token: 0x060000A0 RID: 160 RVA: 0x00003DE0 File Offset: 0x00001FE0
		public static GifColor[] ReadColorTable(Stream stream, int size)
		{
			int num = 3 * size;
			byte[] array = new byte[num];
			stream.ReadAll(array, 0, num);
			GifColor[] array2 = new GifColor[size];
			for (int i = 0; i < size; i++)
			{
				byte b = array[3 * i];
				byte b2 = array[3 * i + 1];
				byte b3 = array[3 * i + 2];
				array2[i] = new GifColor(b, b2, b3);
			}
			return array2;
		}

		// Token: 0x060000A1 RID: 161 RVA: 0x00003E40 File Offset: 0x00002040
		public static bool IsNetscapeExtension(GifApplicationExtension ext)
		{
			return ext.ApplicationIdentifier == "NETSCAPE" && Encoding.ASCII.GetString(ext.AuthenticationCode) == "2.0";
		}

		// Token: 0x060000A2 RID: 162 RVA: 0x00003E70 File Offset: 0x00002070
		public static ushort GetRepeatCount(GifApplicationExtension ext)
		{
			if (ext.Data.Length >= 3)
			{
				return BitConverter.ToUInt16(ext.Data, 1);
			}
			return 1;
		}

		// Token: 0x060000A3 RID: 163 RVA: 0x00003E8B File Offset: 0x0000208B
		public static Exception UnexpectedEndOfStreamException()
		{
			return new GifDecoderException("Unexpected end of stream before trailer was encountered");
		}

		// Token: 0x060000A4 RID: 164 RVA: 0x00003E97 File Offset: 0x00002097
		public static Exception UnknownBlockTypeException(int blockId)
		{
			return new GifDecoderException("Unknown block type: 0x" + blockId.ToString("x2"));
		}

		// Token: 0x060000A5 RID: 165 RVA: 0x00003EB4 File Offset: 0x000020B4
		public static Exception UnknownExtensionTypeException(int extensionLabel)
		{
			return new GifDecoderException("Unknown extension type: 0x" + extensionLabel.ToString("x2"));
		}

		// Token: 0x060000A6 RID: 166 RVA: 0x00003ED1 File Offset: 0x000020D1
		public static Exception InvalidBlockSizeException(string blockName, int expectedBlockSize, int actualBlockSize)
		{
			return new GifDecoderException(string.Format("Invalid block size for {0}. Expected {1}, but was {2}", blockName, expectedBlockSize, actualBlockSize));
		}

		// Token: 0x060000A7 RID: 167 RVA: 0x00003EEF File Offset: 0x000020EF
		public static Exception InvalidSignatureException(string signature)
		{
			return new GifDecoderException("Invalid file signature: " + signature);
		}

		// Token: 0x060000A8 RID: 168 RVA: 0x00003F01 File Offset: 0x00002101
		public static Exception UnsupportedVersionException(string version)
		{
			return new GifDecoderException("Unsupported version: " + version);
		}

		// Token: 0x060000A9 RID: 169 RVA: 0x00003F14 File Offset: 0x00002114
		public static void ReadAll(this Stream stream, byte[] buffer, int offset, int count)
		{
			for (int i = 0; i < count; i += stream.Read(buffer, offset + i, count - i))
			{
			}
		}
	}
}

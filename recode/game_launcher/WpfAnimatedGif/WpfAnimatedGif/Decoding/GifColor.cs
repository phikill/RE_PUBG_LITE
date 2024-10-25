using System;

namespace WpfAnimatedGif.Decoding
{
	// Token: 0x0200000A RID: 10
	internal struct GifColor
	{
		// Token: 0x06000059 RID: 89 RVA: 0x00003801 File Offset: 0x00001A01
		internal GifColor(byte r, byte g, byte b)
		{
			this._r = r;
			this._g = g;
			this._b = b;
		}

		// Token: 0x1700000E RID: 14
		// (get) Token: 0x0600005A RID: 90 RVA: 0x00003818 File Offset: 0x00001A18
		public byte R
		{
			get
			{
				return this._r;
			}
		}

		// Token: 0x1700000F RID: 15
		// (get) Token: 0x0600005B RID: 91 RVA: 0x00003820 File Offset: 0x00001A20
		public byte G
		{
			get
			{
				return this._g;
			}
		}

		// Token: 0x17000010 RID: 16
		// (get) Token: 0x0600005C RID: 92 RVA: 0x00003828 File Offset: 0x00001A28
		public byte B
		{
			get
			{
				return this._b;
			}
		}

		// Token: 0x0600005D RID: 93 RVA: 0x00003830 File Offset: 0x00001A30
		public override string ToString()
		{
			return string.Format("#{0:x2}{1:x2}{2:x2}", this._r, this._g, this._b);
		}

		// Token: 0x0400001F RID: 31
		private readonly byte _r;

		// Token: 0x04000020 RID: 32
		private readonly byte _g;

		// Token: 0x04000021 RID: 33
		private readonly byte _b;
	}
}

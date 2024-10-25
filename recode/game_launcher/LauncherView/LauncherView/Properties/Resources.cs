using System;
using System.CodeDom.Compiler;
using System.ComponentModel;
using System.Diagnostics;
using System.Globalization;
using System.Resources;
using System.Runtime.CompilerServices;

namespace LauncherView.Properties
{
	// Token: 0x02000016 RID: 22
	[GeneratedCode("System.Resources.Tools.StronglyTypedResourceBuilder", "15.0.0.0")]
	[DebuggerNonUserCode]
	[CompilerGenerated]
	public class Resources
	{
		// Token: 0x06000092 RID: 146 RVA: 0x0000221F File Offset: 0x0000041F
		internal Resources()
		{
		}

		// Token: 0x17000011 RID: 17
		// (get) Token: 0x06000093 RID: 147 RVA: 0x00003F84 File Offset: 0x00002184
		[EditorBrowsable(EditorBrowsableState.Advanced)]
		public static ResourceManager ResourceManager
		{
			get
			{
				if (Resources.resourceMan == null)
				{
					Resources.resourceMan = new ResourceManager("LauncherView.Properties.Resources", typeof(Resources).Assembly);
				}
				return Resources.resourceMan;
			}
		}

		// Token: 0x17000012 RID: 18
		// (get) Token: 0x06000094 RID: 148 RVA: 0x00003FB0 File Offset: 0x000021B0
		// (set) Token: 0x06000095 RID: 149 RVA: 0x00003FB7 File Offset: 0x000021B7
		[EditorBrowsable(EditorBrowsableState.Advanced)]
		public static CultureInfo Culture
		{
			get
			{
				return Resources.resourceCulture;
			}
			set
			{
				Resources.resourceCulture = value;
			}
		}

		// Token: 0x17000013 RID: 19
		// (get) Token: 0x06000096 RID: 150 RVA: 0x00003FBF File Offset: 0x000021BF
		public static string launcher_error
		{
			get
			{
				return Resources.ResourceManager.GetString("launcher_error", Resources.resourceCulture);
			}
		}

		// Token: 0x17000014 RID: 20
		// (get) Token: 0x06000097 RID: 151 RVA: 0x00003FD5 File Offset: 0x000021D5
		public static string MessageText
		{
			get
			{
				return Resources.ResourceManager.GetString("MessageText", Resources.resourceCulture);
			}
		}

		// Token: 0x04000034 RID: 52
		private static ResourceManager resourceMan;

		// Token: 0x04000035 RID: 53
		private static CultureInfo resourceCulture;
	}
}

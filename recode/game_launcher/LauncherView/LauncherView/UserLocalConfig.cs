using System;
using System.Linq;
using System.Reflection;

namespace LauncherView
{
	// Token: 0x02000005 RID: 5
	[Serializable]
	public class UserLocalConfig
	{
		// Token: 0x17000001 RID: 1
		internal object this[string name]
		{
			get
			{
				PropertyInfo propertyInfo = typeof(UserLocalConfig).GetProperties().FirstOrDefault((PropertyInfo e) => e.Name == name);
				if (propertyInfo != null)
				{
					return propertyInfo.GetValue(this, null);
				}
				return null;
			}
			set
			{
				PropertyInfo propertyInfo = typeof(UserLocalConfig).GetProperties().FirstOrDefault((PropertyInfo e) => e.Name == name);
				if (propertyInfo != null)
				{
					propertyInfo.SetValue(this, value);
				}
			}
		}

		// Token: 0x17000002 RID: 2
		// (get) Token: 0x06000007 RID: 7 RVA: 0x000021D0 File Offset: 0x000003D0
		// (set) Token: 0x06000008 RID: 8 RVA: 0x000021D8 File Offset: 0x000003D8
		public string Email { get; set; } = "";

		// Token: 0x17000003 RID: 3
		// (get) Token: 0x06000009 RID: 9 RVA: 0x000021E1 File Offset: 0x000003E1
		// (set) Token: 0x0600000A RID: 10 RVA: 0x000021E9 File Offset: 0x000003E9
		public string DefaultLanguage { get; set; } = "";
	}
}

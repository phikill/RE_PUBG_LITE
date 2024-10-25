using System;
using System.Collections.Generic;
using System.Globalization;
using System.Linq;
using System.Xml;
using System.Xml.Linq;
using LauncherView.Properties;

namespace LauncherView
{
	// Token: 0x02000009 RID: 9
	public static class MessageTextHelper
	{
		// Token: 0x0600000F RID: 15 RVA: 0x00002228 File Offset: 0x00000428
		private static string GetStringValue(string attrName, string langCode)
		{
			string text = (from nodes in MessageTextHelper.mDoc.Root.Descendants("Text")
				where nodes.Attribute("name").Value == attrName && nodes.Attributes(langCode).FirstOrDefault<XAttribute>() != null
				select nodes.Attribute(langCode).Value).FirstOrDefault<string>();
			if (text == null)
			{
				return MessageTextHelper.GetStringValue(attrName, MessageTextHelper._defaultLangCode);
			}
			return text;
		}

		// Token: 0x06000010 RID: 16 RVA: 0x000022A0 File Offset: 0x000004A0
		public static void Load()
		{
			try
			{
				MessageTextHelper.mDoc = XDocument.Parse(Resources.MessageText);
				foreach (XElement xelement in MessageTextHelper.mDoc.Root.Descendants("Text"))
				{
					if (xelement.Attributes().FirstOrDefault((XAttribute e) => e.Name == MessageTextHelper._defaultLangCode) == null)
					{
						throw new ApplicationException(string.Format("message text node has no default(enu) attr. node name : {0}", xelement.Name));
					}
				}
			}
			catch
			{
				throw new XmlException("cannot load xml file : " + Resources.MessageText.ToString());
			}
		}

		// Token: 0x06000011 RID: 17 RVA: 0x00002374 File Offset: 0x00000574
		public static string GetStringValue(string attrName)
		{
			return MessageTextHelper.GetStringValue(attrName, CultureInfo.CurrentCulture.ThreeLetterWindowsLanguageName);
		}

		// Token: 0x17000004 RID: 4
		// (get) Token: 0x06000012 RID: 18 RVA: 0x00002386 File Offset: 0x00000586
		public static int AlignOption
		{
			get
			{
				if (MessageTextHelper.RightToLeftReadingLanguage())
				{
					return 1572864;
				}
				return 0;
			}
		}

		// Token: 0x06000013 RID: 19 RVA: 0x00002396 File Offset: 0x00000596
		private static bool RightToLeftReadingLanguage()
		{
			return MessageTextHelper._isArabic.Contains(CultureInfo.CurrentCulture.ThreeLetterWindowsLanguageName);
		}

		// Token: 0x0400000A RID: 10
		private static XDocument mDoc;

		// Token: 0x0400000B RID: 11
		private static string _defaultLangCode = "ENU";

		// Token: 0x0400000C RID: 12
		private static readonly HashSet<string> _isArabic = new HashSet<string>
		{
			"ARG", "AZE", "ARH", "ARE", "ARI", "ARJ", "ARK", "ARB", "ARL", "ARM",
			"ARO", "ARQ", "ARA", "ARS", "ART", "ARU", "ARY"
		};
	}
}

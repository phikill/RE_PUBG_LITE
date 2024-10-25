using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Text;
using System.Text.RegularExpressions;

namespace LauncherModel
{
	// Token: 0x02000004 RID: 4
	public class JsExpressionBuilder
	{
		// Token: 0x0600000A RID: 10 RVA: 0x000022DE File Offset: 0x000004DE
		[Conditional("RELEASE")]
		public void RemoveWhitespacesOnRelease(ref string expression)
		{
			expression = JsExpressionBuilder.Whitespaces.Replace(expression, string.Empty);
		}

		// Token: 0x17000003 RID: 3
		// (get) Token: 0x0600000B RID: 11 RVA: 0x000022F3 File Offset: 0x000004F3
		// (set) Token: 0x0600000C RID: 12 RVA: 0x000022FB File Offset: 0x000004FB
		public bool EnforceNullCheck { get; set; }

		// Token: 0x17000004 RID: 4
		// (get) Token: 0x0600000D RID: 13 RVA: 0x00002304 File Offset: 0x00000504
		// (set) Token: 0x0600000E RID: 14 RVA: 0x0000230C File Offset: 0x0000050C
		public bool ShouldAwait { get; set; }

		// Token: 0x17000005 RID: 5
		// (get) Token: 0x0600000F RID: 15 RVA: 0x00002315 File Offset: 0x00000515
		// (set) Token: 0x06000010 RID: 16 RVA: 0x0000231D File Offset: 0x0000051D
		public string ReturnValueName { get; set; }

		// Token: 0x06000011 RID: 17 RVA: 0x00002326 File Offset: 0x00000526
		public JsExpressionBuilder(string objectName, string functionOrMethodName, params string[] arguments)
		{
			this.Init(objectName, functionOrMethodName, arguments);
		}

		// Token: 0x06000012 RID: 18 RVA: 0x00002326 File Offset: 0x00000526
		public JsExpressionBuilder(string objectName, string functionOrMethodName, IEnumerable<string> arguments)
		{
			this.Init(objectName, functionOrMethodName, arguments);
		}

		// Token: 0x06000013 RID: 19 RVA: 0x00002342 File Offset: 0x00000542
		public void Init(string objectName, string functionOrMethodName, IEnumerable<string> arguments)
		{
			this._objectName = objectName;
			this._functionOrMethodName = functionOrMethodName;
			this._arguments = arguments;
		}

		// Token: 0x06000014 RID: 20 RVA: 0x0000235C File Offset: 0x0000055C
		public string Build()
		{
			this._sb.Clear();
			int i = 0;
			if (this._objectName != null && this.EnforceNullCheck)
			{
				string text = string.Concat(new string[]
				{
					"if (window.",
					this._objectName,
					" !== undefined && window.",
					this._objectName,
					" !== null) {",
					Environment.NewLine
				});
				this._sb.Append(text);
				i++;
			}
			if (this._functionOrMethodName != null)
			{
				string text2 = ((this._objectName == null) ? (this._functionOrMethodName ?? "") : (this._objectName + "." + this._functionOrMethodName));
				if (this.EnforceNullCheck)
				{
					string text3 = string.Concat(new string[]
					{
						"if (window.",
						text2,
						" !== undefined && window.",
						text2,
						" !== null) {",
						Environment.NewLine,
						"\t"
					});
					this._sb.Append(text3);
					i++;
				}
				this._sb.Append(text2 + "(");
				if (this._arguments != null)
				{
					StringBuilder stringBuilder = new StringBuilder();
					foreach (string text4 in this._arguments)
					{
						stringBuilder.Append(text4);
						stringBuilder.Append(",");
					}
					this._sb.Append(stringBuilder.ToString().TrimEnd(new char[] { ',', ' ' }));
				}
				string text5 = ");";
				this._sb.Append(text5);
				while (i > 0)
				{
					string text6 = "";
					for (int j = 0; j < i - 1; j++)
					{
						text6 += "\t";
					}
					text6 = text6 + "}" + Environment.NewLine;
					this._sb.Append(text6);
					i--;
				}
			}
			string text7 = this._sb.ToString();
			if (this.ShouldAwait)
			{
				text7 = "await " + text7;
			}
			if (!string.IsNullOrWhiteSpace(this.ReturnValueName))
			{
				text7 = this.ReturnValueName + "=" + text7;
			}
			return text7;
		}

		// Token: 0x04000018 RID: 24
		public static readonly Regex Whitespaces = new Regex("\\s+", RegexOptions.Compiled);

		// Token: 0x04000019 RID: 25
		private string _objectName;

		// Token: 0x0400001A RID: 26
		private string _functionOrMethodName;

		// Token: 0x0400001B RID: 27
		private IEnumerable<string> _arguments;

		// Token: 0x0400001C RID: 28
		private readonly StringBuilder _sb = new StringBuilder();
	}
}

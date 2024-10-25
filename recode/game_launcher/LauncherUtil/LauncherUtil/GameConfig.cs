using System;
using System.IO;
using System.Runtime.Serialization;
using System.Runtime.Serialization.Json;

namespace LauncherUtil
{
	// Token: 0x02000003 RID: 3
	[DataContract]
	internal class GameConfig
	{
		// Token: 0x17000002 RID: 2
		// (get) Token: 0x06000003 RID: 3 RVA: 0x00002093 File Offset: 0x00000293
		public static string PathInProgramData
		{
			get
			{
				return Path.Combine(ProgramData.PathForProduct, "GameConfig.json");
			}
		}

		// Token: 0x06000004 RID: 4 RVA: 0x000020A4 File Offset: 0x000002A4
		public static GameConfig Read()
		{
			return GameConfig.Read(GameConfig.PathInProgramData);
		}

		// Token: 0x06000005 RID: 5 RVA: 0x000020B0 File Offset: 0x000002B0
		public static GameConfig Read(string path)
		{
			if (!File.Exists(path))
			{
				return null;
			}
			GameConfig gameConfig;
			using (StreamReader streamReader = new StreamReader(path))
			{
				gameConfig = new DataContractJsonSerializer(typeof(GameConfig)).ReadObject(streamReader.BaseStream) as GameConfig;
			}
			return gameConfig;
		}

		// Token: 0x06000006 RID: 6 RVA: 0x0000210C File Offset: 0x0000030C
		public static void Write(GameConfig config)
		{
			GameConfig.Write(config, GameConfig.PathInProgramData);
		}

		// Token: 0x06000007 RID: 7 RVA: 0x0000211C File Offset: 0x0000031C
		public static void Write(GameConfig config, string path)
		{
			if (config == null)
			{
				return;
			}
			string directoryName = Path.GetDirectoryName(path);
			if (directoryName == null)
			{
				throw new InvalidOperationException("Failed getting directory for " + path);
			}
			Directory.CreateDirectory(directoryName);
			using (StreamWriter streamWriter = new StreamWriter(path))
			{
				new DataContractJsonSerializer(typeof(GameConfig)).WriteObject(streamWriter.BaseStream, config);
			}
		}

		// Token: 0x04000001 RID: 1
		[DataMember]
		public string InstallDir;
	}
}

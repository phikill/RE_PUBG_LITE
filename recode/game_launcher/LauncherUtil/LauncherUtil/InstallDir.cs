using System;
using System.Collections;
using System.IO;
using System.Reflection;
using System.Security.AccessControl;
using System.Security.Principal;
using System.Threading;

namespace LauncherUtil
{
	// Token: 0x02000004 RID: 4
	public static class InstallDir
	{
		// Token: 0x17000003 RID: 3
		// (get) Token: 0x06000009 RID: 9 RVA: 0x00002194 File Offset: 0x00000394
		private static string Default
		{
			get
			{
				return Path.Combine(Path.GetDirectoryName(Assembly.GetEntryAssembly().Location), "Client");
			}
		}

		// Token: 0x17000004 RID: 4
		// (get) Token: 0x0600000A RID: 10 RVA: 0x000021AF File Offset: 0x000003AF
		private static string FromProgramData
		{
			get
			{
				GameConfig gameConfig = GameConfig.Read();
				if (gameConfig == null)
				{
					return null;
				}
				return gameConfig.InstallDir;
			}
		}

		// Token: 0x0600000B RID: 11 RVA: 0x000021C1 File Offset: 0x000003C1
		public static string Locate()
		{
			return InstallDir.FromProgramData ?? InstallDir.Default;
		}

		// Token: 0x0600000C RID: 12 RVA: 0x000021D1 File Offset: 0x000003D1
		public static void Set(string installDir)
		{
			if (installDir == null)
			{
				throw new ArgumentNullException("installDir");
			}
			if (string.IsNullOrWhiteSpace(installDir))
			{
				throw new InvalidOperationException("argument InstallDir is empty");
			}
			GameConfig gameConfig = GameConfig.Read() ?? new GameConfig();
			gameConfig.InstallDir = installDir;
			GameConfig.Write(gameConfig);
		}

		// Token: 0x0600000D RID: 13 RVA: 0x0000220E File Offset: 0x0000040E
		public static bool IsAccessAuthorized()
		{
			return InstallDir.IsAccessAuthorized(InstallDir.Locate());
		}

		// Token: 0x0600000E RID: 14 RVA: 0x0000221C File Offset: 0x0000041C
		public static bool IsAccessAuthorized(string path)
	{
		FileSystemSecurity fileSystemSecurity = null;
		if (Directory.Exists(path))
		{
			fileSystemSecurity = new DirectoryInfo(path).GetAccessControl();
		}
		if (fileSystemSecurity == null)
		{
			return false;
		}
		IPrincipal currentPrincipal = Thread.CurrentPrincipal;
		FileSystemRights fileSystemRights = (FileSystemRights)0;
		FileSystemRights fileSystemRights2 = (FileSystemRights)0;
		foreach (object accessRule in fileSystemSecurity.GetAccessRules(includeExplicit: true, includeInherited: true, typeof(NTAccount)))
		{
			if (!(accessRule is FileSystemAccessRule fileSystemAccessRule) || !currentPrincipal.IsInRole(fileSystemAccessRule.IdentityReference.Value))
			{
				continue;
			}
			if (fileSystemAccessRule.AccessControlType == AccessControlType.Allow)
			{
				if (fileSystemAccessRule.InheritanceFlags.HasFlag(RequiredAclInheritance))
				{
					fileSystemRights |= fileSystemAccessRule.FileSystemRights;
				}
			}
			else
			{
				fileSystemRights2 |= fileSystemAccessRule.FileSystemRights;
			}
		}
		FileSystemRights fileSystemRights3 = fileSystemRights & ~fileSystemRights2;
		return fileSystemRights3.HasFlag(RequiredAcl);
	}


		// Token: 0x04000002 RID: 2
		private static readonly FileSystemRights RequiredAcl = FileSystemRights.Modify | FileSystemRights.DeleteSubdirectoriesAndFiles;

		// Token: 0x04000003 RID: 3
		private static readonly InheritanceFlags RequiredAclInheritance = InheritanceFlags.ContainerInherit | InheritanceFlags.ObjectInherit;
	}
}

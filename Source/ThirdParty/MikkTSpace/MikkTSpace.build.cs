// Copyright Epic Games, Inc. All Rights Reserved.
using UnrealBuildTool;

public class MikkTSpace : ModuleRules
{
	public MikkTSpace(ReadOnlyTargetRules Target) : base(Target)
	{
		Type = ModuleType.External;
		bool bWithMikkTSpace = true;

		string MikkTSpacePath = Target.UEThirdPartySourceDirectory + "MikkTSpace/";

		PublicSystemIncludePaths.Add(MikkTSpacePath + "inc/");

		if (Target.Platform.IsInGroup(UnrealPlatformGroup.Windows))
		{
			string PlatformSubdir = Target.Architecture == UnrealArch.Arm64 ? "WinArm64" : "Win64/VS2017";
			PublicAdditionalLibraries.Add(System.IO.Path.Combine(MikkTSpacePath, "lib", PlatformSubdir, "MikkTSpace.lib"));
		}
		else if (Target.IsInPlatformGroup(UnrealPlatformGroup.Unix))
		{
			PublicAdditionalLibraries.Add(MikkTSpacePath + "/lib/Unix/" + Target.Architecture.LinuxName + "/libMikkTSpace.a");
		}
		else if (Target.Platform == UnrealTargetPlatform.Mac)
		{
			PublicAdditionalLibraries.Add(MikkTSpacePath + "/lib/Mac/libMikkTSpace.a");
		}
		else
		{
			bWithMikkTSpace = false;
		}

		PublicDefinitions.Add(bWithMikkTSpace ? "WITH_MIKKTSPACE=1" : "WITH_MIKKTSPACE=0");
	}
}

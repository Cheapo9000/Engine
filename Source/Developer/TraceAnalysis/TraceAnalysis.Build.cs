// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class TraceAnalysis : ModuleRules
{
	public TraceAnalysis(ReadOnlyTargetRules Target) : base(Target)
	{
		UnsafeTypeCastWarningLevel = WarningLevel.Error;

		// Asio does not compile with C++20, remove if updated
		CppStandard = CppStandardVersion.Cpp17;

		PrivateDependencyModuleNames.AddRange(
			new string[] {
				"Asio",
				"Cbor",
				"Core",
				"Sockets",
				"TraceLog",
			}
		);
	}
}

// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Andypunk7022 : ModuleRules
{
	public Andypunk7022(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}

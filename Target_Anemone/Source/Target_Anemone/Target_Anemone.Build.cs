// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Target_Anemone : ModuleRules
{
	public Target_Anemone(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "EnhancedInput" });
	}
}

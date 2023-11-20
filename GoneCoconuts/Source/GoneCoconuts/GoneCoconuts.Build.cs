// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class GoneCoconuts : ModuleRules
{
	public GoneCoconuts(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "EnhancedInput" });
	}
}

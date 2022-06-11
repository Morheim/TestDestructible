// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class TestDestructible : ModuleRules
{
	public TestDestructible(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
		PublicDependencyModuleNames.AddRange(new string[] { "DestructibleComponentPropsModule" });
		PublicDependencyModuleNames.AddRange(new string[] { "QuestSystemsModule" });
	}
}

using UnrealBuildTool;

public class LwSys : ModuleRules {
    public LwSys(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "CinematicCamera",
            "Core",
            "CoreUObject",
            "Engine",
            "GameplayCameras",
            "InputCore",
            "LwSysDebugScreen",
            "MovieScene",
            "MovieSceneTracks",
            "PropertyPath",
            "Slate",
            "SlateCore",
            "TemplateSequence",
            "UMG",
        });
    }
}

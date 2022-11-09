using UnrealBuildTool;

public class Shinsen : ModuleRules {
    public Shinsen(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "AIModule",
            "Chaos",
            "CinematicCamera",
            "Core",
            "CoreUObject",
            "DeveloperSettings",
            "Engine",
            "GameplayCameras",
            "GameplayTags",
            "GameplayTasks",
            "InputCore",
            "LwSys",
            "LwSysDebugScreen",
            "MovieScene",
            "MovieSceneTracks",
            "NavigationSystem",
            "Niagara",
            "NiagaraAnimNotifies",
            "NiagaraCore",
            "NiagaraShader",
            "PhysicsCore",
            "PropertyPath",
            "SQEXSEAD",
            "SQEXSEADEvent",
            "SQEXSEADUtils",
            "ShinsenMd",
            "Slate",
            "SlateCore",
            "TemplateSequence",
            "UMG",
        });
    }
}

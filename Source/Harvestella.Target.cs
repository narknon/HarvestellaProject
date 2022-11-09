using UnrealBuildTool;

public class HarvestellaTarget : TargetRules {
	public HarvestellaTarget(TargetInfo Target) : base(Target) {
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V2;
		ExtraModuleNames.AddRange(new string[] {
			"LwSys",
			"Shinsen",
			"ShinsenMd",
		});
	}
}

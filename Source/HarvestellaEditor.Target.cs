using UnrealBuildTool;

public class HarvestellaEditorTarget : TargetRules {
	public HarvestellaEditorTarget(TargetInfo Target) : base(Target) {
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.V2;
		ExtraModuleNames.AddRange(new string[] {
			"LwSys",
			"Shinsen",
			"ShinsenMd",
		});
	}
}

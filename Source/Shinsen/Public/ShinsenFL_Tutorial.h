#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ShinsenFL_Tutorial.generated.h"

UCLASS(Blueprintable)
class SHINSEN_API UShinsenFL_Tutorial : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UShinsenFL_Tutorial();
    UFUNCTION(BlueprintCallable)
    static void StartTutorial(const FString& TutorialID);
    
    UFUNCTION(BlueprintCallable)
    static void SkipTutorial(const FString& TutorialID);
    
    UFUNCTION(BlueprintCallable)
    static void SetCompleteTutorial();
    
    UFUNCTION(BlueprintCallable)
    static bool OpenTutoriarlBook(const FString& BookID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsTutorialExec(const FString& TutorialID);
    
    UFUNCTION(BlueprintCallable)
    static bool IsOpenTutoriarlBook();
    
    UFUNCTION(BlueprintCallable)
    static void DispTutorialGuideText(const FString& TxtTutorialID);
    
    UFUNCTION(BlueprintCallable)
    static void CloseTutoriarlBook();
    
};


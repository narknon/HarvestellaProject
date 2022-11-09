#pragma once
#include "CoreMinimal.h"
#include "TutorialData.h"
#include "ShinsenWidgetBase.h"
#include "InputCoreTypes.h"
#include "ShinsenWidgetTutorial.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class SHINSEN_API UShinsenWidgetTutorial : public UShinsenWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FTutorialData> ExecChallenges;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FTutorialData> NewChallenges;
    
    UShinsenWidgetTutorial();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateTutorial(const FString& TutorialID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StartTutorial(const FString& TutorialID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SkipTutorial(const FString& TutorialID);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetPlayerAndEnemyFreeze();
    
    UFUNCTION(BlueprintCallable)
    void SetPartyAndEnemyAIEnable(bool bEnable);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetCompleteTutorial();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDeviceChanged(FKey Key);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTutorialExec(const FString& TutorialID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DispTutorial(const FString& TutorialID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DispGuideText(const FString& TxtTutorialID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CompleteTutorial(const FString& TutorialID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ClearTutorial();
    
};


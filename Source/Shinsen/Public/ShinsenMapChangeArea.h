#pragma once
#include "CoreMinimal.h"
#include "Engine/TriggerBox.h"
#include "ShinsenInterface_MiniMap.h"
#include "ShinsenMapChangeArea.generated.h"

class USQEXSEADSoundBank;
class AActor;

UCLASS(Blueprintable)
class SHINSEN_API AShinsenMapChangeArea : public ATriggerBox, public IShinsenInterface_MiniMap {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TriggerID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName NextMapID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName NextPointID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ExecFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> DisableFlags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EventId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName QuestStepStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName QuestStepEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USQEXSEADSoundBank* Se;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MiniMapSubID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHiddenMinimapIcon;
    
    AShinsenMapChangeArea();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetVisibleAreaChangeLine(bool bVisible);
    
    UFUNCTION(BlueprintCallable)
    void PlayMapChangeSe();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnOverlapEnd(AActor* OverlappedActor, AActor* OtherActor);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnOverlapBegin(AActor* OverlappedActor, AActor* OtherActor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsExecutableQuestStep() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InputButtonFunction();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetNextMapNameText(FString& Text) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AdjustSplineTransform();
    
    
    // Fix for true pure virtual functions not being implemented
};


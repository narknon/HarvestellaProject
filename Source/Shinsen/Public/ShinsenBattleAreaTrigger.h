#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ShinsenBattleAreaTrigger.generated.h"

class USceneComponent;
class UTextRenderComponent;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class SHINSEN_API AShinsenBattleAreaTrigger : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> IDs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* Root;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextRenderComponent* TextRender;
    
    AShinsenBattleAreaTrigger();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetDebugDispInfo(bool InFlag);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UPrimitiveComponent* GetTriggerCollision();
    
    UFUNCTION(BlueprintCallable)
    FString GetEditorText();
    
    UFUNCTION(BlueprintCallable)
    void EndOverlap(AActor* InActor);
    
    UFUNCTION(BlueprintCallable)
    void BeginOverlap(AActor* InActor);
    
    UFUNCTION(BlueprintCallable)
    void AddId(const FString& InId);
    
};


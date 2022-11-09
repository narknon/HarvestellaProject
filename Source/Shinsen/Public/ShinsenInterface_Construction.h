#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UObject/NoExportTypes.h"
#include "ShinsenInterface_Construction.generated.h"

UINTERFACE(Blueprintable)
class SHINSEN_API UShinsenInterface_Construction : public UInterface {
    GENERATED_BODY()
};

class SHINSEN_API IShinsenInterface_Construction : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetGridSize(int32 SizeX, int32 SizeY);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetCursorPos(FVector Pos);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetCursorDir(int32 Dir);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetCurrentFurniture(int32 ID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RemoveFurniture(FVector Pos, bool& bSucces, int32& ID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PutFurniture(int32 ID, FVector Pos, int32 Dir, bool& bSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void IsFieldEmpty(FVector Pos, bool& bEmpty);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GetPlacedFurniture(FVector Pos, bool& bFound, int32& ID, int32& Dir, int32& Anchor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EndMapFunc();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BeginMapFunc();
    
};


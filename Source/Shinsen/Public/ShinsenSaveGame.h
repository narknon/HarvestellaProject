#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "DebugWork.h"
#include "OptionWork.h"
#include "ShinsenFlags.h"
#include "ShinsenSaveGame.generated.h"

class UShinsenSaveGameGame;
class UShinsenSaveGameSystem;

UCLASS(Blueprintable)
class SHINSEN_API UShinsenSaveGame : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEndSaveSaveGameSignature, bool, bSuccess);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEndLoadSaveGameTempSignature, bool, bSuccess, UShinsenSaveGameGame*, TempSaveGame);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEndLoadSaveGameSignature, bool, bSuccess);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PlayerName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDebugWork DebugWork;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOptionWork OptionWork;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FShinsenFlags ShinsenFlagsWork;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEndLoadSaveGameSignature OnEndLoadSaveGame;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEndSaveSaveGameSignature OnEndSaveSaveGame;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEndLoadSaveGameTempSignature OnEndLoadSaveGameTemp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UShinsenSaveGameSystem* SaveGameSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UShinsenSaveGameGame* SaveGameGame;
    
    UShinsenSaveGame();
    UFUNCTION(BlueprintCallable)
    void SetDefaultValue();
    
    UFUNCTION(BlueprintCallable)
    bool SaveSystem();
    
    UFUNCTION(BlueprintCallable)
    bool SaveGame(const int32 InSlotIndex);
    
    UFUNCTION(BlueprintCallable)
    static void Save();
    
    UFUNCTION(BlueprintCallable)
    bool LoadSystem();
    
    UFUNCTION(BlueprintCallable)
    bool LoadGameTemp(const int32 InSlotIndex);
    
    UFUNCTION(BlueprintCallable)
    bool LoadGame(const int32 InSlotIndex);
    
    UFUNCTION(BlueprintCallable)
    static void Load();
    
    UFUNCTION(BlueprintCallable)
    bool IsSuccess();
    
    UFUNCTION(BlueprintCallable)
    bool IsBusySaveOrLoad();
    
    UFUNCTION(BlueprintCallable)
    static bool DoesTrialSaveExist();
    
    UFUNCTION(BlueprintCallable)
    static bool DoesSystemSaveExist();
    
    UFUNCTION(BlueprintCallable)
    static bool DoesGameSaveExist(const int32 InSlotIndex);
    
    UFUNCTION(BlueprintCallable)
    void ConvertTrialSave();
    
};


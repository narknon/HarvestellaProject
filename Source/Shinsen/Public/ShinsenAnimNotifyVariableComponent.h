#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "UObject/NoExportTypes.h"
#include "ShinsenAnimNotifyVariableComponent_BoolMap.h"
#include "ShinsenAnimNotifyVariableComponent_FloatMap.h"
#include "ShinsenAnimNotifyVariableComponent_IntMap.h"
#include "ShinsenAnimNotifyVariableComponent_ObjectMap.h"
#include "ShinsenAnimNotifyVariableComponent_ClassMap.h"
#include "ShinsenAnimNotifyVariableComponent_VectorMap.h"
#include "ShinsenAnimNotifyVariableComponent_RotatorMap.h"
#include "ShinsenAnimNotifyVariableComponent_StringMap.h"
#include "ShinsenAnimNotifyVariableComponent_NameMap.h"
#include "ShinsenAnimNotifyVariableComponent_EnumMap.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "ShinsenAnimNotifyVariableComponent.generated.h"

class UObject;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SHINSEN_API UShinsenAnimNotifyVariableComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGuid, FShinsenAnimNotifyVariableComponent_BoolMap> TemporarilyBoolMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGuid, FShinsenAnimNotifyVariableComponent_IntMap> TemporarilyIntMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGuid, FShinsenAnimNotifyVariableComponent_FloatMap> TemporarilyFloatMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGuid, FShinsenAnimNotifyVariableComponent_ObjectMap> TemporarilyObjectMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGuid, FShinsenAnimNotifyVariableComponent_ClassMap> TemporarilyClassMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGuid, FShinsenAnimNotifyVariableComponent_VectorMap> TemporarilyVectorMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGuid, FShinsenAnimNotifyVariableComponent_RotatorMap> TemporarilyRotatorMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGuid, FShinsenAnimNotifyVariableComponent_StringMap> TemporarilyStringMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGuid, FShinsenAnimNotifyVariableComponent_NameMap> TemporarilyNameMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGuid, FShinsenAnimNotifyVariableComponent_EnumMap> TemporarilyEnumMap;
    
public:
    UShinsenAnimNotifyVariableComponent();
    UFUNCTION(BlueprintCallable)
    void SetVector(const FGuid& ID, FName Key, FVector Value);
    
    UFUNCTION(BlueprintCallable)
    void SetString(const FGuid& ID, FName Key, const FString& Value);
    
    UFUNCTION(BlueprintCallable)
    void SetRotator(const FGuid& ID, FName Key, FRotator Value);
    
    UFUNCTION(BlueprintCallable)
    void SetObject(const FGuid& ID, FName Key, UObject* Value);
    
    UFUNCTION(BlueprintCallable)
    void SetName(const FGuid& ID, FName Key, FName Value);
    
    UFUNCTION(BlueprintCallable)
    void SetInt(const FGuid& ID, FName Key, int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void SetFloat(const FGuid& ID, FName Key, float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetEnum(const FGuid& ID, FName Key, uint8 Value);
    
    UFUNCTION(BlueprintCallable)
    void SetClass(const FGuid& ID, FName Key, UClass* Value);
    
    UFUNCTION(BlueprintCallable)
    void SetBool(const FGuid& ID, FName Key, bool Value);
    
    UFUNCTION(BlueprintCallable)
    void RemoveFromID(const FGuid& ID);
    
    UFUNCTION(BlueprintCallable)
    void GetVector(const FGuid& ID, FName Key, FVector& Value, bool& Succeed);
    
    UFUNCTION(BlueprintCallable)
    void GetString(const FGuid& ID, FName Key, FString& Value, bool& Succeed);
    
    UFUNCTION(BlueprintCallable)
    void GetRotator(const FGuid& ID, FName Key, FRotator& Value, bool& Succeed);
    
    UFUNCTION(BlueprintCallable)
    void GetObject(const FGuid& ID, FName Key, UObject*& Value, bool& Succeed);
    
    UFUNCTION(BlueprintCallable)
    void GetName(const FGuid& ID, FName Key, FName& Value, bool& Succeed);
    
    UFUNCTION(BlueprintCallable)
    void GetInt(const FGuid& ID, FName Key, int32& Value, bool& Succeed);
    
    UFUNCTION(BlueprintCallable)
    void GetFloat(const FGuid& ID, FName Key, float& Value, bool& Succeed);
    
    UFUNCTION(BlueprintCallable)
    void GetEnum(const FGuid& ID, FName Key, uint8& Value, bool& Succeed);
    
    UFUNCTION(BlueprintCallable)
    void GetClass(const FGuid& ID, FName Key, UClass*& Value, bool& Succeed);
    
    UFUNCTION(BlueprintCallable)
    void GetBool(const FGuid& ID, FName Key, bool& Value, bool& Succeed);
    
    UFUNCTION(BlueprintCallable)
    void AllRemove(const FGuid& ID);
    
};


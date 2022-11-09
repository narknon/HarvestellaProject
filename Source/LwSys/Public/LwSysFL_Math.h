#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "LwSysFL_Math.generated.h"

UCLASS(Blueprintable)
class LWSYS_API ULwSysFL_Math : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    ULwSysFL_Math();
    UFUNCTION(BlueprintPure)
    static int32 ToInt32(UPARAM(Ref) int64& InValue);
    
    UFUNCTION(BlueprintCallable)
    static bool ToggleBool(UPARAM(Ref) bool& bInOutValue);
    
    UFUNCTION(BlueprintCallable)
    static void SetRandomSeedDayTime();
    
    UFUNCTION(BlueprintCallable)
    static void SetRandomSeed(int32 InSeed0, int32 InSeed1, int32 InSeed2, int32 InSeed3);
    
    UFUNCTION(BlueprintCallable)
    static void PlusEqualVectorInt(UPARAM(Ref) FVector& InOutValue, int32 InAddValue, FVector& OutValue);
    
    UFUNCTION(BlueprintCallable)
    static void PlusEqualVectorFloat(UPARAM(Ref) FVector& InOutValue, float InAddValue, FVector& OutValue);
    
    UFUNCTION(BlueprintCallable)
    static void PlusEqualVector2DFloat(UPARAM(Ref) FVector2D& InOutValue, float InAddValue, FVector2D& OutValue);
    
    UFUNCTION(BlueprintCallable)
    static void PlusEqualVector2D(UPARAM(Ref) FVector2D& InOutValue, FVector2D InAddValue, FVector2D& OutValue);
    
    UFUNCTION(BlueprintCallable)
    static void PlusEqualVector(UPARAM(Ref) FVector& InOutValue, FVector InAddValue, FVector& OutValue);
    
    UFUNCTION(BlueprintCallable)
    static void PlusEqualInt(UPARAM(Ref) int32& InOutValue, int32 InAddValue, int32& OutValue);
    
    UFUNCTION(BlueprintCallable)
    static void PlusEqualFloat(UPARAM(Ref) float& InOutValue, float InAddValue, float& OutValue);
    
    UFUNCTION(BlueprintCallable)
    static void MultEqualVectorInt(UPARAM(Ref) FVector& InOutValue, int32 InMultValue, FVector& OutValue);
    
    UFUNCTION(BlueprintCallable)
    static void MultEqualVectorFloat(UPARAM(Ref) FVector& InOutValue, float InMultValue, FVector& OutValue);
    
    UFUNCTION(BlueprintCallable)
    static void MultEqualVector2DFloat(UPARAM(Ref) FVector2D& InOutValue, float InMultValue, FVector2D& OutValue);
    
    UFUNCTION(BlueprintCallable)
    static void MultEqualVector2D(UPARAM(Ref) FVector2D& InOutValue, FVector2D InMultValue, FVector2D& OutValue);
    
    UFUNCTION(BlueprintCallable)
    static void MultEqualVector(UPARAM(Ref) FVector& InOutValue, FVector InMultValue, FVector& OutValue);
    
    UFUNCTION(BlueprintCallable)
    static void MultEqualInt(UPARAM(Ref) int32& InOutValue, int32 InMultValue, int32& OutValue);
    
    UFUNCTION(BlueprintCallable)
    static void MultEqualFloat(UPARAM(Ref) float& InOutValue, float InMultValue, float& OutValue);
    
    UFUNCTION(BlueprintCallable)
    static FVector MinVector(UPARAM(Ref) FVector& InOutValue, FVector InCompare);
    
    UFUNCTION(BlueprintCallable)
    static void MinusEqualVectorInt(UPARAM(Ref) FVector& InOutValue, int32 InSubValue, FVector& OutValue);
    
    UFUNCTION(BlueprintCallable)
    static void MinusEqualVectorFloat(UPARAM(Ref) FVector& InOutValue, float InSubValue, FVector& OutValue);
    
    UFUNCTION(BlueprintCallable)
    static void MinusEqualVector2DFloat(UPARAM(Ref) FVector2D& InOutValue, float InSubValue, FVector2D& OutValue);
    
    UFUNCTION(BlueprintCallable)
    static void MinusEqualVector2D(UPARAM(Ref) FVector2D& InOutValue, FVector2D InSubValue, FVector2D& OutValue);
    
    UFUNCTION(BlueprintCallable)
    static void MinusEqualVector(UPARAM(Ref) FVector& InOutValue, FVector InSubValue, FVector& OutValue);
    
    UFUNCTION(BlueprintCallable)
    static void MinusEqualInt(UPARAM(Ref) int32& InOutValue, int32 InSubValue, int32& OutValue);
    
    UFUNCTION(BlueprintCallable)
    static void MinusEqualFloat(UPARAM(Ref) float& InOutValue, float InSubValue, float& OutValue);
    
    UFUNCTION(BlueprintCallable)
    static FVector MaxVector(UPARAM(Ref) FVector& InOutValue, FVector InCompare);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector GetVectorFloatMin();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector GetVectorFloatMax();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector GetRandomVectorSphere(float InRadius);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector2D GetRandomVector2D(FVector2D InMin, FVector2D InMax);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector GetRandomVector(FVector InMin, FVector InMax);
    
    UFUNCTION(BlueprintCallable)
    static void GetRandomSeed(int32& OutSeed0, int32& OutSeed1, int32& OutSeed2, int32& OutSeed3);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetRandomS32();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector GetRandomRangeVectorSphere(float InRadiusMin, float InRadiusMax);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetRandomRangeS32(int32 InMin, int32 InMax);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetRandomRangeF32(float InMin, float InMax);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector2D GetRandomRangeCircularSector(float InOriginDeg, float InDeg, float InLengthMin, float InLengthMax);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector2D GetRandomRangeCircle(float InRadiusMin, float InRadiusMax);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetRandomF32();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector2D GetRandomCircularSector(float InOriginDeg, float InDeg, float InLength);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector2D GetRandomCircle(float InRadius);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetRandomBool();
    
    UFUNCTION(BlueprintCallable)
    static void DivEqualVectorInt(UPARAM(Ref) FVector& InOutValue, int32 InDivValue, FVector& OutValue);
    
    UFUNCTION(BlueprintCallable)
    static void DivEqualVectorFloat(UPARAM(Ref) FVector& InOutValue, float InDivValue, FVector& OutValue);
    
    UFUNCTION(BlueprintCallable)
    static void DivEqualVector2DFloat(UPARAM(Ref) FVector2D& InOutValue, float InDivValue, FVector2D& OutValue);
    
    UFUNCTION(BlueprintCallable)
    static void DivEqualVector2D(UPARAM(Ref) FVector2D& InOutValue, FVector2D InDivValue, FVector2D& OutValue);
    
    UFUNCTION(BlueprintCallable)
    static void DivEqualVector(UPARAM(Ref) FVector& InOutValue, FVector InDivValue, FVector& OutValue);
    
    UFUNCTION(BlueprintCallable)
    static void DivEqualInt(UPARAM(Ref) int32& InOutValue, int32 InDivValue, int32& OutValue);
    
    UFUNCTION(BlueprintCallable)
    static void DivEqualFloat(UPARAM(Ref) float& InOutValue, float InDivValue, float& OutValue);
    
};


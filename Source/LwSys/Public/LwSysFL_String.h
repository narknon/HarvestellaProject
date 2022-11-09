#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "LwSysFL_String.generated.h"

UCLASS(Blueprintable)
class LWSYS_API ULwSysFL_String : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    ULwSysFL_String();
    UFUNCTION(BlueprintCallable)
    static bool StringRemoveFromStart(UPARAM(Ref) FString& RefString, const FString& InPrefix, TEnumAsByte<ESearchCase::Type> InSearchCase);
    
    UFUNCTION(BlueprintCallable)
    static bool StringRemoveFromEnd(UPARAM(Ref) FString& RefString, const FString& InSuffix, TEnumAsByte<ESearchCase::Type> InSearchCase);
    
    UFUNCTION(BlueprintCallable)
    static bool IsRegexMatch(const FString& InInput, const FString& InPattern);
    
    UFUNCTION(BlueprintCallable)
    static FString GetRichTextTagStyleItalic(const FString& inString);
    
    UFUNCTION(BlueprintCallable)
    static FString GetRichTextTagStyleBoldItalic(const FString& inString);
    
    UFUNCTION(BlueprintCallable)
    static FString GetRichTextTagStyleBold(const FString& inString);
    
    UFUNCTION(BlueprintCallable)
    static FString GetRichTextTagStyle(const FString& inString, const FString& InStyle);
    
    UFUNCTION(BlueprintCallable)
    static FString GetRichTextTagSize(const FString& inString, int32 InSize);
    
    UFUNCTION(BlueprintCallable)
    static FString GetRichTextTagFont(const FString& inString, const FString& InFontPath);
    
    UFUNCTION(BlueprintCallable)
    static FString GetRichTextTagColorSize(const FString& inString, const FColor& InColor, int32 InSize);
    
    UFUNCTION(BlueprintCallable)
    static FString GetRichTextTagColor(const FString& inString, const FColor& InColor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString EraseNewLineCode(const FString& inString);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 CountNewLine(const FString& inString);
    
};


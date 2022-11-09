#include "LwSysFL_String.h"

bool ULwSysFL_String::StringRemoveFromStart(FString& RefString, const FString& InPrefix, TEnumAsByte<ESearchCase::Type> InSearchCase) {
    return false;
}

bool ULwSysFL_String::StringRemoveFromEnd(FString& RefString, const FString& InSuffix, TEnumAsByte<ESearchCase::Type> InSearchCase) {
    return false;
}

bool ULwSysFL_String::IsRegexMatch(const FString& InInput, const FString& InPattern) {
    return false;
}

FString ULwSysFL_String::GetRichTextTagStyleItalic(const FString& inString) {
    return TEXT("");
}

FString ULwSysFL_String::GetRichTextTagStyleBoldItalic(const FString& inString) {
    return TEXT("");
}

FString ULwSysFL_String::GetRichTextTagStyleBold(const FString& inString) {
    return TEXT("");
}

FString ULwSysFL_String::GetRichTextTagStyle(const FString& inString, const FString& InStyle) {
    return TEXT("");
}

FString ULwSysFL_String::GetRichTextTagSize(const FString& inString, int32 InSize) {
    return TEXT("");
}

FString ULwSysFL_String::GetRichTextTagFont(const FString& inString, const FString& InFontPath) {
    return TEXT("");
}

FString ULwSysFL_String::GetRichTextTagColorSize(const FString& inString, const FColor& InColor, int32 InSize) {
    return TEXT("");
}

FString ULwSysFL_String::GetRichTextTagColor(const FString& inString, const FColor& InColor) {
    return TEXT("");
}

FString ULwSysFL_String::EraseNewLineCode(const FString& inString) {
    return TEXT("");
}

int32 ULwSysFL_String::CountNewLine(const FString& inString) {
    return 0;
}

ULwSysFL_String::ULwSysFL_String() {
}


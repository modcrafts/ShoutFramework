#pragma once
#include "CoreMinimal.h"
#include "Fonts/SlateFontInfo.h"
#include "Styling/SlateColor.h"
#include "TextStyleOverride.h"
#include "Components/RichTextBlock.h"
#include "RichTextStylable.generated.h"

UCLASS(Blueprintable)
class URichTextStylable : public URichTextBlock {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateFontInfo Font;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateColor FontColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FTextStyleOverride> Styles;
    
public:
    URichTextStylable();
};


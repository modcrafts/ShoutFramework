#pragma once
#include "CoreMinimal.h"
#include "CSGGridDuplicatorProperties.h"
#include "CSGBaseComponent.h"
#include "CSGGridDuplicatorComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UCSGGridDuplicatorComponent : public UCSGBaseComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCSGGridDuplicatorProperties Properties;
    
    UCSGGridDuplicatorComponent();
};


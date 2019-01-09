#pragma once


#include "SSGS_ColorRangeStatic.h"
#include "SSGS_ColorRangeGradient.h"
#include "SSGS_ColorEffectSpecificationRanges.generated.h"


UCLASS( BlueprintType )
class STEELSERIESGAMESENSE_API USSGS_ColorEffectSpecificationRanges : public USSGS_ColorEffectSpecification {

    GENERATED_BODY()

public:

    UFUNCTION( BlueprintCallable, Category = SSGS_CATEGORY )
    void AddStatic( const FSSGS_ColorRangeStatic& v );

    UFUNCTION( BlueprintCallable, Category = SSGS_CATEGORY )
    void AddGradient( const FSSGS_ColorRangeGradient& v );

    TSharedPtr< FJsonValue > Convert() const;

    UPROPERTY() TArray< FSSGS_ColorRangeStatic > staticRanges;
    UPROPERTY() TArray< FSSGS_ColorRangeGradient > gradientRanges;

};
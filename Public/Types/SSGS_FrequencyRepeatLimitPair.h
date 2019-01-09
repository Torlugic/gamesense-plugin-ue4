#pragma once


#include "SSGS_FrequencyRepeatLimitPair.generated.h"


USTRUCT( BlueprintType )
struct STEELSERIESGAMESENSE_API FSSGS_FrequencyRepeatLimitPair {

    GENERATED_BODY()

    UPROPERTY( EditAnywhere, BlueprintReadWrite ) int32 low;
    UPROPERTY( EditAnywhere, BlueprintReadWrite ) int32 high;
    UPROPERTY( EditAnywhere, BlueprintReadWrite ) int32 frequency;
    UPROPERTY( EditAnywhere, BlueprintReadWrite ) int32 repeat_limit;

};

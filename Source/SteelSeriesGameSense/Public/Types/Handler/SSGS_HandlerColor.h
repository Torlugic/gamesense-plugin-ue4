/**
* authors: sharkgoesmad
*
* Copyright (c) 2019 SteelSeries
*
* Permission is hereby granted, free of charge, to any person obtaining
* a copy of this software and associated documentation files (the
* "Software"), to deal in the Software without restriction, including
* without limitation the rights to use, copy, modify, merge, publish,
* distribute, sublicense, and/or sell copies of the Software, and to
* permit persons to whom the Software is furnished to do so, subject to
* the following conditions:
*
* The above copyright notice and this permission notice shall be
* included in all copies or substantial portions of the Software.
*
* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
* EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
* MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
* IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY
* CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,
* TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
* SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
*/
#pragma once


#include "Common/SSGS_JsonConvertable.h"
#include "Types/SSGS_DeviceZone.h"
#include "Types/SSGS_Enums.h"
#include "Types/Illumination/SSGS_ColorEffectSpecification.h"
#include "Types/Rate/SSGS_RateSpecification.h"
#include "SSGS_HandlerColor.generated.h"


USTRUCT( BlueprintType, meta = ( Category = "Gamesense|Types" ) )
struct STEELSERIESGAMESENSE_API FSSGS_HandlerColor : public FSSGS_JsonConvertable {

    GENERATED_BODY()

    FSSGS_HandlerColor();
    FSSGS_HandlerColor( const FSSGS_HandlerColor& other );
    FSSGS_HandlerColor( const FSSGS_IlluminationDeviceZone& deviceZone, ESSGS_IlluminationMode mode, USSGS_ColorEffectSpecification* colorSpec, USSGS_RateSpecification* rateSpec = nullptr );
    const FSSGS_HandlerColor& operator=( const FSSGS_HandlerColor& other );
    ~FSSGS_HandlerColor();


    UPROPERTY( EditAnywhere, BlueprintReadWrite, meta = ( DisplayName = "Device - Zone" ) )
    FSSGS_IlluminationDeviceZone deviceZone;
    UPROPERTY( EditAnywhere, BlueprintReadWrite )
    ESSGS_IlluminationMode mode;
    UPROPERTY( EditAnywhere, BlueprintReadWrite, meta = ( DisplayName = "Color Specification" ) )
    USSGS_ColorEffectSpecification* color;
    UPROPERTY( EditAnywhere, BlueprintReadWrite, meta = ( DisplayName = "Rate Specification" ) )
    USSGS_RateSpecification* rate;

    TSharedPtr< FJsonValue > Convert() const;

};
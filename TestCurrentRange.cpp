#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file

#include "catch.hpp"
#include "stats.h"

#include <stdlib.h>
#include <math.h>

TEST_CASE("Accurate ranges of BMS current in collection of periodic data ") 
{   
    struct BMS_BatteryCurrent BMS_CurrentRecord;
    float currentreadings[] = {3,4,5,3,4,3,10,11,12,11};
    int NumberofReadings = sizeof(currentreadings) / sizeof(currentreadings[0]);
  
    BMS_CurrentRecord  = AnalysePeriodicCurrent (currentreadings, setlength);
    REQUIRE((BMS_CurrentRecord.NumberofContinuousRanges) ==2);
}

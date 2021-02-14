#define CATCH_CONFIG_MAIN
#include "catch.hpp"

#include "fancyPower.hpp"

// write your test cases here
TEST_CASE("Test case", "fancyPower"){

  REQUIRE(fancyPower(2,4)==16);
  
  REQUIRE(fancyPower(3,5)==125);
}

#define CATCH_CONFIG_MAIN
#include "catch.hpp"

#include "dynamic_bag.hpp"

// force template expansion for ints
template class DynamicBag<int>;

TEST_CASE("Calling all public members", "[DynamicBag]"){
  DynamicBag<int> b;
  REQUIRE(b.add(0)==true);
  b.remove(0);
  REQUIRE(b.getFrequencyOf(0)==0);
  REQUIRE(b.isEmpty()==true);
  REQUIRE(b.getCurrentSize()==0);
  b.clear();
  b.getFrequencyOf(0);
  b.contains(0);
}

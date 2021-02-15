#define CATCH_CONFIG_MAIN
#include "catch.hpp"

#include "limited_size_bag.hpp"

// force template expansion for ints
template class LimitedSizeBag<int>;

TEST_CASE("Empty Test", "[LimitedSizeBag]"){
  LimitedSizeBag<int> walter;
  walter.add(5);
  walter.add(3);
  walter.add(2);
  REQUIRE(walter.getCurrentSize() == 3);
  REQUIRE(walter.getFrequencyOf(2)==1);

  LimitedSizeBag<int> wilmer(walter);
  REQUIRE(wilmer.getCurrentSize() == 3);
  REQUIRE(wilmer.getFrequencyOf(2)==1);

  LimitedSizeBag<int> jeff;
  jeff = walter;
  REQUIRE(jeff.getCurrentSize() == 3);
  REQUIRE(jeff.getFrequencyOf(2)==1);
  REQUIRE(true);
}

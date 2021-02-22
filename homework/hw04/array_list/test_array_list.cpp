#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include <vector>
#include "array_list.hpp"

//force class expansion
template class ArrayList<int>;

TEST_CASE( "Test", "[ArrayList]" ) {

  ArrayList<int> list;
  list.insert(1, 5);
  list.insert(2,4);
  list.insert(3,3);
  list.insert(4, 2);
  list.insert(5,1);
  list.insert(6,0);

  REQUIRE(list.getEntry(4)==2);
  REQUIRE(list.remove(5));
  REQUIRE(list.getLength()==5);
  list.setEntry(2,10);
  REQUIRE(list.getEntry(2)==10);
}

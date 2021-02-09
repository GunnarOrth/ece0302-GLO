#define CATCH_CONFIG_MAIN
#define CATCH_CONFIG_COLOUR_NONE
#include "catch.hpp"

#include "bitset.hpp"

// THIS IS JUST AN EXAMPLE
// There should be at least one test per Bitset method

TEST_CASE( "Test bitset construction", "[bitset]" ) {

    Bitset b;  
    REQUIRE(b.size() == 8);
    REQUIRE(b.good()==true);
    b.set(5);
    b.toggle(3);
    REQUIRE(b.test(5));
    REQUIRE(b.test(3));

    Bitset a(10);  
    REQUIRE(a.size() == 10);
    REQUIRE(a.good()==true);
    a.set(5);
    a.toggle(3);
    REQUIRE(a.test(5));
    REQUIRE(a.test(3));

    const std::string s = "0000000";
    Bitset c(s);  
    REQUIRE(c.size() == 7);
    REQUIRE(c.good()==true);
    c.set(5);
    c.toggle(3);
    REQUIRE(c.test(5));
    REQUIRE(c.test(3));
}


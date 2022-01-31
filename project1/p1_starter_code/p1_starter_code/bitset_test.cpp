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
    REQUIRE(b.asString()=="00000000");
    b.set(0);
    b.set(1);
    REQUIRE(b.asString()=="11000000");
    b.reset(0);
    REQUIRE(b.asString()=="01000000");
    REQUIRE(b.test(1)==true);
    REQUIRE(b.good()==true);
    b.toggle(6);
    b.toggle(7);
    REQUIRE(b.asString()=="01000011");
    REQUIRE(b.test(0)==false);
    b.set(44);
    REQUIRE(b.good()==false);
    
}
TEST_CASE( "Test second constructor", "[bitset]" ){

    Bitset b(6);
    REQUIRE(b.size() == 6);
    REQUIRE(b.good()==true);
    REQUIRE(b.asString()=="000000");
    b.set(0);
    b.set(1);
    REQUIRE(b.asString()=="110000");
    b.reset(0);
    REQUIRE(b.asString()=="010000");
    REQUIRE(b.test(1)==true);
    REQUIRE(b.good()==true);
    b.toggle(4);
    b.toggle(5);
    REQUIRE(b.asString()=="010011");
    REQUIRE(b.test(0)==false);
    b.reset(5);
    REQUIRE(b.test(5)==false);
    b.set(44);
    REQUIRE(b.good()==false);
    

}
TEST_CASE( "Test third constructor", "[bitset}" ){

    Bitset b("00010");
    REQUIRE(b.size() == 5);
    REQUIRE(b.good()==true);
    REQUIRE(b.asString()=="00010");
    b.set(0);
    b.set(1);
    REQUIRE(b.asString()=="11010");
    b.reset(0);
    REQUIRE(b.asString()=="01010");
    REQUIRE(b.test(1)==true);
    REQUIRE(b.good()==true);
    b.toggle(3);
    b.toggle(4);
    REQUIRE(b.asString()=="01001");
    REQUIRE(b.test(0)==false);
    b.reset(5);
    REQUIRE(b.test(5)==false);
    b.reset(9);
    REQUIRE(b.good()==false);

}



#define CATCH_CONFIG_MAIN
#include "./Includes/catch.hpp"
#include<iostream>


TEST_CASE("Check the input"){
    REQUIRE(2 == 2);
    REQUIRE(2 != 2);
}
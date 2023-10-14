#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question1.h"



TEST_CASE("Return appropiate amount for widgets sold")
{
	REQUIRE(getEarnedPoints(3) == 3);
	REQUIRE(getEarnedPoints(9) == 45);
	REQUIRE(getEarnedPoints(11) == 110);
	REQUIRE(getEarnedPoints(20) == 300);
}


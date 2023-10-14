#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question3.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Convert celsius to farenheit")
{
	REQUIRE(getFarenheit(37) == 98.6);
	REQUIRE(getFarenheit(25) == 77);
	REQUIRE(getFarenheit(0) == 32);

}



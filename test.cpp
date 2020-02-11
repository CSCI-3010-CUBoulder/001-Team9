
#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "functions_to_implement.cpp"

TEST_CASE("Negative returns -1 and positive returns 1", "[sign]"){
  REQUIRE(assert(sign(5.0) == 1));
  REQUIRE(assert(sign(0.0) == 1));
  REQUIRE(assert(sign(-1.0) == -1));
}

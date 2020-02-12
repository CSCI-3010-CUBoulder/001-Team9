#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "functions_to_implement.cpp"

TEST_CASE("Negative returns -1 and positive returns 1", "[Sign]"){
  REQUIRE(Sign(5.0) == 1.0);
  REQUIRE(Sign(0.0) == 1.0);
  REQUIRE(Sign(-1.0) == -1.0);
}

#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "functions_to_implement.cpp"

TEST_CASE("Negative returns -1 and positive returns 1", "[Sign]"){
  REQUIRE(Sign(5.0) == 1.0);
  REQUIRE(Sign(0.0) == 1.0);
  REQUIRE(Sign(-1.0) == -1.0);
}

std::vector<int> sum_vector = {1,2,3};

TEST_CASE("Sum adds up all the numbers in a vector", "[Sum]"){
  REQUIRE(Sum(sum_vector) == 6);
}

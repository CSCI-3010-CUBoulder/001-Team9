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

TEST_CASE("Returns new vector with n subtracted from vector for ints","[SubtractN]"){
  std::vector<int> vec = {0,1,3};
  std::vector<int> vec2 = {-3,-2,0};
  REQUIRE(SubtractN(vec,3) == vec2);
}

TEST_CASE("Subtracting 1.0 and -1.0 from vectors works properly.", "[SubtractN]"){
  std::vector<double> num{1.0,2.0,3.0};
  std::vector<double> ans1{0.0,1.0,2.0};
  std::vector<double> ans2{2.0,3.0,4.0};
  REQUIRE(SubtractN(num, 1.0) == ans1);
  REQUIRE(SubtractN(num, -1.0) == ans2);
}
#include <catch2/catch_test_macros.hpp>

TEST_CASE("simple test") {
  SECTION("Happy happy joy") { REQUIRE(1 == 1); }
  SECTION("Sadness") { REQUIRE(false == true); }
}

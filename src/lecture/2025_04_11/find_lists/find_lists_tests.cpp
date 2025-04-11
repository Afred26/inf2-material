#include <catch2/catch_test_macros.hpp>

#include "find_lists.h"

TEST_CASE("find_element", "[find]") {
  REQUIRE(find_element(std::vector{10, 20, 30, 40, 50}, 30) == 2);
  REQUIRE(find_element(std::vector{10, 20, 30, 40, 50}, 100) == 5);
}

TEST_CASE("find_element_string", "[find]") {
  REQUIRE(find_element(std::vector{std::string{"Eiffelturm"},
                                   std::string{"DHBW Mannheim"}},
                       "Eiffelturm") == 0);
}

TEST_CASE("lookup_fee", "[find]") {
  REQUIRE(lookup_fee("Eiffelturm",std::vector{std::string{"Eiffelturm"}, std::string{"DHBW Mannheim"}}, std::vector<int>{42, 23}) == 42);
  REQUIRE(lookup_fee("Taj Mahal",std::vector{std::string{"Eiffelturm"}, std::string{"DHBW Mannheim"}}, std::vector<int>{42, 23}) == -1);
}

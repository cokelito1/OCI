#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "problema1.hpp"

TEST_CASE("Problema1 test", "[problema1]") {
  REQUIRE( yearPasados(2000, 2018) == 18 );
  REQUIRE( yearPasados(1900, 2000) == 100 );
  REQUIRE( yearPasados(1800, 1800) == 0 );
  REQUIRE( yearPasados(0, 100000 ) == 100000 );
  REQUIRE( yearPasados(4000, 2000) == 2000 );
}

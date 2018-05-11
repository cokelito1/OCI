#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "problema5.hpp"

TEST_CASE("Problema5 test", "[problema5]") {
  REQUIRE( CMtoPulgada(1) == Approx(0.39f) );
  REQUIRE( CMtoPulgada(5) == Approx(1.95f) );
  REQUIRE( CMtoPulgada(20) == Approx(7.8f) );
  REQUIRE( CMtoPulgada(36) == Approx(14.04f) );
  REQUIRE( CMtoPulgada(81) == Approx(31.59f) );
}

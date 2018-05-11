#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "problema4.hpp"

TEST_CASE("Problema4 test", "[problema4]") {
  REQUIRE( iva(2000.0f) == Approx(380.0f) );
  REQUIRE( iva(3250.0f) == Approx(617.5f) );
  REQUIRE( iva(8560.0f) == Approx(1626.4f) );
  REQUIRE( iva(4681.0f) == Approx(889.39f) );
  REQUIRE( iva(4452.0f) == Approx(845.88f) );
}

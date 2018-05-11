#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "problema2.hpp"

TEST_CASE("Problema2 test", "[problema2]") {
  REQUIRE( promedio(7.0f, 6.5f, 5.5f) == Approx(6.33333f) );
  REQUIRE( promedio(5.3f, 3.6f, 4.1f) == Approx(4.33333f) );
  REQUIRE( promedio(7.0f, 7.0f, 7.0f) == Approx(7.00000f) );
  REQUIRE( promedio(4.1f, 3.2f, 6.0f) == Approx(4.43333f) );
  REQUIRE( promedio(6.2f, 5.3f, 7.0f) == Approx(6.16666f) );

}

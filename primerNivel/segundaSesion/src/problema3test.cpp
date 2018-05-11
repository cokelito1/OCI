#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "problema3.hpp"

TEST_CASE("Problema3 test", "[problema3]") {
  REQUIRE( PrintName("Jorge", "Chileno", "Viña") == "Hola, soy Jorge, soy Chileno y vivo en Viña");
  REQUIRE( PrintName("ASDASD", "ASD", "Vasd") == "Hola, soy ASDASD, soy ASD y vivo en Vasd");
  REQUIRE( PrintName("gsag", "gs", "gh") == "Hola, soy gsag, soy gs y vivo en gh");
  REQUIRE( PrintName("ndsa", "ng", "nh") == "Hola, soy ndsa, soy ng y vivo en nh");
  REQUIRE( PrintName("hger", "sad", "ewe") == "Hola, soy hger, soy sad y vivo en ewe");
}

#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include "sphere.hpp"
#include "shape.hpp"
#include "box.hpp"

TEST_CASE("sphere area and volume", "[sphere]") {
  Sphere s1{{1.0f, 0.0f, 0.0f}, 3.0f};
  REQUIRE(s1.area() == Approx(113.1f).epsilon(0.1));
  REQUIRE(s1.volume() == Approx(113.1f).epsilon(0.1));
  Sphere s2{{1.0f, 0.0f, 0.0f}, 0.0f};
  REQUIRE(s2.area() == 0.0f);
  REQUIRE(s2.volume() == 0.0f);
}

TEST_CASE("box area and volume", "[box]") {
  Box b1{{0.0f, 0.0f, 0.0f}, {1.0f, 1.0f, 1.0f}};
  REQUIRE(b1.area() == Approx(6.0f).epsilon(0.1));
  REQUIRE(b1.volume() == Approx(1.0f).epsilon(0.1));
  Box b2{{-1.0f, -1.0f, -1.0f}, {1.0f, 1.0f, 1.0f}};
  REQUIRE(b2.area() == 24.0f);
  REQUIRE(b2.volume() == 8.0f);
}

int main(int argc, char *argv[])
{
  return Catch::Session().run(argc, argv);
}

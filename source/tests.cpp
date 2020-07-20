#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include <glm/glm.hpp>
#include <glm/gtx/intersect.hpp>
#include "sphere.hpp"
#include "shape.hpp"
#include "box.hpp"


TEST_CASE("sphere area and volume", "[sphere]") {
  Sphere s1{"s1", {1.0f, 0.3f, 0.7f}, {1.0f, 0.0f, 0.0f}, 3.0f};
  REQUIRE(s1.area() == Approx(113.1f).epsilon(0.1));
  REQUIRE(s1.volume() == Approx(113.1f).epsilon(0.1));
  Sphere s2{"s2", {1.0f, 0.3f, 0.7f}, {1.0f, 0.0f, 0.0f}, 0.0f};
  REQUIRE(s2.area() == 0.0f);
  REQUIRE(s2.volume() == 0.0f);
  s1.print(std::cout);
  s2.print(std::cout);
}

TEST_CASE("box area and volume", "[box]") {
  Box b1{"b1", {1.0f, 0.3f, 0.7f}, {0.0f, 0.0f, 0.0f}, {1.0f, 1.0f, 1.0f}};
  REQUIRE(b1.area() == Approx(6.0f).epsilon(0.1));
  REQUIRE(b1.volume() == Approx(1.0f).epsilon(0.1));
  Box b2{"b2", {1.0f, 0.3f, 0.7f}, {-1.0f, -1.0f, -1.0f}, {1.0f, 1.0f, 1.0f}};
  REQUIRE(b2.area() == 24.0f);
  REQUIRE(b2.volume() == 8.0f);
  b1.print(std::cout);
  b2.print(std::cout);
}

TEST_CASE("intersect_ray_sphere", "[intersect]") {
  // Ray
  glm::vec3 ray_origin {0.0f, 0.0f, 0.0f};
  // ray  direction  has to be  normalized !
  // you  can  use:
  // v = glm:: normalize(some_vector)
  glm::vec3 ray_direction {0.0f, 0.0f, 1.0f};
  //  Sphere
  glm::vec3 sphere_center {0.0f, 0.0f, 5.0f};
  float sphere_radius {1.0f};
  float distance = 0.0f;
  auto result = glm::intersectRaySphere(ray_origin, 
      ray_direction, sphere_center,
      sphere_radius*sphere_radius, //  squared  radius  !!!
      distance);
  REQUIRE(distance  ==  Approx (4.0f));
}

TEST_CASE("Raytracer", "[Aufgabe 5.8]") {
  Color red{255, 0, 0};
  glm::vec3 position{0.0f, 0.0f, 0.0f};
  Sphere* s1 = new Sphere{"sphere0", red, position, 1.2f};
  Shape* s2 = new Sphere{"sphere1", red, position, 1.2f};
  s1->print(std::cout);
  s2->print(std::cout);
  delete s1;
  delete s2;
}

int main(int argc, char *argv[])
{
  return Catch::Session().run(argc, argv);
}


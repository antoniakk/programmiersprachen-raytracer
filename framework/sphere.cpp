#include "sphere.hpp"

Sphere::Sphere(glm::vec3 const& centre, float radius) : 
    centre_{centre},
    radius_{radius} {};

float Sphere::area() const {
    if(radius_ < 0) {
        throw "Radius cannot be negative.";
    }
    return 4*M_PI*radius_*radius_;
}

float Sphere::volume() const {
    if (radius_ < 0) {
        throw "Radius cannot be negative.";
    }
    return (4.0f/3.0f)*M_PI*radius_*radius_*radius_;
}
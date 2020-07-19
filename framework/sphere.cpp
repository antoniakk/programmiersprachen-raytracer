#include "sphere.hpp"

Sphere::Sphere(std::string name, Color const& color, glm::vec3 const& centre, float radius) :
    Shape(name, color),
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

std::ostream& Sphere::print(std::ostream& os) const {
    Shape::print(os);
    os << "Radius: " << radius_ << "\nCentre: (" << centre_.x << ", " << centre_.y << ", " << centre_.z << ")" << "\n";
};
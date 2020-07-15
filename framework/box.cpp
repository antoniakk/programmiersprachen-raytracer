#include "box.hpp"

Box::Box(glm::vec3 const& min, glm::vec3 const& max) :
    min_{min},
    max_{max} {};

float Box::area() const {
    return 2*((max_.z - min_.z)*(max_.x - min_.x) + (max_.z - min_.z)*(max_.y - min_.y) + (max_.y - min_.y)*(max_.x - min_.x));
}

float Box::volume() const {
    return (max_.z - min_.z)*(max_.x - min_.x)*(max_.y - min_.y);
}
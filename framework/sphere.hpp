#ifndef SPHERE_HPP
#define SPHERE_HPP

#include "shape.hpp"

class Sphere : public Shape {
    public:
    Sphere(glm::vec3 const& centre, float radius);
    float area() const override; 
    float volume() const override;
    private:
    glm::vec3 centre_;
    float radius_;
};

#endif
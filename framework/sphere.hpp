#ifndef SPHERE_HPP
#define SPHERE_HPP

#include "shape.hpp"

class Sphere : public Shape {
    public:
    Sphere(std::string name, Color const& color, glm::vec3 const& centre, float radius);
    float area() const override; 
    float volume() const override;
    std::ostream& print(std::ostream& os) const override;
    private:
    glm::vec3 centre_;
    float radius_;
};

#endif
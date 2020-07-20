#ifndef SPHERE_HPP
#define SPHERE_HPP

#include "shape.hpp"
#include "ray.hpp"
#include "hit_point.hpp"
#include <glm/glm.hpp>
#include <glm/gtx/intersect.hpp>

class Sphere : public Shape {
    public:
    Sphere(std::string name, Color const& color, glm::vec3 const& centre, float radius);
    float area() const override; 
    float volume() const override;
    std::ostream& print(std::ostream& os) const override;
    HitPoint intersect(Ray const& ray) const;
    ~Sphere();
    private:
    glm::vec3 centre_;
    float radius_;

};

#endif
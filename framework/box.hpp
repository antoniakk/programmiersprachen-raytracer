
#ifndef BOX_HPP
#define BOX_HPP

#include "shape.hpp"

class Box : public Shape {
    public:
    Box(std::string name, Color const& color, glm::vec3 const& min, glm::vec3 const& max);
    float area() const override; 
    float volume() const override;
    std::ostream& print(std::ostream& os) const override;
    ~Box();
    private:
    glm::vec3 max_;
    glm::vec3 min_;
};

#endif
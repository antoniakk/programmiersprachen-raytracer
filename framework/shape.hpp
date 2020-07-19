#ifndef SHAPE_HPP
#define SHAPE_HPP

#include <glm/vec3.hpp>
#include <cmath>
#include <string>
#include "color.hpp"

class Shape {
    public:
    virtual float area() const = 0;
    virtual float volume() const = 0;
    Shape(std::string name, Color const& color);
    virtual std::ostream& print(std:: ostream& os) const;
    private:
    std::string name_;
    Color color_;
};

std::ostream& operator<<(std::ostream& os, Shape const& s);

#endif 
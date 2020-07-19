#include "shape.hpp"

Shape::Shape(std::string name, Color const& color) : 
    name_{name},
    color_{color} {};

std::ostream& Shape::print(std:: ostream& os) const {
    os << "Name: " << name_ << "\nColor: " << color_ << "\n";
};

std::ostream& operator<<(std::ostream& os, Shape const& s) {
    s.print(os);
};
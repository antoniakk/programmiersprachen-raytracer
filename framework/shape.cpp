#include "shape.hpp"

Shape::Shape(std::string name, Color const& color) : 
    name_{name},
    color_{color} {};

std::ostream& Shape::print(std::ostream& os) const {
    os << "\nName: " << name_ << "\nColor: " << color_;
};

std::ostream& operator<<(std::ostream& os, Shape const& s) {
    s.print(os);
};

Shape::~Shape() {
    std::cout << "Shape destructor" << std::endl;
}
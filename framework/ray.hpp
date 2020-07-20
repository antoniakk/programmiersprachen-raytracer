#ifndef RAY_HPP
#define RAY_HPP

#include <glm/vec3.hpp>

struct Ray {
    glm::vec3 ray_origin = {0.0f, 0.0f, 0.0f};
    glm::vec3 ray_direction = {0.0f, 0.0f, -1.0f};
};

#endif
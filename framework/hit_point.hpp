#ifndef HIT_POINT_HPP
#define HIT_POINT_HPP

#include <string>
#include "color.hpp"
#include <glm/vec3.hpp>

struct HitPoint {
    bool intersected = false;
    float distance = 0.0f;
    std::string name = "";
    Color color = {0.5f, 0.5f, 0.5f};
    glm::vec3 intersection_point = {0.0f, 0.0f, 0.0f};
    glm::vec3 direction = {1.0f, 0.0f, 0.0f};
};


#endif
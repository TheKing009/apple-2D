#include "../includes/aabb.h"

using namespace apple2D;

AABB::AABB()
{
    this->min = Vector2(0.0f, 0.0f);
    this->max = Vector2(0.0f, 0.0f);
}

AABB::AABB( Vector2 min,  Vector2 max)
{
    this->min = min;
    this->max = max;
}
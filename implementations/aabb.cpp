#include "../includes/aabb.h"

using namespace apple2D;

AABB::AABB()
{
    this->min = Vector2(0.0, 0.0);
    this->max = Vector2(0.0, 0.0);
}

AABB::AABB(const Vector2& min, const Vector2& max)
{
    this->min = min;
    this->max = max;
}
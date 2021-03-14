#pragma once

#include "raylib.h"

struct AABB 
{
    Vector2 min;
    Vector2 max;
};

struct Circle
{
    Vector2 center;
    float radius;
};

bool AABBvsAABB (AABB a, AABB b)
{
    if(a.max.x < b.min.x or a.min.x > b.max.x) return false
    if(a.max.y < b.min.y or a.min.y > b.max.y) return false
 
    return true
}


bool CirclevsCircle(Circle a, Circle b)
{
    return ((a.center.x - b.center.x) ^ 2 + (a.center.y - b.center.y) ^ 2) < (a.radius + b.radius);
}
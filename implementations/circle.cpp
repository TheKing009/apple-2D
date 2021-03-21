#include "../includes/circle.h"

using namespace apple2D;

Circle::Circle()
{
    this->radius = 0;
    this->center = ZERO_VECTOR;
}

Circle::Circle( Vector2 center,  float radius)
{
    this->radius = radius;
    this->center = center;
}

Circle::Circle( Vector2 center,  int radius)
{
    this->radius = (float)radius;
    this->center = center;
}
#include "../includes/circle.h"

using namespace apple2D;

Circle::Circle()
{
    this->radius = 0;
    this->center = ZERO_VECTOR;
}

Circle::Circle(const Vector2& center, const double& radius)
{
    this->radius = radius;
    this->center = center;
}

Circle::Circle(const Vector2& center, const int& radius)
{
    this->radius = (double)radius;
    this->center = center;
}
#include "../includes/line.h"

using apple2D::Line;
using apple2D::Vector2;

Line::Line()
{
    this->m = this->c = 0.0;
}

Line::Line(const Vector2 &a, const Vector2 &b)
{
    double dy = a.y - b.y;
    double dx = a.x - b.x;

    this->m = dy/dx;
    this->c = 0.0;
}

bool Line::PointOnLine(const Vector2& point)
{
    double value = this->m * point.x + this->c - point.y;
    if (value < __FLT_EPSILON__)
    {
        return true;
    }
    return false;
}

#include "../includes/line.h"

using apple2D::Line;
using apple2D::Vector2;

Line::Line()
{
    this->m = this->c = 0.0;
}

Line::Line(const double &m, const double &c)
{
    this->m = m;
    this->c = c;
}

Line::Line(const Vector2 &a, const Vector2 &b)
{
    double dy = a.y - b.y;
    double dx = a.x - b.x;

    this->m = dy/dx;
    this->c = b.y - (this->m * b.x);
}

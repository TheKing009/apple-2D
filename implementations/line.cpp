#include "../includes/line.h"

using apple2D::Line;
using apple2D::Vector2;

Line::Line()
{
    this->m = this->c = 0.0;
}

Line::Line( float &m,  float &c)
{
    this->m = m;
    this->c = c;
}

Line::Line( Vector2 &a,  Vector2 &b)
{
    float dy = a.y - b.y;
    float dx = a.x - b.x;

    this->m = dy/dx;
    this->c = b.y - (this->m * b.x);
}

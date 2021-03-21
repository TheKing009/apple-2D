#include "../includes/line.h"

using apple2D::Line;
using apple2D::Vector2;

Line::Line()
{
    this->m = this->c = 0.0;
}

Line::Line( float m,  float c)
{
    this->m = m;
    this->c = c;
}

Line::Line( Vector2 a,  Vector2 b)
{
    float dy = a.y - b.y;
    float dx = a.x - b.x;

    this->m = dy/dx;
    this->c = b.y - (this->m * b.x);
}

Vector2 Line::IntersectionPoint(Line l1, Line l2)
{
    float c1 = l1.GetIntercept();
    float c2 = l2.GetIntercept();

    float m1 = l1.GetSlope();
    float m2 = l2.GetSlope();

    Vector2 intersectionPoint;
    intersectionPoint.x = (c2 - c1) / (m1 - m2);
    intersectionPoint.y = m1 * intersectionPoint.x + c1;

    return intersectionPoint;
}

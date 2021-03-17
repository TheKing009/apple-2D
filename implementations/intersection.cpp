#include "../includes/intersection.h"

using namespace apple2D;

bool Intersection::LineVsPoint( Line &line,  Vector2 &point)
{
    float slope = line.GetSlope();
    float intercept = line.GetIntercept();

    float value = slope * point.x + intercept - point.y;

    return (value == 0.0);
}

bool Intersection::CircleVsPoint ( Circle& circle,  Vector2 &point)
{
    float radius = circle.GetRadius();
    Vector2 center = circle.GetCenter();

    float value = (point.x - center.x) * (point.x - center.x) + (point.y - center.y) * (point.y - center.y);
    return value <= (radius * radius);
}

bool Intersection::AABBvsPoint ( AABB& aabb,  Vector2 &point)
{
    Vector2 max = aabb.GetMax();
    Vector2 min = aabb.GetMin();

    return (
        point.x >= min.x &&
        point.x <= max.x &&
        point.y >= min.y &&
        point.y <= max.y
    );
}
#include "../includes/intersection.h"

using namespace apple2D;

bool Intersection::LineVsPoint(const Line &line, const Vector2 &point)
{
    double slope = line.GetSlope();
    double intercept = line.GetIntercept();

    double value = slope * point.x + intercept - point.y;

    return (value == 0.0);
}

bool Intersection::CircleVsPoint (const Circle& circle, const Vector2 &point)
{
    double radius = circle.GetRadius();
    Vector2 center = circle.GetCenter();

    double value = (point.x - center.x) * (point.x - center.x) + (point.y - center.y) * (point.y - center.y);
    return value <= (radius * radius);
}

bool Intersection::AABBvsPoint (const AABB& aabb, const Vector2 &point)
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
#include "../includes/intersection.h"

using namespace apple2D;

bool Intersection::LineVsPoint( Line line,  Vector2 point)
{
    float slope = line.GetSlope();
    float intercept = line.GetIntercept();

    float value = slope * point.x + intercept - point.y;

    return (value == 0.0);
}

bool Intersection::CircleVsPoint ( Circle circle,  Vector2 point)
{
    float radius = circle.GetRadius();
    Vector2 center = circle.GetCenter();

    float value = (point.x - center.x) * (point.x - center.x) + (point.y - center.y) * (point.y - center.y);
    return value <= (radius * radius);
}

bool Intersection::AABBvsPoint ( AABB aabb,  Vector2 point)
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

bool Intersection::SegmentVsPoint(Segment seg, Vector2 point)
{
    Vector2 a = seg.GetEnd() - seg.GetStart();
    Vector2 b = point - seg.GetStart();

    float cross = Vector2::Cross(a, b);
    bool distanceCheck = a.LengthSqr() > b.LengthSqr();

    return (cross == 0) && distanceCheck;
}

bool Intersection::RectVsPoint (Box rect, Vector2 point)
{
    Vertices verts = rect.GetVertices();
    float rotation = rect.GetRotation();

    Vector2 rotatedPoint = point.Rotate (rotation);

    // Implement this
    return false;
}

/* Two lines intersect if they are not parallel */

bool Intersection::LineVsLine(Line line1, Line line2)
{
    return !(abs(line1.GetSlope()) == abs(line2.GetSlope()));
}

/* Consider a line with the equation y = mx + c;
If it is a tangent to the circle with center (h, K) and radius r;
then, the perpendicular distance of the center from the line = r;
therefore mh - k + c / (1 + m*m) <= r; for intersection; */

bool Intersection::LineVsCircle(Line line, Circle circle)
{
    Vector2 center = circle.GetCenter ();
    float radius = circle.GetRadius ();

    float m = line.GetSlope();
    float c = line.GetIntercept();

    float denominator = 1 + m * m;
    float numerator = m * center.x - center.y + c;
    numerator *= numerator;

    return numerator / denominator <= circle.GetRadius();
}


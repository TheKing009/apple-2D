#include <iostream>
#include "includes/apple2D.h"

using namespace apple2D;

using std::cout;
using std::endl;

int main (void)
{
	Vector2 a = Vector2(1.0f, 0.0f);
	Vector2 b = a.Rotate(90.0f);
	cout << b.x << endl;
    AABB box(ZERO_VECTOR, Vector2(4.0f, 5.0f));
    Vector2 point(4.0f, 5.0f);

    Line line1(1.0f, 2.0f);
    Line line2(-0.123440f, 2.0f);

    point = Line::IntersectionPoint(line1, line2);
    cout << point.x << '\t' << point.y << endl;

    cout << Intersection::AABBvsPoint(box, point) << endl;

    return 0;
}

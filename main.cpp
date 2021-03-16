#include <iostream>
#include "includes/vector2.h"
#include "includes/primitives.h"
#include "includes/intersection.h"

using namespace apple2D;

using std::cout;
using std::endl;

int main (void)
{
    AABB box(Vector2(0.0, 0.0), Vector2(4.0, 5.0));
    Vector2 point(4.0, 5.0);

    cout << Intersection::AABBvsPoint(box, point) << endl;

    return 0;
}
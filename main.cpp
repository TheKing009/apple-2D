#include <iostream>
#include "includes/vector2.h"

using namespace apple2D;

using std::cout;
using std::endl;

int main (void)
{
    Vector2 vec1;
    vec1.x = 10.0;
    vec1.y = 2.32;

    vec1 = -vec1;
    Vector2 vec2 (2.0, 4.0);

    Vector2 vec3 = vec1 + vec2;

    cout << vec3.x << '\t' << vec3.y << endl;

    vec3 -= Vector2(5.0, 0.3);

    cout << vec3.x << '\t' << vec3.y << endl;

    float dot = Vector2::Dot(vec3, vec1);

    cout << dot << endl;

    vec1 = Vector2(1.0, 0.0);
    vec2 = Vector2(0.0, 1.0);

    dot = Vector2::Dot(vec1, vec2);

    cout << dot << endl;
    cout << Vector2::Cross(vec1, vec1) << endl;

    return 0;
}
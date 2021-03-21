#include "../includes/box.h"

using namespace apple2D;

Box::Box(Vector2 min, Vector2 max, float rotation)
{
    this->min = min;
    this->max = max;
    this->rotation = rotation;
}

Vertices Box::GetVertices ()
{
    Vertices vertices;
    vertices.v[0] = Vector2 (min.x, min.y);
    vertices.v[1] = Vector2 (min.x, min.y);
    vertices.v[2] = Vector2 (max.x, min.y);
    vertices.v[3] = Vector2 (max.x, max.y);

    for (int i = 0; i < VERTICES; i++)
    {
        vertices.v[i] = vertices.v[i].Rotate(this->rotation);
    }

    return vertices;
}

/* Check the performance of this  function and check whether it'll be viable to cache thee vertices at start */

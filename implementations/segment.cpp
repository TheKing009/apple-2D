#include "../includes/segment.h"

using namespace apple2D;

Segment::Segment(Vector2 start, Vector2 end)
{
    this->start = start;
    this->end = end;
}

Segment::Segment(Vector2 start, Vector2 direction, float distance)
{
    this->start = start;
    
    Vector2 DirNormalized = direction.Normalized();
    this->end = DirNormalized * distance;
}

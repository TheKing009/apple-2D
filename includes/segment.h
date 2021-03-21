#ifndef SEGMENT_H
#define SEGMENT_H

#include "vector2.h"

/* 
This class implements a line segment.
useful for raycasting in a specific range
*/

namespace apple2D
{
    class Segment
    {
        Vector2 start;
        Vector2 end;

        public:
            Segment(Vector2 start, Vector2 end);
            Segment (Vector2, Vector2, float);

            Vector2 GetStart() {return start;}
            Vector2 GetEnd() {return end;}
    };
}

#endif

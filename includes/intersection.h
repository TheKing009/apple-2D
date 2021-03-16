#ifndef INTERSECTION_H
#define INTERSECTION_H

#include "vector2.h"
#include "primitives.h"

namespace apple2D
{
    class Intersection
    {
        private:
            Intersection(); // No instancing allowed
        public:
            static bool LineVsPoint (const Line&, const Vector2&);
            static bool CircleVsPoint (const Circle&, const Vector2&);
            static bool AABBvsPoint (const AABB&, const Vector2&);
    };
}

#endif
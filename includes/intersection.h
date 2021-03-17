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
            static bool LineVsPoint ( Line&,  Vector2&);
            static bool CircleVsPoint ( Circle&,  Vector2&);
            static bool AABBvsPoint ( AABB&,  Vector2&);
    };
}

#endif
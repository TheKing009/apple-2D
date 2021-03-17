#ifndef AABB_H
#define AABB_H

#include "vector2.h"

namespace apple2D
{
    class AABB
    {
        private:
            Vector2 min;
            Vector2 max;
        public:
            AABB();
            AABB( Vector2&,  Vector2&);

            Vector2 GetMin()  { return min; }
            Vector2 GetMax()  { return max; }
    };
}

#endif
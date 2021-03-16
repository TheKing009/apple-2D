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
            AABB(const Vector2&, const Vector2&);

            
    };
}

#endif
#ifndef BOX_H
#define BOX_H

#include "vector2.h"

namespace apple2D
{
    class Box
    {
        private:
            Vector2 center;
            Vector2 size;
        public:
            Box();
            Box( Vector2&,  Vector2&);

            Vector2* GetVertices();
    };
}

#endif
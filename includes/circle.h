#ifndef CIRCLE_H
#define CIRCE_H

#include "vector2.h"

namespace apple2D
{
    class Circle
    {
        private:
           Vector2 center;
           double radius; 
        public:
            Circle();
            Circle (const Vector2&, const double&);
            Circle (const Vector2&, const int&);
    };    
}

#endif

#ifndef CIRCLE_H
#define CIRCLE_H

#include "vector2.h"

namespace apple2D
{
    class Circle
    {
        private:
           Vector2 center;
           float radius; 
        public:
            Circle();
            Circle ( Vector2&,  float&);
            Circle ( Vector2&,  int&);

            Vector2 GetCenter()  { return center; }
            float GetRadius()  { return radius; }
    };    
}

#endif

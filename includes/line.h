#ifndef LINE_H
#define LINE_H

#include "vector2.h"

/*
This line implements the equation of y = mx + c
*/

namespace apple2D
{
    class Line
    {
        private:
            float m;
            float c;
        public:
            Line ();
            Line ( float,  float);
            Line ( Vector2,  Vector2);

            float GetSlope()  { return m; }
            float GetIntercept()  { return c; }


            static Vector2 IntersectionPoint (Line ll1, Line l2);
    };
}

#endif
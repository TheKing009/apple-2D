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
            double m;
            double c;
        public:
            Line ();
            Line (const double&, const double&);
            Line (const Vector2&, const Vector2&);

            double GetSlope() const { return m; }
            double GetIntercept() const { return c; }
    };
}

#endif
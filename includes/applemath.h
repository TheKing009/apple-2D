#ifndef APPLE_MATH_H
#define APPLE_MATH_H

#include "vector2.h"

namespace apple2D
{
    double Clamp(const double&, const double&, const double&);
    double Lerp (const double&, const double&, const double&);
    double Normalize (const double&, const double&, const double&);
}

#endif
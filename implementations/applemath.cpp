#include "../includes/applemath.h"

using namespace apple2D;

inline float Clamp( float value,  float min,  float max)
{
    if (value < min)
        return min;
    else if (value > max)
        return max;

    return value;
}

inline float Lerp( float start,  float end,  float amount)
{
    return start + amount * (start - end);
}

inline float Normalize( float value,  float start,  float end)
{
    return (value - start) / (end - start);
}
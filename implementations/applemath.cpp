#include "../includes/applemath.h"

using namespace apple2D;

inline double Clamp(const double &value, const double &min, const double &max)
{
    if (value < min)
        return min;
    else if (value > max)
        return max;

    return value;
}

inline double Lerp(const double &start, const double &end, const double &amount)
{
    return start + amount * (start - end);
}

inline double Normalize(const double &value, const double &start, const double &end)
{
    return (value - start) / (end - start)
}
#include "includes/vector2.h"

using apple2D::Dot;
using apple2D::Vector2;

Vector2::Vector2()
{
    x = 0; y = 0;
}

Vector2::Vector2(float x, float y)
{
    this->x = (double) x;
    this->y = (double) y;
}

Vector2::Vector2(double x, double y)
{
    this->x = x;
    this->y = y;
}

Vector2::Vector2(int x, int y)
{
    this->x = (double) x;
    this->y = (double) y;
}


double Vector2::Length()
{

}

double Vector2::Length_sqr()
{
    return (this->x * this->x) + (this->y * this->y);
}

void Vector2::Normalize()
{
    double magnitude = this->Length();
    this->x = this->x / magnitude; 
    this->y = this->y / magnitude;

    //*this = *this / magnitude;
}


/* Optimisation notes:
1. store magnitude
2. store 1 / magnitude
*/
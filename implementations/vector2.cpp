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
    return sqrt(this->Length_sqr());
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

Vector2 Vector2::operator-()
{
    this->x = -this->x;
    this->y = -this->y;
}

Vector2 Vector2::operator+(const Vector2 &vec)
{
    return Vector2(this->x + vec.x, this->y + vec.y);
}

Vector2 Vector2::operator-(const Vector2 &vec)
{
    return Vector2(this->x - vec.x, this->y - vec.y);
}

Vector2 Vector2::operator*(const double &scalar)
{
    return Vector2(this->x * scalar, this->y * scalar);
}

Vector2 Vector2::operator/(const double &scalar)
{
    return Vector2(this->x / scalar, this->y / scalar);
}

bool Vector2::operator==(const Vector2 &vec)
{
    if (vec.x == this->x && vec.y == this->y)
        return true;

    return false;
}

void Vector2::operator+=(const Vector2 &vec)
{
    this->x += vec.x;
    this->y += vec.y; 
}

void Vector2::operator-=(const Vector2 &vec)
{
    this->x -= vec.x;
    this->y -= vec.y;
}

void Vector2::operator*=(const double &scalar)
{
    this->x *= scalar;
    this->y *= scalar;
}

void Vector2::operator/=(const double &scalar)
{
    this->x / scalar;
    this->y / scalar;
}

/* Optimisation notes:
1. store magnitude
2. store 1 / magnitude
*/
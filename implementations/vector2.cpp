#include "../includes/vector2.h"

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
}

Vector2 Vector2::Rotate(const float& degrees)
{
    float rad = degrees * DEG2RAD;

    double c = cos((double)rad);
    double s = sin((double)rad);

    double vx = this->x;
    double vy = this->y;

    return Vector2(c * vx - s * vy, c * vy + s * vx);
}

Vector2 Vector2::operator-()
{
    return Vector2(-this->x, -this->y);
}

Vector2 Vector2::operator+(const Vector2& vec)
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

void Vector2::operator=(const Vector2 &vec)
{
    this->x = vec.x;
    this->y = vec.y;
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
    this->x /= scalar;
    this->y /= scalar;
}

double Vector2::Dot(const Vector2 &v1, const Vector2 &v2)
{
    return v1.x * v2.x + v2.y * v1.y;
}

double Vector2::Cross(const Vector2 &v1, const Vector2 &v2)
{
    return (v1.x * v2.y - v1.y * v2.x);
}

/* Optimisation notes:
1. store magnitude
2. store 1 / magnitude
*/

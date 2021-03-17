#include "../includes/vector2.h"

using apple2D::Vector2;

Vector2::Vector2()
{
    x = 0; y = 0;
}

Vector2::Vector2(float x, float y)
{
    this->x = x;
    this->y = y;
}

Vector2::Vector2(int x, int y)
{
    this->x = (float) x;
    this->y = (float) y;
}


float Vector2::Length()
{
    return sqrt(this->Length_sqr());
}

float Vector2::Length_sqr()
{
    return (this->x * this->x) + (this->y * this->y);
}

void Vector2::Normalize()
{
    float magnitude = this->Length();
    this->x = this->x / magnitude; 
    this->y = this->y / magnitude;
}

Vector2 Vector2::Rotate( float& degrees)
{
    float rad = degrees * DEG2RAD;

    float c = cos((float)rad);
    float s = sin((float)rad);

    float vx = this->x;
    float vy = this->y;

    return Vector2(c * vx - s * vy, c * vy + s * vx);
}

Vector2 Vector2::operator-()
{
    return Vector2(-this->x, -this->y);
}

Vector2 Vector2::operator+( Vector2& vec)
{
    return Vector2(this->x + vec.x, this->y + vec.y);
}

Vector2 Vector2::operator-( Vector2 &vec)
{
    return Vector2(this->x - vec.x, this->y - vec.y);
}

Vector2 Vector2::operator*( float &scalar)
{
    return Vector2(this->x * scalar, this->y * scalar);
}

Vector2 Vector2::operator/( float &scalar)
{
    return Vector2(this->x / scalar, this->y / scalar);
}

bool Vector2::operator==( Vector2 &vec)
{
    if (vec.x == this->x && vec.y == this->y)
        return true;

    return false;
}

void Vector2::operator=( Vector2 &vec)
{
    this->x = vec.x;
    this->y = vec.y;
}

void Vector2::operator+=( Vector2 &vec)
{
    this->x += vec.x;
    this->y += vec.y; 
}

void Vector2::operator-=( Vector2 &vec)
{
    this->x -= vec.x;
    this->y -= vec.y;
}

void Vector2::operator*=( float &scalar)
{
    this->x *= scalar;
    this->y *= scalar;
}

void Vector2::operator/=( float &scalar)
{
    this->x /= scalar;
    this->y /= scalar;
}

float Vector2::Dot( Vector2 &v1,  Vector2 &v2)
{
    return v1.x * v2.x + v2.y * v1.y;
}

float Vector2::Cross( Vector2 &v1,  Vector2 &v2)
{
    return (v1.x * v2.y - v1.y * v2.x);
}

Vector2 Vector2::Perpendicular( Vector2 &vec)
{
    return Vector2 (-vec.y, vec.x);
}

Vector2 Vector2::Lerp(Vector2& start, Vector2&end, float& amount)
{
    return start + (start - end) * amount;
}

/* Optimisation notes:
1. store magnitude
2. store 1 / magnitude
*/

#ifndef VECTOR2_H
#define VECTOR2_H

#include <math.h>

#ifndef PI
#define PI 3.14159265358979323846
#endif

#define DEG2RAD PI/180.0
#define RAD2DEG PI/180.0

#define ZERO_VECTOR Vector2(0.0, 0.0);

namespace apple2D
{
    class Vector2
    {
        public:
            double x;
            double y;
        
            Vector2();  
            Vector2(float, float);
            Vector2(double, double);
            Vector2(int, int);

            double Length();
            double Length_sqr();

            void Normalize();
            Vector2 Rotate(const float&);
            
            Vector2 operator+(const Vector2& vec);
            Vector2 operator-(const Vector2 &vec);
            Vector2 operator/(const double &scalar);
            Vector2 operator*(const double &scalar);

            bool operator==(const Vector2 &vec);

            void operator=(const Vector2 &vec);

            void operator+=(const Vector2 &vec);
            void operator-=(const Vector2 &vec);
            void operator*=(const double &scalar);
            void operator/=(const double &scalar);

            Vector2 operator-();

            static double Dot(const Vector2 &v1, const Vector2 &v2);
            static double Cross (const Vector2 &v1, const Vector2 &v2);
            static Vector2 Perpendicular(const Vector2 &vec);
            static Vector2 Lerp (Vector2 &start, Vector2 &end, double &amount);
    }; 
}

#endif

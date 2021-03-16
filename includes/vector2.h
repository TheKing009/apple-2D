#ifndef VECTOR2_H
#define VECTOR2_H

#include <math.h>

#define DEG2RAD M_PI/180.0
#define RAD2DEG M_PI/180.0

using std::sqrt;

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
    }; 
}

#endif

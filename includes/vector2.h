#ifndef VECTOR2_H
#define VECTOR2_H

#include <math.h>

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

            inline double Length();
            inline double Length_sqr();

            inline void Normalize();
            
            inline Vector2 operator+(const Vector2& vec);
            inline Vector2 operator-(const Vector2 &vec);
            inline Vector2 operator/(const double &scalar);
            inline Vector2 operator*(const double &scalar);

            inline bool operator==(const Vector2 &vec);

            inline void operator=(const Vector2 &vec);

            inline void operator+=(const Vector2 &vec);
            inline void operator-=(const Vector2 &vec);
            inline void operator*=(const double &scalar);
            inline void operator/=(const double &scalar);
            inline void operator-();

            inline static double Dot(const Vector2 &v1, const Vector2 &v2);
    }; 
}

#endif

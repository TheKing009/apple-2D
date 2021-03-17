#ifndef VECTOR2_H
#define VECTOR2_H

#include <math.h>

#ifndef PI
#define PI 3.14159265358979323846f
#endif

#define DEG2RAD PI/180.0
#define RAD2DEG PI/180.0

#define ZERO_VECTOR Vector2(0.0f, 0.0f);

namespace apple2D
{
    class Vector2
    {
        public:
            float x;
            float y;
        
            Vector2();  
            Vector2(float, float);
            Vector2(int, int);

            float Length();
            float Length_sqr();

            void Normalize();
            Vector2 Rotate( float&);
            
            Vector2 operator+( Vector2& vec);
            Vector2 operator-( Vector2 &vec);
            Vector2 operator/( float &scalar);
            Vector2 operator*( float &scalar);

            bool operator==( Vector2 &vec);
 
            void operator=( Vector2 &vec);

            void operator+=( Vector2 &vec);
            void operator-=( Vector2 &vec);
            void operator*=( float &scalar);
            void operator/=( float &scalar);

            Vector2 operator-();

            static float Dot( Vector2 &v1,  Vector2 &v2);
            static float Cross ( Vector2 &v1,  Vector2 &v2);
            static Vector2 Perpendicular( Vector2 &vec);
            static Vector2 Lerp (Vector2 &start, Vector2 &end, float &amount);
    }; 
}

#endif

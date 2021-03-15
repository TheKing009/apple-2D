#ifndef VECTOR2_H
#define VECTOR2_H
#endif

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
            
            Vector2 operator + (const Vector2 &vec);
            Vector2 operator - (const Vector2 &vec);
            Vector2 operator / (const double &scalar);
            Vector2 operator * (const double &scalar);

            Vector2 operator==(const Vector2 &vec);
            Vector2 operator=(const Vector2 &vec);

            Vector2 operator - ();
    };

    double Dot(const Vector2 &v1, const Vector2 &v2);
}

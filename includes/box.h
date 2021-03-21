#ifndef BOX_H
#define BOX_H

#include "vector2.h"

#ifndef VERTICES 
#define VERTICES 4
#endif

namespace apple2D
{
    typedef struct {
        Vector2 v[VERTICES]; 
    } Vertices;


    class Box
    {
        private:
            Vector2 max;
            Vector2 min;
            float rotation;
        public:
            Box (Vector2, Vector2, float rotation);

            Vertices GetVertices();
            float GetRotation() {return rotation;}
    };
}

#endif

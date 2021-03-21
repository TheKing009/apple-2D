#ifndef INTERSECTION_H
#define INTERSECTION_H

#include "vector2.h"
#include "primitives.h"

namespace apple2D
{
    class Intersection
    {
        private:
            Intersection(); // No instancing allowed
        public:
            // Point Overlap checks
            static bool LineVsPoint ( Line,  Vector2);
            static bool CircleVsPoint ( Circle,  Vector2);
            static bool AABBvsPoint ( AABB,  Vector2);
            static bool RectVsPoint (Box, Vector2);
            static bool SegmentVsPoint (Segment, Vector2);

            // line overlap checks.
            static bool LineVsLine(Line, Line);
            static bool LineVsCircle(Line, Circle);
            static bool LineVsRect(Line, Box);
            static bool LinevsAABB(Line, AABB);
    };
}

#endif

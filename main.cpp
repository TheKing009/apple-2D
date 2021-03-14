#include <chrono>

using namespace std::chrono;

#include "raylib.h"

typedef steady_clock::time_point TimePoint;
typedef duration <double> Duration;

#define FPS 60

const float dt = 1 / FPS;

int main(void)
{
    int screenWidth = 800;
    int screenHeight = 600;
    
    InitWindow(screenWidth, screenHeight, "Apple 2D");
    SetTargetFPS(60);
    
    TimePoint frameStart = steady_clock::now();
    double accumulator = 0;
    
    while(!WindowShouldClose())
    {
        const TimePoint currentTime = steady_clock::now();
        duration<double> time_span = duration_cast<duration<double>>(currentTime - frameStart);
        
        accumulator += time_span.count();
        
        while (accumulator > dt)
        {
            accumulator -= dt;
        }
        
        BeginDrawing();
        ClearBackground(RAYWHITE);
        EndDrawing();
    }
    
    return 0;
}
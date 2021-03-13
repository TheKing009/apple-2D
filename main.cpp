#include "raylib.h"

int main(void)
{
    int screenWidth = 800;
    int screenHeight = 600;
    
    InitWindow(screenWidth, screenHeight, "Apple 2D");
    SetTargetFPS(60);
    
    while(!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(RAYWHITE);
        EndDrawing();
    }
    
    return 0;
}
#include "raylib.h"

int main()
{
    // initialise window
    const int windowWidth{800};
    const int windowHeight{600};
    InitWindow(windowWidth, windowHeight, "Flappy Bird Clone");

    // initialise target framerate
    const int targetFramerate{60}; // 60 fps target
    SetTargetFPS(targetFramerate);

    // game loop
    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(WHITE);
        // game logic

        EndDrawing();
    }
    CloseWindow();    
}
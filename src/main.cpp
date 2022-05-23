#include "raylib.h"
#include "Player.h"

int main()
{
    // initialise window
    const int windowWidth{800};
    const int windowHeight{600};
    InitWindow(windowWidth, windowHeight, "Flappy Bird Clone");

    // initialise player
    Player player {
        Rectangle{ 
            windowWidth / 2 - 25,
            windowHeight / 2 - 25,
            50,
            50
        }, // player rectangle
        1000.f // jump velocity
    };

    // initialise target framerate
    const int targetFramerate{60}; // 60 fps target
    SetTargetFPS(targetFramerate);

    // game loop
    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(WHITE);
        // game logic
        player.Tick(GetFrameTime());
        EndDrawing();
    }
    CloseWindow();    
}

#include "raymob.h" // This header can replace 'raylib.h' and includes additional functions related to Android.
int main(void)
{
    InitWindow(0, 0, "Hare Krishna!");
    SetTargetFPS(60);               

    // Main game loop
    while (!WindowShouldClose())    
    {
        // Update
        // Draw
        BeginDrawing();
        DrawFPS(0,10);
        ClearBackground(BLACK);

        DrawText("Hare Krishna!", 190, 200, 20, GREEN);

        EndDrawing();
        
}

    CloseWindow();        // Close window and OpenGL context
    
    return 0;
}
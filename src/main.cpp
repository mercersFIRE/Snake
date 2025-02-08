#include <raylib.h>
#include <iostream>
using namespace std;



int main() 
{
    InitWindow(GetScreenWidth(), GetScreenHeight(), "Snake");
    
    SetTargetFPS(GetMonitorRefreshRate(0));
    while (!WindowShouldClose()) 
    {
        //event handling


        //update

        //draw
        BeginDrawing();
        ClearBackground(RAYWHITE);
        DrawFPS(10, 10);
        EndDrawing();
    }
    CloseWindow();
    return 0;
}
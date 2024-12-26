#include <iostream>
#include "raylib.h"


#include "src/utils/Colors.h"


#include "src/Game/Game.hpp"

double lastUpdateTime = 0;

bool EventTriggered(double interval)
{
    double currentTime = GetTime();
    if (currentTime - lastUpdateTime >= interval)
    {
        lastUpdateTime = currentTime;
        return true;
    }
    return false;
}

int main() {

    const int width = 600;
    const int height = 600;

    Game game = Game();
    InitWindow(width,height,"Tetris");



    while(!WindowShouldClose()){
        if (EventTriggered(1))
        {
            game.MoveDown();
        }


        BeginDrawing();

        ClearBackground(blue);

        game.DrawBlocks();
        if (IsKeyPressed(KEY_DOWN)) {

            game.MoveDown();
        }
        if (IsKeyPressed(KEY_LEFT)) {

            game.MoveLeft();
        }
        if (IsKeyPressed(KEY_RIGHT)) {

            game.MoveRight();
        }


        EndDrawing();
    }

    CloseWindow();
    std::cout << "Hello, World!" << std::endl;
    return 0;
}

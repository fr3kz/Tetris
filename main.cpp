#include <iostream>
#include "raylib.h"
#include "src/Grid.hpp"
#include "src/Blocks/Blocks.cpp"
int main() {

    const int width = 600;
    const int height = 600;

    Color darkblue = {40,40,127,255};

    Grid grid = Grid();
    LBock block = LBock();
    //block.Move(0,0);
    grid.Print();



    InitWindow(width,height,"Tetris");

    while(!WindowShouldClose()){
        BeginDrawing();
        ClearBackground(darkblue);
        grid.Draw();
        block.Draw();
        EndDrawing();
    }

    CloseWindow();
    std::cout << "Hello, World!" << std::endl;
    return 0;
}

//
// Created by Artur on 24/12/2024.
//

#ifndef TETRIS_GRID_HPP
#define TETRIS_GRID_HPP
#include "vector"
#include "raylib.h"
class Grid{
public:
    Grid();
    int grid[20][10];
    void Initialize();
    void Draw();
    void Print();

private:

    std::vector<Color> colors;
    int numRows;
    int numCols;
    int cellSize;
};

#endif //TETRIS_GRID_HPP

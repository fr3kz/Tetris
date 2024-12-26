//
// Created by Artur on 24/12/2024.
//

#ifndef TETRIS_GRID_HPP
#define TETRIS_GRID_HPP
#include "vector"
#include "raylib.h"
#include "Blocks/Block.hpp"

class Grid{
public:
    Grid();
    int grid[20][10];
    void Initialize();
    void Draw();
    void Print();
    void UpdateGrid(Block block,int row, int col);

private:

    std::vector<Color> colors;
    int numRows;
    int numCols;
    int cellSize;
};

#endif //TETRIS_GRID_HPP

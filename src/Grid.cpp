#include "Grid.hpp"
#include "iostream"
#include "raylib.h"
#include "utils/Colors.h"

Grid::Grid() {
    numCols = 10;
    numRows = 20;
    cellSize = 30;
    Initialize();
    colors = GetCellColors();
}

void Grid::Initialize() {
    for (int i = 0; i < numRows; i++) {
        for (int j = 0; j < numCols; j++) {
            grid[i][j] = 0;
        }
    }
}

void Grid::Print() {
    for (int i = 0; i < numRows; i++) {
        for (int j = 0; j < numCols; j++) {
            std::cout << grid[i][j] << " ";
        }
        std::cout<< std::endl;
    }

    std::cout << "\n";
}



void Grid::Draw() {
    for (int i = 0; i < numRows; i++) {
        for (int j = 0; j < numCols; j++) { // Poprawiono z "i++" na "j++"
            int cellValue = grid[i][j];
            Color darkblue = {40, 40, 127, 255};
            DrawRectangle(j * cellSize + 1, i * cellSize + 1, cellSize - 1, cellSize - 1, colors[cellValue]);
        }
    }
}

void Grid::UpdateGrid(Block block,int row, int col) {
    for (int i = 0; i < numRows; i++) {
        for (int j = 0; j < numCols; j++) {
            for (auto p: block.GetCellPositions()) {
                if(i==p.row and j==p.col){
                    grid[i][j] =0;
                }
            }
        }
    }


            for (auto p: block.GetCellPositions()) {
               grid[p.row+row][p.col+col] =1;

    }
    Print();
}

bool Grid::CheckCollison(Block block,int row,int col) {
    for (auto p:block.GetCellPositions()) {
        std::cout << p.row << " " << p.col << "\n";
        if(grid[p.row+block.rowOffset+row][p.col+block.colOffset+col] == 1){

            return true;
        }

    }
    return false;
}

bool Grid::CheckGridBorder(Block block, int row, int col) {
    for (auto p:block.GetCellPositions()) {
        std::cout << p.row<<   block.rowOffset<< "\n";


    }
    return false;
}

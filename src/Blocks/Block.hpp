//
// Created by Artur on 25/12/2024.
//

#ifndef TETRIS_BLOCK_HPP
#define TETRIS_BLOCK_HPP
#include <vector>
#include <map>
#include "Position.hpp"
#include "../utils/Colors.h"

class Block {
public :
    Block();
    int id;
    std::map<int,std::vector<Position>> cells;
    void Move(int row, int col);
    bool isActive;
    int cellSize;
    int rotationState;
    std::vector<Color> colors;
    int rowOffset;
    int colOffset;
    void Draw();
    bool CheckForCollision(int grd[20][10]);


    std::vector<Position> GetCellPositions();
};


#endif //TETRIS_BLOCK_HPP

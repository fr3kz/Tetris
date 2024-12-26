//
// Created by Artur on 25/12/2024.
//

#include "Blocks.hpp"
#include "Block.hpp"
#include "Position.hpp"

class LBock : public  Block{
public:
    LBock(){
        id=1;
        cells[0] = {Position(1, 2), Position(1, 0), Position(1, 1), Position(1, 3)};
        cells[1] = {Position(0, 1), Position(1, 1), Position(2, 1), Position(2, 2)};
        cells[2] = {Position(1, 0), Position(1, 1), Position(1, 2), Position(2, 1)};
        cells[3] = {Position(0, 0), Position(0, 1), Position(1, 1), Position(2, 1)};
        cells[4] = {Position(2, 1), Position(0, 1), Position(1, 1), Position(2, 1)};

        Move(0,3);
    }
};


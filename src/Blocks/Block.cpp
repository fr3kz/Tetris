//
// Created by Artur on 25/12/2024.
//

#include "Block.hpp"
Block::Block() {
    cellSize = 30;
    rotationState = 0;
    colors = GetCellColors();
    rowOffset = 0;
    colOffset=0;
    isActive = true;
}

void Block::Draw(){
    std::vector<Position> tiles = GetCellPositions();

    for(Position item : tiles){
        DrawRectangle(item.col * cellSize + 1, item.row * cellSize + 1, cellSize - 1, cellSize - 1, colors[id]);

    }
}

void Block::Move(int row, int col) {
        colOffset += col;
    rowOffset += row;

}

std::vector<Position> Block::GetCellPositions(){
    std::vector<Position> tiles = cells[rotationState];
    std::vector<Position> movedTiles;
    for (Position item: tiles) {
        Position newpos = Position(item.row + rowOffset, item.col + colOffset);
        movedTiles.push_back(newpos);
    }
    return movedTiles;


}

bool Block::CheckForCollision( int grd[20][10]) {
    for (auto pp: GetCellPositions()) {
        if(pp.row+rowOffset == 19){
            return true;
        }
    }
    return false;
}

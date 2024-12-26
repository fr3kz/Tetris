//
// Created by Artur on 26/12/2024.
//

#ifndef TETRIS_GAME_HPP
#define TETRIS_GAME_HPP

#include "../Blocks/Blocks.cpp"
#include "../Grid.hpp"



class Game {
public:
    Game();
    Grid grid;
    int moves;
    std::vector<Block> blocks;
    Block block;
    static std::vector<Block> blocks_def();
    Block get_next_block();
    void MoveDown();
    void MoveLeft();
    void MoveRight();
    void Rotate();
    void DrawBlocks();
    void InitGame();
    void CheckIfBlockActive(Block block);
    void CheckForCollision(Block BLock,int row,int col);
};


#endif //TETRIS_GAME_HPP

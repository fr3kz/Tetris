//
// Created by Artur on 26/12/2024.
//

#include "Game.hpp"
#include <iostream>

Game::Game() {
   InitGame();

}

std::vector<Block> Game::blocks_def() {
    return {LBock()};
}


Block Game::get_next_block(){
    //add random position
    block = LBock();
    if(!blocks.empty()){
        blocks.end()->isActive = false;
    }

    return block;
}
void Game::CheckIfBlockActive(Block bl){
    if(!bl.isActive){
        blocks.push_back(get_next_block());
    }
}
void Game::MoveDown() {

    for (auto &bl: blocks) {
        if(bl.isActive){
            //sprawdzenie czy moze zrobic ruch
           // if (!grid.CheckCollison(bl,1,0)){
           if(!grid.CheckGridBorder(block,1,0)){
                grid.UpdateGrid(bl,1,0);
                bl.Move(1,0);
            }else{
                bl.isActive = false;
                blocks.push_back(get_next_block());

            }


        }


        }
    }


void Game::MoveLeft() {

    for (auto &bl: blocks) {
        if(bl.isActive){
            bl.Move(0,-1);
            CheckIfBlockActive(bl);
        }
    }

}

void Game::MoveRight() {

    for (auto &bl: blocks) {
        if(bl.isActive){
            bl.Move(0,1);
            CheckIfBlockActive(bl);
        }
    }

}


void Game::CheckForCollision(Block bl,int row,int col) {
    bl.CheckForCollision(grid.grid);
}


void Game::InitGame() {
    grid = Grid();
    moves = 0;
    blocks.push_back(get_next_block());
}

void Game::DrawBlocks() {
    grid.Draw();

    for(auto obj : blocks){
        //obj.Move(2,4);
        obj.Draw();
    }
}
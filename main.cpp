//
//  main.cpp
//  TicTacToe
//
//  Created by Liam Giraldo on 12/5/23.
//

#include <iostream>
#include "Player.h"
#include "GameBoard.h"
#include "TicTacToe.h"

int main(int argc, const char * argv[]) {
    
    //I can't figure out how to get the user to input a size.

    
    TicTacToe<4> game;
    game.setupPlayers();
    game.play();
    
    return 0;
};

//
//  Player.h
//  TicTacToe
//
//  Created by Liam Giraldo on 12/5/23.
//

#ifndef Player_h
#define Player_h

#include <stdio.h>
#include <iostream>

//a player has a symbol for playing
//a player can be a computer or not (cpu can inherit from player)
//it can be a player's turn or not a player's turn

class Player{
public:
    Player(std::string input);
    char getSymbol();
    void setPlayerSymbol();
    void setPlayerTurn(bool turn);
    bool getPlayerTurn();
    std::string getPlayerName();
private:
    //Each player has a symbol, a name, and the state of their turn.
    char symbol;
    std::string name;
    bool isTurn = false;
};

#endif /* Player_h */

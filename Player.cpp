//
//  Player.cpp
//  TicTacToe
//
//  Created by Liam Giraldo on 12/5/23.
//

#include "Player.h"
#include <iostream>

Player::Player(std::string input){
    //honestly the whole name this is pretty useless.
    name = input;
    //symbol is all that really matters.
    setPlayerSymbol();
}
char Player::getSymbol(){
    return symbol;
}
void Player::setPlayerSymbol(){
    char c;
    std::cout << "Select " << name << "'s symbol\n";
    if(std::cin >> c){
        //checking character input is weird. It just uses the last one in the stream. I need a better way to check.
        //I should probably be using the getters and setters instead..
        symbol = c;
        std::cout << name << "'s symbol is now " << symbol << "\n";
    }
    else{
        std::cout << "Invalid symbol! Please enter another! \n";
        setPlayerSymbol();
    }
}
void Player::setPlayerTurn(bool turn){
    isTurn = turn;
}
bool Player::getPlayerTurn(){
    return isTurn;
};
std::string Player::getPlayerName(){
    return name;
}

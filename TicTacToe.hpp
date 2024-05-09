//
//  TicTacToe.h
//  TicTacToe
//
//  Created by Liam Giraldo on 12/5/23.
//

#ifndef TicTacToe_h
#define TicTacToe_h
#define GameBoard_h

#include <stdio.h>

#endif /* TicTacToe_h */
template<int size>
class TicTacToe{
public:
    void setupPlayer1();
    void setupPlayer2();
    void play();
    void player1Turn();
    void player2Turn();
    bool gameOver();
    void showWinner();
private:
    template<int width, int height>;
    GameBoard<size, size> board;
};

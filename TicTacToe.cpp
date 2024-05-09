////
////  TicTacToe.cpp
////  TicTacToe
////
////  Created by Liam Giraldo on 12/5/23.
////
//
//#include <stdio.h>
//#include <iostream>
//#include "TicTacToe.h"
//
//template<int size>
//TicTacToe<size>::TicTacToe(){
//    
//}
//
//template<int size>
//void TicTacToe<size>::setupPlayers(){
//    //I trashed setupPlayer1 and 2 because I wanted to allow as many players as possible.
//    std::cout << "How many player's will be in this game?\n";
//    int amount = 0;
//    //Check if the input is valid and there wont be less than 2 players
//    while (!(std::cin >> amount) || amount < 2) {
//        std::cin.clear();
//        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
//        std::cout << "Invalid input! Please enter a valid number of players: ";
//    }
//    //Add players to players vector
//    for(int i = 0; i < amount; i++){
//        //I really don't think a name is necessary, I could just call them "Player %symbol" instead. Too late!
//        players.push_back(Player("Player " + std::to_string(i)));
//    }
//    std::cout << "Here is who will play!\n";
//    showPlayers();
//    std::cout << "Who will get to go first?\n";
//    std::cout << "(it will go in order)\n";
//    int starter = 0;
//    //I allow the user to pick who gets to go first. A more advanced version of this would allow the user to rearrange a queue for their liking. I am not fucking doing that.
//    while (!(std::cin >> starter) || starter < 0 || starter >= amount) {
//        std::cin.clear();
//        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
//        std::cout << "Invalid input! Please enter a valid player number: ";
//    }
//    //only one player at a time should have a turn.
//    players[starter].setPlayerTurn(true);
//}
//template<int size>
//void TicTacToe<size>::play(){
//    //if the game isn't over, keep the turns going.
//    while(gameOver() == false){
//        playerTurn();
//    }
//}
//
//template<int size>
//void TicTacToe<size>::playerTurn(){
//    std::cin.clear();
//    std::cin.ignore();
//    //every turn, display the board.
//    board.display();
//    for(int i = 0; i < players.size(); i++){
//        //Find who's turn it is.
//        if(players[i].getPlayerTurn() == true){
//            int x;
//            int y;
//            std::cout << "It's " << players[i].getPlayerName() << "'s " << "(" << players[i].getSymbol() << ")" << " turn.\n";
//            std::cout << "Select an x coordinate\n";
//            //This is a shitty way of checking for valid input. I probably should not be nesting like this.
//            
//            //Get the player's x and y coordinates.
//            if(std::cin >> x && x < board.getWidth() && x >= 0){
//                std::cout << "Select a y coordinate\n";
//                if(std::cin >> y && y < board.getHeight() && y >= 0){
//                    //If the xy they chose is invalid, don't use it.
//                    //Go back one i to re-prompt the current player.
//                    //I check for y,x instead of x,y because of the way I handled user input back in GameBoard. See? I told you it would come back to bite me.
//                    if(board.isOccupied(y, x)){
//                        i--;
//                        std::cout<<"That space is occupied. Please enter a valid input \n";
//                    }
//                    //If the xy is valid, place the piece, set the players turn to false, and set the next player in the queue's turn to true.
//                    else{
//                        board.placePiece(players[i].getSymbol(), x,y);
//                        players[i].setPlayerTurn(false);
//                        if(i < players.size()-1){
//                            players[i+1].setPlayerTurn(true);
//                            break;
//                        }
//                        //If we are at the end of the queue, return to the start.
//                        else{
//                            players[0].setPlayerTurn(true);
//                            break;
//                        }
//                    }
//                }
//                //x input check
//                else{
//                    std::cin.clear();
//                    std::cin.ignore();
//                    std::cout << "Invalid input for y coordinate. Please enter a valid integer.\n";
//                    i--;
//                }
//            }
//            //y input check
//            else{
//                std::cin.clear();
//                std::cin.ignore();
//                std::cout << "Invalid input for x coordinate. Please enter a valid integer.\n";
//                i--;
//            }
//        }
//    }
//}
//
//template<int size>
//bool TicTacToe<size>::gameOver(){
//    //if the board is full the game is over
//    if(board.boardFull() == true){
//        std::cout << "Tie! No one wins!\n";
//        return true;
//    }
//    //checkWinner returns -1 if no player has won yet.
//    if(checkWinner() != -1){
//        showWinner(checkWinner());
//        return true;
//    }
//    return false;
//}
//
//template<int size>
//void TicTacToe<size>::showWinner(int i){
//    //Display the final board and announce the winner.
//    //the i input is the index of the winning player in the players vector.
//    board.display();
//    std::cout << players[i].getPlayerName() << " (" << players[i].getSymbol() << ")" << " won!\n";
//}
//
//template<int size>
//int TicTacToe<size>::checkWinner(){
//    /*
//     The way that this works is that we assume by default the winning condition is met for the current player. If there is any symbol that is not the symbol of the current player in the direction we are trying to check, then we know that the current player has not met a winning condition.
//     */
//    
//    //This checks for horizontal / vertical wins. No diagonals.
//    for(int i = 0; i < players.size(); i++){
//        Player currentPlayer = players[i];
//        char currentSymbol = currentPlayer.getSymbol();
//        //I keep using height and width but they are the same. Oh well.
//        for(int j = 0; j < board.getHeight(); j++){
//            bool rowWin = true;
//            bool colWin = true;
//            for(int k = 0; k < board.getWidth(); k++){
//                if(board.getPiece(j,k) != currentSymbol){
//                    rowWin = false;
//                }
//                if(board.getPiece(k,j) != currentSymbol){
//                    colWin = false;
//                }
//            }
//            if(rowWin || colWin){
//                //i is the index of the winning player
//                return i;
//            }
//        }
//        //below code checks for diagonal win
//        //left diagonal (pointing to top left)
//        bool ldWin = true;
//        //right diagonal (pointing to top right)
//        bool rdWin = true;
//        for(int j = 0; j < board.getHeight(); j++){
//            //check left diag
//            if(board.getPiece(j,j) != currentSymbol){
//                ldWin = false;
//            }
//            //check right diag
//            if(board.getPiece(board.getHeight()-j-1,j) != currentSymbol){
//                rdWin = false;
//            }
//        }
//        if(ldWin || rdWin){
//            //I is the index of the winning player in the vector.
//            return i;
//        }
//    }
//    //-1 just means there is no winner yet
//    return -1;
//}
//
//template<int size>
//void TicTacToe<size>::showPlayers(){
//    //self explanatory
//    for(int i = 0; i < players.size(); i++){
//        std::cout<< i << ") " << players[i].getPlayerName() << " " << "(" << players[i].getSymbol() << ")\n";
//    }
//}

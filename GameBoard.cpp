////
////  GameBoard.cpp
////  TicTacToe
////
////  Created by Liam Giraldo on 12/5/23.
////
//
//#include <stdio.h>
//#include <iostream>
//#include "GameBoard.h"
//
//
//template<int width, int height>
//GameBoard<width,height>::GameBoard(){
//    //Fill board with -'s upon construction
//    for(int i = 0; i < height; i++){
//        for(int j = 0; j < width; j++){
//            board[i][j] = '-';
//        }
//    }
//    //I initially intended on having boards be able to be ANY size
//    //both x and y could have been different, but that was a little too much.
//    //there are some remnants from that still in the code.
//    rows = height;
//    columns = width;
//}
//template<int width, int height>
//char GameBoard<width,height>::getPiece(int x,int y){
//    return board[x][y];
//}
//
//template<int width, int height>
//bool GameBoard<width, height>::isOccupied(int x,int y){
//    //A bit cheap but if it isn't a - it is occupied.
//    return board[x][y] != '-';
//}
//
//template<int width, int height>
//bool GameBoard<width, height>::boardFull(){
//    //if any of the spaces have a - it is not full
//    for(int i = 0; i < height; i++){
//        for(int j = 0; j < width; j++){
//            if(isOccupied(i, j) == false){
//                return false;
//            };
//        }
//    }
//    std::cout << "Board full!\n";
//    return true;
//}
//
//template<int width, int height>
//void GameBoard<width, height>::placePiece(char piece,int x,int y){
//    //i'm doing this because it makes more sense from an x,y plane perspective.
//    //this does come back to bite me in the ass later.
//    board[y][x] = piece;
//}
//
//template<int width, int height>
//void GameBoard<width, height>::display(){
//    //Fancy spacing and what not, but breaks for numbers greater than 9 because I don't account for the extra character. Too lazy.
//    
//    //I have to add extra rows and columns to make it fancy.
//    for(int i = 0; i < height+2; i++){
//        //The y character is in the middle row
//        if(i == int(height/2)){
//            std::cout << "y  " << i;
//        }
//        else if(i < height){
//            std::cout << "   " << i;
//        }
//        else{
//            std::cout << "    ";
//        }
//        for(int j = 0; j < width; j++){
//            if(i != height && i != height+1){
//                std::cout << "[" << board[i][j] << "]";
//            }
//            else if(i == height){
//                std::cout << " " << j << " ";
//            }
//            if(i == height+1 && j == int(width/2)){
//                //I add spaces to center the "x" based on the width of the grid.
//                std::string spaces = "";
//                for(int s = 0; s <= int(width/2); s++){
//                    spaces += "  ";
//                }
//                std::cout << spaces << "x";
//            }
//        }
//        std::cout << "\n";
//    }
//}
//template<int width, int height>
////self explanatory
//int GameBoard<width, height>::getWidth(){
//    return columns;
//}
//template<int width, int height>
//int GameBoard<width, height>::getHeight(){
//    return rows;
//}

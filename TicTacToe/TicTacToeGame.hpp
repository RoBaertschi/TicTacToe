//
//  TicTacToeGame.hpp
//  TicTacToe
//
//  Created by Robin Bärtschi on 19.11.21.
//

#ifndef TicTacToeGame_hpp
#define TicTacToeGame_hpp

#include <iostream>
using namespace std;

class TicTacToeGame
{
public:
    TicTacToeGame();
    void playGame();
    
private:
    char board[3][3];
    void clearBoard();
    void printBoard();
};

#endif /* TicTacToeGame_hpp */

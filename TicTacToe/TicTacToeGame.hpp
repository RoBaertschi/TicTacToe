//
//  TicTacToeGame.hpp
//  TicTacToe
//
//  Created by Robin Bärtschi on 19.11.21.
//

#ifndef TicTacToeGame_hpp
#define TicTacToeGame_hpp

#include <stdio.h>
using namespace std;

class TicTacToeGame
{
public:
    TicTacToeGame();
    void clearBoard();
private:
    char board[3][3];
};

#endif /* TicTacToeGame_hpp */

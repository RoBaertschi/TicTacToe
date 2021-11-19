//
//  TicTacToeGame.cpp
//  TicTacToe
//
//  Created by Robin Bärtschi on 19.11.21.
//


#include "TicTacToeGame.hpp"

using namespace std;

TicTacToeGame::TicTacToeGame()
{
    clearBoard();
}

void TicTacToeGame::clearBoard()
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            board[i][j] = ' ';
        }
    }
}

void TicTacToeGame::printBoard()
{
    cout << endl;
    cout << " |1 2 3|\n";
    for (int i = 0; i < 3; i++) {
        cout << " -------\n";
        cout << i+1 << "|" << board[i][0] << "|" << board[i][1] << "|" << board[i][2] << "|" << endl;
    }
    cout << " -------\n";
}

void TicTacToeGame::playGame()
{
    printBoard();
}

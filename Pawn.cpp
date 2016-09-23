//
//  Pawn.cpp
//  Chessgame
//
//  Created by Daniel Mora on 10/8/15.
//  Copyright © 2015 Daniel Mora. All rights reserved.
//

#include "Chess.h"

bool Chess::MovePawn(int player, int currentrow, int currentcol, int newrow, int newcol)
{
    if (chessboard[currentrow][currentcol] == "\u2659" || chessboard[currentrow][currentcol] == "\u265F")
    {
        if (player == 1)
        {
            if (chessboard[newrow][newcol] == " ") //Checks for open space
            {
                if (newrow - currentrow == -1) //Moves foward
                {
                    chessboard[newrow][newcol] = "\u2659";
                    chessboard[currentrow][currentcol] = " ";
                    return true;
                }
                else
                {
                    cout << "You can't do that" << endl;
                    return false;
                }
            }
            else if (chessboard[newrow][newcol] == "\u265F" || chessboard[newrow][newcol] == "\u265C" || chessboard[newrow][newcol] == "\u265E" || chessboard[newrow][newcol] == "\u265D" || chessboard[newrow][newcol] == "\u265B" || chessboard[newrow][newcol] == "\u265A") //Checks for enemy pieces
            {
                if (newrow - currentrow == -1 && newcol - currentcol == 1) //Checks for diagonal attacking
                {
                    chessboard[newrow][newcol] = "\u2659";
                    chessboard[currentrow][currentcol] = " ";
                    return true;
                }
                else if (newrow - currentrow == -1 && newcol - currentcol == -1)
                {
                    chessboard[newrow][newcol] = "\u2659";
                    chessboard[currentrow][currentcol] = " ";
                    return true;
                }
                else
                {
                    cout << "You can't do that" << endl;
                    return false;
                }
            }
            else
            {
                cout << "Invaild move or piece" << endl;
                return false;
            }
        }
        else if (player == 2)
        {
            if (chessboard[newrow][newcol] == " ")
            {
                if (newrow - currentrow == 1) //Moves downward
                {
                    chessboard[newrow][newcol] = "\u265F";
                    chessboard[currentrow][currentcol] = " ";
                    return true;
                }
                else
                {
                    cout << "You can't do that" << endl;
                    return false;
                }
            }
            else if (chessboard[newrow][newcol] == "\u2659" || chessboard[newrow][newcol] == "\u2656" || chessboard[newrow][newcol] == "\u2658" || chessboard[newrow][newcol] == "\u2657" || chessboard[newrow][newcol] == "\u2655" || chessboard[newrow][newcol] == "\u2654") //Checks for enemy pieces
            {
                if (newrow - currentrow == 1 && newcol - currentcol == -1)
                {
                    chessboard[newrow][newcol] = "\u265F";
                    chessboard[currentrow][currentcol] = " ";
                    return true;
                }
                else if (newrow - currentrow == 1 && newcol - currentcol == 1) //Checks for diagonal attacking
                {
                    chessboard[newrow][newcol] = "\u265F";
                    chessboard[currentrow][currentcol] = " ";
                    return true;
                }
                else
                {
                    cout << "You can't do that" << endl;
                    return false;
                }
            }
            else
            {
                cout << "Invaild move or piece" << endl;
                return false;
            }
        }
        else
        {
            cout << "Invalid player number" << endl;
            return false;
        }
    }
    else
    {
        cout << "Invalid piece" << endl;
        return false;
    }
    return true;
}

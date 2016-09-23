//
//  King.cpp
//  Chessgame
//
//  Created by Daniel Mora on 10/14/15.
//  Copyright © 2015 Daniel Mora. All rights reserved.
//

#include "Chess.h"

bool Chess::MoveKing(int player, int currentrow, int currentcol, int newrow, int newcol)
{
    if (chessboard[currentrow][currentcol] == "\u2654" || chessboard[currentrow][currentcol] == "\u265A")
    {
        if (player == 1)
        {
            if (chessboard[newrow][newcol] == " ")
            {
                if (newrow - currentrow == -1 && newcol == currentcol) // King moving up
                {
                    chessboard[newrow][newcol] = "\u2654";
                    chessboard[currentrow][currentcol] = " ";
                    return true;
                }
                else if (newrow - currentrow == -1 && newcol - currentcol == 1) //King moving up right
                {
                    chessboard[newrow][newcol] = "\u2654";
                    chessboard[currentrow][currentcol] = " ";
                    return true;
                }
                else if (newrow == currentrow && newcol - currentcol == 1) // King moving right
                {
                    chessboard[newrow][newcol] = "\u2654";
                    chessboard[currentrow][currentcol] = " ";
                    return true;
                }
                else if (newrow - currentrow == 1 && newcol - currentcol == 1) //King moving down right
                {
                    chessboard[newrow][newcol] = "\u2654";
                    chessboard[currentrow][currentcol] = " ";
                    return true;
                }
                else if (newrow - currentrow == 1 && newcol == currentcol) //King moving down
                {
                    chessboard[newrow][newcol] = "\u2654";
                    chessboard[currentrow][currentcol] = " ";
                    return true;
                }
                else if (newrow - currentrow == 1 && newcol - currentcol == -1) //King moving down left
                {
                    chessboard[newrow][newcol] = "\u2654";
                    chessboard[currentrow][currentcol] = " ";
                    return true;
                }
                else if (newrow == currentrow && newcol - currentcol == -1) //King moving left
                {
                    chessboard[newrow][newcol] = "\u2654";
                    chessboard[currentrow][currentcol] = " ";
                    return true;
                }
                else if (newrow - currentrow == -1 && newcol - currentcol == -1) //King moving left up
                {
                    chessboard[newrow][newcol] = "\u2654";
                    chessboard[currentrow][currentcol] = " ";
                    return true;
                }
                else
                {
                    cout << "Invalid move" << endl;
                    return false;
                }
            }
            else if (chessboard[newrow][newcol] == "\u265F" || chessboard[newrow][newcol] == "\u265C" || chessboard[newrow][newcol] == "\u265E" || chessboard[newrow][newcol] == "\u265D" || chessboard[newrow][newcol] == "\u265B" || chessboard[newrow][newcol] == "\u265A")
            {
                if (newrow - currentrow == -1 && newcol == currentcol) // King moving up
                {
                    chessboard[newrow][newcol] = "\u2654";
                    chessboard[currentrow][currentcol] = " ";
                    return true;
                }
                else if (newrow - currentrow == -1 && newcol - currentcol == 1) //King moving up right
                {
                    chessboard[newrow][newcol] = "\u2654";
                    chessboard[currentrow][currentcol] = " ";
                    return true;
                }
                else if (newrow == currentrow && newcol - currentcol == 1) // King moving right
                {
                    chessboard[newrow][newcol] = "\u2654";
                    chessboard[currentrow][currentcol] = " ";
                    return true;
                }
                else if (newrow - currentrow == 1 && newcol - currentcol == 1) //King moving down right
                {
                    chessboard[newrow][newcol] = "\u2654";
                    chessboard[currentrow][currentcol] = " ";
                    return true;
                }
                else if (newrow - currentrow == 1 && newcol == currentcol) //King moving down
                {
                    chessboard[newrow][newcol] = "\u2654";
                    chessboard[currentrow][currentcol] = " ";
                    return true;
                }
                else if (newrow - currentrow == 1 && newcol - currentcol == -1) //King moving down left
                {
                    chessboard[newrow][newcol] = "\u2654";
                    chessboard[currentrow][currentcol] = " ";
                    return true;
                }
                else if (newrow == currentrow && newcol - currentcol == -1) //King moving left
                {
                    chessboard[newrow][newcol] = "\u2654";
                    chessboard[currentrow][currentcol] = " ";
                    return true;
                }
                else if (newrow - currentrow == -1 && newcol - currentcol == -1) //King moving left up
                {
                    chessboard[newrow][newcol] = "\u2654";
                    chessboard[currentrow][currentcol] = " ";
                    return true;
                }
                else
                {
                    cout << "Invalid move" << endl;
                    return false;
                }
            }
            else if (chessboard[newrow][newcol] == "\u2659" || chessboard[newrow][newcol] == "\u2656" || chessboard[newrow][newcol] == "\u2658" || chessboard[newrow][newcol] == "\u2657" || chessboard[newrow][newcol] == "\u2655" || chessboard[newrow][newcol] == "\u2654")
            {
                cout << "Invalid move" << endl;
                return false;
            }
            else
            {
                cout << "That move can't be done" << endl;
                return false;
            }
        }
        else if (player == 2)
        {
            if (chessboard[newrow][newcol] == " ")
            {
                if (newrow - currentrow == -1 && newcol == currentcol) // King moving up
                {
                    chessboard[newrow][newcol] = "\u265A";
                    chessboard[currentrow][currentcol] = " ";
                    return true;
                }
                else if (newrow - currentrow == -1 && newcol - currentcol == 1) //King moving up right
                {
                    chessboard[newrow][newcol] = "\u265A";
                    chessboard[currentrow][currentcol] = " ";
                    return true;
                }
                else if (newrow == currentrow && newcol - currentcol == 1) // King moving right
                {
                    chessboard[newrow][newcol] = "\u265A";
                    chessboard[currentrow][currentcol] = " ";
                    return true;
                }
                else if (newrow - currentrow == 1 && newcol - currentcol == 1) //King moving down right
                {
                    chessboard[newrow][newcol] = "\u265A";
                    chessboard[currentrow][currentcol] = " ";
                    return true;
                }
                else if (newrow - currentrow == 1 && newcol == currentcol) //King moving down
                {
                    chessboard[newrow][newcol] = "\u265A";
                    chessboard[currentrow][currentcol] = " ";
                    return true;
                }
                else if (newrow - currentrow == 1 && newcol - currentcol == -1) //King moving down left
                {
                    chessboard[newrow][newcol] = "\u265A";
                    chessboard[currentrow][currentcol] = " ";
                    return true;
                }
                else if (newrow == currentrow && newcol - currentcol == -1) //King moving left
                {
                    chessboard[newrow][newcol] = "\u265A";
                    chessboard[currentrow][currentcol] = " ";
                    return true;
                }
                else if (newrow - currentrow == -1 && newcol - currentcol == -1) //King moving left up
                {
                    chessboard[newrow][newcol] = "\u265A";
                    chessboard[currentrow][currentcol] = " ";
                    return true;
                }
                else
                {
                    cout << "Invalid move" << endl;
                    return false;
                }
            }
            else if (chessboard[newrow][newcol] == "\u2659" || chessboard[newrow][newcol] == "\u2656" || chessboard[newrow][newcol] == "\u2658" || chessboard[newrow][newcol] == "\u2657" || chessboard[newrow][newcol] == "\u2655" || chessboard[newrow][newcol] == "\u2654")
            {
                if (newrow - currentrow == -1 && newcol == currentcol) // King moving up
                {
                    chessboard[newrow][newcol] = "\u265A";
                    chessboard[currentrow][currentcol] = " ";
                    return true;
                }
                else if (newrow - currentrow == -1 && newcol - currentcol == 1) //King moving up right
                {
                    chessboard[newrow][newcol] = "\u265A";
                    chessboard[currentrow][currentcol] = " ";
                    return true;
                }
                else if (newrow == currentrow && newcol - currentcol == 1) // King moving right
                {
                    chessboard[newrow][newcol] = "\u265A";
                    chessboard[currentrow][currentcol] = " ";
                    return true;
                }
                else if (newrow - currentrow == 1 && newcol - currentcol == 1) //King moving down right
                {
                    chessboard[newrow][newcol] = "\u265A";
                    chessboard[currentrow][currentcol] = " ";
                    return true;
                }
                else if (newrow - currentrow == 1 && newcol == currentcol) //King moving down
                {
                    chessboard[newrow][newcol] = "\u265A";
                    chessboard[currentrow][currentcol] = " ";
                    return true;
                }
                else if (newrow - currentrow == 1 && newcol - currentcol == -1) //King moving down left
                {
                    chessboard[newrow][newcol] = "\u265A";
                    chessboard[currentrow][currentcol] = " ";
                    return true;
                }
                else if (newrow == currentrow && newcol - currentcol == -1) //King moving left
                {
                    chessboard[newrow][newcol] = "\u265A";
                    chessboard[currentrow][currentcol] = " ";
                    return true;
                }
                else if (newrow - currentrow == -1 && newcol - currentcol == -1) //King moving left up
                {
                    chessboard[newrow][newcol] = "\u265A";
                    chessboard[currentrow][currentcol] = " ";
                    return true;
                }
                else
                {
                    cout << "Invalid move" << endl;
                    return false;
                }
            }
            else if (chessboard[newrow][newcol] == "\u265F" || chessboard[newrow][newcol] == "\u265C" || chessboard[newrow][newcol] == "\u265E" || chessboard[newrow][newcol] == "\u265D" || chessboard[newrow][newcol] == "\u265B" || chessboard[newrow][newcol] == "\u265A")
            {
                cout << "Can't move to a friendly occupied space" << endl;
                return false;
            }
            else
            {
                cout << "Move can't be done" << endl;
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
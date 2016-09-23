//
//  Horse.cpp
//  Chessgame
//
//  Created by Daniel Mora on 10/12/15.
//  Copyright © 2015 Daniel Mora. All rights reserved.
//

#include "Chess.h"

bool Chess::MoveKnight(int player, int currentrow, int currentcol, int newrow, int newcol)
{
    if (chessboard[currentrow][currentcol] == "\u2658" || chessboard[currentrow][currentcol] == "\u265E")
    {
        if (player == 1)
        {
            if (chessboard[newrow][newcol] == " ")
            {
                if (currentrow - newrow == 2 && newcol - currentcol == -1) //Knight moving up 2 left 1
                {
                    chessboard[newrow][newcol] = "\u2658";
                    chessboard[currentrow][currentcol] = " ";
                    return true;
                }
                else if (currentrow - newrow == 2 && newcol - currentcol == 1) //Knight moving up 2 right 1
                {
                    chessboard[newrow][newcol] = "\u2658";
                    chessboard[currentrow][currentcol] = " ";
                    return true;
                }
                else if (currentrow - newrow == -2 && newcol - currentcol == -1) //Knight moving down 2 left 1
                {
                    chessboard[newrow][newcol] = "\u2658";
                    chessboard[currentrow][currentcol] = " ";
                    return true;
                }
                else if (currentrow - newrow == -2 && newcol - currentcol == 1) //Knight moving down 2 right 1
                {
                    chessboard[newrow][newcol] = "\u2658";
                    chessboard[currentrow][currentcol] = " ";
                    return true;
                }
                else if (currentrow - newrow == 1 &&  newcol - currentcol == -2) //Knight moving up 1 left 2
                {
                    chessboard[newrow][newcol] = "\u2658";
                    chessboard[currentrow][currentcol] = " ";
                    return true;
                }
                else if (currentrow - newrow == 1 && newcol - currentcol == 2) //Knight moving up 1 right 2
                {
                    chessboard[newrow][newcol] = "\u2658";
                    chessboard[currentrow][currentcol] = " ";
                    return true;
                }
                else if (currentrow - newrow == -1 && newcol - currentcol == -2) //Knight moving down 1 left 2
                {
                    chessboard[newrow][newcol] = "\u2658";
                    chessboard[currentrow][currentcol] = " ";
                    return true;
                }
                else if (currentrow - newrow == -1 && newcol - currentcol == 2) //Knight moving down 1 right 2
                {
                    chessboard[newrow][newcol] = "\u2658";
                    chessboard[currentrow][currentcol] = " ";
                    return true;
                }
                else
                {
                    cout << "That moving can't be done" << endl;
                    return false;
                }
            }
            else if (chessboard[newrow][newcol] == "\u265F" || chessboard[newrow][newcol] == "\u265C" || chessboard[newrow][newcol] == "\u265E" || chessboard[newrow][newcol] == "\u265D" || chessboard[newrow][newcol] == "\u265B" || chessboard[newrow][newcol] == "\u265A")
            {
                if (currentrow - newrow == 2 && newcol - currentcol == -1) //Knight moving up 2 left 1
                {
                    chessboard[newrow][newcol] = "\u2658";
                    chessboard[currentrow][currentcol] = " ";
                    return true;
                }
                else if (currentrow - newrow == 2 && newcol - currentcol == 1) //Knight moving up 2 right 1
                {
                    chessboard[newrow][newcol] = "\u2658";
                    chessboard[currentrow][currentcol] = " ";
                    return true;
                }
                else if (currentrow - newrow == -2 && newcol - currentcol == -1) //Knight moving down 2 left 1
                {
                    chessboard[newrow][newcol] = "\u2658";
                    chessboard[currentrow][currentcol] = " ";
                    return true;
                }
                else if (currentrow - newrow == -2 && newcol - currentcol == 1) //Knight moving down 2 right 1
                {
                    chessboard[newrow][newcol] = "\u2658";
                    chessboard[currentrow][currentcol] = " ";
                    return true;
                }
                else if (currentrow - newrow == 1 &&  newcol - currentcol == -2) //Knight moving up 1 left 2
                {
                    chessboard[newrow][newcol] = "\u2658";
                    chessboard[currentrow][currentcol] = " ";
                    return true;
                }
                else if (currentrow - newrow == 1 && newcol - currentcol == 2) //Knight moving up 1 right 2
                {
                    chessboard[newrow][newcol] = "\u2658";
                    chessboard[currentrow][currentcol] = " ";
                    return true;
                }
                else if (currentrow - newrow == -1 && newcol - currentcol == -2) //Knight moving down 1 left 2
                {
                    chessboard[newrow][newcol] = "\u2658";
                    chessboard[currentrow][currentcol] = " ";
                    return true;
                }
                else if (currentrow - newrow == -1 && newcol - currentcol == 2) //Knight moving down 1 right 2
                {
                    chessboard[newrow][newcol] = "\u2658";
                    chessboard[currentrow][currentcol] = " ";
                    return true;
                }
                else
                {
                    cout << "That moving can't be done" << endl;
                    return false;
                }
            }
            else if (chessboard[newrow][newcol] == "\u2659" || chessboard[newrow][newcol] == "\u2656" || chessboard[newrow][newcol] == "\u2658" || chessboard[newrow][newcol] == "\u2657" || chessboard[newrow][newcol] == "\u2655" || chessboard[newrow][newcol] == "\u2654")
            {
                cout << "You can't move it to a friendly occupied space" << endl;
                return false;
            }
            else
            {
                cout << "Invaild move or piece" << endl;
            }
        }
        else if (player == 2)
        {
            if (chessboard[newrow][newcol] == " ")
            {
                if (currentrow - newrow == 2 && newcol - currentcol == -1) //Knight moving up 2 left 1
                {
                    chessboard[newrow][newcol] = "\u265E";
                    chessboard[currentrow][currentcol] = " ";
                    return true;
                }
                else if (currentrow - newrow == 2 && newcol - currentcol == 1) //Knight moving up 2 right 1
                {
                    chessboard[newrow][newcol] = "\u265E";
                    chessboard[currentrow][currentcol] = " ";
                    return true;
                }
                else if (currentrow - newrow == -2 && newcol - currentcol == -1) //Knight moving down 2 left 1
                {
                    chessboard[newrow][newcol] = "\u265E";
                    chessboard[currentrow][currentcol] = " ";
                    return true;
                }
                else if (currentrow - newrow == -2 && newcol - currentcol == 1) //Knight moving down 2 right 1
                {
                    chessboard[newrow][newcol] = "\u265E";
                    chessboard[currentrow][currentcol] = " ";
                    return true;
                }
                else if (currentrow - newrow == 1 &&  newcol - currentcol == -2) //Knight moving up 1 left 2
                {
                    chessboard[newrow][newcol] = "\u265E";
                    chessboard[currentrow][currentcol] = " ";
                    return true;
                }
                else if (currentrow - newrow == 1 && newcol - currentcol == 2) //Knight moving up 1 right 2
                {
                    chessboard[newrow][newcol] = "\u265E";
                    chessboard[currentrow][currentcol] = " ";
                    return true;
                }
                else if (currentrow - newrow == -1 && newcol - currentcol == -2) //Knight moving down 1 left 2
                {
                    chessboard[newrow][newcol] = "\u265E";
                    chessboard[currentrow][currentcol] = " ";
                    return true;
                }
                else if (currentrow - newrow == -1 && newcol - currentcol == 2) //Knight moving down 1 right 2
                {
                    chessboard[newrow][newcol] = "\u265E";
                    chessboard[currentrow][currentcol] = " ";
                    return true;
                }
                else
                {
                    cout << "That moving can't be done" << endl;
                    return false;
                }
            }
            else if (chessboard[newrow][newcol] == "\u2659" || chessboard[newrow][newcol] == "\u2656" || chessboard[newrow][newcol] == "\u2658" || chessboard[newrow][newcol] == "\u2657" || chessboard[newrow][newcol] == "\u2655" || chessboard[newrow][newcol] == "\u2654")
            {
                if (currentrow - newrow == 2 && newcol - currentcol == -1) //Knight moving up 2 left 1
                {
                    chessboard[newrow][newcol] = "\u265E";
                    chessboard[currentrow][currentcol] = " ";
                    return true;
                }
                else if (currentrow - newrow == 2 && newcol - currentcol == 1) //Knight moving up 2 right 1
                {
                    chessboard[newrow][newcol] = "\u265E";
                    chessboard[currentrow][currentcol] = " ";
                    return true;
                }
                else if (currentrow - newrow == -2 && newcol - currentcol == -1) //Knight moving down 2 left 1
                {
                    chessboard[newrow][newcol] = "\u265E";
                    chessboard[currentrow][currentcol] = " ";
                    return true;
                }
                else if (currentrow - newrow == -2 && newcol - currentcol == 1) //Knight moving down 2 right 1
                {
                    chessboard[newrow][newcol] = "\u265E";
                    chessboard[currentrow][currentcol] = " ";
                    return true;
                }
                else if (currentrow - newrow == 1 &&  newcol - currentcol == -2) //Knight moving up 1 left 2
                {
                    chessboard[newrow][newcol] = "\u265E";
                    chessboard[currentrow][currentcol] = " ";
                    return true;
                }
                else if (currentrow - newrow == 1 && newcol - currentcol == 2) //Knight moving up 1 right 2
                {
                    chessboard[newrow][newcol] = "\u265E";
                    chessboard[currentrow][currentcol] = " ";
                    return true;
                }
                else if (currentrow - newrow == -1 && newcol - currentcol == -2) //Knight moving down 1 left 2
                {
                    chessboard[newrow][newcol] = "\u265E";
                    chessboard[currentrow][currentcol] = " ";
                    return true;
                }
                else if (currentrow - newrow == -1 && newcol - currentcol == 2) //Knight moving down 1 right 2
                {
                    chessboard[newrow][newcol] = "\u265E";
                    chessboard[currentrow][currentcol] = " ";
                    return true;
                }
                else
                {
                    cout << "That moving can't be done" << endl;
                    return false;
                }
            }
            else if (chessboard[newrow][newcol] == "\u265F" || chessboard[newrow][newcol] == "\u265C" || chessboard[newrow][newcol] == "\u265E" || chessboard[newrow][newcol] == "\u265D" || chessboard[newrow][newcol] == "\u265B" || chessboard[newrow][newcol] == "\u265A")
            {
                cout << "You can't move it to a friendly occupied space" << endl;
                return false;
            }
            else
            {
                cout << "Invaild move or piece" << endl;
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
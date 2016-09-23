//
//  Bishop.cpp
//  Chessgame
//
//  Created by Daniel Mora on 10/13/15.
//  Copyright © 2015 Daniel Mora. All rights reserved.
//

#include "Chess.h"

bool Chess::MoveBishop(int player, int currentrow, int currentcol, int newrow, int newcol)
{
    if (chessboard[currentrow][currentcol] == "\u2657" || chessboard[currentrow][currentcol] == "\u265D")
    {
        if (player == 1)
        {
            if (chessboard[newrow][newcol] == " ")
            {
                if (newrow < currentrow && newcol > currentcol) //Bishop moves up right
                {
                    for (int i = newrow-1; i < currentrow; i++)
                    {
                        for (int j = newcol+1; j > currentcol; j--)
                        {
                            if (chessboard[i][j] == "\u2659" || chessboard[i][j] == "\u2656" || chessboard[i][j] == "\u2658" || chessboard[i][j] == "\u2657" || chessboard[i][j] == "\u2655" || chessboard[i][j] == "\u2654" || chessboard[i][j] == "\u265F" || chessboard[i][j] == "\u265C" || chessboard[i][j] == "\u265E" || chessboard[i][j] == "\u265D" || chessboard[i][i] == "\u265B" || chessboard[i][j] == "\u265A")
                            {
                                cout << "Friendly piece in the way!" << endl;
                                return false;
                            }
                        }
                    }
                    chessboard[newrow][newcol] = "\u2657";
                    chessboard[currentrow][currentcol] = " ";
                    return true;
                }
                else if (newrow < currentrow && newcol < currentcol)
                {
                    for (int x = newrow+1; x < currentrow; x++) //Bishop moves up left
                    {
                        for (int y = newcol+1; y < currentcol; y++)
                        {
                            if (chessboard[x][y] == "\u2659" || chessboard[x][y] == "\u2656" || chessboard[x][y] == "\u2658" || chessboard[x][y] == "\u2657" || chessboard[x][y] == "\u2655" || chessboard[x][y] == "\u2654" || chessboard[x][y] == "\u265F" || chessboard[x][y] == "\u265C" || chessboard[x][y] == "\u265E" || chessboard[x][y] == "\u265D" || chessboard[x][y] == "\u265B" || chessboard[x][y] == "\u265A")
                            {
                                cout << "Friendly piece in the way!" << endl;
                                return false;
                            }
                        }
                    }
                    chessboard[newrow][newcol] = "\u2657";
                    chessboard[currentrow][currentcol] = " ";
                    return true;
                }
                else if (newrow > currentrow && newcol < currentcol)
                {
                    for (int g = newrow-1; g > currentrow; g--) //Bishop moves down left
                    {
                        for (int h = newcol+1; h < currentcol; h++)
                        {
                            if (chessboard[g][h] == "\u2659" || chessboard[g][h] == "\u2656" || chessboard[g][h] == "\u2658" || chessboard[g][h] == "\u2657" || chessboard[g][h] == "\u2655" || chessboard[g][h] == "\u2654" || chessboard[g][h] == "\u265F" || chessboard[g][h] == "\u265C" || chessboard[g][h] == "\u265E" || chessboard[g][h] == "\u265D" || chessboard[g][h] == "\u265B" || chessboard[g][h] == "\u265A")
                            {
                                cout << "Friendly piece in the way!" << endl;
                                return false;
                            }
                        }
                    }
                    chessboard[newrow][newcol] = "\u2657";
                    chessboard[currentrow][currentcol] = " ";
                    return true;
                }
                else if (newrow > currentrow && newcol > currentcol)
                {
                    for (int o = newrow-1; o > currentrow; o--) //Bishop moves down right
                    {
                        for (int k = newcol-1; k > currentcol; k--)
                        {
                            if (chessboard[o][k] == "\u2659" || chessboard[o][k] == "\u2656" || chessboard[o][k] == "\u2658" || chessboard[o][k] == "\u2657" || chessboard[o][k] == "\u2655" || chessboard[o][k] == "\u2654" || chessboard[o][k] == "\u265F" || chessboard[o][k] == "\u265C" || chessboard[o][k] == "\u265E" || chessboard[o][k] == "\u265D" || chessboard[o][k] == "\u265B" || chessboard[o][k] == "\u265A")
                            {
                                cout << "Friendly piece in the way!" << endl;
                                return false;
                            }
                        }
                    }
                    chessboard[newrow][newcol] = "\u2657";
                    chessboard[currentrow][currentcol] = " ";
                    return true;
                }
                else
                {
                    cout << "That move can't be done" << endl;
                    return false;
                }
            }
            else if (chessboard[newrow][newcol] == "\u265F" || chessboard[newrow][newcol] == "\u265C" || chessboard[newrow][newcol] == "\u265E" || chessboard[newrow][newcol] == "\u265D" || chessboard[newrow][newcol] == "\u265B" || chessboard[newrow][newcol] == "\u265A")
            {
                if (newrow < currentrow && newcol > currentcol) //Bishop moves up right
                {
                    for (int i = newrow-1; i < currentrow; i++)
                    {
                        for (int j = newcol+1; j > currentcol; j--)
                        {
                            
                            if (chessboard[i][j] == "\u2659" || chessboard[i][j] == "\u2656" || chessboard[i][j] == "\u2658" || chessboard[i][j] == "\u2657" || chessboard[i][j] == "\u2655" || chessboard[i][j] == "\u2654" || chessboard[i][j] == "\u265F" || chessboard[i][j] == "\u265C" || chessboard[i][j] == "\u265E" || chessboard[i][j] == "\u265D" || chessboard[i][j] == "\u265B" || chessboard[i][j] == "\u265A")
                            {
                                cout << "Friendly piece in the way!" << endl;
                                return false;
                            }
                        }
                    }
                    chessboard[newrow][newcol] = "\u2657";
                    chessboard[currentrow][currentcol] = " ";
                    return true;
                }
                else if (newrow < currentrow && newcol < currentcol)
                {
                    for (int x = newrow+1; x > currentrow; x--) //Bishop moves up left
                    {
                        for (int y = newcol+1; y > currentcol; y--)
                        {
                            if (chessboard[x][y] == "\u2659" || chessboard[x][y] == "\u2656" || chessboard[x][y] == "\u2658" || chessboard[x][y] == "\u2657" || chessboard[x][y] == "\u2655" || chessboard[x][y] == "\u2654" || chessboard[x][y] == "\u265F" || chessboard[x][y] == "\u265C" || chessboard[x][y] == "\u265E" || chessboard[x][y] == "\u265D" || chessboard[x][y] == "\u265B" || chessboard[x][y] == "\u265A")
                            {
                                cout << "Friendly piece in the way!" << endl;
                                return false;
                            }
                        }
                    }
                    chessboard[newrow][newcol] = "\u2657";
                    chessboard[currentrow][currentcol] = " ";
                    return true;
                }
                else if (newrow > currentrow && newcol < currentcol)
                {
                    for (int g = newrow-1; g > currentrow; g--) //Bishop moves down left
                    {
                        for (int h = newcol+1; h < currentcol; h++)
                        {
                            if (chessboard[g][h] == "\u2659" || chessboard[g][h] == "\u2656" || chessboard[g][h] == "\u2658" || chessboard[g][h] == "\u2657" || chessboard[g][h] == "\u2655" || chessboard[g][h] == "\u2654" || chessboard[g][h] == "\u265F" || chessboard[g][h] == "\u265C" || chessboard[g][h] == "\u265E" || chessboard[g][h] == "\u265D" || chessboard[g][h] == "\u265B" || chessboard[g][h] == "\u265A")
                            {
                                cout << "Friendly piece in the way!" << endl;
                                return false;
                            }
                        }
                    }
                    chessboard[newrow][newcol] = "\u2657";
                    chessboard[currentrow][currentcol] = " ";
                    return true;
                }
                else if (newrow > currentrow && newcol > currentcol)
                {
                    for (int o = newrow+1; o > currentrow; o--)
                    {
                        for (int k = newcol+1; k > currentcol; k--)
                        {
                            if (chessboard[o][k] == "\u2659" || chessboard[o][k] == "\u2656" || chessboard[o][k] == "\u2658" || chessboard[o][k] == "\u2657" || chessboard[o][k] == "\u2655" || chessboard[o][k] == "\u2654" || chessboard[o][k] == "\u265F" || chessboard[o][k] == "\u265C" || chessboard[o][k] == "\u265E" || chessboard[o][k] == "\u265D" || chessboard[o][k] == "\u265B" || chessboard[o][k] == "\u265A")
                            {
                                cout << "Friendly piece in the way!" << endl;
                                return false;
                            }
                        }
                    }
                    chessboard[newrow][newcol] = "\u2657";
                    chessboard[currentrow][currentcol] = " ";
                    return true;
                }
                else
                {
                    cout << "That move can't be done" << endl;
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
                if (newrow < currentrow && newcol > currentcol) //Bishop moves up right
                {
                    for (int i = newrow+1; i < currentrow; i++)
                    {
                        for (int j = newcol-1; j > currentcol; j--)
                        {
                            if (chessboard[i][j] == "\u265F" || chessboard[i][j] == "\u265C" || chessboard[i][j] == "\u265E" || chessboard[i][j] == "\u265D" || chessboard[i][j] == "\u265B" || chessboard[i][j] == "\u265A" || chessboard[i][j] == "\u2659" || chessboard[i][j] == "\u2656" || chessboard[i][j] == "\u2658" || chessboard[i][j] == "\u2657" || chessboard[i][j] == "\u2655" || chessboard[i][j] == "\u2654")
                            {
                                cout << "Friendly piece in the way!" << endl;
                                return false;
                            }
                        }
                    }
                    chessboard[newrow][newcol] = "\u265D";
                    chessboard[currentrow][currentcol] = " ";
                    return true;
                }
                else if (newrow < currentrow && newcol < currentcol)
                {
                    for (int x = newrow+1; x > currentrow; x--) //Bishop moves up left
                    {
                        for (int y = newcol+1; y > currentcol; y--)
                        {
                            if (chessboard[x][y] == "\u265F" || chessboard[x][y] == "\u265C" || chessboard[x][y] == "\u265E" || chessboard[x][y] == "\u265D" || chessboard[x][y] == "\u265B" || chessboard[x][y] == "\u265A" || chessboard[x][y] == "\u2659" || chessboard[x][y] == "\u2656" || chessboard[x][y] == "\u2658" || chessboard[x][y] == "\u2657" || chessboard[x][y] == "\u2655" || chessboard[x][y] == "\u2654")
                            {
                                cout << "Friendly piece in the way!" << endl;
                                return false;
                            }
                        }
                    }
                    chessboard[newrow][newcol] = "\u265D";
                    chessboard[currentrow][currentcol] = " ";
                    return true;
                }
                else if (newrow > currentrow && newcol < currentcol)
                {
                    for (int g = newrow-1; g > currentrow; g--) //Bishop moves down left
                    {
                        for (int h = newcol+1; h < currentcol; h++)
                        {
                            if (chessboard[g][h] == "\u265F" || chessboard[g][h] == "\u265C" || chessboard[g][h] == "\u265E" || chessboard[g][h] == "\u265D" || chessboard[g][h] == "\u265B" || chessboard[g][h] == "\u265A" || chessboard[g][h] == "\u2659" || chessboard[g][h] == "\u2656" || chessboard[g][h] == "\u2658" || chessboard[g][h] == "\u2657" || chessboard[g][h] == "\u2655" || chessboard[g][h] == "\u2654")
                            {
                                cout << "Friendly piece in the way!" << endl;
                                return false;
                            }
                        }
                    }
                    chessboard[newrow][newcol] = "\u265D";
                    chessboard[currentrow][currentcol] = " ";
                    return true;
                }
                else if (newrow > currentrow && newcol > currentcol)
                {
                    for (int o = newrow+1; o > currentrow; o--) //Bishop moves down right
                    {
                        for (int k = newcol+1; k > currentcol; k--)
                        {
                            if (chessboard[o][k] == "\u265F" || chessboard[o][k] == "\u265C" || chessboard[o][k] == "\u265E" || chessboard[o][k] == "\u265D" || chessboard[o][k] == "\u265B" || chessboard[o][k] == "\u265A" || chessboard[o][k] == "\u2659" || chessboard[o][k] == "\u2656" || chessboard[o][k] == "\u2658" || chessboard[o][k] == "\u2657" || chessboard[o][k] == "\u2655" || chessboard[o][k] == "\u2654")
                            {
                                cout << "Friendly piece in the way!" << endl;
                                return false;
                            }
                        }
                    }
                    chessboard[newrow][newcol] = "\u265D";
                    chessboard[currentrow][currentcol] = " ";
                    return true;
                }
                else
                {
                    cout << "That move can't be done" << endl;
                    return false;
                }
            }
            else if (chessboard[newrow][newcol] == "\u2659" || chessboard[newrow][newcol] == "\u2656" || chessboard[newrow][newcol] == "\u2658" || chessboard[newrow][newcol] == "\u2657" || chessboard[newrow][newcol] == "\u2655" || chessboard[newrow][newcol] == "\u2654")
            {
                if (newrow < currentrow && newcol > currentcol) //Bishop moves up right
                {
                    for (int i = newrow+1; i < currentrow; i++)
                    {
                        for (int j = newcol-1; j > currentcol; j--)
                        {
                            if (chessboard[i][j] == "\u265F" || chessboard[i][j] == "\u265C" || chessboard[i][j] == "\u265E" || chessboard[i][j] == "\u265D" || chessboard[i][j] == "\u265B" || chessboard[i][j] == "\u265A" || chessboard[i][j] == "\u2659" || chessboard[i][j] == "\u2656" || chessboard[i][j] == "\u2658" || chessboard[i][j] == "\u2657" || chessboard[i][j] == "\u2655" || chessboard[i][j] == "\u2654")
                            {
                                cout << "Friendly piece in the way!" << endl;
                                return false;
                            }
                        }
                    }
                    chessboard[newrow][newcol] = "\u265D";
                    chessboard[currentrow][currentcol] = " ";
                    return true;
                }
                else if (newrow < currentrow && newcol < currentcol)
                {
                    for (int x = newrow+1; x > currentrow; x--) //Bishop moves up left
                    {
                        for (int y = newcol+1; y > currentcol; y--)
                        {
                            if (chessboard[x][y] == "\u265F" || chessboard[x][y] == "\u265C" || chessboard[x][y] == "\u265E" || chessboard[x][y] == "\u265D" || chessboard[x][y] == "\u265B" || chessboard[x][y] == "\u265A" || chessboard[x][y] == "\u2659" || chessboard[x][y] == "\u2656" || chessboard[x][y] == "\u2658" || chessboard[x][y] == "\u2657" || chessboard[x][y] == "\u2655" || chessboard[x][y] == "\u2654")
                            {
                                cout << "Friendly piece in the way!" << endl;
                                return false;
                            }
                        }
                    }
                    chessboard[newrow][newcol] = "\u265D";
                    chessboard[currentrow][currentcol] = " ";
                    return true;
                }
                else if (newrow > currentrow && newcol < currentcol)
                {
                    for (int g = newrow-1; g > currentrow; g--) //Bishop moves down left
                    {
                        for (int h = newcol+1; h < currentcol; h++)
                        {
                            if (chessboard[g][h] == "\u265F" || chessboard[g][h] == "\u265C" || chessboard[g][h] == "\u265E" || chessboard[g][h] == "\u265D" || chessboard[g][h] == "\u265B" || chessboard[g][h] == "\u265A" || chessboard[g][h] == "\u2659" || chessboard[g][h] == "\u2656" || chessboard[g][h] == "\u2658" || chessboard[g][h] == "\u2657" || chessboard[g][h] == "\u2655" || chessboard[g][h] == "\u2654")
                            {
                                cout << "Friendly piece in the way!" << endl;
                                return false;
                            }
                        }
                    }
                    chessboard[newrow][newcol] = "\u265D";
                    chessboard[currentrow][currentcol] = " ";
                    return true;
                }
                else if (newrow > currentrow && newcol > currentcol)
                {
                    for (int o = newrow+1; o > currentrow; o--)
                    {
                        for (int k = newcol+1; k > currentcol; k--)
                        {
                            if (chessboard[o][k] == "\u265F" || chessboard[o][k] == "\u265C" || chessboard[o][k] == "\u265E" || chessboard[o][k] == "\u265D" || chessboard[o][k] == "\u265B" || chessboard[o][k] == "\u265A" || chessboard[o][k] == "\u2659" || chessboard[o][k] == "\u2656" || chessboard[o][k] == "\u2658" || chessboard[o][k] == "\u2657" || chessboard[o][k] == "\u2655" || chessboard[o][k] == "\u2654")
                            {
                                cout << "Friendly piece in the way!" << endl;
                                return false;
                            }
                        }
                    }
                    chessboard[newrow][newcol] = "\u265D";
                    chessboard[currentrow][currentcol] = " ";
                    return true;
                }
                else
                {
                    cout << "That move can't be done" << endl;
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

//
//  Queen.cpp
//  Chessgame
//
//  Created by Daniel Mora on 10/13/15.
//  Copyright © 2015 Daniel Mora. All rights reserved.
//

#include "Chess.h"

bool Chess::MoveQueen(int player, int currentrow, int currentcol, int newrow, int newcol)
{
    if (chessboard[currentrow][currentcol] == "\u2655" || chessboard[currentrow][currentcol] == "\u265B")
    {
        if (player == 1)
        {
            if (chessboard[newrow][newcol] == " ")
            {
                if (newrow == currentrow && currentcol < newcol)
                {
                    for (int i = newcol-1; i > currentcol; i--) // Queen moving to the right
                    {
                        if (chessboard[newrow][i] == "\u2659" || chessboard[newrow][i] == "\u2656" || chessboard[newrow][i] == "\u2658" || chessboard[newrow][i] == "\u2657" || chessboard[newrow][i] == "\u2655" || chessboard[newrow][i] == "\u2654" || chessboard[newrow][i] == "\u265F" || chessboard[newrow][i] == "\u265C" || chessboard[newrow][i] == "\u265E" || chessboard[newrow][i] == "\u265D" || chessboard[newrow][i] == "\u265B" || chessboard[newrow][i] == "\u265A")
                        {
                            cout << "Friendly piece in the way" << endl;
                            return false;
                        }
                    }
                    chessboard[newrow][newcol] = "\u2655";
                    chessboard[currentrow][currentcol] = " ";
                    return true;
                }
                else if (newrow == currentrow && newcol < currentcol)
                {
                    for (int j = newcol+1; j < currentcol; j++) //Queen moving to the left
                    {
                        if (chessboard[newrow][j] == "\u2659" || chessboard[newrow][j] == "\u2656" || chessboard[newrow][j] == "\u2658" || chessboard[newrow][j] == "\u2657" || chessboard[newrow][j] == "\u2655" || chessboard[newrow][j] == "\u2654" || chessboard[newrow][j] == "\u265F" || chessboard[newrow][j] == "\u265C" || chessboard[newrow][j] == "\u265E" || chessboard[newrow][j] == "\u265D" || chessboard[newrow][j] == "\u265B" || chessboard[newrow][j] == "\u265A")
                        {
                            cout << "Friendly piece in the way" << endl;
                            return false;
                        }
                    }
                    chessboard[newrow][newcol] = "\u2655";
                    chessboard[currentrow][currentcol] = " ";
                    return true;
                }
                else if (newcol == currentcol && currentrow < newrow)
                {
                    for (int x = newrow-1; x > currentrow; x--) //Queen moving down
                    {
                        if (chessboard[x][newcol] == "\u2659" || chessboard[x][newcol] == "\u2656" || chessboard[x][newcol] == "\u2658" || chessboard[x][newcol] == "\u2657" || chessboard[x][newcol] == "\u2655" || chessboard[x][newcol] == "\u2654" || chessboard[x][newcol] == "\u265F" || chessboard[x][newcol] == "\u265C" || chessboard[x][newcol] == "\u265E" || chessboard[x][newcol] == "\u265D" || chessboard[x][newcol] == "\u265B" || chessboard[x][newcol] == "\u265A")
                        {
                            cout << "Friendly piece in the way" << endl;
                            return false;
                        }
                    }
                    chessboard[newrow][newcol] = "\u2655";
                    chessboard[currentrow][currentcol] = " ";
                    return true;
                }
                else if (newcol == currentcol && newrow < currentrow)
                {
                    for (int y = newrow+1; y < currentrow; y++) //Queen moving up
                    {
                        if (chessboard[y][newcol] == "\u2659" || chessboard[y][newcol] == "\u2656" || chessboard[y][newcol] == "\u2658" || chessboard[y][newcol] == "\u2657" || chessboard[y][newcol] == "\u2655" || chessboard[y][newcol] == "\u2654" || chessboard[y][newcol] == "\u265F" || chessboard[y][newcol] == "\u265C" || chessboard[y][newcol] == "\u265E" || chessboard[y][newcol] == "\u265D" || chessboard[y][newcol] == "\u265B" || chessboard[y][newcol] == "\u265A")
                        {
                            cout << "Friendly piece in the way" << endl;
                            return false;
                        }
                    }
                    chessboard[newrow][newcol] = "\u2655";
                    chessboard[currentrow][currentcol] = " ";
                    return true;
                }
                else if (newrow < currentrow && newcol > currentcol) //Queen moves up right
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
                    chessboard[newrow][newcol] = "\u2655";
                    chessboard[currentrow][currentcol] = " ";
                    return true;
                }
                else if (newrow < currentrow && newcol < currentcol)
                {
                    for (int x = newrow+1; x < currentrow; x++) //Queen moves up left
                    {
                        for (int y = newcol-1; y < currentcol; y++)
                        {
                            if (chessboard[x][y] == "\u2659" || chessboard[x][y] == "\u2656" || chessboard[x][y] == "\u2658" || chessboard[x][y] == "\u2657" || chessboard[x][y] == "\u2655" || chessboard[x][y] == "\u2654" || chessboard[x][y] == "\u265F" || chessboard[x][y] == "\u265C" || chessboard[x][y] == "\u265E" || chessboard[x][y] == "\u265D" || chessboard[x][y] == "\u265B" || chessboard[x][y] == "\u265A")
                            {
                                cout << "Friendly piece in the way!" << endl;
                                return false;
                            }
                        }
                    }
                    chessboard[newrow][newcol] = "\u2655";
                    chessboard[currentrow][currentcol] = " ";
                    return true;
                }
                else if (newrow > currentrow && newcol < currentcol)
                {
                    for (int g = newrow-1; g > currentrow; g--) //Queen moves down left
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
                    chessboard[newrow][newcol] = "\u2655";
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
                    chessboard[newrow][newcol] = "\u2655";
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
                if (newrow == currentrow && newcol > currentcol)
                {
                    for (int z = newcol-1; z > currentcol; z--) //Rook moves to the right
                    {
                        if (chessboard[newrow][z] == "\u2659" || chessboard[newrow][z] == "\u2656" || chessboard[newrow][z] == "\u2658" || chessboard[newrow][z] == "\u2657" || chessboard[newrow][z] == "\u2655" || chessboard[newrow][z] == "\u2654" || chessboard[newrow][z] == "\u265F" || chessboard[newrow][z] == "\u265C" || chessboard[newrow][z] == "\u265E" || chessboard[newrow][z] == "\u265D" || chessboard[newrow][z] == "\u265B" || chessboard[newrow][z] == "\u265A")
                        {
                            cout << "Friendly piece in the way" << endl;
                            return false;
                        }
                    }
                    chessboard[newrow][newcol] = "\u2655";
                    chessboard[currentrow][currentcol] = " ";
                    return true;
                }
                else if (newrow == currentrow && newcol < currentcol)
                {
                    for (int a = newcol+1; a < currentcol; a++) //Rook moves to the left
                    {
                        if (chessboard[newrow][a] == "\u2659" || chessboard[newrow][a] == "\u2656" || chessboard[newrow][a] == "\u2658" || chessboard[newrow][a] == "\u2657" || chessboard[newrow][a] == "\u2655" || chessboard[newrow][a] == "\u2654" || chessboard[newrow][a] == "\u265F" || chessboard[newrow][a] == "\u265C" || chessboard[newrow][a] == "\u265E" || chessboard[newrow][a] == "\u265D" || chessboard[newrow][a] == "\u265B" || chessboard[newrow][a] == "\u265A")
                        {
                            cout << "Friendly piece in the way" << endl;
                            return false;
                        }
                    }
                    chessboard[newrow][newcol] = "\u2655";
                    chessboard[currentrow][currentcol] = " ";
                    return true;
                }
                else if (newcol == currentcol && newrow > currentrow)
                {
                    for (int b = newrow-1; b > currentrow; b--) //Rook moving down
                    {
                        if (chessboard[b][newcol] == "\u2659" || chessboard[b][newcol] == "\u2656" || chessboard[b][newcol] == "\u2658" || chessboard[b][newcol] == "\u2657" || chessboard[b][newcol] == "\u2655" || chessboard[b][newcol] == "\u2654" || chessboard[b][newcol] == "\u265F" || chessboard[b][newcol] == "\u265C" || chessboard[b][newcol] == "\u265E" || chessboard[b][newcol] == "\u265D" || chessboard[b][newcol] == "\u265B" || chessboard[b][newcol] == "\u265A")
                        {
                            cout << "Friendly piece in the way" << endl;
                            return false;
                        }
                    }
                    chessboard[newrow][newcol] = "\u2655";
                    chessboard[currentrow][currentcol] = " ";
                    return true;
                }
                else if (currentcol == newcol && newrow < currentrow)
                {
                    for (int c = currentrow+1; c < newrow; c++) //Rook moving up
                    {
                        if (chessboard[c][newcol] == "\u2659" || chessboard[c][newcol] == "\u2656" || chessboard[c][newcol] == "\u2658" || chessboard[c][newcol] == "\u2657" || chessboard[c][newcol] == "\u2655" || chessboard[c][newcol] == "\u2654" || chessboard[c][newcol] == "\u265F" || chessboard[c][newcol] == "\u265C" || chessboard[c][newcol] == "\u265E" || chessboard[c][newcol] == "\u265D" || chessboard[c][newcol] == "\u265B" || chessboard[c][newcol] == "\u265A")
                        {
                            cout << "Friendly piece in the way" << endl;
                            return false;
                        }
                    }
                    chessboard[newrow][newcol] = "\u2655";
                    chessboard[currentrow][currentcol] = " ";
                    return true;
                }
                else if (newrow < currentrow && newcol > currentcol) //Queen moves up right
                {
                    for (int i = newrow+1; i < currentrow; i++)
                    {
                        for (int j = newcol-1; j > currentcol; j--)
                        {
                            if (chessboard[i][j] == "\u2659" || chessboard[i][j] == "\u2656" || chessboard[i][j] == "\u2658" || chessboard[i][j] == "\u2657" || chessboard[i][j] == "\u2655" || chessboard[i][j] == "\u2654" || chessboard[i][j] == "\u265F" || chessboard[i][j] == "\u265C" || chessboard[i][j] == "\u265E" || chessboard[i][j] == "\u265D" || chessboard[i][j] == "\u265B" || chessboard[i][j] == "\u265A")
                            {
                                cout << "Friendly piece in the way!" << endl;
                                return false;
                            }
                        }
                    }
                    chessboard[newrow][newcol] = "\u2655";
                    chessboard[currentrow][currentcol] = " ";
                    return true;
                }
                else if (newrow < currentrow && newcol < currentcol)
                {
                    for (int x = newrow+1; x > currentrow; x++) //Queen moves up left
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
                    chessboard[newrow][newcol] = "\u2655";
                    chessboard[currentrow][currentcol] = " ";
                    return true;
                }
                else if (newrow > currentrow && newcol < currentcol)
                {
                    for (int g = newrow-1; g > currentrow; g--) //Queen moves down left
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
                    chessboard[newrow][newcol] = "\u2655";
                    chessboard[currentrow][currentcol] = " ";
                    return true;
                }
                else if (newrow > currentrow && newcol > currentcol)
                {
                    for (int o = newrow-1; o > currentrow; o--)
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
                    chessboard[newrow][newcol] = "\u2655";
                    chessboard[currentrow][currentcol] = " ";
                    return true;
                }
            }
            
            else if (chessboard[newrow][newcol] == "\u2659" || chessboard[newrow][newcol] == "\u2656" || chessboard[newrow][newcol] == "\u2658" || chessboard[newrow][newcol] == "\u2657" || chessboard[newrow][newcol] == "\u2655" || chessboard[newrow][newcol] == "\u2654")
            {
                cout << "You can't move it to a friendly occupied space" << endl;
                return false;
            }
            else
            {
                cout << "Invalid move" << endl;
                return false;
            }
        }
        else if (player == 2)
        {
            if (chessboard[newrow][newcol] == " ") //Checks for open position
            {
                if (newrow == currentrow && currentcol < newcol)
                {
                    for (int i = newcol-1; i < currentcol; i--) // Queen moving to the right
                    {
                        if (chessboard[newrow][i] == "\u265F" || chessboard[newrow][i] == "\u265C" || chessboard[newrow][i] == "\u265E" || chessboard[newrow][i] == "\u265D" || chessboard[newrow][i] == "\u265B" || chessboard[newrow][i] == "\u265A" || chessboard[newrow][i] == "\u2659" || chessboard[newrow][i] == "\u2656" || chessboard[newrow][i] == "\u2658" || chessboard[newrow][i] == "\u2657" || chessboard[newrow][i] == "\u2655" || chessboard[newrow][i] == "\u2654")
                        {
                            cout << "Friendly piece in the way" << endl;
                            return false;
                        }
                    }
                    chessboard[newrow][newcol] = "\u265B";
                    chessboard[currentrow][currentcol] = " ";
                    return true;
                }
                else if (newrow == currentrow && newcol < currentcol)
                {
                    for (int j = newcol+1; j > currentcol; j++) //Queen moving to the left
                    {
                        if (chessboard[newrow][j] == "\u265F" || chessboard[newrow][j] == "\u265C" || chessboard[newrow][j] == "\u265E" || chessboard[newrow][j] == "\u265D" || chessboard[newrow][j] == "\u265B" || chessboard[newrow][j] == "\u265A" || chessboard[newrow][j] == "\u2659" || chessboard[newrow][j] == "\u2656" || chessboard[newrow][j] == "\u2658" || chessboard[newrow][j] == "\u2657" || chessboard[newrow][j] == "\u2655" || chessboard[newrow][j] == "\u2654")
                        {
                            cout << "Friendly piece in the way" << endl;
                            return false;
                        }
                    }
                    chessboard[newrow][newcol] = "\u265B";
                    chessboard[currentrow][currentcol] = " ";
                    return true;
                }
                else if (newcol == currentcol && currentrow < newrow)
                {
                    for (int x = newrow-1; x > currentrow; x--) //Queen moving down
                    {
                        if (chessboard[x][newcol] == "\u265F" || chessboard[x][newcol] == "\u265C" || chessboard[x][newcol] == "\u265E" || chessboard[x][newcol] == "\u265D" || chessboard[x][newcol] == "\u265B" || chessboard[x][newcol] == "\u265A" || chessboard[x][newcol] == "\u2659" || chessboard[x][newcol] == "\u2656" || chessboard[x][newcol] == "\u2658" || chessboard[x][newcol] == "\u2657" || chessboard[x][newcol] == "\u2655" || chessboard[x][newcol] == "\u2654")
                        {
                            cout << "Friendly piece in the way" << endl;
                            return false;
                        }
                    }
                    chessboard[newrow][newcol] = "\u265B";
                    chessboard[currentrow][currentcol] = " ";
                    return true;
                }
                else if (newcol == currentcol && newrow < currentrow)
                {
                    for (int y = newrow+1; y < currentrow; y++) //Queen moving up
                    {
                        if (chessboard[y][newcol] == "\u265F" || chessboard[y][newcol] == "\u265C" || chessboard[y][newcol] == "\u265E" || chessboard[y][newcol] == "\u265D" || chessboard[y][newcol] == "\u265B" || chessboard[y][newcol] == "\u265A" || chessboard[y][newcol] == "\u2659" || chessboard[y][newcol] == "\u2656" || chessboard[y][newcol] == "\u2658" || chessboard[y][newcol] == "\u2657" || chessboard[y][newcol] == "\u2655" || chessboard[y][newcol] == "\u2654")
                        {
                            cout << "Friendly piece in the way" << endl;
                            return false;
                        }
                    }
                    chessboard[newrow][newcol] = "\u265B";
                    chessboard[currentrow][currentcol] = " ";
                    return true;
                }
                else if (newrow < currentrow && newcol > currentcol) //Queen moves up right
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
                    chessboard[newrow][newcol] = "\u265B";
                    chessboard[currentrow][currentcol] = " ";
                    return true;
                }
                else if (newrow < currentrow && newcol < currentcol)
                {
                    for (int x = newrow+1; x > currentrow; x++) //Queen moves up left
                    {
                        for (int y = newcol+1; y < currentcol; y++)
                        {
                            if (chessboard[x][y] == "\u265F" || chessboard[x][y] == "\u265C" || chessboard[x][y] == "\u265E" || chessboard[x][y] == "\u265D" || chessboard[x][y] == "\u265B" || chessboard[x][y] == "\u265A" || chessboard[x][y] == "\u2659" || chessboard[x][y] == "\u2656" || chessboard[x][y] == "\u2658" || chessboard[x][y] == "\u2657" || chessboard[x][y] == "\u2655" || chessboard[x][y] == "\u2654")
                            {
                                cout << "Friendly piece in the way!" << endl;
                                return false;
                            }
                        }
                    }
                    chessboard[newrow][newcol] = "\u265B";
                    chessboard[currentrow][currentcol] = " ";
                    return true;
                }
                else if (newrow > currentrow && newcol < currentcol)
                {
                    for (int g = newrow-1; g > currentrow; g--) //Queen moves down left
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
                    chessboard[newrow][newcol] = "\u265B";
                    chessboard[currentrow][currentcol] = " ";
                    return true;
                }
                else if (newrow > currentrow && newcol > currentcol)
                {
                    for (int o = newrow+1; o < currentrow; o++) //Queen moves down right
                    {
                        for (int k = newcol+1; k > currentcol; k++)
                        {
                            if (chessboard[o][k] == "\u265F" || chessboard[o][k] == "\u265C" || chessboard[o][k] == "\u265E" || chessboard[o][k] == "\u265D" || chessboard[o][k] == "\u265B" || chessboard[o][k] == "\u265A" || chessboard[o][k] == "\u2659" || chessboard[o][k] == "\u2656" || chessboard[o][k] == "\u2658" || chessboard[o][k] == "\u2657" || chessboard[o][k] == "\u2655" || chessboard[o][k] == "\u2654")
                            {
                                cout << "Friendly piece in the way!" << endl;
                                return false;
                            }
                        }
                    }
                    chessboard[newrow][newcol] = "\u265B";
                    chessboard[currentrow][currentcol] = " ";
                    return true;
                }
            }
            else if (chessboard[newrow][newcol] == "\u2659" || chessboard[newrow][newcol] == "\u2656" || chessboard[newrow][newcol] == "\u2658" || chessboard[newrow][newcol] == "\u2657" || chessboard[newrow][newcol] == "\u2655" || chessboard[newrow][newcol] == "\u2654")
            {
                if (newrow == currentrow && newcol > currentcol)
                {
                    for (int z = newcol-1; z < currentcol; z--) //Queen moves to the right
                    {
                        if (chessboard[newrow][z] == "\u265F" || chessboard[newrow][z] == "\u265C" || chessboard[newrow][z] == "\u265E" || chessboard[newrow][z] == "\u265D" || chessboard[newrow][z] == "\u265B" || chessboard[newrow][z] == "\u265A" || chessboard[newrow][z] == "\u2659" || chessboard[newrow][z] == "\u2656" || chessboard[newrow][z] == "\u2658" || chessboard[newrow][z] == "\u2657" || chessboard[newrow][z] == "\u2655" || chessboard[newrow][z] == "\u2654")
                        {
                            cout << "Friendly piece in the way" << endl;
                            return false;
                        }
                    }
                    chessboard[newrow][newcol] = "\u265B";
                    chessboard[currentrow][currentcol] = " ";
                    return true;
                }
                else if (newrow == currentrow && newcol < currentcol)
                {
                    for (int a = newcol+1; a > currentcol; a++) //Queen moves to the left
                    {
                        if (chessboard[newrow][a] == "\u265F" || chessboard[newrow][a] == "\u265C" || chessboard[newrow][a] == "\u265E" || chessboard[newrow][a] == "\u265D" || chessboard[newrow][a] == "\u265B" || chessboard[newrow][a] == "\u265A" || chessboard[newrow][a] == "\u2659" || chessboard[newrow][a] == "\u2656" || chessboard[newrow][a] == "\u2658" || chessboard[newrow][a] == "\u2657" || chessboard[newrow][a] == "\u2655" || chessboard[newrow][a] == "\u2654")
                        {
                            cout << "Friendly piece in the way" << endl;
                            return false;
                        }
                        
                        
                        
                    }
                    chessboard[newrow][newcol] = "\u265B";
                    chessboard[currentrow][currentcol] = " ";
                    return true;
                }
                else if (newcol == currentcol && newrow > currentrow)
                {
                    for (int b = newrow-1; b > currentrow; b--) //Queen moving down
                    {
                        if (chessboard[b][newcol] == "\u265F" || chessboard[b][newcol] == "\u265C" || chessboard[b][newcol] == "\u265E" || chessboard[b][newcol] == "\u265D" || chessboard[b][newcol] == "\u265B" || chessboard[b][newcol] == "\u265A" || chessboard[b][newcol] == "\u2659" || chessboard[b][newcol] == "\u2656" || chessboard[b][newcol] == "\u2658" || chessboard[b][newcol] == "\u2657" || chessboard[b][newcol] == "\u2655" || chessboard[b][newcol] == "\u2654")
                        {
                            cout << "Friendly piece in the way" << endl;
                            return false;
                        }
                    }
                    chessboard[newrow][newcol] = "\u265B";
                    chessboard[currentrow][currentcol] = " ";
                    return true;
                }
                else if (newcol == currentcol && newrow < currentrow)
                {
                    for (int c = currentrow+1; c < newrow; c++) //Queen moving up
                    {
                        if (chessboard[c][newcol] == "\u265F" || chessboard[c][newcol] == "\u265C" || chessboard[c][newcol] == "\u265E" || chessboard[c][newcol] == "\u265D" || chessboard[c][newcol] == "\u265B" || chessboard[c][newcol] == "\u265A" || chessboard[c][newcol] == "\u2659" || chessboard[c][newcol] == "\u2656" || chessboard[c][newcol] == "\u2658" || chessboard[c][newcol] == "\u2657" || chessboard[c][newcol] == "\u2655" || chessboard[c][newcol] == "\u2654")
                        {
                            cout << "Friendly piece in the way" << endl;
                            return false;
                        }
                    }
                    chessboard[newrow][newcol] = "\u265B";
                    chessboard[currentrow][currentcol] = " ";
                    return true;
                }
                else if (newrow < currentrow && newcol > currentcol) //Queen moves up right
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
                    chessboard[newrow][newcol] = "\u265B";
                    chessboard[currentrow][currentcol] = " ";
                    return true;
                }
                else if (newrow < currentrow && newcol < currentcol)
                {
                    for (int x = newrow+1; x > currentrow; x++) //Queen moves up left
                    {
                        for (int y = newcol+1; y < currentcol; y++)
                        {
                            if (chessboard[x][y] == "\u265F" || chessboard[x][y] == "\u265C" || chessboard[x][y] == "\u265E" || chessboard[x][y] == "\u265D" || chessboard[x][y] == "\u265B" || chessboard[x][y] == "\u265A" || chessboard[x][y] == "\u2659" || chessboard[x][y] == "\u2656" || chessboard[x][y] == "\u2658" || chessboard[x][y] == "\u2657" || chessboard[x][y] == "\u2655" || chessboard[x][y] == "\u2654")
                            {
                                cout << "Friendly piece in the way!" << endl;
                                return false;
                            }
                        }
                    }
                    chessboard[newrow][newcol] = "\u265B";
                    chessboard[currentrow][currentcol] = " ";
                    return true;
                }
                else if (newrow > currentrow && newcol < currentcol)
                {
                    for (int g = newrow-1; g > currentrow; g--) //Queen moves down left
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
                    chessboard[newrow][newcol] = "\u265B";
                    chessboard[currentrow][currentcol] = " ";
                    return true;
                }
                else if (newrow > currentrow && newcol > currentcol)
                {
                    for (int o = newrow+1; o < currentrow; o++)
                    {
                        for (int k = newcol+1; k > currentcol; k++)
                        {
                            if (chessboard[o][k] == "\u265F" || chessboard[o][k] == "\u265C" || chessboard[o][k] == "\u265E" || chessboard[o][k] == "\u265D" || chessboard[o][k] == "\u265B" || chessboard[o][k] == "\u265A" || chessboard[o][k] == "\u2659" || chessboard[o][k] == "\u2656" || chessboard[o][k] == "\u2658" || chessboard[o][k] == "\u2657" || chessboard[o][k] == "\u2655" || chessboard[o][k] == "\u2654")
                            {
                                cout << "Friendly piece in the way!" << endl;
                                return false;
                            }
                        }
                    }
                    chessboard[newrow][newcol] = "\u265B";
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

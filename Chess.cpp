//
//  Chess.cpp
//  Chessgame
//
//  Created by Daniel Mora on 10/6/15.
//  Copyright © 2015 Daniel Mora. All rights reserved.
//

#include "Chess.h"

Chess::Chess() //Creates board
{
    chessboard[0][0] = "\u265C";
    chessboard[0][1] = "\u265E";
    chessboard[0][2] = "\u265D";
    chessboard[0][3] = "\u265B";
    chessboard[0][4] = "\u265A";
    chessboard[0][5] = "\u265D";
    chessboard[0][6] = "\u265E";
    chessboard[0][7] = "\u265C";
    chessboard[1][0] = "\u265F";
    chessboard[1][1] = "\u265F";
    chessboard[1][2] = "\u265F";
    chessboard[1][3] = "\u265F";
    chessboard[1][4] = "\u265F";
    chessboard[1][5] = "\u265F";
    chessboard[1][6] = "\u265F";
    chessboard[1][7] = "\u265F";
    
    for (int i = 2; i < 6; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            chessboard[i][j] = " ";
        }
    }
    
    chessboard[6][0] = "\u2659"; 
    chessboard[6][1] = "\u2659";
    chessboard[6][2] = "\u2659";
    chessboard[6][3] = "\u2659";
    chessboard[6][4] = "\u2659";
    chessboard[6][5] = "\u2659";
    chessboard[6][6] = "\u2659";
    chessboard[6][7] = "\u2659";
    chessboard[7][0] = "\u2656";
    chessboard[7][1] = "\u2658";
    chessboard[7][2] = "\u2657";
    chessboard[7][3] = "\u2655";
    chessboard[7][4] = "\u2654";
    chessboard[7][5] = "\u2657";
    chessboard[7][6] = "\u2658";
    chessboard[7][7] = "\u2656";
}

void Chess::PrintBoard() //Prints the current board
{
    cout << "    0   1   2   3   4   5   6   7" << endl;
    cout << "  ---------------------------------" << endl;
    
    for (int i = 0; i < 8; i++)
    {
        cout << i;
        
        for (int j = 0; j < 8; j++)
        {
            cout << " | " <<chessboard[i][j];
        }
        
        cout << " |";
        cout << endl;
        cout << "  ---------------------------------" << endl;
    }
}

bool Chess::PawnCheck1()
{
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if (chessboard[i][j] == "\u2659")
            {
                return false;
            }
        }
    }
    return true;
}

bool Chess::PawnCheck2()
{
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if (chessboard[i][j] == "\u265F")
            {
                return false;
            }
        }
    }
    return true;
}

bool Chess::RookCheck1()
{
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if (chessboard[i][j] == "\u2656")
            {
                return false;
            }
        }
    }
    return true;
}

bool Chess::RookCheck2()
{
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if (chessboard[i][j] == "\u265C")
            {
                return false;
            }
        }
    }
    return true;
}

bool Chess::KnightCheck1()
{
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if (chessboard[i][j] == "\u2658")
            {
                return false;
            }
        }
    }
    return true;
}

bool Chess::KnightCheck2()
{
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if (chessboard[i][j] == "\u265E")
            {
                return false;
            }
        }
    }
    return true;
}

bool Chess::BishopCheck1()
{
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if (chessboard[i][j] == "\u2657")
            {
                return false;
            }
        }
    }
    return true;
}

bool Chess::BishopCheck2()
{
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if (chessboard[i][j] == "\u265D")
            {
                return false;
            }
        }
    }
    return true;
}

bool Chess::QueenCheck1()
{
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if (chessboard[i][j] == "\u2655")
            {
                return false;
            }
        }
    }
    return true;
}

bool Chess::QueenCheck2()
{
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if (chessboard[i][j] == "\u265B")
            {
                return false;
            }
        }
    }
    return true;
}
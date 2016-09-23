//
//  Chess.h
//  Chessgame
//
//  Created by Daniel Mora on 10/6/15.
//  Copyright © 2015 Daniel Mora. All rights reserved.
//
#include <iostream>
#include <string>
using namespace std;

class Chess
{
private:
    string chessboard[8][8];
    
public:
    
    Chess();
    bool MoveRook(int player, int currentrow, int currentcol, int newrow, int newcol);
    bool MovePawn(int player, int currentrow, int currentcol, int newrow, int newcol);
    bool MoveKnight(int player, int currentrow, int currentcol, int newrow, int newcol);
    bool MoveBishop(int player, int currentrow, int currentcol, int newrow, int newcol);
    bool MoveQueen(int player, int currentrow, int currentcol, int newrow, int newcol);
    bool MoveKing(int player, int currentrow, int currentcol, int newrow, int newcol);
    bool PawnPromotion(int player);
    bool PawnCheck1();
    bool PawnCheck2();
    bool RookCheck1();
    bool RookCheck2();
    bool KnightCheck1();
    bool KnightCheck2();
    bool BishopCheck1();
    bool BishopCheck2();
    bool QueenCheck1();
    bool QueenCheck2();
    bool P1win();
    bool P2Win();
    void PrintBoard();
    
};

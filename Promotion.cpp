//
//  Promotion.cpp
//  Chessgame
//
//  Created by Daniel Mora on 10/14/15.
//  Copyright © 2015 Daniel Mora. All rights reserved.
//

#include "Chess.h"

bool Chess::PawnPromotion(int player)
{
    string choice;
    
    if (player == 1)
    {
        for (int i = 0; i < 1; i++)
        {
            for (int j = 0; j < 8; j++)
            {
                if (chessboard[i][j] == "\u2659")
                {
                    for (int x = 0; x < 8; x++)
                    {
                        for (int y = 0; y < 8; y++)
                        {
                            if (chessboard[x][y] == "\u2655")
                            {
                                cout << "What do you want your pawn to promote to: for R enter \u2656, for H enter \u2658, or for B enter \u2657 ";
                                cin >> choice;
                                
                                if (choice ==  "\u2657" || choice == "\u2658" || choice == "\u2656")
                                {
                                    chessboard[i][j] = choice;
                                    return true;
                                }
                            }
                            else
                            {
                                cout << "What do you want your pawn to promote to: for Q enter u\2655, for R enter \u2656, for H enter \u2658, or for B enter \u2657 ";
                                cin >> choice;
                                
                                if (choice == "\u2657" || choice == "\u2658" || choice == "\u2656" || choice == "\u2655")
                                {
                                    chessboard[i][j] = choice;
                                    return true;
                                }
                                else
                                {
                                    cout << "Invalid choice" << endl;
                                    return false;
                                }
                            }
                        }
                    }
                }
            }
        }
        
    }
    else if (player == 2)
    {
        for (int i = 7; i < 8; i++)
        {
            for (int j = 0; j < 8; j++)
            {
                if (chessboard[i][j] == "\u265F")
                {
                    for (int x = 0; x < 8; x++)
                    {
                        for (int y = 0; y < 8; y++)
                        {
                            if (chessboard[x][y] == "\u265B")
                            {
                                cout << "What do you want your pawn to promote to: for r enter \u265C, for h enter \u265E, or for b enter \u265D ";
                                cin >> choice;
                                
                                if (choice == "\u265E" || choice == "\u265D" || choice == "\u265C")
                                {
                                    chessboard[i][j] = choice;
                                    return true;
                                }
                            }
                            else
                            {
                                cout << "What do you want your pawn to promote to: for q enter \u265B, for r enter \u265C, for h enter \u265E, or for b enter \u265D ";
                                cin >> choice;
                                
                                if (choice == "\u265D" || choice == "\u265E" || choice == "\u265C" || choice == "\u265B")
                                {
                                    chessboard[i][j] = choice;
                                    return true;
                                }
                                else
                                {
                                    cout << "Invalid choice" << endl;
                                    return false;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    else
    {
        cout << "Invalid player number" << endl;
        return false;
    }
    return false;
}

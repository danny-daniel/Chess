//
//  P2Win.cpp
//  Chessgame
//
//  Created by Daniel Mora on 10/14/15.
//  Copyright © 2015 Daniel Mora. All rights reserved.
//

#include "Chess.h"

bool Chess::P2Win()
{
    int hold = 0;
    
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if (chessboard[i][j] == "\u2654")
            {
                hold++;
            }
        }
    }
    
    if (hold == 1)
    {
        return false;
    }
    else
    {
        cout << "Checkmate, Player 2 wins" << endl;
        return true;
    }
    return false;
}

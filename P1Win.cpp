//
//  Checkmate.cpp
//  Chessgame
//
//  Created by Daniel Mora on 10/14/15.
//  Copyright © 2015 Daniel Mora. All rights reserved.
//

#include "Chess.h"

bool Chess::P1win()
{
    int hold = 0;
    
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if (chessboard[i][j] == "\u265A")
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
        cout << "Checkmate, Player 1 wins" << endl;
        return true;
    }
    return false;
}

//
//  main.cpp
//  Chessgame
//
//  Created by Daniel Mora on 10/6/15.
//  Copyright © 2015 Daniel Mora. All rights reserved.
//

#include "Chess.h"

int main()
{
    bool p1 = false;
    bool p2 = false;
    bool p1pawn = false;
    bool p2pawn = false;
    bool p1rook = false;
    bool p2rook = false;
    bool p1knight = false;
    bool p2knight = false;
    bool p1bishop = false;
    bool p2bishop = false;
    bool p1queen = false;
    bool p2queen = false;
    int row = 1;
    int col = 1;
    int n_row = 1;
    int n_col = 1;
    int option;
    int playernum = 0;
    bool flag = false;
    Chess game;
    
    game.PrintBoard();
    
    do
    {
        cout << "Choose what piece you want to move:" << endl << endl;
        cout << "1: Pawn" << endl;
        cout << "2: Rook" << endl;
        cout << "3: Knight" << endl;
        cout << "4: Bishop" << endl;
        cout << "5: Queen" << endl;
        cout << "6: King" << endl << endl;
        cout << "Enter option: ";
        cin >> option;
        
        switch (option)
        {
            case 1:
                
                cout << "Which player are you: ";
                    
                while (playernum != 1 || playernum != 2)
                {
                    cout << "Enter 1 or 2: ";
                    cin >> playernum;
                    
                    if (playernum == 1 || playernum == 2)
                    {
                        break;
                    }
                }
                
                cout << endl;
                
                if (p1pawn == 1 && playernum == 1)
                {
                    cout << "You have no more pawns!" << endl;
                    break;
                }
                if (p2pawn == 1 && playernum == 2)
                {
                    cout << "You have no more pawns!" << endl;
                    break;
                }
                
                while (flag == 0)
                {
                    cout << "Enter coordinates of which pawn you want to move" << endl;
                    
                    while (flag == 0)
                    {
                        cout << "Coordinates must be 0-7" << endl;
                        cout << "Enter row number: ";
                        cin >> row;
                        cout << "Enter column number: ";
                        cin >> col;
                        cout << endl;
                        
                        if (row >= 0 && row <= 7 && col >= 0 && col <= 7)
                        {
                            break;
                        }
                        
                    }
                    cout << "Enter the coordinates that you want to move that pawn to" << endl;
                    
                    while (flag == 0)
                    {
                        cout << "Coordinates must be 0-7" << endl;
                        cout << "Enter row number: ";
                        cin >> n_row;
                        cout << "Enter column number: ";
                        cin >> n_col;
                        cout << endl;
                        
                        if (n_row >= 0 && n_row <= 7 && n_col >= 0 && n_col <= 7)
                        {
                            break;
                        }
                        
                    }
                    
                    flag = game.MovePawn(playernum, row, col, n_row, n_col);
                    game.PawnPromotion(playernum);
                    
                    if (flag == 1 || flag == 0)
                    {
                        if (flag == 0)
                        {
                            cout << "Invalid information, restart" << endl << endl;
                        }
                        break;
                    }
                }
                break;
                
            case 2:
                
                cout << "Which player are you: ";
                    
                while (playernum != 1 || playernum != 2)
                {
                    cout << "Enter 1 or 2: ";
                    cin >> playernum;
                    
                    if (playernum == 1 || playernum == 2)
                    {
                        break;
                    }
                }
                
                cout << endl;
                
                if (p1rook == 1 && playernum == 1)
                {
                    cout << "You have no more rooks!" << endl;
                    break;
                }
                if (p2rook == 1 && playernum == 2)
                {
                    cout << "You have no more rooks!" << endl;
                    break;
                }
                
                while (flag == 0)
                {
                    cout << "Enter coordinates of which rook you want to move" << endl;
                    
                    while (flag == 0)
                    {
                        cout << "Coordinates must be 0-7" << endl;
                        cout << "Enter row number: ";
                        cin >> row;
                        cout << "Enter column number: ";
                        cin >> col;
                        cout << endl;
                        
                        if (row >= 0 && row <= 7  && col >= 0 && col <= 7)
                        {
                            break;
                        }
                        
                    }
                    cout << "Enter the coordinates that you want to move that rook to" << endl;
                    
                    while (flag == 0)
                    {
                        cout << "Coordinates must be 0-7" << endl;
                        cout << "Enter row number: ";
                        cin >> n_row;
                        cout << "Enter column number: ";
                        cin >> n_col;
                        cout << endl;
                        
                        if (n_row >= 0 && n_row <= 7 && n_col >= 0 && n_col <= 7)
                        {
                            break;
                        }
                        
                    }
                    
                    flag = game.MoveRook(playernum, row, col, n_row, n_col);
                    
                    if (flag == 1 || flag == 0)
                    {
                        if (flag == 0)
                        {
                            cout << "Invalid information, restart" << endl << endl;
                        }
                        break;
                    }
                }
                break;
                
            case 3:
                
                cout << "Which player are you: ";
                    
                while (playernum != 1 || playernum != 2)
                {
                    cout << "Enter 1 or 2: ";
                    cin >> playernum;
                    
                    if (playernum == 1 || playernum == 2)
                    {
                        break;
                    }
                }
                
                cout << endl;
                
                if (p1knight == 1 && playernum == 1)
                {
                    cout << "You have no more knights!" << endl;
                    break;
                }
                if (p2knight == 1 && playernum == 2)
                {
                    cout << "You have no more knights!" << endl;
                    break;
                }
                
                while (flag == 0)
                {
                    cout << "Enter coordinates of which knight you want to move" << endl;
                    
                    while (flag == 0)
                    {
                        cout << "Coordinates must be 0-7" << endl;
                        cout << "Enter row number: ";
                        cin >> row;
                        cout << "Enter column number: ";
                        cin >> col;
                        cout << endl;
                        
                        if (row >= 0 && row <= 7  && col >= 0 && col <= 7)
                        {
                            break;
                        }
                        
                    }
                    cout << "Enter the coordinates that you want to move that knight to" << endl;
                    
                    while (flag == 0)
                    {
                        cout << "Coordinates must be 0-7" << endl;
                        cout << "Enter row number: ";
                        cin >> n_row;
                        cout << "Enter column number: ";
                        cin >> n_col;
                        cout << endl;
                        
                        if (n_row >= 0 && n_row <= 7 && n_col >= 0 && n_col <= 7)
                        {
                            break;
                        }
                        
                    }
                    
                    flag = game.MoveKnight(playernum, row, col, n_row, n_col);
                    
                    if (flag == 1 || flag == 0)
                    {
                        if (flag == 0)
                        {
                            cout << "Invalid information, restart" << endl << endl;
                        }
                        break;
                    }
                }
                break;
                
            case 4:
                
                cout << "Which player are you: ";
                    
                while (playernum != 1 || playernum != 2)
                {
                    cout << "Enter 1 or 2: ";
                    cin >> playernum;
                    
                    if (playernum == 1 || playernum == 2)
                    {
                        break;
                    }
                }
                
                cout << endl;
                
                if (p1bishop == 1 && playernum == 1)
                {
                    cout << "You have no more bishops!" << endl;
                    break;
                }
                if (p2bishop == 1 && playernum == 2)
                {
                    cout << "You have no more bishops!" << endl;
                    break;
                }
                
                while (flag == 0)
                {
                    cout << "Enter coordinates of which bishop you want to move" << endl;
                    
                    while (flag == 0)
                    {
                        cout << "Coordinates must be 0-7" << endl;
                        cout << "Enter row number: ";
                        cin >> row;
                        cout << "Enter column number: ";
                        cin >> col;
                        cout << endl;
                        
                        if (row >= 0 && row <= 7  && col >= 0 && col <= 7)
                        {
                            break;
                        }
                        
                    }
                    cout << "Enter the coordinates that you want to move that bishop to" << endl;
                    
                    while (flag == 0)
                    {
                        cout << "Coordinates must be 0-7" << endl;
                        cout << "Enter row number: ";
                        cin >> n_row;
                        cout << "Enter column number: ";
                        cin >> n_col;
                        cout << endl;
                        
                        if (n_row >= 0 && n_row <= 7 && n_col >= 0 && n_col <= 7)
                        {
                            break;
                        }
                        
                    }
                    
                    flag = game.MoveBishop(playernum, row, col, n_row, n_col);
                    
                    if (flag == 1 || flag == 0)
                    {
                        if (flag == 0)
                        {
                            cout << "Invalid information, restart" << endl << endl;
                        }
                        break;
                    }
                }
                break;
                
            case 5:
                
                cout << "Which player are you: ";
                    
                while (playernum != 1 || playernum != 2)
                {
                    cout << "Enter 1 or 2: ";
                    cin >> playernum;
                    
                    if (playernum == 1 || playernum == 2)
                    {
                        break;
                    }
                }
                
                cout << endl;
                
                if (p1queen == 1 && playernum == 1)
                {
                    cout << "You don't have a queen anymore!" << endl;
                    break;
                }
                if (p2queen == 1 && playernum == 2)
                {
                    cout << "You don't have a queen anymore!" << endl;
                    break;
                }
                
                while (flag == 0)
                {
                    cout << "Enter coordinates of which queen you want to move" << endl;
                    
                    while (flag == 0)
                    {
                        cout << "Coordinates must be 0-7" << endl;
                        cout << "Enter row number: ";
                        cin >> row;
                        cout << "Enter column number: ";
                        cin >> col;
                        cout << endl;
                        
                        if (row >= 0 && row <= 7  && col >= 0 && col <= 7)
                        {
                            break;
                        }
                        
                    }
                    cout << "Enter the coordinates that you want to move that queen to" << endl;
                    
                    while (flag == 0)
                    {
                        cout << "Coordinates must be 0-7" << endl;
                        cout << "Enter row number: ";
                        cin >> n_row;
                        cout << "Enter column number: ";
                        cin >> n_col;
                        cout << endl;
                        
                        if (n_row >= 0 && n_row <= 7 && n_col >= 0 && n_col <= 7)
                        {
                            break;
                        }
                        
                    }
                    
                    flag = game.MoveQueen(playernum, row, col, n_row, n_col);
                    
                    if (flag == 1 || flag == 0)
                    {
                        if (flag == 0)
                        {
                            cout << "Invalid information, restart" << endl << endl;
                        }
                        break;
                    }
                }
                break;
                
            case 6:
                
                cout << "Which player are you: ";
                    
                while (playernum != 1 || playernum != 2)
                {
                    cout << "Enter 1 or 2: ";
                    cin >> playernum;
                    
                    if (playernum == 1 || playernum == 2)
                    {
                        break;
                    }
                }
                
                cout << endl;
                
                while (flag == 0)
                {
                    cout << "Enter coordinates of which king you want to move" << endl;
                    
                    while (flag == 0)
                    {
                        cout << "Coordinates must be 0-7" << endl;
                        cout << "Enter row number: ";
                        cin >> row;
                        cout << "Enter column number: ";
                        cin >> col;
                        cout << endl;
                        
                        if (row >= 0 && row <= 7  && col >= 0 && col <= 7)
                        {
                            break;
                        }
                        
                    }
                    cout << "Enter the coordinates that you want to move that king to" << endl;
                    
                    while (flag == 0)
                    {
                        cout << "Coordinates must be 0-7" << endl;
                        cout << "Enter row number: ";
                        cin >> n_row;
                        cout << "Enter column number: ";
                        cin >> n_col;
                        cout << endl;
                        
                        if (n_row >= 0 && n_row <= 7 && n_col >= 0 && n_col <= 7)
                        {
                            break;
                        }
                    }
                    
                    flag = game.MoveKing(playernum, row, col, n_row, n_col);
                    
                    if (flag == 1 || flag == 0)
                    {
                        if (flag == 0)
                        {
                            cout << "Invalid information, restart" << endl << endl;
                        }
                        break;
                    }
                }
                break;
                
            default:
                cout << "Invalid option" << endl;
                break;
        }
        
        flag = false;
        row = 1;
        col = 1;
        n_row = 1;
        n_col = 1;
        playernum = 0;
        p1pawn = game.PawnCheck1();
        p2pawn = game.PawnCheck2();
        p1rook = game.RookCheck1();
        p2rook = game.RookCheck2();
        p1knight = game.KnightCheck1();
        p2knight = game.KnightCheck2();
        p1bishop = game.BishopCheck1();
        p2bishop = game.BishopCheck2();
        p1queen = game.QueenCheck1();
        p2queen = game.QueenCheck2();
        
        if (p1pawn == true)
        {
            cout << "Player 1 you are no longer able to use pawns!" << endl;
        }
        if (p2pawn == true)
        {
            cout << "Player 2 you are no longer able to use pawns!" << endl;
        }
        if (p1rook == true)
        {
            cout << "Player 1 you are no longer able to use rooks!" << endl;
        }
        if (p2rook == true)
        {
            cout << "Player 2 you are no longer able to use rooks!" << endl;
        }
        if (p1knight == true)
        {
            cout << "Player 1 you are no longer able to use knights!" << endl;
        }
        if (p2knight == true)
        {
            cout << "Player 2 you are no longer able to use knights!" << endl;
        }
        if (p1bishop == true)
        {
            cout << "Player 1 you are no longer able to use bishops!" << endl;
        }
        if (p2bishop == true)
        {
            cout << "Player 2 you are no longer able to use bishops!" << endl;
        }
        if (p1queen == true)
        {
            cout << "Player 1 you are no longer able to use queens!" << endl;
        }
        if (p2queen == true)
        {
            cout << "Player 2 you are no longer able to use queens!" << endl;
        }
        
        cout << endl;
        
        p1 = game.P1win();
        p2 = game.P2Win();
    
        game.PrintBoard();
        
        if (p1 == 1)
        {
            break;
        }
        if (p2 == 1)
        {
            break;
        }
        
    } while (p1 != 1 || p2 != 1);
    
    
    return 0;
}

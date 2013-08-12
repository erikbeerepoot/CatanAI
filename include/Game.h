//
//  Game.h
//  CatanAI
//
//  Created by Erik E. Beerepoot on 2013-08-11.
//  Copyright (c) 2013 Erik E. Beerepoot. All rights reserved.
//

#ifndef __CatanAI__Game__
#define __CatanAI__Game__

#include <iostream>
#include "GameBoard.h"

class Game {
    const GameBoard & GetGameBoard();
private:
    GameBoard board;
    
};

#endif /* defined(__CatanAI__Game__) */

//
//  GameBoard.h
//  CatanAI
//
//  Created by Erik E. Beerepoot on 2013-08-11.
//  Copyright (c) 2013 Erik E. Beerepoot. All rights reserved.
//

#ifndef __CatanAI__GameBoard__
#define __CatanAI__GameBoard__

#include <iostream>
#include <vector>
#include <map>
#include "Tile.h"

typedef std::array<Tile,19> TileSet;

class GameBoard {
    public:
        GameBoard();
    
        TileSet                 GetTiles();
        std::vector<Tile>       GetTileByNumber(int number);
    private:
        std::map<int,std::vector<Tile>>     tiles;
    
        TileSet CreateBasicBoard();
};

#endif /* defined(__CatanAI__GameBoard__) */
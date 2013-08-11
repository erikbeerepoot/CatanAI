//
//  GameBoard.cpp
//  CatanAI
//
//  Created by Erik E. Beerepoot on 2013-08-11.
//  Copyright (c) 2013 Erik E. Beerepoot. All rights reserved.
//

#include "GameBoard.h"
#include <algorithm>
#include <vector>


// Game parameters
const int kNumTiles=19;
const int kNumWoodTiles = 4;
const int kNumWheatTiles = 4;
const int kNumSheepTiles = 4;
const int kNumBrickTiles = 3;
const int kNumOreTiles = 3;
const int kNumDesertTiles = 1;
const std::array<int,18> kTileNumbers = {2,3,3,4,4,5,5,6,6,8,8,10,10,11,11,12};

/**
 * /name GameBoard
 * /brief Instantiate gameboard object and generates game board.
 */
GameBoard::GameBoard(){
    int totalResourceCount = kNumWoodTiles;
    int idx = 0;

    //Create the tiles
    Tile woodTile(wood);
    for(idx=0;idx<totalResourceCount;tiles[idx++]=woodTile);
    
    totalResourceCount += kNumWheatTiles;
    Tile wheatTile(wheat);
    while(idx<totalResourceCount)tiles[idx++]=wheatTile;

    totalResourceCount += kNumSheepTiles;
    Tile sheepTile(sheep);
    while(idx<totalResourceCount)tiles[idx++]=sheepTile;
    
    totalResourceCount += kNumBrickTiles;
    Tile brickTile(brick);
    while(idx<totalResourceCount)tiles[idx++]=brickTile;
    
    totalResourceCount += kNumOreTiles;
    Tile oreTile(ore);
    while(idx<totalResourceCount)tiles[idx++]=oreTile;
    
    totalResourceCount += kNumDesertTiles;
    Tile desertTile(desert);
    while(idx<totalResourceCount)tiles[idx++]=desertTile;
    
    //shuffle for random arrangement
    std::random_shuffle(tiles.begin(), tiles.end());
    
    
    
    
    
    
    
}

/**
 * /name    GetTileByNumber
 * /brief   Returns the tile(s) that have the number "number"
 */
std::vector<Tile> GameBoard::GetTileByNumber(int number){
    
}

/**
 * /name    GetTiles
 * /brief   Returns the tileset for this gameboard
 */
TileSet GameBoard::GetTiles(){
    return tiles;
}


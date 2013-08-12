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
#include <iterator>

// Game parameters
const int kNumTiles=19;
const int kNumWoodTiles = 4;
const int kNumWheatTiles = 4;
const int kNumSheepTiles = 4;
const int kNumBrickTiles = 3;
const int kNumOreTiles = 3;
const int kNumDesertTiles = 1;

typedef std::array<int,18> NumberSet;
const NumberSet kTileNumbers = {2,3,3,4,4,5,5,6,6,8,8,10,10,11,11,12};

/**
 * /name GameBoard
 * /brief Instantiate gameboard object and generates game board.
 */
GameBoard::GameBoard(){
    //Get shuffled array of tiles
    TileSet tileset = CreateBasicBoard();
    
    //Shuffle array of numbers
    NumberSet tileNumbers = kTileNumbers;
    std::random_shuffle(tileNumbers.begin(),tileNumbers.end());
    
    //Create hash table
    int count = 0;
    int numIdx=0,tileIdx = 0;
    while(numIdx < tileNumbers.size()){
        if(tileset[tileIdx].GetType()==desert)tileIdx++;
        
        std::vector<Tile> tileVec;
        
        //check if we have to append to an existing vector
        auto it=tiles.find(tileNumbers[numIdx]);
        if(it!=tiles.end()){
            tileVec = it->second;
            tiles.erase(it);
        }
        
        
        //add element to hash table
        tileVec.push_back(tileset[tileIdx]);
        tiles.insert(std::pair<int,std::vector<Tile>>(tileNumbers[numIdx],tileVec));

        numIdx++;
        tileIdx++;
    }
}

/**
 * /name    GetTileByNumber
 * /brief   Returns the tile(s) that have the number "number"
 */
std::vector<Tile> GameBoard::GetTileByNumber(int number){
    return tiles[number];
}

/**
 * /name    GetTiles
 * /brief   Returns the tileset for this gameboard
 */
TileSet GameBoard::GetTiles(){
    TileSet tileset;
    int idx = 0;
    for(auto tileIt=tiles.begin();tileIt!=tiles.end();tileIt++){
        std::vector<Tile> currentTiles = tileIt->second;
        for(int vecIdx=0;vecIdx<currentTiles.size();vecIdx++)
            tileset[idx++] = currentTiles[vecIdx];
        
    }
    return tileset;
}


/**
 * /name    CreateBasicBoard
 * /brief   Creates the basic "inner" board of the game 
 */
TileSet GameBoard::CreateBasicBoard(){
    int totalResourceCount = kNumWoodTiles;
    int idx = 0;
    TileSet tileset;
    
    //Create the tiles
    Tile woodTile(wood);
    for(idx=0;idx<totalResourceCount;tileset[idx++]=woodTile);
    
    totalResourceCount += kNumWheatTiles;
    Tile wheatTile(wheat);
    while(idx<totalResourceCount)tileset[idx++]=wheatTile;
    
    totalResourceCount += kNumSheepTiles;
    Tile sheepTile(sheep);
    while(idx<totalResourceCount)tileset[idx++]=sheepTile;
    
    totalResourceCount += kNumBrickTiles;
    Tile brickTile(brick);
    while(idx<totalResourceCount)tileset[idx++]=brickTile;
    
    totalResourceCount += kNumOreTiles;
    Tile oreTile(ore);
    while(idx<totalResourceCount)tileset[idx++]=oreTile;
    
    totalResourceCount += kNumDesertTiles;
    Tile desertTile(desert);
    while(idx<totalResourceCount)tileset[idx++]=desertTile;
    
    //shuffle for random arrangement
    std::random_shuffle(tileset.begin(), tileset.end());
    return tileset;
}
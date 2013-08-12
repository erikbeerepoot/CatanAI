//
//  Tile.cpp
//  CatanAI
//
//  Created by Erik E. Beerepoot on 2013-08-11.
//  Copyright (c) 2013 Erik E. Beerepoot. All rights reserved.
//

#include "Tile.h"
#include "Vertex.h"

Tile::Tile(){
    resourceType = invalid;
}

/**
 * /name    Tile
 * /brief   Constructs a new Tile with type
 */
Tile::Tile(ResourceType type){
    resourceType = type;
}

/**
 * /name    GetType
 * /brief   Gets the resource type of this tile
 */
const ResourceType Tile::GetType(){
    return resourceType;
}


/**
 * /name    SetNumber
 * /brief   sets the tile number of this tile
 */
void Tile::SetTileNumber(const int number_in){
    number = number_in;
}

/**
 * /name    GetTileNumber
 * /brief   Returns the tile number of this tile
 */
int Tile::GetTileNumber(){
    return number;
}
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

Tile::Tile(ResourceType type){
    resourceType = type;
}

const ResourceType Tile::GetType(){
    return resourceType;
}



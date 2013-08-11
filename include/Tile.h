//
//  Tile.h
//  CatanAI
//
//  Created by Erik E. Beerepoot on 2013-08-11.
//  Copyright (c) 2013 Erik E. Beerepoot. All rights reserved.
//

#ifndef __CatanAI__Tile__
#define __CatanAI__Tile__

#include <iostream>

#include "Resource.h"
#include "Vertex.h"


class Tile {
public:
    Tile();
    Tile(ResourceType tileType);
    
    const ResourceType GetType();
    bool isBlockedByRobber();
    std::array<Vertex,6>    GetVertices;
    
private:
    std::array<Vertex,6>    vertices;
    ResourceType            resourceType;
    bool                    blockedByRobber;
};

#endif /* defined(__CatanAI__Tile__) */

//
//  Vertex.h
//  CatanAI
//
//  Created by Erik E. Beerepoot on 2013-08-11.
//  Copyright (c) 2013 Erik E. Beerepoot. All rights reserved.
//

#ifndef __CatanAI__Vertex__
#define __CatanAI__Vertex__

#include <iostream>
#include <array>

#include "Vertex.h"
#include "GlobalTypes.h"
#include "Player.h"

struct Edge {
    Edge(){
        owner = NULL;
        occupied = false;
    }
    
    bool occupied;
    Player *owner;
};

class Vertex {
    
    public:
        Vertex();
    
        std::array<Vertex*,3>   GetNeighbours;
        std::array<Edge,3>      GetRoads;
        std::array<Resource,3>  GetAdjacentResources;
        Player*                 GetOwner();
    private:
        std::array<Vertex*,3>   neighbours;
        std::array<Edge,3>      roads;
        std::array<Resource,3>  adjacentResources;
        Player*                 owner;
};
#endif /* defined(__CatanAI__Vertex__) */

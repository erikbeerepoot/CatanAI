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
        Player*           GetOwner() ;
    private:
        std::array<Vertex*,3>   neighbours;
        std::array<Edge,3>      roads;
        Player*                 owner;
};
#endif /* defined(__CatanAI__Vertex__) */

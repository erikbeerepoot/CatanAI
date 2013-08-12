//
//  DecisionModels.cpp
//  CatanAI
//
//  Created by Erik E. Beerepoot on 2013-08-11.
//  Copyright (c) 2013 Erik E. Beerepoot. All rights reserved.
//

#include "DecisionModels.h"


//Probability distribution function for two dice
const std::array<std::pair<int,float>,11> dicePDF = {
    std::pair<int,float>(2,0.0278),
    std::pair<int,float>(3,0.0556),
    std::pair<int,float>(4,0.0833),
    std::pair<int,float>(5,0.1111),
    std::pair<int,float>(6,0.1389),
    std::pair<int,float>(7,0.1666666),
    std::pair<int,float>(8,0.0278),
    std::pair<int,float>(9,0.0556),
    std::pair<int,float>(10,0.0833),
    std::pair<int,float>(11,0.1111),
    std::pair<int,float>(12,0.1389)
};

/**
 * /name        DecisionModels
 * /brief       Constructor for DecisionModels class. Needs reference to a game.
 */
DecisionModels::DecisionModels(Game &game_in) : game(game_in){}

/**
 * /name        ComputeExpectedResourcesPerTurn
 * /brief       Given a hashed tileset, returns the expected resources per turn for a vertex
 */
std::vector<ExpectedResource> DecisionModels::ComputeExpectedResourcesPerTurnAtVertex(const Vertex &vertex){
    
    
    
    return std::vector<ExpectedResource>();
}

/**
 * /name        ComputeOptimalSettlementLocation
 * /brief       Compute the optimal location for a settlement, given the current game.
 */
Vertex DecisionModels::ComputeOptimalSettlementLocation(){
    return Vertex();
}
//
//  DecisionModels.h
//  CatanAI
//
//  Created by Erik E. Beerepoot on 2013-08-11.
//  Copyright (c) 2013 Erik E. Beerepoot. All rights reserved.
//

#ifndef __CatanAI__DecisionModels__
#define __CatanAI__DecisionModels__

#include <iostream>
#include <utility>

#include "Resource.h"
#include "Game.h"

typedef std::pair<Resource,float> ExpectedResource;

class DecisionModels {
public:
    DecisionModels(Game &game_in);
private:
    std::vector<ExpectedResource> ComputeExpectedResourcesPerTurn();
    Vertex ComputeOptimalSettlementLocation();
    
    Game &game;
};

#endif /* defined(__CatanAI__DecisionModels__) */

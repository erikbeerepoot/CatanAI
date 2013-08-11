//
//  Player.h
//  CatanAI
//
//  Created by Erik E. Beerepoot on 2013-08-11.
//  Copyright (c) 2013 Erik E. Beerepoot. All rights reserved.
//

#ifndef __CatanAI__Player__
#define __CatanAI__Player__

#include <iostream>
#include <vector>
#include <string>

#include "../include/Resource.h"

class Player {
    public:
        Player(const std::string &name);
    
    private:
        std::vector<Resource> resources;
        std::string           name;
};

#endif /* defined(__CatanAI__Player__) */

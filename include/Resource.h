//
//  Resource.h
//  CatanAI
//
//  Created by Erik E. Beerepoot on 2013-08-11.
//  Copyright (c) 2013 Erik E. Beerepoot. All rights reserved.
//

#ifndef __CatanAI__Resource__
#define __CatanAI__Resource__

#include <iostream>


enum ResourceType {
    invalid = 0,
    first = 1,
    wood = 1,
    wheat = 2,
    ore = 3,
    brick = 4,
    sheep = 5,
    desert = 6,
    last = 6,
};

class Resource {
    public:
        ResourceType type;
    
};

#endif /* defined(__CatanAI__Resource__) */

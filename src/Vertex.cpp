//
//  Vertex.cpp
//  CatanAI
//
//  Created by Erik E. Beerepoot on 2013-08-11.
//  Copyright (c) 2013 Erik E. Beerepoot. All rights reserved.
//
#include "Vertex.h"

Vertex::Vertex() : owner(NULL) {}

Player* Vertex::GetOwner(){
    return owner;
}
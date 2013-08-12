//
//  File.cpp
//  CatanAI
//
//  Created by Erik E. Beerepoot on 2013-08-11.
//  Copyright (c) 2013 Erik E. Beerepoot. All rights reserved.
//
#include <stdio.h>
#include <iostream>
#include <array>

#include "Game.h"

const int majorVersion = 0;
const int minorVersion = 1;

int main(int argc, char**argv){
    std::cout << "***********************************" << std::endl;
    std::cout << "*\tSettlers of Catan\t  *" << std::endl;
    std::cout << "* Artificial Intelligence Program *" << std::endl;
    std::cout << "*\t\t v" << majorVersion << "." << minorVersion << "\t\t  *" << std::endl;
    std::cout << "***********************************" << std::endl;
    
    
    Game game;
    
    
    return 0;
}
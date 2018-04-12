//
//  main.cpp
//  CPPClasses
//
//  Created by Jason Brooks on 11/04/2018.
//  Copyright © 2018 Jason Brooks. All rights reserved.
//

#include <iostream>
#include "SpaceInvader.hpp"
#include "Galaxian.hpp"

int main(int argc, const char * argv[])
{
    
    Galaxian     *galaxians = new Galaxian[10];
    SpaceInvader *aliens    = new SpaceInvader[100];
    
    // Initialise the Invaders
    for(int i = 0; i<100;i++)
    {
        aliens[i].init( (i % 10) * 10, ((i / 10) * 50), 2.5, 0.0);
    }
    
    // Initialise the Galaxians
    for(int i = 0; i<10;i++)
    {
        galaxians[i].init( (i % 10) * 10, (((i / 10) * 50)) + 600, -3.5, -10.0);
    }
    
    // Display some Data
    for(int i = 0; i<100;i++)
    {
        aliens[i].move();
        std::cout << aliens[i].pos_x << "," << aliens[i].pos_y << "\n";
    }
    
    // Display some Data
    for(int i = 0; i<10;i++)
    {
        galaxians[i].update();
        std::cout << galaxians[i].pos_x << "," << galaxians[i].pos_y << "\n";
    }

    
    return 0;
}

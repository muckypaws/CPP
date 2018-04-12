//
//  Galaxian.cpp
//  CPPClasses
//
//  Created by Jason Brooks on 12/04/2018.
//  Copyright © 2018 Jason Brooks. All rights reserved.
//

#include "Galaxian.hpp"

// Constructor
Galaxian::Galaxian()
{
    // Initialisation Code Here
    dirty = 0;
    hit   = 0;
};


bool Galaxian::update()
{
    /* insert move code.... */
    move(); // Calls Inherited Classes Move function :) 
    
    dirty = 1;
    
    return 1;
};

    // Destructor
Galaxian::~Galaxian()
{
    // Clean up Code Here
};

//
//  SpaceInvader.cpp
//  CPPClasses
//
//  Created by Jason Brooks on 11/04/2018.
//  Copyright © 2018 Jason Brooks. All rights reserved.
//

#include "SpaceInvader.hpp"

// Constructor
SpaceInvader::SpaceInvader() 
{
    dirty = 0;
    hit   = 0;
};

void SpaceInvader::init(float x, float y, float deltaX, float deltaY)
{
    pos_x = x;
    pos_y = y;
    dx    = deltaX;
    dy    = deltaY;
    dirty = 0;
    hit   = 0;
};

void SpaceInvader::move()
{
    /* insert move code.... */
    dirty = 1;
};

// Destructor
SpaceInvader::~SpaceInvader()
{
    
};

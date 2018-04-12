//
//  SpaceInvader.hpp
//  CPPClasses
//
//  Created by Jason Brooks on 11/04/2018.
//  Copyright © 2018 Jason Brooks. All rights reserved.
//

#pragma once
#ifndef SpaceInvader_hpp
#define SpaceInvader_hpp

#include <stdio.h>

#endif /* SpaceInvader_hpp */

class SpaceInvader
{
public:
    SpaceInvader();     // Constructor
    ~SpaceInvader();    // Destructor
    
    // Class Methods
    void init(float x, float y, float deltaX, float deltaY);
    void move();
    
    float pos_x;
    float pos_y;
    float dx;
    float dy;
    
protected:
    bool dirty;
    bool hit;
    
private:
    // Class Methods that are private and variables.


    /* Etc etc */
};

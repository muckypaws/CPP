//
//  Galaxian.hpp
//  CPPClasses
//
//  Created by Jason Brooks on 12/04/2018.
//  Copyright © 2018 Jason Brooks. All rights reserved.
//

#ifndef Galaxian_hpp
#define Galaxian_hpp

#include <stdio.h>
#include "SpaceInvader.hpp"

class Galaxian : public SpaceInvader
{
public:
    Galaxian();     // Constructor
    ~Galaxian();    // Destructor

    bool update();
    
protected:
    
private:

    /* Etc etc */
    
    
};


#endif /* Galaxian_hpp */

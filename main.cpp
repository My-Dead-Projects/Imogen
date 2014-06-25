//
//  main.cpp
//  Imogen
//
//  Created by Michael Dorst on 6/24/14.
//  Copyright (c) 2014 Michael Dorst. All rights reserved.
//

#include "library.h"
#include <iostream>

int main() {
    std::cout<<ObjectBuilder().make().getID()<<std::endl;
    std::cout<<ObjectBuilder().make().getID()<<std::endl;
    
    ObjectBuilder ob = ObjectBuilder();
    
    std::cout<<ObjectBuilder().make().getID()<<std::endl;
    std::cout<<ObjectBuilder().make().getID()<<std::endl;
    
    std::cout<<ob.make().getID()<<std::endl;
}

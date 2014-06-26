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
    Object * obj = new Object;
    std::cout<<obj->call_method("description", new Array())<<std::endl;
}

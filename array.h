//
//  array.h
//  Imogen
//
//  Created by Michael Dorst on 6/25/14.
//  Copyright (c) 2014 Michael Dorst. All rights reserved.
//

#ifndef imogen_array_h
#define imogen_array_h

#include "object.h"
#include <vector>

#define A new Array

class Array : public Object {
    
public:
    std::vector<Object *> data;
    Array() {}
    Array(std::vector<Object *> v) {
        data = v;
    }
};

#endif

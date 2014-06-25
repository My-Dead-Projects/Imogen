//
//  hash.h
//  Imogen
//
//  Created by Michael Dorst on 6/25/14.
//  Copyright (c) 2014 Michael Dorst. All rights reserved.
//

#include "object.h"
#include <unordered_map>

class Hash : public Object {
    
public:
    std::unordered_map<Object *, Object> data;
};

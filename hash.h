//
//  hash.h
//  Imogen
//
//  Created by Michael Dorst on 6/25/14.
//  Copyright (c) 2014 Michael Dorst. All rights reserved.
//

#include "object.h"
#include <unordered_map>

struct __obj_hash_func {
    size_t operator()(Object obj) {
        return obj.getID();
    }
};

class Hash : public Object {
    
public:
    std::unordered_map<Object *, Object> data;
};

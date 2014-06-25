//
//  hash.h
//  Imogen
//
//  Created by Michael Dorst on 6/25/14.
//  Copyright (c) 2014 Michael Dorst. All rights reserved.
//

#ifndef imogen_hash_h
#define imogen_hash_h

#include "object.h"
#include <unordered_map>

class Hash : public Object {
    
public:
    std::unordered_map<Object *, Object *> data;
    
    void add(Object * key, Object * value) {
        data.insert(std::pair<Object *, Object *>(key, value));
    }
};

#endif

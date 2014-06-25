//
//  object.h
//  Imogen
//
//  Created by Michael Dorst on 6/24/14.
//  Copyright (c) 2014 Michael Dorst. All rights reserved.
//

#ifndef imogen_object_h
#define imogen_object_h

#include <string>
#include <vector>
#include <unordered_map>

#define index size_t

class Object {
protected:
    std::vector<Object> members;
    std::unordered_map<std::string, Object> methods;
public:
    
    Object() {}
};

#endif

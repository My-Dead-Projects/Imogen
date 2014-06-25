//
//  object.h
//  Imogen
//
//  Created by Michael Dorst on 6/24/14.
//  Copyright (c) 2014 Michael Dorst. All rights reserved.
//

#ifndef imogen_object_h
#define imogen_object_h

#include <functional>
#include <string>
#define obj_id size_t

class Array;
class Hash;

class Object {
    
public:
    Hash *members;
    Hash *methods;
    
    void add_member(std::string, Object *);
    void add_method(std::string, std::function<Object *(Object *, Array *)>);
    
    Object();
};

#endif

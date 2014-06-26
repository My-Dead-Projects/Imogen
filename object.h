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
#include <unordered_map>
#include <string>

#define obj_id size_t
#define method_t std::function<Object *(Object *, Array *)>

class Array;

class Object {
    
public:
    
    std::unordered_map<std::string, Object *> member_hash;
    std::unordered_map<std::string, method_t> method_hash;
    
    void add_member(std::string, Object *);
    void add_method(std::string, method_t);
    
    Object * get_member(std::string);
    Object * call_method(std::string, Array *);
    
    Object();
};

extern Object * nil;

namespace Error {
    class MethodMissing : std::exception {};
}

#endif

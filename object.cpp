//
//  object.cpp
//  Imogen
//
//  Created by Michael Dorst on 6/25/14.
//  Copyright (c) 2014 Michael Dorst. All rights reserved.
//

#include "object.h"
#include "string.h"
#include "array.h"
#include "hash.h"
#include "method.h"

Object * obj_methods(Object *, Array *);

Object::Object() {
    
}

void Object::add_member(std::string str, Object * member) {
    members.insert(std::pair<std::string, Object *>(str, member));
}

void Object::add_method(std::string str, method_t method) {
    methods.insert(std::pair<std::string, method_t>(str, method));
}

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

void Object::add_member(std::string m_name, Object * member) {
    members.insert(std::pair<std::string, Object *>(m_name, member));
}

void Object::add_method(std::string m_name, method_t method) {
    methods.insert(std::pair<std::string, method_t>(m_name, method));
}

Object * Object::get_member(std::string m_name) {
    return members.at(m_name);
}

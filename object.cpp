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
    member_hash.insert(std::pair<std::string, Object *>(m_name, member));
}

void Object::add_method(std::string m_name, method_t method) {
    method_hash.insert(std::pair<std::string, method_t>(m_name, method));
}

Object * Object::get(std::string m_name) {
    return member_hash.at(m_name);
}

Object * Object::call(std::string m_name, Array * args) {
    try {
        return method_hash.at(m_name)(this, args);
    } catch (std::out_of_range) {
        throw new Error::MethodMissing;
    }
}

Object * nil = new Object;

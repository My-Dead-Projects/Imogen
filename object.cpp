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
    members = new Hash;
    methods = new Hash;
}

void Object::add_member(std::string str, Object * member) {
    members->data.insert(std::pair<Object *, Object *>(new String(str), member));
}

void Object::add_method(std::string str,
                        std::function<Object *(Object *, Array *)> method) {
    methods->data.insert(std::pair<Object *, Object *>(new String(str),
                                                       new Method(method))
                         );
}

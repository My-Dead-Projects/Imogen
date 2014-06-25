//
//  method.h
//  Imogen
//
//  Created by Michael Dorst on 6/25/14.
//  Copyright (c) 2014 Michael Dorst. All rights reserved.
//


#include "object.h"
#include <functional>
#include <exception>

class UnimplementedException : std::exception {};

class Method : Object {
    bool is_primitive;
    std::function<Object(Object)> primitive;
public:
    Object call(Object o) {
        if (is_primitive) {
            return primitive(o);
        } else {
            throw new UnimplementedException;
        }
    }
//    Method() {
//        is_primitive = false;
//    }
//    Method(std::function<Object(Object)> func) {
//        is_primitive = true;
//        primitive = func;
//    }
};

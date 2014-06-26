//
//  method.h
//  Imogen
//
//  Created by Michael Dorst on 6/25/14.
//  Copyright (c) 2014 Michael Dorst. All rights reserved.
//

#ifndef imogen_method_h
#define imogen_method_h

#include "object.h"
#include "array.h"
#include <exception>

namespace Error {
    class UnimplementedMethod : std::exception {};
}

class Method : public Object {
    bool is_primitive;
    method_t primitive;
public:
    Object * operator()(Object * self, Array * args) {
        if (is_primitive) {
            return primitive(self, args);
        } else {
            throw new Error::UnimplementedMethod;
        }
    }
    Method() {
        is_primitive = false;
    }
    Method(method_t func) {
        is_primitive = true;
        primitive = func;
    }
};

#endif

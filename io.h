//
//  io.h
//  Imogen
//
//  Created by Michael Dorst on 6/26/14.
//  Copyright (c) 2014 Michael Dorst. All rights reserved.
//

#ifndef imogen_io_h
#define imogen_io_h

#include "object.h"
#include <iostream>

namespace Error {
    class InvalidArgument : std::exception {};
}

method_def(print);
method_def(println);

class IO : public Object {
    
public:
    IO() {
        add_method("print", print);
        add_method("println", println);
    }
};

method_def(print) {
    for (int i = 0; i < args->data.size(); i++) {
        String * str = dynamic_cast<String *>(args->data[i]);
        if (str) {
            std::cout<<str->data;
        } else {
            throw new Error::InvalidArgument();
        }
    }
    return nil;
}

method_def(println) {
    for (int i = 0; i < args->data.size(); i++) {
        String * str = dynamic_cast<String *>(args->data[i]);
        if (str) {
            std::cout<<str->data<<std::endl;
        } else {
            throw new Error::InvalidArgument();
        }
    }
    return nil;
}

#endif

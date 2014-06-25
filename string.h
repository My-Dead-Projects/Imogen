//
//  string.h
//  Imogen
//
//  Created by Michael Dorst on 6/25/14.
//  Copyright (c) 2014 Michael Dorst. All rights reserved.
//

#ifndef imogen_string_h
#define imogen_string_h

#include "object.h"
#include <string>

class String : public Object {
    
public:
    std::string data;
};

#endif

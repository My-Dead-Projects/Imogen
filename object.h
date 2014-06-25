//
//  object.h
//  Imogen
//
//  Created by Michael Dorst on 6/24/14.
//  Copyright (c) 2014 Michael Dorst. All rights reserved.
//

#ifndef imogen_object_h
#define imogen_object_h

#define obj_id size_t

class Object {
protected:
    Object *members;
    Object *methods;
public:
    Object() {}
};

#endif

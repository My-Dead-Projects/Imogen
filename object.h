//
//  object.h
//  Imogen
//
//  Created by Michael Dorst on 6/24/14.
//  Copyright (c) 2014 Michael Dorst. All rights reserved.
//

#ifndef imogen_object_h
#define imogen_object_h

#include <string>
#include <vector>
#include <unordered_map>

#define obj_id size_t

class Object {
    friend class ObjectBuilder;
    Object() {}
protected:
    obj_id id;
    std::vector<Object> members;
    std::unordered_map<std::string, Object> methods;
public:
    obj_id getID() { return id; }
};

typedef class ObjectBuilder {
protected:
    static obj_id next_id;
    Object obj;
public:
    Object make() {
        obj.id = next_id++;
        return obj;
    }
} NewObject;

obj_id ObjectBuilder::next_id = 0;

#endif

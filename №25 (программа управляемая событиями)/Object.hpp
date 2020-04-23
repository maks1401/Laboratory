#pragma once
#include "Event.hpp"

class Object {
public:
    Object();
    virtual ~Object();
    
    virtual void show() = 0;
    virtual void input() = 0;
    
    virtual void handleEvent(const TEvent&) = 0;
};

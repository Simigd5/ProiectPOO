#pragma once

#include <iostream>

class Step {

public:
    virtual ~Step() {}
    virtual void execute() = 0;
};
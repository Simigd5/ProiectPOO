#pragma once

#include <iostream>
#include <string>
#include "Step.h"

class Flow : public Step {

public:
    virtual ~Flow() = default;

    virtual void create() = 0;
    virtual void access() = 0;
    virtual void Delete() = 0;

    // Metoda implementata din clasa Step
    void execute() override;
};

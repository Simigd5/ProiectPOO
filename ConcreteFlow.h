#pragma once

#include "Flow.h"
#include <vector>

class ConcreteFlow : public Flow {
private:
    std::vector<std::unique_ptr<Step>> steps;
public:
    void create() override;
    void access() override;
    void Delete() override;
};


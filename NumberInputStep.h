#pragma once

#include "Step.h"

class NumberInputStep : public Step {
protected:
    std::string description;
    float x;
    float y;
    std::string nDescript;

public:

    NumberInputStep();
    NumberInputStep(float x, float y, const std::string& nDescript);
    ~NumberInputStep() override;

    void execute() override;

    float getX() const;
    float getY() const;

};


#pragma once

#include "Step.h"
#include "NumberInputStep.h"

class CalculusStep : public Step {
private:
    NumberInputStep* numberInputStep;

public:
    CalculusStep(NumberInputStep* numberInputStep);
    ~CalculusStep() override;

    void execute() override;
};
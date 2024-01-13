#pragma once

#include "Step.h"

class TextInputStep : public Step {
private:
    std::string description;
    std::string textInput;

public:

    TextInputStep() = default;
    TextInputStep(const std::string& description);
    ~TextInputStep() override;

    void execute() override;
};


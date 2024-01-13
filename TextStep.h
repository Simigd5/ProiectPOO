#pragma once

#include "Step.h"

class TextStep : public Step {
private:
    std::string ttitle;

public:

    TextStep() = default;
    TextStep(const std::string& ttitle);
    ~TextStep() override;

    void execute() override;
};


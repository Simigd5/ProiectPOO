#pragma once

#include "Step.h"
#include <fstream>

class OutputStep : public Step {
private:
    std::string fileName;
    std::string title;
    std::string description;

public:
    OutputStep() = default;
    OutputStep(const std::string& title, const std::string& description, const std::string& fileName);

    void execute() override;
};

#pragma once

#include "Step.h"

class TitleStep : public Step {
private:
    std::string title;
    std::string subtitle;

public:

    TitleStep() = default;
    TitleStep(const std::string& title, const std::string& subtitle);
    ~TitleStep() override;

    void execute() override;
};


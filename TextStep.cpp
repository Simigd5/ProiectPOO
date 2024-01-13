#include "TextStep.h"

TextStep::TextStep(const std::string& ttitle) : ttitle(ttitle) {}

TextStep::~TextStep() {}

void TextStep::execute() {
    // Implementarea specifica pentru TextStep
    std::cout << "Executing TextStep with text title: " << std::endl;
    std::cin >> ttitle;
    std::cout << "Text title received: " << ttitle << '\n';
}

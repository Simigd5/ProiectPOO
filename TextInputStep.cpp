#include "TextInputStep.h"

TextInputStep::TextInputStep(const std::string& description) : description(description) {}

TextInputStep::~TextInputStep() {}

void TextInputStep::execute() {
    // Implementarea specifica pentru TextInputStep
    std::cout << "Executing TextInputStep with description: " << description << std::endl;

    // Aici puteti adauga logica pentru a prelua textul de la utilizator, daca este necesar
    std::cout << "Enter the text input: ";
    std::cin >> textInput;

    std::cout << "Text input received: " << std::endl;
    std::cout << "Text input received: " << textInput << '\n';
}

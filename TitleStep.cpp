#include "TitleStep.h"

TitleStep::TitleStep(const std::string& title, const std::string& subtitle) : title(title), subtitle(subtitle) {}

TitleStep::~TitleStep() {}

void TitleStep::execute() {
    // Implementarea specifica pentru TitleStep
    std::cout << "Executing TitleStep with title and subtitle:\n";

    std::cout << "Enter title: ";
    std::cin >> title; 
    std::cout << " Enter subtitle: ";
    std::cin >> subtitle;
    std::cout << '\n';
    std::cout << "Title and subtitle received: " << title << " // " << subtitle << '\n';
}

// CalculusStep.cpp

#include "CalculusStep.h"
#include <iostream>

CalculusStep::CalculusStep(NumberInputStep* numberInputStep) : numberInputStep(numberInputStep) {}

CalculusStep::~CalculusStep() {}

void CalculusStep::execute() {
    // Implementati logica specifica pentru CalculusStep
    std::cout << "Executing CalculusStep" << std::endl;

    // Obtineti valorile de la NumberInputStep
    float x = numberInputStep->getX();
    float y = numberInputStep->getY();

    // Introduceti semnul operatiei dorite
    char operation;
    std::cout << "Enter the operation (+, -, *, /): ";
    std::cin >> operation;

    // Efectuati operatia corespunzatoare
    switch (operation) {
    case '+':
        std::cout << "Sum: " << x + y << std::endl;
        break;
    case '-':
        std::cout << "Difference: " << x - y << std::endl;
        break;
    case '*':
        std::cout << "Product: " << x * y << std::endl;
        break;
    case '/':
        std::cout << "Quotient: " << x / y << std::endl;
        break;
    default:
        std::cout << "Invalid operation." << std::endl;
        break;
    }
}

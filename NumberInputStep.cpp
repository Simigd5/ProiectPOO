#include "NumberInputStep.h"

NumberInputStep::NumberInputStep() : x(0.0f), y(0.0f) {}

NumberInputStep::NumberInputStep(float x, float y, const std::string& nDescript) : x(x), y(y), nDescript(nDescript) {}

NumberInputStep::~NumberInputStep() {}

void NumberInputStep::execute() {
    // Implementarea specifica pentru NumberInputStep
    std::cout << "Executing NumberInputStep with description: " << nDescript << std::endl;

    // Aici puteti adauga logica pentru a prelua numarul de la utilizator, daca este necesar
    std::cout << "Enter the first number (type float)" << std::endl;
    std::cin >> x;
    std::cout << "Enter the second number (type float)" << std::endl;
    std::cin >> y;
    std::cout << "Enter description of the expected result" << std::endl;
    std::cin >> nDescript;

    std::cout << "Number inputs received: " << getX() << " and " << getY() << std::endl;

    // Puteti continua cu alte actiuni specifice clasei NumberInputStep
}

float NumberInputStep::getX() const {
    return x;
}

float NumberInputStep::getY() const {
    return y;
}

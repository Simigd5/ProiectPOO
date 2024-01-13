#include "ConcreteFlow.h"
#include <iostream>

int main() {
    ConcreteFlow concreteFlow;

    int choice;

    while (true) {
        std::cout << "\t\tMenu" << std::endl;
        std::cout << "1. Create new flow" << std::endl;
        std::cout << "2. Delete flow" << std::endl;
        std::cout << "3. Access created flows" << std::endl;
        std::cout << "4. End program" << std::endl;
        std::cout << "Choose option: ";
        std::cin >> choice;

        system("CLS");

        switch (choice) {
        case 1:
            concreteFlow.create();
            break;

        case 2:
            concreteFlow.Delete();
            break;

        case 3:
            concreteFlow.access();
            break;

        case 4:
            std::cout << "Ending program." << std::endl;
            return 0;

        default:
            std::cout << "Please enter a valid option." << std::endl;
            break;
        }
    }

    return 0;
}

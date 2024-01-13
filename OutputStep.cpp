#include "OutputStep.h"

OutputStep::OutputStep(const std::string& title, const std::string& description, const std::string& fileName)
    : title(title), description(description), fileName(fileName) {}

void OutputStep::execute() {
    char c;
    char r;

    std::cout << "Do you want to skip this step? (y/n)" << std::endl;
    std::cin >> c;

    if (c == 'y') {
        // Treci la urmatorul pas
        // Implementeaza logica pentru a trece la urmatorul pas sau executie
    }
    else if (c != 'n') {
        std::cout << "You didn't enter a valid option." << std::endl;
        execute(); // Repeta pasul curent
    }

    std::ofstream file(fileName.c_str(), std::ios::out);

    if (file.is_open()) {
        std::cout << "Enter the title for your file:" << std::endl;
        std::cin >> title;

        std::cout << "Enter the description for your file:" << std::endl;
        std::cin >> description;

        file << "Title: " << title << std::endl;
        file << "Description: " << description << std::endl;

        file.close();
    }
    else {
        std::cout << "The file could not be opened." << std::endl;
    }

    std::cout << "Repeat this step? (y/n)" << std::endl;
    std::cin >> r;

    if (r == 'y') {
        execute(); // Repeta pasul curent
    }
    else if (r == 'n') {
        // Treci la urmatorul pas
        // Implementeaza logica pentru a trece la urmatorul pas sau executie
    }
    else {
        std::cout << "You didn't enter a valid option." << std::endl;
        execute(); // Repeta pasul curent
    }

    system("CLS");
}

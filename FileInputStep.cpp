#include "FileInputStep.h"

FileInputStep::FileInputStep(const std::string& extension) : fileExtension(extension) {}

void FileInputStep::execute() {
    char c;
    char r;

    std::cout << "Do you want to skip this step? (y/n)" << std::endl;
    std::cin >> c;

    if (c == 'y') {
        // Treci la urmatorul pas
        // Implementeaza logica pentru a trece la urmatorul pas sau executare
    }
    else if (c != 'n') {
        std::cout << "You didn't enter a valid option." << std::endl;
        execute(); // Repeta pasul curent
    }

    std::cout << "Enter the name of the file" << std::endl;
    std::cin >> fileName;

    openFile(); // Deschide fisierul

    std::cout << "Repeat this step? (y/n)" << std::endl;
    std::cin >> r;

    if (r == 'y') {
        execute(); // Repeta pasul curent
    }
    else if (r == 'n') {
        // Treci la urmatorul pas
        // Implementeaza logica pentru a trece la urmatorul pas sau executare
    }
    else {
        std::cout << "You didn't enter a valid option." << std::endl;
        execute(); // Repeta pasul curent
    }

    system("CLS");
}

TextFileInputStep::TextFileInputStep(const std::string& extension) : FileInputStep(extension) {}

void TextFileInputStep::openFile() {
    fileName.append(fileExtension);
    std::ifstream file(fileName.c_str());

    if (file.is_open()) {
        std::string line;
        while (std::getline(file, line)) {
            std::cout << line << std::endl;
        }
        file.close();
    }
    else {
        std::cout << "Failed to open the file." << std::endl;
    }
}

CsvFileInputStep::CsvFileInputStep(const std::string& extension) : FileInputStep(extension) {}

void CsvFileInputStep::openFile() {
    fileName.append(fileExtension);
    std::ifstream file(fileName.c_str());

    if (file.is_open()) {
        // Implementarea pentru citirea si procesarea fisierului CSV
        // Exemplu: utilizati o biblioteca pentru procesarea CSV
        std::cout << "Reading and processing CSV file." << std::endl;
        file.close();
    }
    else {
        std::cout << "Failed to open the file." << std::endl;
    }
}
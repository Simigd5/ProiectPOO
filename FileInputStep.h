#pragma once

#include "Step.h"
#include <iostream>
#include <fstream>
#include <string>

class FileInputStep : public Step {
protected:
    std::string fileExtension;
    std::string fileName;

public:
    virtual ~FileInputStep() = default;

    // Functia virtuala pura, pe care trebuie sa o implementeze clasele derivate
    virtual void openFile() = 0;

    // Constructorul implicit este acum protejat pentru a preveni instantierea directa
    FileInputStep() = default;

    // Constructorul parametrizat pentru a seta extensia fisierului
    explicit FileInputStep(const std::string& extension);

    void execute() override;

    // Adaugati aici alte functii membru sau logici specifice, daca este necesar
};

class TextFileInputStep : public FileInputStep {
public:
    TextFileInputStep(const std::string& extension);

    void openFile() override;
};

class CsvFileInputStep : public FileInputStep {
public:
    CsvFileInputStep(const std::string& extension);

    void openFile() override;
};

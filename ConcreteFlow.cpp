#include "ConcreteFlow.h"
#include "TitleStep.h"
#include "TextStep.h"
#include "TextInputStep.h"
#include "NumberInputStep.h"
#include "CalculusStep.h"
#include "FileInputStep.h"
#include "OutputStep.h"
#include <iostream>

void ConcreteFlow::create() {
    std::cout << "Creating ConcreteFlow" << std::endl;

    // Adaugati pasi la fluxul concret
    steps.push_back(std::make_unique<TitleStep>());
    steps.push_back(std::make_unique<TextStep>());
    steps.push_back(std::make_unique<TextInputStep>());

    //auto numberInputStep = std::make_unique<NumberInputStep>();
    //steps.push_back(std::move(numberInputStep));

    steps.push_back(std::make_unique<NumberInputStep>());

    //auto calculusStep = std::make_unique<CalculusStep>(*numberInputStep);
    //steps.push_back(std::move(calculusStep));

    steps.push_back(std::make_unique<CalculusStep>(dynamic_cast<NumberInputStep*>(steps.back().get())));

    //steps.push_back(std::make_unique<CalculusStep>());

    //steps.push_back(std::make_unique<FileInputStep>());
    steps.push_back(std::make_unique<OutputStep>());


    // Apelati metoda execute() pentru fiecare pas din flux
    for (const auto& step : steps) {
        step->execute();
    }

    // Logica specifica crearii fluxului
    std::cout << "ConcreteFlow created successfully." << std::endl;
}

void ConcreteFlow::access() {
    std::cout << "Accessing ConcreteFlow" << std::endl;

    // Afisati informatii despre fiecare pas din flux
    for (std::size_t i = 0; i < steps.size(); ++i) {
        std::cout << "Step " << i + 1 << ": ";
        // Aici puteti adauga logica de afisare a informatiilor despre fiecare pas
        // De exemplu, puteti apela o metoda getInfo() pe fiecare pas si afisa rezultatele
        // steps[i]->getInfo();
        std::cout << std::endl;
    }

    // Logica specifica accesarii fluxului
    std::cout << "Access complete." << std::endl;
}

void ConcreteFlow::Delete() {
    std::cout << "Deleting ConcreteFlow" << std::endl;

    // Logica specifica pentru stergerea fluxului
    // Puteti adauga aici, de exemplu, cod pentru a sterge toti pasii din flux
    steps.clear();

    // Logica specifica stergerii fluxului
    std::cout << "ConcreteFlow deleted successfully." << std::endl;
}

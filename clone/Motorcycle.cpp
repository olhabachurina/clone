#include "Motorcycle.h"
#include <iostream>

Motorcycle::Motorcycle(std::string model, int year, std::string type)
    : Vehicle("Motorcycle", model, year), type_(type) {}

Motorcycle* Motorcycle::clone() const {
    return new Motorcycle(model_, year_, type_); // Вызываем конструктор для создания клона
}

void Motorcycle::printInfo() const {
    Vehicle::printInfo();
    std::cout << "Motorcycle type: " << type_ << std::endl;
}







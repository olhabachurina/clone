#include "Vehicle.h"
#include <iostream>

Vehicle::Vehicle(std::string type, std::string model, int year)
    : type_(type), model_(model), year_(year) {}

void Vehicle::printInfo() const {
    std::cout << "Type: " << type_ << ", Model: " << model_ << ", Year of issue: " << year_ << std::endl;
}
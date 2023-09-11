#include "Car.h"
#include <iostream>

Car::Car(std::string model, int year, int numDoors)
    : Vehicle("A car", model, year), numDoors_(numDoors) {}

Car* Car::clone() const {
    return new Car(model_, year_, numDoors_);
}

void Car::printInfo() const {
    Vehicle::printInfo();
    std::cout << "Number of doors: " << numDoors_ << std::endl;
}
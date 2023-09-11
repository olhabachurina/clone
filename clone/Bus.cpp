#include "Bus.h"
#include <iostream>

Bus::Bus(std::string model, int year, int seatingCapacity)
    : Vehicle("Bus", model, year), seatingCapacity_(seatingCapacity) {}

Bus* Bus::clone() const {
    return new Bus(model_, year_, seatingCapacity_);
}

void Bus::printInfo() const {
    Vehicle::printInfo();
    std::cout << "Capacity: " << seatingCapacity_ << " passengers" << std::endl;
}
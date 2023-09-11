#pragma once
#include "Vehicle.h"

class Car : public Vehicle {
public:
    Car(std::string model, int year, int numDoors);
    virtual Car* clone() const;
    virtual void printInfo() const;

private:
    int numDoors_;
};

#pragma once
#include "Vehicle.h"

class Bus : public Vehicle {
public:
    Bus(std::string model, int year, int seatingCapacity);
    virtual Bus* clone() const;
    virtual void printInfo() const;

private:
    int seatingCapacity_;
};

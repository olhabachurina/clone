#pragma once
#include "Vehicle.h"

class Motorcycle : public Vehicle {
public:
    Motorcycle(std::string model, int year, std::string type);
    virtual Motorcycle* clone() const;
    virtual void printInfo() const;

private:
    std::string type_;
};
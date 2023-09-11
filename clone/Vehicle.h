#pragma once
#include <string>

class Vehicle {
public:
    virtual Vehicle* clone() const = 0;
    virtual void printInfo() const;

    Vehicle(std::string type, std::string model, int year);

protected:
    std::string type_;
    std::string model_;
    int year_;
};

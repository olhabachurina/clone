// clone.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "Car.h"
#include "Motorcycle.h"
#include "Bus.h"



int main() {
    
    Car car1("Toyota", 2022, 4);// Создание объектов и клонирование
    Motorcycle motorcycle1("Harley-Davidson", 2021, "Cruiser");
    Bus bus1("Mercedes-Benz Sprinter", 2020, 18);

    Car* car2 = car1.clone();
    Motorcycle* motorcycle2 = motorcycle1.clone();
    Bus* bus2 = bus1.clone();

    
    car2->printInfo();// Вывод информации
    motorcycle2->printInfo();
    bus2->printInfo();

    
    delete car2;
    delete motorcycle2;
    delete bus2;

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

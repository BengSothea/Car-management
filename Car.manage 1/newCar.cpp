#include<iostream>
#include "Car.cpp"
using namespace std;
class newCar: public Car{
    public:
    newCar(){};
    void displayNewCar() { cout << "This is a New Car.\n"; }                             
};
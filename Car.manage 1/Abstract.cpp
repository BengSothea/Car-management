#include<iostream>
#pragma once
using namespace std;
class Abstrat{
   virtual void addCar()=0;
   virtual void viewAllCar()=0;
   virtual void searchCarById()=0;
   virtual void updateCarPriceById()=0;
   virtual void sortCarByPrice()=0;
};
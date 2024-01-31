#include<iostream>
#include "BadinputException.cpp"
#pragma once
using namespace std;
class Car : public BadInputException{
    private:
    int carId;
    int carPrice;
    string carName;
    public:
    Car(){
        carId=0;
        carPrice=0;
        carName="No Name";
    }
    int getId()
    {
        return carId;
    }
    void setId(int carId)
    {
     if (carId>0)
     {
        this->carId = carId;
     }else
     {
        throw BadInputException();
     }
     
    }
    int getPrice()
    {
        return carPrice;
    }
    void setPrice(int carPrice)
    {
        if (carPrice>=0){
            this->carPrice=carPrice;
        }else
     {
        throw BadInputException();
     }
    }
    string getModel(){
        return carName;
    }
    void setModel(string carName){
        if (!carName.empty())
        {
            this->carName=carName;
        }else
     {
        throw BadInputException();
     }
    }
    void input()
    {
      cout<<"Enter Car Name: "<< endl;
      cin.ignore();
      getline(cin,carName);
      cout << "Car ID: ";
      cin >> carId;
      cout << "Car Price $: ";
      cin >> carPrice;
    }
    void output()
    {
     cout<<"Car Name: "<<carName;
     cout<<"\tCar ID: "<<carId;
     cout<<"\tCar Price: "<<carPrice<<"$"<<endl;
    }
};
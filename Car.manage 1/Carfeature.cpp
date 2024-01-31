#include<iostream>
#pragma once
#include "Car.cpp"
#include "Abstract.cpp"
#include<vector>
#include<algorithm>
using namespace std;
class CarFeature:public Car,public Abstrat
{
    public:
    CarFeature(){};
    vector<Car> car;
    int size;
    void addCar()
    {
        cout<<"Enter the number of cars you want to add : ";
        cin>>size;
        for (int i = 0; i < size; i++)
        {
          Car newcars;
          newcars.input();
          car.push_back(newcars);
        }
        
    }
    void viewAllCar()
    {
        if(car.empty()){
            cout<<"No Cars are available "<< endl;
        }
        else{
            for(auto &i : car){
                    i.output();
        }
      }
    }
void searchCarById()
{
    int id;
    cout << "Enter ID to Search : ";
    cin >> id;

    // Iterate through the car list
    auto it = find_if(car.begin(), car.end(), [id](auto &car) {
        return car.getId() == id;
    });

    if (it != car.end())
    {   
        cout<<"===== Car Found ! ====="<<endl;
        it->output();
    }
    else
    {
        cout << "No Car found with ID " << id << "!" << endl;
    }
}
    void updateCarPriceById()
    {
        int id;
        double price;
        cout << "Enter the ID of the car whose Price you want to Update: ";
        cin >> id;
        cout << "Enter the New Price: ";
        cin >> price;        
        bool flag = false;      
        for(int i=0; i<car.size(); i++){
        if(car[i].getId() == id){ 
        flag = true;
        car[i].setPrice(price);
        break;
        }     
      }
      if(flag == true){
      cout << "The Price has been updated successfully." << endl;                   
      }
      else{
              cout << "No Car found with this ID." <<id<<"!"<< endl;         
      }
    } 
    #include <algorithm>

void deleteCarById(vector<Car>& carList) {
    int id;
    cout << "Enter the ID of the car which you want to Delete: ";
    cin >> id;

    auto car = find_if(carList.begin(), carList.end(), [id]( Car& c) { return c.getId() == id; });

    if (car != carList.end()) {
        carList.erase(car);
        cout << "Car Deleted Successfully!" << endl;
    } else {
        cout << "Car Not Found!" << endl;
    }
   }
    void sortCarByPrice(){
       vector<Car> sorted_vector;
       //Bubble Sort Algorithm
       for(int i=0; i < car.size(); i++){

         for(int j = car.size() - 1; j > i; --j){

            if(car[j].getPrice() < car[j-1].getPrice()){
               Car temp = car[j];
               car[j] = car[j-1];   	
               car[j-1] = temp;
            }
         }
       }
    }  
};
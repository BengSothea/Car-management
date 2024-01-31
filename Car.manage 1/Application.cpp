#include<iostream>
#pragma once
#include "Carfeature.cpp"
#include "Customerfeature.cpp"
using namespace std;
class application:public CarFeature,public CustomerFeature{
 public:
 application(){};
 void runApplication()
 {  
    int ch;int choice_car; int choice_cus;
    do
    {
      cout<<"1.Car Management "<<endl;
      cout<<"2.Customer Management"<<endl;
      cout<<"0.Exit Application"<<endl;
      cout<<"Enter your choice : ";cin>>ch;
      switch (ch)
      {
      case 1:
      system("cls");
        do
        {
         cout<<"========= Car Manage ========="<<endl;
         cout<<"1.Add Cars"<<endl;
         cout<<"2.View All Cars"<<endl;
         cout<<"3.Search Car by ID"<<endl;
         cout<<"4.Update Car Price by ID"<<endl;
         cout<<"5.Delete a Car by ID"<<endl;
         cout<<"6.Sort Car by Price"<<endl;
         cout<<"0.Back to Manu"<<endl;
         cout<<"Enter Your Choice : "; cin >>choice_car;
         switch (choice_car)
         {
           case 1:
            system("cls");
            cout<<"========== Add Cars =========="<< endl;
            addCar();
            break;
        case 2:
           system("cls");
            cout<<"========== View All Cars=========="<< endl;
            viewAllCar();
            break;
        case 3:
            system("cls");
            cout<<"========== Search Car By ID ===========" << endl;
            searchCarById();
            break;
        case 4:
            system("cls");
            cout<<"========= Update Car Price By ID ========="<< endl;
            updateCarPriceById();
            break;
        case 5:
            system("cls");
            cout<<"========= Delete Car by ID ========= "<< endl;
            deleteCarById(car);
            break;
        case 6:
            system("cls");
            cout<<"=== Sorting the cars based on price ==="<< endl;
            sortCarByPrice();
            for(int i=0; i < car.size(); i++){
            cout << "Car: " << car[i].getModel() << ", Price: " << car[i].getPrice() << endl;
            }
            break;
        case 0:
         system("cls");
         break;
         }
        } while (choice_car!=0);
        break;
      case 2:
        system("cls");
        do
        {
           cout<<"========= Customer Manage ======="<<endl;
           cout<<"1.Add Customer"<<endl;
           cout<<"2.View All Customer"<<endl;
           cout<<"3.Search Customer by ID"<<endl;
           cout<<"4.Update Customer age by ID"<<endl;
           cout<<"5.Delete a Customer by ID"<<endl;
           cout<<"6.Sort Customer by age"<<endl;
           cout<<"0.Back to Manu"<<endl;
           cout<<"Enter your choice : ",
           cin>>choice_cus;
           switch(choice_cus)
           {
            case 1:
            system("cls");
            cout<<"========== Add Customer =========="<<endl;
            addCustomer();
            break;
        case 2:
            system("cls");
            cout<<"========== View All Customer=========="<< endl;
            viewAllCustomer();
            break;
        case 3:
            system("cls");
            cout<<"========== Search Customer By ID ===========" << endl;
            searchCustomerById();
            break;
        case 4:
            system("cls");
            cout<<"========= Update Customer Age By ID ========="<< endl;
            updateCustomerAgeById();
            break;
        case 5:
            system("cls");
            cout<<"========= Delete Customer by ID ========= "<< endl;
            deleteCustomerById(cus);
            break;
        case 6:
            system("cls");
            cout<<"=== Sorting the customers based on age ==="<< endl;
            sortCustomerByAge();
            for(int i = 0 ; i < cus.size() ; i++){
                cout << "ID : " << cus[i].getcustomerId() <<" Name :"<<cus[i].getName()<<"Age :"<<cus[i].getAge()<<endl;
            }
            break;
        case 0:
        system("cls");
        break;
           }
        } while (choice_cus!=0);
        break;
      case 0:
      exit(0);
      default:
      system ("cls");
      cout<<" Invalid Input! Please Enter Again "<<endl;
      break;
      }
    } while (ch!=0);
 }
};

#include<iostream>
#pragma once
using namespace std;
class Customer{
    private:
    int age;
    int id;
    string name;
    public:
    int getcustomerId()
    {
        return id;
    }
    void setcustomerId(int id)
    {
        if (id>0)
        {
            this->id=id;
        }
        
    }
    int getAge()
    {
       return age; 
    }
    void setAge(int age)
    {
        if (age>0)
        {
            this->age = age;
        }
        
    }
    string getName()
    {
        return name;
    }
    void setName(string name)
    {
        if (!name.empty())
        {
            this->name = name;
        }
        
    }
    void input()
    {
        cout<<"Enter Customer Name: ";
        cin.ignore();
        getline(cin,name);
        cout << "Enter the Age of the customer: ";
        cin >> age;
        cout<<"Enter Customer ID: ";
        cin>>id;
    }
    void output()
    {
        cout<<"Customer Name: "<<name;
        cout<<"\tAge: "<<age;
        cout<<"\tID: "<<id<<endl;
    }
};
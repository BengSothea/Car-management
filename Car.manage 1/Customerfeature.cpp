#include<iostream>
#include "Customer.cpp"
#pragma once
#include<vector>
using namespace std;
class CustomerFeature:public Customer{
      public:
      CustomerFeature(){};
      vector<Customer> cus;
      int size;
      void addCustomer()
      {
        cout<<"Enter the number of customers you want to add : ";
        cin>>size;
        for(int i=0;i<size;i++){
            Customer newCus;
            newCus.input();
            cus.push_back(newCus);
        }
      }
      void viewAllCustomer()
    {
        if(cus.empty()){
            cout<<"No Customers are available "<< endl;
        }
        else{
            for(auto &i : cus){
                    i.output();
        }
      }
    }
      void searchCustomerById()
    {
    int id;
    cout << "Enter ID to Search : ";
    cin >> id;

    // Iterate through the customer list
    auto it = find_if(cus.begin(), cus.end(), [id](auto &cus) {
        return cus.getcustomerId() == id;
    });

    if (it != cus.end())
    {   
        cout<<"===== Customer Found ! ====="<<endl;
        it->output();
    }
    else
    {
        cout << "No Customer found with ID " << id << "!" << endl;
    }
    }
    void updateCustomerAgeById()
    {
        int id;
        int age;
        cout << "Enter the ID of the Customer whose age you want to Update: ";
        cin >> id;
        cout << "Enter the New age: ";
        cin >> age;        
        bool flag = false;      
        for(int i=0; i<cus.size(); i++){
        if(cus[i].getcustomerId() == id){ 
        flag = true;
        cus[i].setAge(age);
        break;
        }     
      }
      if(flag == true){
      cout << "The age has been updated successfully." << endl;                   
      }
      else{
              cout << "No customer found with this ID" <<id<<"!"<< endl;         
      }
    }
    void deleteCustomerById(vector<Customer>& cusList) {
    int id;
    cout << "Enter the ID of the customer which you want to Delete: ";
    cin >> id;
    auto cus = find_if(cusList.begin(), cusList.end(), [id]( Customer& cu) { return cu.getcustomerId() == id; });

    if (cus != cusList.end()) {
        cusList.erase(cus);
        cout << "Customer Deleted Successfully!" << endl;
    } else {
        cout << "Customer Not Found!" << endl;
    }
   }
   void sortCustomerByAge(){
       vector<Customer> sorted_vector;
       //Bubble Sort Algorithm
       for(int i=0; i < cus.size(); i++){

         for(int j = cus.size() - 1; j > i; --j){

            if(cus[j].getAge() < cus[j-1].getAge()){
               Customer temp = cus[j];
               cus[j] = cus[j-1];   	
               cus[j-1] = temp;
            }
         }
       }
    }  
};
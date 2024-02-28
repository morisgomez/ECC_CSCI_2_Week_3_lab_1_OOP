/*
 Program Name: CustomerData.cpp
 Programmer: Moris Gomez
 Date: Saturday 02/24/2024
 Version Control: 2.0
 About: Week 3, CSCI 2, Lab 1.
 Description:
 CustomerData class should have the following member variables:
 - customerNumber
 - mailingList
 The customerNumber variable will be used to hold a unique integer for each customer.
 The mailingList variable should be a bool. It will be set to true if the customer wishes
 to be on a mailing list, or false if the customer does not wish to be on a mailing list.
 Write appropriate accessor and mutator functions for these member variables. Demonstrate an
 object of the CustomerData class in a simple program.
*/

#include <iostream>
using namespace std;

class CustomerData
{
protected:
    int customerNumber;
    bool mailingList;
    
public:
    //default constructor:
    CustomerData()
    {
        customerNumber = 000;
        mailingList = false; //default is false for yes/no on list.
    }
    
    //constructor w/ 2 variables:
    CustomerData(int number, bool list)
    {
        customerNumber = number;
        mailingList = list;
    }
    
    //getters:
    int getCustomerNumber()
    {
        return customerNumber;
    }
    bool getMailList()
    {
        return mailingList;
    }
    
    //setters:
    void setCustomerNumber(int num)
    {
        customerNumber = num;
    }
    void setMailingList(bool lis)
    {
        mailingList = lis;
    }
    
    //other member functions:
    void display()
    {
        cout << endl << "-------your information:--------" << endl;
        cout << "customer number: " << customerNumber << endl;
        cout << "do you wish to be on mailing list: " << mailingList << endl;
    }
}; //close class CustomerData.

//Driver: main function.
int main()
{
    //user input for number:
    int custNumInput;
    cout << "input your customer number:";
    cin >> custNumInput;
    
    //user input for bool"
    bool custMaiListInput;
    cout << "do you wish to be on out mailing list (type 1 for yes or 2 for no)";
    cin >> custMaiListInput;
    
    //create object w/ user inputs:
    CustomerData userOne(custNumInput, custMaiListInput);
    userOne.display();
    return 0;
} //close driver: main.

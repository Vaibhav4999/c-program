/*1. Create a class Person with data members as name, age, city. Write getters and setters for all the data 
members. Also add the display function. Create Default and Parameterized constructors. Create the 
object of this class in main method and invoke all the methods in that class.*/          
#include<stdio.h>
#include<iostream>
using namespace std;
class Person
{ 
    string name;
    int age;
    string city;
    public:
    void  setname()
    {
        name="vaibhav";
    }
    string getname()
    {
        this->name;
    }
    void  setage()
    {
        age = 26;
    }
    int getage()
    {
        this->age;
    }
    void  setcity()
    {
        city ="pune";
    }
    string getcity()
    {
        this->city;
    }
    void display()
    {
        cout<<"Name: "<<this->name<< "\nAge: "<<age<< "\nCity: "<<city<<endl;
    }
};

int main()
{
    Person p1;
    
    p1.setname();
    p1.getname();

    p1.setage();
    p1.getage();

    p1.setcity();
    p1.getcity(); 

    p1.display();
    
}

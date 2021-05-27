//2. Create a class Date with data members as dd, mm, yy. Write getters and setters for all the data members. Also add the display function. Create Default and Parameterized constructors. Create the object of this class in main method and invoke all the methods in that class. 
#include<stdio.h>
#include<iostream>
using namespace std;
class Date
{
    int dd;
    int mm;
    int yy;  
   public:
   Date()
   {
       this->dd = 0;
       this->mm = 0;
       this->yy = 0;
   }
   Date(int dd, int mm,int yy)
   {
       this->dd = dd;
       this->mm = mm;
       this->yy = yy;
   }
   void setdate()
   {
       dd = 04;
       mm = 05;
       yy = 2021;
   }
    void getdate()
   {
       this->dd;
       this->mm;
       this->yy;
   }
   void display()
   {
       cout<<" " <<dd<<" " <<mm<<" " <<yy<<endl;
   }
};
int main()
{
    Date d;
    d.setdate();
    d.getdate();
    d.display();
}

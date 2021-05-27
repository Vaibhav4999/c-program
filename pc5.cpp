/*5. Create a class ComplexNumber with data members real, imaginary. Create Default and 
Parameterized constructors. Write getters and setters for all the data members. Also add the display 
function. Create the object of this class in main method and invoke all the methods in that class.*/
#include<stdio.h>
#include<iostream>

using namespace std;

class Complex
{
    int real;
    int img;
    
    public:
    Complex()
    {
        this->real=0;
        this->img=0;
    }

    Complex(int r,int i)
    {
        this->real=r;
        this->img=i;
    }
    
    void setreal(int r)
    {
       this->real=r;
    }
    void setimg(int i)
    {
        this->img=i;
    }
    int getreal()
    {
        return this->real;
    }
    int getimg()
    { 
       return this->img;
    }
    void display()
    {
        cout<<"Real: "<<real<<"\nImaginary: "<<img<<endl;
    }
};
int main()
{
    Complex c(20,10);
    // c.setreal();
    // c.getreal();

    // c.setimg();
    // c.getimg();

    c.display();
}




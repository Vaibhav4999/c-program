
//4.Create a class Point with data members as x,y. Create Default and Parameterized constructors. Write getters and setters for all the data members. Also add the display function. Create the object of this class in main method and invoke all the methods in that class.

#include<stdio.h>
#include<iostream>
using namespace std;
class Point
{
    int x,y;   
 public:
    Point()
    {
        this->x=0;
        this->y=0;
    }
    Point(int x,int y)
    {
        this->x=x;
        this->y=y;
    }
    void setpoint()
    {
        x = 10;
        y = 20;
    }
    int getpoint()
    {
        this->x;
        this->y;
    }
    void display()
    {
        cout<<"X: "<<this->x<<"\nY: "<<this->y<<endl;
    }
};
int main()
{
    Point p1;
    p1.setpoint();
    p1.getpoint();

    p1.display();
}

//2. Write a C program to input angles of a triangle and check whether triangle is valid or not. 
#include<stdio.h>
int main()
{
    int x,y,z;
    printf("enter angles of triangle"); 
    scanf(" %d",&x);
    scanf(" %d",&y);
    scanf(" %d",&z);
    if(x+y+z==180)
        {  
             printf("triangle is valid");
        }
    else
        printf("traingle is not valid");
        return 0;
}
//20. Write a C program to calculate factorial of a number. 
#include<stdio.h>
void main()
{
    int x,i,f=1;
    printf("enter a no.");
    scanf("%d",&x);
    for(i=x;i>=1;i--)
    {
        f=f*i;
    }
    printf("%d",f);
}
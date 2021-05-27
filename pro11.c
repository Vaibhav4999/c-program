//11.Write a C program to print all natural numbers from 1 to n. - using while loop 
#include<stdio.h>
void main()
{
    int i=1,x;
    printf("enter a n no.");
    scanf("%d",&x);
    while(i<=x)
    {
        printf("%d\n",i);
        i++;
    }
}
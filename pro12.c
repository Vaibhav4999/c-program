//12. Write a C program to print all natural numbers in reverse (from n to 1). - using while loop 
#include<stdio.h>
void main()
{
    int i,x;
    printf("enter a n no.");
    scanf("%d",&x);
    while(x!=0)
    {
        printf("%d\n",x);
        x--;
    }
}
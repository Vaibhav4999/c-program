//23. Write a C program to check whether a number is Prime number or not. 
#include<stdio.h>
void main()
{
    int n,i,count=0;
    printf("enter a no.");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }
    if(count==2)
        printf("prime no.");
    else
        printf("not prime no.");
}
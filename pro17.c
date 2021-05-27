//17. Write a C program to check whether a number is palindrome or not. 
#include<stdio.h>
void main()
{
    int x,r,sum=0,temp;
    printf("enter a no.");
    scanf("%d",&x);
    temp=x;
    while (x>0)
    {
        r=x%10;
        sum=sum*10+r;
        x=x/10;
    }
    x=temp;
    if(x==sum)
        printf("palindrome");
    else
        printf("not a palindrom");
}
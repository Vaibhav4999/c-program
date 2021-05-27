//15. Write a C program to find first and last digit of a number
#include<stdio.h>
void main()
/*{
    int x,f,l;
    printf("enter a 2 digit no.");
    scanf("%d",&x);
    f=x/10;
    l=x%10;
    printf("f=%d l=%d",f,l);
}*/

// for 3 digit
{
    int x,a,f,l;
    printf("enter a 3 digit no");
    scanf("%d",&x);
    a=x/10;
    f=a/10;
    l=x%10;
    printf("f=%d l=%d",f,l);
}
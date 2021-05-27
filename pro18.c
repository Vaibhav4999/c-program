//18. Write a C program to find power of a number using for loop
#include<stdio.h>
void main()
{
    int x,y,i,p=1;
    printf("enter power value and base");
    scanf("%d%d",&x,&y);
    for(i=1;i<=y;i++)
    {
        p=p*x;
    }
    printf("power=%d",p);
}
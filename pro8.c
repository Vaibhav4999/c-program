//8. Write a C program to input month number and print number of days in that month.
#include<stdio.h>
void main()
{
    int x;
    printf("enter a month no. from 1 to 12:\n");
    scanf("%d",&x);
    if(x==1 || x==3|| x==5|| x==7|| x==8|| x==10|| x==12 )
        printf("31 days");
    else if(x==4|| x==6|| x==9|| x==11)
        printf("30 days");
    else if (x==2)
        printf("28 orr 29 days");
    else
        printf("enter a valid no from 1 to 12");
}
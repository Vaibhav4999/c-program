//14.write a program to count number of digits in a number
#include<stdio.h>
void main()
{
    int n;
    int count=0;
    printf("enter a number:");
    scanf("%d",&n);//5623
    while(n!=0)
    {
        n=n/10;//562 //56 // 5 //0 
        count++;//1//2//3//4
    }
    printf("\nthe no of digit in an integer:%d",count);
}
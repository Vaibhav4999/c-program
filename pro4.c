//4. Accept a 3 digit number and display its sum of digits.
#include<stdio.h>
void main()
{
    int num,a,b,c,d,sum;
    printf("enter a no.");
    scanf("%d",&num);
    a=num/10;
    b=num%10;
    c=a%10;
    d=a/10;
    sum=b+c+d;
    printf("sum=%d",sum);
}
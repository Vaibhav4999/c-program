//16. Write a C program to enter a number and print its reverse.
#include<stdio.h>
void main()
/*{
    int num,rev,a,b;
    printf("enter a 2 digit num");
    scanf("%d",&num);
    a=num%10;
    b=num/10;
    rev=(10*a)+(b);
    printf("reverse=%d",rev);
}*/

//for 3 digit no.
{
    int num,rev,a,b,c,d;
    printf("enter a 3 digit no");
    scanf("%d",&num);
    a=num%10;
    rev=100*a;
    b=num/10;
    c=b/10;
    d=b%10;
    rev=rev+(d*10)+c;
    printf("reverse=%d",rev);
}
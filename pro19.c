//19. Write a C program to find all factors of a number.
#include<stdio.h>
void main()
{
    int x,i;
    printf("enter a number");
    scanf("%d",&x);

    for(i=1; i<=x; i++)
    {
        if(x%i==0)
        printf("%d\n",i);
    }
}
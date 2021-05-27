//13.Write a C program to find sum of all even and odd numbers between 1 to n. 
#include<stdio.h>
void main()
{
    int n,i,sumeven=0,sumodd=0;
    printf("enter a n no.");
    scanf("%d",&n);
    for(i=0;i<=n;i=i+2)
    sumeven=sumeven+i;
        printf("sumeven=%d\n",sumeven);
    for(i=1;i<=n;i=i+2)
    sumodd=sumodd+i;
        printf("sumodd=%d",sumodd);
}
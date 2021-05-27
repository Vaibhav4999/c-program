//1. Find all odd and even no.'s in runtime array? 
#include<stdio.h>
void main()
{
    int a[10],i,num;
    printf("enter the size of an array:");
    scanf("%d",&num);
    printf("enter the elements:\n");
    for(i=0;i<num;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\neven no are:");
    for(i=0;i<num;i++)
    {
        if(a[i]%2==0)
        {
            printf("\n%d",a[i]);
        }
    }
    printf("\nodd no are:");
    for(i=0;i<num;i++)
    {
        if(a[i]%2!=0)
        {
            printf("\n%d",a[i]);
        }
    }
}
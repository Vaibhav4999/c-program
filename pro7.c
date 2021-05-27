//7. Write a C program to input week number and print week day.
#include<stdio.h>
void main()
{
    int x;
    printf("enter a week day no.");
    scanf("%d",&x);
    switch(x)
    {
        case 1:
            printf("monday\n");
            break;
        case 2:
            printf("tuesday\n");
            break;
        case 3:
            printf("wednesday\n");
            break;
        case 4:
            printf("thursday\n");
            break;
        case 5:
            printf("friday\n");
            break;
        case 6:
            printf("saturday\n");
            break;
        case 7:
            printf("sunday\n");
    }
}
//6. Write a C program to check whether a character is uppercase or lowercase alphabet. 
#include<stdio.h>
void main()
{
    char i;
    printf("enter an alphabet\n");
    scanf("%c",&i);
    if(i>='A'&& i<='Z')
        printf("uppercase");
    else if(i>='a'&& i<='z')
        printf("lowercase");
    else
        printf("character is not an alphabet");

}
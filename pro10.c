//10.Write a C program to invert the case of alphabet. 
#include<stdio.h>
int main()
{
    char a;
    printf("\nenter a character:");
    scanf("%c",&a);
    if(a>='A'&& a<='Z')
        printf("\n%c",(a+32));
    else if(a>='a'&& a<='z')
    printf("\n%c",(a-32));
    return 0;
}
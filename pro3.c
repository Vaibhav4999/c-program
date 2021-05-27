//3.accept a no & display its multiplication table
#include<stdio.h>
void main()
{
    int num,res;
    printf("enter a num.");
    scanf("%d",&num);
    printf("multiplication table:\n");
    int i;
    for(i=1;i<=10;i++)
     {
        res=(i*num);
        printf("%d\n",res);
   
     }
}
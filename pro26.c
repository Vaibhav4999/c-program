//26. Write a C program to check whether a number is Strong number or not. 
#include<stdio.h>
int Fun(int);
int main()
{
	int n;
	int sum=0;
	int rem;
	printf("enter the no:");
	scanf("%d",&n);
	int k=n;
	while(k!=0)
	{
		rem=k%10;
		int f= Fun(rem);
		k=k/10;	 
		sum=sum+f;
    }
  if(sum==n)
    {
      printf("is strong no");
    }
	else
	{
	 printf("is not strong no");  
    } 
} 
   int Fun(int rem)
    {
    	int fact=1;
   	for(int i=1;i<=rem;i++)
   	{
   		fact=fact*i;
	   }
	   return fact;
    }


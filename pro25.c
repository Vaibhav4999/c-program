//25. Write a C program to check whether a number is Perfect number or not.  
#include<stdio.h>
int main()
{
	int n,rem,sum=0;
	printf("enter the no:");
	scanf("%d",&n);
	for(int i=1;i<n;i++)
	{
		rem=n%i;
        if(rem==0)
		{
			sum=sum+i;
		}
	}
	if(n==sum)
	{
		printf("Is perfect no");
	}
	else
	 printf("Is not a perfect no");
}

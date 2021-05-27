//24. Write a C program to print all Prime numbers between 1 to n.  
#include<stdio.h>
int main()
{
	int n;
	printf("enter the no:");
	scanf("%d",&n);
	printf("The prime no are:");

for(int i=1;i<=n;i++)
{
	if (i%2!=0)
	{
		printf("%d \n",i);
	}
}
}


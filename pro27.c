 //27. Write a C program to print Fibonacci series up to n terms.
#include<stdio.h>
int main()
{
	int a=0,b=1;
	int n,c;
	printf("enter the last digit:");
	scanf("%d",&n);
	printf("fibonacci series is:"); 
	for(int i=1;i<=n;i++)
	{
		printf(" %d ",a);
		c=a+b;
		a=b;
		b=c;
	}
}

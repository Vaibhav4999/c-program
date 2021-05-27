//21. Write a C program to find HCF (GCD) of two numbers.
#include<stdio.h>
int main()
{
	int a,b,min,hcf=1;
	int i;
	printf("enter the value :");
	scanf("%d %d",&a,&b);
 // min= (a<b) ? a:b;
	for( i=1;i<=10 ;i++)
	{
      if(a%i==0 && b%i==0)
      {
      	hcf=i;
	  }
}
printf(" HCF of no is :%d",hcf);
}

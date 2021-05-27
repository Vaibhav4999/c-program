//9. Write a C program to count total number of notes in given amount. 
#include<stdio.h>

int a[20]={2000,1000,500,100,50,20,10,5,2,1};
void Money(int);
int main()
{
	int m;
	printf("enter the amount:");
	scanf("%d",&m);
	Money(m);
	}
	void Money(int m)
	{
		int temp,i;
		temp=m;
		for(i=0;i<20;i++)
		{
			printf("\n %d notes is:%d",a[i],temp/a[i]);
			temp=temp%a[i];
		}
	}

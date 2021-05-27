/*3: Using pointers write your own functions for the following:
a. String comparison b. String concatenate    
A]*/
#include<stdio.h>
int main()
{
	char s1[10],s2[20],*p1,*p2;
	int f=0;
	printf("enter the 1st string:");
	gets(s1);
	printf("enter the 2nd string:");
	gets(s2);
	
	p1=s1;
	p2=s2;
	while(*p1!='\0' || *p2!='\0')
	{
		if(*p1 != *p2)
		{
			f=1;
			break;
		}
		p1++;
		p2++;
	}
	if(f==0)
	printf("string are equal");
	else
	printf("string are not equal ");
}

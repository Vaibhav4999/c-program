//B]
#include<stdio.h>
int main()
{
	char s1[20],s2[30];
	int i,j,c=0;
	printf("enter the 1st string:");
	gets(s1);
	printf("enter the 2nd string:");
	gets(s2);
	for(i=0;s1[i]!='\0';i++)
	c++;
	for(i=c,j=0;s2[j]!='\0';i++,j++)
	{
		s1[i]=s2[j];
	}
	s1[i]='\0';
	printf("\n concatenated string=%s",s1);
}

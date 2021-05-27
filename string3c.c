//c]
#include<stdio.h>
void copy_string(char*,char*);
int main()
{
	char source[20],target[30];
	printf("enter the source string:");
	gets(source);
	printf("enter the target string:");
	gets(target);
	copy_string(target,source);
	printf("target string is:\%s\"\n",target);
}
void copy_string(char* target,char* source)
{
	while(*source)
	{
		*target= *source;
		source++;
		target++;
	}
	*target='\0';
}

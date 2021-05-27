#include<stdio.h>
int main()
{
	int n, i;
	char ch;
	do 
	{
	printf("\n\tEnter a no");
	scanf ("%d", &n);
	for (i = 1; i <= 10; i++) 
	{
		printf("\n\t%d*%d=%d", n, i,(n*i));
	}
	
	printf("\n\tDO u want to continue=(Y/N)");
	scanf("    %c",&ch);

	} while (ch == 'y');

	
	return 0;
}
//6. Enter data for one matrix. Find its Transpose & display result.  
#include<stdio.h>
int main()
{
	int i,m,j,n;
	int a[50][50];
	printf("enter the row no:");
	scanf("%d",&n);
	printf("enter the coloum no:");
	scanf("%d",&m);

	printf("enter the array element:");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d,%d",&a[i][j]);
		}
	}
	printf("matrix is:\n");
		for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("%d \t",a[i][j]);
		}
	     	printf("\n");
	}
		printf(" Transpose of matrix is:\n");
		for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("%d \t",a[j][i]);
		}
		printf("\n");
	}
}

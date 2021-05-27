//5.. Enter data for two matrices. Multiply them to store result in third matrix & display result.
#include<stdio.h>
int main()
{
	int i,j,k,n;
	printf("enter size:");
	scanf("%d",&n);
	int a[n][n], b[n][n] , c[n][n];
	printf("enter the 1st array element:");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d\t",&a[i][j]);
		}
		printf("\n");
	}
	printf("enter the 2nd array element:");
		for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d\t",&b[i][j]);
		}
		printf("\n");
	}
		for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
	       c[i][j]=0;
		}
	}
		for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			for(k=0;k<n;k++)
			{
				c[i][j] =c[i][j]+ a[i][k] * b[k][j];
			}
		}
	}
	printf("multiplication is \n");
		for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
	       printf("c[%d] [%d]= %d\n",i,j,c[i][j]);
		}
	}
}

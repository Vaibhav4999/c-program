//2. Find all prime no.'s in runtime array? 
#include<stdio.h>
int main()
{
	int arr[10],i,n,j,count;
	printf("enter the size of array:");
	scanf("%d",&n);
	printf("enter the element of array:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);	
	}
	printf("array is:");
	for(i=0;i<n;i++)
	{
		printf("\t%d",arr[i]);	
	}
	printf("\nall the prime no are:");
	for(i=0;i<n;i++)
	{
		count=0;
		for(j=2;j<arr[i];j++)
		{
			if(arr[i]%j==0)
			{
			count=1;
			break;
			}
		}
		if(count==0)
		{
		printf("\t%d",arr[i]);
		}
	}
	printf("\n");
}

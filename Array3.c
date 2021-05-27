/*3. Write a program to create an array of integers and perform following operations on that array like 
finding the sum, average, maximum and minimum number in that array. Accept the numbers of the 
array from user. */
//A]
/*#include<stdio.h>
int Maxarr(int[],int);
int main()
{
	int arr[10];
	int n,i,max;
	printf("enter the size of array:");
	scanf("%d",&n);
	printf("enter the element in array:");
	for(i=0;i<n;i++)
	{
	scanf("%d",&arr[i]);
    }
   max= Maxarr(arr,n);
    	printf(" %d is max element of array  ",max);
}
   int Maxarr(int arr[],int n)
    {
   int	max;
   for(int i=0;i<n;i++)
    	{
    	       if(arr[0]<arr[i])
    		{
    			arr[0]=arr[i];
			}
		}
		return arr[0];
	//	printf("max element of array is %d:",max);
	}
//B]
#include<stdio.h>
float Avgarr(int[],int);
int main()
{
	int arr[10];
	int n,i;
	float avg;
	printf("enter the size of array:");
	scanf("%d",&n);
	printf("enter the element of array:");
	for(i=0;i<n;i++)
	{
	scanf("%d",&arr[i]);
}
	avg=Avgarr(arr,n);	
	printf("The avg of arr:%f",avg);
}
float Avgarr(int arr[],int n)
{
	float avg=0;
	float sum=0;
	for(int i=0;i<n;i++)
	{
	 sum=sum+arr[i];
	 avg=sum/n;
	}
	return avg;
}
   
/*C]
#include<stdio.h>
int Minarr(int[],int);
int main()
{
	int arr[100];
	int n,i,min;
	printf("enter the size of array:");
	scanf("%d",&n);
            printf("enter the element of array: ");
	for(i=0;i<n;i++)
	{
	scanf("%d",&arr[i]);
    }
    min=Minarr(arr,n);
    printf("The min no is: %d",min);
}
	int Minarr(int arr[],int n)
   {
   	int min;
   	for(int i=0;i<n;i++)
   	{
   		if(arr[0]>arr[i])
   		{
   			arr[0]=arr[i];
		   }
	   }
	   return arr[0];
   }
D]*/
#include<stdio.h>
int Sum(int[],int);

int main()
{
	int arr[100];
     int n,i,sum;	
	printf("enter the size of array:");
	scanf("%d",&n);
	printf("enter the element in array:");
	for( i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
sum=Sum(arr,n);
printf("sum of array is:%d",sum);
}

int Sum(int arr[],int n)
{
	int sum=0;
	for(int i=0;i<n;i++)
	{
sum=sum+arr[i];
}
 return sum;
}


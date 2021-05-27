//5: Write a program to cyclically permute a string one character at a time.
#include <stdio.h>
#include <stdlib.h>
void print(int* a,int n){
	printf("printing ........\n");
	for(int i=0;i<n;i++)
		printf("%d ",a[i]);
	printf("\n");
}
int* cyclicallyPermute(int* a,int n){
	int temp=a[0];
	for(int i=0;i<n;i++)
    {
		if(i==n-1) 
			a[i]=temp;   
		else
		a[i]=a[i+1];
	}
	return a;    
}
int main()
{   
	int n;
	printf("enter array length,n: ");
	scanf("%d",&n);
	int* a=(int*)(malloc(sizeof(int)*n));
	printf("enter elements: \n");
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("array before permutation\n");
	print(a,n);
	a=cyclicallyPermute(a,n);
	printf("array after permutation\n");
	print(a,n);
	return 0;
}

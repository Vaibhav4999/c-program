//5. Accept a number and display whether its an Armstrong number. 
#include<stdio.h>
int main()
{
	int num,c,rem;
	int sum=0;
	printf("enter the no:");
	scanf("%d",&num);
    int temp=num;
	while(num>0)
	{
		rem=num%10;
		c=rem*rem*rem;
	sum=sum+c;
	num=num/10;
}
//	printf("the sum is:%d",sum);
     num=temp;
	
	if(num==sum)
	  printf("The num is armstrong no:");
	 else
	 printf("is not armstrong no:");
}

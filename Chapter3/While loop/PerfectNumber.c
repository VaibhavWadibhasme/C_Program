/*
	Write a program to check whether a given number is perfect number or not.
	
	output:
	Input the Number: 56
	The positive divisor: 1 2 4 7 8 14 28
	The sum of the divisor is:64
	So, The number is not Perfect.
*/
#include <stdio.h>

int main()
{
	int n,i=1,sum=0;
	printf("Input the Number: ");
	scanf("%d",&n);
	printf("The positive divisor: ");
	while(i<=(n/2))
	{
		if(n%i==0)
		{
			
			printf("%d ",i);
			sum=sum+i;
		}
		i++;
	}
	if(n==sum)
		printf("\nThe sum of the divisor is:%d\nSo, The number is Perfect.",sum);
	else
		printf("\nThe sum of the divisor is:%d\nSo, The number is not Perfect.",sum);
	return 0;
}

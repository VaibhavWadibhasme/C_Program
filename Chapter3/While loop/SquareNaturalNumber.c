/*
	Write a program to display n terms of square natural number and their sum.
	
	output:
	Input the number of terms: 5
	The square natural upto 5 term are : 1 4 9 16 25
	The Sum of Square Natural Number upto 5 terms =55
*/
#include <stdio.h>

int main()
{
	int n, i=1,sum=0;
	printf("Input the number of terms: ");
	scanf("%d",&n);
	printf("The square natural upto 5 term are : ");
	while(i<=n)
	{
		printf("%d ",(i*i));
		sum=sum+(i*i);
		i++;
	}
	printf("\nThe Sum of Square Natural Number upto 5 terms =%d",sum);
	return 0;

}
